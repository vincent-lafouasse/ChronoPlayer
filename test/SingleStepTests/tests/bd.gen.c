#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_BD, _BD_0000) {
    const struct CPU_State initial_cpu = {.pc=0x919b, .a=0x16, .x=0xf2, .y=0xf8, .sp=0x42, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x919b, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x919c, .a=0x16, .x=0xf2, .y=0xf8, .sp=0xf2, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x919b, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x919b, .value=0xbd, .type=IO_READ},
        {.addr=0x919c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0001) {
    const struct CPU_State initial_cpu = {.pc=0x3ae1, .a=0x96, .x=0x7d, .y=0x52, .sp=0x49, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x3ae1, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x3ae2, .a=0x96, .x=0x7d, .y=0x52, .sp=0x7d, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x3ae1, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x3ae1, .value=0xbd, .type=IO_READ},
        {.addr=0x3ae2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0002) {
    const struct CPU_State initial_cpu = {.pc=0x672c, .a=0xe1, .x=0x21, .y=0xf4, .sp=0x26, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x672c, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x672d, .a=0xe1, .x=0x21, .y=0xf4, .sp=0x21, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x672c, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x672c, .value=0xbd, .type=IO_READ},
        {.addr=0x672d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0003) {
    const struct CPU_State initial_cpu = {.pc=0x4620, .a=0x94, .x=0xfa, .y=0x82, .sp=0xbd, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x4620, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x4621, .a=0x94, .x=0xfa, .y=0x82, .sp=0xfa, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x4620, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x4620, .value=0xbd, .type=IO_READ},
        {.addr=0x4621, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0004) {
    const struct CPU_State initial_cpu = {.pc=0x1244, .a=0x80, .x=0xa6, .y=0x0c, .sp=0xc1, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x1244, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x1245, .a=0x80, .x=0xa6, .y=0x0c, .sp=0xa6, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x1244, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x1244, .value=0xbd, .type=IO_READ},
        {.addr=0x1245, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0005) {
    const struct CPU_State initial_cpu = {.pc=0xc524, .a=0xfc, .x=0x29, .y=0xe0, .sp=0x75, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xc524, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xc525, .a=0xfc, .x=0x29, .y=0xe0, .sp=0x29, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0xc524, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xc524, .value=0xbd, .type=IO_READ},
        {.addr=0xc525, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0006) {
    const struct CPU_State initial_cpu = {.pc=0x0e38, .a=0x2e, .x=0x58, .y=0xae, .sp=0x1e, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x0e38, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x0e39, .a=0x2e, .x=0x58, .y=0xae, .sp=0x58, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x0e38, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x0e38, .value=0xbd, .type=IO_READ},
        {.addr=0x0e39, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0007) {
    const struct CPU_State initial_cpu = {.pc=0x0b79, .a=0x3e, .x=0x08, .y=0x04, .sp=0xd1, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x0b79, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x0b7a, .a=0x3e, .x=0x08, .y=0x04, .sp=0x08, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x0b79, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x0b79, .value=0xbd, .type=IO_READ},
        {.addr=0x0b7a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0008) {
    const struct CPU_State initial_cpu = {.pc=0xbf91, .a=0x67, .x=0x48, .y=0xf7, .sp=0x1c, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xbf91, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xbf92, .a=0x67, .x=0x48, .y=0xf7, .sp=0x48, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0xbf91, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xbf91, .value=0xbd, .type=IO_READ},
        {.addr=0xbf92, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0009) {
    const struct CPU_State initial_cpu = {.pc=0xcc8d, .a=0x4d, .x=0xd4, .y=0x6c, .sp=0xfa, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xcc8d, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xcc8e, .a=0x4d, .x=0xd4, .y=0x6c, .sp=0xd4, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xcc8d, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xcc8d, .value=0xbd, .type=IO_READ},
        {.addr=0xcc8e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_000A) {
    const struct CPU_State initial_cpu = {.pc=0xbd65, .a=0xb2, .x=0xd5, .y=0xf0, .sp=0x07, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xbd65, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xbd66, .a=0xb2, .x=0xd5, .y=0xf0, .sp=0xd5, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xbd65, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xbd65, .value=0xbd, .type=IO_READ},
        {.addr=0xbd66, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_000B) {
    const struct CPU_State initial_cpu = {.pc=0xa7fd, .a=0x88, .x=0xcf, .y=0xe3, .sp=0xd6, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xa7fd, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xa7fe, .a=0x88, .x=0xcf, .y=0xe3, .sp=0xcf, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0xa7fd, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xa7fd, .value=0xbd, .type=IO_READ},
        {.addr=0xa7fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_000C) {
    const struct CPU_State initial_cpu = {.pc=0x4a5a, .a=0x8c, .x=0x53, .y=0x97, .sp=0xe5, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x4a5a, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x4a5b, .a=0x8c, .x=0x53, .y=0x97, .sp=0x53, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x4a5a, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x4a5a, .value=0xbd, .type=IO_READ},
        {.addr=0x4a5b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_000D) {
    const struct CPU_State initial_cpu = {.pc=0xf120, .a=0xfd, .x=0x4d, .y=0x1e, .sp=0xc9, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xf120, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xf121, .a=0xfd, .x=0x4d, .y=0x1e, .sp=0x4d, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0xf120, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xf120, .value=0xbd, .type=IO_READ},
        {.addr=0xf121, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_000E) {
    const struct CPU_State initial_cpu = {.pc=0x6993, .a=0x91, .x=0x9d, .y=0xd5, .sp=0x2c, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x6993, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x6994, .a=0x91, .x=0x9d, .y=0xd5, .sp=0x9d, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x6993, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x6993, .value=0xbd, .type=IO_READ},
        {.addr=0x6994, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_000F) {
    const struct CPU_State initial_cpu = {.pc=0xaa75, .a=0xec, .x=0x67, .y=0xa6, .sp=0x62, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xaa75, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xaa76, .a=0xec, .x=0x67, .y=0xa6, .sp=0x67, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xaa75, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xaa75, .value=0xbd, .type=IO_READ},
        {.addr=0xaa76, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0010) {
    const struct CPU_State initial_cpu = {.pc=0xb102, .a=0x9c, .x=0xc3, .y=0x1a, .sp=0xb4, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xb102, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xb103, .a=0x9c, .x=0xc3, .y=0x1a, .sp=0xc3, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0xb102, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xb102, .value=0xbd, .type=IO_READ},
        {.addr=0xb103, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0011) {
    const struct CPU_State initial_cpu = {.pc=0x8777, .a=0x54, .x=0x02, .y=0xfb, .sp=0x0b, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x8777, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x8778, .a=0x54, .x=0x02, .y=0xfb, .sp=0x02, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x8777, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x8777, .value=0xbd, .type=IO_READ},
        {.addr=0x8778, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0012) {
    const struct CPU_State initial_cpu = {.pc=0xb365, .a=0x41, .x=0xd5, .y=0xc4, .sp=0x3d, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xb365, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xb366, .a=0x41, .x=0xd5, .y=0xc4, .sp=0xd5, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xb365, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xb365, .value=0xbd, .type=IO_READ},
        {.addr=0xb366, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0013) {
    const struct CPU_State initial_cpu = {.pc=0xa9aa, .a=0xa7, .x=0x51, .y=0x72, .sp=0x7e, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xa9aa, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xa9ab, .a=0xa7, .x=0x51, .y=0x72, .sp=0x51, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0xa9aa, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xa9aa, .value=0xbd, .type=IO_READ},
        {.addr=0xa9ab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0014) {
    const struct CPU_State initial_cpu = {.pc=0xbff3, .a=0x3b, .x=0xb9, .y=0x8a, .sp=0xb3, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xbff3, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xbff4, .a=0x3b, .x=0xb9, .y=0x8a, .sp=0xb9, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xbff3, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xbff3, .value=0xbd, .type=IO_READ},
        {.addr=0xbff4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0015) {
    const struct CPU_State initial_cpu = {.pc=0xbde5, .a=0x68, .x=0x7d, .y=0xa1, .sp=0xd8, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xbde5, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xbde6, .a=0x68, .x=0x7d, .y=0xa1, .sp=0x7d, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0xbde5, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xbde5, .value=0xbd, .type=IO_READ},
        {.addr=0xbde6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0016) {
    const struct CPU_State initial_cpu = {.pc=0xcab8, .a=0xa6, .x=0x4a, .y=0xb8, .sp=0x83, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xcab8, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xcab9, .a=0xa6, .x=0x4a, .y=0xb8, .sp=0x4a, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0xcab8, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xcab8, .value=0xbd, .type=IO_READ},
        {.addr=0xcab9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0017) {
    const struct CPU_State initial_cpu = {.pc=0xbeee, .a=0xbb, .x=0x53, .y=0x90, .sp=0x41, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xbeee, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xbeef, .a=0xbb, .x=0x53, .y=0x90, .sp=0x53, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0xbeee, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xbeee, .value=0xbd, .type=IO_READ},
        {.addr=0xbeef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0018) {
    const struct CPU_State initial_cpu = {.pc=0xb388, .a=0x03, .x=0x8b, .y=0x32, .sp=0x6d, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xb388, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xb389, .a=0x03, .x=0x8b, .y=0x32, .sp=0x8b, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0xb388, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xb388, .value=0xbd, .type=IO_READ},
        {.addr=0xb389, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0019) {
    const struct CPU_State initial_cpu = {.pc=0xe330, .a=0x7f, .x=0xfb, .y=0xe9, .sp=0xd9, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xe330, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xe331, .a=0x7f, .x=0xfb, .y=0xe9, .sp=0xfb, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xe330, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xe330, .value=0xbd, .type=IO_READ},
        {.addr=0xe331, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_001A) {
    const struct CPU_State initial_cpu = {.pc=0x9e5b, .a=0x4d, .x=0x66, .y=0x8d, .sp=0x47, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x9e5b, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x9e5c, .a=0x4d, .x=0x66, .y=0x8d, .sp=0x66, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x9e5b, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x9e5b, .value=0xbd, .type=IO_READ},
        {.addr=0x9e5c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_001B) {
    const struct CPU_State initial_cpu = {.pc=0x1f68, .a=0xcf, .x=0xda, .y=0x67, .sp=0x6d, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x1f68, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x1f69, .a=0xcf, .x=0xda, .y=0x67, .sp=0xda, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x1f68, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x1f68, .value=0xbd, .type=IO_READ},
        {.addr=0x1f69, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_001C) {
    const struct CPU_State initial_cpu = {.pc=0x31b9, .a=0x9e, .x=0xd6, .y=0x2b, .sp=0x7d, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x31b9, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x31ba, .a=0x9e, .x=0xd6, .y=0x2b, .sp=0xd6, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x31b9, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x31b9, .value=0xbd, .type=IO_READ},
        {.addr=0x31ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_001D) {
    const struct CPU_State initial_cpu = {.pc=0x2d8f, .a=0x07, .x=0x1d, .y=0xbe, .sp=0x03, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x2d8f, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x2d90, .a=0x07, .x=0x1d, .y=0xbe, .sp=0x1d, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x2d8f, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x2d8f, .value=0xbd, .type=IO_READ},
        {.addr=0x2d90, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_001E) {
    const struct CPU_State initial_cpu = {.pc=0xbd1a, .a=0x6f, .x=0x5d, .y=0x14, .sp=0xa8, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0xbd1a, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xbd1b, .a=0x6f, .x=0x5d, .y=0x14, .sp=0x5d, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0xbd1a, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xbd1a, .value=0xbd, .type=IO_READ},
        {.addr=0xbd1b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_001F) {
    const struct CPU_State initial_cpu = {.pc=0x7e59, .a=0xb9, .x=0x42, .y=0x31, .sp=0xdd, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x7e59, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x7e5a, .a=0xb9, .x=0x42, .y=0x31, .sp=0x42, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x7e59, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x7e59, .value=0xbd, .type=IO_READ},
        {.addr=0x7e5a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0020) {
    const struct CPU_State initial_cpu = {.pc=0x840f, .a=0x34, .x=0x6f, .y=0x33, .sp=0x7b, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x840f, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x8410, .a=0x34, .x=0x6f, .y=0x33, .sp=0x6f, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x840f, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x840f, .value=0xbd, .type=IO_READ},
        {.addr=0x8410, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0021) {
    const struct CPU_State initial_cpu = {.pc=0x03f5, .a=0x06, .x=0x61, .y=0xd6, .sp=0x6b, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x03f5, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x03f6, .a=0x06, .x=0x61, .y=0xd6, .sp=0x61, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x03f5, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x03f5, .value=0xbd, .type=IO_READ},
        {.addr=0x03f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0022) {
    const struct CPU_State initial_cpu = {.pc=0x471b, .a=0x61, .x=0xe0, .y=0x6c, .sp=0xa3, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x471b, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x471c, .a=0x61, .x=0xe0, .y=0x6c, .sp=0xe0, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x471b, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x471b, .value=0xbd, .type=IO_READ},
        {.addr=0x471c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0023) {
    const struct CPU_State initial_cpu = {.pc=0xf509, .a=0xdc, .x=0x1a, .y=0x63, .sp=0xd4, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xf509, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xf50a, .a=0xdc, .x=0x1a, .y=0x63, .sp=0x1a, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0xf509, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xf509, .value=0xbd, .type=IO_READ},
        {.addr=0xf50a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0024) {
    const struct CPU_State initial_cpu = {.pc=0x469a, .a=0xe3, .x=0xb7, .y=0x93, .sp=0xd8, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x469a, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x469b, .a=0xe3, .x=0xb7, .y=0x93, .sp=0xb7, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x469a, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x469a, .value=0xbd, .type=IO_READ},
        {.addr=0x469b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0025) {
    const struct CPU_State initial_cpu = {.pc=0xe6e6, .a=0x1f, .x=0xa4, .y=0x0e, .sp=0xc1, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xe6e6, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xe6e7, .a=0x1f, .x=0xa4, .y=0x0e, .sp=0xa4, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xe6e6, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xe6e6, .value=0xbd, .type=IO_READ},
        {.addr=0xe6e7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0026) {
    const struct CPU_State initial_cpu = {.pc=0xc04c, .a=0x82, .x=0x1b, .y=0xee, .sp=0x1a, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0xc04c, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xc04d, .a=0x82, .x=0x1b, .y=0xee, .sp=0x1b, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xc04c, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xc04c, .value=0xbd, .type=IO_READ},
        {.addr=0xc04d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0027) {
    const struct CPU_State initial_cpu = {.pc=0x3652, .a=0xd3, .x=0x30, .y=0xce, .sp=0x92, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x3652, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x3653, .a=0xd3, .x=0x30, .y=0xce, .sp=0x30, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x3652, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x3652, .value=0xbd, .type=IO_READ},
        {.addr=0x3653, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0028) {
    const struct CPU_State initial_cpu = {.pc=0x2bf7, .a=0x05, .x=0x36, .y=0xbf, .sp=0x6c, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x2bf7, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x2bf8, .a=0x05, .x=0x36, .y=0xbf, .sp=0x36, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x2bf7, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x2bf7, .value=0xbd, .type=IO_READ},
        {.addr=0x2bf8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0029) {
    const struct CPU_State initial_cpu = {.pc=0x2016, .a=0xe2, .x=0x70, .y=0x3d, .sp=0xaa, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x2016, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x2017, .a=0xe2, .x=0x70, .y=0x3d, .sp=0x70, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x2016, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x2016, .value=0xbd, .type=IO_READ},
        {.addr=0x2017, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_002A) {
    const struct CPU_State initial_cpu = {.pc=0xd8d0, .a=0xf5, .x=0xec, .y=0xb0, .sp=0x02, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xd8d0, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xd8d1, .a=0xf5, .x=0xec, .y=0xb0, .sp=0xec, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0xd8d0, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xd8d0, .value=0xbd, .type=IO_READ},
        {.addr=0xd8d1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_002B) {
    const struct CPU_State initial_cpu = {.pc=0x1566, .a=0x2a, .x=0x83, .y=0xfd, .sp=0xe6, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x1566, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x1567, .a=0x2a, .x=0x83, .y=0xfd, .sp=0x83, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x1566, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x1566, .value=0xbd, .type=IO_READ},
        {.addr=0x1567, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_002C) {
    const struct CPU_State initial_cpu = {.pc=0xbdd6, .a=0x67, .x=0x08, .y=0x10, .sp=0x57, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xbdd6, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xbdd7, .a=0x67, .x=0x08, .y=0x10, .sp=0x08, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xbdd6, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xbdd6, .value=0xbd, .type=IO_READ},
        {.addr=0xbdd7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_002D) {
    const struct CPU_State initial_cpu = {.pc=0x57f3, .a=0xda, .x=0x7d, .y=0x8f, .sp=0xf9, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x57f3, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x57f4, .a=0xda, .x=0x7d, .y=0x8f, .sp=0x7d, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x57f3, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x57f3, .value=0xbd, .type=IO_READ},
        {.addr=0x57f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_002E) {
    const struct CPU_State initial_cpu = {.pc=0xc252, .a=0xec, .x=0xf4, .y=0xac, .sp=0xd8, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xc252, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xc253, .a=0xec, .x=0xf4, .y=0xac, .sp=0xf4, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xc252, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xc252, .value=0xbd, .type=IO_READ},
        {.addr=0xc253, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_002F) {
    const struct CPU_State initial_cpu = {.pc=0x6793, .a=0xc4, .x=0x0b, .y=0x70, .sp=0x6a, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x6793, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x6794, .a=0xc4, .x=0x0b, .y=0x70, .sp=0x0b, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x6793, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x6793, .value=0xbd, .type=IO_READ},
        {.addr=0x6794, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0030) {
    const struct CPU_State initial_cpu = {.pc=0x91f4, .a=0xa3, .x=0x70, .y=0x46, .sp=0xca, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x91f4, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x91f5, .a=0xa3, .x=0x70, .y=0x46, .sp=0x70, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x91f4, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x91f4, .value=0xbd, .type=IO_READ},
        {.addr=0x91f5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0031) {
    const struct CPU_State initial_cpu = {.pc=0xf223, .a=0x8f, .x=0x46, .y=0x95, .sp=0x20, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xf223, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xf224, .a=0x8f, .x=0x46, .y=0x95, .sp=0x46, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0xf223, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xf223, .value=0xbd, .type=IO_READ},
        {.addr=0xf224, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0032) {
    const struct CPU_State initial_cpu = {.pc=0x5540, .a=0xbc, .x=0xaa, .y=0x0c, .sp=0xa3, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x5540, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x5541, .a=0xbc, .x=0xaa, .y=0x0c, .sp=0xaa, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x5540, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x5540, .value=0xbd, .type=IO_READ},
        {.addr=0x5541, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0033) {
    const struct CPU_State initial_cpu = {.pc=0xa331, .a=0x7d, .x=0x61, .y=0x2f, .sp=0x0a, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xa331, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xa332, .a=0x7d, .x=0x61, .y=0x2f, .sp=0x61, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xa331, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xa331, .value=0xbd, .type=IO_READ},
        {.addr=0xa332, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0034) {
    const struct CPU_State initial_cpu = {.pc=0xa838, .a=0x07, .x=0xce, .y=0x55, .sp=0x7e, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xa838, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xa839, .a=0x07, .x=0xce, .y=0x55, .sp=0xce, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xa838, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xa838, .value=0xbd, .type=IO_READ},
        {.addr=0xa839, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0035) {
    const struct CPU_State initial_cpu = {.pc=0x5921, .a=0xd4, .x=0x55, .y=0x31, .sp=0x45, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x5921, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x5922, .a=0xd4, .x=0x55, .y=0x31, .sp=0x55, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x5921, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x5921, .value=0xbd, .type=IO_READ},
        {.addr=0x5922, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0036) {
    const struct CPU_State initial_cpu = {.pc=0x8808, .a=0x07, .x=0xf8, .y=0x46, .sp=0xaf, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x8808, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x8809, .a=0x07, .x=0xf8, .y=0x46, .sp=0xf8, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x8808, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x8808, .value=0xbd, .type=IO_READ},
        {.addr=0x8809, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0037) {
    const struct CPU_State initial_cpu = {.pc=0xf4e1, .a=0xb6, .x=0x13, .y=0xa7, .sp=0x75, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xf4e1, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xf4e2, .a=0xb6, .x=0x13, .y=0xa7, .sp=0x13, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0xf4e1, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xf4e1, .value=0xbd, .type=IO_READ},
        {.addr=0xf4e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0038) {
    const struct CPU_State initial_cpu = {.pc=0x53f5, .a=0x5d, .x=0x42, .y=0xed, .sp=0xe2, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x53f5, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x53f6, .a=0x5d, .x=0x42, .y=0xed, .sp=0x42, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x53f5, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x53f5, .value=0xbd, .type=IO_READ},
        {.addr=0x53f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0039) {
    const struct CPU_State initial_cpu = {.pc=0x77a1, .a=0xbe, .x=0x55, .y=0x78, .sp=0x02, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x77a1, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x77a2, .a=0xbe, .x=0x55, .y=0x78, .sp=0x55, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x77a1, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x77a1, .value=0xbd, .type=IO_READ},
        {.addr=0x77a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_003A) {
    const struct CPU_State initial_cpu = {.pc=0x0e38, .a=0xc0, .x=0x07, .y=0x99, .sp=0x32, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x0e38, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x0e39, .a=0xc0, .x=0x07, .y=0x99, .sp=0x07, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x0e38, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x0e38, .value=0xbd, .type=IO_READ},
        {.addr=0x0e39, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_003B) {
    const struct CPU_State initial_cpu = {.pc=0x34e0, .a=0xde, .x=0x72, .y=0x39, .sp=0xec, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x34e0, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x34e1, .a=0xde, .x=0x72, .y=0x39, .sp=0x72, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x34e0, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x34e0, .value=0xbd, .type=IO_READ},
        {.addr=0x34e1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_003C) {
    const struct CPU_State initial_cpu = {.pc=0xa5eb, .a=0xe1, .x=0x22, .y=0xf5, .sp=0x8c, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0xa5eb, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xa5ec, .a=0xe1, .x=0x22, .y=0xf5, .sp=0x22, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xa5eb, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xa5eb, .value=0xbd, .type=IO_READ},
        {.addr=0xa5ec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_003D) {
    const struct CPU_State initial_cpu = {.pc=0x43da, .a=0xb9, .x=0xa1, .y=0x75, .sp=0xd1, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x43da, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x43db, .a=0xb9, .x=0xa1, .y=0x75, .sp=0xa1, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x43da, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x43da, .value=0xbd, .type=IO_READ},
        {.addr=0x43db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_003E) {
    const struct CPU_State initial_cpu = {.pc=0xa7cb, .a=0x08, .x=0xc1, .y=0x9a, .sp=0xd9, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xa7cb, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xa7cc, .a=0x08, .x=0xc1, .y=0x9a, .sp=0xc1, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0xa7cb, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xa7cb, .value=0xbd, .type=IO_READ},
        {.addr=0xa7cc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_003F) {
    const struct CPU_State initial_cpu = {.pc=0x38e3, .a=0x3b, .x=0xb9, .y=0x5a, .sp=0xd8, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x38e3, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x38e4, .a=0x3b, .x=0xb9, .y=0x5a, .sp=0xb9, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x38e3, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x38e3, .value=0xbd, .type=IO_READ},
        {.addr=0x38e4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0040) {
    const struct CPU_State initial_cpu = {.pc=0x3eba, .a=0x89, .x=0xe4, .y=0x01, .sp=0xe8, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x3eba, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x3ebb, .a=0x89, .x=0xe4, .y=0x01, .sp=0xe4, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x3eba, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x3eba, .value=0xbd, .type=IO_READ},
        {.addr=0x3ebb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0041) {
    const struct CPU_State initial_cpu = {.pc=0x27ae, .a=0x06, .x=0xf3, .y=0x48, .sp=0xc5, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x27ae, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x27af, .a=0x06, .x=0xf3, .y=0x48, .sp=0xf3, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x27ae, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x27ae, .value=0xbd, .type=IO_READ},
        {.addr=0x27af, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0042) {
    const struct CPU_State initial_cpu = {.pc=0x662f, .a=0x31, .x=0x26, .y=0xfe, .sp=0x6b, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x662f, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x6630, .a=0x31, .x=0x26, .y=0xfe, .sp=0x26, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x662f, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x662f, .value=0xbd, .type=IO_READ},
        {.addr=0x6630, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0043) {
    const struct CPU_State initial_cpu = {.pc=0xaec8, .a=0xe8, .x=0xbb, .y=0x0d, .sp=0x5d, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xaec8, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xaec9, .a=0xe8, .x=0xbb, .y=0x0d, .sp=0xbb, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xaec8, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xaec8, .value=0xbd, .type=IO_READ},
        {.addr=0xaec9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0044) {
    const struct CPU_State initial_cpu = {.pc=0x39a0, .a=0x08, .x=0x0e, .y=0x6d, .sp=0xa3, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x39a0, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x39a1, .a=0x08, .x=0x0e, .y=0x6d, .sp=0x0e, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x39a0, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x39a0, .value=0xbd, .type=IO_READ},
        {.addr=0x39a1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0045) {
    const struct CPU_State initial_cpu = {.pc=0x67e9, .a=0xb0, .x=0x9c, .y=0x36, .sp=0x71, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x67e9, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x67ea, .a=0xb0, .x=0x9c, .y=0x36, .sp=0x9c, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x67e9, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x67e9, .value=0xbd, .type=IO_READ},
        {.addr=0x67ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0046) {
    const struct CPU_State initial_cpu = {.pc=0x8256, .a=0xc4, .x=0x46, .y=0x5c, .sp=0x0a, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x8256, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x8257, .a=0xc4, .x=0x46, .y=0x5c, .sp=0x46, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x8256, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x8256, .value=0xbd, .type=IO_READ},
        {.addr=0x8257, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0047) {
    const struct CPU_State initial_cpu = {.pc=0x0495, .a=0xaf, .x=0xb3, .y=0x0d, .sp=0xc2, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x0495, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x0496, .a=0xaf, .x=0xb3, .y=0x0d, .sp=0xb3, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x0495, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x0495, .value=0xbd, .type=IO_READ},
        {.addr=0x0496, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0048) {
    const struct CPU_State initial_cpu = {.pc=0x2125, .a=0x1b, .x=0xec, .y=0x86, .sp=0x0f, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x2125, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x2126, .a=0x1b, .x=0xec, .y=0x86, .sp=0xec, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x2125, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x2125, .value=0xbd, .type=IO_READ},
        {.addr=0x2126, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0049) {
    const struct CPU_State initial_cpu = {.pc=0x85d4, .a=0x7e, .x=0x9e, .y=0xd2, .sp=0x6e, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x85d4, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x85d5, .a=0x7e, .x=0x9e, .y=0xd2, .sp=0x9e, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x85d4, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x85d4, .value=0xbd, .type=IO_READ},
        {.addr=0x85d5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_004A) {
    const struct CPU_State initial_cpu = {.pc=0x49f8, .a=0x97, .x=0xf7, .y=0xb9, .sp=0x8d, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x49f8, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x49f9, .a=0x97, .x=0xf7, .y=0xb9, .sp=0xf7, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x49f8, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x49f8, .value=0xbd, .type=IO_READ},
        {.addr=0x49f9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_004B) {
    const struct CPU_State initial_cpu = {.pc=0xb190, .a=0xe0, .x=0x00, .y=0xaf, .sp=0xf0, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xb190, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xb191, .a=0xe0, .x=0x00, .y=0xaf, .sp=0x00, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xb190, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xb190, .value=0xbd, .type=IO_READ},
        {.addr=0xb191, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_004C) {
    const struct CPU_State initial_cpu = {.pc=0x067a, .a=0x6e, .x=0x0c, .y=0x59, .sp=0x22, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x067a, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x067b, .a=0x6e, .x=0x0c, .y=0x59, .sp=0x0c, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x067a, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x067a, .value=0xbd, .type=IO_READ},
        {.addr=0x067b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_004D) {
    const struct CPU_State initial_cpu = {.pc=0x7cc9, .a=0x8e, .x=0x67, .y=0x38, .sp=0x75, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x7cc9, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x7cca, .a=0x8e, .x=0x67, .y=0x38, .sp=0x67, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x7cc9, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x7cc9, .value=0xbd, .type=IO_READ},
        {.addr=0x7cca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_004E) {
    const struct CPU_State initial_cpu = {.pc=0xaa53, .a=0x70, .x=0x4c, .y=0x93, .sp=0x4d, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xaa53, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xaa54, .a=0x70, .x=0x4c, .y=0x93, .sp=0x4c, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xaa53, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xaa53, .value=0xbd, .type=IO_READ},
        {.addr=0xaa54, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_004F) {
    const struct CPU_State initial_cpu = {.pc=0xc988, .a=0x19, .x=0x98, .y=0xef, .sp=0xb5, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xc988, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xc989, .a=0x19, .x=0x98, .y=0xef, .sp=0x98, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0xc988, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xc988, .value=0xbd, .type=IO_READ},
        {.addr=0xc989, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0050) {
    const struct CPU_State initial_cpu = {.pc=0x9f2c, .a=0x03, .x=0x39, .y=0x75, .sp=0x99, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x9f2c, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x9f2d, .a=0x03, .x=0x39, .y=0x75, .sp=0x39, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x9f2c, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x9f2c, .value=0xbd, .type=IO_READ},
        {.addr=0x9f2d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0051) {
    const struct CPU_State initial_cpu = {.pc=0xf8af, .a=0xfd, .x=0x7f, .y=0xa7, .sp=0xf5, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xf8af, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xf8b0, .a=0xfd, .x=0x7f, .y=0xa7, .sp=0x7f, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0xf8af, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xf8af, .value=0xbd, .type=IO_READ},
        {.addr=0xf8b0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0052) {
    const struct CPU_State initial_cpu = {.pc=0x6aeb, .a=0x82, .x=0xbe, .y=0xa1, .sp=0x11, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x6aeb, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x6aec, .a=0x82, .x=0xbe, .y=0xa1, .sp=0xbe, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x6aeb, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x6aeb, .value=0xbd, .type=IO_READ},
        {.addr=0x6aec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0053) {
    const struct CPU_State initial_cpu = {.pc=0xd995, .a=0x1e, .x=0x7b, .y=0xd5, .sp=0xae, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xd995, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xd996, .a=0x1e, .x=0x7b, .y=0xd5, .sp=0x7b, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xd995, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xd995, .value=0xbd, .type=IO_READ},
        {.addr=0xd996, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0054) {
    const struct CPU_State initial_cpu = {.pc=0xd4b0, .a=0xaf, .x=0xc5, .y=0xf5, .sp=0x44, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xd4b0, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xd4b1, .a=0xaf, .x=0xc5, .y=0xf5, .sp=0xc5, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0xd4b0, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xd4b0, .value=0xbd, .type=IO_READ},
        {.addr=0xd4b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0055) {
    const struct CPU_State initial_cpu = {.pc=0x1b5b, .a=0x50, .x=0xcb, .y=0x75, .sp=0xd7, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x1b5b, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x1b5c, .a=0x50, .x=0xcb, .y=0x75, .sp=0xcb, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x1b5b, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x1b5b, .value=0xbd, .type=IO_READ},
        {.addr=0x1b5c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0056) {
    const struct CPU_State initial_cpu = {.pc=0x319e, .a=0x8f, .x=0xc9, .y=0x29, .sp=0x16, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x319e, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x319f, .a=0x8f, .x=0xc9, .y=0x29, .sp=0xc9, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x319e, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x319e, .value=0xbd, .type=IO_READ},
        {.addr=0x319f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0057) {
    const struct CPU_State initial_cpu = {.pc=0x61b7, .a=0xca, .x=0x2a, .y=0x06, .sp=0x2b, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x61b7, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x61b8, .a=0xca, .x=0x2a, .y=0x06, .sp=0x2a, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x61b7, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x61b7, .value=0xbd, .type=IO_READ},
        {.addr=0x61b8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0058) {
    const struct CPU_State initial_cpu = {.pc=0x004a, .a=0x4c, .x=0x1a, .y=0x9b, .sp=0x65, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x004a, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x004b, .a=0x4c, .x=0x1a, .y=0x9b, .sp=0x1a, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x004a, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x004a, .value=0xbd, .type=IO_READ},
        {.addr=0x004b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0059) {
    const struct CPU_State initial_cpu = {.pc=0x0c83, .a=0xe6, .x=0xb3, .y=0x31, .sp=0xfd, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x0c83, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x0c84, .a=0xe6, .x=0xb3, .y=0x31, .sp=0xb3, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x0c83, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x0c83, .value=0xbd, .type=IO_READ},
        {.addr=0x0c84, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_005A) {
    const struct CPU_State initial_cpu = {.pc=0xe7ce, .a=0x95, .x=0xb4, .y=0x9f, .sp=0x98, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xe7ce, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xe7cf, .a=0x95, .x=0xb4, .y=0x9f, .sp=0xb4, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xe7ce, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xe7ce, .value=0xbd, .type=IO_READ},
        {.addr=0xe7cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_005B) {
    const struct CPU_State initial_cpu = {.pc=0x7491, .a=0x29, .x=0x48, .y=0x1b, .sp=0x42, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x7491, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x7492, .a=0x29, .x=0x48, .y=0x1b, .sp=0x48, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x7491, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x7491, .value=0xbd, .type=IO_READ},
        {.addr=0x7492, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_005C) {
    const struct CPU_State initial_cpu = {.pc=0xd7be, .a=0x9e, .x=0xaf, .y=0xee, .sp=0x54, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xd7be, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xd7bf, .a=0x9e, .x=0xaf, .y=0xee, .sp=0xaf, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xd7be, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xd7be, .value=0xbd, .type=IO_READ},
        {.addr=0xd7bf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_005D) {
    const struct CPU_State initial_cpu = {.pc=0x4315, .a=0x83, .x=0x41, .y=0x94, .sp=0x7b, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x4315, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x4316, .a=0x83, .x=0x41, .y=0x94, .sp=0x41, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x4315, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x4315, .value=0xbd, .type=IO_READ},
        {.addr=0x4316, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_005E) {
    const struct CPU_State initial_cpu = {.pc=0xa0d6, .a=0x6a, .x=0x4a, .y=0x1c, .sp=0x61, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xa0d6, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xa0d7, .a=0x6a, .x=0x4a, .y=0x1c, .sp=0x4a, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xa0d6, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xa0d6, .value=0xbd, .type=IO_READ},
        {.addr=0xa0d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_005F) {
    const struct CPU_State initial_cpu = {.pc=0x5d20, .a=0x30, .x=0xaa, .y=0xef, .sp=0x48, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x5d20, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x5d21, .a=0x30, .x=0xaa, .y=0xef, .sp=0xaa, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x5d20, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x5d20, .value=0xbd, .type=IO_READ},
        {.addr=0x5d21, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0060) {
    const struct CPU_State initial_cpu = {.pc=0x7f1a, .a=0x98, .x=0x5f, .y=0x52, .sp=0x4e, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x7f1a, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x7f1b, .a=0x98, .x=0x5f, .y=0x52, .sp=0x5f, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x7f1a, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x7f1a, .value=0xbd, .type=IO_READ},
        {.addr=0x7f1b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0061) {
    const struct CPU_State initial_cpu = {.pc=0xf1f3, .a=0x28, .x=0x07, .y=0x51, .sp=0x53, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xf1f3, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xf1f4, .a=0x28, .x=0x07, .y=0x51, .sp=0x07, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0xf1f3, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xf1f3, .value=0xbd, .type=IO_READ},
        {.addr=0xf1f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0062) {
    const struct CPU_State initial_cpu = {.pc=0x9cec, .a=0xcf, .x=0x7b, .y=0xce, .sp=0x99, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x9cec, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x9ced, .a=0xcf, .x=0x7b, .y=0xce, .sp=0x7b, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x9cec, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x9cec, .value=0xbd, .type=IO_READ},
        {.addr=0x9ced, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0063) {
    const struct CPU_State initial_cpu = {.pc=0xb483, .a=0x35, .x=0xd3, .y=0x39, .sp=0xfd, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xb483, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xb484, .a=0x35, .x=0xd3, .y=0x39, .sp=0xd3, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xb483, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xb483, .value=0xbd, .type=IO_READ},
        {.addr=0xb484, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0064) {
    const struct CPU_State initial_cpu = {.pc=0xeea2, .a=0xb5, .x=0x66, .y=0x0a, .sp=0xfe, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xeea2, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xeea3, .a=0xb5, .x=0x66, .y=0x0a, .sp=0x66, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xeea2, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xeea2, .value=0xbd, .type=IO_READ},
        {.addr=0xeea3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0065) {
    const struct CPU_State initial_cpu = {.pc=0x7131, .a=0x43, .x=0x05, .y=0x0d, .sp=0xb2, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x7131, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x7132, .a=0x43, .x=0x05, .y=0x0d, .sp=0x05, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x7131, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x7131, .value=0xbd, .type=IO_READ},
        {.addr=0x7132, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0066) {
    const struct CPU_State initial_cpu = {.pc=0xfc8e, .a=0xe2, .x=0xe6, .y=0x23, .sp=0x69, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xfc8e, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xfc8f, .a=0xe2, .x=0xe6, .y=0x23, .sp=0xe6, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xfc8e, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xfc8e, .value=0xbd, .type=IO_READ},
        {.addr=0xfc8f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0067) {
    const struct CPU_State initial_cpu = {.pc=0x9185, .a=0xfa, .x=0xbd, .y=0xaa, .sp=0x05, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x9185, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x9186, .a=0xfa, .x=0xbd, .y=0xaa, .sp=0xbd, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x9185, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x9185, .value=0xbd, .type=IO_READ},
        {.addr=0x9186, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0068) {
    const struct CPU_State initial_cpu = {.pc=0x8eba, .a=0xa1, .x=0xc6, .y=0x6b, .sp=0x92, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x8eba, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x8ebb, .a=0xa1, .x=0xc6, .y=0x6b, .sp=0xc6, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x8eba, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x8eba, .value=0xbd, .type=IO_READ},
        {.addr=0x8ebb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0069) {
    const struct CPU_State initial_cpu = {.pc=0xbc25, .a=0x4f, .x=0x7c, .y=0xd2, .sp=0x10, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xbc25, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xbc26, .a=0x4f, .x=0x7c, .y=0xd2, .sp=0x7c, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xbc25, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xbc25, .value=0xbd, .type=IO_READ},
        {.addr=0xbc26, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_006A) {
    const struct CPU_State initial_cpu = {.pc=0xd6b1, .a=0x53, .x=0xe5, .y=0x21, .sp=0x5a, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xd6b1, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xd6b2, .a=0x53, .x=0xe5, .y=0x21, .sp=0xe5, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xd6b1, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xd6b1, .value=0xbd, .type=IO_READ},
        {.addr=0xd6b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_006B) {
    const struct CPU_State initial_cpu = {.pc=0xc256, .a=0xe5, .x=0xed, .y=0x39, .sp=0x55, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xc256, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xc257, .a=0xe5, .x=0xed, .y=0x39, .sp=0xed, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0xc256, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xc256, .value=0xbd, .type=IO_READ},
        {.addr=0xc257, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_006C) {
    const struct CPU_State initial_cpu = {.pc=0x92e1, .a=0xec, .x=0x28, .y=0x65, .sp=0x99, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x92e1, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x92e2, .a=0xec, .x=0x28, .y=0x65, .sp=0x28, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x92e1, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x92e1, .value=0xbd, .type=IO_READ},
        {.addr=0x92e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_006D) {
    const struct CPU_State initial_cpu = {.pc=0xabd3, .a=0x15, .x=0x4f, .y=0xb3, .sp=0xae, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xabd3, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xabd4, .a=0x15, .x=0x4f, .y=0xb3, .sp=0x4f, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xabd3, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xabd3, .value=0xbd, .type=IO_READ},
        {.addr=0xabd4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_006E) {
    const struct CPU_State initial_cpu = {.pc=0x1ceb, .a=0x00, .x=0xfe, .y=0x52, .sp=0xa9, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x1ceb, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x1cec, .a=0x00, .x=0xfe, .y=0x52, .sp=0xfe, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x1ceb, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x1ceb, .value=0xbd, .type=IO_READ},
        {.addr=0x1cec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_006F) {
    const struct CPU_State initial_cpu = {.pc=0x6c2c, .a=0x8d, .x=0xbd, .y=0xe3, .sp=0x5c, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x6c2c, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x6c2d, .a=0x8d, .x=0xbd, .y=0xe3, .sp=0xbd, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x6c2c, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x6c2c, .value=0xbd, .type=IO_READ},
        {.addr=0x6c2d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0070) {
    const struct CPU_State initial_cpu = {.pc=0xee2d, .a=0xf2, .x=0x8c, .y=0xb6, .sp=0x85, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xee2d, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xee2e, .a=0xf2, .x=0x8c, .y=0xb6, .sp=0x8c, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0xee2d, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xee2d, .value=0xbd, .type=IO_READ},
        {.addr=0xee2e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0071) {
    const struct CPU_State initial_cpu = {.pc=0x3e06, .a=0x6e, .x=0xf3, .y=0xf5, .sp=0x18, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x3e06, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x3e07, .a=0x6e, .x=0xf3, .y=0xf5, .sp=0xf3, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x3e06, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x3e06, .value=0xbd, .type=IO_READ},
        {.addr=0x3e07, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0072) {
    const struct CPU_State initial_cpu = {.pc=0x138e, .a=0x62, .x=0x89, .y=0xc7, .sp=0x90, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x138e, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x138f, .a=0x62, .x=0x89, .y=0xc7, .sp=0x89, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x138e, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x138e, .value=0xbd, .type=IO_READ},
        {.addr=0x138f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0073) {
    const struct CPU_State initial_cpu = {.pc=0x73a5, .a=0x09, .x=0x92, .y=0x2f, .sp=0x2f, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x73a5, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x73a6, .a=0x09, .x=0x92, .y=0x2f, .sp=0x92, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x73a5, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x73a5, .value=0xbd, .type=IO_READ},
        {.addr=0x73a6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0074) {
    const struct CPU_State initial_cpu = {.pc=0x6ac5, .a=0xa9, .x=0x5a, .y=0xd9, .sp=0x3b, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x6ac5, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x6ac6, .a=0xa9, .x=0x5a, .y=0xd9, .sp=0x5a, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x6ac5, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x6ac5, .value=0xbd, .type=IO_READ},
        {.addr=0x6ac6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0075) {
    const struct CPU_State initial_cpu = {.pc=0xf4cb, .a=0x99, .x=0x5d, .y=0xc8, .sp=0xbf, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xf4cb, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xf4cc, .a=0x99, .x=0x5d, .y=0xc8, .sp=0x5d, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0xf4cb, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xf4cb, .value=0xbd, .type=IO_READ},
        {.addr=0xf4cc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0076) {
    const struct CPU_State initial_cpu = {.pc=0x7040, .a=0xbf, .x=0x75, .y=0xa3, .sp=0x76, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x7040, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x7041, .a=0xbf, .x=0x75, .y=0xa3, .sp=0x75, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x7040, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x7040, .value=0xbd, .type=IO_READ},
        {.addr=0x7041, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0077) {
    const struct CPU_State initial_cpu = {.pc=0xc19d, .a=0xdd, .x=0xbc, .y=0x58, .sp=0xca, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xc19d, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xc19e, .a=0xdd, .x=0xbc, .y=0x58, .sp=0xbc, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xc19d, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xc19d, .value=0xbd, .type=IO_READ},
        {.addr=0xc19e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0078) {
    const struct CPU_State initial_cpu = {.pc=0xa99a, .a=0x07, .x=0x24, .y=0x31, .sp=0x43, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xa99a, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xa99b, .a=0x07, .x=0x24, .y=0x31, .sp=0x24, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xa99a, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xa99a, .value=0xbd, .type=IO_READ},
        {.addr=0xa99b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0079) {
    const struct CPU_State initial_cpu = {.pc=0xae43, .a=0xba, .x=0x4d, .y=0x27, .sp=0x1c, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xae43, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xae44, .a=0xba, .x=0x4d, .y=0x27, .sp=0x4d, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xae43, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xae43, .value=0xbd, .type=IO_READ},
        {.addr=0xae44, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_007A) {
    const struct CPU_State initial_cpu = {.pc=0xfaf2, .a=0x10, .x=0x6a, .y=0x13, .sp=0x62, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xfaf2, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xfaf3, .a=0x10, .x=0x6a, .y=0x13, .sp=0x6a, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0xfaf2, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xfaf2, .value=0xbd, .type=IO_READ},
        {.addr=0xfaf3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_007B) {
    const struct CPU_State initial_cpu = {.pc=0x5f80, .a=0xab, .x=0xb4, .y=0x8e, .sp=0x6a, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x5f80, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x5f81, .a=0xab, .x=0xb4, .y=0x8e, .sp=0xb4, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x5f80, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x5f80, .value=0xbd, .type=IO_READ},
        {.addr=0x5f81, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_007C) {
    const struct CPU_State initial_cpu = {.pc=0x100b, .a=0xa6, .x=0xa0, .y=0xb4, .sp=0xe7, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x100b, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x100c, .a=0xa6, .x=0xa0, .y=0xb4, .sp=0xa0, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x100b, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x100b, .value=0xbd, .type=IO_READ},
        {.addr=0x100c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_007D) {
    const struct CPU_State initial_cpu = {.pc=0x87bc, .a=0xc6, .x=0x68, .y=0xea, .sp=0xc1, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x87bc, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x87bd, .a=0xc6, .x=0x68, .y=0xea, .sp=0x68, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x87bc, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x87bc, .value=0xbd, .type=IO_READ},
        {.addr=0x87bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_007E) {
    const struct CPU_State initial_cpu = {.pc=0x21c1, .a=0xcf, .x=0x6c, .y=0x9e, .sp=0xad, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x21c1, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x21c2, .a=0xcf, .x=0x6c, .y=0x9e, .sp=0x6c, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x21c1, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x21c1, .value=0xbd, .type=IO_READ},
        {.addr=0x21c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_007F) {
    const struct CPU_State initial_cpu = {.pc=0x04d5, .a=0xd1, .x=0x0a, .y=0x3e, .sp=0xca, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x04d5, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x04d6, .a=0xd1, .x=0x0a, .y=0x3e, .sp=0x0a, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x04d5, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x04d5, .value=0xbd, .type=IO_READ},
        {.addr=0x04d6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0080) {
    const struct CPU_State initial_cpu = {.pc=0x5a82, .a=0xeb, .x=0x18, .y=0x8a, .sp=0x99, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x5a82, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x5a83, .a=0xeb, .x=0x18, .y=0x8a, .sp=0x18, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x5a82, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x5a82, .value=0xbd, .type=IO_READ},
        {.addr=0x5a83, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0081) {
    const struct CPU_State initial_cpu = {.pc=0x2983, .a=0xf4, .x=0xf4, .y=0xa3, .sp=0x19, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x2983, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x2984, .a=0xf4, .x=0xf4, .y=0xa3, .sp=0xf4, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x2983, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x2983, .value=0xbd, .type=IO_READ},
        {.addr=0x2984, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0082) {
    const struct CPU_State initial_cpu = {.pc=0xad04, .a=0x5d, .x=0x04, .y=0xc5, .sp=0xf7, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xad04, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xad05, .a=0x5d, .x=0x04, .y=0xc5, .sp=0x04, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xad04, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xad04, .value=0xbd, .type=IO_READ},
        {.addr=0xad05, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0083) {
    const struct CPU_State initial_cpu = {.pc=0x9997, .a=0x82, .x=0xec, .y=0xad, .sp=0x57, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x9997, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x9998, .a=0x82, .x=0xec, .y=0xad, .sp=0xec, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x9997, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x9997, .value=0xbd, .type=IO_READ},
        {.addr=0x9998, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0084) {
    const struct CPU_State initial_cpu = {.pc=0x2c1f, .a=0x76, .x=0x63, .y=0x4e, .sp=0x81, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x2c1f, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x2c20, .a=0x76, .x=0x63, .y=0x4e, .sp=0x63, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x2c1f, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x2c1f, .value=0xbd, .type=IO_READ},
        {.addr=0x2c20, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0085) {
    const struct CPU_State initial_cpu = {.pc=0x7f63, .a=0x80, .x=0x33, .y=0x7a, .sp=0x7f, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x7f63, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x7f64, .a=0x80, .x=0x33, .y=0x7a, .sp=0x33, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x7f63, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x7f63, .value=0xbd, .type=IO_READ},
        {.addr=0x7f64, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0086) {
    const struct CPU_State initial_cpu = {.pc=0x8a5b, .a=0x84, .x=0x5b, .y=0x8e, .sp=0x1a, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x8a5b, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x8a5c, .a=0x84, .x=0x5b, .y=0x8e, .sp=0x5b, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x8a5b, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x8a5b, .value=0xbd, .type=IO_READ},
        {.addr=0x8a5c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0087) {
    const struct CPU_State initial_cpu = {.pc=0x1d1b, .a=0x9e, .x=0x2a, .y=0x95, .sp=0xd9, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x1d1b, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x1d1c, .a=0x9e, .x=0x2a, .y=0x95, .sp=0x2a, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x1d1b, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x1d1b, .value=0xbd, .type=IO_READ},
        {.addr=0x1d1c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0088) {
    const struct CPU_State initial_cpu = {.pc=0x2b44, .a=0x44, .x=0x8c, .y=0xa4, .sp=0x0d, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x2b44, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x2b45, .a=0x44, .x=0x8c, .y=0xa4, .sp=0x8c, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x2b44, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x2b44, .value=0xbd, .type=IO_READ},
        {.addr=0x2b45, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0089) {
    const struct CPU_State initial_cpu = {.pc=0xa69b, .a=0xee, .x=0xc1, .y=0xfa, .sp=0x08, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xa69b, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xa69c, .a=0xee, .x=0xc1, .y=0xfa, .sp=0xc1, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0xa69b, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xa69b, .value=0xbd, .type=IO_READ},
        {.addr=0xa69c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_008A) {
    const struct CPU_State initial_cpu = {.pc=0x6922, .a=0x46, .x=0xbc, .y=0x10, .sp=0x9c, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x6922, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x6923, .a=0x46, .x=0xbc, .y=0x10, .sp=0xbc, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x6922, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x6922, .value=0xbd, .type=IO_READ},
        {.addr=0x6923, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_008B) {
    const struct CPU_State initial_cpu = {.pc=0xf501, .a=0x6d, .x=0x88, .y=0x47, .sp=0x1d, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xf501, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xf502, .a=0x6d, .x=0x88, .y=0x47, .sp=0x88, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xf501, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xf501, .value=0xbd, .type=IO_READ},
        {.addr=0xf502, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_008C) {
    const struct CPU_State initial_cpu = {.pc=0xe600, .a=0x49, .x=0xc7, .y=0xb2, .sp=0x65, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xe600, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xe601, .a=0x49, .x=0xc7, .y=0xb2, .sp=0xc7, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0xe600, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xe600, .value=0xbd, .type=IO_READ},
        {.addr=0xe601, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_008D) {
    const struct CPU_State initial_cpu = {.pc=0xc54f, .a=0x39, .x=0x69, .y=0x6d, .sp=0x05, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xc54f, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xc550, .a=0x39, .x=0x69, .y=0x6d, .sp=0x69, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0xc54f, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xc54f, .value=0xbd, .type=IO_READ},
        {.addr=0xc550, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_008E) {
    const struct CPU_State initial_cpu = {.pc=0xe01a, .a=0x5a, .x=0xfa, .y=0xf7, .sp=0xf0, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xe01a, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xe01b, .a=0x5a, .x=0xfa, .y=0xf7, .sp=0xfa, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0xe01a, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xe01a, .value=0xbd, .type=IO_READ},
        {.addr=0xe01b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_008F) {
    const struct CPU_State initial_cpu = {.pc=0x2c02, .a=0x9d, .x=0x2b, .y=0x87, .sp=0xd4, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x2c02, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x2c03, .a=0x9d, .x=0x2b, .y=0x87, .sp=0x2b, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x2c02, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x2c02, .value=0xbd, .type=IO_READ},
        {.addr=0x2c03, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0090) {
    const struct CPU_State initial_cpu = {.pc=0xde15, .a=0xf9, .x=0xed, .y=0x0c, .sp=0x95, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0xde15, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xde16, .a=0xf9, .x=0xed, .y=0x0c, .sp=0xed, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xde15, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xde15, .value=0xbd, .type=IO_READ},
        {.addr=0xde16, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0091) {
    const struct CPU_State initial_cpu = {.pc=0x68ed, .a=0xdf, .x=0x4a, .y=0x84, .sp=0x7d, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x68ed, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x68ee, .a=0xdf, .x=0x4a, .y=0x84, .sp=0x4a, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x68ed, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x68ed, .value=0xbd, .type=IO_READ},
        {.addr=0x68ee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0092) {
    const struct CPU_State initial_cpu = {.pc=0x665b, .a=0x3e, .x=0x13, .y=0x05, .sp=0xf8, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x665b, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x665c, .a=0x3e, .x=0x13, .y=0x05, .sp=0x13, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x665b, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x665b, .value=0xbd, .type=IO_READ},
        {.addr=0x665c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0093) {
    const struct CPU_State initial_cpu = {.pc=0x2605, .a=0xab, .x=0xf8, .y=0xc3, .sp=0x99, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x2605, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x2606, .a=0xab, .x=0xf8, .y=0xc3, .sp=0xf8, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x2605, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x2605, .value=0xbd, .type=IO_READ},
        {.addr=0x2606, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0094) {
    const struct CPU_State initial_cpu = {.pc=0x0458, .a=0xec, .x=0x5f, .y=0x91, .sp=0xfc, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x0458, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x0459, .a=0xec, .x=0x5f, .y=0x91, .sp=0x5f, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0458, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x0458, .value=0xbd, .type=IO_READ},
        {.addr=0x0459, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0095) {
    const struct CPU_State initial_cpu = {.pc=0xa9ca, .a=0x2a, .x=0x48, .y=0x7b, .sp=0xb3, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xa9ca, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xa9cb, .a=0x2a, .x=0x48, .y=0x7b, .sp=0x48, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0xa9ca, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xa9ca, .value=0xbd, .type=IO_READ},
        {.addr=0xa9cb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0096) {
    const struct CPU_State initial_cpu = {.pc=0x3021, .a=0x21, .x=0x7c, .y=0xbf, .sp=0x1c, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x3021, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x3022, .a=0x21, .x=0x7c, .y=0xbf, .sp=0x7c, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x3021, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x3021, .value=0xbd, .type=IO_READ},
        {.addr=0x3022, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0097) {
    const struct CPU_State initial_cpu = {.pc=0xeace, .a=0x71, .x=0x98, .y=0x41, .sp=0xfd, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xeace, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xeacf, .a=0x71, .x=0x98, .y=0x41, .sp=0x98, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0xeace, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xeace, .value=0xbd, .type=IO_READ},
        {.addr=0xeacf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0098) {
    const struct CPU_State initial_cpu = {.pc=0x72d3, .a=0x02, .x=0xb2, .y=0xbe, .sp=0xc8, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x72d3, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x72d4, .a=0x02, .x=0xb2, .y=0xbe, .sp=0xb2, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x72d3, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x72d3, .value=0xbd, .type=IO_READ},
        {.addr=0x72d4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0099) {
    const struct CPU_State initial_cpu = {.pc=0x26cc, .a=0x36, .x=0x29, .y=0x5d, .sp=0xfa, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x26cc, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x26cd, .a=0x36, .x=0x29, .y=0x5d, .sp=0x29, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x26cc, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x26cc, .value=0xbd, .type=IO_READ},
        {.addr=0x26cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_009A) {
    const struct CPU_State initial_cpu = {.pc=0xf21b, .a=0x17, .x=0xc6, .y=0x75, .sp=0x9b, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xf21b, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xf21c, .a=0x17, .x=0xc6, .y=0x75, .sp=0xc6, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xf21b, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xf21b, .value=0xbd, .type=IO_READ},
        {.addr=0xf21c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_009B) {
    const struct CPU_State initial_cpu = {.pc=0x5745, .a=0x0b, .x=0xfd, .y=0x4f, .sp=0xa4, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x5745, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x5746, .a=0x0b, .x=0xfd, .y=0x4f, .sp=0xfd, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x5745, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x5745, .value=0xbd, .type=IO_READ},
        {.addr=0x5746, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_009C) {
    const struct CPU_State initial_cpu = {.pc=0x4162, .a=0xef, .x=0x3d, .y=0x34, .sp=0x00, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x4162, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x4163, .a=0xef, .x=0x3d, .y=0x34, .sp=0x3d, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x4162, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x4162, .value=0xbd, .type=IO_READ},
        {.addr=0x4163, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_009D) {
    const struct CPU_State initial_cpu = {.pc=0xfea0, .a=0xb0, .x=0x8d, .y=0x80, .sp=0xbd, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xfea0, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xfea1, .a=0xb0, .x=0x8d, .y=0x80, .sp=0x8d, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0xfea0, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xfea0, .value=0xbd, .type=IO_READ},
        {.addr=0xfea1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_009E) {
    const struct CPU_State initial_cpu = {.pc=0xb1ea, .a=0xd0, .x=0xe6, .y=0x0a, .sp=0xf7, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0xb1ea, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xb1eb, .a=0xd0, .x=0xe6, .y=0x0a, .sp=0xe6, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xb1ea, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xb1ea, .value=0xbd, .type=IO_READ},
        {.addr=0xb1eb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_009F) {
    const struct CPU_State initial_cpu = {.pc=0xcbcd, .a=0x8e, .x=0xf2, .y=0x3a, .sp=0x9d, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xcbcd, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xcbce, .a=0x8e, .x=0xf2, .y=0x3a, .sp=0xf2, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0xcbcd, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xcbcd, .value=0xbd, .type=IO_READ},
        {.addr=0xcbce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00A0) {
    const struct CPU_State initial_cpu = {.pc=0x46b4, .a=0xd0, .x=0x9b, .y=0x8f, .sp=0x78, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x46b4, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x46b5, .a=0xd0, .x=0x9b, .y=0x8f, .sp=0x9b, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x46b4, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x46b4, .value=0xbd, .type=IO_READ},
        {.addr=0x46b5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00A1) {
    const struct CPU_State initial_cpu = {.pc=0x15db, .a=0xa2, .x=0x05, .y=0x02, .sp=0xd5, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x15db, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x15dc, .a=0xa2, .x=0x05, .y=0x02, .sp=0x05, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x15db, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x15db, .value=0xbd, .type=IO_READ},
        {.addr=0x15dc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00A2) {
    const struct CPU_State initial_cpu = {.pc=0x1ed3, .a=0xb3, .x=0x47, .y=0x6e, .sp=0xfa, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x1ed3, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x1ed4, .a=0xb3, .x=0x47, .y=0x6e, .sp=0x47, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x1ed3, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x1ed3, .value=0xbd, .type=IO_READ},
        {.addr=0x1ed4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00A3) {
    const struct CPU_State initial_cpu = {.pc=0xcae1, .a=0x56, .x=0x70, .y=0x46, .sp=0x08, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xcae1, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xcae2, .a=0x56, .x=0x70, .y=0x46, .sp=0x70, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0xcae1, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xcae1, .value=0xbd, .type=IO_READ},
        {.addr=0xcae2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00A4) {
    const struct CPU_State initial_cpu = {.pc=0x46cf, .a=0x10, .x=0x90, .y=0x32, .sp=0x3a, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x46cf, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x46d0, .a=0x10, .x=0x90, .y=0x32, .sp=0x90, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x46cf, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x46cf, .value=0xbd, .type=IO_READ},
        {.addr=0x46d0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00A5) {
    const struct CPU_State initial_cpu = {.pc=0x67da, .a=0xaa, .x=0x4b, .y=0x6a, .sp=0x34, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x67da, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x67db, .a=0xaa, .x=0x4b, .y=0x6a, .sp=0x4b, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x67da, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x67da, .value=0xbd, .type=IO_READ},
        {.addr=0x67db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00A6) {
    const struct CPU_State initial_cpu = {.pc=0xd3ac, .a=0xab, .x=0x58, .y=0x10, .sp=0x45, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xd3ac, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xd3ad, .a=0xab, .x=0x58, .y=0x10, .sp=0x58, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xd3ac, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xd3ac, .value=0xbd, .type=IO_READ},
        {.addr=0xd3ad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00A7) {
    const struct CPU_State initial_cpu = {.pc=0x6a26, .a=0x99, .x=0xd7, .y=0x32, .sp=0x39, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x6a26, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x6a27, .a=0x99, .x=0xd7, .y=0x32, .sp=0xd7, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x6a26, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x6a26, .value=0xbd, .type=IO_READ},
        {.addr=0x6a27, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00A8) {
    const struct CPU_State initial_cpu = {.pc=0x7a10, .a=0xb8, .x=0x01, .y=0x77, .sp=0xfd, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x7a10, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x7a11, .a=0xb8, .x=0x01, .y=0x77, .sp=0x01, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x7a10, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x7a10, .value=0xbd, .type=IO_READ},
        {.addr=0x7a11, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00A9) {
    const struct CPU_State initial_cpu = {.pc=0x9652, .a=0x94, .x=0xcc, .y=0xd7, .sp=0x9d, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x9652, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x9653, .a=0x94, .x=0xcc, .y=0xd7, .sp=0xcc, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x9652, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x9652, .value=0xbd, .type=IO_READ},
        {.addr=0x9653, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00AA) {
    const struct CPU_State initial_cpu = {.pc=0xe50f, .a=0xf0, .x=0x7e, .y=0xba, .sp=0x37, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xe50f, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xe510, .a=0xf0, .x=0x7e, .y=0xba, .sp=0x7e, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0xe50f, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xe50f, .value=0xbd, .type=IO_READ},
        {.addr=0xe510, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00AB) {
    const struct CPU_State initial_cpu = {.pc=0xca98, .a=0xb3, .x=0xeb, .y=0x6a, .sp=0x1f, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xca98, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xca99, .a=0xb3, .x=0xeb, .y=0x6a, .sp=0xeb, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xca98, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xca98, .value=0xbd, .type=IO_READ},
        {.addr=0xca99, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00AC) {
    const struct CPU_State initial_cpu = {.pc=0xcdbe, .a=0x8f, .x=0xf3, .y=0x46, .sp=0xe0, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xcdbe, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xcdbf, .a=0x8f, .x=0xf3, .y=0x46, .sp=0xf3, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xcdbe, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xcdbe, .value=0xbd, .type=IO_READ},
        {.addr=0xcdbf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00AD) {
    const struct CPU_State initial_cpu = {.pc=0x95cf, .a=0xbc, .x=0xe9, .y=0xc4, .sp=0x24, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x95cf, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x95d0, .a=0xbc, .x=0xe9, .y=0xc4, .sp=0xe9, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x95cf, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x95cf, .value=0xbd, .type=IO_READ},
        {.addr=0x95d0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00AE) {
    const struct CPU_State initial_cpu = {.pc=0x7315, .a=0xfe, .x=0x43, .y=0xf1, .sp=0xe6, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x7315, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x7316, .a=0xfe, .x=0x43, .y=0xf1, .sp=0x43, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x7315, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x7315, .value=0xbd, .type=IO_READ},
        {.addr=0x7316, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00AF) {
    const struct CPU_State initial_cpu = {.pc=0xea81, .a=0x6c, .x=0xf2, .y=0x14, .sp=0xa1, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xea81, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xea82, .a=0x6c, .x=0xf2, .y=0x14, .sp=0xf2, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xea81, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xea81, .value=0xbd, .type=IO_READ},
        {.addr=0xea82, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00B0) {
    const struct CPU_State initial_cpu = {.pc=0x5260, .a=0x9a, .x=0xe6, .y=0xc3, .sp=0x61, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x5260, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x5261, .a=0x9a, .x=0xe6, .y=0xc3, .sp=0xe6, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x5260, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x5260, .value=0xbd, .type=IO_READ},
        {.addr=0x5261, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00B1) {
    const struct CPU_State initial_cpu = {.pc=0xef44, .a=0x80, .x=0x9c, .y=0x64, .sp=0xc3, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xef44, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xef45, .a=0x80, .x=0x9c, .y=0x64, .sp=0x9c, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0xef44, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xef44, .value=0xbd, .type=IO_READ},
        {.addr=0xef45, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00B2) {
    const struct CPU_State initial_cpu = {.pc=0xde9e, .a=0xb1, .x=0x7e, .y=0xb3, .sp=0xb1, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xde9e, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xde9f, .a=0xb1, .x=0x7e, .y=0xb3, .sp=0x7e, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0xde9e, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xde9e, .value=0xbd, .type=IO_READ},
        {.addr=0xde9f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00B3) {
    const struct CPU_State initial_cpu = {.pc=0xd985, .a=0x71, .x=0xc1, .y=0x18, .sp=0x2a, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xd985, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xd986, .a=0x71, .x=0xc1, .y=0x18, .sp=0xc1, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xd985, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xd985, .value=0xbd, .type=IO_READ},
        {.addr=0xd986, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00B4) {
    const struct CPU_State initial_cpu = {.pc=0x0f90, .a=0x89, .x=0x2b, .y=0x51, .sp=0x4b, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x0f90, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x0f91, .a=0x89, .x=0x2b, .y=0x51, .sp=0x2b, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x0f90, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x0f90, .value=0xbd, .type=IO_READ},
        {.addr=0x0f91, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00B5) {
    const struct CPU_State initial_cpu = {.pc=0x1241, .a=0xc5, .x=0xf7, .y=0xfb, .sp=0x0d, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x1241, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x1242, .a=0xc5, .x=0xf7, .y=0xfb, .sp=0xf7, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x1241, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x1241, .value=0xbd, .type=IO_READ},
        {.addr=0x1242, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00B6) {
    const struct CPU_State initial_cpu = {.pc=0x9b38, .a=0xc8, .x=0x9e, .y=0x12, .sp=0x1c, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x9b38, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x9b39, .a=0xc8, .x=0x9e, .y=0x12, .sp=0x9e, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0x9b38, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x9b38, .value=0xbd, .type=IO_READ},
        {.addr=0x9b39, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00B7) {
    const struct CPU_State initial_cpu = {.pc=0x32e4, .a=0xee, .x=0xed, .y=0x82, .sp=0x91, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x32e4, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x32e5, .a=0xee, .x=0xed, .y=0x82, .sp=0xed, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x32e4, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x32e4, .value=0xbd, .type=IO_READ},
        {.addr=0x32e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00B8) {
    const struct CPU_State initial_cpu = {.pc=0xfddf, .a=0x55, .x=0x2f, .y=0x3d, .sp=0x85, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xfddf, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xfde0, .a=0x55, .x=0x2f, .y=0x3d, .sp=0x2f, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0xfddf, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xfddf, .value=0xbd, .type=IO_READ},
        {.addr=0xfde0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00B9) {
    const struct CPU_State initial_cpu = {.pc=0x1033, .a=0x1c, .x=0x85, .y=0xb5, .sp=0x06, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x1033, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x1034, .a=0x1c, .x=0x85, .y=0xb5, .sp=0x85, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x1033, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x1033, .value=0xbd, .type=IO_READ},
        {.addr=0x1034, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00BA) {
    const struct CPU_State initial_cpu = {.pc=0x4245, .a=0x12, .x=0x63, .y=0x22, .sp=0x4f, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x4245, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x4246, .a=0x12, .x=0x63, .y=0x22, .sp=0x63, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x4245, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x4245, .value=0xbd, .type=IO_READ},
        {.addr=0x4246, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00BB) {
    const struct CPU_State initial_cpu = {.pc=0xba90, .a=0x30, .x=0xe1, .y=0x2f, .sp=0x73, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xba90, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xba91, .a=0x30, .x=0xe1, .y=0x2f, .sp=0xe1, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0xba90, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xba90, .value=0xbd, .type=IO_READ},
        {.addr=0xba91, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00BC) {
    const struct CPU_State initial_cpu = {.pc=0x2f5c, .a=0x73, .x=0xc3, .y=0xef, .sp=0xde, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x2f5c, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x2f5d, .a=0x73, .x=0xc3, .y=0xef, .sp=0xc3, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x2f5c, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x2f5c, .value=0xbd, .type=IO_READ},
        {.addr=0x2f5d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00BD) {
    const struct CPU_State initial_cpu = {.pc=0xaf5e, .a=0xa0, .x=0x62, .y=0x09, .sp=0xdc, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xaf5e, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xaf5f, .a=0xa0, .x=0x62, .y=0x09, .sp=0x62, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0xaf5e, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xaf5e, .value=0xbd, .type=IO_READ},
        {.addr=0xaf5f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00BE) {
    const struct CPU_State initial_cpu = {.pc=0xd2c5, .a=0x36, .x=0x03, .y=0xf8, .sp=0xd4, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xd2c5, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xd2c6, .a=0x36, .x=0x03, .y=0xf8, .sp=0x03, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xd2c5, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xd2c5, .value=0xbd, .type=IO_READ},
        {.addr=0xd2c6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00BF) {
    const struct CPU_State initial_cpu = {.pc=0x5d5b, .a=0xf0, .x=0xe8, .y=0xce, .sp=0x21, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x5d5b, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x5d5c, .a=0xf0, .x=0xe8, .y=0xce, .sp=0xe8, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x5d5b, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x5d5b, .value=0xbd, .type=IO_READ},
        {.addr=0x5d5c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00C0) {
    const struct CPU_State initial_cpu = {.pc=0xf982, .a=0xfc, .x=0xfb, .y=0x31, .sp=0x7a, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xf982, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xf983, .a=0xfc, .x=0xfb, .y=0x31, .sp=0xfb, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0xf982, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xf982, .value=0xbd, .type=IO_READ},
        {.addr=0xf983, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00C1) {
    const struct CPU_State initial_cpu = {.pc=0x70fa, .a=0x8b, .x=0x7d, .y=0x8b, .sp=0x17, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x70fa, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x70fb, .a=0x8b, .x=0x7d, .y=0x8b, .sp=0x7d, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x70fa, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x70fa, .value=0xbd, .type=IO_READ},
        {.addr=0x70fb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00C2) {
    const struct CPU_State initial_cpu = {.pc=0x6896, .a=0x4f, .x=0xed, .y=0x63, .sp=0x17, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x6896, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x6897, .a=0x4f, .x=0xed, .y=0x63, .sp=0xed, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x6896, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x6896, .value=0xbd, .type=IO_READ},
        {.addr=0x6897, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00C3) {
    const struct CPU_State initial_cpu = {.pc=0x0ea1, .a=0xa0, .x=0x6f, .y=0x18, .sp=0xaf, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x0ea1, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x0ea2, .a=0xa0, .x=0x6f, .y=0x18, .sp=0x6f, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x0ea1, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x0ea1, .value=0xbd, .type=IO_READ},
        {.addr=0x0ea2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00C4) {
    const struct CPU_State initial_cpu = {.pc=0x3fe6, .a=0xc1, .x=0xe1, .y=0xd6, .sp=0xa8, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x3fe6, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x3fe7, .a=0xc1, .x=0xe1, .y=0xd6, .sp=0xe1, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x3fe6, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x3fe6, .value=0xbd, .type=IO_READ},
        {.addr=0x3fe7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00C5) {
    const struct CPU_State initial_cpu = {.pc=0xded7, .a=0x20, .x=0x9a, .y=0x6f, .sp=0x89, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xded7, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xded8, .a=0x20, .x=0x9a, .y=0x6f, .sp=0x9a, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xded7, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xded7, .value=0xbd, .type=IO_READ},
        {.addr=0xded8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00C6) {
    const struct CPU_State initial_cpu = {.pc=0x5b40, .a=0xb4, .x=0xa5, .y=0x6d, .sp=0xf2, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x5b40, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x5b41, .a=0xb4, .x=0xa5, .y=0x6d, .sp=0xa5, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x5b40, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x5b40, .value=0xbd, .type=IO_READ},
        {.addr=0x5b41, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00C7) {
    const struct CPU_State initial_cpu = {.pc=0x3fe3, .a=0x4e, .x=0x0e, .y=0xa6, .sp=0x0c, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x3fe3, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x3fe4, .a=0x4e, .x=0x0e, .y=0xa6, .sp=0x0e, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x3fe3, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x3fe3, .value=0xbd, .type=IO_READ},
        {.addr=0x3fe4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00C8) {
    const struct CPU_State initial_cpu = {.pc=0x0e73, .a=0x15, .x=0x59, .y=0xe7, .sp=0x86, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x0e73, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x0e74, .a=0x15, .x=0x59, .y=0xe7, .sp=0x59, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x0e73, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x0e73, .value=0xbd, .type=IO_READ},
        {.addr=0x0e74, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00C9) {
    const struct CPU_State initial_cpu = {.pc=0x51a7, .a=0x91, .x=0x56, .y=0x3e, .sp=0x22, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x51a7, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x51a8, .a=0x91, .x=0x56, .y=0x3e, .sp=0x56, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x51a7, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x51a7, .value=0xbd, .type=IO_READ},
        {.addr=0x51a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00CA) {
    const struct CPU_State initial_cpu = {.pc=0xa87c, .a=0x47, .x=0xf6, .y=0xad, .sp=0x67, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xa87c, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xa87d, .a=0x47, .x=0xf6, .y=0xad, .sp=0xf6, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0xa87c, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xa87c, .value=0xbd, .type=IO_READ},
        {.addr=0xa87d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00CB) {
    const struct CPU_State initial_cpu = {.pc=0xdebc, .a=0xdd, .x=0x04, .y=0xa1, .sp=0xb6, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xdebc, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xdebd, .a=0xdd, .x=0x04, .y=0xa1, .sp=0x04, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xdebc, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xdebc, .value=0xbd, .type=IO_READ},
        {.addr=0xdebd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00CC) {
    const struct CPU_State initial_cpu = {.pc=0xb63b, .a=0x92, .x=0xee, .y=0x5a, .sp=0x8b, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xb63b, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xb63c, .a=0x92, .x=0xee, .y=0x5a, .sp=0xee, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xb63b, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xb63b, .value=0xbd, .type=IO_READ},
        {.addr=0xb63c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00CD) {
    const struct CPU_State initial_cpu = {.pc=0x59df, .a=0x06, .x=0x6b, .y=0xb3, .sp=0x76, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x59df, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x59e0, .a=0x06, .x=0x6b, .y=0xb3, .sp=0x6b, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x59df, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x59df, .value=0xbd, .type=IO_READ},
        {.addr=0x59e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00CE) {
    const struct CPU_State initial_cpu = {.pc=0x901f, .a=0xef, .x=0x90, .y=0xf2, .sp=0x8a, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x901f, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x9020, .a=0xef, .x=0x90, .y=0xf2, .sp=0x90, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x901f, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x901f, .value=0xbd, .type=IO_READ},
        {.addr=0x9020, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00CF) {
    const struct CPU_State initial_cpu = {.pc=0x010b, .a=0xd3, .x=0xf9, .y=0xd9, .sp=0x30, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x010b, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x010c, .a=0xd3, .x=0xf9, .y=0xd9, .sp=0xf9, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x010b, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x010b, .value=0xbd, .type=IO_READ},
        {.addr=0x010c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00D0) {
    const struct CPU_State initial_cpu = {.pc=0x5d67, .a=0xac, .x=0x29, .y=0x6c, .sp=0xa9, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x5d67, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x5d68, .a=0xac, .x=0x29, .y=0x6c, .sp=0x29, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x5d67, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x5d67, .value=0xbd, .type=IO_READ},
        {.addr=0x5d68, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00D1) {
    const struct CPU_State initial_cpu = {.pc=0xbe3f, .a=0x80, .x=0x51, .y=0x42, .sp=0x6f, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xbe3f, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xbe40, .a=0x80, .x=0x51, .y=0x42, .sp=0x51, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0xbe3f, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xbe3f, .value=0xbd, .type=IO_READ},
        {.addr=0xbe40, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00D2) {
    const struct CPU_State initial_cpu = {.pc=0xaac0, .a=0xe0, .x=0xf1, .y=0xa4, .sp=0xc3, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xaac0, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xaac1, .a=0xe0, .x=0xf1, .y=0xa4, .sp=0xf1, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0xaac0, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xaac0, .value=0xbd, .type=IO_READ},
        {.addr=0xaac1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00D3) {
    const struct CPU_State initial_cpu = {.pc=0xec86, .a=0x30, .x=0xd1, .y=0x26, .sp=0x5a, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xec86, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xec87, .a=0x30, .x=0xd1, .y=0x26, .sp=0xd1, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0xec86, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xec86, .value=0xbd, .type=IO_READ},
        {.addr=0xec87, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00D4) {
    const struct CPU_State initial_cpu = {.pc=0xc6c3, .a=0xd4, .x=0xb8, .y=0x35, .sp=0x9b, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xc6c3, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xc6c4, .a=0xd4, .x=0xb8, .y=0x35, .sp=0xb8, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0xc6c3, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xc6c3, .value=0xbd, .type=IO_READ},
        {.addr=0xc6c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00D5) {
    const struct CPU_State initial_cpu = {.pc=0xe570, .a=0x12, .x=0x74, .y=0x78, .sp=0x53, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xe570, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xe571, .a=0x12, .x=0x74, .y=0x78, .sp=0x74, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0xe570, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xe570, .value=0xbd, .type=IO_READ},
        {.addr=0xe571, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00D6) {
    const struct CPU_State initial_cpu = {.pc=0x482a, .a=0x14, .x=0x5a, .y=0x05, .sp=0x46, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x482a, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x482b, .a=0x14, .x=0x5a, .y=0x05, .sp=0x5a, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x482a, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x482a, .value=0xbd, .type=IO_READ},
        {.addr=0x482b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00D7) {
    const struct CPU_State initial_cpu = {.pc=0x031f, .a=0x0c, .x=0x88, .y=0x73, .sp=0x59, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x031f, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x0320, .a=0x0c, .x=0x88, .y=0x73, .sp=0x88, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x031f, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x031f, .value=0xbd, .type=IO_READ},
        {.addr=0x0320, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00D8) {
    const struct CPU_State initial_cpu = {.pc=0x394c, .a=0x76, .x=0x15, .y=0xac, .sp=0x94, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x394c, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x394d, .a=0x76, .x=0x15, .y=0xac, .sp=0x15, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x394c, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x394c, .value=0xbd, .type=IO_READ},
        {.addr=0x394d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00D9) {
    const struct CPU_State initial_cpu = {.pc=0xa3bd, .a=0xbd, .x=0xb9, .y=0x69, .sp=0xb3, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0xa3bd, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xa3be, .a=0xbd, .x=0xb9, .y=0x69, .sp=0xb9, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xa3bd, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xa3bd, .value=0xbd, .type=IO_READ},
        {.addr=0xa3be, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00DA) {
    const struct CPU_State initial_cpu = {.pc=0x0591, .a=0x8f, .x=0x14, .y=0x8d, .sp=0xa3, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x0591, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x0592, .a=0x8f, .x=0x14, .y=0x8d, .sp=0x14, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0591, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x0591, .value=0xbd, .type=IO_READ},
        {.addr=0x0592, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00DB) {
    const struct CPU_State initial_cpu = {.pc=0xa798, .a=0xf4, .x=0xa5, .y=0xee, .sp=0x2b, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xa798, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xa799, .a=0xf4, .x=0xa5, .y=0xee, .sp=0xa5, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xa798, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xa798, .value=0xbd, .type=IO_READ},
        {.addr=0xa799, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00DC) {
    const struct CPU_State initial_cpu = {.pc=0xade2, .a=0x40, .x=0xcf, .y=0xbe, .sp=0x91, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xade2, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xade3, .a=0x40, .x=0xcf, .y=0xbe, .sp=0xcf, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0xade2, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xade2, .value=0xbd, .type=IO_READ},
        {.addr=0xade3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00DD) {
    const struct CPU_State initial_cpu = {.pc=0x0427, .a=0xdf, .x=0xb5, .y=0x60, .sp=0x5b, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x0427, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x0428, .a=0xdf, .x=0xb5, .y=0x60, .sp=0xb5, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x0427, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x0427, .value=0xbd, .type=IO_READ},
        {.addr=0x0428, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00DE) {
    const struct CPU_State initial_cpu = {.pc=0xc9a9, .a=0xfc, .x=0x0f, .y=0xb2, .sp=0x2b, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xc9a9, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xc9aa, .a=0xfc, .x=0x0f, .y=0xb2, .sp=0x0f, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0xc9a9, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xc9a9, .value=0xbd, .type=IO_READ},
        {.addr=0xc9aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00DF) {
    const struct CPU_State initial_cpu = {.pc=0x27c5, .a=0xf8, .x=0xf4, .y=0x67, .sp=0x6a, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x27c5, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x27c6, .a=0xf8, .x=0xf4, .y=0x67, .sp=0xf4, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x27c5, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x27c5, .value=0xbd, .type=IO_READ},
        {.addr=0x27c6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00E0) {
    const struct CPU_State initial_cpu = {.pc=0x34be, .a=0x78, .x=0xa7, .y=0x69, .sp=0xde, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x34be, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x34bf, .a=0x78, .x=0xa7, .y=0x69, .sp=0xa7, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x34be, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x34be, .value=0xbd, .type=IO_READ},
        {.addr=0x34bf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00E1) {
    const struct CPU_State initial_cpu = {.pc=0xa359, .a=0x23, .x=0x03, .y=0xd2, .sp=0x52, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xa359, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xa35a, .a=0x23, .x=0x03, .y=0xd2, .sp=0x03, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xa359, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xa359, .value=0xbd, .type=IO_READ},
        {.addr=0xa35a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x6716, .a=0xfa, .x=0x22, .y=0xeb, .sp=0x6d, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x6716, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x6717, .a=0xfa, .x=0x22, .y=0xeb, .sp=0x22, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x6716, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x6716, .value=0xbd, .type=IO_READ},
        {.addr=0x6717, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00E3) {
    const struct CPU_State initial_cpu = {.pc=0x4966, .a=0x11, .x=0x05, .y=0x73, .sp=0x61, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x4966, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x4967, .a=0x11, .x=0x05, .y=0x73, .sp=0x05, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x4966, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x4966, .value=0xbd, .type=IO_READ},
        {.addr=0x4967, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00E4) {
    const struct CPU_State initial_cpu = {.pc=0x034b, .a=0x2a, .x=0x32, .y=0x68, .sp=0x42, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x034b, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x034c, .a=0x2a, .x=0x32, .y=0x68, .sp=0x32, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x034b, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x034b, .value=0xbd, .type=IO_READ},
        {.addr=0x034c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00E5) {
    const struct CPU_State initial_cpu = {.pc=0x956f, .a=0x67, .x=0xda, .y=0x43, .sp=0x9c, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x956f, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x9570, .a=0x67, .x=0xda, .y=0x43, .sp=0xda, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x956f, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x956f, .value=0xbd, .type=IO_READ},
        {.addr=0x9570, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00E6) {
    const struct CPU_State initial_cpu = {.pc=0xaaf3, .a=0xae, .x=0x89, .y=0x3d, .sp=0x11, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xaaf3, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xaaf4, .a=0xae, .x=0x89, .y=0x3d, .sp=0x89, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xaaf3, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xaaf3, .value=0xbd, .type=IO_READ},
        {.addr=0xaaf4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00E7) {
    const struct CPU_State initial_cpu = {.pc=0x3bee, .a=0x84, .x=0x22, .y=0xf5, .sp=0x86, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x3bee, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x3bef, .a=0x84, .x=0x22, .y=0xf5, .sp=0x22, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x3bee, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x3bee, .value=0xbd, .type=IO_READ},
        {.addr=0x3bef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00E8) {
    const struct CPU_State initial_cpu = {.pc=0xad6e, .a=0xdc, .x=0x2b, .y=0xf2, .sp=0x80, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xad6e, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xad6f, .a=0xdc, .x=0x2b, .y=0xf2, .sp=0x2b, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xad6e, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xad6e, .value=0xbd, .type=IO_READ},
        {.addr=0xad6f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00E9) {
    const struct CPU_State initial_cpu = {.pc=0x5946, .a=0x71, .x=0x5e, .y=0x46, .sp=0x5c, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x5946, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x5947, .a=0x71, .x=0x5e, .y=0x46, .sp=0x5e, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x5946, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x5946, .value=0xbd, .type=IO_READ},
        {.addr=0x5947, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00EA) {
    const struct CPU_State initial_cpu = {.pc=0x3ed5, .a=0x0b, .x=0x5e, .y=0x1d, .sp=0x64, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x3ed5, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x3ed6, .a=0x0b, .x=0x5e, .y=0x1d, .sp=0x5e, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x3ed5, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x3ed5, .value=0xbd, .type=IO_READ},
        {.addr=0x3ed6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00EB) {
    const struct CPU_State initial_cpu = {.pc=0x2900, .a=0xed, .x=0x16, .y=0xb2, .sp=0x70, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x2900, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x2901, .a=0xed, .x=0x16, .y=0xb2, .sp=0x16, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x2900, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x2900, .value=0xbd, .type=IO_READ},
        {.addr=0x2901, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00EC) {
    const struct CPU_State initial_cpu = {.pc=0x2f5d, .a=0xfb, .x=0xc6, .y=0x60, .sp=0xb0, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x2f5d, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x2f5e, .a=0xfb, .x=0xc6, .y=0x60, .sp=0xc6, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x2f5d, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x2f5d, .value=0xbd, .type=IO_READ},
        {.addr=0x2f5e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00ED) {
    const struct CPU_State initial_cpu = {.pc=0xe757, .a=0x1f, .x=0xd6, .y=0x30, .sp=0x2c, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xe757, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xe758, .a=0x1f, .x=0xd6, .y=0x30, .sp=0xd6, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xe757, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xe757, .value=0xbd, .type=IO_READ},
        {.addr=0xe758, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00EE) {
    const struct CPU_State initial_cpu = {.pc=0xfab4, .a=0x00, .x=0x3d, .y=0x53, .sp=0x63, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xfab4, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xfab5, .a=0x00, .x=0x3d, .y=0x53, .sp=0x3d, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xfab4, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xfab4, .value=0xbd, .type=IO_READ},
        {.addr=0xfab5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00EF) {
    const struct CPU_State initial_cpu = {.pc=0x924e, .a=0xd5, .x=0x77, .y=0x19, .sp=0x37, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x924e, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x924f, .a=0xd5, .x=0x77, .y=0x19, .sp=0x77, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x924e, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x924e, .value=0xbd, .type=IO_READ},
        {.addr=0x924f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00F0) {
    const struct CPU_State initial_cpu = {.pc=0x631e, .a=0xf0, .x=0xb3, .y=0x56, .sp=0x22, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x631e, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x631f, .a=0xf0, .x=0xb3, .y=0x56, .sp=0xb3, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x631e, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x631e, .value=0xbd, .type=IO_READ},
        {.addr=0x631f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00F1) {
    const struct CPU_State initial_cpu = {.pc=0xa7c2, .a=0x77, .x=0xce, .y=0x00, .sp=0x51, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xa7c2, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xa7c3, .a=0x77, .x=0xce, .y=0x00, .sp=0xce, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xa7c2, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xa7c2, .value=0xbd, .type=IO_READ},
        {.addr=0xa7c3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00F2) {
    const struct CPU_State initial_cpu = {.pc=0x2a1c, .a=0xf2, .x=0xe1, .y=0xab, .sp=0xad, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x2a1c, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x2a1d, .a=0xf2, .x=0xe1, .y=0xab, .sp=0xe1, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x2a1c, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x2a1c, .value=0xbd, .type=IO_READ},
        {.addr=0x2a1d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00F3) {
    const struct CPU_State initial_cpu = {.pc=0x4883, .a=0xd9, .x=0xb9, .y=0xcf, .sp=0x02, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x4883, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x4884, .a=0xd9, .x=0xb9, .y=0xcf, .sp=0xb9, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x4883, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x4883, .value=0xbd, .type=IO_READ},
        {.addr=0x4884, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00F4) {
    const struct CPU_State initial_cpu = {.pc=0xbb09, .a=0xcf, .x=0xb1, .y=0x6e, .sp=0xc2, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xbb09, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xbb0a, .a=0xcf, .x=0xb1, .y=0x6e, .sp=0xb1, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0xbb09, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xbb09, .value=0xbd, .type=IO_READ},
        {.addr=0xbb0a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00F5) {
    const struct CPU_State initial_cpu = {.pc=0x4a7a, .a=0x7b, .x=0xdf, .y=0xa9, .sp=0x30, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x4a7a, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x4a7b, .a=0x7b, .x=0xdf, .y=0xa9, .sp=0xdf, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x4a7a, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x4a7a, .value=0xbd, .type=IO_READ},
        {.addr=0x4a7b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00F6) {
    const struct CPU_State initial_cpu = {.pc=0x6aa2, .a=0x0b, .x=0x8f, .y=0xe0, .sp=0xb2, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x6aa2, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x6aa3, .a=0x0b, .x=0x8f, .y=0xe0, .sp=0x8f, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x6aa2, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x6aa2, .value=0xbd, .type=IO_READ},
        {.addr=0x6aa3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00F7) {
    const struct CPU_State initial_cpu = {.pc=0x8fef, .a=0x25, .x=0x1a, .y=0x39, .sp=0xa4, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x8fef, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x8ff0, .a=0x25, .x=0x1a, .y=0x39, .sp=0x1a, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x8fef, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x8fef, .value=0xbd, .type=IO_READ},
        {.addr=0x8ff0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00F8) {
    const struct CPU_State initial_cpu = {.pc=0x1d85, .a=0x49, .x=0xaa, .y=0xe1, .sp=0xa3, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x1d85, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x1d86, .a=0x49, .x=0xaa, .y=0xe1, .sp=0xaa, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x1d85, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x1d85, .value=0xbd, .type=IO_READ},
        {.addr=0x1d86, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00F9) {
    const struct CPU_State initial_cpu = {.pc=0xdc2b, .a=0x08, .x=0x03, .y=0x13, .sp=0xd9, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xdc2b, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xdc2c, .a=0x08, .x=0x03, .y=0x13, .sp=0x03, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0xdc2b, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xdc2b, .value=0xbd, .type=IO_READ},
        {.addr=0xdc2c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00FA) {
    const struct CPU_State initial_cpu = {.pc=0x9202, .a=0x36, .x=0xf2, .y=0x1b, .sp=0xf4, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x9202, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x9203, .a=0x36, .x=0xf2, .y=0x1b, .sp=0xf2, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x9202, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x9202, .value=0xbd, .type=IO_READ},
        {.addr=0x9203, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00FB) {
    const struct CPU_State initial_cpu = {.pc=0x75c7, .a=0x41, .x=0xf1, .y=0xbd, .sp=0x3b, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x75c7, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x75c8, .a=0x41, .x=0xf1, .y=0xbd, .sp=0xf1, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x75c7, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x75c7, .value=0xbd, .type=IO_READ},
        {.addr=0x75c8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00FC) {
    const struct CPU_State initial_cpu = {.pc=0x0a21, .a=0x2f, .x=0x1b, .y=0x7d, .sp=0xef, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x0a21, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x0a22, .a=0x2f, .x=0x1b, .y=0x7d, .sp=0x1b, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x0a21, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x0a21, .value=0xbd, .type=IO_READ},
        {.addr=0x0a22, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00FD) {
    const struct CPU_State initial_cpu = {.pc=0x2782, .a=0x6e, .x=0x97, .y=0x1b, .sp=0x04, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x2782, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x2783, .a=0x6e, .x=0x97, .y=0x1b, .sp=0x97, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x2782, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x2782, .value=0xbd, .type=IO_READ},
        {.addr=0x2783, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00FE) {
    const struct CPU_State initial_cpu = {.pc=0xea02, .a=0xde, .x=0x68, .y=0x60, .sp=0x4a, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xea02, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xea03, .a=0xde, .x=0x68, .y=0x60, .sp=0x68, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0xea02, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xea02, .value=0xbd, .type=IO_READ},
        {.addr=0xea03, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_00FF) {
    const struct CPU_State initial_cpu = {.pc=0x830d, .a=0x90, .x=0xa5, .y=0x3e, .sp=0xf7, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x830d, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x830e, .a=0x90, .x=0xa5, .y=0x3e, .sp=0xa5, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x830d, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x830d, .value=0xbd, .type=IO_READ},
        {.addr=0x830e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0100) {
    const struct CPU_State initial_cpu = {.pc=0xefb2, .a=0x60, .x=0x8e, .y=0xae, .sp=0x33, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xefb2, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xefb3, .a=0x60, .x=0x8e, .y=0xae, .sp=0x8e, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0xefb2, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xefb2, .value=0xbd, .type=IO_READ},
        {.addr=0xefb3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0101) {
    const struct CPU_State initial_cpu = {.pc=0x85fe, .a=0x40, .x=0x2b, .y=0xb0, .sp=0x75, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x85fe, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x85ff, .a=0x40, .x=0x2b, .y=0xb0, .sp=0x2b, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x85fe, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x85fe, .value=0xbd, .type=IO_READ},
        {.addr=0x85ff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0102) {
    const struct CPU_State initial_cpu = {.pc=0xf157, .a=0xf1, .x=0x0d, .y=0x68, .sp=0x09, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xf157, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xf158, .a=0xf1, .x=0x0d, .y=0x68, .sp=0x0d, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0xf157, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xf157, .value=0xbd, .type=IO_READ},
        {.addr=0xf158, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0103) {
    const struct CPU_State initial_cpu = {.pc=0x3674, .a=0x91, .x=0xfd, .y=0x6f, .sp=0x9e, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x3674, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x3675, .a=0x91, .x=0xfd, .y=0x6f, .sp=0xfd, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x3674, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x3674, .value=0xbd, .type=IO_READ},
        {.addr=0x3675, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0104) {
    const struct CPU_State initial_cpu = {.pc=0xe6c3, .a=0xe1, .x=0x3c, .y=0x94, .sp=0x09, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xe6c3, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xe6c4, .a=0xe1, .x=0x3c, .y=0x94, .sp=0x3c, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xe6c3, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xe6c3, .value=0xbd, .type=IO_READ},
        {.addr=0xe6c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0105) {
    const struct CPU_State initial_cpu = {.pc=0x1c39, .a=0x59, .x=0x7a, .y=0x27, .sp=0x26, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x1c39, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x1c3a, .a=0x59, .x=0x7a, .y=0x27, .sp=0x7a, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x1c39, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x1c39, .value=0xbd, .type=IO_READ},
        {.addr=0x1c3a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0106) {
    const struct CPU_State initial_cpu = {.pc=0x2ac7, .a=0xea, .x=0xaf, .y=0x2a, .sp=0xa2, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x2ac7, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x2ac8, .a=0xea, .x=0xaf, .y=0x2a, .sp=0xaf, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x2ac7, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x2ac7, .value=0xbd, .type=IO_READ},
        {.addr=0x2ac8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0107) {
    const struct CPU_State initial_cpu = {.pc=0xb6ef, .a=0xd1, .x=0x4c, .y=0xef, .sp=0x47, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xb6ef, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xb6f0, .a=0xd1, .x=0x4c, .y=0xef, .sp=0x4c, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xb6ef, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xb6ef, .value=0xbd, .type=IO_READ},
        {.addr=0xb6f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0108) {
    const struct CPU_State initial_cpu = {.pc=0x924f, .a=0x44, .x=0x32, .y=0xc8, .sp=0xb2, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x924f, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x9250, .a=0x44, .x=0x32, .y=0xc8, .sp=0x32, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x924f, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x924f, .value=0xbd, .type=IO_READ},
        {.addr=0x9250, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0109) {
    const struct CPU_State initial_cpu = {.pc=0x7b52, .a=0x71, .x=0xae, .y=0x1f, .sp=0xc5, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x7b52, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x7b53, .a=0x71, .x=0xae, .y=0x1f, .sp=0xae, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x7b52, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x7b52, .value=0xbd, .type=IO_READ},
        {.addr=0x7b53, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_010A) {
    const struct CPU_State initial_cpu = {.pc=0xaa43, .a=0xe1, .x=0x09, .y=0xf8, .sp=0x0b, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xaa43, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xaa44, .a=0xe1, .x=0x09, .y=0xf8, .sp=0x09, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xaa43, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xaa43, .value=0xbd, .type=IO_READ},
        {.addr=0xaa44, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_010B) {
    const struct CPU_State initial_cpu = {.pc=0xd46d, .a=0x82, .x=0x2b, .y=0xe1, .sp=0xbc, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xd46d, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xd46e, .a=0x82, .x=0x2b, .y=0xe1, .sp=0x2b, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0xd46d, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xd46d, .value=0xbd, .type=IO_READ},
        {.addr=0xd46e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_010C) {
    const struct CPU_State initial_cpu = {.pc=0x3d78, .a=0xc4, .x=0x8a, .y=0x38, .sp=0xf6, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x3d78, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x3d79, .a=0xc4, .x=0x8a, .y=0x38, .sp=0x8a, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x3d78, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x3d78, .value=0xbd, .type=IO_READ},
        {.addr=0x3d79, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_010D) {
    const struct CPU_State initial_cpu = {.pc=0xf91d, .a=0xa8, .x=0xcf, .y=0xfe, .sp=0x78, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xf91d, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xf91e, .a=0xa8, .x=0xcf, .y=0xfe, .sp=0xcf, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xf91d, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xf91d, .value=0xbd, .type=IO_READ},
        {.addr=0xf91e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_010E) {
    const struct CPU_State initial_cpu = {.pc=0xf6fc, .a=0x2b, .x=0x3f, .y=0xe3, .sp=0x20, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xf6fc, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xf6fd, .a=0x2b, .x=0x3f, .y=0xe3, .sp=0x3f, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0xf6fc, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xf6fc, .value=0xbd, .type=IO_READ},
        {.addr=0xf6fd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_010F) {
    const struct CPU_State initial_cpu = {.pc=0x9e72, .a=0x6f, .x=0x11, .y=0x14, .sp=0x47, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x9e72, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x9e73, .a=0x6f, .x=0x11, .y=0x14, .sp=0x11, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x9e72, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x9e72, .value=0xbd, .type=IO_READ},
        {.addr=0x9e73, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0110) {
    const struct CPU_State initial_cpu = {.pc=0x8437, .a=0x2f, .x=0x33, .y=0x8f, .sp=0xec, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x8437, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x8438, .a=0x2f, .x=0x33, .y=0x8f, .sp=0x33, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x8437, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x8437, .value=0xbd, .type=IO_READ},
        {.addr=0x8438, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0111) {
    const struct CPU_State initial_cpu = {.pc=0x74fb, .a=0x13, .x=0x71, .y=0x34, .sp=0xcf, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x74fb, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x74fc, .a=0x13, .x=0x71, .y=0x34, .sp=0x71, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x74fb, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x74fb, .value=0xbd, .type=IO_READ},
        {.addr=0x74fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0112) {
    const struct CPU_State initial_cpu = {.pc=0xb62a, .a=0x69, .x=0xaa, .y=0xcb, .sp=0x17, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xb62a, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xb62b, .a=0x69, .x=0xaa, .y=0xcb, .sp=0xaa, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xb62a, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xb62a, .value=0xbd, .type=IO_READ},
        {.addr=0xb62b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0113) {
    const struct CPU_State initial_cpu = {.pc=0x9dc4, .a=0x49, .x=0x5d, .y=0x37, .sp=0xdf, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x9dc4, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x9dc5, .a=0x49, .x=0x5d, .y=0x37, .sp=0x5d, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x9dc4, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x9dc4, .value=0xbd, .type=IO_READ},
        {.addr=0x9dc5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0114) {
    const struct CPU_State initial_cpu = {.pc=0xf27e, .a=0x16, .x=0xaf, .y=0xd8, .sp=0x05, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xf27e, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xf27f, .a=0x16, .x=0xaf, .y=0xd8, .sp=0xaf, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0xf27e, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xf27e, .value=0xbd, .type=IO_READ},
        {.addr=0xf27f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0115) {
    const struct CPU_State initial_cpu = {.pc=0x0f45, .a=0xb6, .x=0x3c, .y=0x89, .sp=0xc3, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x0f45, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x0f46, .a=0xb6, .x=0x3c, .y=0x89, .sp=0x3c, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x0f45, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x0f45, .value=0xbd, .type=IO_READ},
        {.addr=0x0f46, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0116) {
    const struct CPU_State initial_cpu = {.pc=0x04a1, .a=0x4e, .x=0xed, .y=0x36, .sp=0xfe, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x04a1, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x04a2, .a=0x4e, .x=0xed, .y=0x36, .sp=0xed, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x04a1, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x04a1, .value=0xbd, .type=IO_READ},
        {.addr=0x04a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0117) {
    const struct CPU_State initial_cpu = {.pc=0x37a8, .a=0xf9, .x=0xa7, .y=0x02, .sp=0xad, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x37a8, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x37a9, .a=0xf9, .x=0xa7, .y=0x02, .sp=0xa7, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x37a8, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x37a8, .value=0xbd, .type=IO_READ},
        {.addr=0x37a9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0118) {
    const struct CPU_State initial_cpu = {.pc=0x778d, .a=0x5f, .x=0xde, .y=0x6d, .sp=0x5e, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x778d, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x778e, .a=0x5f, .x=0xde, .y=0x6d, .sp=0xde, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x778d, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x778d, .value=0xbd, .type=IO_READ},
        {.addr=0x778e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0119) {
    const struct CPU_State initial_cpu = {.pc=0x61ad, .a=0x0f, .x=0xcc, .y=0x82, .sp=0x1f, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x61ad, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x61ae, .a=0x0f, .x=0xcc, .y=0x82, .sp=0xcc, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x61ad, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x61ad, .value=0xbd, .type=IO_READ},
        {.addr=0x61ae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_011A) {
    const struct CPU_State initial_cpu = {.pc=0x25b9, .a=0x89, .x=0x1a, .y=0x64, .sp=0x8a, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x25b9, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x25ba, .a=0x89, .x=0x1a, .y=0x64, .sp=0x1a, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x25b9, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x25b9, .value=0xbd, .type=IO_READ},
        {.addr=0x25ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_011B) {
    const struct CPU_State initial_cpu = {.pc=0x960b, .a=0x01, .x=0x0b, .y=0x56, .sp=0x07, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x960b, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x960c, .a=0x01, .x=0x0b, .y=0x56, .sp=0x0b, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x960b, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x960b, .value=0xbd, .type=IO_READ},
        {.addr=0x960c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_011C) {
    const struct CPU_State initial_cpu = {.pc=0x76c5, .a=0x24, .x=0xff, .y=0x61, .sp=0xac, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x76c5, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x76c6, .a=0x24, .x=0xff, .y=0x61, .sp=0xff, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x76c5, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x76c5, .value=0xbd, .type=IO_READ},
        {.addr=0x76c6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_011D) {
    const struct CPU_State initial_cpu = {.pc=0x4c49, .a=0x2d, .x=0x83, .y=0xe0, .sp=0x04, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x4c49, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x4c4a, .a=0x2d, .x=0x83, .y=0xe0, .sp=0x83, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x4c49, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x4c49, .value=0xbd, .type=IO_READ},
        {.addr=0x4c4a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_011E) {
    const struct CPU_State initial_cpu = {.pc=0x69e5, .a=0xa3, .x=0x85, .y=0x63, .sp=0x13, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x69e5, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x69e6, .a=0xa3, .x=0x85, .y=0x63, .sp=0x85, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x69e5, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x69e5, .value=0xbd, .type=IO_READ},
        {.addr=0x69e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_011F) {
    const struct CPU_State initial_cpu = {.pc=0xe6d0, .a=0x79, .x=0x14, .y=0xdc, .sp=0xfc, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xe6d0, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xe6d1, .a=0x79, .x=0x14, .y=0xdc, .sp=0x14, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xe6d0, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xe6d0, .value=0xbd, .type=IO_READ},
        {.addr=0xe6d1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0120) {
    const struct CPU_State initial_cpu = {.pc=0x59b6, .a=0x8f, .x=0xad, .y=0x77, .sp=0x0f, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x59b6, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x59b7, .a=0x8f, .x=0xad, .y=0x77, .sp=0xad, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x59b6, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x59b6, .value=0xbd, .type=IO_READ},
        {.addr=0x59b7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0121) {
    const struct CPU_State initial_cpu = {.pc=0xa73e, .a=0x18, .x=0x95, .y=0x0e, .sp=0x5e, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xa73e, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xa73f, .a=0x18, .x=0x95, .y=0x0e, .sp=0x95, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xa73e, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xa73e, .value=0xbd, .type=IO_READ},
        {.addr=0xa73f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0122) {
    const struct CPU_State initial_cpu = {.pc=0x0127, .a=0x8d, .x=0x70, .y=0xd0, .sp=0xcb, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x0127, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x0128, .a=0x8d, .x=0x70, .y=0xd0, .sp=0x70, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x0127, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x0127, .value=0xbd, .type=IO_READ},
        {.addr=0x0128, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0123) {
    const struct CPU_State initial_cpu = {.pc=0x8cc8, .a=0x11, .x=0x0b, .y=0xc4, .sp=0xdb, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x8cc8, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x8cc9, .a=0x11, .x=0x0b, .y=0xc4, .sp=0x0b, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x8cc8, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x8cc8, .value=0xbd, .type=IO_READ},
        {.addr=0x8cc9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0124) {
    const struct CPU_State initial_cpu = {.pc=0xb44d, .a=0x29, .x=0x58, .y=0x38, .sp=0x2c, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xb44d, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xb44e, .a=0x29, .x=0x58, .y=0x38, .sp=0x58, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0xb44d, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xb44d, .value=0xbd, .type=IO_READ},
        {.addr=0xb44e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0125) {
    const struct CPU_State initial_cpu = {.pc=0xa149, .a=0xab, .x=0xee, .y=0x6e, .sp=0xf3, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xa149, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xa14a, .a=0xab, .x=0xee, .y=0x6e, .sp=0xee, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0xa149, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xa149, .value=0xbd, .type=IO_READ},
        {.addr=0xa14a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0126) {
    const struct CPU_State initial_cpu = {.pc=0x0833, .a=0xc4, .x=0xf5, .y=0x6f, .sp=0x38, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x0833, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x0834, .a=0xc4, .x=0xf5, .y=0x6f, .sp=0xf5, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x0833, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x0833, .value=0xbd, .type=IO_READ},
        {.addr=0x0834, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0127) {
    const struct CPU_State initial_cpu = {.pc=0x5c8b, .a=0x02, .x=0x3c, .y=0xee, .sp=0x78, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x5c8b, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x5c8c, .a=0x02, .x=0x3c, .y=0xee, .sp=0x3c, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x5c8b, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x5c8b, .value=0xbd, .type=IO_READ},
        {.addr=0x5c8c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0128) {
    const struct CPU_State initial_cpu = {.pc=0x9ccc, .a=0x98, .x=0x7c, .y=0xac, .sp=0x67, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x9ccc, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x9ccd, .a=0x98, .x=0x7c, .y=0xac, .sp=0x7c, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x9ccc, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x9ccc, .value=0xbd, .type=IO_READ},
        {.addr=0x9ccd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0129) {
    const struct CPU_State initial_cpu = {.pc=0x2bdb, .a=0x5f, .x=0x90, .y=0x94, .sp=0x67, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x2bdb, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x2bdc, .a=0x5f, .x=0x90, .y=0x94, .sp=0x90, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x2bdb, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x2bdb, .value=0xbd, .type=IO_READ},
        {.addr=0x2bdc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_012A) {
    const struct CPU_State initial_cpu = {.pc=0x88c5, .a=0x47, .x=0x66, .y=0xd8, .sp=0x0f, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x88c5, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x88c6, .a=0x47, .x=0x66, .y=0xd8, .sp=0x66, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x88c5, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x88c5, .value=0xbd, .type=IO_READ},
        {.addr=0x88c6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_012B) {
    const struct CPU_State initial_cpu = {.pc=0xda55, .a=0xdb, .x=0xac, .y=0x45, .sp=0xef, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xda55, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xda56, .a=0xdb, .x=0xac, .y=0x45, .sp=0xac, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xda55, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xda55, .value=0xbd, .type=IO_READ},
        {.addr=0xda56, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_012C) {
    const struct CPU_State initial_cpu = {.pc=0x5ee4, .a=0x00, .x=0x4f, .y=0xcc, .sp=0xc9, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x5ee4, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x5ee5, .a=0x00, .x=0x4f, .y=0xcc, .sp=0x4f, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x5ee4, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x5ee4, .value=0xbd, .type=IO_READ},
        {.addr=0x5ee5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_012D) {
    const struct CPU_State initial_cpu = {.pc=0xffb5, .a=0xff, .x=0xf8, .y=0x12, .sp=0x06, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xffb5, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xffb6, .a=0xff, .x=0xf8, .y=0x12, .sp=0xf8, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0xffb5, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xffb5, .value=0xbd, .type=IO_READ},
        {.addr=0xffb6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_012E) {
    const struct CPU_State initial_cpu = {.pc=0x86f0, .a=0xe4, .x=0x12, .y=0x24, .sp=0xdf, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x86f0, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x86f1, .a=0xe4, .x=0x12, .y=0x24, .sp=0x12, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x86f0, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x86f0, .value=0xbd, .type=IO_READ},
        {.addr=0x86f1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_012F) {
    const struct CPU_State initial_cpu = {.pc=0x4dbe, .a=0xa7, .x=0x98, .y=0x25, .sp=0x87, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x4dbe, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x4dbf, .a=0xa7, .x=0x98, .y=0x25, .sp=0x98, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x4dbe, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x4dbe, .value=0xbd, .type=IO_READ},
        {.addr=0x4dbf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0130) {
    const struct CPU_State initial_cpu = {.pc=0xd7fd, .a=0xdc, .x=0x7c, .y=0x8b, .sp=0x0b, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0xd7fd, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xd7fe, .a=0xdc, .x=0x7c, .y=0x8b, .sp=0x7c, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xd7fd, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xd7fd, .value=0xbd, .type=IO_READ},
        {.addr=0xd7fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0131) {
    const struct CPU_State initial_cpu = {.pc=0xef6c, .a=0xf7, .x=0xfa, .y=0xc4, .sp=0xc9, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xef6c, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xef6d, .a=0xf7, .x=0xfa, .y=0xc4, .sp=0xfa, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xef6c, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xef6c, .value=0xbd, .type=IO_READ},
        {.addr=0xef6d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0132) {
    const struct CPU_State initial_cpu = {.pc=0x5f4f, .a=0xcc, .x=0x91, .y=0x94, .sp=0xdc, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x5f4f, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x5f50, .a=0xcc, .x=0x91, .y=0x94, .sp=0x91, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x5f4f, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x5f4f, .value=0xbd, .type=IO_READ},
        {.addr=0x5f50, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0133) {
    const struct CPU_State initial_cpu = {.pc=0xa92a, .a=0x30, .x=0x41, .y=0x8b, .sp=0x57, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xa92a, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xa92b, .a=0x30, .x=0x41, .y=0x8b, .sp=0x41, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0xa92a, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xa92a, .value=0xbd, .type=IO_READ},
        {.addr=0xa92b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0134) {
    const struct CPU_State initial_cpu = {.pc=0xcaaf, .a=0x22, .x=0x51, .y=0xd6, .sp=0xd4, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xcaaf, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xcab0, .a=0x22, .x=0x51, .y=0xd6, .sp=0x51, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0xcaaf, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xcaaf, .value=0xbd, .type=IO_READ},
        {.addr=0xcab0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0135) {
    const struct CPU_State initial_cpu = {.pc=0x880c, .a=0x24, .x=0xee, .y=0x49, .sp=0x80, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x880c, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x880d, .a=0x24, .x=0xee, .y=0x49, .sp=0xee, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x880c, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x880c, .value=0xbd, .type=IO_READ},
        {.addr=0x880d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0136) {
    const struct CPU_State initial_cpu = {.pc=0x793f, .a=0x3c, .x=0x6a, .y=0x24, .sp=0x95, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x793f, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x7940, .a=0x3c, .x=0x6a, .y=0x24, .sp=0x6a, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x793f, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x793f, .value=0xbd, .type=IO_READ},
        {.addr=0x7940, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0137) {
    const struct CPU_State initial_cpu = {.pc=0x6fbf, .a=0x14, .x=0x2f, .y=0x91, .sp=0xb6, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x6fbf, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x6fc0, .a=0x14, .x=0x2f, .y=0x91, .sp=0x2f, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x6fbf, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x6fbf, .value=0xbd, .type=IO_READ},
        {.addr=0x6fc0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0138) {
    const struct CPU_State initial_cpu = {.pc=0x4d05, .a=0xa9, .x=0x42, .y=0xc6, .sp=0xb9, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x4d05, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x4d06, .a=0xa9, .x=0x42, .y=0xc6, .sp=0x42, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x4d05, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x4d05, .value=0xbd, .type=IO_READ},
        {.addr=0x4d06, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0139) {
    const struct CPU_State initial_cpu = {.pc=0x383e, .a=0xbc, .x=0x7b, .y=0x5d, .sp=0xb6, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x383e, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x383f, .a=0xbc, .x=0x7b, .y=0x5d, .sp=0x7b, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x383e, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x383e, .value=0xbd, .type=IO_READ},
        {.addr=0x383f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_013A) {
    const struct CPU_State initial_cpu = {.pc=0x1d1d, .a=0x67, .x=0x31, .y=0xb0, .sp=0x70, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x1d1d, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x1d1e, .a=0x67, .x=0x31, .y=0xb0, .sp=0x31, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x1d1d, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x1d1d, .value=0xbd, .type=IO_READ},
        {.addr=0x1d1e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_013B) {
    const struct CPU_State initial_cpu = {.pc=0x9ec3, .a=0x91, .x=0xad, .y=0xc0, .sp=0xca, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x9ec3, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x9ec4, .a=0x91, .x=0xad, .y=0xc0, .sp=0xad, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x9ec3, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x9ec3, .value=0xbd, .type=IO_READ},
        {.addr=0x9ec4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_013C) {
    const struct CPU_State initial_cpu = {.pc=0xe971, .a=0x34, .x=0x17, .y=0xe7, .sp=0xb2, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xe971, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xe972, .a=0x34, .x=0x17, .y=0xe7, .sp=0x17, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xe971, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xe971, .value=0xbd, .type=IO_READ},
        {.addr=0xe972, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_013D) {
    const struct CPU_State initial_cpu = {.pc=0xcc99, .a=0xec, .x=0x31, .y=0x16, .sp=0x9c, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xcc99, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xcc9a, .a=0xec, .x=0x31, .y=0x16, .sp=0x31, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0xcc99, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xcc99, .value=0xbd, .type=IO_READ},
        {.addr=0xcc9a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_013E) {
    const struct CPU_State initial_cpu = {.pc=0xe73d, .a=0xa1, .x=0x03, .y=0xec, .sp=0x70, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0xe73d, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xe73e, .a=0xa1, .x=0x03, .y=0xec, .sp=0x03, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0xe73d, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xe73d, .value=0xbd, .type=IO_READ},
        {.addr=0xe73e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_013F) {
    const struct CPU_State initial_cpu = {.pc=0xb240, .a=0x87, .x=0xb4, .y=0xa1, .sp=0x52, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xb240, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xb241, .a=0x87, .x=0xb4, .y=0xa1, .sp=0xb4, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0xb240, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xb240, .value=0xbd, .type=IO_READ},
        {.addr=0xb241, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0140) {
    const struct CPU_State initial_cpu = {.pc=0xe7ae, .a=0x49, .x=0x9b, .y=0x48, .sp=0x31, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xe7ae, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xe7af, .a=0x49, .x=0x9b, .y=0x48, .sp=0x9b, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xe7ae, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xe7ae, .value=0xbd, .type=IO_READ},
        {.addr=0xe7af, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0141) {
    const struct CPU_State initial_cpu = {.pc=0xaebd, .a=0x10, .x=0xf9, .y=0x68, .sp=0x87, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xaebd, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xaebe, .a=0x10, .x=0xf9, .y=0x68, .sp=0xf9, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0xaebd, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xaebd, .value=0xbd, .type=IO_READ},
        {.addr=0xaebe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0142) {
    const struct CPU_State initial_cpu = {.pc=0x5526, .a=0x45, .x=0x8f, .y=0x8d, .sp=0x05, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x5526, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x5527, .a=0x45, .x=0x8f, .y=0x8d, .sp=0x8f, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x5526, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x5526, .value=0xbd, .type=IO_READ},
        {.addr=0x5527, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0143) {
    const struct CPU_State initial_cpu = {.pc=0x13c1, .a=0x7a, .x=0xd3, .y=0x22, .sp=0x9c, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x13c1, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x13c2, .a=0x7a, .x=0xd3, .y=0x22, .sp=0xd3, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x13c1, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x13c1, .value=0xbd, .type=IO_READ},
        {.addr=0x13c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0144) {
    const struct CPU_State initial_cpu = {.pc=0x4ada, .a=0x90, .x=0x48, .y=0xcf, .sp=0x5d, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x4ada, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x4adb, .a=0x90, .x=0x48, .y=0xcf, .sp=0x48, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x4ada, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x4ada, .value=0xbd, .type=IO_READ},
        {.addr=0x4adb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0145) {
    const struct CPU_State initial_cpu = {.pc=0x869c, .a=0xca, .x=0x2c, .y=0xc4, .sp=0x45, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x869c, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x869d, .a=0xca, .x=0x2c, .y=0xc4, .sp=0x2c, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x869c, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x869c, .value=0xbd, .type=IO_READ},
        {.addr=0x869d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0146) {
    const struct CPU_State initial_cpu = {.pc=0x633c, .a=0x36, .x=0x29, .y=0xa8, .sp=0xe7, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x633c, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x633d, .a=0x36, .x=0x29, .y=0xa8, .sp=0x29, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x633c, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x633c, .value=0xbd, .type=IO_READ},
        {.addr=0x633d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0147) {
    const struct CPU_State initial_cpu = {.pc=0xa973, .a=0xc7, .x=0x92, .y=0xd2, .sp=0xec, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xa973, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xa974, .a=0xc7, .x=0x92, .y=0xd2, .sp=0x92, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0xa973, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xa973, .value=0xbd, .type=IO_READ},
        {.addr=0xa974, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0148) {
    const struct CPU_State initial_cpu = {.pc=0x9081, .a=0x90, .x=0xb5, .y=0x1f, .sp=0x31, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x9081, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x9082, .a=0x90, .x=0xb5, .y=0x1f, .sp=0xb5, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x9081, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x9081, .value=0xbd, .type=IO_READ},
        {.addr=0x9082, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0149) {
    const struct CPU_State initial_cpu = {.pc=0x2370, .a=0x11, .x=0x90, .y=0x8b, .sp=0xec, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x2370, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x2371, .a=0x11, .x=0x90, .y=0x8b, .sp=0x90, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x2370, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x2370, .value=0xbd, .type=IO_READ},
        {.addr=0x2371, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_014A) {
    const struct CPU_State initial_cpu = {.pc=0xd3ce, .a=0x54, .x=0x97, .y=0x2a, .sp=0x86, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xd3ce, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xd3cf, .a=0x54, .x=0x97, .y=0x2a, .sp=0x97, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0xd3ce, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xd3ce, .value=0xbd, .type=IO_READ},
        {.addr=0xd3cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_014B) {
    const struct CPU_State initial_cpu = {.pc=0x6965, .a=0x15, .x=0xf8, .y=0xfa, .sp=0xe4, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x6965, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x6966, .a=0x15, .x=0xf8, .y=0xfa, .sp=0xf8, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x6965, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x6965, .value=0xbd, .type=IO_READ},
        {.addr=0x6966, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_014C) {
    const struct CPU_State initial_cpu = {.pc=0x0a58, .a=0xde, .x=0xbe, .y=0xcb, .sp=0xd8, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x0a58, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x0a59, .a=0xde, .x=0xbe, .y=0xcb, .sp=0xbe, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x0a58, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x0a58, .value=0xbd, .type=IO_READ},
        {.addr=0x0a59, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_014D) {
    const struct CPU_State initial_cpu = {.pc=0xd4b0, .a=0x21, .x=0xff, .y=0x3d, .sp=0x45, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xd4b0, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xd4b1, .a=0x21, .x=0xff, .y=0x3d, .sp=0xff, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0xd4b0, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xd4b0, .value=0xbd, .type=IO_READ},
        {.addr=0xd4b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_014E) {
    const struct CPU_State initial_cpu = {.pc=0x4e44, .a=0x79, .x=0x25, .y=0xb7, .sp=0xdb, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x4e44, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x4e45, .a=0x79, .x=0x25, .y=0xb7, .sp=0x25, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x4e44, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x4e44, .value=0xbd, .type=IO_READ},
        {.addr=0x4e45, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_014F) {
    const struct CPU_State initial_cpu = {.pc=0xe965, .a=0x4c, .x=0xc7, .y=0x0f, .sp=0x0f, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xe965, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xe966, .a=0x4c, .x=0xc7, .y=0x0f, .sp=0xc7, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xe965, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xe965, .value=0xbd, .type=IO_READ},
        {.addr=0xe966, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0150) {
    const struct CPU_State initial_cpu = {.pc=0xce96, .a=0x52, .x=0x2f, .y=0x86, .sp=0xba, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xce96, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xce97, .a=0x52, .x=0x2f, .y=0x86, .sp=0x2f, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0xce96, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xce96, .value=0xbd, .type=IO_READ},
        {.addr=0xce97, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0151) {
    const struct CPU_State initial_cpu = {.pc=0xd04e, .a=0xc4, .x=0xc8, .y=0x2f, .sp=0x7f, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xd04e, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xd04f, .a=0xc4, .x=0xc8, .y=0x2f, .sp=0xc8, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xd04e, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xd04e, .value=0xbd, .type=IO_READ},
        {.addr=0xd04f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0152) {
    const struct CPU_State initial_cpu = {.pc=0xb789, .a=0xa2, .x=0x03, .y=0x08, .sp=0x32, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xb789, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xb78a, .a=0xa2, .x=0x03, .y=0x08, .sp=0x03, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0xb789, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xb789, .value=0xbd, .type=IO_READ},
        {.addr=0xb78a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0153) {
    const struct CPU_State initial_cpu = {.pc=0x61d6, .a=0xf4, .x=0x87, .y=0x3a, .sp=0x1a, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x61d6, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x61d7, .a=0xf4, .x=0x87, .y=0x3a, .sp=0x87, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x61d6, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x61d6, .value=0xbd, .type=IO_READ},
        {.addr=0x61d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0154) {
    const struct CPU_State initial_cpu = {.pc=0xffdc, .a=0x2c, .x=0x63, .y=0x89, .sp=0x04, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xffdc, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xffdd, .a=0x2c, .x=0x63, .y=0x89, .sp=0x63, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xffdc, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xffdc, .value=0xbd, .type=IO_READ},
        {.addr=0xffdd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0155) {
    const struct CPU_State initial_cpu = {.pc=0xe556, .a=0xad, .x=0x34, .y=0x83, .sp=0x47, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xe556, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xe557, .a=0xad, .x=0x34, .y=0x83, .sp=0x34, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0xe556, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xe556, .value=0xbd, .type=IO_READ},
        {.addr=0xe557, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0156) {
    const struct CPU_State initial_cpu = {.pc=0x6885, .a=0xa0, .x=0x33, .y=0x9c, .sp=0x22, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x6885, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x6886, .a=0xa0, .x=0x33, .y=0x9c, .sp=0x33, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x6885, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x6885, .value=0xbd, .type=IO_READ},
        {.addr=0x6886, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0157) {
    const struct CPU_State initial_cpu = {.pc=0xa53f, .a=0x2e, .x=0x1d, .y=0xc8, .sp=0x64, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xa53f, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xa540, .a=0x2e, .x=0x1d, .y=0xc8, .sp=0x1d, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xa53f, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xa53f, .value=0xbd, .type=IO_READ},
        {.addr=0xa540, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0158) {
    const struct CPU_State initial_cpu = {.pc=0x414d, .a=0xa7, .x=0x3d, .y=0xbd, .sp=0x6f, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x414d, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x414e, .a=0xa7, .x=0x3d, .y=0xbd, .sp=0x3d, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x414d, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x414d, .value=0xbd, .type=IO_READ},
        {.addr=0x414e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0159) {
    const struct CPU_State initial_cpu = {.pc=0xb0d6, .a=0x79, .x=0x86, .y=0x13, .sp=0x59, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xb0d6, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xb0d7, .a=0x79, .x=0x86, .y=0x13, .sp=0x86, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xb0d6, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xb0d6, .value=0xbd, .type=IO_READ},
        {.addr=0xb0d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_015A) {
    const struct CPU_State initial_cpu = {.pc=0xac99, .a=0xe2, .x=0xc8, .y=0x32, .sp=0xcb, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xac99, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xac9a, .a=0xe2, .x=0xc8, .y=0x32, .sp=0xc8, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0xac99, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xac99, .value=0xbd, .type=IO_READ},
        {.addr=0xac9a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_015B) {
    const struct CPU_State initial_cpu = {.pc=0x4753, .a=0x27, .x=0xb8, .y=0xd0, .sp=0x07, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x4753, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x4754, .a=0x27, .x=0xb8, .y=0xd0, .sp=0xb8, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x4753, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x4753, .value=0xbd, .type=IO_READ},
        {.addr=0x4754, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_015C) {
    const struct CPU_State initial_cpu = {.pc=0x41aa, .a=0x59, .x=0x89, .y=0x95, .sp=0x13, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x41aa, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x41ab, .a=0x59, .x=0x89, .y=0x95, .sp=0x89, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x41aa, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x41aa, .value=0xbd, .type=IO_READ},
        {.addr=0x41ab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_015D) {
    const struct CPU_State initial_cpu = {.pc=0x75d1, .a=0x01, .x=0x53, .y=0xdb, .sp=0x53, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x75d1, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x75d2, .a=0x01, .x=0x53, .y=0xdb, .sp=0x53, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x75d1, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x75d1, .value=0xbd, .type=IO_READ},
        {.addr=0x75d2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_015E) {
    const struct CPU_State initial_cpu = {.pc=0x55e7, .a=0x22, .x=0xee, .y=0xdb, .sp=0x87, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x55e7, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x55e8, .a=0x22, .x=0xee, .y=0xdb, .sp=0xee, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x55e7, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x55e7, .value=0xbd, .type=IO_READ},
        {.addr=0x55e8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_015F) {
    const struct CPU_State initial_cpu = {.pc=0x0c5d, .a=0xf7, .x=0xe4, .y=0x2b, .sp=0xc3, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x0c5d, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x0c5e, .a=0xf7, .x=0xe4, .y=0x2b, .sp=0xe4, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x0c5d, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x0c5d, .value=0xbd, .type=IO_READ},
        {.addr=0x0c5e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0160) {
    const struct CPU_State initial_cpu = {.pc=0x68a4, .a=0x88, .x=0xce, .y=0x0b, .sp=0xb0, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x68a4, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x68a5, .a=0x88, .x=0xce, .y=0x0b, .sp=0xce, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x68a4, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x68a4, .value=0xbd, .type=IO_READ},
        {.addr=0x68a5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0161) {
    const struct CPU_State initial_cpu = {.pc=0xb717, .a=0xf2, .x=0xbf, .y=0xbf, .sp=0x0e, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xb717, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xb718, .a=0xf2, .x=0xbf, .y=0xbf, .sp=0xbf, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0xb717, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xb717, .value=0xbd, .type=IO_READ},
        {.addr=0xb718, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0162) {
    const struct CPU_State initial_cpu = {.pc=0x18fc, .a=0xa5, .x=0xfc, .y=0x3c, .sp=0x86, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x18fc, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x18fd, .a=0xa5, .x=0xfc, .y=0x3c, .sp=0xfc, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x18fc, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x18fc, .value=0xbd, .type=IO_READ},
        {.addr=0x18fd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0163) {
    const struct CPU_State initial_cpu = {.pc=0x6c7a, .a=0xa3, .x=0x05, .y=0xee, .sp=0xe3, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x6c7a, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x6c7b, .a=0xa3, .x=0x05, .y=0xee, .sp=0x05, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x6c7a, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x6c7a, .value=0xbd, .type=IO_READ},
        {.addr=0x6c7b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0164) {
    const struct CPU_State initial_cpu = {.pc=0xfc5c, .a=0x07, .x=0xb1, .y=0x02, .sp=0x0f, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xfc5c, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xfc5d, .a=0x07, .x=0xb1, .y=0x02, .sp=0xb1, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0xfc5c, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xfc5c, .value=0xbd, .type=IO_READ},
        {.addr=0xfc5d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0165) {
    const struct CPU_State initial_cpu = {.pc=0xb7bf, .a=0x7d, .x=0xd5, .y=0xce, .sp=0x3a, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xb7bf, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xb7c0, .a=0x7d, .x=0xd5, .y=0xce, .sp=0xd5, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0xb7bf, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xb7bf, .value=0xbd, .type=IO_READ},
        {.addr=0xb7c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0166) {
    const struct CPU_State initial_cpu = {.pc=0x3a90, .a=0x20, .x=0x47, .y=0x7c, .sp=0xf1, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x3a90, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x3a91, .a=0x20, .x=0x47, .y=0x7c, .sp=0x47, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x3a90, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x3a90, .value=0xbd, .type=IO_READ},
        {.addr=0x3a91, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0167) {
    const struct CPU_State initial_cpu = {.pc=0xcba1, .a=0xd7, .x=0x30, .y=0xea, .sp=0x28, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xcba1, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xcba2, .a=0xd7, .x=0x30, .y=0xea, .sp=0x30, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xcba1, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xcba1, .value=0xbd, .type=IO_READ},
        {.addr=0xcba2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0168) {
    const struct CPU_State initial_cpu = {.pc=0xe918, .a=0x67, .x=0x8a, .y=0xad, .sp=0xb3, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xe918, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xe919, .a=0x67, .x=0x8a, .y=0xad, .sp=0x8a, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xe918, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xe918, .value=0xbd, .type=IO_READ},
        {.addr=0xe919, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0169) {
    const struct CPU_State initial_cpu = {.pc=0x5233, .a=0x00, .x=0x88, .y=0x6a, .sp=0x57, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x5233, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x5234, .a=0x00, .x=0x88, .y=0x6a, .sp=0x88, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x5233, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x5233, .value=0xbd, .type=IO_READ},
        {.addr=0x5234, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_016A) {
    const struct CPU_State initial_cpu = {.pc=0x0f80, .a=0x3b, .x=0x70, .y=0xf0, .sp=0x72, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x0f80, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x0f81, .a=0x3b, .x=0x70, .y=0xf0, .sp=0x70, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x0f80, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x0f80, .value=0xbd, .type=IO_READ},
        {.addr=0x0f81, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_016B) {
    const struct CPU_State initial_cpu = {.pc=0xd37c, .a=0xa0, .x=0x16, .y=0xdf, .sp=0x6b, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xd37c, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xd37d, .a=0xa0, .x=0x16, .y=0xdf, .sp=0x16, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0xd37c, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xd37c, .value=0xbd, .type=IO_READ},
        {.addr=0xd37d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_016C) {
    const struct CPU_State initial_cpu = {.pc=0x7b4c, .a=0x66, .x=0xd3, .y=0xa9, .sp=0xdc, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x7b4c, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x7b4d, .a=0x66, .x=0xd3, .y=0xa9, .sp=0xd3, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x7b4c, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x7b4c, .value=0xbd, .type=IO_READ},
        {.addr=0x7b4d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_016D) {
    const struct CPU_State initial_cpu = {.pc=0x804c, .a=0x79, .x=0x0c, .y=0x09, .sp=0xb7, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x804c, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x804d, .a=0x79, .x=0x0c, .y=0x09, .sp=0x0c, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x804c, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x804c, .value=0xbd, .type=IO_READ},
        {.addr=0x804d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_016E) {
    const struct CPU_State initial_cpu = {.pc=0x2c7c, .a=0x40, .x=0x2a, .y=0x48, .sp=0xa3, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x2c7c, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x2c7d, .a=0x40, .x=0x2a, .y=0x48, .sp=0x2a, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x2c7c, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x2c7c, .value=0xbd, .type=IO_READ},
        {.addr=0x2c7d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_016F) {
    const struct CPU_State initial_cpu = {.pc=0x0e70, .a=0x25, .x=0xaf, .y=0x66, .sp=0xa8, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x0e70, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x0e71, .a=0x25, .x=0xaf, .y=0x66, .sp=0xaf, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x0e70, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x0e70, .value=0xbd, .type=IO_READ},
        {.addr=0x0e71, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0170) {
    const struct CPU_State initial_cpu = {.pc=0x9456, .a=0x13, .x=0x46, .y=0xe3, .sp=0xff, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x9456, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x9457, .a=0x13, .x=0x46, .y=0xe3, .sp=0x46, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x9456, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x9456, .value=0xbd, .type=IO_READ},
        {.addr=0x9457, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0171) {
    const struct CPU_State initial_cpu = {.pc=0x3622, .a=0x10, .x=0x55, .y=0x41, .sp=0xc5, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x3622, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x3623, .a=0x10, .x=0x55, .y=0x41, .sp=0x55, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x3622, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x3622, .value=0xbd, .type=IO_READ},
        {.addr=0x3623, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0172) {
    const struct CPU_State initial_cpu = {.pc=0x71d3, .a=0x5c, .x=0x35, .y=0x86, .sp=0xd9, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x71d3, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x71d4, .a=0x5c, .x=0x35, .y=0x86, .sp=0x35, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x71d3, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x71d3, .value=0xbd, .type=IO_READ},
        {.addr=0x71d4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0173) {
    const struct CPU_State initial_cpu = {.pc=0x0b13, .a=0x86, .x=0xf4, .y=0x63, .sp=0x56, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x0b13, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x0b14, .a=0x86, .x=0xf4, .y=0x63, .sp=0xf4, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x0b13, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x0b13, .value=0xbd, .type=IO_READ},
        {.addr=0x0b14, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0174) {
    const struct CPU_State initial_cpu = {.pc=0x5989, .a=0xd1, .x=0x97, .y=0xb3, .sp=0x44, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x5989, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x598a, .a=0xd1, .x=0x97, .y=0xb3, .sp=0x97, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x5989, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x5989, .value=0xbd, .type=IO_READ},
        {.addr=0x598a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0175) {
    const struct CPU_State initial_cpu = {.pc=0xfd31, .a=0x92, .x=0xee, .y=0x3a, .sp=0xc7, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xfd31, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xfd32, .a=0x92, .x=0xee, .y=0x3a, .sp=0xee, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0xfd31, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xfd31, .value=0xbd, .type=IO_READ},
        {.addr=0xfd32, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0176) {
    const struct CPU_State initial_cpu = {.pc=0x7c4e, .a=0x14, .x=0x26, .y=0x5e, .sp=0x90, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x7c4e, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x7c4f, .a=0x14, .x=0x26, .y=0x5e, .sp=0x26, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x7c4e, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x7c4e, .value=0xbd, .type=IO_READ},
        {.addr=0x7c4f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0177) {
    const struct CPU_State initial_cpu = {.pc=0x059c, .a=0x5f, .x=0xe2, .y=0x3e, .sp=0x54, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x059c, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x059d, .a=0x5f, .x=0xe2, .y=0x3e, .sp=0xe2, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x059c, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x059c, .value=0xbd, .type=IO_READ},
        {.addr=0x059d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0178) {
    const struct CPU_State initial_cpu = {.pc=0xb10c, .a=0x16, .x=0xbc, .y=0xa2, .sp=0x43, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xb10c, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xb10d, .a=0x16, .x=0xbc, .y=0xa2, .sp=0xbc, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xb10c, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xb10c, .value=0xbd, .type=IO_READ},
        {.addr=0xb10d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0179) {
    const struct CPU_State initial_cpu = {.pc=0x00ab, .a=0xa0, .x=0x7a, .y=0xa2, .sp=0x4d, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x00ab, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x00ac, .a=0xa0, .x=0x7a, .y=0xa2, .sp=0x7a, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x00ab, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x00ab, .value=0xbd, .type=IO_READ},
        {.addr=0x00ac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_017A) {
    const struct CPU_State initial_cpu = {.pc=0x2e2c, .a=0x1a, .x=0x61, .y=0x37, .sp=0x77, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x2e2c, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x2e2d, .a=0x1a, .x=0x61, .y=0x37, .sp=0x61, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x2e2c, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x2e2c, .value=0xbd, .type=IO_READ},
        {.addr=0x2e2d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_017B) {
    const struct CPU_State initial_cpu = {.pc=0xb391, .a=0x73, .x=0xe3, .y=0xdc, .sp=0x2a, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xb391, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xb392, .a=0x73, .x=0xe3, .y=0xdc, .sp=0xe3, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xb391, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xb391, .value=0xbd, .type=IO_READ},
        {.addr=0xb392, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_017C) {
    const struct CPU_State initial_cpu = {.pc=0xf798, .a=0xec, .x=0x08, .y=0x0a, .sp=0xe8, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xf798, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xf799, .a=0xec, .x=0x08, .y=0x0a, .sp=0x08, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0xf798, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xf798, .value=0xbd, .type=IO_READ},
        {.addr=0xf799, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_017D) {
    const struct CPU_State initial_cpu = {.pc=0xf8bd, .a=0xe8, .x=0x80, .y=0xe3, .sp=0xfd, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xf8bd, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xf8be, .a=0xe8, .x=0x80, .y=0xe3, .sp=0x80, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xf8bd, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xf8bd, .value=0xbd, .type=IO_READ},
        {.addr=0xf8be, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_017E) {
    const struct CPU_State initial_cpu = {.pc=0xb6d6, .a=0x4d, .x=0x9a, .y=0x5e, .sp=0x47, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xb6d6, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xb6d7, .a=0x4d, .x=0x9a, .y=0x5e, .sp=0x9a, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xb6d6, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xb6d6, .value=0xbd, .type=IO_READ},
        {.addr=0xb6d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_017F) {
    const struct CPU_State initial_cpu = {.pc=0x69d5, .a=0xde, .x=0x6a, .y=0xd8, .sp=0xda, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x69d5, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x69d6, .a=0xde, .x=0x6a, .y=0xd8, .sp=0x6a, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x69d5, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x69d5, .value=0xbd, .type=IO_READ},
        {.addr=0x69d6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0180) {
    const struct CPU_State initial_cpu = {.pc=0x9d95, .a=0x10, .x=0xd0, .y=0x62, .sp=0xe3, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x9d95, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x9d96, .a=0x10, .x=0xd0, .y=0x62, .sp=0xd0, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x9d95, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x9d95, .value=0xbd, .type=IO_READ},
        {.addr=0x9d96, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0181) {
    const struct CPU_State initial_cpu = {.pc=0x39a0, .a=0xc5, .x=0x39, .y=0xb8, .sp=0xda, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x39a0, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x39a1, .a=0xc5, .x=0x39, .y=0xb8, .sp=0x39, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x39a0, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x39a0, .value=0xbd, .type=IO_READ},
        {.addr=0x39a1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0182) {
    const struct CPU_State initial_cpu = {.pc=0xc2d6, .a=0x02, .x=0x9b, .y=0x3f, .sp=0xed, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xc2d6, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xc2d7, .a=0x02, .x=0x9b, .y=0x3f, .sp=0x9b, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0xc2d6, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xc2d6, .value=0xbd, .type=IO_READ},
        {.addr=0xc2d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0183) {
    const struct CPU_State initial_cpu = {.pc=0x4f10, .a=0x91, .x=0x67, .y=0x09, .sp=0x13, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x4f10, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x4f11, .a=0x91, .x=0x67, .y=0x09, .sp=0x67, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x4f10, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x4f10, .value=0xbd, .type=IO_READ},
        {.addr=0x4f11, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0184) {
    const struct CPU_State initial_cpu = {.pc=0xfc8a, .a=0x8a, .x=0x97, .y=0xff, .sp=0xab, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xfc8a, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xfc8b, .a=0x8a, .x=0x97, .y=0xff, .sp=0x97, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xfc8a, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xfc8a, .value=0xbd, .type=IO_READ},
        {.addr=0xfc8b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0185) {
    const struct CPU_State initial_cpu = {.pc=0xdca3, .a=0xfb, .x=0x12, .y=0x95, .sp=0x93, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xdca3, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xdca4, .a=0xfb, .x=0x12, .y=0x95, .sp=0x12, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xdca3, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xdca3, .value=0xbd, .type=IO_READ},
        {.addr=0xdca4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0186) {
    const struct CPU_State initial_cpu = {.pc=0xb51d, .a=0x12, .x=0x8a, .y=0xfc, .sp=0x42, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xb51d, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xb51e, .a=0x12, .x=0x8a, .y=0xfc, .sp=0x8a, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xb51d, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xb51d, .value=0xbd, .type=IO_READ},
        {.addr=0xb51e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0187) {
    const struct CPU_State initial_cpu = {.pc=0x1b07, .a=0x7b, .x=0xaf, .y=0xb9, .sp=0x15, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x1b07, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x1b08, .a=0x7b, .x=0xaf, .y=0xb9, .sp=0xaf, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x1b07, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x1b07, .value=0xbd, .type=IO_READ},
        {.addr=0x1b08, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0188) {
    const struct CPU_State initial_cpu = {.pc=0x387c, .a=0x3a, .x=0x11, .y=0xf1, .sp=0x4e, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x387c, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x387d, .a=0x3a, .x=0x11, .y=0xf1, .sp=0x11, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x387c, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x387c, .value=0xbd, .type=IO_READ},
        {.addr=0x387d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0189) {
    const struct CPU_State initial_cpu = {.pc=0x88f6, .a=0x09, .x=0xbb, .y=0xe4, .sp=0x4f, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x88f6, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x88f7, .a=0x09, .x=0xbb, .y=0xe4, .sp=0xbb, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x88f6, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x88f6, .value=0xbd, .type=IO_READ},
        {.addr=0x88f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_018A) {
    const struct CPU_State initial_cpu = {.pc=0x3d4f, .a=0xe4, .x=0x10, .y=0x8c, .sp=0x8e, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x3d4f, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x3d50, .a=0xe4, .x=0x10, .y=0x8c, .sp=0x10, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x3d4f, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x3d4f, .value=0xbd, .type=IO_READ},
        {.addr=0x3d50, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_018B) {
    const struct CPU_State initial_cpu = {.pc=0x2b39, .a=0xe6, .x=0xc8, .y=0x09, .sp=0xdc, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x2b39, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x2b3a, .a=0xe6, .x=0xc8, .y=0x09, .sp=0xc8, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x2b39, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x2b39, .value=0xbd, .type=IO_READ},
        {.addr=0x2b3a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_018C) {
    const struct CPU_State initial_cpu = {.pc=0x928b, .a=0x96, .x=0x81, .y=0x12, .sp=0xca, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x928b, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x928c, .a=0x96, .x=0x81, .y=0x12, .sp=0x81, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x928b, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x928b, .value=0xbd, .type=IO_READ},
        {.addr=0x928c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_018D) {
    const struct CPU_State initial_cpu = {.pc=0xfb43, .a=0x76, .x=0x0a, .y=0x20, .sp=0xb6, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xfb43, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xfb44, .a=0x76, .x=0x0a, .y=0x20, .sp=0x0a, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xfb43, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xfb43, .value=0xbd, .type=IO_READ},
        {.addr=0xfb44, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_018E) {
    const struct CPU_State initial_cpu = {.pc=0xddae, .a=0x29, .x=0xb2, .y=0xcf, .sp=0xbd, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xddae, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xddaf, .a=0x29, .x=0xb2, .y=0xcf, .sp=0xb2, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0xddae, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xddae, .value=0xbd, .type=IO_READ},
        {.addr=0xddaf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_018F) {
    const struct CPU_State initial_cpu = {.pc=0x097c, .a=0x33, .x=0x4c, .y=0xb5, .sp=0xb5, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x097c, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x097d, .a=0x33, .x=0x4c, .y=0xb5, .sp=0x4c, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x097c, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x097c, .value=0xbd, .type=IO_READ},
        {.addr=0x097d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0190) {
    const struct CPU_State initial_cpu = {.pc=0x1009, .a=0x3c, .x=0xc9, .y=0xf9, .sp=0xda, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x1009, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x100a, .a=0x3c, .x=0xc9, .y=0xf9, .sp=0xc9, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x1009, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x1009, .value=0xbd, .type=IO_READ},
        {.addr=0x100a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0191) {
    const struct CPU_State initial_cpu = {.pc=0x5e31, .a=0x5b, .x=0x28, .y=0xdd, .sp=0x86, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x5e31, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x5e32, .a=0x5b, .x=0x28, .y=0xdd, .sp=0x28, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x5e31, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x5e31, .value=0xbd, .type=IO_READ},
        {.addr=0x5e32, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0192) {
    const struct CPU_State initial_cpu = {.pc=0x5b1d, .a=0xeb, .x=0x3e, .y=0xf2, .sp=0x8b, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x5b1d, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x5b1e, .a=0xeb, .x=0x3e, .y=0xf2, .sp=0x3e, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x5b1d, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x5b1d, .value=0xbd, .type=IO_READ},
        {.addr=0x5b1e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0193) {
    const struct CPU_State initial_cpu = {.pc=0x181f, .a=0xb2, .x=0x43, .y=0x06, .sp=0x8c, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x181f, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x1820, .a=0xb2, .x=0x43, .y=0x06, .sp=0x43, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x181f, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x181f, .value=0xbd, .type=IO_READ},
        {.addr=0x1820, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0194) {
    const struct CPU_State initial_cpu = {.pc=0x25d8, .a=0x9c, .x=0xc2, .y=0x9f, .sp=0x0d, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x25d8, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x25d9, .a=0x9c, .x=0xc2, .y=0x9f, .sp=0xc2, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x25d8, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x25d8, .value=0xbd, .type=IO_READ},
        {.addr=0x25d9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0195) {
    const struct CPU_State initial_cpu = {.pc=0x962b, .a=0xff, .x=0x6c, .y=0x1f, .sp=0x21, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x962b, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x962c, .a=0xff, .x=0x6c, .y=0x1f, .sp=0x6c, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x962b, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x962b, .value=0xbd, .type=IO_READ},
        {.addr=0x962c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0196) {
    const struct CPU_State initial_cpu = {.pc=0x74a1, .a=0x62, .x=0x44, .y=0x02, .sp=0xc3, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x74a1, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x74a2, .a=0x62, .x=0x44, .y=0x02, .sp=0x44, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x74a1, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x74a1, .value=0xbd, .type=IO_READ},
        {.addr=0x74a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0197) {
    const struct CPU_State initial_cpu = {.pc=0x44a5, .a=0x98, .x=0x3d, .y=0x75, .sp=0x98, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x44a5, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x44a6, .a=0x98, .x=0x3d, .y=0x75, .sp=0x3d, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x44a5, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x44a5, .value=0xbd, .type=IO_READ},
        {.addr=0x44a6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0198) {
    const struct CPU_State initial_cpu = {.pc=0xb502, .a=0xb6, .x=0xed, .y=0xfe, .sp=0x95, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xb502, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xb503, .a=0xb6, .x=0xed, .y=0xfe, .sp=0xed, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0xb502, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xb502, .value=0xbd, .type=IO_READ},
        {.addr=0xb503, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0199) {
    const struct CPU_State initial_cpu = {.pc=0x6f3f, .a=0x0e, .x=0x9d, .y=0x1f, .sp=0x82, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x6f3f, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x6f40, .a=0x0e, .x=0x9d, .y=0x1f, .sp=0x9d, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x6f3f, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x6f3f, .value=0xbd, .type=IO_READ},
        {.addr=0x6f40, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_019A) {
    const struct CPU_State initial_cpu = {.pc=0x4acc, .a=0xf2, .x=0xbc, .y=0xb1, .sp=0xde, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x4acc, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x4acd, .a=0xf2, .x=0xbc, .y=0xb1, .sp=0xbc, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x4acc, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x4acc, .value=0xbd, .type=IO_READ},
        {.addr=0x4acd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_019B) {
    const struct CPU_State initial_cpu = {.pc=0x1d9e, .a=0x49, .x=0xf4, .y=0x13, .sp=0x0f, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x1d9e, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x1d9f, .a=0x49, .x=0xf4, .y=0x13, .sp=0xf4, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x1d9e, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x1d9e, .value=0xbd, .type=IO_READ},
        {.addr=0x1d9f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_019C) {
    const struct CPU_State initial_cpu = {.pc=0x1958, .a=0x16, .x=0xcf, .y=0xbf, .sp=0xe3, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x1958, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x1959, .a=0x16, .x=0xcf, .y=0xbf, .sp=0xcf, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x1958, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x1958, .value=0xbd, .type=IO_READ},
        {.addr=0x1959, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_019D) {
    const struct CPU_State initial_cpu = {.pc=0x7273, .a=0x53, .x=0xc8, .y=0xb5, .sp=0x10, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x7273, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x7274, .a=0x53, .x=0xc8, .y=0xb5, .sp=0xc8, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x7273, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x7273, .value=0xbd, .type=IO_READ},
        {.addr=0x7274, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_019E) {
    const struct CPU_State initial_cpu = {.pc=0x060f, .a=0xd2, .x=0xf5, .y=0x5d, .sp=0x83, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x060f, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x0610, .a=0xd2, .x=0xf5, .y=0x5d, .sp=0xf5, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x060f, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x060f, .value=0xbd, .type=IO_READ},
        {.addr=0x0610, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_019F) {
    const struct CPU_State initial_cpu = {.pc=0xa422, .a=0xb4, .x=0x27, .y=0x86, .sp=0xa7, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xa422, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xa423, .a=0xb4, .x=0x27, .y=0x86, .sp=0x27, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xa422, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xa422, .value=0xbd, .type=IO_READ},
        {.addr=0xa423, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01A0) {
    const struct CPU_State initial_cpu = {.pc=0x0aeb, .a=0x68, .x=0x22, .y=0x85, .sp=0x15, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x0aeb, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x0aec, .a=0x68, .x=0x22, .y=0x85, .sp=0x22, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x0aeb, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x0aeb, .value=0xbd, .type=IO_READ},
        {.addr=0x0aec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01A1) {
    const struct CPU_State initial_cpu = {.pc=0x1f92, .a=0xcb, .x=0x42, .y=0x0f, .sp=0x11, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x1f92, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x1f93, .a=0xcb, .x=0x42, .y=0x0f, .sp=0x42, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x1f92, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x1f92, .value=0xbd, .type=IO_READ},
        {.addr=0x1f93, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01A2) {
    const struct CPU_State initial_cpu = {.pc=0xc6ed, .a=0x56, .x=0xee, .y=0xce, .sp=0x00, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xc6ed, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xc6ee, .a=0x56, .x=0xee, .y=0xce, .sp=0xee, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xc6ed, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xc6ed, .value=0xbd, .type=IO_READ},
        {.addr=0xc6ee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01A3) {
    const struct CPU_State initial_cpu = {.pc=0x7b36, .a=0x07, .x=0x22, .y=0x9c, .sp=0xbd, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x7b36, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x7b37, .a=0x07, .x=0x22, .y=0x9c, .sp=0x22, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x7b36, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x7b36, .value=0xbd, .type=IO_READ},
        {.addr=0x7b37, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01A4) {
    const struct CPU_State initial_cpu = {.pc=0x4aef, .a=0x36, .x=0x8c, .y=0x79, .sp=0x8d, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x4aef, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x4af0, .a=0x36, .x=0x8c, .y=0x79, .sp=0x8c, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x4aef, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x4aef, .value=0xbd, .type=IO_READ},
        {.addr=0x4af0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01A5) {
    const struct CPU_State initial_cpu = {.pc=0x0aeb, .a=0xf6, .x=0x95, .y=0x72, .sp=0x9f, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x0aeb, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x0aec, .a=0xf6, .x=0x95, .y=0x72, .sp=0x95, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0aeb, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x0aeb, .value=0xbd, .type=IO_READ},
        {.addr=0x0aec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01A6) {
    const struct CPU_State initial_cpu = {.pc=0x6f2a, .a=0xf8, .x=0x69, .y=0xe1, .sp=0x16, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x6f2a, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x6f2b, .a=0xf8, .x=0x69, .y=0xe1, .sp=0x69, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x6f2a, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x6f2a, .value=0xbd, .type=IO_READ},
        {.addr=0x6f2b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01A7) {
    const struct CPU_State initial_cpu = {.pc=0xc6d0, .a=0x81, .x=0x88, .y=0x5f, .sp=0x0e, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xc6d0, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xc6d1, .a=0x81, .x=0x88, .y=0x5f, .sp=0x88, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xc6d0, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xc6d0, .value=0xbd, .type=IO_READ},
        {.addr=0xc6d1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01A8) {
    const struct CPU_State initial_cpu = {.pc=0x81d3, .a=0xdb, .x=0x30, .y=0xf8, .sp=0xdc, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x81d3, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x81d4, .a=0xdb, .x=0x30, .y=0xf8, .sp=0x30, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x81d3, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x81d3, .value=0xbd, .type=IO_READ},
        {.addr=0x81d4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01A9) {
    const struct CPU_State initial_cpu = {.pc=0x1a1a, .a=0x6a, .x=0xe9, .y=0x4d, .sp=0xea, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x1a1a, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x1a1b, .a=0x6a, .x=0xe9, .y=0x4d, .sp=0xe9, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x1a1a, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x1a1a, .value=0xbd, .type=IO_READ},
        {.addr=0x1a1b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01AA) {
    const struct CPU_State initial_cpu = {.pc=0x06ba, .a=0x92, .x=0xa9, .y=0xdd, .sp=0x69, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x06ba, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x06bb, .a=0x92, .x=0xa9, .y=0xdd, .sp=0xa9, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x06ba, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x06ba, .value=0xbd, .type=IO_READ},
        {.addr=0x06bb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01AB) {
    const struct CPU_State initial_cpu = {.pc=0xeacd, .a=0xc2, .x=0x03, .y=0xc7, .sp=0x09, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xeacd, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xeace, .a=0xc2, .x=0x03, .y=0xc7, .sp=0x03, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xeacd, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xeacd, .value=0xbd, .type=IO_READ},
        {.addr=0xeace, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01AC) {
    const struct CPU_State initial_cpu = {.pc=0xe389, .a=0xea, .x=0x45, .y=0xf0, .sp=0x42, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xe389, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xe38a, .a=0xea, .x=0x45, .y=0xf0, .sp=0x45, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xe389, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xe389, .value=0xbd, .type=IO_READ},
        {.addr=0xe38a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01AD) {
    const struct CPU_State initial_cpu = {.pc=0x526d, .a=0x2f, .x=0xf2, .y=0x60, .sp=0xad, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x526d, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x526e, .a=0x2f, .x=0xf2, .y=0x60, .sp=0xf2, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x526d, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x526d, .value=0xbd, .type=IO_READ},
        {.addr=0x526e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01AE) {
    const struct CPU_State initial_cpu = {.pc=0xc8e8, .a=0x57, .x=0x40, .y=0x76, .sp=0x57, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xc8e8, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xc8e9, .a=0x57, .x=0x40, .y=0x76, .sp=0x40, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xc8e8, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xc8e8, .value=0xbd, .type=IO_READ},
        {.addr=0xc8e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01AF) {
    const struct CPU_State initial_cpu = {.pc=0xa8dd, .a=0xdc, .x=0xe1, .y=0x54, .sp=0x28, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xa8dd, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xa8de, .a=0xdc, .x=0xe1, .y=0x54, .sp=0xe1, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xa8dd, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xa8dd, .value=0xbd, .type=IO_READ},
        {.addr=0xa8de, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01B0) {
    const struct CPU_State initial_cpu = {.pc=0x0580, .a=0xcc, .x=0x3f, .y=0xc0, .sp=0x59, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x0580, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x0581, .a=0xcc, .x=0x3f, .y=0xc0, .sp=0x3f, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x0580, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x0580, .value=0xbd, .type=IO_READ},
        {.addr=0x0581, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01B1) {
    const struct CPU_State initial_cpu = {.pc=0xd174, .a=0x08, .x=0x02, .y=0xb1, .sp=0x85, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xd174, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xd175, .a=0x08, .x=0x02, .y=0xb1, .sp=0x02, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xd174, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xd174, .value=0xbd, .type=IO_READ},
        {.addr=0xd175, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x5646, .a=0x71, .x=0x12, .y=0xef, .sp=0xf3, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x5646, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x5647, .a=0x71, .x=0x12, .y=0xef, .sp=0x12, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x5646, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x5646, .value=0xbd, .type=IO_READ},
        {.addr=0x5647, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01B3) {
    const struct CPU_State initial_cpu = {.pc=0x1d93, .a=0x0a, .x=0x1f, .y=0x7f, .sp=0x02, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x1d93, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x1d94, .a=0x0a, .x=0x1f, .y=0x7f, .sp=0x1f, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x1d93, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x1d93, .value=0xbd, .type=IO_READ},
        {.addr=0x1d94, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01B4) {
    const struct CPU_State initial_cpu = {.pc=0xf0a4, .a=0x85, .x=0xa7, .y=0xd2, .sp=0x15, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xf0a4, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xf0a5, .a=0x85, .x=0xa7, .y=0xd2, .sp=0xa7, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0xf0a4, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xf0a4, .value=0xbd, .type=IO_READ},
        {.addr=0xf0a5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01B5) {
    const struct CPU_State initial_cpu = {.pc=0xc060, .a=0xb2, .x=0xb1, .y=0x31, .sp=0xf3, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xc060, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xc061, .a=0xb2, .x=0xb1, .y=0x31, .sp=0xb1, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0xc060, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xc060, .value=0xbd, .type=IO_READ},
        {.addr=0xc061, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01B6) {
    const struct CPU_State initial_cpu = {.pc=0x5fc5, .a=0xac, .x=0x97, .y=0x0f, .sp=0xb4, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x5fc5, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x5fc6, .a=0xac, .x=0x97, .y=0x0f, .sp=0x97, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x5fc5, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x5fc5, .value=0xbd, .type=IO_READ},
        {.addr=0x5fc6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01B7) {
    const struct CPU_State initial_cpu = {.pc=0x1183, .a=0xc9, .x=0xc2, .y=0x76, .sp=0x22, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x1183, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x1184, .a=0xc9, .x=0xc2, .y=0x76, .sp=0xc2, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x1183, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x1183, .value=0xbd, .type=IO_READ},
        {.addr=0x1184, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01B8) {
    const struct CPU_State initial_cpu = {.pc=0xd1a1, .a=0x47, .x=0xe8, .y=0xa3, .sp=0x20, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xd1a1, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xd1a2, .a=0x47, .x=0xe8, .y=0xa3, .sp=0xe8, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xd1a1, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xd1a1, .value=0xbd, .type=IO_READ},
        {.addr=0xd1a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01B9) {
    const struct CPU_State initial_cpu = {.pc=0x6f7d, .a=0x5f, .x=0x0a, .y=0xec, .sp=0x50, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x6f7d, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x6f7e, .a=0x5f, .x=0x0a, .y=0xec, .sp=0x0a, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x6f7d, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x6f7d, .value=0xbd, .type=IO_READ},
        {.addr=0x6f7e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01BA) {
    const struct CPU_State initial_cpu = {.pc=0xdd24, .a=0x28, .x=0x85, .y=0xa1, .sp=0xa6, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0xdd24, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xdd25, .a=0x28, .x=0x85, .y=0xa1, .sp=0x85, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xdd24, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xdd24, .value=0xbd, .type=IO_READ},
        {.addr=0xdd25, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01BB) {
    const struct CPU_State initial_cpu = {.pc=0x20e9, .a=0x0e, .x=0x07, .y=0x78, .sp=0xc9, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x20e9, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x20ea, .a=0x0e, .x=0x07, .y=0x78, .sp=0x07, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x20e9, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x20e9, .value=0xbd, .type=IO_READ},
        {.addr=0x20ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01BC) {
    const struct CPU_State initial_cpu = {.pc=0xfdcc, .a=0x0d, .x=0x58, .y=0xf2, .sp=0x15, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xfdcc, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xfdcd, .a=0x0d, .x=0x58, .y=0xf2, .sp=0x58, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0xfdcc, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xfdcc, .value=0xbd, .type=IO_READ},
        {.addr=0xfdcd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01BD) {
    const struct CPU_State initial_cpu = {.pc=0x3d2b, .a=0x07, .x=0x28, .y=0xa8, .sp=0x69, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x3d2b, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x3d2c, .a=0x07, .x=0x28, .y=0xa8, .sp=0x28, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x3d2b, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x3d2b, .value=0xbd, .type=IO_READ},
        {.addr=0x3d2c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01BE) {
    const struct CPU_State initial_cpu = {.pc=0xb7b8, .a=0x65, .x=0x19, .y=0x6a, .sp=0x8f, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xb7b8, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xb7b9, .a=0x65, .x=0x19, .y=0x6a, .sp=0x19, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0xb7b8, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xb7b8, .value=0xbd, .type=IO_READ},
        {.addr=0xb7b9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01BF) {
    const struct CPU_State initial_cpu = {.pc=0x14e7, .a=0x64, .x=0xb8, .y=0x03, .sp=0x7a, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x14e7, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x14e8, .a=0x64, .x=0xb8, .y=0x03, .sp=0xb8, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x14e7, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x14e7, .value=0xbd, .type=IO_READ},
        {.addr=0x14e8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01C0) {
    const struct CPU_State initial_cpu = {.pc=0xdf10, .a=0x6d, .x=0x4a, .y=0xac, .sp=0x55, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xdf10, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xdf11, .a=0x6d, .x=0x4a, .y=0xac, .sp=0x4a, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xdf10, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xdf10, .value=0xbd, .type=IO_READ},
        {.addr=0xdf11, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01C1) {
    const struct CPU_State initial_cpu = {.pc=0xf376, .a=0x19, .x=0x63, .y=0x0d, .sp=0x54, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xf376, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xf377, .a=0x19, .x=0x63, .y=0x0d, .sp=0x63, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0xf376, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xf376, .value=0xbd, .type=IO_READ},
        {.addr=0xf377, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01C2) {
    const struct CPU_State initial_cpu = {.pc=0x4815, .a=0x92, .x=0xcb, .y=0xb3, .sp=0x4d, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x4815, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x4816, .a=0x92, .x=0xcb, .y=0xb3, .sp=0xcb, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x4815, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x4815, .value=0xbd, .type=IO_READ},
        {.addr=0x4816, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01C3) {
    const struct CPU_State initial_cpu = {.pc=0x9eaf, .a=0x64, .x=0xf0, .y=0x1c, .sp=0x55, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x9eaf, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x9eb0, .a=0x64, .x=0xf0, .y=0x1c, .sp=0xf0, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x9eaf, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x9eaf, .value=0xbd, .type=IO_READ},
        {.addr=0x9eb0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01C4) {
    const struct CPU_State initial_cpu = {.pc=0x3a43, .a=0xa4, .x=0xcb, .y=0xdf, .sp=0xc3, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x3a43, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x3a44, .a=0xa4, .x=0xcb, .y=0xdf, .sp=0xcb, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x3a43, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x3a43, .value=0xbd, .type=IO_READ},
        {.addr=0x3a44, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01C5) {
    const struct CPU_State initial_cpu = {.pc=0x7cbf, .a=0x86, .x=0xdc, .y=0x46, .sp=0x39, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x7cbf, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x7cc0, .a=0x86, .x=0xdc, .y=0x46, .sp=0xdc, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x7cbf, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x7cbf, .value=0xbd, .type=IO_READ},
        {.addr=0x7cc0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01C6) {
    const struct CPU_State initial_cpu = {.pc=0xeeea, .a=0x37, .x=0xbf, .y=0x33, .sp=0xb5, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xeeea, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xeeeb, .a=0x37, .x=0xbf, .y=0x33, .sp=0xbf, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xeeea, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xeeea, .value=0xbd, .type=IO_READ},
        {.addr=0xeeeb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01C7) {
    const struct CPU_State initial_cpu = {.pc=0x6b9f, .a=0xf4, .x=0x0e, .y=0xe9, .sp=0x48, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x6b9f, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x6ba0, .a=0xf4, .x=0x0e, .y=0xe9, .sp=0x0e, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x6b9f, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x6b9f, .value=0xbd, .type=IO_READ},
        {.addr=0x6ba0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01C8) {
    const struct CPU_State initial_cpu = {.pc=0x8185, .a=0xb4, .x=0x6c, .y=0x8b, .sp=0x45, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x8185, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x8186, .a=0xb4, .x=0x6c, .y=0x8b, .sp=0x6c, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x8185, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x8185, .value=0xbd, .type=IO_READ},
        {.addr=0x8186, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01C9) {
    const struct CPU_State initial_cpu = {.pc=0x4e6f, .a=0x41, .x=0xa2, .y=0x5f, .sp=0xc9, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x4e6f, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x4e70, .a=0x41, .x=0xa2, .y=0x5f, .sp=0xa2, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x4e6f, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x4e6f, .value=0xbd, .type=IO_READ},
        {.addr=0x4e70, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01CA) {
    const struct CPU_State initial_cpu = {.pc=0x4777, .a=0x06, .x=0x67, .y=0x38, .sp=0xa6, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x4777, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x4778, .a=0x06, .x=0x67, .y=0x38, .sp=0x67, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x4777, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x4777, .value=0xbd, .type=IO_READ},
        {.addr=0x4778, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01CB) {
    const struct CPU_State initial_cpu = {.pc=0x3be8, .a=0xcb, .x=0x57, .y=0x61, .sp=0xcc, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x3be8, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x3be9, .a=0xcb, .x=0x57, .y=0x61, .sp=0x57, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x3be8, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x3be8, .value=0xbd, .type=IO_READ},
        {.addr=0x3be9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01CC) {
    const struct CPU_State initial_cpu = {.pc=0xaf8e, .a=0xbc, .x=0x91, .y=0x44, .sp=0x59, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xaf8e, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xaf8f, .a=0xbc, .x=0x91, .y=0x44, .sp=0x91, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0xaf8e, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xaf8e, .value=0xbd, .type=IO_READ},
        {.addr=0xaf8f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01CD) {
    const struct CPU_State initial_cpu = {.pc=0xc74e, .a=0xeb, .x=0x1a, .y=0xf8, .sp=0x7f, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xc74e, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xc74f, .a=0xeb, .x=0x1a, .y=0xf8, .sp=0x1a, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0xc74e, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xc74e, .value=0xbd, .type=IO_READ},
        {.addr=0xc74f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01CE) {
    const struct CPU_State initial_cpu = {.pc=0x73f6, .a=0xdd, .x=0x15, .y=0x02, .sp=0xc8, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x73f6, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x73f7, .a=0xdd, .x=0x15, .y=0x02, .sp=0x15, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x73f6, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x73f6, .value=0xbd, .type=IO_READ},
        {.addr=0x73f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01CF) {
    const struct CPU_State initial_cpu = {.pc=0x49df, .a=0x7c, .x=0x09, .y=0x71, .sp=0x7c, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x49df, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x49e0, .a=0x7c, .x=0x09, .y=0x71, .sp=0x09, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x49df, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x49df, .value=0xbd, .type=IO_READ},
        {.addr=0x49e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01D0) {
    const struct CPU_State initial_cpu = {.pc=0xb26a, .a=0x50, .x=0x3e, .y=0xa0, .sp=0xaa, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xb26a, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xb26b, .a=0x50, .x=0x3e, .y=0xa0, .sp=0x3e, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xb26a, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xb26a, .value=0xbd, .type=IO_READ},
        {.addr=0xb26b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01D1) {
    const struct CPU_State initial_cpu = {.pc=0x65c9, .a=0x5d, .x=0xf8, .y=0x76, .sp=0x52, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x65c9, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x65ca, .a=0x5d, .x=0xf8, .y=0x76, .sp=0xf8, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x65c9, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x65c9, .value=0xbd, .type=IO_READ},
        {.addr=0x65ca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01D2) {
    const struct CPU_State initial_cpu = {.pc=0x3ca2, .a=0x3d, .x=0xb3, .y=0xa2, .sp=0x83, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x3ca2, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x3ca3, .a=0x3d, .x=0xb3, .y=0xa2, .sp=0xb3, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x3ca2, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x3ca2, .value=0xbd, .type=IO_READ},
        {.addr=0x3ca3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01D3) {
    const struct CPU_State initial_cpu = {.pc=0x8c74, .a=0xd3, .x=0x7a, .y=0x9c, .sp=0x90, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x8c74, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x8c75, .a=0xd3, .x=0x7a, .y=0x9c, .sp=0x7a, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x8c74, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x8c74, .value=0xbd, .type=IO_READ},
        {.addr=0x8c75, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01D4) {
    const struct CPU_State initial_cpu = {.pc=0x93a8, .a=0x12, .x=0x5b, .y=0xe6, .sp=0xca, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x93a8, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x93a9, .a=0x12, .x=0x5b, .y=0xe6, .sp=0x5b, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x93a8, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x93a8, .value=0xbd, .type=IO_READ},
        {.addr=0x93a9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01D5) {
    const struct CPU_State initial_cpu = {.pc=0x14e8, .a=0x54, .x=0x19, .y=0x73, .sp=0x46, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x14e8, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x14e9, .a=0x54, .x=0x19, .y=0x73, .sp=0x19, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x14e8, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x14e8, .value=0xbd, .type=IO_READ},
        {.addr=0x14e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01D6) {
    const struct CPU_State initial_cpu = {.pc=0x1df0, .a=0x03, .x=0xfe, .y=0x8b, .sp=0xc0, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x1df0, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x1df1, .a=0x03, .x=0xfe, .y=0x8b, .sp=0xfe, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x1df0, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x1df0, .value=0xbd, .type=IO_READ},
        {.addr=0x1df1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01D7) {
    const struct CPU_State initial_cpu = {.pc=0x0099, .a=0x64, .x=0x60, .y=0xa0, .sp=0x93, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x0099, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x009a, .a=0x64, .x=0x60, .y=0xa0, .sp=0x60, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x0099, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x0099, .value=0xbd, .type=IO_READ},
        {.addr=0x009a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01D8) {
    const struct CPU_State initial_cpu = {.pc=0xbcbc, .a=0xd7, .x=0xcd, .y=0x45, .sp=0x21, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xbcbc, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xbcbd, .a=0xd7, .x=0xcd, .y=0x45, .sp=0xcd, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0xbcbc, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xbcbc, .value=0xbd, .type=IO_READ},
        {.addr=0xbcbd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01D9) {
    const struct CPU_State initial_cpu = {.pc=0x4981, .a=0x1f, .x=0x5e, .y=0x50, .sp=0xae, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x4981, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x4982, .a=0x1f, .x=0x5e, .y=0x50, .sp=0x5e, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x4981, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x4981, .value=0xbd, .type=IO_READ},
        {.addr=0x4982, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01DA) {
    const struct CPU_State initial_cpu = {.pc=0x03d0, .a=0x5d, .x=0x83, .y=0x5f, .sp=0xc5, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x03d0, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x03d1, .a=0x5d, .x=0x83, .y=0x5f, .sp=0x83, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x03d0, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x03d0, .value=0xbd, .type=IO_READ},
        {.addr=0x03d1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01DB) {
    const struct CPU_State initial_cpu = {.pc=0xeb06, .a=0xd6, .x=0xf9, .y=0xbb, .sp=0xce, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xeb06, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xeb07, .a=0xd6, .x=0xf9, .y=0xbb, .sp=0xf9, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xeb06, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xeb06, .value=0xbd, .type=IO_READ},
        {.addr=0xeb07, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01DC) {
    const struct CPU_State initial_cpu = {.pc=0xb160, .a=0x56, .x=0xbd, .y=0x02, .sp=0xac, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xb160, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xb161, .a=0x56, .x=0xbd, .y=0x02, .sp=0xbd, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xb160, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xb160, .value=0xbd, .type=IO_READ},
        {.addr=0xb161, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01DD) {
    const struct CPU_State initial_cpu = {.pc=0x6d9b, .a=0x12, .x=0x9d, .y=0xee, .sp=0xe2, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x6d9b, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x6d9c, .a=0x12, .x=0x9d, .y=0xee, .sp=0x9d, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x6d9b, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x6d9b, .value=0xbd, .type=IO_READ},
        {.addr=0x6d9c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01DE) {
    const struct CPU_State initial_cpu = {.pc=0x21c2, .a=0x1e, .x=0xff, .y=0x7b, .sp=0xec, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x21c2, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x21c3, .a=0x1e, .x=0xff, .y=0x7b, .sp=0xff, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x21c2, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x21c2, .value=0xbd, .type=IO_READ},
        {.addr=0x21c3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01DF) {
    const struct CPU_State initial_cpu = {.pc=0x4c02, .a=0x71, .x=0x67, .y=0x59, .sp=0x2b, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x4c02, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x4c03, .a=0x71, .x=0x67, .y=0x59, .sp=0x67, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x4c02, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x4c02, .value=0xbd, .type=IO_READ},
        {.addr=0x4c03, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01E0) {
    const struct CPU_State initial_cpu = {.pc=0xc9d1, .a=0xcf, .x=0xee, .y=0x24, .sp=0xf0, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xc9d1, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xc9d2, .a=0xcf, .x=0xee, .y=0x24, .sp=0xee, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0xc9d1, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xc9d1, .value=0xbd, .type=IO_READ},
        {.addr=0xc9d2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01E1) {
    const struct CPU_State initial_cpu = {.pc=0x229b, .a=0x37, .x=0x4f, .y=0xee, .sp=0xe9, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x229b, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x229c, .a=0x37, .x=0x4f, .y=0xee, .sp=0x4f, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x229b, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x229b, .value=0xbd, .type=IO_READ},
        {.addr=0x229c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01E2) {
    const struct CPU_State initial_cpu = {.pc=0x4d51, .a=0xff, .x=0x84, .y=0x6d, .sp=0x9f, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x4d51, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x4d52, .a=0xff, .x=0x84, .y=0x6d, .sp=0x84, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x4d51, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x4d51, .value=0xbd, .type=IO_READ},
        {.addr=0x4d52, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01E3) {
    const struct CPU_State initial_cpu = {.pc=0x8ebc, .a=0xe1, .x=0x8b, .y=0x7c, .sp=0x7d, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x8ebc, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x8ebd, .a=0xe1, .x=0x8b, .y=0x7c, .sp=0x8b, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x8ebc, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x8ebc, .value=0xbd, .type=IO_READ},
        {.addr=0x8ebd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01E4) {
    const struct CPU_State initial_cpu = {.pc=0x8ceb, .a=0x45, .x=0x63, .y=0x3c, .sp=0xd3, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x8ceb, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x8cec, .a=0x45, .x=0x63, .y=0x3c, .sp=0x63, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x8ceb, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x8ceb, .value=0xbd, .type=IO_READ},
        {.addr=0x8cec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01E5) {
    const struct CPU_State initial_cpu = {.pc=0x073a, .a=0x5c, .x=0x71, .y=0x65, .sp=0xb7, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x073a, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x073b, .a=0x5c, .x=0x71, .y=0x65, .sp=0x71, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x073a, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x073a, .value=0xbd, .type=IO_READ},
        {.addr=0x073b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01E6) {
    const struct CPU_State initial_cpu = {.pc=0x627e, .a=0xf2, .x=0x77, .y=0x46, .sp=0x5e, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x627e, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x627f, .a=0xf2, .x=0x77, .y=0x46, .sp=0x77, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x627e, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x627e, .value=0xbd, .type=IO_READ},
        {.addr=0x627f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01E7) {
    const struct CPU_State initial_cpu = {.pc=0x5160, .a=0xcd, .x=0x51, .y=0x47, .sp=0x4a, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x5160, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x5161, .a=0xcd, .x=0x51, .y=0x47, .sp=0x51, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x5160, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x5160, .value=0xbd, .type=IO_READ},
        {.addr=0x5161, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01E8) {
    const struct CPU_State initial_cpu = {.pc=0x574f, .a=0x00, .x=0x56, .y=0x89, .sp=0x81, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x574f, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x5750, .a=0x00, .x=0x56, .y=0x89, .sp=0x56, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x574f, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x574f, .value=0xbd, .type=IO_READ},
        {.addr=0x5750, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01E9) {
    const struct CPU_State initial_cpu = {.pc=0xc1c9, .a=0x3a, .x=0xaa, .y=0x8c, .sp=0x3b, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xc1c9, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xc1ca, .a=0x3a, .x=0xaa, .y=0x8c, .sp=0xaa, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xc1c9, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xc1c9, .value=0xbd, .type=IO_READ},
        {.addr=0xc1ca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01EA) {
    const struct CPU_State initial_cpu = {.pc=0xce6c, .a=0x07, .x=0xed, .y=0x84, .sp=0x38, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xce6c, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xce6d, .a=0x07, .x=0xed, .y=0x84, .sp=0xed, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xce6c, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xce6c, .value=0xbd, .type=IO_READ},
        {.addr=0xce6d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01EB) {
    const struct CPU_State initial_cpu = {.pc=0x25a9, .a=0x3b, .x=0xa5, .y=0xcf, .sp=0x20, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x25a9, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x25aa, .a=0x3b, .x=0xa5, .y=0xcf, .sp=0xa5, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x25a9, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x25a9, .value=0xbd, .type=IO_READ},
        {.addr=0x25aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01EC) {
    const struct CPU_State initial_cpu = {.pc=0x374c, .a=0xe5, .x=0xf2, .y=0xee, .sp=0xcf, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x374c, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x374d, .a=0xe5, .x=0xf2, .y=0xee, .sp=0xf2, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x374c, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x374c, .value=0xbd, .type=IO_READ},
        {.addr=0x374d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01ED) {
    const struct CPU_State initial_cpu = {.pc=0x1864, .a=0xfa, .x=0x47, .y=0x56, .sp=0xea, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x1864, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x1865, .a=0xfa, .x=0x47, .y=0x56, .sp=0x47, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x1864, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x1864, .value=0xbd, .type=IO_READ},
        {.addr=0x1865, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01EE) {
    const struct CPU_State initial_cpu = {.pc=0x0535, .a=0x19, .x=0xdc, .y=0xdf, .sp=0xf7, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x0535, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x0536, .a=0x19, .x=0xdc, .y=0xdf, .sp=0xdc, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x0535, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x0535, .value=0xbd, .type=IO_READ},
        {.addr=0x0536, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01EF) {
    const struct CPU_State initial_cpu = {.pc=0x4d92, .a=0x11, .x=0xd0, .y=0x9a, .sp=0x85, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x4d92, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x4d93, .a=0x11, .x=0xd0, .y=0x9a, .sp=0xd0, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x4d92, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x4d92, .value=0xbd, .type=IO_READ},
        {.addr=0x4d93, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01F0) {
    const struct CPU_State initial_cpu = {.pc=0x1136, .a=0x11, .x=0xc5, .y=0x18, .sp=0xe7, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x1136, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x1137, .a=0x11, .x=0xc5, .y=0x18, .sp=0xc5, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x1136, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x1136, .value=0xbd, .type=IO_READ},
        {.addr=0x1137, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01F1) {
    const struct CPU_State initial_cpu = {.pc=0x4335, .a=0x60, .x=0x30, .y=0x81, .sp=0x3c, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x4335, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x4336, .a=0x60, .x=0x30, .y=0x81, .sp=0x30, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x4335, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x4335, .value=0xbd, .type=IO_READ},
        {.addr=0x4336, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01F2) {
    const struct CPU_State initial_cpu = {.pc=0x869b, .a=0xe3, .x=0xf7, .y=0x0f, .sp=0x62, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x869b, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x869c, .a=0xe3, .x=0xf7, .y=0x0f, .sp=0xf7, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x869b, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x869b, .value=0xbd, .type=IO_READ},
        {.addr=0x869c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01F3) {
    const struct CPU_State initial_cpu = {.pc=0x602c, .a=0xa4, .x=0xd9, .y=0x41, .sp=0x08, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x602c, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x602d, .a=0xa4, .x=0xd9, .y=0x41, .sp=0xd9, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x602c, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x602c, .value=0xbd, .type=IO_READ},
        {.addr=0x602d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01F4) {
    const struct CPU_State initial_cpu = {.pc=0x165d, .a=0xc0, .x=0xef, .y=0xf4, .sp=0x91, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x165d, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x165e, .a=0xc0, .x=0xef, .y=0xf4, .sp=0xef, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x165d, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x165d, .value=0xbd, .type=IO_READ},
        {.addr=0x165e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01F5) {
    const struct CPU_State initial_cpu = {.pc=0x1e25, .a=0x63, .x=0x45, .y=0x6d, .sp=0x48, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x1e25, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x1e26, .a=0x63, .x=0x45, .y=0x6d, .sp=0x45, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x1e25, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x1e25, .value=0xbd, .type=IO_READ},
        {.addr=0x1e26, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01F6) {
    const struct CPU_State initial_cpu = {.pc=0xed77, .a=0x0d, .x=0x14, .y=0x54, .sp=0x7d, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xed77, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xed78, .a=0x0d, .x=0x14, .y=0x54, .sp=0x14, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0xed77, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xed77, .value=0xbd, .type=IO_READ},
        {.addr=0xed78, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01F7) {
    const struct CPU_State initial_cpu = {.pc=0x7129, .a=0x94, .x=0x41, .y=0x9c, .sp=0x1d, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x7129, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x712a, .a=0x94, .x=0x41, .y=0x9c, .sp=0x41, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x7129, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x7129, .value=0xbd, .type=IO_READ},
        {.addr=0x712a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01F8) {
    const struct CPU_State initial_cpu = {.pc=0x2875, .a=0x1f, .x=0xe1, .y=0x3a, .sp=0x58, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x2875, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x2876, .a=0x1f, .x=0xe1, .y=0x3a, .sp=0xe1, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x2875, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x2875, .value=0xbd, .type=IO_READ},
        {.addr=0x2876, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x2437, .a=0xa3, .x=0x78, .y=0x5f, .sp=0xd4, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x2437, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x2438, .a=0xa3, .x=0x78, .y=0x5f, .sp=0x78, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x2437, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x2437, .value=0xbd, .type=IO_READ},
        {.addr=0x2438, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01FA) {
    const struct CPU_State initial_cpu = {.pc=0x852c, .a=0x29, .x=0x5c, .y=0x9f, .sp=0xaf, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x852c, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x852d, .a=0x29, .x=0x5c, .y=0x9f, .sp=0x5c, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x852c, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x852c, .value=0xbd, .type=IO_READ},
        {.addr=0x852d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01FB) {
    const struct CPU_State initial_cpu = {.pc=0xfae5, .a=0x6b, .x=0x01, .y=0x82, .sp=0xa8, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0xfae5, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xfae6, .a=0x6b, .x=0x01, .y=0x82, .sp=0x01, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0xfae5, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xfae5, .value=0xbd, .type=IO_READ},
        {.addr=0xfae6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01FC) {
    const struct CPU_State initial_cpu = {.pc=0x6a92, .a=0x44, .x=0x70, .y=0x71, .sp=0xea, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x6a92, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x6a93, .a=0x44, .x=0x70, .y=0x71, .sp=0x70, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x6a92, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x6a92, .value=0xbd, .type=IO_READ},
        {.addr=0x6a93, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01FD) {
    const struct CPU_State initial_cpu = {.pc=0x72a6, .a=0x33, .x=0x9d, .y=0x1a, .sp=0x5f, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x72a6, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x72a7, .a=0x33, .x=0x9d, .y=0x1a, .sp=0x9d, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x72a6, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x72a6, .value=0xbd, .type=IO_READ},
        {.addr=0x72a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01FE) {
    const struct CPU_State initial_cpu = {.pc=0xceaa, .a=0x0f, .x=0x89, .y=0x2c, .sp=0xbb, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xceaa, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xceab, .a=0x0f, .x=0x89, .y=0x2c, .sp=0x89, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0xceaa, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xceaa, .value=0xbd, .type=IO_READ},
        {.addr=0xceab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_01FF) {
    const struct CPU_State initial_cpu = {.pc=0x295e, .a=0xea, .x=0x1d, .y=0x84, .sp=0x5b, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x295e, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x295f, .a=0xea, .x=0x1d, .y=0x84, .sp=0x1d, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x295e, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x295e, .value=0xbd, .type=IO_READ},
        {.addr=0x295f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0200) {
    const struct CPU_State initial_cpu = {.pc=0x1f9d, .a=0x1d, .x=0x8d, .y=0xa9, .sp=0x73, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x1f9d, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x1f9e, .a=0x1d, .x=0x8d, .y=0xa9, .sp=0x8d, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x1f9d, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x1f9d, .value=0xbd, .type=IO_READ},
        {.addr=0x1f9e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0201) {
    const struct CPU_State initial_cpu = {.pc=0xc523, .a=0x9f, .x=0xac, .y=0x29, .sp=0x23, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xc523, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xc524, .a=0x9f, .x=0xac, .y=0x29, .sp=0xac, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0xc523, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xc523, .value=0xbd, .type=IO_READ},
        {.addr=0xc524, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0202) {
    const struct CPU_State initial_cpu = {.pc=0xdc2d, .a=0x4c, .x=0xe5, .y=0xfe, .sp=0x16, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xdc2d, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xdc2e, .a=0x4c, .x=0xe5, .y=0xfe, .sp=0xe5, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xdc2d, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xdc2d, .value=0xbd, .type=IO_READ},
        {.addr=0xdc2e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0203) {
    const struct CPU_State initial_cpu = {.pc=0xa00a, .a=0xad, .x=0xef, .y=0xbf, .sp=0xbc, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xa00a, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xa00b, .a=0xad, .x=0xef, .y=0xbf, .sp=0xef, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0xa00a, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xa00a, .value=0xbd, .type=IO_READ},
        {.addr=0xa00b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0204) {
    const struct CPU_State initial_cpu = {.pc=0x0a20, .a=0x29, .x=0xf1, .y=0x5f, .sp=0xb8, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x0a20, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x0a21, .a=0x29, .x=0xf1, .y=0x5f, .sp=0xf1, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x0a20, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x0a20, .value=0xbd, .type=IO_READ},
        {.addr=0x0a21, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0205) {
    const struct CPU_State initial_cpu = {.pc=0x67dc, .a=0x46, .x=0x66, .y=0x14, .sp=0x4b, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x67dc, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x67dd, .a=0x46, .x=0x66, .y=0x14, .sp=0x66, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x67dc, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x67dc, .value=0xbd, .type=IO_READ},
        {.addr=0x67dd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0206) {
    const struct CPU_State initial_cpu = {.pc=0x4c71, .a=0x64, .x=0x35, .y=0xac, .sp=0xcc, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x4c71, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x4c72, .a=0x64, .x=0x35, .y=0xac, .sp=0x35, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x4c71, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x4c71, .value=0xbd, .type=IO_READ},
        {.addr=0x4c72, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0207) {
    const struct CPU_State initial_cpu = {.pc=0x4d6e, .a=0x23, .x=0xb5, .y=0x8d, .sp=0x27, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x4d6e, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x4d6f, .a=0x23, .x=0xb5, .y=0x8d, .sp=0xb5, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x4d6e, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x4d6e, .value=0xbd, .type=IO_READ},
        {.addr=0x4d6f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0208) {
    const struct CPU_State initial_cpu = {.pc=0x8e60, .a=0xfe, .x=0xae, .y=0xe4, .sp=0x59, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x8e60, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x8e61, .a=0xfe, .x=0xae, .y=0xe4, .sp=0xae, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x8e60, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x8e60, .value=0xbd, .type=IO_READ},
        {.addr=0x8e61, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0209) {
    const struct CPU_State initial_cpu = {.pc=0xdbda, .a=0xd7, .x=0x87, .y=0x4a, .sp=0xd6, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xdbda, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xdbdb, .a=0xd7, .x=0x87, .y=0x4a, .sp=0x87, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0xdbda, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xdbda, .value=0xbd, .type=IO_READ},
        {.addr=0xdbdb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_020A) {
    const struct CPU_State initial_cpu = {.pc=0x6a2b, .a=0xa3, .x=0x5d, .y=0x74, .sp=0x61, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x6a2b, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x6a2c, .a=0xa3, .x=0x5d, .y=0x74, .sp=0x5d, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x6a2b, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x6a2b, .value=0xbd, .type=IO_READ},
        {.addr=0x6a2c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_020B) {
    const struct CPU_State initial_cpu = {.pc=0x3adc, .a=0x26, .x=0x58, .y=0x13, .sp=0xe1, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x3adc, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x3add, .a=0x26, .x=0x58, .y=0x13, .sp=0x58, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x3adc, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x3adc, .value=0xbd, .type=IO_READ},
        {.addr=0x3add, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_020C) {
    const struct CPU_State initial_cpu = {.pc=0x5074, .a=0x0f, .x=0x67, .y=0xfd, .sp=0xc2, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x5074, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x5075, .a=0x0f, .x=0x67, .y=0xfd, .sp=0x67, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x5074, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x5074, .value=0xbd, .type=IO_READ},
        {.addr=0x5075, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_020D) {
    const struct CPU_State initial_cpu = {.pc=0xa1d8, .a=0x42, .x=0xf2, .y=0x39, .sp=0xa6, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0xa1d8, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xa1d9, .a=0x42, .x=0xf2, .y=0x39, .sp=0xf2, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xa1d8, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xa1d8, .value=0xbd, .type=IO_READ},
        {.addr=0xa1d9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_020E) {
    const struct CPU_State initial_cpu = {.pc=0x5e11, .a=0x61, .x=0x65, .y=0x2c, .sp=0xd6, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x5e11, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x5e12, .a=0x61, .x=0x65, .y=0x2c, .sp=0x65, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x5e11, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x5e11, .value=0xbd, .type=IO_READ},
        {.addr=0x5e12, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_020F) {
    const struct CPU_State initial_cpu = {.pc=0x0c90, .a=0x14, .x=0x11, .y=0xf5, .sp=0x1b, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x0c90, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x0c91, .a=0x14, .x=0x11, .y=0xf5, .sp=0x11, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x0c90, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x0c90, .value=0xbd, .type=IO_READ},
        {.addr=0x0c91, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0210) {
    const struct CPU_State initial_cpu = {.pc=0x27e9, .a=0x2b, .x=0xd3, .y=0x3c, .sp=0x68, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x27e9, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x27ea, .a=0x2b, .x=0xd3, .y=0x3c, .sp=0xd3, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x27e9, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x27e9, .value=0xbd, .type=IO_READ},
        {.addr=0x27ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0211) {
    const struct CPU_State initial_cpu = {.pc=0x2395, .a=0xd6, .x=0x3a, .y=0xf5, .sp=0x1d, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x2395, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x2396, .a=0xd6, .x=0x3a, .y=0xf5, .sp=0x3a, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x2395, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x2395, .value=0xbd, .type=IO_READ},
        {.addr=0x2396, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0212) {
    const struct CPU_State initial_cpu = {.pc=0xa804, .a=0x86, .x=0x5e, .y=0x9e, .sp=0xdc, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xa804, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xa805, .a=0x86, .x=0x5e, .y=0x9e, .sp=0x5e, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0xa804, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xa804, .value=0xbd, .type=IO_READ},
        {.addr=0xa805, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0213) {
    const struct CPU_State initial_cpu = {.pc=0x1ab0, .a=0x95, .x=0x29, .y=0xf6, .sp=0x4d, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x1ab0, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x1ab1, .a=0x95, .x=0x29, .y=0xf6, .sp=0x29, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x1ab0, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x1ab0, .value=0xbd, .type=IO_READ},
        {.addr=0x1ab1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0214) {
    const struct CPU_State initial_cpu = {.pc=0x87ee, .a=0xb0, .x=0x18, .y=0x4a, .sp=0x34, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x87ee, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x87ef, .a=0xb0, .x=0x18, .y=0x4a, .sp=0x18, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x87ee, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x87ee, .value=0xbd, .type=IO_READ},
        {.addr=0x87ef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0215) {
    const struct CPU_State initial_cpu = {.pc=0x6839, .a=0x41, .x=0x0c, .y=0xca, .sp=0xe3, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x6839, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x683a, .a=0x41, .x=0x0c, .y=0xca, .sp=0x0c, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x6839, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x6839, .value=0xbd, .type=IO_READ},
        {.addr=0x683a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0216) {
    const struct CPU_State initial_cpu = {.pc=0x9887, .a=0x06, .x=0x45, .y=0xf7, .sp=0xab, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x9887, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x9888, .a=0x06, .x=0x45, .y=0xf7, .sp=0x45, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x9887, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x9887, .value=0xbd, .type=IO_READ},
        {.addr=0x9888, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0217) {
    const struct CPU_State initial_cpu = {.pc=0xe66b, .a=0x99, .x=0xa3, .y=0xd3, .sp=0x78, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xe66b, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xe66c, .a=0x99, .x=0xa3, .y=0xd3, .sp=0xa3, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0xe66b, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xe66b, .value=0xbd, .type=IO_READ},
        {.addr=0xe66c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0218) {
    const struct CPU_State initial_cpu = {.pc=0xefb2, .a=0x35, .x=0xf1, .y=0xea, .sp=0xab, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0xefb2, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xefb3, .a=0x35, .x=0xf1, .y=0xea, .sp=0xf1, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0xefb2, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xefb2, .value=0xbd, .type=IO_READ},
        {.addr=0xefb3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0219) {
    const struct CPU_State initial_cpu = {.pc=0xaf51, .a=0xb7, .x=0x8c, .y=0x57, .sp=0xbc, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xaf51, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xaf52, .a=0xb7, .x=0x8c, .y=0x57, .sp=0x8c, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0xaf51, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xaf51, .value=0xbd, .type=IO_READ},
        {.addr=0xaf52, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_021A) {
    const struct CPU_State initial_cpu = {.pc=0x148a, .a=0xb9, .x=0xea, .y=0xf3, .sp=0xca, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x148a, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x148b, .a=0xb9, .x=0xea, .y=0xf3, .sp=0xea, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x148a, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x148a, .value=0xbd, .type=IO_READ},
        {.addr=0x148b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_021B) {
    const struct CPU_State initial_cpu = {.pc=0x45cd, .a=0x6a, .x=0x6c, .y=0x19, .sp=0xfe, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x45cd, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x45ce, .a=0x6a, .x=0x6c, .y=0x19, .sp=0x6c, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x45cd, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x45cd, .value=0xbd, .type=IO_READ},
        {.addr=0x45ce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_021C) {
    const struct CPU_State initial_cpu = {.pc=0x6f0f, .a=0x96, .x=0x69, .y=0xfa, .sp=0xe4, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x6f0f, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x6f10, .a=0x96, .x=0x69, .y=0xfa, .sp=0x69, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x6f0f, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x6f0f, .value=0xbd, .type=IO_READ},
        {.addr=0x6f10, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_021D) {
    const struct CPU_State initial_cpu = {.pc=0x30d0, .a=0x40, .x=0x64, .y=0x07, .sp=0x36, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x30d0, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x30d1, .a=0x40, .x=0x64, .y=0x07, .sp=0x64, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x30d0, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x30d0, .value=0xbd, .type=IO_READ},
        {.addr=0x30d1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_021E) {
    const struct CPU_State initial_cpu = {.pc=0xbabc, .a=0xaf, .x=0xc1, .y=0xde, .sp=0xcb, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xbabc, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xbabd, .a=0xaf, .x=0xc1, .y=0xde, .sp=0xc1, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xbabc, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xbabc, .value=0xbd, .type=IO_READ},
        {.addr=0xbabd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_021F) {
    const struct CPU_State initial_cpu = {.pc=0x0513, .a=0xa5, .x=0x8e, .y=0xf5, .sp=0xe0, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x0513, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x0514, .a=0xa5, .x=0x8e, .y=0xf5, .sp=0x8e, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x0513, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x0513, .value=0xbd, .type=IO_READ},
        {.addr=0x0514, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0220) {
    const struct CPU_State initial_cpu = {.pc=0x4af2, .a=0xa0, .x=0xa2, .y=0xe5, .sp=0xfd, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x4af2, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x4af3, .a=0xa0, .x=0xa2, .y=0xe5, .sp=0xa2, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x4af2, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x4af2, .value=0xbd, .type=IO_READ},
        {.addr=0x4af3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0221) {
    const struct CPU_State initial_cpu = {.pc=0x24ba, .a=0xc9, .x=0xbc, .y=0x21, .sp=0x4a, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x24ba, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x24bb, .a=0xc9, .x=0xbc, .y=0x21, .sp=0xbc, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x24ba, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x24ba, .value=0xbd, .type=IO_READ},
        {.addr=0x24bb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0222) {
    const struct CPU_State initial_cpu = {.pc=0xd6e8, .a=0x02, .x=0xe3, .y=0xe8, .sp=0xa3, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xd6e8, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xd6e9, .a=0x02, .x=0xe3, .y=0xe8, .sp=0xe3, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xd6e8, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xd6e8, .value=0xbd, .type=IO_READ},
        {.addr=0xd6e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0223) {
    const struct CPU_State initial_cpu = {.pc=0xb4f0, .a=0x73, .x=0xb4, .y=0xc0, .sp=0x97, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xb4f0, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xb4f1, .a=0x73, .x=0xb4, .y=0xc0, .sp=0xb4, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0xb4f0, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xb4f0, .value=0xbd, .type=IO_READ},
        {.addr=0xb4f1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0224) {
    const struct CPU_State initial_cpu = {.pc=0x6293, .a=0x07, .x=0x29, .y=0x8f, .sp=0x19, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x6293, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x6294, .a=0x07, .x=0x29, .y=0x8f, .sp=0x29, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x6293, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x6293, .value=0xbd, .type=IO_READ},
        {.addr=0x6294, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0225) {
    const struct CPU_State initial_cpu = {.pc=0x7b00, .a=0xdf, .x=0x51, .y=0x6e, .sp=0xe1, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x7b00, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x7b01, .a=0xdf, .x=0x51, .y=0x6e, .sp=0x51, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x7b00, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x7b00, .value=0xbd, .type=IO_READ},
        {.addr=0x7b01, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0226) {
    const struct CPU_State initial_cpu = {.pc=0xf87a, .a=0x5f, .x=0x8b, .y=0xee, .sp=0x7e, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xf87a, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xf87b, .a=0x5f, .x=0x8b, .y=0xee, .sp=0x8b, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xf87a, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xf87a, .value=0xbd, .type=IO_READ},
        {.addr=0xf87b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0227) {
    const struct CPU_State initial_cpu = {.pc=0xfde5, .a=0x46, .x=0xac, .y=0x2c, .sp=0x30, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xfde5, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xfde6, .a=0x46, .x=0xac, .y=0x2c, .sp=0xac, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0xfde5, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xfde5, .value=0xbd, .type=IO_READ},
        {.addr=0xfde6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0228) {
    const struct CPU_State initial_cpu = {.pc=0x16d3, .a=0xe5, .x=0x8e, .y=0xa9, .sp=0xa5, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x16d3, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x16d4, .a=0xe5, .x=0x8e, .y=0xa9, .sp=0x8e, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x16d3, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x16d3, .value=0xbd, .type=IO_READ},
        {.addr=0x16d4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0229) {
    const struct CPU_State initial_cpu = {.pc=0xdb3b, .a=0x6d, .x=0x26, .y=0x14, .sp=0x2e, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xdb3b, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xdb3c, .a=0x6d, .x=0x26, .y=0x14, .sp=0x26, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xdb3b, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xdb3b, .value=0xbd, .type=IO_READ},
        {.addr=0xdb3c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_022A) {
    const struct CPU_State initial_cpu = {.pc=0x9916, .a=0xb1, .x=0xf2, .y=0xc5, .sp=0x5a, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x9916, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x9917, .a=0xb1, .x=0xf2, .y=0xc5, .sp=0xf2, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x9916, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x9916, .value=0xbd, .type=IO_READ},
        {.addr=0x9917, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_022B) {
    const struct CPU_State initial_cpu = {.pc=0x0cbb, .a=0x9b, .x=0x7b, .y=0x45, .sp=0x59, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x0cbb, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x0cbc, .a=0x9b, .x=0x7b, .y=0x45, .sp=0x7b, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x0cbb, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x0cbb, .value=0xbd, .type=IO_READ},
        {.addr=0x0cbc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_022C) {
    const struct CPU_State initial_cpu = {.pc=0xf08a, .a=0x84, .x=0xd7, .y=0x61, .sp=0x55, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xf08a, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xf08b, .a=0x84, .x=0xd7, .y=0x61, .sp=0xd7, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xf08a, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xf08a, .value=0xbd, .type=IO_READ},
        {.addr=0xf08b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_022D) {
    const struct CPU_State initial_cpu = {.pc=0x40b3, .a=0x1f, .x=0xdd, .y=0xb3, .sp=0x45, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x40b3, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x40b4, .a=0x1f, .x=0xdd, .y=0xb3, .sp=0xdd, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x40b3, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x40b3, .value=0xbd, .type=IO_READ},
        {.addr=0x40b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_022E) {
    const struct CPU_State initial_cpu = {.pc=0xbc66, .a=0x72, .x=0xa0, .y=0x31, .sp=0xc7, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xbc66, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xbc67, .a=0x72, .x=0xa0, .y=0x31, .sp=0xa0, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xbc66, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xbc66, .value=0xbd, .type=IO_READ},
        {.addr=0xbc67, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_022F) {
    const struct CPU_State initial_cpu = {.pc=0x024b, .a=0x05, .x=0xa7, .y=0xf6, .sp=0x48, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x024b, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x024c, .a=0x05, .x=0xa7, .y=0xf6, .sp=0xa7, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x024b, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x024b, .value=0xbd, .type=IO_READ},
        {.addr=0x024c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0230) {
    const struct CPU_State initial_cpu = {.pc=0xc635, .a=0x3d, .x=0x5b, .y=0xe4, .sp=0xc9, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xc635, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xc636, .a=0x3d, .x=0x5b, .y=0xe4, .sp=0x5b, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xc635, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xc635, .value=0xbd, .type=IO_READ},
        {.addr=0xc636, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0231) {
    const struct CPU_State initial_cpu = {.pc=0xd6d6, .a=0x80, .x=0x52, .y=0x3e, .sp=0x51, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xd6d6, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xd6d7, .a=0x80, .x=0x52, .y=0x3e, .sp=0x52, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0xd6d6, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xd6d6, .value=0xbd, .type=IO_READ},
        {.addr=0xd6d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0232) {
    const struct CPU_State initial_cpu = {.pc=0x6e47, .a=0x35, .x=0x3c, .y=0x05, .sp=0x37, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x6e47, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x6e48, .a=0x35, .x=0x3c, .y=0x05, .sp=0x3c, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x6e47, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x6e47, .value=0xbd, .type=IO_READ},
        {.addr=0x6e48, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0233) {
    const struct CPU_State initial_cpu = {.pc=0x333f, .a=0x4d, .x=0x87, .y=0x01, .sp=0x63, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x333f, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x3340, .a=0x4d, .x=0x87, .y=0x01, .sp=0x87, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x333f, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x333f, .value=0xbd, .type=IO_READ},
        {.addr=0x3340, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0234) {
    const struct CPU_State initial_cpu = {.pc=0xaa0d, .a=0x63, .x=0x08, .y=0xb6, .sp=0xa5, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xaa0d, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xaa0e, .a=0x63, .x=0x08, .y=0xb6, .sp=0x08, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xaa0d, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xaa0d, .value=0xbd, .type=IO_READ},
        {.addr=0xaa0e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0235) {
    const struct CPU_State initial_cpu = {.pc=0x4485, .a=0xec, .x=0xe2, .y=0x1f, .sp=0xba, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x4485, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x4486, .a=0xec, .x=0xe2, .y=0x1f, .sp=0xe2, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x4485, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x4485, .value=0xbd, .type=IO_READ},
        {.addr=0x4486, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0236) {
    const struct CPU_State initial_cpu = {.pc=0xb8cd, .a=0x0a, .x=0x09, .y=0xe3, .sp=0x73, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xb8cd, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xb8ce, .a=0x0a, .x=0x09, .y=0xe3, .sp=0x09, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0xb8cd, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xb8cd, .value=0xbd, .type=IO_READ},
        {.addr=0xb8ce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0237) {
    const struct CPU_State initial_cpu = {.pc=0x8e2c, .a=0x1c, .x=0x0a, .y=0x61, .sp=0xe4, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x8e2c, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x8e2d, .a=0x1c, .x=0x0a, .y=0x61, .sp=0x0a, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x8e2c, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x8e2c, .value=0xbd, .type=IO_READ},
        {.addr=0x8e2d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0238) {
    const struct CPU_State initial_cpu = {.pc=0xe565, .a=0xd6, .x=0xbd, .y=0xdc, .sp=0x0b, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xe565, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xe566, .a=0xd6, .x=0xbd, .y=0xdc, .sp=0xbd, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0xe565, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xe565, .value=0xbd, .type=IO_READ},
        {.addr=0xe566, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0239) {
    const struct CPU_State initial_cpu = {.pc=0xca8b, .a=0x3a, .x=0x5d, .y=0xbd, .sp=0xdb, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xca8b, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xca8c, .a=0x3a, .x=0x5d, .y=0xbd, .sp=0x5d, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xca8b, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xca8b, .value=0xbd, .type=IO_READ},
        {.addr=0xca8c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_023A) {
    const struct CPU_State initial_cpu = {.pc=0x768b, .a=0x04, .x=0x30, .y=0xc8, .sp=0x58, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x768b, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x768c, .a=0x04, .x=0x30, .y=0xc8, .sp=0x30, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x768b, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x768b, .value=0xbd, .type=IO_READ},
        {.addr=0x768c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_023B) {
    const struct CPU_State initial_cpu = {.pc=0xc7dd, .a=0xd4, .x=0x89, .y=0x1c, .sp=0xee, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xc7dd, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xc7de, .a=0xd4, .x=0x89, .y=0x1c, .sp=0x89, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0xc7dd, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xc7dd, .value=0xbd, .type=IO_READ},
        {.addr=0xc7de, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_023C) {
    const struct CPU_State initial_cpu = {.pc=0x8ca7, .a=0x84, .x=0xd0, .y=0xdf, .sp=0x46, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x8ca7, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x8ca8, .a=0x84, .x=0xd0, .y=0xdf, .sp=0xd0, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x8ca7, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x8ca7, .value=0xbd, .type=IO_READ},
        {.addr=0x8ca8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_023D) {
    const struct CPU_State initial_cpu = {.pc=0x4f6b, .a=0x32, .x=0xff, .y=0x08, .sp=0x1b, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x4f6b, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x4f6c, .a=0x32, .x=0xff, .y=0x08, .sp=0xff, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x4f6b, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x4f6b, .value=0xbd, .type=IO_READ},
        {.addr=0x4f6c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_023E) {
    const struct CPU_State initial_cpu = {.pc=0xb204, .a=0x04, .x=0x3a, .y=0x1e, .sp=0xaf, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xb204, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xb205, .a=0x04, .x=0x3a, .y=0x1e, .sp=0x3a, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0xb204, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xb204, .value=0xbd, .type=IO_READ},
        {.addr=0xb205, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_023F) {
    const struct CPU_State initial_cpu = {.pc=0xd9e4, .a=0xbf, .x=0x9e, .y=0xdf, .sp=0xc6, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xd9e4, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xd9e5, .a=0xbf, .x=0x9e, .y=0xdf, .sp=0x9e, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xd9e4, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xd9e4, .value=0xbd, .type=IO_READ},
        {.addr=0xd9e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0240) {
    const struct CPU_State initial_cpu = {.pc=0xdccf, .a=0x7e, .x=0x2a, .y=0x88, .sp=0xfe, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xdccf, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xdcd0, .a=0x7e, .x=0x2a, .y=0x88, .sp=0x2a, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0xdccf, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xdccf, .value=0xbd, .type=IO_READ},
        {.addr=0xdcd0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0241) {
    const struct CPU_State initial_cpu = {.pc=0xdcbc, .a=0x10, .x=0x79, .y=0x5c, .sp=0x92, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xdcbc, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xdcbd, .a=0x10, .x=0x79, .y=0x5c, .sp=0x79, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xdcbc, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xdcbc, .value=0xbd, .type=IO_READ},
        {.addr=0xdcbd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0242) {
    const struct CPU_State initial_cpu = {.pc=0x67a3, .a=0x0b, .x=0x31, .y=0x11, .sp=0x61, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x67a3, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x67a4, .a=0x0b, .x=0x31, .y=0x11, .sp=0x31, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x67a3, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x67a3, .value=0xbd, .type=IO_READ},
        {.addr=0x67a4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0243) {
    const struct CPU_State initial_cpu = {.pc=0xc2ca, .a=0xb2, .x=0x40, .y=0x8a, .sp=0xa0, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xc2ca, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xc2cb, .a=0xb2, .x=0x40, .y=0x8a, .sp=0x40, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0xc2ca, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xc2ca, .value=0xbd, .type=IO_READ},
        {.addr=0xc2cb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0244) {
    const struct CPU_State initial_cpu = {.pc=0xe26e, .a=0x0d, .x=0x9a, .y=0x7b, .sp=0xb5, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xe26e, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xe26f, .a=0x0d, .x=0x9a, .y=0x7b, .sp=0x9a, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0xe26e, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xe26e, .value=0xbd, .type=IO_READ},
        {.addr=0xe26f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0245) {
    const struct CPU_State initial_cpu = {.pc=0x7cac, .a=0xe6, .x=0x60, .y=0x74, .sp=0xbb, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x7cac, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x7cad, .a=0xe6, .x=0x60, .y=0x74, .sp=0x60, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x7cac, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x7cac, .value=0xbd, .type=IO_READ},
        {.addr=0x7cad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0246) {
    const struct CPU_State initial_cpu = {.pc=0x3007, .a=0x90, .x=0x5d, .y=0x4a, .sp=0x13, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x3007, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x3008, .a=0x90, .x=0x5d, .y=0x4a, .sp=0x5d, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x3007, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x3007, .value=0xbd, .type=IO_READ},
        {.addr=0x3008, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0247) {
    const struct CPU_State initial_cpu = {.pc=0xa7fb, .a=0x99, .x=0xff, .y=0x8d, .sp=0x12, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xa7fb, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xa7fc, .a=0x99, .x=0xff, .y=0x8d, .sp=0xff, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0xa7fb, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xa7fb, .value=0xbd, .type=IO_READ},
        {.addr=0xa7fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0248) {
    const struct CPU_State initial_cpu = {.pc=0x6d65, .a=0x23, .x=0x80, .y=0xf7, .sp=0xd7, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x6d65, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x6d66, .a=0x23, .x=0x80, .y=0xf7, .sp=0x80, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x6d65, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x6d65, .value=0xbd, .type=IO_READ},
        {.addr=0x6d66, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0249) {
    const struct CPU_State initial_cpu = {.pc=0x7fd5, .a=0xea, .x=0x77, .y=0x32, .sp=0x02, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x7fd5, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x7fd6, .a=0xea, .x=0x77, .y=0x32, .sp=0x77, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x7fd5, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x7fd5, .value=0xbd, .type=IO_READ},
        {.addr=0x7fd6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_024A) {
    const struct CPU_State initial_cpu = {.pc=0x2941, .a=0x4c, .x=0x60, .y=0x28, .sp=0xfc, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x2941, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x2942, .a=0x4c, .x=0x60, .y=0x28, .sp=0x60, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x2941, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x2941, .value=0xbd, .type=IO_READ},
        {.addr=0x2942, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_024B) {
    const struct CPU_State initial_cpu = {.pc=0x4a5f, .a=0x43, .x=0xaf, .y=0x88, .sp=0x9a, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x4a5f, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x4a60, .a=0x43, .x=0xaf, .y=0x88, .sp=0xaf, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x4a5f, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x4a5f, .value=0xbd, .type=IO_READ},
        {.addr=0x4a60, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_024C) {
    const struct CPU_State initial_cpu = {.pc=0xc6db, .a=0x86, .x=0x3f, .y=0x08, .sp=0x5b, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xc6db, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xc6dc, .a=0x86, .x=0x3f, .y=0x08, .sp=0x3f, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0xc6db, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xc6db, .value=0xbd, .type=IO_READ},
        {.addr=0xc6dc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_024D) {
    const struct CPU_State initial_cpu = {.pc=0xa955, .a=0x89, .x=0x0d, .y=0xc9, .sp=0x9e, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xa955, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xa956, .a=0x89, .x=0x0d, .y=0xc9, .sp=0x0d, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0xa955, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xa955, .value=0xbd, .type=IO_READ},
        {.addr=0xa956, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_024E) {
    const struct CPU_State initial_cpu = {.pc=0x9652, .a=0xac, .x=0x07, .y=0xdc, .sp=0x4f, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x9652, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x9653, .a=0xac, .x=0x07, .y=0xdc, .sp=0x07, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x9652, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x9652, .value=0xbd, .type=IO_READ},
        {.addr=0x9653, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_024F) {
    const struct CPU_State initial_cpu = {.pc=0x5071, .a=0x8e, .x=0x84, .y=0x50, .sp=0xef, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x5071, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x5072, .a=0x8e, .x=0x84, .y=0x50, .sp=0x84, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x5071, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x5071, .value=0xbd, .type=IO_READ},
        {.addr=0x5072, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0250) {
    const struct CPU_State initial_cpu = {.pc=0x05a6, .a=0x7f, .x=0xbf, .y=0x36, .sp=0x61, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x05a6, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x05a7, .a=0x7f, .x=0xbf, .y=0x36, .sp=0xbf, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x05a6, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x05a6, .value=0xbd, .type=IO_READ},
        {.addr=0x05a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0251) {
    const struct CPU_State initial_cpu = {.pc=0x7f3c, .a=0xb4, .x=0xa9, .y=0xc5, .sp=0x56, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x7f3c, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x7f3d, .a=0xb4, .x=0xa9, .y=0xc5, .sp=0xa9, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x7f3c, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x7f3c, .value=0xbd, .type=IO_READ},
        {.addr=0x7f3d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0252) {
    const struct CPU_State initial_cpu = {.pc=0xae51, .a=0xc9, .x=0x32, .y=0xbf, .sp=0x45, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xae51, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xae52, .a=0xc9, .x=0x32, .y=0xbf, .sp=0x32, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xae51, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xae51, .value=0xbd, .type=IO_READ},
        {.addr=0xae52, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0253) {
    const struct CPU_State initial_cpu = {.pc=0xbec0, .a=0xa4, .x=0x9e, .y=0xef, .sp=0x51, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xbec0, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xbec1, .a=0xa4, .x=0x9e, .y=0xef, .sp=0x9e, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0xbec0, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xbec0, .value=0xbd, .type=IO_READ},
        {.addr=0xbec1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0254) {
    const struct CPU_State initial_cpu = {.pc=0x7b97, .a=0x54, .x=0xfe, .y=0x98, .sp=0x73, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x7b97, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x7b98, .a=0x54, .x=0xfe, .y=0x98, .sp=0xfe, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x7b97, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x7b97, .value=0xbd, .type=IO_READ},
        {.addr=0x7b98, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0255) {
    const struct CPU_State initial_cpu = {.pc=0x387f, .a=0xb0, .x=0x9f, .y=0xc2, .sp=0x7e, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x387f, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x3880, .a=0xb0, .x=0x9f, .y=0xc2, .sp=0x9f, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x387f, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x387f, .value=0xbd, .type=IO_READ},
        {.addr=0x3880, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0256) {
    const struct CPU_State initial_cpu = {.pc=0xc991, .a=0xa5, .x=0x6a, .y=0x28, .sp=0x21, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xc991, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xc992, .a=0xa5, .x=0x6a, .y=0x28, .sp=0x6a, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xc991, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xc991, .value=0xbd, .type=IO_READ},
        {.addr=0xc992, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0257) {
    const struct CPU_State initial_cpu = {.pc=0x76e1, .a=0x82, .x=0xcc, .y=0xfc, .sp=0xa4, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x76e1, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x76e2, .a=0x82, .x=0xcc, .y=0xfc, .sp=0xcc, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x76e1, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x76e1, .value=0xbd, .type=IO_READ},
        {.addr=0x76e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0258) {
    const struct CPU_State initial_cpu = {.pc=0x71d6, .a=0x98, .x=0x78, .y=0xc3, .sp=0xcb, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x71d6, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x71d7, .a=0x98, .x=0x78, .y=0xc3, .sp=0x78, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x71d6, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x71d6, .value=0xbd, .type=IO_READ},
        {.addr=0x71d7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0259) {
    const struct CPU_State initial_cpu = {.pc=0x67bb, .a=0x19, .x=0x5d, .y=0x99, .sp=0x86, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x67bb, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x67bc, .a=0x19, .x=0x5d, .y=0x99, .sp=0x5d, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x67bb, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x67bb, .value=0xbd, .type=IO_READ},
        {.addr=0x67bc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_025A) {
    const struct CPU_State initial_cpu = {.pc=0x31b1, .a=0x96, .x=0x2c, .y=0xc0, .sp=0xd3, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x31b1, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x31b2, .a=0x96, .x=0x2c, .y=0xc0, .sp=0x2c, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x31b1, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x31b1, .value=0xbd, .type=IO_READ},
        {.addr=0x31b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_025B) {
    const struct CPU_State initial_cpu = {.pc=0x9a60, .a=0x68, .x=0x5a, .y=0x5f, .sp=0x80, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x9a60, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x9a61, .a=0x68, .x=0x5a, .y=0x5f, .sp=0x5a, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x9a60, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x9a60, .value=0xbd, .type=IO_READ},
        {.addr=0x9a61, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_025C) {
    const struct CPU_State initial_cpu = {.pc=0x218f, .a=0xf9, .x=0x91, .y=0xf1, .sp=0x0f, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x218f, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x2190, .a=0xf9, .x=0x91, .y=0xf1, .sp=0x91, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x218f, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x218f, .value=0xbd, .type=IO_READ},
        {.addr=0x2190, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_025D) {
    const struct CPU_State initial_cpu = {.pc=0x12ba, .a=0x72, .x=0xde, .y=0x92, .sp=0x19, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x12ba, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x12bb, .a=0x72, .x=0xde, .y=0x92, .sp=0xde, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x12ba, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x12ba, .value=0xbd, .type=IO_READ},
        {.addr=0x12bb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_025E) {
    const struct CPU_State initial_cpu = {.pc=0xa87d, .a=0x25, .x=0x3d, .y=0xd5, .sp=0xcd, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xa87d, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xa87e, .a=0x25, .x=0x3d, .y=0xd5, .sp=0x3d, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xa87d, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xa87d, .value=0xbd, .type=IO_READ},
        {.addr=0xa87e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_025F) {
    const struct CPU_State initial_cpu = {.pc=0x9e6d, .a=0x73, .x=0x0b, .y=0xd6, .sp=0x92, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x9e6d, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x9e6e, .a=0x73, .x=0x0b, .y=0xd6, .sp=0x0b, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x9e6d, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x9e6d, .value=0xbd, .type=IO_READ},
        {.addr=0x9e6e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0260) {
    const struct CPU_State initial_cpu = {.pc=0x680d, .a=0xfe, .x=0xd8, .y=0xa5, .sp=0x3e, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x680d, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x680e, .a=0xfe, .x=0xd8, .y=0xa5, .sp=0xd8, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x680d, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x680d, .value=0xbd, .type=IO_READ},
        {.addr=0x680e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0261) {
    const struct CPU_State initial_cpu = {.pc=0xe7ff, .a=0x39, .x=0x1c, .y=0xd9, .sp=0xec, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xe7ff, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xe800, .a=0x39, .x=0x1c, .y=0xd9, .sp=0x1c, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xe7ff, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xe7ff, .value=0xbd, .type=IO_READ},
        {.addr=0xe800, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0262) {
    const struct CPU_State initial_cpu = {.pc=0xba02, .a=0x3e, .x=0xd8, .y=0x68, .sp=0x41, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xba02, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xba03, .a=0x3e, .x=0xd8, .y=0x68, .sp=0xd8, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0xba02, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xba02, .value=0xbd, .type=IO_READ},
        {.addr=0xba03, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0263) {
    const struct CPU_State initial_cpu = {.pc=0x2703, .a=0x8c, .x=0xd1, .y=0xe3, .sp=0x56, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x2703, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x2704, .a=0x8c, .x=0xd1, .y=0xe3, .sp=0xd1, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x2703, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x2703, .value=0xbd, .type=IO_READ},
        {.addr=0x2704, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0264) {
    const struct CPU_State initial_cpu = {.pc=0xcfb6, .a=0x3b, .x=0x94, .y=0x50, .sp=0x6f, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xcfb6, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xcfb7, .a=0x3b, .x=0x94, .y=0x50, .sp=0x94, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0xcfb6, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xcfb6, .value=0xbd, .type=IO_READ},
        {.addr=0xcfb7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0265) {
    const struct CPU_State initial_cpu = {.pc=0x08ec, .a=0x58, .x=0xf5, .y=0xba, .sp=0xda, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x08ec, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x08ed, .a=0x58, .x=0xf5, .y=0xba, .sp=0xf5, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x08ec, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x08ec, .value=0xbd, .type=IO_READ},
        {.addr=0x08ed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0266) {
    const struct CPU_State initial_cpu = {.pc=0xbea7, .a=0xe5, .x=0xb4, .y=0xe3, .sp=0x1a, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xbea7, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xbea8, .a=0xe5, .x=0xb4, .y=0xe3, .sp=0xb4, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0xbea7, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xbea7, .value=0xbd, .type=IO_READ},
        {.addr=0xbea8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0267) {
    const struct CPU_State initial_cpu = {.pc=0xdba5, .a=0xfd, .x=0x2d, .y=0x7b, .sp=0x7e, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xdba5, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xdba6, .a=0xfd, .x=0x2d, .y=0x7b, .sp=0x2d, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xdba5, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xdba5, .value=0xbd, .type=IO_READ},
        {.addr=0xdba6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0268) {
    const struct CPU_State initial_cpu = {.pc=0x23b6, .a=0x1b, .x=0x64, .y=0x67, .sp=0x2e, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x23b6, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x23b7, .a=0x1b, .x=0x64, .y=0x67, .sp=0x64, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x23b6, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x23b6, .value=0xbd, .type=IO_READ},
        {.addr=0x23b7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0269) {
    const struct CPU_State initial_cpu = {.pc=0xbd9e, .a=0x5e, .x=0xbc, .y=0xff, .sp=0xf7, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xbd9e, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xbd9f, .a=0x5e, .x=0xbc, .y=0xff, .sp=0xbc, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0xbd9e, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xbd9e, .value=0xbd, .type=IO_READ},
        {.addr=0xbd9f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_026A) {
    const struct CPU_State initial_cpu = {.pc=0xbf82, .a=0x42, .x=0x89, .y=0x10, .sp=0xbb, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xbf82, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xbf83, .a=0x42, .x=0x89, .y=0x10, .sp=0x89, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xbf82, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xbf82, .value=0xbd, .type=IO_READ},
        {.addr=0xbf83, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_026B) {
    const struct CPU_State initial_cpu = {.pc=0x0268, .a=0x5c, .x=0xee, .y=0x53, .sp=0x22, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x0268, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x0269, .a=0x5c, .x=0xee, .y=0x53, .sp=0xee, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x0268, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x0268, .value=0xbd, .type=IO_READ},
        {.addr=0x0269, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_026C) {
    const struct CPU_State initial_cpu = {.pc=0x32bd, .a=0xa4, .x=0x24, .y=0xa2, .sp=0x90, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x32bd, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x32be, .a=0xa4, .x=0x24, .y=0xa2, .sp=0x24, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x32bd, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x32bd, .value=0xbd, .type=IO_READ},
        {.addr=0x32be, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_026D) {
    const struct CPU_State initial_cpu = {.pc=0x4422, .a=0xa4, .x=0x51, .y=0x39, .sp=0xdf, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x4422, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x4423, .a=0xa4, .x=0x51, .y=0x39, .sp=0x51, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x4422, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x4422, .value=0xbd, .type=IO_READ},
        {.addr=0x4423, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_026E) {
    const struct CPU_State initial_cpu = {.pc=0xc0b0, .a=0x58, .x=0xc5, .y=0xf2, .sp=0xe0, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xc0b0, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xc0b1, .a=0x58, .x=0xc5, .y=0xf2, .sp=0xc5, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0xc0b0, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xc0b0, .value=0xbd, .type=IO_READ},
        {.addr=0xc0b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_026F) {
    const struct CPU_State initial_cpu = {.pc=0x2dc4, .a=0xb1, .x=0x93, .y=0xd8, .sp=0x14, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x2dc4, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x2dc5, .a=0xb1, .x=0x93, .y=0xd8, .sp=0x93, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x2dc4, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x2dc4, .value=0xbd, .type=IO_READ},
        {.addr=0x2dc5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0270) {
    const struct CPU_State initial_cpu = {.pc=0x03c6, .a=0xab, .x=0x8b, .y=0xaa, .sp=0x49, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x03c6, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x03c7, .a=0xab, .x=0x8b, .y=0xaa, .sp=0x8b, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x03c6, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x03c6, .value=0xbd, .type=IO_READ},
        {.addr=0x03c7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0271) {
    const struct CPU_State initial_cpu = {.pc=0x6b9a, .a=0xd8, .x=0x62, .y=0x5d, .sp=0xce, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x6b9a, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x6b9b, .a=0xd8, .x=0x62, .y=0x5d, .sp=0x62, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x6b9a, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x6b9a, .value=0xbd, .type=IO_READ},
        {.addr=0x6b9b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0272) {
    const struct CPU_State initial_cpu = {.pc=0x171f, .a=0xe3, .x=0x22, .y=0x8b, .sp=0x58, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x171f, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x1720, .a=0xe3, .x=0x22, .y=0x8b, .sp=0x22, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x171f, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x171f, .value=0xbd, .type=IO_READ},
        {.addr=0x1720, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0273) {
    const struct CPU_State initial_cpu = {.pc=0x3b0f, .a=0xeb, .x=0x57, .y=0x84, .sp=0x5c, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x3b0f, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x3b10, .a=0xeb, .x=0x57, .y=0x84, .sp=0x57, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x3b0f, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x3b0f, .value=0xbd, .type=IO_READ},
        {.addr=0x3b10, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0274) {
    const struct CPU_State initial_cpu = {.pc=0x003f, .a=0xb3, .x=0x78, .y=0xb1, .sp=0x16, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x003f, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x0040, .a=0xb3, .x=0x78, .y=0xb1, .sp=0x78, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x003f, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x003f, .value=0xbd, .type=IO_READ},
        {.addr=0x0040, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0275) {
    const struct CPU_State initial_cpu = {.pc=0xde0c, .a=0x9f, .x=0x11, .y=0x84, .sp=0xbd, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xde0c, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xde0d, .a=0x9f, .x=0x11, .y=0x84, .sp=0x11, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xde0c, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xde0c, .value=0xbd, .type=IO_READ},
        {.addr=0xde0d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0276) {
    const struct CPU_State initial_cpu = {.pc=0x7bc7, .a=0xfc, .x=0x4a, .y=0x80, .sp=0xa0, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x7bc7, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x7bc8, .a=0xfc, .x=0x4a, .y=0x80, .sp=0x4a, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x7bc7, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x7bc7, .value=0xbd, .type=IO_READ},
        {.addr=0x7bc8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0277) {
    const struct CPU_State initial_cpu = {.pc=0x8426, .a=0x83, .x=0x3e, .y=0x5a, .sp=0x11, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x8426, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x8427, .a=0x83, .x=0x3e, .y=0x5a, .sp=0x3e, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x8426, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x8426, .value=0xbd, .type=IO_READ},
        {.addr=0x8427, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0278) {
    const struct CPU_State initial_cpu = {.pc=0x86c2, .a=0xce, .x=0xea, .y=0xcf, .sp=0x63, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x86c2, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x86c3, .a=0xce, .x=0xea, .y=0xcf, .sp=0xea, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x86c2, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x86c2, .value=0xbd, .type=IO_READ},
        {.addr=0x86c3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0279) {
    const struct CPU_State initial_cpu = {.pc=0x70c4, .a=0x12, .x=0x02, .y=0x9a, .sp=0x58, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x70c4, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x70c5, .a=0x12, .x=0x02, .y=0x9a, .sp=0x02, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x70c4, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x70c4, .value=0xbd, .type=IO_READ},
        {.addr=0x70c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_027A) {
    const struct CPU_State initial_cpu = {.pc=0x3100, .a=0xdf, .x=0x73, .y=0xc5, .sp=0x1a, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x3100, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x3101, .a=0xdf, .x=0x73, .y=0xc5, .sp=0x73, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x3100, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x3100, .value=0xbd, .type=IO_READ},
        {.addr=0x3101, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_027B) {
    const struct CPU_State initial_cpu = {.pc=0xacaa, .a=0xfd, .x=0x51, .y=0xec, .sp=0x8d, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xacaa, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xacab, .a=0xfd, .x=0x51, .y=0xec, .sp=0x51, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xacaa, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xacaa, .value=0xbd, .type=IO_READ},
        {.addr=0xacab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_027C) {
    const struct CPU_State initial_cpu = {.pc=0xebee, .a=0xea, .x=0x0a, .y=0x7b, .sp=0xf5, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xebee, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xebef, .a=0xea, .x=0x0a, .y=0x7b, .sp=0x0a, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xebee, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xebee, .value=0xbd, .type=IO_READ},
        {.addr=0xebef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_027D) {
    const struct CPU_State initial_cpu = {.pc=0x65bb, .a=0x44, .x=0xcd, .y=0x9b, .sp=0x4c, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x65bb, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x65bc, .a=0x44, .x=0xcd, .y=0x9b, .sp=0xcd, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x65bb, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x65bb, .value=0xbd, .type=IO_READ},
        {.addr=0x65bc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_027E) {
    const struct CPU_State initial_cpu = {.pc=0x32bc, .a=0xb1, .x=0x94, .y=0x74, .sp=0xdf, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x32bc, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x32bd, .a=0xb1, .x=0x94, .y=0x74, .sp=0x94, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x32bc, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x32bc, .value=0xbd, .type=IO_READ},
        {.addr=0x32bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_027F) {
    const struct CPU_State initial_cpu = {.pc=0x9d77, .a=0x96, .x=0xbf, .y=0x06, .sp=0x48, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x9d77, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x9d78, .a=0x96, .x=0xbf, .y=0x06, .sp=0xbf, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x9d77, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x9d77, .value=0xbd, .type=IO_READ},
        {.addr=0x9d78, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0280) {
    const struct CPU_State initial_cpu = {.pc=0xce3c, .a=0x73, .x=0xde, .y=0x44, .sp=0xde, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xce3c, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xce3d, .a=0x73, .x=0xde, .y=0x44, .sp=0xde, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xce3c, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xce3c, .value=0xbd, .type=IO_READ},
        {.addr=0xce3d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0281) {
    const struct CPU_State initial_cpu = {.pc=0x9018, .a=0x3a, .x=0x65, .y=0xf2, .sp=0x8c, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x9018, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x9019, .a=0x3a, .x=0x65, .y=0xf2, .sp=0x65, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x9018, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x9018, .value=0xbd, .type=IO_READ},
        {.addr=0x9019, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0282) {
    const struct CPU_State initial_cpu = {.pc=0x55e9, .a=0x01, .x=0xdd, .y=0x4b, .sp=0xbe, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x55e9, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x55ea, .a=0x01, .x=0xdd, .y=0x4b, .sp=0xdd, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x55e9, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x55e9, .value=0xbd, .type=IO_READ},
        {.addr=0x55ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0283) {
    const struct CPU_State initial_cpu = {.pc=0xa223, .a=0xad, .x=0xfc, .y=0x31, .sp=0xf0, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xa223, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xa224, .a=0xad, .x=0xfc, .y=0x31, .sp=0xfc, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0xa223, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xa223, .value=0xbd, .type=IO_READ},
        {.addr=0xa224, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0284) {
    const struct CPU_State initial_cpu = {.pc=0x9b09, .a=0x5f, .x=0xaf, .y=0x1c, .sp=0x34, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x9b09, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x9b0a, .a=0x5f, .x=0xaf, .y=0x1c, .sp=0xaf, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x9b09, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x9b09, .value=0xbd, .type=IO_READ},
        {.addr=0x9b0a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0285) {
    const struct CPU_State initial_cpu = {.pc=0x9ef6, .a=0x57, .x=0xb2, .y=0xe6, .sp=0xe2, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x9ef6, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x9ef7, .a=0x57, .x=0xb2, .y=0xe6, .sp=0xb2, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x9ef6, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x9ef6, .value=0xbd, .type=IO_READ},
        {.addr=0x9ef7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0286) {
    const struct CPU_State initial_cpu = {.pc=0x7f8c, .a=0xf2, .x=0xde, .y=0x08, .sp=0x9f, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x7f8c, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x7f8d, .a=0xf2, .x=0xde, .y=0x08, .sp=0xde, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x7f8c, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x7f8c, .value=0xbd, .type=IO_READ},
        {.addr=0x7f8d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0287) {
    const struct CPU_State initial_cpu = {.pc=0xdc35, .a=0x90, .x=0xee, .y=0xbd, .sp=0xe0, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xdc35, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xdc36, .a=0x90, .x=0xee, .y=0xbd, .sp=0xee, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0xdc35, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xdc35, .value=0xbd, .type=IO_READ},
        {.addr=0xdc36, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0288) {
    const struct CPU_State initial_cpu = {.pc=0x5fad, .a=0x28, .x=0x84, .y=0x52, .sp=0x41, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x5fad, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x5fae, .a=0x28, .x=0x84, .y=0x52, .sp=0x84, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x5fad, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x5fad, .value=0xbd, .type=IO_READ},
        {.addr=0x5fae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0289) {
    const struct CPU_State initial_cpu = {.pc=0xb7de, .a=0x2d, .x=0x65, .y=0xa8, .sp=0x14, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xb7de, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xb7df, .a=0x2d, .x=0x65, .y=0xa8, .sp=0x65, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0xb7de, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xb7de, .value=0xbd, .type=IO_READ},
        {.addr=0xb7df, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_028A) {
    const struct CPU_State initial_cpu = {.pc=0x94a5, .a=0x27, .x=0xfa, .y=0xb5, .sp=0x07, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x94a5, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x94a6, .a=0x27, .x=0xfa, .y=0xb5, .sp=0xfa, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x94a5, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x94a5, .value=0xbd, .type=IO_READ},
        {.addr=0x94a6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_028B) {
    const struct CPU_State initial_cpu = {.pc=0xd514, .a=0x51, .x=0x2b, .y=0xfc, .sp=0x56, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xd514, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xd515, .a=0x51, .x=0x2b, .y=0xfc, .sp=0x2b, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0xd514, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xd514, .value=0xbd, .type=IO_READ},
        {.addr=0xd515, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_028C) {
    const struct CPU_State initial_cpu = {.pc=0x9e79, .a=0x54, .x=0x23, .y=0x3f, .sp=0x3e, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x9e79, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x9e7a, .a=0x54, .x=0x23, .y=0x3f, .sp=0x23, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x9e79, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x9e79, .value=0xbd, .type=IO_READ},
        {.addr=0x9e7a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_028D) {
    const struct CPU_State initial_cpu = {.pc=0xf355, .a=0x04, .x=0x1d, .y=0xe1, .sp=0x58, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0xf355, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xf356, .a=0x04, .x=0x1d, .y=0xe1, .sp=0x1d, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xf355, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xf355, .value=0xbd, .type=IO_READ},
        {.addr=0xf356, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_028E) {
    const struct CPU_State initial_cpu = {.pc=0x2c6d, .a=0xce, .x=0xb4, .y=0x87, .sp=0x6b, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x2c6d, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x2c6e, .a=0xce, .x=0xb4, .y=0x87, .sp=0xb4, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x2c6d, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x2c6d, .value=0xbd, .type=IO_READ},
        {.addr=0x2c6e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_028F) {
    const struct CPU_State initial_cpu = {.pc=0x3c1e, .a=0xd9, .x=0x8c, .y=0x22, .sp=0x00, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x3c1e, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x3c1f, .a=0xd9, .x=0x8c, .y=0x22, .sp=0x8c, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x3c1e, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x3c1e, .value=0xbd, .type=IO_READ},
        {.addr=0x3c1f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0290) {
    const struct CPU_State initial_cpu = {.pc=0xea49, .a=0xda, .x=0x3c, .y=0x25, .sp=0xf4, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xea49, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xea4a, .a=0xda, .x=0x3c, .y=0x25, .sp=0x3c, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0xea49, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xea49, .value=0xbd, .type=IO_READ},
        {.addr=0xea4a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0291) {
    const struct CPU_State initial_cpu = {.pc=0x8f6b, .a=0xfa, .x=0x37, .y=0xfa, .sp=0x4e, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x8f6b, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x8f6c, .a=0xfa, .x=0x37, .y=0xfa, .sp=0x37, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x8f6b, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x8f6b, .value=0xbd, .type=IO_READ},
        {.addr=0x8f6c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0292) {
    const struct CPU_State initial_cpu = {.pc=0xdf39, .a=0x64, .x=0x8a, .y=0x2a, .sp=0x96, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0xdf39, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xdf3a, .a=0x64, .x=0x8a, .y=0x2a, .sp=0x8a, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xdf39, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xdf39, .value=0xbd, .type=IO_READ},
        {.addr=0xdf3a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0293) {
    const struct CPU_State initial_cpu = {.pc=0x292b, .a=0xbd, .x=0xa9, .y=0x1c, .sp=0x5e, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x292b, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x292c, .a=0xbd, .x=0xa9, .y=0x1c, .sp=0xa9, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x292b, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x292b, .value=0xbd, .type=IO_READ},
        {.addr=0x292c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0294) {
    const struct CPU_State initial_cpu = {.pc=0xbe6f, .a=0x17, .x=0x15, .y=0x54, .sp=0xbe, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xbe6f, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xbe70, .a=0x17, .x=0x15, .y=0x54, .sp=0x15, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xbe6f, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xbe6f, .value=0xbd, .type=IO_READ},
        {.addr=0xbe70, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0295) {
    const struct CPU_State initial_cpu = {.pc=0xf0a2, .a=0x37, .x=0xa2, .y=0x12, .sp=0xc2, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xf0a2, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xf0a3, .a=0x37, .x=0xa2, .y=0x12, .sp=0xa2, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0xf0a2, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xf0a2, .value=0xbd, .type=IO_READ},
        {.addr=0xf0a3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0296) {
    const struct CPU_State initial_cpu = {.pc=0xb3cb, .a=0x88, .x=0x51, .y=0xd6, .sp=0x4c, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xb3cb, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xb3cc, .a=0x88, .x=0x51, .y=0xd6, .sp=0x51, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xb3cb, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xb3cb, .value=0xbd, .type=IO_READ},
        {.addr=0xb3cc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0297) {
    const struct CPU_State initial_cpu = {.pc=0x0aa3, .a=0xc4, .x=0x2a, .y=0xa3, .sp=0xc2, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x0aa3, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x0aa4, .a=0xc4, .x=0x2a, .y=0xa3, .sp=0x2a, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x0aa3, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x0aa3, .value=0xbd, .type=IO_READ},
        {.addr=0x0aa4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0298) {
    const struct CPU_State initial_cpu = {.pc=0x4197, .a=0x91, .x=0xda, .y=0xc7, .sp=0x72, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x4197, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x4198, .a=0x91, .x=0xda, .y=0xc7, .sp=0xda, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x4197, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x4197, .value=0xbd, .type=IO_READ},
        {.addr=0x4198, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0299) {
    const struct CPU_State initial_cpu = {.pc=0xab04, .a=0x32, .x=0x18, .y=0x7c, .sp=0x10, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xab04, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xab05, .a=0x32, .x=0x18, .y=0x7c, .sp=0x18, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0xab04, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xab04, .value=0xbd, .type=IO_READ},
        {.addr=0xab05, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_029A) {
    const struct CPU_State initial_cpu = {.pc=0xf1dd, .a=0x7c, .x=0x0a, .y=0x1e, .sp=0x1c, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xf1dd, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xf1de, .a=0x7c, .x=0x0a, .y=0x1e, .sp=0x0a, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0xf1dd, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xf1dd, .value=0xbd, .type=IO_READ},
        {.addr=0xf1de, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_029B) {
    const struct CPU_State initial_cpu = {.pc=0x56dd, .a=0xbf, .x=0x80, .y=0xb6, .sp=0xac, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x56dd, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x56de, .a=0xbf, .x=0x80, .y=0xb6, .sp=0x80, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x56dd, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x56dd, .value=0xbd, .type=IO_READ},
        {.addr=0x56de, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_029C) {
    const struct CPU_State initial_cpu = {.pc=0xb9c8, .a=0x86, .x=0x88, .y=0xfa, .sp=0xfe, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xb9c8, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xb9c9, .a=0x86, .x=0x88, .y=0xfa, .sp=0x88, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0xb9c8, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xb9c8, .value=0xbd, .type=IO_READ},
        {.addr=0xb9c9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_029D) {
    const struct CPU_State initial_cpu = {.pc=0xa52e, .a=0x72, .x=0x06, .y=0x6d, .sp=0xef, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xa52e, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xa52f, .a=0x72, .x=0x06, .y=0x6d, .sp=0x06, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xa52e, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xa52e, .value=0xbd, .type=IO_READ},
        {.addr=0xa52f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_029E) {
    const struct CPU_State initial_cpu = {.pc=0x3278, .a=0x4c, .x=0x70, .y=0x01, .sp=0x19, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x3278, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x3279, .a=0x4c, .x=0x70, .y=0x01, .sp=0x70, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x3278, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x3278, .value=0xbd, .type=IO_READ},
        {.addr=0x3279, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_029F) {
    const struct CPU_State initial_cpu = {.pc=0x6232, .a=0x14, .x=0xa9, .y=0x92, .sp=0xb1, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x6232, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x6233, .a=0x14, .x=0xa9, .y=0x92, .sp=0xa9, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x6232, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x6232, .value=0xbd, .type=IO_READ},
        {.addr=0x6233, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02A0) {
    const struct CPU_State initial_cpu = {.pc=0x220e, .a=0xb9, .x=0xbd, .y=0x36, .sp=0x3e, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x220e, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x220f, .a=0xb9, .x=0xbd, .y=0x36, .sp=0xbd, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x220e, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x220e, .value=0xbd, .type=IO_READ},
        {.addr=0x220f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02A1) {
    const struct CPU_State initial_cpu = {.pc=0xab1f, .a=0xb8, .x=0xd2, .y=0xb7, .sp=0xad, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xab1f, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xab20, .a=0xb8, .x=0xd2, .y=0xb7, .sp=0xd2, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0xab1f, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xab1f, .value=0xbd, .type=IO_READ},
        {.addr=0xab20, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02A2) {
    const struct CPU_State initial_cpu = {.pc=0x997d, .a=0x46, .x=0x5f, .y=0x97, .sp=0x3c, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x997d, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x997e, .a=0x46, .x=0x5f, .y=0x97, .sp=0x5f, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x997d, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x997d, .value=0xbd, .type=IO_READ},
        {.addr=0x997e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02A3) {
    const struct CPU_State initial_cpu = {.pc=0xfacb, .a=0x59, .x=0x55, .y=0x2a, .sp=0xea, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xfacb, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xfacc, .a=0x59, .x=0x55, .y=0x2a, .sp=0x55, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xfacb, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xfacb, .value=0xbd, .type=IO_READ},
        {.addr=0xfacc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02A4) {
    const struct CPU_State initial_cpu = {.pc=0xc2f8, .a=0x12, .x=0xe3, .y=0x37, .sp=0xdb, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xc2f8, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xc2f9, .a=0x12, .x=0xe3, .y=0x37, .sp=0xe3, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xc2f8, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xc2f8, .value=0xbd, .type=IO_READ},
        {.addr=0xc2f9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02A5) {
    const struct CPU_State initial_cpu = {.pc=0xfdb1, .a=0x8c, .x=0xc0, .y=0xc5, .sp=0x94, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xfdb1, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xfdb2, .a=0x8c, .x=0xc0, .y=0xc5, .sp=0xc0, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xfdb1, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xfdb1, .value=0xbd, .type=IO_READ},
        {.addr=0xfdb2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02A6) {
    const struct CPU_State initial_cpu = {.pc=0xd7fd, .a=0x84, .x=0x4a, .y=0x94, .sp=0x13, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xd7fd, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xd7fe, .a=0x84, .x=0x4a, .y=0x94, .sp=0x4a, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xd7fd, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xd7fd, .value=0xbd, .type=IO_READ},
        {.addr=0xd7fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02A7) {
    const struct CPU_State initial_cpu = {.pc=0xa756, .a=0x8d, .x=0x66, .y=0xeb, .sp=0x1d, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xa756, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xa757, .a=0x8d, .x=0x66, .y=0xeb, .sp=0x66, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0xa756, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xa756, .value=0xbd, .type=IO_READ},
        {.addr=0xa757, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02A8) {
    const struct CPU_State initial_cpu = {.pc=0x5619, .a=0xf0, .x=0xdd, .y=0xfc, .sp=0xf4, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x5619, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x561a, .a=0xf0, .x=0xdd, .y=0xfc, .sp=0xdd, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x5619, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x5619, .value=0xbd, .type=IO_READ},
        {.addr=0x561a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02A9) {
    const struct CPU_State initial_cpu = {.pc=0x29b4, .a=0x61, .x=0x53, .y=0xcf, .sp=0x1f, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x29b4, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x29b5, .a=0x61, .x=0x53, .y=0xcf, .sp=0x53, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x29b4, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x29b4, .value=0xbd, .type=IO_READ},
        {.addr=0x29b5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02AA) {
    const struct CPU_State initial_cpu = {.pc=0xd4e8, .a=0x32, .x=0x79, .y=0xa1, .sp=0xbb, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xd4e8, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xd4e9, .a=0x32, .x=0x79, .y=0xa1, .sp=0x79, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0xd4e8, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xd4e8, .value=0xbd, .type=IO_READ},
        {.addr=0xd4e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02AB) {
    const struct CPU_State initial_cpu = {.pc=0xc1c5, .a=0xf4, .x=0x8c, .y=0x24, .sp=0xb1, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xc1c5, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xc1c6, .a=0xf4, .x=0x8c, .y=0x24, .sp=0x8c, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0xc1c5, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xc1c5, .value=0xbd, .type=IO_READ},
        {.addr=0xc1c6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02AC) {
    const struct CPU_State initial_cpu = {.pc=0x4e9d, .a=0xac, .x=0x32, .y=0x82, .sp=0x47, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x4e9d, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x4e9e, .a=0xac, .x=0x32, .y=0x82, .sp=0x32, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x4e9d, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x4e9d, .value=0xbd, .type=IO_READ},
        {.addr=0x4e9e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02AD) {
    const struct CPU_State initial_cpu = {.pc=0x7f93, .a=0xd6, .x=0xaf, .y=0x85, .sp=0xd0, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x7f93, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x7f94, .a=0xd6, .x=0xaf, .y=0x85, .sp=0xaf, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x7f93, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x7f93, .value=0xbd, .type=IO_READ},
        {.addr=0x7f94, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02AE) {
    const struct CPU_State initial_cpu = {.pc=0xe8b0, .a=0x94, .x=0xc8, .y=0xfe, .sp=0xd5, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xe8b0, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xe8b1, .a=0x94, .x=0xc8, .y=0xfe, .sp=0xc8, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0xe8b0, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xe8b0, .value=0xbd, .type=IO_READ},
        {.addr=0xe8b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02AF) {
    const struct CPU_State initial_cpu = {.pc=0x6833, .a=0xf7, .x=0x9c, .y=0xfc, .sp=0xea, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x6833, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x6834, .a=0xf7, .x=0x9c, .y=0xfc, .sp=0x9c, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x6833, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x6833, .value=0xbd, .type=IO_READ},
        {.addr=0x6834, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02B0) {
    const struct CPU_State initial_cpu = {.pc=0x233e, .a=0x6d, .x=0xeb, .y=0x54, .sp=0x52, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x233e, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x233f, .a=0x6d, .x=0xeb, .y=0x54, .sp=0xeb, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x233e, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x233e, .value=0xbd, .type=IO_READ},
        {.addr=0x233f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02B1) {
    const struct CPU_State initial_cpu = {.pc=0x505a, .a=0xdd, .x=0xb4, .y=0xa4, .sp=0xa4, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x505a, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x505b, .a=0xdd, .x=0xb4, .y=0xa4, .sp=0xb4, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x505a, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x505a, .value=0xbd, .type=IO_READ},
        {.addr=0x505b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02B2) {
    const struct CPU_State initial_cpu = {.pc=0x976e, .a=0xdd, .x=0xeb, .y=0x89, .sp=0xff, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x976e, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x976f, .a=0xdd, .x=0xeb, .y=0x89, .sp=0xeb, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x976e, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x976e, .value=0xbd, .type=IO_READ},
        {.addr=0x976f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02B3) {
    const struct CPU_State initial_cpu = {.pc=0xa04f, .a=0xd0, .x=0xb9, .y=0xab, .sp=0x9d, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xa04f, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xa050, .a=0xd0, .x=0xb9, .y=0xab, .sp=0xb9, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xa04f, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xa04f, .value=0xbd, .type=IO_READ},
        {.addr=0xa050, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02B4) {
    const struct CPU_State initial_cpu = {.pc=0x4f60, .a=0x52, .x=0xba, .y=0x96, .sp=0x55, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x4f60, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x4f61, .a=0x52, .x=0xba, .y=0x96, .sp=0xba, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x4f60, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x4f60, .value=0xbd, .type=IO_READ},
        {.addr=0x4f61, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02B5) {
    const struct CPU_State initial_cpu = {.pc=0xe5d1, .a=0x89, .x=0xe4, .y=0x60, .sp=0x12, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xe5d1, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xe5d2, .a=0x89, .x=0xe4, .y=0x60, .sp=0xe4, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xe5d1, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xe5d1, .value=0xbd, .type=IO_READ},
        {.addr=0xe5d2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02B6) {
    const struct CPU_State initial_cpu = {.pc=0xaf48, .a=0xa5, .x=0x8c, .y=0x15, .sp=0x5b, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xaf48, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xaf49, .a=0xa5, .x=0x8c, .y=0x15, .sp=0x8c, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xaf48, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xaf48, .value=0xbd, .type=IO_READ},
        {.addr=0xaf49, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02B7) {
    const struct CPU_State initial_cpu = {.pc=0x3634, .a=0xcb, .x=0xed, .y=0xa0, .sp=0x05, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x3634, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x3635, .a=0xcb, .x=0xed, .y=0xa0, .sp=0xed, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x3634, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x3634, .value=0xbd, .type=IO_READ},
        {.addr=0x3635, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02B8) {
    const struct CPU_State initial_cpu = {.pc=0x89a7, .a=0x12, .x=0xf1, .y=0x34, .sp=0x91, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x89a7, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x89a8, .a=0x12, .x=0xf1, .y=0x34, .sp=0xf1, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x89a7, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x89a7, .value=0xbd, .type=IO_READ},
        {.addr=0x89a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02B9) {
    const struct CPU_State initial_cpu = {.pc=0x9a0b, .a=0xa1, .x=0x1b, .y=0xc1, .sp=0x85, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x9a0b, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x9a0c, .a=0xa1, .x=0x1b, .y=0xc1, .sp=0x1b, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x9a0b, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x9a0b, .value=0xbd, .type=IO_READ},
        {.addr=0x9a0c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02BA) {
    const struct CPU_State initial_cpu = {.pc=0x8ba3, .a=0xb1, .x=0x43, .y=0x06, .sp=0x03, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x8ba3, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x8ba4, .a=0xb1, .x=0x43, .y=0x06, .sp=0x43, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x8ba3, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x8ba3, .value=0xbd, .type=IO_READ},
        {.addr=0x8ba4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02BB) {
    const struct CPU_State initial_cpu = {.pc=0x5a32, .a=0x37, .x=0xb3, .y=0x2d, .sp=0x31, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x5a32, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x5a33, .a=0x37, .x=0xb3, .y=0x2d, .sp=0xb3, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x5a32, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x5a32, .value=0xbd, .type=IO_READ},
        {.addr=0x5a33, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02BC) {
    const struct CPU_State initial_cpu = {.pc=0x1ea9, .a=0xcd, .x=0x64, .y=0xaf, .sp=0xa3, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x1ea9, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x1eaa, .a=0xcd, .x=0x64, .y=0xaf, .sp=0x64, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x1ea9, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x1ea9, .value=0xbd, .type=IO_READ},
        {.addr=0x1eaa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02BD) {
    const struct CPU_State initial_cpu = {.pc=0xd92b, .a=0x1d, .x=0x5f, .y=0xaf, .sp=0x19, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xd92b, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xd92c, .a=0x1d, .x=0x5f, .y=0xaf, .sp=0x5f, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xd92b, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xd92b, .value=0xbd, .type=IO_READ},
        {.addr=0xd92c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02BE) {
    const struct CPU_State initial_cpu = {.pc=0x57f6, .a=0x83, .x=0xf5, .y=0x4b, .sp=0xff, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x57f6, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x57f7, .a=0x83, .x=0xf5, .y=0x4b, .sp=0xf5, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x57f6, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x57f6, .value=0xbd, .type=IO_READ},
        {.addr=0x57f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02BF) {
    const struct CPU_State initial_cpu = {.pc=0x41bb, .a=0x1a, .x=0x53, .y=0x11, .sp=0xc8, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x41bb, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x41bc, .a=0x1a, .x=0x53, .y=0x11, .sp=0x53, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x41bb, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x41bb, .value=0xbd, .type=IO_READ},
        {.addr=0x41bc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02C0) {
    const struct CPU_State initial_cpu = {.pc=0x716c, .a=0xd2, .x=0x17, .y=0x87, .sp=0xc0, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x716c, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x716d, .a=0xd2, .x=0x17, .y=0x87, .sp=0x17, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x716c, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x716c, .value=0xbd, .type=IO_READ},
        {.addr=0x716d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02C1) {
    const struct CPU_State initial_cpu = {.pc=0x5258, .a=0x9d, .x=0xd9, .y=0x8a, .sp=0xe5, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x5258, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x5259, .a=0x9d, .x=0xd9, .y=0x8a, .sp=0xd9, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x5258, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x5258, .value=0xbd, .type=IO_READ},
        {.addr=0x5259, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02C2) {
    const struct CPU_State initial_cpu = {.pc=0x41f9, .a=0xf6, .x=0x0b, .y=0x63, .sp=0xcd, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x41f9, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x41fa, .a=0xf6, .x=0x0b, .y=0x63, .sp=0x0b, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x41f9, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x41f9, .value=0xbd, .type=IO_READ},
        {.addr=0x41fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02C3) {
    const struct CPU_State initial_cpu = {.pc=0x1e64, .a=0x8c, .x=0x68, .y=0x60, .sp=0x4d, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x1e64, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x1e65, .a=0x8c, .x=0x68, .y=0x60, .sp=0x68, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x1e64, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x1e64, .value=0xbd, .type=IO_READ},
        {.addr=0x1e65, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02C4) {
    const struct CPU_State initial_cpu = {.pc=0x8337, .a=0x63, .x=0x91, .y=0x80, .sp=0x55, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x8337, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x8338, .a=0x63, .x=0x91, .y=0x80, .sp=0x91, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x8337, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x8337, .value=0xbd, .type=IO_READ},
        {.addr=0x8338, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x0793, .a=0x6e, .x=0xde, .y=0x58, .sp=0x62, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x0793, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x0794, .a=0x6e, .x=0xde, .y=0x58, .sp=0xde, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0x0793, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x0793, .value=0xbd, .type=IO_READ},
        {.addr=0x0794, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02C6) {
    const struct CPU_State initial_cpu = {.pc=0xa73e, .a=0xa0, .x=0x7e, .y=0xe0, .sp=0x71, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xa73e, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xa73f, .a=0xa0, .x=0x7e, .y=0xe0, .sp=0x7e, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xa73e, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xa73e, .value=0xbd, .type=IO_READ},
        {.addr=0xa73f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02C7) {
    const struct CPU_State initial_cpu = {.pc=0xc1fa, .a=0xd4, .x=0xe3, .y=0xbb, .sp=0x92, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xc1fa, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xc1fb, .a=0xd4, .x=0xe3, .y=0xbb, .sp=0xe3, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xc1fa, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xc1fa, .value=0xbd, .type=IO_READ},
        {.addr=0xc1fb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02C8) {
    const struct CPU_State initial_cpu = {.pc=0x9a1c, .a=0x88, .x=0x01, .y=0xd8, .sp=0xd1, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x9a1c, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x9a1d, .a=0x88, .x=0x01, .y=0xd8, .sp=0x01, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x9a1c, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x9a1c, .value=0xbd, .type=IO_READ},
        {.addr=0x9a1d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02C9) {
    const struct CPU_State initial_cpu = {.pc=0x723a, .a=0x82, .x=0x45, .y=0x82, .sp=0xc3, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x723a, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x723b, .a=0x82, .x=0x45, .y=0x82, .sp=0x45, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x723a, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x723a, .value=0xbd, .type=IO_READ},
        {.addr=0x723b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02CA) {
    const struct CPU_State initial_cpu = {.pc=0x701b, .a=0xe2, .x=0x75, .y=0xa9, .sp=0x8d, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x701b, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x701c, .a=0xe2, .x=0x75, .y=0xa9, .sp=0x75, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x701b, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x701b, .value=0xbd, .type=IO_READ},
        {.addr=0x701c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02CB) {
    const struct CPU_State initial_cpu = {.pc=0x4f74, .a=0xa3, .x=0xb1, .y=0xaf, .sp=0x59, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x4f74, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x4f75, .a=0xa3, .x=0xb1, .y=0xaf, .sp=0xb1, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x4f74, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x4f74, .value=0xbd, .type=IO_READ},
        {.addr=0x4f75, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02CC) {
    const struct CPU_State initial_cpu = {.pc=0xbaa3, .a=0x76, .x=0xdb, .y=0x39, .sp=0x53, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xbaa3, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xbaa4, .a=0x76, .x=0xdb, .y=0x39, .sp=0xdb, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xbaa3, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xbaa3, .value=0xbd, .type=IO_READ},
        {.addr=0xbaa4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02CD) {
    const struct CPU_State initial_cpu = {.pc=0x3887, .a=0xa1, .x=0x10, .y=0x0e, .sp=0x69, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x3887, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x3888, .a=0xa1, .x=0x10, .y=0x0e, .sp=0x10, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x3887, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x3887, .value=0xbd, .type=IO_READ},
        {.addr=0x3888, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02CE) {
    const struct CPU_State initial_cpu = {.pc=0x3a3c, .a=0xb2, .x=0xc5, .y=0x1e, .sp=0x8b, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x3a3c, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x3a3d, .a=0xb2, .x=0xc5, .y=0x1e, .sp=0xc5, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x3a3c, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x3a3c, .value=0xbd, .type=IO_READ},
        {.addr=0x3a3d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02CF) {
    const struct CPU_State initial_cpu = {.pc=0x39c1, .a=0x0c, .x=0xc0, .y=0x8d, .sp=0x64, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x39c1, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x39c2, .a=0x0c, .x=0xc0, .y=0x8d, .sp=0xc0, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x39c1, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x39c1, .value=0xbd, .type=IO_READ},
        {.addr=0x39c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02D0) {
    const struct CPU_State initial_cpu = {.pc=0xf25e, .a=0x3a, .x=0x89, .y=0x31, .sp=0xf3, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xf25e, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xf25f, .a=0x3a, .x=0x89, .y=0x31, .sp=0x89, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xf25e, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xf25e, .value=0xbd, .type=IO_READ},
        {.addr=0xf25f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02D1) {
    const struct CPU_State initial_cpu = {.pc=0x97fe, .a=0xcf, .x=0xea, .y=0x2f, .sp=0x18, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x97fe, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x97ff, .a=0xcf, .x=0xea, .y=0x2f, .sp=0xea, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x97fe, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x97fe, .value=0xbd, .type=IO_READ},
        {.addr=0x97ff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x4275, .a=0xd7, .x=0xa0, .y=0x61, .sp=0xe1, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x4275, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x4276, .a=0xd7, .x=0xa0, .y=0x61, .sp=0xa0, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x4275, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x4275, .value=0xbd, .type=IO_READ},
        {.addr=0x4276, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02D3) {
    const struct CPU_State initial_cpu = {.pc=0x70fa, .a=0xaf, .x=0x42, .y=0x64, .sp=0x68, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x70fa, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x70fb, .a=0xaf, .x=0x42, .y=0x64, .sp=0x42, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x70fa, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x70fa, .value=0xbd, .type=IO_READ},
        {.addr=0x70fb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02D4) {
    const struct CPU_State initial_cpu = {.pc=0x7a1a, .a=0xa8, .x=0x6c, .y=0x36, .sp=0xd6, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x7a1a, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x7a1b, .a=0xa8, .x=0x6c, .y=0x36, .sp=0x6c, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x7a1a, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x7a1a, .value=0xbd, .type=IO_READ},
        {.addr=0x7a1b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02D5) {
    const struct CPU_State initial_cpu = {.pc=0x8e78, .a=0x80, .x=0xa2, .y=0xc1, .sp=0xde, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x8e78, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x8e79, .a=0x80, .x=0xa2, .y=0xc1, .sp=0xa2, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x8e78, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x8e78, .value=0xbd, .type=IO_READ},
        {.addr=0x8e79, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02D6) {
    const struct CPU_State initial_cpu = {.pc=0x3507, .a=0x94, .x=0x0f, .y=0x00, .sp=0x60, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x3507, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x3508, .a=0x94, .x=0x0f, .y=0x00, .sp=0x0f, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x3507, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x3507, .value=0xbd, .type=IO_READ},
        {.addr=0x3508, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02D7) {
    const struct CPU_State initial_cpu = {.pc=0xf49b, .a=0x5f, .x=0x91, .y=0x22, .sp=0x61, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xf49b, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xf49c, .a=0x5f, .x=0x91, .y=0x22, .sp=0x91, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xf49b, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xf49b, .value=0xbd, .type=IO_READ},
        {.addr=0xf49c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02D8) {
    const struct CPU_State initial_cpu = {.pc=0x6dd2, .a=0x32, .x=0xd4, .y=0xe8, .sp=0x9e, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x6dd2, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x6dd3, .a=0x32, .x=0xd4, .y=0xe8, .sp=0xd4, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x6dd2, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x6dd2, .value=0xbd, .type=IO_READ},
        {.addr=0x6dd3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02D9) {
    const struct CPU_State initial_cpu = {.pc=0x8630, .a=0xd8, .x=0x1f, .y=0xe0, .sp=0x3a, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x8630, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x8631, .a=0xd8, .x=0x1f, .y=0xe0, .sp=0x1f, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x8630, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x8630, .value=0xbd, .type=IO_READ},
        {.addr=0x8631, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02DA) {
    const struct CPU_State initial_cpu = {.pc=0x6fb9, .a=0x1f, .x=0x41, .y=0x1c, .sp=0x29, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x6fb9, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x6fba, .a=0x1f, .x=0x41, .y=0x1c, .sp=0x41, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x6fb9, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x6fb9, .value=0xbd, .type=IO_READ},
        {.addr=0x6fba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02DB) {
    const struct CPU_State initial_cpu = {.pc=0xbd56, .a=0x5e, .x=0x67, .y=0x49, .sp=0xa0, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xbd56, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xbd57, .a=0x5e, .x=0x67, .y=0x49, .sp=0x67, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xbd56, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xbd56, .value=0xbd, .type=IO_READ},
        {.addr=0xbd57, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02DC) {
    const struct CPU_State initial_cpu = {.pc=0xd932, .a=0xa8, .x=0xaa, .y=0xbf, .sp=0xfd, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xd932, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xd933, .a=0xa8, .x=0xaa, .y=0xbf, .sp=0xaa, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xd932, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xd932, .value=0xbd, .type=IO_READ},
        {.addr=0xd933, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02DD) {
    const struct CPU_State initial_cpu = {.pc=0x739d, .a=0x16, .x=0x8b, .y=0xfa, .sp=0x5c, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x739d, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x739e, .a=0x16, .x=0x8b, .y=0xfa, .sp=0x8b, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x739d, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x739d, .value=0xbd, .type=IO_READ},
        {.addr=0x739e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02DE) {
    const struct CPU_State initial_cpu = {.pc=0x0e6e, .a=0x4f, .x=0x0d, .y=0xa3, .sp=0x2b, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x0e6e, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x0e6f, .a=0x4f, .x=0x0d, .y=0xa3, .sp=0x0d, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x0e6e, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x0e6e, .value=0xbd, .type=IO_READ},
        {.addr=0x0e6f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02DF) {
    const struct CPU_State initial_cpu = {.pc=0xfe52, .a=0x34, .x=0x36, .y=0x37, .sp=0x58, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xfe52, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xfe53, .a=0x34, .x=0x36, .y=0x37, .sp=0x36, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0xfe52, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xfe52, .value=0xbd, .type=IO_READ},
        {.addr=0xfe53, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02E0) {
    const struct CPU_State initial_cpu = {.pc=0x02b3, .a=0x09, .x=0x95, .y=0x40, .sp=0x5e, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x02b3, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x02b4, .a=0x09, .x=0x95, .y=0x40, .sp=0x95, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x02b3, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x02b3, .value=0xbd, .type=IO_READ},
        {.addr=0x02b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02E1) {
    const struct CPU_State initial_cpu = {.pc=0xc47a, .a=0x7e, .x=0x3e, .y=0x6d, .sp=0x05, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xc47a, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xc47b, .a=0x7e, .x=0x3e, .y=0x6d, .sp=0x3e, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xc47a, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xc47a, .value=0xbd, .type=IO_READ},
        {.addr=0xc47b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02E2) {
    const struct CPU_State initial_cpu = {.pc=0xd510, .a=0xc9, .x=0xbd, .y=0x21, .sp=0x06, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xd510, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xd511, .a=0xc9, .x=0xbd, .y=0x21, .sp=0xbd, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xd510, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xd510, .value=0xbd, .type=IO_READ},
        {.addr=0xd511, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02E3) {
    const struct CPU_State initial_cpu = {.pc=0x6547, .a=0xef, .x=0xb1, .y=0x06, .sp=0x9e, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x6547, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x6548, .a=0xef, .x=0xb1, .y=0x06, .sp=0xb1, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x6547, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x6547, .value=0xbd, .type=IO_READ},
        {.addr=0x6548, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02E4) {
    const struct CPU_State initial_cpu = {.pc=0x7dfa, .a=0x5b, .x=0xe2, .y=0xaa, .sp=0x76, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x7dfa, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x7dfb, .a=0x5b, .x=0xe2, .y=0xaa, .sp=0xe2, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x7dfa, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x7dfa, .value=0xbd, .type=IO_READ},
        {.addr=0x7dfb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02E5) {
    const struct CPU_State initial_cpu = {.pc=0x8550, .a=0xbb, .x=0xd0, .y=0x8f, .sp=0xc4, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x8550, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x8551, .a=0xbb, .x=0xd0, .y=0x8f, .sp=0xd0, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x8550, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x8550, .value=0xbd, .type=IO_READ},
        {.addr=0x8551, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02E6) {
    const struct CPU_State initial_cpu = {.pc=0x9e6e, .a=0xf8, .x=0x39, .y=0x3e, .sp=0x45, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x9e6e, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x9e6f, .a=0xf8, .x=0x39, .y=0x3e, .sp=0x39, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x9e6e, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x9e6e, .value=0xbd, .type=IO_READ},
        {.addr=0x9e6f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02E7) {
    const struct CPU_State initial_cpu = {.pc=0x2ffe, .a=0x6c, .x=0xd2, .y=0x92, .sp=0xe7, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x2ffe, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x2fff, .a=0x6c, .x=0xd2, .y=0x92, .sp=0xd2, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x2ffe, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x2ffe, .value=0xbd, .type=IO_READ},
        {.addr=0x2fff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02E8) {
    const struct CPU_State initial_cpu = {.pc=0xe348, .a=0x09, .x=0xe2, .y=0x0a, .sp=0x80, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xe348, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xe349, .a=0x09, .x=0xe2, .y=0x0a, .sp=0xe2, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0xe348, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xe348, .value=0xbd, .type=IO_READ},
        {.addr=0xe349, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02E9) {
    const struct CPU_State initial_cpu = {.pc=0x0479, .a=0x9b, .x=0x5a, .y=0x56, .sp=0x63, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x0479, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x047a, .a=0x9b, .x=0x5a, .y=0x56, .sp=0x5a, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x0479, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x0479, .value=0xbd, .type=IO_READ},
        {.addr=0x047a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02EA) {
    const struct CPU_State initial_cpu = {.pc=0x3f5b, .a=0x28, .x=0x10, .y=0x64, .sp=0xce, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x3f5b, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x3f5c, .a=0x28, .x=0x10, .y=0x64, .sp=0x10, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x3f5b, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x3f5b, .value=0xbd, .type=IO_READ},
        {.addr=0x3f5c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02EB) {
    const struct CPU_State initial_cpu = {.pc=0xe1fe, .a=0xbd, .x=0x80, .y=0x83, .sp=0xd4, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0xe1fe, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xe1ff, .a=0xbd, .x=0x80, .y=0x83, .sp=0x80, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xe1fe, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xe1fe, .value=0xbd, .type=IO_READ},
        {.addr=0xe1ff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02EC) {
    const struct CPU_State initial_cpu = {.pc=0x4373, .a=0x5a, .x=0x48, .y=0x7d, .sp=0xca, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x4373, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x4374, .a=0x5a, .x=0x48, .y=0x7d, .sp=0x48, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x4373, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x4373, .value=0xbd, .type=IO_READ},
        {.addr=0x4374, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02ED) {
    const struct CPU_State initial_cpu = {.pc=0x48d3, .a=0xd0, .x=0x13, .y=0x2d, .sp=0x39, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x48d3, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x48d4, .a=0xd0, .x=0x13, .y=0x2d, .sp=0x13, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x48d3, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x48d3, .value=0xbd, .type=IO_READ},
        {.addr=0x48d4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02EE) {
    const struct CPU_State initial_cpu = {.pc=0xa0b3, .a=0x08, .x=0x85, .y=0x37, .sp=0x3c, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xa0b3, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xa0b4, .a=0x08, .x=0x85, .y=0x37, .sp=0x85, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0xa0b3, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xa0b3, .value=0xbd, .type=IO_READ},
        {.addr=0xa0b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02EF) {
    const struct CPU_State initial_cpu = {.pc=0x90c3, .a=0xe7, .x=0xdb, .y=0xf2, .sp=0x27, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x90c3, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x90c4, .a=0xe7, .x=0xdb, .y=0xf2, .sp=0xdb, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x90c3, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x90c3, .value=0xbd, .type=IO_READ},
        {.addr=0x90c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02F0) {
    const struct CPU_State initial_cpu = {.pc=0xe1b6, .a=0x6f, .x=0x84, .y=0xaf, .sp=0x0b, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xe1b6, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xe1b7, .a=0x6f, .x=0x84, .y=0xaf, .sp=0x84, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xe1b6, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xe1b6, .value=0xbd, .type=IO_READ},
        {.addr=0xe1b7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02F1) {
    const struct CPU_State initial_cpu = {.pc=0x4213, .a=0xe5, .x=0xbc, .y=0x9c, .sp=0x12, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x4213, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x4214, .a=0xe5, .x=0xbc, .y=0x9c, .sp=0xbc, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x4213, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x4213, .value=0xbd, .type=IO_READ},
        {.addr=0x4214, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02F2) {
    const struct CPU_State initial_cpu = {.pc=0xf3eb, .a=0x63, .x=0xf1, .y=0xe3, .sp=0x9d, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0xf3eb, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xf3ec, .a=0x63, .x=0xf1, .y=0xe3, .sp=0xf1, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0xf3eb, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xf3eb, .value=0xbd, .type=IO_READ},
        {.addr=0xf3ec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02F3) {
    const struct CPU_State initial_cpu = {.pc=0x1336, .a=0x6f, .x=0xd6, .y=0x26, .sp=0x7c, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x1336, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x1337, .a=0x6f, .x=0xd6, .y=0x26, .sp=0xd6, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x1336, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x1336, .value=0xbd, .type=IO_READ},
        {.addr=0x1337, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02F4) {
    const struct CPU_State initial_cpu = {.pc=0x588e, .a=0xb5, .x=0x80, .y=0xe0, .sp=0xbc, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x588e, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x588f, .a=0xb5, .x=0x80, .y=0xe0, .sp=0x80, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x588e, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x588e, .value=0xbd, .type=IO_READ},
        {.addr=0x588f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02F5) {
    const struct CPU_State initial_cpu = {.pc=0xd92b, .a=0x58, .x=0x95, .y=0xf3, .sp=0xbf, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xd92b, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xd92c, .a=0x58, .x=0x95, .y=0xf3, .sp=0x95, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0xd92b, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xd92b, .value=0xbd, .type=IO_READ},
        {.addr=0xd92c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02F6) {
    const struct CPU_State initial_cpu = {.pc=0x71b0, .a=0xc4, .x=0x8b, .y=0xa4, .sp=0x7c, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x71b0, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x71b1, .a=0xc4, .x=0x8b, .y=0xa4, .sp=0x8b, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x71b0, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x71b0, .value=0xbd, .type=IO_READ},
        {.addr=0x71b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02F7) {
    const struct CPU_State initial_cpu = {.pc=0xfe4d, .a=0x6a, .x=0x28, .y=0xdc, .sp=0x03, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xfe4d, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xfe4e, .a=0x6a, .x=0x28, .y=0xdc, .sp=0x28, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xfe4d, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xfe4d, .value=0xbd, .type=IO_READ},
        {.addr=0xfe4e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02F8) {
    const struct CPU_State initial_cpu = {.pc=0x8473, .a=0xaf, .x=0xd6, .y=0xe0, .sp=0x16, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x8473, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x8474, .a=0xaf, .x=0xd6, .y=0xe0, .sp=0xd6, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x8473, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x8473, .value=0xbd, .type=IO_READ},
        {.addr=0x8474, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02F9) {
    const struct CPU_State initial_cpu = {.pc=0xf179, .a=0xb9, .x=0x41, .y=0xbc, .sp=0x8f, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xf179, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xf17a, .a=0xb9, .x=0x41, .y=0xbc, .sp=0x41, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0xf179, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xf179, .value=0xbd, .type=IO_READ},
        {.addr=0xf17a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02FA) {
    const struct CPU_State initial_cpu = {.pc=0x203f, .a=0x18, .x=0xba, .y=0xad, .sp=0x91, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x203f, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x2040, .a=0x18, .x=0xba, .y=0xad, .sp=0xba, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x203f, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x203f, .value=0xbd, .type=IO_READ},
        {.addr=0x2040, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02FB) {
    const struct CPU_State initial_cpu = {.pc=0x7adb, .a=0x6a, .x=0xed, .y=0xe8, .sp=0x95, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x7adb, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x7adc, .a=0x6a, .x=0xed, .y=0xe8, .sp=0xed, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x7adb, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x7adb, .value=0xbd, .type=IO_READ},
        {.addr=0x7adc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02FC) {
    const struct CPU_State initial_cpu = {.pc=0x8c70, .a=0xb4, .x=0x38, .y=0x5a, .sp=0x77, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x8c70, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x8c71, .a=0xb4, .x=0x38, .y=0x5a, .sp=0x38, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x8c70, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x8c70, .value=0xbd, .type=IO_READ},
        {.addr=0x8c71, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02FD) {
    const struct CPU_State initial_cpu = {.pc=0x2a8c, .a=0xdf, .x=0x2c, .y=0x23, .sp=0xf4, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x2a8c, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x2a8d, .a=0xdf, .x=0x2c, .y=0x23, .sp=0x2c, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x2a8c, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x2a8c, .value=0xbd, .type=IO_READ},
        {.addr=0x2a8d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02FE) {
    const struct CPU_State initial_cpu = {.pc=0xd18e, .a=0x88, .x=0xef, .y=0xea, .sp=0x61, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xd18e, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xd18f, .a=0x88, .x=0xef, .y=0xea, .sp=0xef, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xd18e, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xd18e, .value=0xbd, .type=IO_READ},
        {.addr=0xd18f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_02FF) {
    const struct CPU_State initial_cpu = {.pc=0xd116, .a=0xce, .x=0x39, .y=0x9e, .sp=0x1c, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xd116, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xd117, .a=0xce, .x=0x39, .y=0x9e, .sp=0x39, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0xd116, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xd116, .value=0xbd, .type=IO_READ},
        {.addr=0xd117, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0300) {
    const struct CPU_State initial_cpu = {.pc=0x4358, .a=0x1f, .x=0x8b, .y=0xe5, .sp=0x92, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x4358, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x4359, .a=0x1f, .x=0x8b, .y=0xe5, .sp=0x8b, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x4358, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x4358, .value=0xbd, .type=IO_READ},
        {.addr=0x4359, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0301) {
    const struct CPU_State initial_cpu = {.pc=0xebdd, .a=0xb3, .x=0x57, .y=0x25, .sp=0x4d, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0xebdd, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xebde, .a=0xb3, .x=0x57, .y=0x25, .sp=0x57, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0xebdd, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xebdd, .value=0xbd, .type=IO_READ},
        {.addr=0xebde, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0302) {
    const struct CPU_State initial_cpu = {.pc=0x10fd, .a=0xe8, .x=0x7d, .y=0xe2, .sp=0x96, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x10fd, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x10fe, .a=0xe8, .x=0x7d, .y=0xe2, .sp=0x7d, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x10fd, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x10fd, .value=0xbd, .type=IO_READ},
        {.addr=0x10fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0303) {
    const struct CPU_State initial_cpu = {.pc=0x0802, .a=0x5c, .x=0xee, .y=0x3f, .sp=0x48, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x0802, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x0803, .a=0x5c, .x=0xee, .y=0x3f, .sp=0xee, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x0802, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x0802, .value=0xbd, .type=IO_READ},
        {.addr=0x0803, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0304) {
    const struct CPU_State initial_cpu = {.pc=0x4d80, .a=0xae, .x=0xfd, .y=0xcd, .sp=0x8a, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x4d80, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x4d81, .a=0xae, .x=0xfd, .y=0xcd, .sp=0xfd, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x4d80, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x4d80, .value=0xbd, .type=IO_READ},
        {.addr=0x4d81, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0305) {
    const struct CPU_State initial_cpu = {.pc=0xe55f, .a=0xf4, .x=0xe6, .y=0x6e, .sp=0x27, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xe55f, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xe560, .a=0xf4, .x=0xe6, .y=0x6e, .sp=0xe6, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xe55f, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xe55f, .value=0xbd, .type=IO_READ},
        {.addr=0xe560, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0306) {
    const struct CPU_State initial_cpu = {.pc=0x0ed8, .a=0xe6, .x=0xca, .y=0x79, .sp=0x1e, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x0ed8, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x0ed9, .a=0xe6, .x=0xca, .y=0x79, .sp=0xca, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x0ed8, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x0ed8, .value=0xbd, .type=IO_READ},
        {.addr=0x0ed9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0307) {
    const struct CPU_State initial_cpu = {.pc=0xabad, .a=0x2d, .x=0xf9, .y=0xe8, .sp=0xdb, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xabad, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xabae, .a=0x2d, .x=0xf9, .y=0xe8, .sp=0xf9, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xabad, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xabad, .value=0xbd, .type=IO_READ},
        {.addr=0xabae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0308) {
    const struct CPU_State initial_cpu = {.pc=0x0d56, .a=0x63, .x=0x0f, .y=0x90, .sp=0x4a, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x0d56, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x0d57, .a=0x63, .x=0x0f, .y=0x90, .sp=0x0f, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x0d56, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x0d56, .value=0xbd, .type=IO_READ},
        {.addr=0x0d57, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0309) {
    const struct CPU_State initial_cpu = {.pc=0x42f3, .a=0x05, .x=0xe3, .y=0xd5, .sp=0xf4, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x42f3, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x42f4, .a=0x05, .x=0xe3, .y=0xd5, .sp=0xe3, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x42f3, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x42f3, .value=0xbd, .type=IO_READ},
        {.addr=0x42f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_030A) {
    const struct CPU_State initial_cpu = {.pc=0xf5fc, .a=0xc0, .x=0x68, .y=0x0c, .sp=0xc4, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xf5fc, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xf5fd, .a=0xc0, .x=0x68, .y=0x0c, .sp=0x68, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xf5fc, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xf5fc, .value=0xbd, .type=IO_READ},
        {.addr=0xf5fd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_030B) {
    const struct CPU_State initial_cpu = {.pc=0xd3ca, .a=0x17, .x=0x28, .y=0x7c, .sp=0xf6, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xd3ca, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xd3cb, .a=0x17, .x=0x28, .y=0x7c, .sp=0x28, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0xd3ca, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xd3ca, .value=0xbd, .type=IO_READ},
        {.addr=0xd3cb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_030C) {
    const struct CPU_State initial_cpu = {.pc=0x789b, .a=0x60, .x=0xa2, .y=0x7e, .sp=0x34, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x789b, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x789c, .a=0x60, .x=0xa2, .y=0x7e, .sp=0xa2, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x789b, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x789b, .value=0xbd, .type=IO_READ},
        {.addr=0x789c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_030D) {
    const struct CPU_State initial_cpu = {.pc=0xfb0f, .a=0x75, .x=0xfe, .y=0xd3, .sp=0x00, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xfb0f, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xfb10, .a=0x75, .x=0xfe, .y=0xd3, .sp=0xfe, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xfb0f, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xfb0f, .value=0xbd, .type=IO_READ},
        {.addr=0xfb10, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_030E) {
    const struct CPU_State initial_cpu = {.pc=0xe138, .a=0xae, .x=0xbd, .y=0x20, .sp=0x55, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xe138, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xe139, .a=0xae, .x=0xbd, .y=0x20, .sp=0xbd, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0xe138, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xe138, .value=0xbd, .type=IO_READ},
        {.addr=0xe139, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_030F) {
    const struct CPU_State initial_cpu = {.pc=0x2359, .a=0x9b, .x=0xfa, .y=0xcb, .sp=0xb0, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x2359, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x235a, .a=0x9b, .x=0xfa, .y=0xcb, .sp=0xfa, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x2359, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x2359, .value=0xbd, .type=IO_READ},
        {.addr=0x235a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0310) {
    const struct CPU_State initial_cpu = {.pc=0xe6e9, .a=0xc6, .x=0x93, .y=0x3b, .sp=0x5a, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xe6e9, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xe6ea, .a=0xc6, .x=0x93, .y=0x3b, .sp=0x93, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xe6e9, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xe6e9, .value=0xbd, .type=IO_READ},
        {.addr=0xe6ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0311) {
    const struct CPU_State initial_cpu = {.pc=0x2910, .a=0x0d, .x=0xd0, .y=0xb6, .sp=0xcf, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x2910, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x2911, .a=0x0d, .x=0xd0, .y=0xb6, .sp=0xd0, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x2910, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x2910, .value=0xbd, .type=IO_READ},
        {.addr=0x2911, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0312) {
    const struct CPU_State initial_cpu = {.pc=0xb3d7, .a=0xfc, .x=0x5f, .y=0xf5, .sp=0xb7, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xb3d7, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xb3d8, .a=0xfc, .x=0x5f, .y=0xf5, .sp=0x5f, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xb3d7, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xb3d7, .value=0xbd, .type=IO_READ},
        {.addr=0xb3d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0313) {
    const struct CPU_State initial_cpu = {.pc=0x79e5, .a=0x38, .x=0x43, .y=0x13, .sp=0x70, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x79e5, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x79e6, .a=0x38, .x=0x43, .y=0x13, .sp=0x43, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x79e5, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x79e5, .value=0xbd, .type=IO_READ},
        {.addr=0x79e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0314) {
    const struct CPU_State initial_cpu = {.pc=0xfa96, .a=0xbc, .x=0xba, .y=0xa4, .sp=0xa9, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xfa96, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xfa97, .a=0xbc, .x=0xba, .y=0xa4, .sp=0xba, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xfa96, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xfa96, .value=0xbd, .type=IO_READ},
        {.addr=0xfa97, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0315) {
    const struct CPU_State initial_cpu = {.pc=0x2e8c, .a=0x89, .x=0x06, .y=0xf3, .sp=0x49, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x2e8c, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x2e8d, .a=0x89, .x=0x06, .y=0xf3, .sp=0x06, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x2e8c, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x2e8c, .value=0xbd, .type=IO_READ},
        {.addr=0x2e8d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0316) {
    const struct CPU_State initial_cpu = {.pc=0x5341, .a=0x29, .x=0xe7, .y=0xd0, .sp=0xab, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x5341, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x5342, .a=0x29, .x=0xe7, .y=0xd0, .sp=0xe7, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x5341, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x5341, .value=0xbd, .type=IO_READ},
        {.addr=0x5342, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0317) {
    const struct CPU_State initial_cpu = {.pc=0x8ef0, .a=0x24, .x=0x8c, .y=0x32, .sp=0x4e, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x8ef0, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x8ef1, .a=0x24, .x=0x8c, .y=0x32, .sp=0x8c, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x8ef0, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x8ef0, .value=0xbd, .type=IO_READ},
        {.addr=0x8ef1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0318) {
    const struct CPU_State initial_cpu = {.pc=0x7498, .a=0xae, .x=0x45, .y=0xb4, .sp=0x58, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x7498, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x7499, .a=0xae, .x=0x45, .y=0xb4, .sp=0x45, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x7498, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x7498, .value=0xbd, .type=IO_READ},
        {.addr=0x7499, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0319) {
    const struct CPU_State initial_cpu = {.pc=0x86f1, .a=0x2b, .x=0xb4, .y=0xda, .sp=0x31, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x86f1, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x86f2, .a=0x2b, .x=0xb4, .y=0xda, .sp=0xb4, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x86f1, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x86f1, .value=0xbd, .type=IO_READ},
        {.addr=0x86f2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_031A) {
    const struct CPU_State initial_cpu = {.pc=0x3832, .a=0xdc, .x=0x31, .y=0x3c, .sp=0x11, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x3832, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x3833, .a=0xdc, .x=0x31, .y=0x3c, .sp=0x31, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x3832, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x3832, .value=0xbd, .type=IO_READ},
        {.addr=0x3833, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_031B) {
    const struct CPU_State initial_cpu = {.pc=0x525a, .a=0x48, .x=0xf1, .y=0x55, .sp=0x9e, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x525a, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x525b, .a=0x48, .x=0xf1, .y=0x55, .sp=0xf1, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x525a, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x525a, .value=0xbd, .type=IO_READ},
        {.addr=0x525b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_031C) {
    const struct CPU_State initial_cpu = {.pc=0x393b, .a=0x97, .x=0x75, .y=0x6e, .sp=0x17, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x393b, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x393c, .a=0x97, .x=0x75, .y=0x6e, .sp=0x75, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x393b, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x393b, .value=0xbd, .type=IO_READ},
        {.addr=0x393c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_031D) {
    const struct CPU_State initial_cpu = {.pc=0x47e7, .a=0x2a, .x=0x30, .y=0xcd, .sp=0xe5, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x47e7, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x47e8, .a=0x2a, .x=0x30, .y=0xcd, .sp=0x30, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x47e7, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x47e7, .value=0xbd, .type=IO_READ},
        {.addr=0x47e8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_031E) {
    const struct CPU_State initial_cpu = {.pc=0x418f, .a=0x24, .x=0x42, .y=0x79, .sp=0x6e, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x418f, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x4190, .a=0x24, .x=0x42, .y=0x79, .sp=0x42, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x418f, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x418f, .value=0xbd, .type=IO_READ},
        {.addr=0x4190, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_031F) {
    const struct CPU_State initial_cpu = {.pc=0xb997, .a=0x10, .x=0x8c, .y=0xc1, .sp=0x80, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xb997, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xb998, .a=0x10, .x=0x8c, .y=0xc1, .sp=0x8c, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xb997, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xb997, .value=0xbd, .type=IO_READ},
        {.addr=0xb998, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0320) {
    const struct CPU_State initial_cpu = {.pc=0xe94c, .a=0x9e, .x=0x87, .y=0x91, .sp=0x2f, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xe94c, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xe94d, .a=0x9e, .x=0x87, .y=0x91, .sp=0x87, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xe94c, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xe94c, .value=0xbd, .type=IO_READ},
        {.addr=0xe94d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0321) {
    const struct CPU_State initial_cpu = {.pc=0xe804, .a=0xef, .x=0x88, .y=0x31, .sp=0xb6, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xe804, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xe805, .a=0xef, .x=0x88, .y=0x31, .sp=0x88, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xe804, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xe804, .value=0xbd, .type=IO_READ},
        {.addr=0xe805, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0322) {
    const struct CPU_State initial_cpu = {.pc=0x75cb, .a=0xca, .x=0xe9, .y=0x47, .sp=0xb2, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x75cb, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x75cc, .a=0xca, .x=0xe9, .y=0x47, .sp=0xe9, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x75cb, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x75cb, .value=0xbd, .type=IO_READ},
        {.addr=0x75cc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0323) {
    const struct CPU_State initial_cpu = {.pc=0xd2ca, .a=0xb1, .x=0x05, .y=0x39, .sp=0x9a, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xd2ca, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xd2cb, .a=0xb1, .x=0x05, .y=0x39, .sp=0x05, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xd2ca, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xd2ca, .value=0xbd, .type=IO_READ},
        {.addr=0xd2cb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0324) {
    const struct CPU_State initial_cpu = {.pc=0xbc34, .a=0xfb, .x=0xd2, .y=0xc4, .sp=0x6e, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xbc34, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xbc35, .a=0xfb, .x=0xd2, .y=0xc4, .sp=0xd2, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xbc34, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xbc34, .value=0xbd, .type=IO_READ},
        {.addr=0xbc35, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0325) {
    const struct CPU_State initial_cpu = {.pc=0xccc2, .a=0x43, .x=0xd2, .y=0x0c, .sp=0xca, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xccc2, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xccc3, .a=0x43, .x=0xd2, .y=0x0c, .sp=0xd2, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xccc2, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xccc2, .value=0xbd, .type=IO_READ},
        {.addr=0xccc3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0326) {
    const struct CPU_State initial_cpu = {.pc=0x8e45, .a=0x59, .x=0x3f, .y=0x28, .sp=0x39, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x8e45, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x8e46, .a=0x59, .x=0x3f, .y=0x28, .sp=0x3f, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x8e45, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x8e45, .value=0xbd, .type=IO_READ},
        {.addr=0x8e46, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0327) {
    const struct CPU_State initial_cpu = {.pc=0x2ee0, .a=0x92, .x=0x9c, .y=0x66, .sp=0x41, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x2ee0, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x2ee1, .a=0x92, .x=0x9c, .y=0x66, .sp=0x9c, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x2ee0, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x2ee0, .value=0xbd, .type=IO_READ},
        {.addr=0x2ee1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0328) {
    const struct CPU_State initial_cpu = {.pc=0xa65c, .a=0x27, .x=0x6f, .y=0x22, .sp=0xa4, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xa65c, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xa65d, .a=0x27, .x=0x6f, .y=0x22, .sp=0x6f, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0xa65c, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xa65c, .value=0xbd, .type=IO_READ},
        {.addr=0xa65d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0329) {
    const struct CPU_State initial_cpu = {.pc=0x3484, .a=0x1b, .x=0x39, .y=0x06, .sp=0x88, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x3484, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x3485, .a=0x1b, .x=0x39, .y=0x06, .sp=0x39, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x3484, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x3484, .value=0xbd, .type=IO_READ},
        {.addr=0x3485, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_032A) {
    const struct CPU_State initial_cpu = {.pc=0x4dbb, .a=0x01, .x=0x28, .y=0x62, .sp=0x0c, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x4dbb, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x4dbc, .a=0x01, .x=0x28, .y=0x62, .sp=0x28, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x4dbb, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x4dbb, .value=0xbd, .type=IO_READ},
        {.addr=0x4dbc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_032B) {
    const struct CPU_State initial_cpu = {.pc=0x8f79, .a=0xed, .x=0x26, .y=0xc7, .sp=0x6a, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x8f79, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x8f7a, .a=0xed, .x=0x26, .y=0xc7, .sp=0x26, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x8f79, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x8f79, .value=0xbd, .type=IO_READ},
        {.addr=0x8f7a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_032C) {
    const struct CPU_State initial_cpu = {.pc=0xf9e8, .a=0x48, .x=0x0c, .y=0x5b, .sp=0xc0, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xf9e8, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xf9e9, .a=0x48, .x=0x0c, .y=0x5b, .sp=0x0c, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xf9e8, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xf9e8, .value=0xbd, .type=IO_READ},
        {.addr=0xf9e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_032D) {
    const struct CPU_State initial_cpu = {.pc=0xc376, .a=0x10, .x=0x43, .y=0x93, .sp=0x56, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xc376, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xc377, .a=0x10, .x=0x43, .y=0x93, .sp=0x43, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0xc376, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xc376, .value=0xbd, .type=IO_READ},
        {.addr=0xc377, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_032E) {
    const struct CPU_State initial_cpu = {.pc=0x90e7, .a=0x29, .x=0xc5, .y=0xc8, .sp=0x69, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x90e7, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x90e8, .a=0x29, .x=0xc5, .y=0xc8, .sp=0xc5, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x90e7, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x90e7, .value=0xbd, .type=IO_READ},
        {.addr=0x90e8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_032F) {
    const struct CPU_State initial_cpu = {.pc=0xff97, .a=0x1d, .x=0x8b, .y=0x6d, .sp=0x25, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0xff97, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xff98, .a=0x1d, .x=0x8b, .y=0x6d, .sp=0x8b, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xff97, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xff97, .value=0xbd, .type=IO_READ},
        {.addr=0xff98, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0330) {
    const struct CPU_State initial_cpu = {.pc=0x6a90, .a=0x5d, .x=0xec, .y=0x65, .sp=0xb3, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x6a90, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x6a91, .a=0x5d, .x=0xec, .y=0x65, .sp=0xec, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x6a90, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x6a90, .value=0xbd, .type=IO_READ},
        {.addr=0x6a91, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0331) {
    const struct CPU_State initial_cpu = {.pc=0xc165, .a=0x26, .x=0x74, .y=0xeb, .sp=0x06, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xc165, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xc166, .a=0x26, .x=0x74, .y=0xeb, .sp=0x74, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xc165, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xc165, .value=0xbd, .type=IO_READ},
        {.addr=0xc166, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0332) {
    const struct CPU_State initial_cpu = {.pc=0x3314, .a=0x88, .x=0x08, .y=0xa9, .sp=0x59, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x3314, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x3315, .a=0x88, .x=0x08, .y=0xa9, .sp=0x08, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x3314, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x3314, .value=0xbd, .type=IO_READ},
        {.addr=0x3315, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0333) {
    const struct CPU_State initial_cpu = {.pc=0x4be8, .a=0x3c, .x=0xca, .y=0x40, .sp=0x58, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x4be8, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x4be9, .a=0x3c, .x=0xca, .y=0x40, .sp=0xca, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x4be8, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x4be8, .value=0xbd, .type=IO_READ},
        {.addr=0x4be9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0334) {
    const struct CPU_State initial_cpu = {.pc=0xde44, .a=0xe2, .x=0x29, .y=0xa4, .sp=0x8c, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xde44, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xde45, .a=0xe2, .x=0x29, .y=0xa4, .sp=0x29, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xde44, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xde44, .value=0xbd, .type=IO_READ},
        {.addr=0xde45, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0335) {
    const struct CPU_State initial_cpu = {.pc=0x0f86, .a=0xba, .x=0x46, .y=0x3d, .sp=0xe6, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x0f86, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x0f87, .a=0xba, .x=0x46, .y=0x3d, .sp=0x46, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x0f86, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x0f86, .value=0xbd, .type=IO_READ},
        {.addr=0x0f87, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0336) {
    const struct CPU_State initial_cpu = {.pc=0x49cc, .a=0x41, .x=0xb7, .y=0x47, .sp=0x99, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x49cc, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x49cd, .a=0x41, .x=0xb7, .y=0x47, .sp=0xb7, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x49cc, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x49cc, .value=0xbd, .type=IO_READ},
        {.addr=0x49cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0337) {
    const struct CPU_State initial_cpu = {.pc=0xd97b, .a=0x2c, .x=0x4a, .y=0xa4, .sp=0x10, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xd97b, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xd97c, .a=0x2c, .x=0x4a, .y=0xa4, .sp=0x4a, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xd97b, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xd97b, .value=0xbd, .type=IO_READ},
        {.addr=0xd97c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0338) {
    const struct CPU_State initial_cpu = {.pc=0x8847, .a=0xce, .x=0xad, .y=0x14, .sp=0xbc, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x8847, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x8848, .a=0xce, .x=0xad, .y=0x14, .sp=0xad, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x8847, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x8847, .value=0xbd, .type=IO_READ},
        {.addr=0x8848, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0339) {
    const struct CPU_State initial_cpu = {.pc=0x2a34, .a=0x1b, .x=0x3a, .y=0xbe, .sp=0xaf, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x2a34, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x2a35, .a=0x1b, .x=0x3a, .y=0xbe, .sp=0x3a, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x2a34, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x2a34, .value=0xbd, .type=IO_READ},
        {.addr=0x2a35, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_033A) {
    const struct CPU_State initial_cpu = {.pc=0xb2a7, .a=0xa8, .x=0xde, .y=0x52, .sp=0xb7, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xb2a7, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xb2a8, .a=0xa8, .x=0xde, .y=0x52, .sp=0xde, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0xb2a7, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xb2a7, .value=0xbd, .type=IO_READ},
        {.addr=0xb2a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_033B) {
    const struct CPU_State initial_cpu = {.pc=0xdf55, .a=0xb5, .x=0x96, .y=0x64, .sp=0xe3, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xdf55, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xdf56, .a=0xb5, .x=0x96, .y=0x64, .sp=0x96, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0xdf55, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xdf55, .value=0xbd, .type=IO_READ},
        {.addr=0xdf56, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_033C) {
    const struct CPU_State initial_cpu = {.pc=0xc6ac, .a=0x24, .x=0x3c, .y=0xcf, .sp=0xd9, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xc6ac, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xc6ad, .a=0x24, .x=0x3c, .y=0xcf, .sp=0x3c, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xc6ac, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xc6ac, .value=0xbd, .type=IO_READ},
        {.addr=0xc6ad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_033D) {
    const struct CPU_State initial_cpu = {.pc=0x162f, .a=0x1b, .x=0xbd, .y=0xd6, .sp=0xaa, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x162f, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x1630, .a=0x1b, .x=0xbd, .y=0xd6, .sp=0xbd, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x162f, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x162f, .value=0xbd, .type=IO_READ},
        {.addr=0x1630, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_033E) {
    const struct CPU_State initial_cpu = {.pc=0x8d29, .a=0x53, .x=0x57, .y=0x39, .sp=0x21, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x8d29, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x8d2a, .a=0x53, .x=0x57, .y=0x39, .sp=0x57, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x8d29, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x8d29, .value=0xbd, .type=IO_READ},
        {.addr=0x8d2a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_033F) {
    const struct CPU_State initial_cpu = {.pc=0x0de6, .a=0x38, .x=0x9b, .y=0x8d, .sp=0x5b, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x0de6, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x0de7, .a=0x38, .x=0x9b, .y=0x8d, .sp=0x9b, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x0de6, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x0de6, .value=0xbd, .type=IO_READ},
        {.addr=0x0de7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0340) {
    const struct CPU_State initial_cpu = {.pc=0xc098, .a=0x7a, .x=0x1c, .y=0xbd, .sp=0xe8, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xc098, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xc099, .a=0x7a, .x=0x1c, .y=0xbd, .sp=0x1c, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0xc098, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xc098, .value=0xbd, .type=IO_READ},
        {.addr=0xc099, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0341) {
    const struct CPU_State initial_cpu = {.pc=0x3b51, .a=0xab, .x=0x02, .y=0x98, .sp=0x0d, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x3b51, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x3b52, .a=0xab, .x=0x02, .y=0x98, .sp=0x02, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x3b51, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x3b51, .value=0xbd, .type=IO_READ},
        {.addr=0x3b52, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0342) {
    const struct CPU_State initial_cpu = {.pc=0xa742, .a=0xa6, .x=0x8b, .y=0xe6, .sp=0xc2, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xa742, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xa743, .a=0xa6, .x=0x8b, .y=0xe6, .sp=0x8b, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0xa742, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xa742, .value=0xbd, .type=IO_READ},
        {.addr=0xa743, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0343) {
    const struct CPU_State initial_cpu = {.pc=0x7d70, .a=0x92, .x=0xd5, .y=0x24, .sp=0x07, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x7d70, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x7d71, .a=0x92, .x=0xd5, .y=0x24, .sp=0xd5, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x7d70, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x7d70, .value=0xbd, .type=IO_READ},
        {.addr=0x7d71, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0344) {
    const struct CPU_State initial_cpu = {.pc=0xd3d7, .a=0x0f, .x=0x42, .y=0x5c, .sp=0x27, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xd3d7, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xd3d8, .a=0x0f, .x=0x42, .y=0x5c, .sp=0x42, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xd3d7, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xd3d7, .value=0xbd, .type=IO_READ},
        {.addr=0xd3d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0345) {
    const struct CPU_State initial_cpu = {.pc=0xace3, .a=0xcc, .x=0xc8, .y=0x5e, .sp=0xcb, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xace3, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xace4, .a=0xcc, .x=0xc8, .y=0x5e, .sp=0xc8, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0xace3, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xace3, .value=0xbd, .type=IO_READ},
        {.addr=0xace4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0346) {
    const struct CPU_State initial_cpu = {.pc=0xc5a1, .a=0x5e, .x=0x32, .y=0x58, .sp=0xf2, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xc5a1, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xc5a2, .a=0x5e, .x=0x32, .y=0x58, .sp=0x32, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0xc5a1, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xc5a1, .value=0xbd, .type=IO_READ},
        {.addr=0xc5a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0347) {
    const struct CPU_State initial_cpu = {.pc=0x26c3, .a=0x1c, .x=0x10, .y=0xd3, .sp=0xe8, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x26c3, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x26c4, .a=0x1c, .x=0x10, .y=0xd3, .sp=0x10, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x26c3, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x26c3, .value=0xbd, .type=IO_READ},
        {.addr=0x26c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0348) {
    const struct CPU_State initial_cpu = {.pc=0x6041, .a=0x71, .x=0xef, .y=0x8c, .sp=0xca, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x6041, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x6042, .a=0x71, .x=0xef, .y=0x8c, .sp=0xef, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x6041, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x6041, .value=0xbd, .type=IO_READ},
        {.addr=0x6042, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0349) {
    const struct CPU_State initial_cpu = {.pc=0x3bc5, .a=0x2f, .x=0x27, .y=0x6e, .sp=0x8b, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x3bc5, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x3bc6, .a=0x2f, .x=0x27, .y=0x6e, .sp=0x27, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x3bc5, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x3bc5, .value=0xbd, .type=IO_READ},
        {.addr=0x3bc6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_034A) {
    const struct CPU_State initial_cpu = {.pc=0x069e, .a=0x3a, .x=0xbc, .y=0x1b, .sp=0x65, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x069e, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x069f, .a=0x3a, .x=0xbc, .y=0x1b, .sp=0xbc, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x069e, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x069e, .value=0xbd, .type=IO_READ},
        {.addr=0x069f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_034B) {
    const struct CPU_State initial_cpu = {.pc=0x8707, .a=0x2b, .x=0x22, .y=0xd0, .sp=0x21, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x8707, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x8708, .a=0x2b, .x=0x22, .y=0xd0, .sp=0x22, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x8707, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x8707, .value=0xbd, .type=IO_READ},
        {.addr=0x8708, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_034C) {
    const struct CPU_State initial_cpu = {.pc=0xde13, .a=0x20, .x=0xa1, .y=0xc0, .sp=0xd2, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xde13, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xde14, .a=0x20, .x=0xa1, .y=0xc0, .sp=0xa1, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0xde13, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xde13, .value=0xbd, .type=IO_READ},
        {.addr=0xde14, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_034D) {
    const struct CPU_State initial_cpu = {.pc=0xa0e7, .a=0xc8, .x=0x43, .y=0xb6, .sp=0x42, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0xa0e7, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xa0e8, .a=0xc8, .x=0x43, .y=0xb6, .sp=0x43, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0xa0e7, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xa0e7, .value=0xbd, .type=IO_READ},
        {.addr=0xa0e8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_034E) {
    const struct CPU_State initial_cpu = {.pc=0xad9d, .a=0x92, .x=0xcf, .y=0xa8, .sp=0xb4, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xad9d, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xad9e, .a=0x92, .x=0xcf, .y=0xa8, .sp=0xcf, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0xad9d, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xad9d, .value=0xbd, .type=IO_READ},
        {.addr=0xad9e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_034F) {
    const struct CPU_State initial_cpu = {.pc=0x1c26, .a=0xbd, .x=0xe5, .y=0x73, .sp=0xf9, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x1c26, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x1c27, .a=0xbd, .x=0xe5, .y=0x73, .sp=0xe5, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x1c26, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x1c26, .value=0xbd, .type=IO_READ},
        {.addr=0x1c27, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0350) {
    const struct CPU_State initial_cpu = {.pc=0x5e4c, .a=0xac, .x=0x7d, .y=0x48, .sp=0x1b, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x5e4c, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x5e4d, .a=0xac, .x=0x7d, .y=0x48, .sp=0x7d, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x5e4c, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x5e4c, .value=0xbd, .type=IO_READ},
        {.addr=0x5e4d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0351) {
    const struct CPU_State initial_cpu = {.pc=0x10ab, .a=0x4b, .x=0xc3, .y=0x69, .sp=0xf7, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x10ab, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x10ac, .a=0x4b, .x=0xc3, .y=0x69, .sp=0xc3, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x10ab, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x10ab, .value=0xbd, .type=IO_READ},
        {.addr=0x10ac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0352) {
    const struct CPU_State initial_cpu = {.pc=0x54be, .a=0xfe, .x=0xba, .y=0xcb, .sp=0x0b, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x54be, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x54bf, .a=0xfe, .x=0xba, .y=0xcb, .sp=0xba, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x54be, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x54be, .value=0xbd, .type=IO_READ},
        {.addr=0x54bf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0353) {
    const struct CPU_State initial_cpu = {.pc=0x35fd, .a=0xb8, .x=0xc0, .y=0x5c, .sp=0x31, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x35fd, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x35fe, .a=0xb8, .x=0xc0, .y=0x5c, .sp=0xc0, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x35fd, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x35fd, .value=0xbd, .type=IO_READ},
        {.addr=0x35fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0354) {
    const struct CPU_State initial_cpu = {.pc=0x9803, .a=0x41, .x=0x3f, .y=0xfa, .sp=0x0f, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x9803, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x9804, .a=0x41, .x=0x3f, .y=0xfa, .sp=0x3f, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x9803, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x9803, .value=0xbd, .type=IO_READ},
        {.addr=0x9804, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0355) {
    const struct CPU_State initial_cpu = {.pc=0xa710, .a=0x9a, .x=0xf9, .y=0x96, .sp=0x24, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xa710, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xa711, .a=0x9a, .x=0xf9, .y=0x96, .sp=0xf9, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xa710, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xa710, .value=0xbd, .type=IO_READ},
        {.addr=0xa711, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0356) {
    const struct CPU_State initial_cpu = {.pc=0x0ba1, .a=0x1f, .x=0xd8, .y=0x61, .sp=0xc9, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x0ba1, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x0ba2, .a=0x1f, .x=0xd8, .y=0x61, .sp=0xd8, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x0ba1, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x0ba1, .value=0xbd, .type=IO_READ},
        {.addr=0x0ba2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0357) {
    const struct CPU_State initial_cpu = {.pc=0x6ddc, .a=0xb4, .x=0xfc, .y=0xa8, .sp=0xae, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x6ddc, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x6ddd, .a=0xb4, .x=0xfc, .y=0xa8, .sp=0xfc, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x6ddc, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x6ddc, .value=0xbd, .type=IO_READ},
        {.addr=0x6ddd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0358) {
    const struct CPU_State initial_cpu = {.pc=0xb9a4, .a=0x5d, .x=0x25, .y=0x19, .sp=0x9b, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xb9a4, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xb9a5, .a=0x5d, .x=0x25, .y=0x19, .sp=0x25, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0xb9a4, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xb9a4, .value=0xbd, .type=IO_READ},
        {.addr=0xb9a5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0359) {
    const struct CPU_State initial_cpu = {.pc=0x6bfc, .a=0xa4, .x=0xc8, .y=0x9b, .sp=0x7e, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x6bfc, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x6bfd, .a=0xa4, .x=0xc8, .y=0x9b, .sp=0xc8, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x6bfc, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x6bfc, .value=0xbd, .type=IO_READ},
        {.addr=0x6bfd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_035A) {
    const struct CPU_State initial_cpu = {.pc=0xdfe4, .a=0x17, .x=0xe0, .y=0x62, .sp=0x4b, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xdfe4, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xdfe5, .a=0x17, .x=0xe0, .y=0x62, .sp=0xe0, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0xdfe4, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xdfe4, .value=0xbd, .type=IO_READ},
        {.addr=0xdfe5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_035B) {
    const struct CPU_State initial_cpu = {.pc=0xa621, .a=0x21, .x=0xf4, .y=0xc9, .sp=0x57, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xa621, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xa622, .a=0x21, .x=0xf4, .y=0xc9, .sp=0xf4, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0xa621, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xa621, .value=0xbd, .type=IO_READ},
        {.addr=0xa622, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_035C) {
    const struct CPU_State initial_cpu = {.pc=0x45d4, .a=0xce, .x=0xb3, .y=0xa8, .sp=0x8e, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x45d4, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x45d5, .a=0xce, .x=0xb3, .y=0xa8, .sp=0xb3, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x45d4, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x45d4, .value=0xbd, .type=IO_READ},
        {.addr=0x45d5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_035D) {
    const struct CPU_State initial_cpu = {.pc=0xe0a5, .a=0xb2, .x=0xee, .y=0xf3, .sp=0x1f, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xe0a5, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xe0a6, .a=0xb2, .x=0xee, .y=0xf3, .sp=0xee, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xe0a5, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xe0a5, .value=0xbd, .type=IO_READ},
        {.addr=0xe0a6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_035E) {
    const struct CPU_State initial_cpu = {.pc=0xfbf9, .a=0x01, .x=0x91, .y=0x54, .sp=0x25, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xfbf9, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xfbfa, .a=0x01, .x=0x91, .y=0x54, .sp=0x91, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0xfbf9, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xfbf9, .value=0xbd, .type=IO_READ},
        {.addr=0xfbfa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_035F) {
    const struct CPU_State initial_cpu = {.pc=0xa985, .a=0x8f, .x=0xd7, .y=0x33, .sp=0xa5, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xa985, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xa986, .a=0x8f, .x=0xd7, .y=0x33, .sp=0xd7, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xa985, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xa985, .value=0xbd, .type=IO_READ},
        {.addr=0xa986, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0360) {
    const struct CPU_State initial_cpu = {.pc=0xac60, .a=0x9c, .x=0xf4, .y=0xc5, .sp=0x45, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xac60, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xac61, .a=0x9c, .x=0xf4, .y=0xc5, .sp=0xf4, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0xac60, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xac60, .value=0xbd, .type=IO_READ},
        {.addr=0xac61, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0361) {
    const struct CPU_State initial_cpu = {.pc=0x2a27, .a=0x20, .x=0xab, .y=0x1e, .sp=0xf0, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x2a27, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x2a28, .a=0x20, .x=0xab, .y=0x1e, .sp=0xab, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x2a27, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x2a27, .value=0xbd, .type=IO_READ},
        {.addr=0x2a28, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0362) {
    const struct CPU_State initial_cpu = {.pc=0xf8e5, .a=0xf1, .x=0xd3, .y=0xfe, .sp=0x4c, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xf8e5, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xf8e6, .a=0xf1, .x=0xd3, .y=0xfe, .sp=0xd3, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xf8e5, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xf8e5, .value=0xbd, .type=IO_READ},
        {.addr=0xf8e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0363) {
    const struct CPU_State initial_cpu = {.pc=0x2deb, .a=0xf3, .x=0x3b, .y=0xca, .sp=0xb1, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x2deb, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x2dec, .a=0xf3, .x=0x3b, .y=0xca, .sp=0x3b, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x2deb, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x2deb, .value=0xbd, .type=IO_READ},
        {.addr=0x2dec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0364) {
    const struct CPU_State initial_cpu = {.pc=0x08d8, .a=0x8d, .x=0x9a, .y=0xe4, .sp=0xd8, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x08d8, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x08d9, .a=0x8d, .x=0x9a, .y=0xe4, .sp=0x9a, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x08d8, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x08d8, .value=0xbd, .type=IO_READ},
        {.addr=0x08d9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0365) {
    const struct CPU_State initial_cpu = {.pc=0x3143, .a=0xb1, .x=0xeb, .y=0x4d, .sp=0xbf, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x3143, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x3144, .a=0xb1, .x=0xeb, .y=0x4d, .sp=0xeb, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x3143, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x3143, .value=0xbd, .type=IO_READ},
        {.addr=0x3144, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0366) {
    const struct CPU_State initial_cpu = {.pc=0xdef6, .a=0x41, .x=0x68, .y=0x31, .sp=0x5e, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xdef6, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xdef7, .a=0x41, .x=0x68, .y=0x31, .sp=0x68, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0xdef6, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xdef6, .value=0xbd, .type=IO_READ},
        {.addr=0xdef7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0367) {
    const struct CPU_State initial_cpu = {.pc=0x1476, .a=0x5f, .x=0x5a, .y=0xae, .sp=0x66, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x1476, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x1477, .a=0x5f, .x=0x5a, .y=0xae, .sp=0x5a, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x1476, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x1476, .value=0xbd, .type=IO_READ},
        {.addr=0x1477, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0368) {
    const struct CPU_State initial_cpu = {.pc=0x5603, .a=0x68, .x=0x5c, .y=0x5d, .sp=0xbb, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x5603, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x5604, .a=0x68, .x=0x5c, .y=0x5d, .sp=0x5c, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x5603, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x5603, .value=0xbd, .type=IO_READ},
        {.addr=0x5604, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0369) {
    const struct CPU_State initial_cpu = {.pc=0x3c3a, .a=0xdc, .x=0x11, .y=0xb8, .sp=0x96, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x3c3a, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x3c3b, .a=0xdc, .x=0x11, .y=0xb8, .sp=0x11, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x3c3a, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x3c3a, .value=0xbd, .type=IO_READ},
        {.addr=0x3c3b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_036A) {
    const struct CPU_State initial_cpu = {.pc=0x8101, .a=0xba, .x=0xb3, .y=0x3d, .sp=0x17, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x8101, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x8102, .a=0xba, .x=0xb3, .y=0x3d, .sp=0xb3, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x8101, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x8101, .value=0xbd, .type=IO_READ},
        {.addr=0x8102, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_036B) {
    const struct CPU_State initial_cpu = {.pc=0x16af, .a=0xf5, .x=0x85, .y=0x60, .sp=0xa3, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x16af, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x16b0, .a=0xf5, .x=0x85, .y=0x60, .sp=0x85, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x16af, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x16af, .value=0xbd, .type=IO_READ},
        {.addr=0x16b0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_036C) {
    const struct CPU_State initial_cpu = {.pc=0xe6a2, .a=0xa4, .x=0x74, .y=0xab, .sp=0xc7, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xe6a2, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xe6a3, .a=0xa4, .x=0x74, .y=0xab, .sp=0x74, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0xe6a2, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xe6a2, .value=0xbd, .type=IO_READ},
        {.addr=0xe6a3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_036D) {
    const struct CPU_State initial_cpu = {.pc=0x5a69, .a=0x7d, .x=0x2d, .y=0xf9, .sp=0xee, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x5a69, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x5a6a, .a=0x7d, .x=0x2d, .y=0xf9, .sp=0x2d, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x5a69, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x5a69, .value=0xbd, .type=IO_READ},
        {.addr=0x5a6a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_036E) {
    const struct CPU_State initial_cpu = {.pc=0x1994, .a=0x52, .x=0x95, .y=0x5e, .sp=0xe4, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x1994, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x1995, .a=0x52, .x=0x95, .y=0x5e, .sp=0x95, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x1994, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x1994, .value=0xbd, .type=IO_READ},
        {.addr=0x1995, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_036F) {
    const struct CPU_State initial_cpu = {.pc=0x9004, .a=0x17, .x=0x4a, .y=0x44, .sp=0x2d, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x9004, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x9005, .a=0x17, .x=0x4a, .y=0x44, .sp=0x4a, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x9004, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x9004, .value=0xbd, .type=IO_READ},
        {.addr=0x9005, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0370) {
    const struct CPU_State initial_cpu = {.pc=0x1163, .a=0x3e, .x=0xf7, .y=0xe0, .sp=0xe8, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x1163, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x1164, .a=0x3e, .x=0xf7, .y=0xe0, .sp=0xf7, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x1163, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x1163, .value=0xbd, .type=IO_READ},
        {.addr=0x1164, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0371) {
    const struct CPU_State initial_cpu = {.pc=0x37e6, .a=0xf3, .x=0xf1, .y=0x1c, .sp=0x24, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x37e6, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x37e7, .a=0xf3, .x=0xf1, .y=0x1c, .sp=0xf1, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x37e6, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x37e6, .value=0xbd, .type=IO_READ},
        {.addr=0x37e7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0372) {
    const struct CPU_State initial_cpu = {.pc=0x56e1, .a=0xb2, .x=0x2c, .y=0x20, .sp=0x1d, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x56e1, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x56e2, .a=0xb2, .x=0x2c, .y=0x20, .sp=0x2c, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x56e1, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x56e1, .value=0xbd, .type=IO_READ},
        {.addr=0x56e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0373) {
    const struct CPU_State initial_cpu = {.pc=0xe004, .a=0x1b, .x=0xce, .y=0x9b, .sp=0xd1, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xe004, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xe005, .a=0x1b, .x=0xce, .y=0x9b, .sp=0xce, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xe004, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xe004, .value=0xbd, .type=IO_READ},
        {.addr=0xe005, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0374) {
    const struct CPU_State initial_cpu = {.pc=0x4ae1, .a=0x02, .x=0x3b, .y=0x63, .sp=0xd3, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x4ae1, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x4ae2, .a=0x02, .x=0x3b, .y=0x63, .sp=0x3b, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x4ae1, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x4ae1, .value=0xbd, .type=IO_READ},
        {.addr=0x4ae2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0375) {
    const struct CPU_State initial_cpu = {.pc=0x11ca, .a=0xf3, .x=0x83, .y=0x41, .sp=0x00, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x11ca, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x11cb, .a=0xf3, .x=0x83, .y=0x41, .sp=0x83, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x11ca, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x11ca, .value=0xbd, .type=IO_READ},
        {.addr=0x11cb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0376) {
    const struct CPU_State initial_cpu = {.pc=0xe47b, .a=0x85, .x=0x5f, .y=0x2f, .sp=0xbb, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xe47b, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xe47c, .a=0x85, .x=0x5f, .y=0x2f, .sp=0x5f, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0xe47b, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xe47b, .value=0xbd, .type=IO_READ},
        {.addr=0xe47c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0377) {
    const struct CPU_State initial_cpu = {.pc=0xd1cb, .a=0x68, .x=0x8f, .y=0x96, .sp=0xc7, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xd1cb, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xd1cc, .a=0x68, .x=0x8f, .y=0x96, .sp=0x8f, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xd1cb, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xd1cb, .value=0xbd, .type=IO_READ},
        {.addr=0xd1cc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0378) {
    const struct CPU_State initial_cpu = {.pc=0xa12c, .a=0xcb, .x=0xa8, .y=0x68, .sp=0xb8, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xa12c, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xa12d, .a=0xcb, .x=0xa8, .y=0x68, .sp=0xa8, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xa12c, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xa12c, .value=0xbd, .type=IO_READ},
        {.addr=0xa12d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0379) {
    const struct CPU_State initial_cpu = {.pc=0xbe48, .a=0xa3, .x=0x31, .y=0xdb, .sp=0x8d, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xbe48, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xbe49, .a=0xa3, .x=0x31, .y=0xdb, .sp=0x31, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xbe48, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xbe48, .value=0xbd, .type=IO_READ},
        {.addr=0xbe49, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_037A) {
    const struct CPU_State initial_cpu = {.pc=0x8842, .a=0x94, .x=0xea, .y=0xfd, .sp=0xe0, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x8842, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x8843, .a=0x94, .x=0xea, .y=0xfd, .sp=0xea, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x8842, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x8842, .value=0xbd, .type=IO_READ},
        {.addr=0x8843, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_037B) {
    const struct CPU_State initial_cpu = {.pc=0xe56c, .a=0x6d, .x=0x8e, .y=0xcd, .sp=0x10, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xe56c, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xe56d, .a=0x6d, .x=0x8e, .y=0xcd, .sp=0x8e, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xe56c, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xe56c, .value=0xbd, .type=IO_READ},
        {.addr=0xe56d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_037C) {
    const struct CPU_State initial_cpu = {.pc=0xd978, .a=0x43, .x=0x7a, .y=0xbd, .sp=0x14, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xd978, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xd979, .a=0x43, .x=0x7a, .y=0xbd, .sp=0x7a, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0xd978, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xd978, .value=0xbd, .type=IO_READ},
        {.addr=0xd979, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_037D) {
    const struct CPU_State initial_cpu = {.pc=0xd343, .a=0x40, .x=0x04, .y=0x79, .sp=0x7f, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xd343, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xd344, .a=0x40, .x=0x04, .y=0x79, .sp=0x04, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xd343, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xd343, .value=0xbd, .type=IO_READ},
        {.addr=0xd344, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_037E) {
    const struct CPU_State initial_cpu = {.pc=0x63a0, .a=0xc2, .x=0x7a, .y=0x7d, .sp=0x5e, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x63a0, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x63a1, .a=0xc2, .x=0x7a, .y=0x7d, .sp=0x7a, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x63a0, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x63a0, .value=0xbd, .type=IO_READ},
        {.addr=0x63a1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_037F) {
    const struct CPU_State initial_cpu = {.pc=0x5b09, .a=0x58, .x=0x1b, .y=0x7c, .sp=0xd3, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x5b09, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x5b0a, .a=0x58, .x=0x1b, .y=0x7c, .sp=0x1b, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x5b09, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x5b09, .value=0xbd, .type=IO_READ},
        {.addr=0x5b0a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0380) {
    const struct CPU_State initial_cpu = {.pc=0xe3e5, .a=0x3b, .x=0x53, .y=0xfb, .sp=0x2c, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xe3e5, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xe3e6, .a=0x3b, .x=0x53, .y=0xfb, .sp=0x53, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0xe3e5, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xe3e5, .value=0xbd, .type=IO_READ},
        {.addr=0xe3e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0381) {
    const struct CPU_State initial_cpu = {.pc=0xc70d, .a=0xd0, .x=0x88, .y=0xf7, .sp=0xb1, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xc70d, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xc70e, .a=0xd0, .x=0x88, .y=0xf7, .sp=0x88, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0xc70d, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xc70d, .value=0xbd, .type=IO_READ},
        {.addr=0xc70e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0382) {
    const struct CPU_State initial_cpu = {.pc=0xd4df, .a=0xef, .x=0x1f, .y=0xd2, .sp=0x98, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xd4df, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xd4e0, .a=0xef, .x=0x1f, .y=0xd2, .sp=0x1f, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0xd4df, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xd4df, .value=0xbd, .type=IO_READ},
        {.addr=0xd4e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0383) {
    const struct CPU_State initial_cpu = {.pc=0x234e, .a=0xbe, .x=0xfe, .y=0xe0, .sp=0x87, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x234e, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x234f, .a=0xbe, .x=0xfe, .y=0xe0, .sp=0xfe, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x234e, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x234e, .value=0xbd, .type=IO_READ},
        {.addr=0x234f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0384) {
    const struct CPU_State initial_cpu = {.pc=0xb981, .a=0x73, .x=0xb7, .y=0x6f, .sp=0xaf, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xb981, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xb982, .a=0x73, .x=0xb7, .y=0x6f, .sp=0xb7, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xb981, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xb981, .value=0xbd, .type=IO_READ},
        {.addr=0xb982, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0385) {
    const struct CPU_State initial_cpu = {.pc=0x2f1a, .a=0xe7, .x=0x61, .y=0xcf, .sp=0x71, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x2f1a, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x2f1b, .a=0xe7, .x=0x61, .y=0xcf, .sp=0x61, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x2f1a, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x2f1a, .value=0xbd, .type=IO_READ},
        {.addr=0x2f1b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0386) {
    const struct CPU_State initial_cpu = {.pc=0xf5db, .a=0x2d, .x=0x2e, .y=0x17, .sp=0xff, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xf5db, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xf5dc, .a=0x2d, .x=0x2e, .y=0x17, .sp=0x2e, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xf5db, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xf5db, .value=0xbd, .type=IO_READ},
        {.addr=0xf5dc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0387) {
    const struct CPU_State initial_cpu = {.pc=0xc076, .a=0x59, .x=0xed, .y=0x0f, .sp=0xaa, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xc076, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xc077, .a=0x59, .x=0xed, .y=0x0f, .sp=0xed, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0xc076, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xc076, .value=0xbd, .type=IO_READ},
        {.addr=0xc077, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0388) {
    const struct CPU_State initial_cpu = {.pc=0x360f, .a=0x8a, .x=0xe3, .y=0x46, .sp=0xa3, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x360f, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x3610, .a=0x8a, .x=0xe3, .y=0x46, .sp=0xe3, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x360f, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x360f, .value=0xbd, .type=IO_READ},
        {.addr=0x3610, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0389) {
    const struct CPU_State initial_cpu = {.pc=0x11cf, .a=0x62, .x=0xdd, .y=0xae, .sp=0xa2, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x11cf, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x11d0, .a=0x62, .x=0xdd, .y=0xae, .sp=0xdd, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x11cf, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x11cf, .value=0xbd, .type=IO_READ},
        {.addr=0x11d0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_038A) {
    const struct CPU_State initial_cpu = {.pc=0x56da, .a=0x2f, .x=0xd3, .y=0x23, .sp=0x39, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x56da, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x56db, .a=0x2f, .x=0xd3, .y=0x23, .sp=0xd3, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x56da, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x56da, .value=0xbd, .type=IO_READ},
        {.addr=0x56db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_038B) {
    const struct CPU_State initial_cpu = {.pc=0xccc6, .a=0xaa, .x=0x88, .y=0xe9, .sp=0xcd, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xccc6, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xccc7, .a=0xaa, .x=0x88, .y=0xe9, .sp=0x88, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0xccc6, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xccc6, .value=0xbd, .type=IO_READ},
        {.addr=0xccc7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_038C) {
    const struct CPU_State initial_cpu = {.pc=0xe525, .a=0x73, .x=0x6e, .y=0x2f, .sp=0x55, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xe525, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xe526, .a=0x73, .x=0x6e, .y=0x2f, .sp=0x6e, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xe525, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xe525, .value=0xbd, .type=IO_READ},
        {.addr=0xe526, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_038D) {
    const struct CPU_State initial_cpu = {.pc=0xab70, .a=0xbe, .x=0x58, .y=0x0b, .sp=0x81, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xab70, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xab71, .a=0xbe, .x=0x58, .y=0x0b, .sp=0x58, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xab70, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xab70, .value=0xbd, .type=IO_READ},
        {.addr=0xab71, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_038E) {
    const struct CPU_State initial_cpu = {.pc=0xe211, .a=0xdd, .x=0x4e, .y=0xfe, .sp=0xb3, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xe211, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xe212, .a=0xdd, .x=0x4e, .y=0xfe, .sp=0x4e, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xe211, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xe211, .value=0xbd, .type=IO_READ},
        {.addr=0xe212, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_038F) {
    const struct CPU_State initial_cpu = {.pc=0xfb95, .a=0xab, .x=0x1c, .y=0xde, .sp=0xfb, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xfb95, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xfb96, .a=0xab, .x=0x1c, .y=0xde, .sp=0x1c, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0xfb95, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xfb95, .value=0xbd, .type=IO_READ},
        {.addr=0xfb96, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0390) {
    const struct CPU_State initial_cpu = {.pc=0xc69d, .a=0x63, .x=0x54, .y=0x4d, .sp=0x69, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xc69d, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xc69e, .a=0x63, .x=0x54, .y=0x4d, .sp=0x54, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0xc69d, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xc69d, .value=0xbd, .type=IO_READ},
        {.addr=0xc69e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0391) {
    const struct CPU_State initial_cpu = {.pc=0x1717, .a=0xd0, .x=0x59, .y=0xcd, .sp=0x5a, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x1717, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x1718, .a=0xd0, .x=0x59, .y=0xcd, .sp=0x59, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x1717, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x1717, .value=0xbd, .type=IO_READ},
        {.addr=0x1718, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0392) {
    const struct CPU_State initial_cpu = {.pc=0x360d, .a=0x21, .x=0xc6, .y=0x11, .sp=0x68, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x360d, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x360e, .a=0x21, .x=0xc6, .y=0x11, .sp=0xc6, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x360d, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x360d, .value=0xbd, .type=IO_READ},
        {.addr=0x360e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0393) {
    const struct CPU_State initial_cpu = {.pc=0xaefa, .a=0xe5, .x=0x1a, .y=0xa7, .sp=0x44, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xaefa, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xaefb, .a=0xe5, .x=0x1a, .y=0xa7, .sp=0x1a, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0xaefa, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xaefa, .value=0xbd, .type=IO_READ},
        {.addr=0xaefb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0394) {
    const struct CPU_State initial_cpu = {.pc=0x826b, .a=0x15, .x=0xad, .y=0x18, .sp=0xff, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x826b, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x826c, .a=0x15, .x=0xad, .y=0x18, .sp=0xad, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x826b, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x826b, .value=0xbd, .type=IO_READ},
        {.addr=0x826c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0395) {
    const struct CPU_State initial_cpu = {.pc=0x9e78, .a=0x41, .x=0xa6, .y=0xb8, .sp=0x36, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x9e78, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x9e79, .a=0x41, .x=0xa6, .y=0xb8, .sp=0xa6, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x9e78, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x9e78, .value=0xbd, .type=IO_READ},
        {.addr=0x9e79, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0396) {
    const struct CPU_State initial_cpu = {.pc=0x90b9, .a=0xe1, .x=0x99, .y=0xcf, .sp=0x4f, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x90b9, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x90ba, .a=0xe1, .x=0x99, .y=0xcf, .sp=0x99, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x90b9, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x90b9, .value=0xbd, .type=IO_READ},
        {.addr=0x90ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0397) {
    const struct CPU_State initial_cpu = {.pc=0xab0c, .a=0x7f, .x=0x8a, .y=0x05, .sp=0x77, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xab0c, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xab0d, .a=0x7f, .x=0x8a, .y=0x05, .sp=0x8a, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xab0c, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xab0c, .value=0xbd, .type=IO_READ},
        {.addr=0xab0d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0398) {
    const struct CPU_State initial_cpu = {.pc=0x7515, .a=0x09, .x=0xd8, .y=0x48, .sp=0x32, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x7515, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x7516, .a=0x09, .x=0xd8, .y=0x48, .sp=0xd8, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x7515, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x7515, .value=0xbd, .type=IO_READ},
        {.addr=0x7516, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_0399) {
    const struct CPU_State initial_cpu = {.pc=0xc333, .a=0xeb, .x=0xc8, .y=0x1e, .sp=0x58, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xc333, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xc334, .a=0xeb, .x=0xc8, .y=0x1e, .sp=0xc8, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0xc333, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xc333, .value=0xbd, .type=IO_READ},
        {.addr=0xc334, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_039A) {
    const struct CPU_State initial_cpu = {.pc=0x86b7, .a=0xbf, .x=0x2c, .y=0xf4, .sp=0xf2, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x86b7, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x86b8, .a=0xbf, .x=0x2c, .y=0xf4, .sp=0x2c, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x86b7, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x86b7, .value=0xbd, .type=IO_READ},
        {.addr=0x86b8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_039B) {
    const struct CPU_State initial_cpu = {.pc=0x513f, .a=0x0f, .x=0xe2, .y=0xc6, .sp=0x1f, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x513f, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x5140, .a=0x0f, .x=0xe2, .y=0xc6, .sp=0xe2, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x513f, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x513f, .value=0xbd, .type=IO_READ},
        {.addr=0x5140, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_039C) {
    const struct CPU_State initial_cpu = {.pc=0xb413, .a=0x30, .x=0x46, .y=0xc8, .sp=0x61, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0xb413, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xb414, .a=0x30, .x=0x46, .y=0xc8, .sp=0x46, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0xb413, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xb413, .value=0xbd, .type=IO_READ},
        {.addr=0xb414, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_039D) {
    const struct CPU_State initial_cpu = {.pc=0x2672, .a=0xc7, .x=0xc7, .y=0x7e, .sp=0x03, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x2672, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x2673, .a=0xc7, .x=0xc7, .y=0x7e, .sp=0xc7, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x2672, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x2672, .value=0xbd, .type=IO_READ},
        {.addr=0x2673, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_039E) {
    const struct CPU_State initial_cpu = {.pc=0x18f4, .a=0xce, .x=0xd4, .y=0xb5, .sp=0xb1, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x18f4, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x18f5, .a=0xce, .x=0xd4, .y=0xb5, .sp=0xd4, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x18f4, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x18f4, .value=0xbd, .type=IO_READ},
        {.addr=0x18f5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_039F) {
    const struct CPU_State initial_cpu = {.pc=0x47cf, .a=0x3b, .x=0x16, .y=0x68, .sp=0xb0, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x47cf, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x47d0, .a=0x3b, .x=0x16, .y=0x68, .sp=0x16, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x47cf, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x47cf, .value=0xbd, .type=IO_READ},
        {.addr=0x47d0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03A0) {
    const struct CPU_State initial_cpu = {.pc=0xaa77, .a=0xcc, .x=0xa7, .y=0xf5, .sp=0x96, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xaa77, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xaa78, .a=0xcc, .x=0xa7, .y=0xf5, .sp=0xa7, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0xaa77, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xaa77, .value=0xbd, .type=IO_READ},
        {.addr=0xaa78, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03A1) {
    const struct CPU_State initial_cpu = {.pc=0x5afb, .a=0x4f, .x=0x2a, .y=0x82, .sp=0x4b, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x5afb, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x5afc, .a=0x4f, .x=0x2a, .y=0x82, .sp=0x2a, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x5afb, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x5afb, .value=0xbd, .type=IO_READ},
        {.addr=0x5afc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03A2) {
    const struct CPU_State initial_cpu = {.pc=0x8f04, .a=0x0c, .x=0x53, .y=0x9f, .sp=0x3d, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x8f04, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x8f05, .a=0x0c, .x=0x53, .y=0x9f, .sp=0x53, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x8f04, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x8f04, .value=0xbd, .type=IO_READ},
        {.addr=0x8f05, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03A3) {
    const struct CPU_State initial_cpu = {.pc=0xdb24, .a=0xb3, .x=0x41, .y=0x05, .sp=0x47, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xdb24, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xdb25, .a=0xb3, .x=0x41, .y=0x05, .sp=0x41, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xdb24, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xdb24, .value=0xbd, .type=IO_READ},
        {.addr=0xdb25, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03A4) {
    const struct CPU_State initial_cpu = {.pc=0x191b, .a=0x08, .x=0xab, .y=0xab, .sp=0x99, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x191b, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x191c, .a=0x08, .x=0xab, .y=0xab, .sp=0xab, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x191b, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x191b, .value=0xbd, .type=IO_READ},
        {.addr=0x191c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03A5) {
    const struct CPU_State initial_cpu = {.pc=0xdc18, .a=0x41, .x=0xf9, .y=0x2d, .sp=0x23, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xdc18, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xdc19, .a=0x41, .x=0xf9, .y=0x2d, .sp=0xf9, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xdc18, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xdc18, .value=0xbd, .type=IO_READ},
        {.addr=0xdc19, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x6634, .a=0x31, .x=0x62, .y=0x08, .sp=0x33, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x6634, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x6635, .a=0x31, .x=0x62, .y=0x08, .sp=0x62, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x6634, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x6634, .value=0xbd, .type=IO_READ},
        {.addr=0x6635, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03A7) {
    const struct CPU_State initial_cpu = {.pc=0x3bb3, .a=0x01, .x=0xbb, .y=0x4d, .sp=0x6e, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x3bb3, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x3bb4, .a=0x01, .x=0xbb, .y=0x4d, .sp=0xbb, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x3bb3, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x3bb3, .value=0xbd, .type=IO_READ},
        {.addr=0x3bb4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03A8) {
    const struct CPU_State initial_cpu = {.pc=0x7eb1, .a=0x86, .x=0x52, .y=0x4f, .sp=0xe6, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x7eb1, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x7eb2, .a=0x86, .x=0x52, .y=0x4f, .sp=0x52, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x7eb1, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x7eb1, .value=0xbd, .type=IO_READ},
        {.addr=0x7eb2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03A9) {
    const struct CPU_State initial_cpu = {.pc=0xf115, .a=0x86, .x=0x1f, .y=0x65, .sp=0xc3, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xf115, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xf116, .a=0x86, .x=0x1f, .y=0x65, .sp=0x1f, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0xf115, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xf115, .value=0xbd, .type=IO_READ},
        {.addr=0xf116, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03AA) {
    const struct CPU_State initial_cpu = {.pc=0x09d1, .a=0x4d, .x=0xfd, .y=0x65, .sp=0x72, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x09d1, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x09d2, .a=0x4d, .x=0xfd, .y=0x65, .sp=0xfd, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x09d1, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x09d1, .value=0xbd, .type=IO_READ},
        {.addr=0x09d2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03AB) {
    const struct CPU_State initial_cpu = {.pc=0x74e6, .a=0xb9, .x=0xf5, .y=0x0c, .sp=0x13, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x74e6, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x74e7, .a=0xb9, .x=0xf5, .y=0x0c, .sp=0xf5, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x74e6, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x74e6, .value=0xbd, .type=IO_READ},
        {.addr=0x74e7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03AC) {
    const struct CPU_State initial_cpu = {.pc=0xb1ad, .a=0x86, .x=0x74, .y=0x37, .sp=0x39, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xb1ad, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xb1ae, .a=0x86, .x=0x74, .y=0x37, .sp=0x74, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xb1ad, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xb1ad, .value=0xbd, .type=IO_READ},
        {.addr=0xb1ae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03AD) {
    const struct CPU_State initial_cpu = {.pc=0x674e, .a=0xac, .x=0xae, .y=0xf2, .sp=0x39, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x674e, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x674f, .a=0xac, .x=0xae, .y=0xf2, .sp=0xae, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x674e, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x674e, .value=0xbd, .type=IO_READ},
        {.addr=0x674f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03AE) {
    const struct CPU_State initial_cpu = {.pc=0xdc1a, .a=0x6d, .x=0x46, .y=0x4c, .sp=0xe4, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xdc1a, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xdc1b, .a=0x6d, .x=0x46, .y=0x4c, .sp=0x46, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xdc1a, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xdc1a, .value=0xbd, .type=IO_READ},
        {.addr=0xdc1b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03AF) {
    const struct CPU_State initial_cpu = {.pc=0xa179, .a=0xbb, .x=0x7e, .y=0x72, .sp=0x0c, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xa179, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xa17a, .a=0xbb, .x=0x7e, .y=0x72, .sp=0x7e, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0xa179, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xa179, .value=0xbd, .type=IO_READ},
        {.addr=0xa17a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03B0) {
    const struct CPU_State initial_cpu = {.pc=0xad72, .a=0xb0, .x=0x4a, .y=0xc1, .sp=0x77, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xad72, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xad73, .a=0xb0, .x=0x4a, .y=0xc1, .sp=0x4a, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xad72, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xad72, .value=0xbd, .type=IO_READ},
        {.addr=0xad73, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03B1) {
    const struct CPU_State initial_cpu = {.pc=0x94e2, .a=0xd5, .x=0x9b, .y=0xa3, .sp=0x6c, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x94e2, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x94e3, .a=0xd5, .x=0x9b, .y=0xa3, .sp=0x9b, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x94e2, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x94e2, .value=0xbd, .type=IO_READ},
        {.addr=0x94e3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03B2) {
    const struct CPU_State initial_cpu = {.pc=0xaca5, .a=0x39, .x=0xab, .y=0xa4, .sp=0x95, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xaca5, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xaca6, .a=0x39, .x=0xab, .y=0xa4, .sp=0xab, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0xaca5, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xaca5, .value=0xbd, .type=IO_READ},
        {.addr=0xaca6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03B3) {
    const struct CPU_State initial_cpu = {.pc=0x0050, .a=0x7a, .x=0x7a, .y=0xac, .sp=0xf4, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x0050, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x0051, .a=0x7a, .x=0x7a, .y=0xac, .sp=0x7a, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x0050, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x0050, .value=0xbd, .type=IO_READ},
        {.addr=0x0051, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03B4) {
    const struct CPU_State initial_cpu = {.pc=0x567f, .a=0xb7, .x=0xea, .y=0x8a, .sp=0xf4, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x567f, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x5680, .a=0xb7, .x=0xea, .y=0x8a, .sp=0xea, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x567f, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x567f, .value=0xbd, .type=IO_READ},
        {.addr=0x5680, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03B5) {
    const struct CPU_State initial_cpu = {.pc=0xe142, .a=0x61, .x=0xbc, .y=0x20, .sp=0x91, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xe142, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xe143, .a=0x61, .x=0xbc, .y=0x20, .sp=0xbc, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xe142, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xe142, .value=0xbd, .type=IO_READ},
        {.addr=0xe143, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03B6) {
    const struct CPU_State initial_cpu = {.pc=0xe6f6, .a=0x1f, .x=0x3a, .y=0xa3, .sp=0x7a, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xe6f6, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xe6f7, .a=0x1f, .x=0x3a, .y=0xa3, .sp=0x3a, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0xe6f6, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xe6f6, .value=0xbd, .type=IO_READ},
        {.addr=0xe6f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03B7) {
    const struct CPU_State initial_cpu = {.pc=0xd3c3, .a=0x83, .x=0x25, .y=0x45, .sp=0x61, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xd3c3, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xd3c4, .a=0x83, .x=0x25, .y=0x45, .sp=0x25, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xd3c3, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xd3c3, .value=0xbd, .type=IO_READ},
        {.addr=0xd3c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03B8) {
    const struct CPU_State initial_cpu = {.pc=0x9ada, .a=0xaf, .x=0x0c, .y=0x59, .sp=0xb0, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x9ada, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x9adb, .a=0xaf, .x=0x0c, .y=0x59, .sp=0x0c, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x9ada, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x9ada, .value=0xbd, .type=IO_READ},
        {.addr=0x9adb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03B9) {
    const struct CPU_State initial_cpu = {.pc=0x90b9, .a=0xaf, .x=0xba, .y=0x19, .sp=0xd0, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x90b9, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x90ba, .a=0xaf, .x=0xba, .y=0x19, .sp=0xba, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x90b9, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x90b9, .value=0xbd, .type=IO_READ},
        {.addr=0x90ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03BA) {
    const struct CPU_State initial_cpu = {.pc=0xdc4f, .a=0x3d, .x=0x9e, .y=0x92, .sp=0xe9, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xdc4f, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xdc50, .a=0x3d, .x=0x9e, .y=0x92, .sp=0x9e, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xdc4f, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xdc4f, .value=0xbd, .type=IO_READ},
        {.addr=0xdc50, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03BB) {
    const struct CPU_State initial_cpu = {.pc=0x596b, .a=0x94, .x=0x38, .y=0x80, .sp=0x07, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x596b, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x596c, .a=0x94, .x=0x38, .y=0x80, .sp=0x38, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x596b, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x596b, .value=0xbd, .type=IO_READ},
        {.addr=0x596c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03BC) {
    const struct CPU_State initial_cpu = {.pc=0xdf03, .a=0x1d, .x=0x74, .y=0x98, .sp=0x62, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xdf03, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xdf04, .a=0x1d, .x=0x74, .y=0x98, .sp=0x74, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xdf03, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xdf03, .value=0xbd, .type=IO_READ},
        {.addr=0xdf04, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03BD) {
    const struct CPU_State initial_cpu = {.pc=0x01e7, .a=0x40, .x=0x55, .y=0x96, .sp=0x8a, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x01e7, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x01e8, .a=0x40, .x=0x55, .y=0x96, .sp=0x55, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x01e7, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x01e7, .value=0xbd, .type=IO_READ},
        {.addr=0x01e8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03BE) {
    const struct CPU_State initial_cpu = {.pc=0x17c1, .a=0x55, .x=0x96, .y=0xdf, .sp=0xba, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x17c1, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x17c2, .a=0x55, .x=0x96, .y=0xdf, .sp=0x96, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x17c1, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x17c1, .value=0xbd, .type=IO_READ},
        {.addr=0x17c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03BF) {
    const struct CPU_State initial_cpu = {.pc=0x164f, .a=0x3e, .x=0xe1, .y=0x2c, .sp=0x62, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x164f, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x1650, .a=0x3e, .x=0xe1, .y=0x2c, .sp=0xe1, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x164f, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x164f, .value=0xbd, .type=IO_READ},
        {.addr=0x1650, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03C0) {
    const struct CPU_State initial_cpu = {.pc=0x6ee1, .a=0x29, .x=0x5c, .y=0xc6, .sp=0x29, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x6ee1, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x6ee2, .a=0x29, .x=0x5c, .y=0xc6, .sp=0x5c, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x6ee1, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x6ee1, .value=0xbd, .type=IO_READ},
        {.addr=0x6ee2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03C1) {
    const struct CPU_State initial_cpu = {.pc=0x9362, .a=0x81, .x=0xcc, .y=0x50, .sp=0x28, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x9362, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x9363, .a=0x81, .x=0xcc, .y=0x50, .sp=0xcc, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x9362, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x9362, .value=0xbd, .type=IO_READ},
        {.addr=0x9363, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03C2) {
    const struct CPU_State initial_cpu = {.pc=0xba5f, .a=0x6c, .x=0xb0, .y=0x99, .sp=0x44, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xba5f, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xba60, .a=0x6c, .x=0xb0, .y=0x99, .sp=0xb0, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xba5f, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xba5f, .value=0xbd, .type=IO_READ},
        {.addr=0xba60, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03C3) {
    const struct CPU_State initial_cpu = {.pc=0x26e3, .a=0x0b, .x=0x44, .y=0x0a, .sp=0x54, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x26e3, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x26e4, .a=0x0b, .x=0x44, .y=0x0a, .sp=0x44, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x26e3, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x26e3, .value=0xbd, .type=IO_READ},
        {.addr=0x26e4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03C4) {
    const struct CPU_State initial_cpu = {.pc=0x520a, .a=0x6f, .x=0x17, .y=0x7f, .sp=0xbf, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x520a, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x520b, .a=0x6f, .x=0x17, .y=0x7f, .sp=0x17, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x520a, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x520a, .value=0xbd, .type=IO_READ},
        {.addr=0x520b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03C5) {
    const struct CPU_State initial_cpu = {.pc=0x4b73, .a=0x93, .x=0x6d, .y=0xc1, .sp=0x0f, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x4b73, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x4b74, .a=0x93, .x=0x6d, .y=0xc1, .sp=0x6d, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x4b73, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x4b73, .value=0xbd, .type=IO_READ},
        {.addr=0x4b74, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03C6) {
    const struct CPU_State initial_cpu = {.pc=0xde48, .a=0x72, .x=0x87, .y=0xc1, .sp=0xd3, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xde48, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xde49, .a=0x72, .x=0x87, .y=0xc1, .sp=0x87, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xde48, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xde48, .value=0xbd, .type=IO_READ},
        {.addr=0xde49, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03C7) {
    const struct CPU_State initial_cpu = {.pc=0x0be5, .a=0x06, .x=0xa6, .y=0x4a, .sp=0xb0, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x0be5, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x0be6, .a=0x06, .x=0xa6, .y=0x4a, .sp=0xa6, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x0be5, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x0be5, .value=0xbd, .type=IO_READ},
        {.addr=0x0be6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03C8) {
    const struct CPU_State initial_cpu = {.pc=0xc631, .a=0x15, .x=0xe9, .y=0x1a, .sp=0x1a, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xc631, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xc632, .a=0x15, .x=0xe9, .y=0x1a, .sp=0xe9, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0xc631, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xc631, .value=0xbd, .type=IO_READ},
        {.addr=0xc632, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03C9) {
    const struct CPU_State initial_cpu = {.pc=0x9a58, .a=0x66, .x=0x0a, .y=0x13, .sp=0x67, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x9a58, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x9a59, .a=0x66, .x=0x0a, .y=0x13, .sp=0x0a, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x9a58, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x9a58, .value=0xbd, .type=IO_READ},
        {.addr=0x9a59, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03CA) {
    const struct CPU_State initial_cpu = {.pc=0xd154, .a=0xe8, .x=0xb5, .y=0x89, .sp=0x71, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xd154, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xd155, .a=0xe8, .x=0xb5, .y=0x89, .sp=0xb5, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0xd154, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xd154, .value=0xbd, .type=IO_READ},
        {.addr=0xd155, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03CB) {
    const struct CPU_State initial_cpu = {.pc=0xd68e, .a=0xbd, .x=0xad, .y=0x8f, .sp=0x89, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xd68e, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xd68f, .a=0xbd, .x=0xad, .y=0x8f, .sp=0xad, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xd68e, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xd68e, .value=0xbd, .type=IO_READ},
        {.addr=0xd68f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03CC) {
    const struct CPU_State initial_cpu = {.pc=0x1a4f, .a=0xf7, .x=0xe7, .y=0xcd, .sp=0x79, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x1a4f, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x1a50, .a=0xf7, .x=0xe7, .y=0xcd, .sp=0xe7, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x1a4f, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x1a4f, .value=0xbd, .type=IO_READ},
        {.addr=0x1a50, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03CD) {
    const struct CPU_State initial_cpu = {.pc=0x2d7d, .a=0xa8, .x=0x5f, .y=0xee, .sp=0xae, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x2d7d, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x2d7e, .a=0xa8, .x=0x5f, .y=0xee, .sp=0x5f, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x2d7d, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x2d7d, .value=0xbd, .type=IO_READ},
        {.addr=0x2d7e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03CE) {
    const struct CPU_State initial_cpu = {.pc=0x2326, .a=0xf0, .x=0x5f, .y=0x1d, .sp=0x33, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x2326, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x2327, .a=0xf0, .x=0x5f, .y=0x1d, .sp=0x5f, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x2326, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x2326, .value=0xbd, .type=IO_READ},
        {.addr=0x2327, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03CF) {
    const struct CPU_State initial_cpu = {.pc=0x789c, .a=0x37, .x=0xd8, .y=0x01, .sp=0xd2, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x789c, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x789d, .a=0x37, .x=0xd8, .y=0x01, .sp=0xd8, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x789c, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x789c, .value=0xbd, .type=IO_READ},
        {.addr=0x789d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03D0) {
    const struct CPU_State initial_cpu = {.pc=0x4082, .a=0x5b, .x=0x14, .y=0x30, .sp=0x5a, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x4082, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x4083, .a=0x5b, .x=0x14, .y=0x30, .sp=0x14, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x4082, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x4082, .value=0xbd, .type=IO_READ},
        {.addr=0x4083, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03D1) {
    const struct CPU_State initial_cpu = {.pc=0xdfb0, .a=0x8d, .x=0x5c, .y=0xa0, .sp=0x3a, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xdfb0, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xdfb1, .a=0x8d, .x=0x5c, .y=0xa0, .sp=0x5c, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0xdfb0, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xdfb0, .value=0xbd, .type=IO_READ},
        {.addr=0xdfb1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03D2) {
    const struct CPU_State initial_cpu = {.pc=0xe350, .a=0x2d, .x=0x9a, .y=0x70, .sp=0x19, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xe350, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xe351, .a=0x2d, .x=0x9a, .y=0x70, .sp=0x9a, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0xe350, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xe350, .value=0xbd, .type=IO_READ},
        {.addr=0xe351, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03D3) {
    const struct CPU_State initial_cpu = {.pc=0x4dbc, .a=0xf5, .x=0x92, .y=0x22, .sp=0x4c, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x4dbc, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x4dbd, .a=0xf5, .x=0x92, .y=0x22, .sp=0x92, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x4dbc, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x4dbc, .value=0xbd, .type=IO_READ},
        {.addr=0x4dbd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03D4) {
    const struct CPU_State initial_cpu = {.pc=0x2e3e, .a=0xdb, .x=0xe9, .y=0xb7, .sp=0xaa, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x2e3e, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x2e3f, .a=0xdb, .x=0xe9, .y=0xb7, .sp=0xe9, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x2e3e, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x2e3e, .value=0xbd, .type=IO_READ},
        {.addr=0x2e3f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03D5) {
    const struct CPU_State initial_cpu = {.pc=0xcba1, .a=0x80, .x=0x29, .y=0x22, .sp=0x4a, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xcba1, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xcba2, .a=0x80, .x=0x29, .y=0x22, .sp=0x29, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0xcba1, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xcba1, .value=0xbd, .type=IO_READ},
        {.addr=0xcba2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03D6) {
    const struct CPU_State initial_cpu = {.pc=0xae2c, .a=0x65, .x=0x3d, .y=0xb2, .sp=0x6c, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0xae2c, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xae2d, .a=0x65, .x=0x3d, .y=0xb2, .sp=0x3d, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0xae2c, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xae2c, .value=0xbd, .type=IO_READ},
        {.addr=0xae2d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03D7) {
    const struct CPU_State initial_cpu = {.pc=0xdcda, .a=0x07, .x=0xdb, .y=0x40, .sp=0x31, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0xdcda, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xdcdb, .a=0x07, .x=0xdb, .y=0x40, .sp=0xdb, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xdcda, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xdcda, .value=0xbd, .type=IO_READ},
        {.addr=0xdcdb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03D8) {
    const struct CPU_State initial_cpu = {.pc=0xbc93, .a=0x27, .x=0xad, .y=0x26, .sp=0xfe, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xbc93, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xbc94, .a=0x27, .x=0xad, .y=0x26, .sp=0xad, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xbc93, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xbc93, .value=0xbd, .type=IO_READ},
        {.addr=0xbc94, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03D9) {
    const struct CPU_State initial_cpu = {.pc=0x4551, .a=0x30, .x=0x49, .y=0x42, .sp=0x7a, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x4551, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x4552, .a=0x30, .x=0x49, .y=0x42, .sp=0x49, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x4551, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x4551, .value=0xbd, .type=IO_READ},
        {.addr=0x4552, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03DA) {
    const struct CPU_State initial_cpu = {.pc=0xe2b2, .a=0x05, .x=0x62, .y=0x5e, .sp=0x4c, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xe2b2, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xe2b3, .a=0x05, .x=0x62, .y=0x5e, .sp=0x62, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0xe2b2, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xe2b2, .value=0xbd, .type=IO_READ},
        {.addr=0xe2b3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03DB) {
    const struct CPU_State initial_cpu = {.pc=0x7597, .a=0x42, .x=0x42, .y=0x26, .sp=0x56, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x7597, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x7598, .a=0x42, .x=0x42, .y=0x26, .sp=0x42, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x7597, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x7597, .value=0xbd, .type=IO_READ},
        {.addr=0x7598, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03DC) {
    const struct CPU_State initial_cpu = {.pc=0x6482, .a=0xbd, .x=0x51, .y=0x89, .sp=0xf6, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x6482, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x6483, .a=0xbd, .x=0x51, .y=0x89, .sp=0x51, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x6482, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x6482, .value=0xbd, .type=IO_READ},
        {.addr=0x6483, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03DD) {
    const struct CPU_State initial_cpu = {.pc=0xeb59, .a=0x9e, .x=0x59, .y=0x62, .sp=0xfc, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xeb59, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xeb5a, .a=0x9e, .x=0x59, .y=0x62, .sp=0x59, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0xeb59, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xeb59, .value=0xbd, .type=IO_READ},
        {.addr=0xeb5a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03DE) {
    const struct CPU_State initial_cpu = {.pc=0xa047, .a=0x64, .x=0xe2, .y=0x20, .sp=0x4f, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xa047, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xa048, .a=0x64, .x=0xe2, .y=0x20, .sp=0xe2, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0xa047, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xa047, .value=0xbd, .type=IO_READ},
        {.addr=0xa048, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03DF) {
    const struct CPU_State initial_cpu = {.pc=0x1b96, .a=0x68, .x=0x54, .y=0xb6, .sp=0x21, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x1b96, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x1b97, .a=0x68, .x=0x54, .y=0xb6, .sp=0x54, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x1b96, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x1b96, .value=0xbd, .type=IO_READ},
        {.addr=0x1b97, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03E0) {
    const struct CPU_State initial_cpu = {.pc=0x70ee, .a=0xda, .x=0x46, .y=0x04, .sp=0x05, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x70ee, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x70ef, .a=0xda, .x=0x46, .y=0x04, .sp=0x46, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x70ee, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x70ee, .value=0xbd, .type=IO_READ},
        {.addr=0x70ef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03E1) {
    const struct CPU_State initial_cpu = {.pc=0xad6c, .a=0xd7, .x=0x56, .y=0x6c, .sp=0xff, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xad6c, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xad6d, .a=0xd7, .x=0x56, .y=0x6c, .sp=0x56, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xad6c, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xad6c, .value=0xbd, .type=IO_READ},
        {.addr=0xad6d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03E2) {
    const struct CPU_State initial_cpu = {.pc=0x2327, .a=0xf2, .x=0x45, .y=0x0c, .sp=0xe1, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x2327, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x2328, .a=0xf2, .x=0x45, .y=0x0c, .sp=0x45, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x2327, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x2327, .value=0xbd, .type=IO_READ},
        {.addr=0x2328, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03E3) {
    const struct CPU_State initial_cpu = {.pc=0x8181, .a=0x2f, .x=0xaa, .y=0xfc, .sp=0x26, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x8181, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x8182, .a=0x2f, .x=0xaa, .y=0xfc, .sp=0xaa, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x8181, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x8181, .value=0xbd, .type=IO_READ},
        {.addr=0x8182, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03E4) {
    const struct CPU_State initial_cpu = {.pc=0x799f, .a=0xd1, .x=0x58, .y=0x2d, .sp=0x6a, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x799f, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x79a0, .a=0xd1, .x=0x58, .y=0x2d, .sp=0x58, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x799f, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x799f, .value=0xbd, .type=IO_READ},
        {.addr=0x79a0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03E5) {
    const struct CPU_State initial_cpu = {.pc=0x1461, .a=0x96, .x=0xa1, .y=0x2c, .sp=0x7d, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x1461, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x1462, .a=0x96, .x=0xa1, .y=0x2c, .sp=0xa1, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x1461, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x1461, .value=0xbd, .type=IO_READ},
        {.addr=0x1462, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03E6) {
    const struct CPU_State initial_cpu = {.pc=0xf113, .a=0xed, .x=0xef, .y=0x8a, .sp=0xf6, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xf113, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xf114, .a=0xed, .x=0xef, .y=0x8a, .sp=0xef, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xf113, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xf113, .value=0xbd, .type=IO_READ},
        {.addr=0xf114, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_BD, _BD_03E7) {
    const struct CPU_State initial_cpu = {.pc=0x6303, .a=0x6e, .x=0x66, .y=0xb0, .sp=0xb5, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x6303, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x6304, .a=0x6e, .x=0x66, .y=0xb0, .sp=0x66, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x6303, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x6303, .value=0xbd, .type=IO_READ},
        {.addr=0x6304, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("BD 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
