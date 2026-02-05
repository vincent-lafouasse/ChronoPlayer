#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_EB, _EB_0000) {
    const struct CPU_State initial_cpu = {.pc=0x60fa, .a=0x8e, .x=0x99, .y=0xec, .sp=0x3f, .status=0x8f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0052, .value=0xec}, {.addr=0x60fa, .value=0xeb}, {.addr=0x60fb, .value=0x52},
    };
    const struct CPU_State final_cpu = {.pc=0x60fc, .a=0x8e, .x=0x99, .y=0xec, .sp=0x3f, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0052, .value=0xec}, {.addr=0x60fa, .value=0xeb}, {.addr=0x60fb, .value=0x52},
    };
    const struct BusEvent events[] = {
        {.addr=0x60fa, .value=0xeb, .type=IO_READ},
        {.addr=0x60fb, .value=0x52, .type=IO_READ},
        {.addr=0x0052, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0001) {
    const struct CPU_State initial_cpu = {.pc=0x7677, .a=0x42, .x=0xb7, .y=0xd9, .sp=0x0c, .status=0x8a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0027, .value=0xad}, {.addr=0x7677, .value=0xeb}, {.addr=0x7678, .value=0x27},
    };
    const struct CPU_State final_cpu = {.pc=0x7679, .a=0x42, .x=0xb7, .y=0xad, .sp=0x0c, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x0027, .value=0xad}, {.addr=0x7677, .value=0xeb}, {.addr=0x7678, .value=0x27},
    };
    const struct BusEvent events[] = {
        {.addr=0x7677, .value=0xeb, .type=IO_READ},
        {.addr=0x7678, .value=0x27, .type=IO_READ},
        {.addr=0x0027, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0002) {
    const struct CPU_State initial_cpu = {.pc=0x29ba, .a=0x3b, .x=0xd7, .y=0x3f, .sp=0x40, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004f, .value=0xb0}, {.addr=0x29ba, .value=0xeb}, {.addr=0x29bb, .value=0x4f},
    };
    const struct CPU_State final_cpu = {.pc=0x29bc, .a=0x3b, .x=0xd7, .y=0xb0, .sp=0x40, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x004f, .value=0xb0}, {.addr=0x29ba, .value=0xeb}, {.addr=0x29bb, .value=0x4f},
    };
    const struct BusEvent events[] = {
        {.addr=0x29ba, .value=0xeb, .type=IO_READ},
        {.addr=0x29bb, .value=0x4f, .type=IO_READ},
        {.addr=0x004f, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0003) {
    const struct CPU_State initial_cpu = {.pc=0xe4ab, .a=0x1f, .x=0x9f, .y=0x51, .sp=0x04, .status=0x74};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f8, .value=0xc1}, {.addr=0xe4ab, .value=0xeb}, {.addr=0xe4ac, .value=0xf8},
    };
    const struct CPU_State final_cpu = {.pc=0xe4ad, .a=0x1f, .x=0x9f, .y=0xc1, .sp=0x04, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f8, .value=0xc1}, {.addr=0xe4ab, .value=0xeb}, {.addr=0xe4ac, .value=0xf8},
    };
    const struct BusEvent events[] = {
        {.addr=0xe4ab, .value=0xeb, .type=IO_READ},
        {.addr=0xe4ac, .value=0xf8, .type=IO_READ},
        {.addr=0x01f8, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0004) {
    const struct CPU_State initial_cpu = {.pc=0x3e9b, .a=0x8d, .x=0xf5, .y=0xd0, .sp=0x49, .status=0xb4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0170, .value=0x75}, {.addr=0x3e9b, .value=0xeb}, {.addr=0x3e9c, .value=0x70},
    };
    const struct CPU_State final_cpu = {.pc=0x3e9d, .a=0x8d, .x=0xf5, .y=0x75, .sp=0x49, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x0170, .value=0x75}, {.addr=0x3e9b, .value=0xeb}, {.addr=0x3e9c, .value=0x70},
    };
    const struct BusEvent events[] = {
        {.addr=0x3e9b, .value=0xeb, .type=IO_READ},
        {.addr=0x3e9c, .value=0x70, .type=IO_READ},
        {.addr=0x0170, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0005) {
    const struct CPU_State initial_cpu = {.pc=0x1e38, .a=0xc1, .x=0xce, .y=0xa9, .sp=0x60, .status=0x67};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011e, .value=0x5d}, {.addr=0x1e38, .value=0xeb}, {.addr=0x1e39, .value=0x1e},
    };
    const struct CPU_State final_cpu = {.pc=0x1e3a, .a=0xc1, .x=0xce, .y=0x5d, .sp=0x60, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x011e, .value=0x5d}, {.addr=0x1e38, .value=0xeb}, {.addr=0x1e39, .value=0x1e},
    };
    const struct BusEvent events[] = {
        {.addr=0x1e38, .value=0xeb, .type=IO_READ},
        {.addr=0x1e39, .value=0x1e, .type=IO_READ},
        {.addr=0x011e, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0006) {
    const struct CPU_State initial_cpu = {.pc=0xfb6b, .a=0x95, .x=0x47, .y=0xf2, .sp=0x2a, .status=0xd1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0025, .value=0x20}, {.addr=0xfb6b, .value=0xeb}, {.addr=0xfb6c, .value=0x25},
    };
    const struct CPU_State final_cpu = {.pc=0xfb6d, .a=0x95, .x=0x47, .y=0x20, .sp=0x2a, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x0025, .value=0x20}, {.addr=0xfb6b, .value=0xeb}, {.addr=0xfb6c, .value=0x25},
    };
    const struct BusEvent events[] = {
        {.addr=0xfb6b, .value=0xeb, .type=IO_READ},
        {.addr=0xfb6c, .value=0x25, .type=IO_READ},
        {.addr=0x0025, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0007) {
    const struct CPU_State initial_cpu = {.pc=0xaff6, .a=0xc6, .x=0x79, .y=0x9e, .sp=0xb4, .status=0xbd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cd, .value=0x77}, {.addr=0xaff6, .value=0xeb}, {.addr=0xaff7, .value=0xcd},
    };
    const struct CPU_State final_cpu = {.pc=0xaff8, .a=0xc6, .x=0x79, .y=0x77, .sp=0xb4, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cd, .value=0x77}, {.addr=0xaff6, .value=0xeb}, {.addr=0xaff7, .value=0xcd},
    };
    const struct BusEvent events[] = {
        {.addr=0xaff6, .value=0xeb, .type=IO_READ},
        {.addr=0xaff7, .value=0xcd, .type=IO_READ},
        {.addr=0x01cd, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0008) {
    const struct CPU_State initial_cpu = {.pc=0xdd01, .a=0xbf, .x=0xbc, .y=0x37, .sp=0x30, .status=0xc1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005b, .value=0x64}, {.addr=0xdd01, .value=0xeb}, {.addr=0xdd02, .value=0x5b},
    };
    const struct CPU_State final_cpu = {.pc=0xdd03, .a=0xbf, .x=0xbc, .y=0x64, .sp=0x30, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x005b, .value=0x64}, {.addr=0xdd01, .value=0xeb}, {.addr=0xdd02, .value=0x5b},
    };
    const struct BusEvent events[] = {
        {.addr=0xdd01, .value=0xeb, .type=IO_READ},
        {.addr=0xdd02, .value=0x5b, .type=IO_READ},
        {.addr=0x005b, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0009) {
    const struct CPU_State initial_cpu = {.pc=0x45cd, .a=0x90, .x=0x05, .y=0x70, .sp=0x57, .status=0x6a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0166, .value=0x2d}, {.addr=0x45cd, .value=0xeb}, {.addr=0x45ce, .value=0x66},
    };
    const struct CPU_State final_cpu = {.pc=0x45cf, .a=0x90, .x=0x05, .y=0x2d, .sp=0x57, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x0166, .value=0x2d}, {.addr=0x45cd, .value=0xeb}, {.addr=0x45ce, .value=0x66},
    };
    const struct BusEvent events[] = {
        {.addr=0x45cd, .value=0xeb, .type=IO_READ},
        {.addr=0x45ce, .value=0x66, .type=IO_READ},
        {.addr=0x0166, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_000A) {
    const struct CPU_State initial_cpu = {.pc=0x89d0, .a=0x23, .x=0x14, .y=0xd3, .sp=0x48, .status=0xba};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d2, .value=0xfb}, {.addr=0x89d0, .value=0xeb}, {.addr=0x89d1, .value=0xd2},
    };
    const struct CPU_State final_cpu = {.pc=0x89d2, .a=0x23, .x=0x14, .y=0xfb, .sp=0x48, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d2, .value=0xfb}, {.addr=0x89d0, .value=0xeb}, {.addr=0x89d1, .value=0xd2},
    };
    const struct BusEvent events[] = {
        {.addr=0x89d0, .value=0xeb, .type=IO_READ},
        {.addr=0x89d1, .value=0xd2, .type=IO_READ},
        {.addr=0x01d2, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_000B) {
    const struct CPU_State initial_cpu = {.pc=0x61f9, .a=0x16, .x=0x88, .y=0xdb, .sp=0xd5, .status=0x61};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fa, .value=0xbd}, {.addr=0x61f9, .value=0xeb}, {.addr=0x61fa, .value=0xfa},
    };
    const struct CPU_State final_cpu = {.pc=0x61fb, .a=0x16, .x=0x88, .y=0xbd, .sp=0xd5, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fa, .value=0xbd}, {.addr=0x61f9, .value=0xeb}, {.addr=0x61fa, .value=0xfa},
    };
    const struct BusEvent events[] = {
        {.addr=0x61f9, .value=0xeb, .type=IO_READ},
        {.addr=0x61fa, .value=0xfa, .type=IO_READ},
        {.addr=0x01fa, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_000C) {
    const struct CPU_State initial_cpu = {.pc=0x47ad, .a=0x7d, .x=0xe8, .y=0xe8, .sp=0xfa, .status=0xf6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017a, .value=0x96}, {.addr=0x47ad, .value=0xeb}, {.addr=0x47ae, .value=0x7a},
    };
    const struct CPU_State final_cpu = {.pc=0x47af, .a=0x7d, .x=0xe8, .y=0x96, .sp=0xfa, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x017a, .value=0x96}, {.addr=0x47ad, .value=0xeb}, {.addr=0x47ae, .value=0x7a},
    };
    const struct BusEvent events[] = {
        {.addr=0x47ad, .value=0xeb, .type=IO_READ},
        {.addr=0x47ae, .value=0x7a, .type=IO_READ},
        {.addr=0x017a, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_000D) {
    const struct CPU_State initial_cpu = {.pc=0x4433, .a=0x17, .x=0x79, .y=0xe2, .sp=0xfe, .status=0x5e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004b, .value=0x11}, {.addr=0x4433, .value=0xeb}, {.addr=0x4434, .value=0x4b},
    };
    const struct CPU_State final_cpu = {.pc=0x4435, .a=0x17, .x=0x79, .y=0x11, .sp=0xfe, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x004b, .value=0x11}, {.addr=0x4433, .value=0xeb}, {.addr=0x4434, .value=0x4b},
    };
    const struct BusEvent events[] = {
        {.addr=0x4433, .value=0xeb, .type=IO_READ},
        {.addr=0x4434, .value=0x4b, .type=IO_READ},
        {.addr=0x004b, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_000E) {
    const struct CPU_State initial_cpu = {.pc=0x8ff7, .a=0x6d, .x=0x02, .y=0x7a, .sp=0xb7, .status=0xaa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a5, .value=0xd2}, {.addr=0x8ff7, .value=0xeb}, {.addr=0x8ff8, .value=0xa5},
    };
    const struct CPU_State final_cpu = {.pc=0x8ff9, .a=0x6d, .x=0x02, .y=0xd2, .sp=0xb7, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a5, .value=0xd2}, {.addr=0x8ff7, .value=0xeb}, {.addr=0x8ff8, .value=0xa5},
    };
    const struct BusEvent events[] = {
        {.addr=0x8ff7, .value=0xeb, .type=IO_READ},
        {.addr=0x8ff8, .value=0xa5, .type=IO_READ},
        {.addr=0x01a5, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_000F) {
    const struct CPU_State initial_cpu = {.pc=0x01c2, .a=0x2a, .x=0xac, .y=0x3c, .sp=0x01, .status=0x85};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000b, .value=0x8a}, {.addr=0x01c2, .value=0xeb}, {.addr=0x01c3, .value=0x0b},
    };
    const struct CPU_State final_cpu = {.pc=0x01c4, .a=0x2a, .x=0xac, .y=0x8a, .sp=0x01, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x000b, .value=0x8a}, {.addr=0x01c2, .value=0xeb}, {.addr=0x01c3, .value=0x0b},
    };
    const struct BusEvent events[] = {
        {.addr=0x01c2, .value=0xeb, .type=IO_READ},
        {.addr=0x01c3, .value=0x0b, .type=IO_READ},
        {.addr=0x000b, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0010) {
    const struct CPU_State initial_cpu = {.pc=0x90ff, .a=0xf4, .x=0xff, .y=0x5f, .sp=0xca, .status=0x08};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d5, .value=0x1f}, {.addr=0x90ff, .value=0xeb}, {.addr=0x9100, .value=0xd5},
    };
    const struct CPU_State final_cpu = {.pc=0x9101, .a=0xf4, .x=0xff, .y=0x1f, .sp=0xca, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d5, .value=0x1f}, {.addr=0x90ff, .value=0xeb}, {.addr=0x9100, .value=0xd5},
    };
    const struct BusEvent events[] = {
        {.addr=0x90ff, .value=0xeb, .type=IO_READ},
        {.addr=0x9100, .value=0xd5, .type=IO_READ},
        {.addr=0x00d5, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0011) {
    const struct CPU_State initial_cpu = {.pc=0x78b4, .a=0x6b, .x=0x57, .y=0x56, .sp=0x4c, .status=0x09};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0020, .value=0xeb}, {.addr=0x78b4, .value=0xeb}, {.addr=0x78b5, .value=0x20},
    };
    const struct CPU_State final_cpu = {.pc=0x78b6, .a=0x6b, .x=0x57, .y=0xeb, .sp=0x4c, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x0020, .value=0xeb}, {.addr=0x78b4, .value=0xeb}, {.addr=0x78b5, .value=0x20},
    };
    const struct BusEvent events[] = {
        {.addr=0x78b4, .value=0xeb, .type=IO_READ},
        {.addr=0x78b5, .value=0x20, .type=IO_READ},
        {.addr=0x0020, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0012) {
    const struct CPU_State initial_cpu = {.pc=0x2a15, .a=0x1c, .x=0x62, .y=0x7c, .sp=0x67, .status=0x8d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000d, .value=0xea}, {.addr=0x2a15, .value=0xeb}, {.addr=0x2a16, .value=0x0d},
    };
    const struct CPU_State final_cpu = {.pc=0x2a17, .a=0x1c, .x=0x62, .y=0xea, .sp=0x67, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x000d, .value=0xea}, {.addr=0x2a15, .value=0xeb}, {.addr=0x2a16, .value=0x0d},
    };
    const struct BusEvent events[] = {
        {.addr=0x2a15, .value=0xeb, .type=IO_READ},
        {.addr=0x2a16, .value=0x0d, .type=IO_READ},
        {.addr=0x000d, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0013) {
    const struct CPU_State initial_cpu = {.pc=0x348d, .a=0x85, .x=0x94, .y=0x88, .sp=0xce, .status=0x7f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ac, .value=0x72}, {.addr=0x348d, .value=0xeb}, {.addr=0x348e, .value=0xac},
    };
    const struct CPU_State final_cpu = {.pc=0x348f, .a=0x85, .x=0x94, .y=0x72, .sp=0xce, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ac, .value=0x72}, {.addr=0x348d, .value=0xeb}, {.addr=0x348e, .value=0xac},
    };
    const struct BusEvent events[] = {
        {.addr=0x348d, .value=0xeb, .type=IO_READ},
        {.addr=0x348e, .value=0xac, .type=IO_READ},
        {.addr=0x01ac, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0014) {
    const struct CPU_State initial_cpu = {.pc=0xb602, .a=0x8b, .x=0x90, .y=0x21, .sp=0x2d, .status=0x4c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001d, .value=0xcf}, {.addr=0xb602, .value=0xeb}, {.addr=0xb603, .value=0x1d},
    };
    const struct CPU_State final_cpu = {.pc=0xb604, .a=0x8b, .x=0x90, .y=0xcf, .sp=0x2d, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x001d, .value=0xcf}, {.addr=0xb602, .value=0xeb}, {.addr=0xb603, .value=0x1d},
    };
    const struct BusEvent events[] = {
        {.addr=0xb602, .value=0xeb, .type=IO_READ},
        {.addr=0xb603, .value=0x1d, .type=IO_READ},
        {.addr=0x001d, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0015) {
    const struct CPU_State initial_cpu = {.pc=0x2bf2, .a=0xeb, .x=0xf4, .y=0xba, .sp=0xa3, .status=0xf0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0102, .value=0x16}, {.addr=0x2bf2, .value=0xeb}, {.addr=0x2bf3, .value=0x02},
    };
    const struct CPU_State final_cpu = {.pc=0x2bf4, .a=0xeb, .x=0xf4, .y=0x16, .sp=0xa3, .status=0x70};
    const struct RamEntry final_ram[] = {
        {.addr=0x0102, .value=0x16}, {.addr=0x2bf2, .value=0xeb}, {.addr=0x2bf3, .value=0x02},
    };
    const struct BusEvent events[] = {
        {.addr=0x2bf2, .value=0xeb, .type=IO_READ},
        {.addr=0x2bf3, .value=0x02, .type=IO_READ},
        {.addr=0x0102, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0016) {
    const struct CPU_State initial_cpu = {.pc=0xad15, .a=0xc2, .x=0x26, .y=0xfc, .sp=0xcc, .status=0x40};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000d, .value=0x87}, {.addr=0xad15, .value=0xeb}, {.addr=0xad16, .value=0x0d},
    };
    const struct CPU_State final_cpu = {.pc=0xad17, .a=0xc2, .x=0x26, .y=0x87, .sp=0xcc, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x000d, .value=0x87}, {.addr=0xad15, .value=0xeb}, {.addr=0xad16, .value=0x0d},
    };
    const struct BusEvent events[] = {
        {.addr=0xad15, .value=0xeb, .type=IO_READ},
        {.addr=0xad16, .value=0x0d, .type=IO_READ},
        {.addr=0x000d, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0017) {
    const struct CPU_State initial_cpu = {.pc=0x424a, .a=0x61, .x=0xc8, .y=0x14, .sp=0x17, .status=0x29};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b1, .value=0x87}, {.addr=0x424a, .value=0xeb}, {.addr=0x424b, .value=0xb1},
    };
    const struct CPU_State final_cpu = {.pc=0x424c, .a=0x61, .x=0xc8, .y=0x87, .sp=0x17, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b1, .value=0x87}, {.addr=0x424a, .value=0xeb}, {.addr=0x424b, .value=0xb1},
    };
    const struct BusEvent events[] = {
        {.addr=0x424a, .value=0xeb, .type=IO_READ},
        {.addr=0x424b, .value=0xb1, .type=IO_READ},
        {.addr=0x01b1, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0018) {
    const struct CPU_State initial_cpu = {.pc=0x425f, .a=0xd8, .x=0x71, .y=0xc7, .sp=0x6c, .status=0x18};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a7, .value=0x85}, {.addr=0x425f, .value=0xeb}, {.addr=0x4260, .value=0xa7},
    };
    const struct CPU_State final_cpu = {.pc=0x4261, .a=0xd8, .x=0x71, .y=0x85, .sp=0x6c, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a7, .value=0x85}, {.addr=0x425f, .value=0xeb}, {.addr=0x4260, .value=0xa7},
    };
    const struct BusEvent events[] = {
        {.addr=0x425f, .value=0xeb, .type=IO_READ},
        {.addr=0x4260, .value=0xa7, .type=IO_READ},
        {.addr=0x00a7, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0019) {
    const struct CPU_State initial_cpu = {.pc=0x50c0, .a=0x1f, .x=0x0f, .y=0x03, .sp=0x4b, .status=0xf8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0134, .value=0xaf}, {.addr=0x50c0, .value=0xeb}, {.addr=0x50c1, .value=0x34},
    };
    const struct CPU_State final_cpu = {.pc=0x50c2, .a=0x1f, .x=0x0f, .y=0xaf, .sp=0x4b, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0134, .value=0xaf}, {.addr=0x50c0, .value=0xeb}, {.addr=0x50c1, .value=0x34},
    };
    const struct BusEvent events[] = {
        {.addr=0x50c0, .value=0xeb, .type=IO_READ},
        {.addr=0x50c1, .value=0x34, .type=IO_READ},
        {.addr=0x0134, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_001A) {
    const struct CPU_State initial_cpu = {.pc=0xadfb, .a=0xd0, .x=0x95, .y=0x6c, .sp=0x4f, .status=0x2a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019a, .value=0x57}, {.addr=0xadfb, .value=0xeb}, {.addr=0xadfc, .value=0x9a},
    };
    const struct CPU_State final_cpu = {.pc=0xadfd, .a=0xd0, .x=0x95, .y=0x57, .sp=0x4f, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x019a, .value=0x57}, {.addr=0xadfb, .value=0xeb}, {.addr=0xadfc, .value=0x9a},
    };
    const struct BusEvent events[] = {
        {.addr=0xadfb, .value=0xeb, .type=IO_READ},
        {.addr=0xadfc, .value=0x9a, .type=IO_READ},
        {.addr=0x019a, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_001B) {
    const struct CPU_State initial_cpu = {.pc=0x6540, .a=0x33, .x=0x8b, .y=0x6d, .sp=0xbb, .status=0x72};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0139, .value=0x21}, {.addr=0x6540, .value=0xeb}, {.addr=0x6541, .value=0x39},
    };
    const struct CPU_State final_cpu = {.pc=0x6542, .a=0x33, .x=0x8b, .y=0x21, .sp=0xbb, .status=0x70};
    const struct RamEntry final_ram[] = {
        {.addr=0x0139, .value=0x21}, {.addr=0x6540, .value=0xeb}, {.addr=0x6541, .value=0x39},
    };
    const struct BusEvent events[] = {
        {.addr=0x6540, .value=0xeb, .type=IO_READ},
        {.addr=0x6541, .value=0x39, .type=IO_READ},
        {.addr=0x0139, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_001C) {
    const struct CPU_State initial_cpu = {.pc=0xd104, .a=0x65, .x=0x66, .y=0x41, .sp=0x05, .status=0xfd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0124, .value=0x5f}, {.addr=0xd104, .value=0xeb}, {.addr=0xd105, .value=0x24},
    };
    const struct CPU_State final_cpu = {.pc=0xd106, .a=0x65, .x=0x66, .y=0x5f, .sp=0x05, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0124, .value=0x5f}, {.addr=0xd104, .value=0xeb}, {.addr=0xd105, .value=0x24},
    };
    const struct BusEvent events[] = {
        {.addr=0xd104, .value=0xeb, .type=IO_READ},
        {.addr=0xd105, .value=0x24, .type=IO_READ},
        {.addr=0x0124, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_001D) {
    const struct CPU_State initial_cpu = {.pc=0xda8a, .a=0xe9, .x=0x6f, .y=0x90, .sp=0xa3, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0118, .value=0xaf}, {.addr=0xda8a, .value=0xeb}, {.addr=0xda8b, .value=0x18},
    };
    const struct CPU_State final_cpu = {.pc=0xda8c, .a=0xe9, .x=0x6f, .y=0xaf, .sp=0xa3, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0118, .value=0xaf}, {.addr=0xda8a, .value=0xeb}, {.addr=0xda8b, .value=0x18},
    };
    const struct BusEvent events[] = {
        {.addr=0xda8a, .value=0xeb, .type=IO_READ},
        {.addr=0xda8b, .value=0x18, .type=IO_READ},
        {.addr=0x0118, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_001E) {
    const struct CPU_State initial_cpu = {.pc=0x85fc, .a=0xff, .x=0x67, .y=0x3c, .sp=0x23, .status=0xa8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0148, .value=0x02}, {.addr=0x85fc, .value=0xeb}, {.addr=0x85fd, .value=0x48},
    };
    const struct CPU_State final_cpu = {.pc=0x85fe, .a=0xff, .x=0x67, .y=0x02, .sp=0x23, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x0148, .value=0x02}, {.addr=0x85fc, .value=0xeb}, {.addr=0x85fd, .value=0x48},
    };
    const struct BusEvent events[] = {
        {.addr=0x85fc, .value=0xeb, .type=IO_READ},
        {.addr=0x85fd, .value=0x48, .type=IO_READ},
        {.addr=0x0148, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_001F) {
    const struct CPU_State initial_cpu = {.pc=0x7092, .a=0x18, .x=0x53, .y=0x6c, .sp=0x57, .status=0xfa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019e, .value=0xef}, {.addr=0x7092, .value=0xeb}, {.addr=0x7093, .value=0x9e},
    };
    const struct CPU_State final_cpu = {.pc=0x7094, .a=0x18, .x=0x53, .y=0xef, .sp=0x57, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x019e, .value=0xef}, {.addr=0x7092, .value=0xeb}, {.addr=0x7093, .value=0x9e},
    };
    const struct BusEvent events[] = {
        {.addr=0x7092, .value=0xeb, .type=IO_READ},
        {.addr=0x7093, .value=0x9e, .type=IO_READ},
        {.addr=0x019e, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0020) {
    const struct CPU_State initial_cpu = {.pc=0xa0c3, .a=0x1c, .x=0x96, .y=0xbe, .sp=0x16, .status=0x12};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d8, .value=0x7f}, {.addr=0xa0c3, .value=0xeb}, {.addr=0xa0c4, .value=0xd8},
    };
    const struct CPU_State final_cpu = {.pc=0xa0c5, .a=0x1c, .x=0x96, .y=0x7f, .sp=0x16, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d8, .value=0x7f}, {.addr=0xa0c3, .value=0xeb}, {.addr=0xa0c4, .value=0xd8},
    };
    const struct BusEvent events[] = {
        {.addr=0xa0c3, .value=0xeb, .type=IO_READ},
        {.addr=0xa0c4, .value=0xd8, .type=IO_READ},
        {.addr=0x00d8, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0021) {
    const struct CPU_State initial_cpu = {.pc=0xb01e, .a=0xd0, .x=0x44, .y=0x64, .sp=0x31, .status=0xc9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a8, .value=0x29}, {.addr=0xb01e, .value=0xeb}, {.addr=0xb01f, .value=0xa8},
    };
    const struct CPU_State final_cpu = {.pc=0xb020, .a=0xd0, .x=0x44, .y=0x29, .sp=0x31, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a8, .value=0x29}, {.addr=0xb01e, .value=0xeb}, {.addr=0xb01f, .value=0xa8},
    };
    const struct BusEvent events[] = {
        {.addr=0xb01e, .value=0xeb, .type=IO_READ},
        {.addr=0xb01f, .value=0xa8, .type=IO_READ},
        {.addr=0x00a8, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0022) {
    const struct CPU_State initial_cpu = {.pc=0x7a18, .a=0x45, .x=0xf5, .y=0x62, .sp=0xd8, .status=0x29};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017d, .value=0xae}, {.addr=0x7a18, .value=0xeb}, {.addr=0x7a19, .value=0x7d},
    };
    const struct CPU_State final_cpu = {.pc=0x7a1a, .a=0x45, .x=0xf5, .y=0xae, .sp=0xd8, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x017d, .value=0xae}, {.addr=0x7a18, .value=0xeb}, {.addr=0x7a19, .value=0x7d},
    };
    const struct BusEvent events[] = {
        {.addr=0x7a18, .value=0xeb, .type=IO_READ},
        {.addr=0x7a19, .value=0x7d, .type=IO_READ},
        {.addr=0x017d, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0023) {
    const struct CPU_State initial_cpu = {.pc=0xaf3c, .a=0x15, .x=0x12, .y=0x8b, .sp=0x1a, .status=0x0f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ea, .value=0x21}, {.addr=0xaf3c, .value=0xeb}, {.addr=0xaf3d, .value=0xea},
    };
    const struct CPU_State final_cpu = {.pc=0xaf3e, .a=0x15, .x=0x12, .y=0x21, .sp=0x1a, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ea, .value=0x21}, {.addr=0xaf3c, .value=0xeb}, {.addr=0xaf3d, .value=0xea},
    };
    const struct BusEvent events[] = {
        {.addr=0xaf3c, .value=0xeb, .type=IO_READ},
        {.addr=0xaf3d, .value=0xea, .type=IO_READ},
        {.addr=0x00ea, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0024) {
    const struct CPU_State initial_cpu = {.pc=0xf2d3, .a=0x24, .x=0x46, .y=0x80, .sp=0x90, .status=0x20};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016b, .value=0x14}, {.addr=0xf2d3, .value=0xeb}, {.addr=0xf2d4, .value=0x6b},
    };
    const struct CPU_State final_cpu = {.pc=0xf2d5, .a=0x24, .x=0x46, .y=0x14, .sp=0x90, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x016b, .value=0x14}, {.addr=0xf2d3, .value=0xeb}, {.addr=0xf2d4, .value=0x6b},
    };
    const struct BusEvent events[] = {
        {.addr=0xf2d3, .value=0xeb, .type=IO_READ},
        {.addr=0xf2d4, .value=0x6b, .type=IO_READ},
        {.addr=0x016b, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0025) {
    const struct CPU_State initial_cpu = {.pc=0x015e, .a=0x49, .x=0x61, .y=0xc4, .sp=0xc6, .status=0xbb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0155, .value=0x21}, {.addr=0x015e, .value=0xeb}, {.addr=0x015f, .value=0x55},
    };
    const struct CPU_State final_cpu = {.pc=0x0160, .a=0x49, .x=0x61, .y=0x21, .sp=0xc6, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x0155, .value=0x21}, {.addr=0x015e, .value=0xeb}, {.addr=0x015f, .value=0x55},
    };
    const struct BusEvent events[] = {
        {.addr=0x015e, .value=0xeb, .type=IO_READ},
        {.addr=0x015f, .value=0x55, .type=IO_READ},
        {.addr=0x0155, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0026) {
    const struct CPU_State initial_cpu = {.pc=0xc4bc, .a=0xa0, .x=0x8e, .y=0xaa, .sp=0x96, .status=0xa2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010e, .value=0x09}, {.addr=0xc4bc, .value=0xeb}, {.addr=0xc4bd, .value=0x0e},
    };
    const struct CPU_State final_cpu = {.pc=0xc4be, .a=0xa0, .x=0x8e, .y=0x09, .sp=0x96, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x010e, .value=0x09}, {.addr=0xc4bc, .value=0xeb}, {.addr=0xc4bd, .value=0x0e},
    };
    const struct BusEvent events[] = {
        {.addr=0xc4bc, .value=0xeb, .type=IO_READ},
        {.addr=0xc4bd, .value=0x0e, .type=IO_READ},
        {.addr=0x010e, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0027) {
    const struct CPU_State initial_cpu = {.pc=0x8d0f, .a=0x3c, .x=0xbd, .y=0x39, .sp=0x34, .status=0x57};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d4, .value=0xfc}, {.addr=0x8d0f, .value=0xeb}, {.addr=0x8d10, .value=0xd4},
    };
    const struct CPU_State final_cpu = {.pc=0x8d11, .a=0x3c, .x=0xbd, .y=0xfc, .sp=0x34, .status=0xd5};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d4, .value=0xfc}, {.addr=0x8d0f, .value=0xeb}, {.addr=0x8d10, .value=0xd4},
    };
    const struct BusEvent events[] = {
        {.addr=0x8d0f, .value=0xeb, .type=IO_READ},
        {.addr=0x8d10, .value=0xd4, .type=IO_READ},
        {.addr=0x00d4, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0028) {
    const struct CPU_State initial_cpu = {.pc=0x499d, .a=0xeb, .x=0xba, .y=0x38, .sp=0x60, .status=0x77};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0163, .value=0xff}, {.addr=0x499d, .value=0xeb}, {.addr=0x499e, .value=0x63},
    };
    const struct CPU_State final_cpu = {.pc=0x499f, .a=0xeb, .x=0xba, .y=0xff, .sp=0x60, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0163, .value=0xff}, {.addr=0x499d, .value=0xeb}, {.addr=0x499e, .value=0x63},
    };
    const struct BusEvent events[] = {
        {.addr=0x499d, .value=0xeb, .type=IO_READ},
        {.addr=0x499e, .value=0x63, .type=IO_READ},
        {.addr=0x0163, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_002A) {
    const struct CPU_State initial_cpu = {.pc=0xf65d, .a=0xc1, .x=0x85, .y=0x97, .sp=0x31, .status=0x95};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b1, .value=0x5d}, {.addr=0xf65d, .value=0xeb}, {.addr=0xf65e, .value=0xb1},
    };
    const struct CPU_State final_cpu = {.pc=0xf65f, .a=0xc1, .x=0x85, .y=0x5d, .sp=0x31, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b1, .value=0x5d}, {.addr=0xf65d, .value=0xeb}, {.addr=0xf65e, .value=0xb1},
    };
    const struct BusEvent events[] = {
        {.addr=0xf65d, .value=0xeb, .type=IO_READ},
        {.addr=0xf65e, .value=0xb1, .type=IO_READ},
        {.addr=0x00b1, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_002B) {
    const struct CPU_State initial_cpu = {.pc=0x11bb, .a=0x83, .x=0xfc, .y=0xdd, .sp=0x62, .status=0xcf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002c, .value=0x9a}, {.addr=0x11bb, .value=0xeb}, {.addr=0x11bc, .value=0x2c},
    };
    const struct CPU_State final_cpu = {.pc=0x11bd, .a=0x83, .x=0xfc, .y=0x9a, .sp=0x62, .status=0xcd};
    const struct RamEntry final_ram[] = {
        {.addr=0x002c, .value=0x9a}, {.addr=0x11bb, .value=0xeb}, {.addr=0x11bc, .value=0x2c},
    };
    const struct BusEvent events[] = {
        {.addr=0x11bb, .value=0xeb, .type=IO_READ},
        {.addr=0x11bc, .value=0x2c, .type=IO_READ},
        {.addr=0x002c, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_002C) {
    const struct CPU_State initial_cpu = {.pc=0x4b6b, .a=0x83, .x=0xfd, .y=0x13, .sp=0x42, .status=0x32};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0139, .value=0x56}, {.addr=0x4b6b, .value=0xeb}, {.addr=0x4b6c, .value=0x39},
    };
    const struct CPU_State final_cpu = {.pc=0x4b6d, .a=0x83, .x=0xfd, .y=0x56, .sp=0x42, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x0139, .value=0x56}, {.addr=0x4b6b, .value=0xeb}, {.addr=0x4b6c, .value=0x39},
    };
    const struct BusEvent events[] = {
        {.addr=0x4b6b, .value=0xeb, .type=IO_READ},
        {.addr=0x4b6c, .value=0x39, .type=IO_READ},
        {.addr=0x0139, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_002D) {
    const struct CPU_State initial_cpu = {.pc=0x7f59, .a=0xbd, .x=0x94, .y=0x4c, .sp=0xcd, .status=0x97};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008c, .value=0x26}, {.addr=0x7f59, .value=0xeb}, {.addr=0x7f5a, .value=0x8c},
    };
    const struct CPU_State final_cpu = {.pc=0x7f5b, .a=0xbd, .x=0x94, .y=0x26, .sp=0xcd, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x008c, .value=0x26}, {.addr=0x7f59, .value=0xeb}, {.addr=0x7f5a, .value=0x8c},
    };
    const struct BusEvent events[] = {
        {.addr=0x7f59, .value=0xeb, .type=IO_READ},
        {.addr=0x7f5a, .value=0x8c, .type=IO_READ},
        {.addr=0x008c, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_002E) {
    const struct CPU_State initial_cpu = {.pc=0x36fb, .a=0xfe, .x=0x6a, .y=0x99, .sp=0x5f, .status=0xed};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f9, .value=0xc9}, {.addr=0x36fb, .value=0xeb}, {.addr=0x36fc, .value=0xf9},
    };
    const struct CPU_State final_cpu = {.pc=0x36fd, .a=0xfe, .x=0x6a, .y=0xc9, .sp=0x5f, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f9, .value=0xc9}, {.addr=0x36fb, .value=0xeb}, {.addr=0x36fc, .value=0xf9},
    };
    const struct BusEvent events[] = {
        {.addr=0x36fb, .value=0xeb, .type=IO_READ},
        {.addr=0x36fc, .value=0xf9, .type=IO_READ},
        {.addr=0x01f9, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_002F) {
    const struct CPU_State initial_cpu = {.pc=0xd3ce, .a=0x10, .x=0x45, .y=0x56, .sp=0x8a, .status=0xeb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015f, .value=0xc6}, {.addr=0xd3ce, .value=0xeb}, {.addr=0xd3cf, .value=0x5f},
    };
    const struct CPU_State final_cpu = {.pc=0xd3d0, .a=0x10, .x=0x45, .y=0xc6, .sp=0x8a, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x015f, .value=0xc6}, {.addr=0xd3ce, .value=0xeb}, {.addr=0xd3cf, .value=0x5f},
    };
    const struct BusEvent events[] = {
        {.addr=0xd3ce, .value=0xeb, .type=IO_READ},
        {.addr=0xd3cf, .value=0x5f, .type=IO_READ},
        {.addr=0x015f, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0030) {
    const struct CPU_State initial_cpu = {.pc=0x44cb, .a=0xfd, .x=0xc2, .y=0x90, .sp=0x50, .status=0xf6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c8, .value=0xb4}, {.addr=0x44cb, .value=0xeb}, {.addr=0x44cc, .value=0xc8},
    };
    const struct CPU_State final_cpu = {.pc=0x44cd, .a=0xfd, .x=0xc2, .y=0xb4, .sp=0x50, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c8, .value=0xb4}, {.addr=0x44cb, .value=0xeb}, {.addr=0x44cc, .value=0xc8},
    };
    const struct BusEvent events[] = {
        {.addr=0x44cb, .value=0xeb, .type=IO_READ},
        {.addr=0x44cc, .value=0xc8, .type=IO_READ},
        {.addr=0x01c8, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0031) {
    const struct CPU_State initial_cpu = {.pc=0x59d5, .a=0x73, .x=0x8c, .y=0x5e, .sp=0x02, .status=0xaf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ea, .value=0x3e}, {.addr=0x59d5, .value=0xeb}, {.addr=0x59d6, .value=0xea},
    };
    const struct CPU_State final_cpu = {.pc=0x59d7, .a=0x73, .x=0x8c, .y=0x3e, .sp=0x02, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ea, .value=0x3e}, {.addr=0x59d5, .value=0xeb}, {.addr=0x59d6, .value=0xea},
    };
    const struct BusEvent events[] = {
        {.addr=0x59d5, .value=0xeb, .type=IO_READ},
        {.addr=0x59d6, .value=0xea, .type=IO_READ},
        {.addr=0x01ea, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0032) {
    const struct CPU_State initial_cpu = {.pc=0x78cc, .a=0xaf, .x=0xf4, .y=0x1a, .sp=0x3e, .status=0x42};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e4, .value=0x10}, {.addr=0x78cc, .value=0xeb}, {.addr=0x78cd, .value=0xe4},
    };
    const struct CPU_State final_cpu = {.pc=0x78ce, .a=0xaf, .x=0xf4, .y=0x10, .sp=0x3e, .status=0x40};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e4, .value=0x10}, {.addr=0x78cc, .value=0xeb}, {.addr=0x78cd, .value=0xe4},
    };
    const struct BusEvent events[] = {
        {.addr=0x78cc, .value=0xeb, .type=IO_READ},
        {.addr=0x78cd, .value=0xe4, .type=IO_READ},
        {.addr=0x00e4, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0033) {
    const struct CPU_State initial_cpu = {.pc=0x62bb, .a=0x6c, .x=0xcf, .y=0x64, .sp=0x70, .status=0xb2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011a, .value=0x7e}, {.addr=0x62bb, .value=0xeb}, {.addr=0x62bc, .value=0x1a},
    };
    const struct CPU_State final_cpu = {.pc=0x62bd, .a=0x6c, .x=0xcf, .y=0x7e, .sp=0x70, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x011a, .value=0x7e}, {.addr=0x62bb, .value=0xeb}, {.addr=0x62bc, .value=0x1a},
    };
    const struct BusEvent events[] = {
        {.addr=0x62bb, .value=0xeb, .type=IO_READ},
        {.addr=0x62bc, .value=0x1a, .type=IO_READ},
        {.addr=0x011a, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0034) {
    const struct CPU_State initial_cpu = {.pc=0x408d, .a=0x9e, .x=0x4c, .y=0xb7, .sp=0xb1, .status=0x8e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005b, .value=0x11}, {.addr=0x408d, .value=0xeb}, {.addr=0x408e, .value=0x5b},
    };
    const struct CPU_State final_cpu = {.pc=0x408f, .a=0x9e, .x=0x4c, .y=0x11, .sp=0xb1, .status=0x0c};
    const struct RamEntry final_ram[] = {
        {.addr=0x005b, .value=0x11}, {.addr=0x408d, .value=0xeb}, {.addr=0x408e, .value=0x5b},
    };
    const struct BusEvent events[] = {
        {.addr=0x408d, .value=0xeb, .type=IO_READ},
        {.addr=0x408e, .value=0x5b, .type=IO_READ},
        {.addr=0x005b, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0035) {
    const struct CPU_State initial_cpu = {.pc=0x1d00, .a=0x5c, .x=0x8c, .y=0x47, .sp=0xdb, .status=0xe5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0121, .value=0x6f}, {.addr=0x1d00, .value=0xeb}, {.addr=0x1d01, .value=0x21},
    };
    const struct CPU_State final_cpu = {.pc=0x1d02, .a=0x5c, .x=0x8c, .y=0x6f, .sp=0xdb, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x0121, .value=0x6f}, {.addr=0x1d00, .value=0xeb}, {.addr=0x1d01, .value=0x21},
    };
    const struct BusEvent events[] = {
        {.addr=0x1d00, .value=0xeb, .type=IO_READ},
        {.addr=0x1d01, .value=0x21, .type=IO_READ},
        {.addr=0x0121, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0036) {
    const struct CPU_State initial_cpu = {.pc=0x0976, .a=0x5c, .x=0xcc, .y=0x10, .sp=0x7d, .status=0x5f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009a, .value=0x14}, {.addr=0x0976, .value=0xeb}, {.addr=0x0977, .value=0x9a},
    };
    const struct CPU_State final_cpu = {.pc=0x0978, .a=0x5c, .x=0xcc, .y=0x14, .sp=0x7d, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x009a, .value=0x14}, {.addr=0x0976, .value=0xeb}, {.addr=0x0977, .value=0x9a},
    };
    const struct BusEvent events[] = {
        {.addr=0x0976, .value=0xeb, .type=IO_READ},
        {.addr=0x0977, .value=0x9a, .type=IO_READ},
        {.addr=0x009a, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0037) {
    const struct CPU_State initial_cpu = {.pc=0xc097, .a=0x94, .x=0xfd, .y=0xbe, .sp=0xf7, .status=0xbc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0124, .value=0x8c}, {.addr=0xc097, .value=0xeb}, {.addr=0xc098, .value=0x24},
    };
    const struct CPU_State final_cpu = {.pc=0xc099, .a=0x94, .x=0xfd, .y=0x8c, .sp=0xf7, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0124, .value=0x8c}, {.addr=0xc097, .value=0xeb}, {.addr=0xc098, .value=0x24},
    };
    const struct BusEvent events[] = {
        {.addr=0xc097, .value=0xeb, .type=IO_READ},
        {.addr=0xc098, .value=0x24, .type=IO_READ},
        {.addr=0x0124, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0038) {
    const struct CPU_State initial_cpu = {.pc=0xe3a8, .a=0xbd, .x=0xfa, .y=0xf7, .sp=0x03, .status=0x75};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0132, .value=0x06}, {.addr=0xe3a8, .value=0xeb}, {.addr=0xe3a9, .value=0x32},
    };
    const struct CPU_State final_cpu = {.pc=0xe3aa, .a=0xbd, .x=0xfa, .y=0x06, .sp=0x03, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x0132, .value=0x06}, {.addr=0xe3a8, .value=0xeb}, {.addr=0xe3a9, .value=0x32},
    };
    const struct BusEvent events[] = {
        {.addr=0xe3a8, .value=0xeb, .type=IO_READ},
        {.addr=0xe3a9, .value=0x32, .type=IO_READ},
        {.addr=0x0132, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0039) {
    const struct CPU_State initial_cpu = {.pc=0x0b57, .a=0x17, .x=0x5e, .y=0x8a, .sp=0x1b, .status=0x02};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0053, .value=0xc2}, {.addr=0x0b57, .value=0xeb}, {.addr=0x0b58, .value=0x53},
    };
    const struct CPU_State final_cpu = {.pc=0x0b59, .a=0x17, .x=0x5e, .y=0xc2, .sp=0x1b, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x0053, .value=0xc2}, {.addr=0x0b57, .value=0xeb}, {.addr=0x0b58, .value=0x53},
    };
    const struct BusEvent events[] = {
        {.addr=0x0b57, .value=0xeb, .type=IO_READ},
        {.addr=0x0b58, .value=0x53, .type=IO_READ},
        {.addr=0x0053, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_003A) {
    const struct CPU_State initial_cpu = {.pc=0x3eef, .a=0x2c, .x=0x38, .y=0x07, .sp=0x40, .status=0xea};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0175, .value=0x30}, {.addr=0x3eef, .value=0xeb}, {.addr=0x3ef0, .value=0x75},
    };
    const struct CPU_State final_cpu = {.pc=0x3ef1, .a=0x2c, .x=0x38, .y=0x30, .sp=0x40, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x0175, .value=0x30}, {.addr=0x3eef, .value=0xeb}, {.addr=0x3ef0, .value=0x75},
    };
    const struct BusEvent events[] = {
        {.addr=0x3eef, .value=0xeb, .type=IO_READ},
        {.addr=0x3ef0, .value=0x75, .type=IO_READ},
        {.addr=0x0175, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_003B) {
    const struct CPU_State initial_cpu = {.pc=0x8d35, .a=0x6d, .x=0x07, .y=0x57, .sp=0x47, .status=0xf1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b4, .value=0xa8}, {.addr=0x8d35, .value=0xeb}, {.addr=0x8d36, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0x8d37, .a=0x6d, .x=0x07, .y=0xa8, .sp=0x47, .status=0xf1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b4, .value=0xa8}, {.addr=0x8d35, .value=0xeb}, {.addr=0x8d36, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0x8d35, .value=0xeb, .type=IO_READ},
        {.addr=0x8d36, .value=0xb4, .type=IO_READ},
        {.addr=0x01b4, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_003C) {
    const struct CPU_State initial_cpu = {.pc=0x1ac7, .a=0x60, .x=0xde, .y=0x85, .sp=0xc6, .status=0x14};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0043, .value=0xf9}, {.addr=0x1ac7, .value=0xeb}, {.addr=0x1ac8, .value=0x43},
    };
    const struct CPU_State final_cpu = {.pc=0x1ac9, .a=0x60, .x=0xde, .y=0xf9, .sp=0xc6, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x0043, .value=0xf9}, {.addr=0x1ac7, .value=0xeb}, {.addr=0x1ac8, .value=0x43},
    };
    const struct BusEvent events[] = {
        {.addr=0x1ac7, .value=0xeb, .type=IO_READ},
        {.addr=0x1ac8, .value=0x43, .type=IO_READ},
        {.addr=0x0043, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_003D) {
    const struct CPU_State initial_cpu = {.pc=0x0332, .a=0x7e, .x=0xfc, .y=0xf2, .sp=0xac, .status=0xed};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d5, .value=0xfd}, {.addr=0x0332, .value=0xeb}, {.addr=0x0333, .value=0xd5},
    };
    const struct CPU_State final_cpu = {.pc=0x0334, .a=0x7e, .x=0xfc, .y=0xfd, .sp=0xac, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d5, .value=0xfd}, {.addr=0x0332, .value=0xeb}, {.addr=0x0333, .value=0xd5},
    };
    const struct BusEvent events[] = {
        {.addr=0x0332, .value=0xeb, .type=IO_READ},
        {.addr=0x0333, .value=0xd5, .type=IO_READ},
        {.addr=0x01d5, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_003E) {
    const struct CPU_State initial_cpu = {.pc=0x7e61, .a=0x76, .x=0xf2, .y=0x47, .sp=0xdb, .status=0xca};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0075, .value=0x75}, {.addr=0x7e61, .value=0xeb}, {.addr=0x7e62, .value=0x75},
    };
    const struct CPU_State final_cpu = {.pc=0x7e63, .a=0x76, .x=0xf2, .y=0x75, .sp=0xdb, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x0075, .value=0x75}, {.addr=0x7e61, .value=0xeb}, {.addr=0x7e62, .value=0x75},
    };
    const struct BusEvent events[] = {
        {.addr=0x7e61, .value=0xeb, .type=IO_READ},
        {.addr=0x7e62, .value=0x75, .type=IO_READ},
        {.addr=0x0075, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_003F) {
    const struct CPU_State initial_cpu = {.pc=0x6fb2, .a=0x93, .x=0xfe, .y=0x6f, .sp=0xd9, .status=0x86};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cc, .value=0xb5}, {.addr=0x6fb2, .value=0xeb}, {.addr=0x6fb3, .value=0xcc},
    };
    const struct CPU_State final_cpu = {.pc=0x6fb4, .a=0x93, .x=0xfe, .y=0xb5, .sp=0xd9, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cc, .value=0xb5}, {.addr=0x6fb2, .value=0xeb}, {.addr=0x6fb3, .value=0xcc},
    };
    const struct BusEvent events[] = {
        {.addr=0x6fb2, .value=0xeb, .type=IO_READ},
        {.addr=0x6fb3, .value=0xcc, .type=IO_READ},
        {.addr=0x00cc, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0040) {
    const struct CPU_State initial_cpu = {.pc=0x42f6, .a=0x98, .x=0x81, .y=0xb9, .sp=0x25, .status=0xb9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b8, .value=0xd9}, {.addr=0x42f6, .value=0xeb}, {.addr=0x42f7, .value=0xb8},
    };
    const struct CPU_State final_cpu = {.pc=0x42f8, .a=0x98, .x=0x81, .y=0xd9, .sp=0x25, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b8, .value=0xd9}, {.addr=0x42f6, .value=0xeb}, {.addr=0x42f7, .value=0xb8},
    };
    const struct BusEvent events[] = {
        {.addr=0x42f6, .value=0xeb, .type=IO_READ},
        {.addr=0x42f7, .value=0xb8, .type=IO_READ},
        {.addr=0x01b8, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0041) {
    const struct CPU_State initial_cpu = {.pc=0x4670, .a=0xe7, .x=0xd9, .y=0xb2, .sp=0x0b, .status=0x40};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0084, .value=0xf2}, {.addr=0x4670, .value=0xeb}, {.addr=0x4671, .value=0x84},
    };
    const struct CPU_State final_cpu = {.pc=0x4672, .a=0xe7, .x=0xd9, .y=0xf2, .sp=0x0b, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0084, .value=0xf2}, {.addr=0x4670, .value=0xeb}, {.addr=0x4671, .value=0x84},
    };
    const struct BusEvent events[] = {
        {.addr=0x4670, .value=0xeb, .type=IO_READ},
        {.addr=0x4671, .value=0x84, .type=IO_READ},
        {.addr=0x0084, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0042) {
    const struct CPU_State initial_cpu = {.pc=0x2696, .a=0x04, .x=0x99, .y=0x99, .sp=0xdb, .status=0x21};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010d, .value=0x30}, {.addr=0x2696, .value=0xeb}, {.addr=0x2697, .value=0x0d},
    };
    const struct CPU_State final_cpu = {.pc=0x2698, .a=0x04, .x=0x99, .y=0x30, .sp=0xdb, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x010d, .value=0x30}, {.addr=0x2696, .value=0xeb}, {.addr=0x2697, .value=0x0d},
    };
    const struct BusEvent events[] = {
        {.addr=0x2696, .value=0xeb, .type=IO_READ},
        {.addr=0x2697, .value=0x0d, .type=IO_READ},
        {.addr=0x010d, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0043) {
    const struct CPU_State initial_cpu = {.pc=0x8af1, .a=0x66, .x=0xdb, .y=0x30, .sp=0x16, .status=0x8f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e8, .value=0x2a}, {.addr=0x8af1, .value=0xeb}, {.addr=0x8af2, .value=0xe8},
    };
    const struct CPU_State final_cpu = {.pc=0x8af3, .a=0x66, .x=0xdb, .y=0x2a, .sp=0x16, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e8, .value=0x2a}, {.addr=0x8af1, .value=0xeb}, {.addr=0x8af2, .value=0xe8},
    };
    const struct BusEvent events[] = {
        {.addr=0x8af1, .value=0xeb, .type=IO_READ},
        {.addr=0x8af2, .value=0xe8, .type=IO_READ},
        {.addr=0x00e8, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0044) {
    const struct CPU_State initial_cpu = {.pc=0x7cbb, .a=0xac, .x=0x8c, .y=0xd3, .sp=0x89, .status=0x45};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00df, .value=0xfc}, {.addr=0x7cbb, .value=0xeb}, {.addr=0x7cbc, .value=0xdf},
    };
    const struct CPU_State final_cpu = {.pc=0x7cbd, .a=0xac, .x=0x8c, .y=0xfc, .sp=0x89, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x00df, .value=0xfc}, {.addr=0x7cbb, .value=0xeb}, {.addr=0x7cbc, .value=0xdf},
    };
    const struct BusEvent events[] = {
        {.addr=0x7cbb, .value=0xeb, .type=IO_READ},
        {.addr=0x7cbc, .value=0xdf, .type=IO_READ},
        {.addr=0x00df, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0045) {
    const struct CPU_State initial_cpu = {.pc=0x61dd, .a=0xa4, .x=0xf8, .y=0x6b, .sp=0x83, .status=0x27};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0137, .value=0xac}, {.addr=0x61dd, .value=0xeb}, {.addr=0x61de, .value=0x37},
    };
    const struct CPU_State final_cpu = {.pc=0x61df, .a=0xa4, .x=0xf8, .y=0xac, .sp=0x83, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0137, .value=0xac}, {.addr=0x61dd, .value=0xeb}, {.addr=0x61de, .value=0x37},
    };
    const struct BusEvent events[] = {
        {.addr=0x61dd, .value=0xeb, .type=IO_READ},
        {.addr=0x61de, .value=0x37, .type=IO_READ},
        {.addr=0x0137, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0046) {
    const struct CPU_State initial_cpu = {.pc=0xcef4, .a=0x20, .x=0x33, .y=0xd6, .sp=0x57, .status=0x9d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0062, .value=0x18}, {.addr=0xcef4, .value=0xeb}, {.addr=0xcef5, .value=0x62},
    };
    const struct CPU_State final_cpu = {.pc=0xcef6, .a=0x20, .x=0x33, .y=0x18, .sp=0x57, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0062, .value=0x18}, {.addr=0xcef4, .value=0xeb}, {.addr=0xcef5, .value=0x62},
    };
    const struct BusEvent events[] = {
        {.addr=0xcef4, .value=0xeb, .type=IO_READ},
        {.addr=0xcef5, .value=0x62, .type=IO_READ},
        {.addr=0x0062, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0047) {
    const struct CPU_State initial_cpu = {.pc=0x9e60, .a=0x67, .x=0xc5, .y=0x0a, .sp=0xd1, .status=0x4a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007b, .value=0xaa}, {.addr=0x9e60, .value=0xeb}, {.addr=0x9e61, .value=0x7b},
    };
    const struct CPU_State final_cpu = {.pc=0x9e62, .a=0x67, .x=0xc5, .y=0xaa, .sp=0xd1, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x007b, .value=0xaa}, {.addr=0x9e60, .value=0xeb}, {.addr=0x9e61, .value=0x7b},
    };
    const struct BusEvent events[] = {
        {.addr=0x9e60, .value=0xeb, .type=IO_READ},
        {.addr=0x9e61, .value=0x7b, .type=IO_READ},
        {.addr=0x007b, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0048) {
    const struct CPU_State initial_cpu = {.pc=0xca71, .a=0x33, .x=0x79, .y=0x79, .sp=0xee, .status=0x95};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ae, .value=0xb7}, {.addr=0xca71, .value=0xeb}, {.addr=0xca72, .value=0xae},
    };
    const struct CPU_State final_cpu = {.pc=0xca73, .a=0x33, .x=0x79, .y=0xb7, .sp=0xee, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ae, .value=0xb7}, {.addr=0xca71, .value=0xeb}, {.addr=0xca72, .value=0xae},
    };
    const struct BusEvent events[] = {
        {.addr=0xca71, .value=0xeb, .type=IO_READ},
        {.addr=0xca72, .value=0xae, .type=IO_READ},
        {.addr=0x00ae, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0049) {
    const struct CPU_State initial_cpu = {.pc=0x9f1c, .a=0xf0, .x=0x5c, .y=0xd0, .sp=0xfc, .status=0xa3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a7, .value=0x13}, {.addr=0x9f1c, .value=0xeb}, {.addr=0x9f1d, .value=0xa7},
    };
    const struct CPU_State final_cpu = {.pc=0x9f1e, .a=0xf0, .x=0x5c, .y=0x13, .sp=0xfc, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a7, .value=0x13}, {.addr=0x9f1c, .value=0xeb}, {.addr=0x9f1d, .value=0xa7},
    };
    const struct BusEvent events[] = {
        {.addr=0x9f1c, .value=0xeb, .type=IO_READ},
        {.addr=0x9f1d, .value=0xa7, .type=IO_READ},
        {.addr=0x01a7, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_004A) {
    const struct CPU_State initial_cpu = {.pc=0xf6cf, .a=0x6e, .x=0xdd, .y=0xdc, .sp=0xc0, .status=0x1b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0023, .value=0x80}, {.addr=0xf6cf, .value=0xeb}, {.addr=0xf6d0, .value=0x23},
    };
    const struct CPU_State final_cpu = {.pc=0xf6d1, .a=0x6e, .x=0xdd, .y=0x80, .sp=0xc0, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x0023, .value=0x80}, {.addr=0xf6cf, .value=0xeb}, {.addr=0xf6d0, .value=0x23},
    };
    const struct BusEvent events[] = {
        {.addr=0xf6cf, .value=0xeb, .type=IO_READ},
        {.addr=0xf6d0, .value=0x23, .type=IO_READ},
        {.addr=0x0023, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_004B) {
    const struct CPU_State initial_cpu = {.pc=0x18c7, .a=0x64, .x=0xae, .y=0x90, .sp=0x61, .status=0xaf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ae, .value=0x43}, {.addr=0x18c7, .value=0xeb}, {.addr=0x18c8, .value=0xae},
    };
    const struct CPU_State final_cpu = {.pc=0x18c9, .a=0x64, .x=0xae, .y=0x43, .sp=0x61, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ae, .value=0x43}, {.addr=0x18c7, .value=0xeb}, {.addr=0x18c8, .value=0xae},
    };
    const struct BusEvent events[] = {
        {.addr=0x18c7, .value=0xeb, .type=IO_READ},
        {.addr=0x18c8, .value=0xae, .type=IO_READ},
        {.addr=0x01ae, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_004C) {
    const struct CPU_State initial_cpu = {.pc=0xb5bf, .a=0x9b, .x=0xda, .y=0x2b, .sp=0xc1, .status=0x04};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008c, .value=0x00}, {.addr=0xb5bf, .value=0xeb}, {.addr=0xb5c0, .value=0x8c},
    };
    const struct CPU_State final_cpu = {.pc=0xb5c1, .a=0x9b, .x=0xda, .y=0x00, .sp=0xc1, .status=0x06};
    const struct RamEntry final_ram[] = {
        {.addr=0x008c, .value=0x00}, {.addr=0xb5bf, .value=0xeb}, {.addr=0xb5c0, .value=0x8c},
    };
    const struct BusEvent events[] = {
        {.addr=0xb5bf, .value=0xeb, .type=IO_READ},
        {.addr=0xb5c0, .value=0x8c, .type=IO_READ},
        {.addr=0x008c, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_004D) {
    const struct CPU_State initial_cpu = {.pc=0x45c4, .a=0x33, .x=0xdf, .y=0xbd, .sp=0x7a, .status=0x7b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0118, .value=0x00}, {.addr=0x45c4, .value=0xeb}, {.addr=0x45c5, .value=0x18},
    };
    const struct CPU_State final_cpu = {.pc=0x45c6, .a=0x33, .x=0xdf, .y=0x00, .sp=0x7a, .status=0x7b};
    const struct RamEntry final_ram[] = {
        {.addr=0x0118, .value=0x00}, {.addr=0x45c4, .value=0xeb}, {.addr=0x45c5, .value=0x18},
    };
    const struct BusEvent events[] = {
        {.addr=0x45c4, .value=0xeb, .type=IO_READ},
        {.addr=0x45c5, .value=0x18, .type=IO_READ},
        {.addr=0x0118, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_004E) {
    const struct CPU_State initial_cpu = {.pc=0xfc37, .a=0xca, .x=0xd0, .y=0x41, .sp=0x30, .status=0x35};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011e, .value=0x80}, {.addr=0xfc37, .value=0xeb}, {.addr=0xfc38, .value=0x1e},
    };
    const struct CPU_State final_cpu = {.pc=0xfc39, .a=0xca, .x=0xd0, .y=0x80, .sp=0x30, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x011e, .value=0x80}, {.addr=0xfc37, .value=0xeb}, {.addr=0xfc38, .value=0x1e},
    };
    const struct BusEvent events[] = {
        {.addr=0xfc37, .value=0xeb, .type=IO_READ},
        {.addr=0xfc38, .value=0x1e, .type=IO_READ},
        {.addr=0x011e, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_004F) {
    const struct CPU_State initial_cpu = {.pc=0x5c4c, .a=0x8d, .x=0x5c, .y=0xdd, .sp=0x4a, .status=0x65};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cf, .value=0x28}, {.addr=0x5c4c, .value=0xeb}, {.addr=0x5c4d, .value=0xcf},
    };
    const struct CPU_State final_cpu = {.pc=0x5c4e, .a=0x8d, .x=0x5c, .y=0x28, .sp=0x4a, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cf, .value=0x28}, {.addr=0x5c4c, .value=0xeb}, {.addr=0x5c4d, .value=0xcf},
    };
    const struct BusEvent events[] = {
        {.addr=0x5c4c, .value=0xeb, .type=IO_READ},
        {.addr=0x5c4d, .value=0xcf, .type=IO_READ},
        {.addr=0x01cf, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0050) {
    const struct CPU_State initial_cpu = {.pc=0x8d37, .a=0x95, .x=0x72, .y=0x8b, .sp=0xa9, .status=0x79};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0161, .value=0xfd}, {.addr=0x8d37, .value=0xeb}, {.addr=0x8d38, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0x8d39, .a=0x95, .x=0x72, .y=0xfd, .sp=0xa9, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0161, .value=0xfd}, {.addr=0x8d37, .value=0xeb}, {.addr=0x8d38, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0x8d37, .value=0xeb, .type=IO_READ},
        {.addr=0x8d38, .value=0x61, .type=IO_READ},
        {.addr=0x0161, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0051) {
    const struct CPU_State initial_cpu = {.pc=0x6a35, .a=0xb9, .x=0xd2, .y=0xd9, .sp=0x37, .status=0x26};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b0, .value=0x2a}, {.addr=0x6a35, .value=0xeb}, {.addr=0x6a36, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0x6a37, .a=0xb9, .x=0xd2, .y=0x2a, .sp=0x37, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b0, .value=0x2a}, {.addr=0x6a35, .value=0xeb}, {.addr=0x6a36, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0x6a35, .value=0xeb, .type=IO_READ},
        {.addr=0x6a36, .value=0xb0, .type=IO_READ},
        {.addr=0x01b0, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0052) {
    const struct CPU_State initial_cpu = {.pc=0x8350, .a=0x94, .x=0x6a, .y=0x29, .sp=0xf6, .status=0xf8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0153, .value=0xd9}, {.addr=0x8350, .value=0xeb}, {.addr=0x8351, .value=0x53},
    };
    const struct CPU_State final_cpu = {.pc=0x8352, .a=0x94, .x=0x6a, .y=0xd9, .sp=0xf6, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0153, .value=0xd9}, {.addr=0x8350, .value=0xeb}, {.addr=0x8351, .value=0x53},
    };
    const struct BusEvent events[] = {
        {.addr=0x8350, .value=0xeb, .type=IO_READ},
        {.addr=0x8351, .value=0x53, .type=IO_READ},
        {.addr=0x0153, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0053) {
    const struct CPU_State initial_cpu = {.pc=0x756e, .a=0xf3, .x=0xbd, .y=0xaa, .sp=0x8d, .status=0xde};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00dc, .value=0xcb}, {.addr=0x756e, .value=0xeb}, {.addr=0x756f, .value=0xdc},
    };
    const struct CPU_State final_cpu = {.pc=0x7570, .a=0xf3, .x=0xbd, .y=0xcb, .sp=0x8d, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00dc, .value=0xcb}, {.addr=0x756e, .value=0xeb}, {.addr=0x756f, .value=0xdc},
    };
    const struct BusEvent events[] = {
        {.addr=0x756e, .value=0xeb, .type=IO_READ},
        {.addr=0x756f, .value=0xdc, .type=IO_READ},
        {.addr=0x00dc, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0054) {
    const struct CPU_State initial_cpu = {.pc=0x113b, .a=0x93, .x=0x81, .y=0xfb, .sp=0xd1, .status=0x44};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d9, .value=0xd3}, {.addr=0x113b, .value=0xeb}, {.addr=0x113c, .value=0xd9},
    };
    const struct CPU_State final_cpu = {.pc=0x113d, .a=0x93, .x=0x81, .y=0xd3, .sp=0xd1, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d9, .value=0xd3}, {.addr=0x113b, .value=0xeb}, {.addr=0x113c, .value=0xd9},
    };
    const struct BusEvent events[] = {
        {.addr=0x113b, .value=0xeb, .type=IO_READ},
        {.addr=0x113c, .value=0xd9, .type=IO_READ},
        {.addr=0x00d9, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0055) {
    const struct CPU_State initial_cpu = {.pc=0xb0d9, .a=0x1c, .x=0x0a, .y=0xe4, .sp=0x40, .status=0xa2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017c, .value=0xa3}, {.addr=0xb0d9, .value=0xeb}, {.addr=0xb0da, .value=0x7c},
    };
    const struct CPU_State final_cpu = {.pc=0xb0db, .a=0x1c, .x=0x0a, .y=0xa3, .sp=0x40, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x017c, .value=0xa3}, {.addr=0xb0d9, .value=0xeb}, {.addr=0xb0da, .value=0x7c},
    };
    const struct BusEvent events[] = {
        {.addr=0xb0d9, .value=0xeb, .type=IO_READ},
        {.addr=0xb0da, .value=0x7c, .type=IO_READ},
        {.addr=0x017c, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0056) {
    const struct CPU_State initial_cpu = {.pc=0x5fb4, .a=0x85, .x=0xa5, .y=0xe9, .sp=0x7d, .status=0xec};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019c, .value=0xc7}, {.addr=0x5fb4, .value=0xeb}, {.addr=0x5fb5, .value=0x9c},
    };
    const struct CPU_State final_cpu = {.pc=0x5fb6, .a=0x85, .x=0xa5, .y=0xc7, .sp=0x7d, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x019c, .value=0xc7}, {.addr=0x5fb4, .value=0xeb}, {.addr=0x5fb5, .value=0x9c},
    };
    const struct BusEvent events[] = {
        {.addr=0x5fb4, .value=0xeb, .type=IO_READ},
        {.addr=0x5fb5, .value=0x9c, .type=IO_READ},
        {.addr=0x019c, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0057) {
    const struct CPU_State initial_cpu = {.pc=0x4580, .a=0x7a, .x=0xf1, .y=0x40, .sp=0xc5, .status=0xdd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0007, .value=0x6b}, {.addr=0x4580, .value=0xeb}, {.addr=0x4581, .value=0x07},
    };
    const struct CPU_State final_cpu = {.pc=0x4582, .a=0x7a, .x=0xf1, .y=0x6b, .sp=0xc5, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0007, .value=0x6b}, {.addr=0x4580, .value=0xeb}, {.addr=0x4581, .value=0x07},
    };
    const struct BusEvent events[] = {
        {.addr=0x4580, .value=0xeb, .type=IO_READ},
        {.addr=0x4581, .value=0x07, .type=IO_READ},
        {.addr=0x0007, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0059) {
    const struct CPU_State initial_cpu = {.pc=0x50a9, .a=0x0f, .x=0x8f, .y=0xc4, .sp=0xa8, .status=0xb7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a7, .value=0xd0}, {.addr=0x50a9, .value=0xeb}, {.addr=0x50aa, .value=0xa7},
    };
    const struct CPU_State final_cpu = {.pc=0x50ab, .a=0x0f, .x=0x8f, .y=0xd0, .sp=0xa8, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a7, .value=0xd0}, {.addr=0x50a9, .value=0xeb}, {.addr=0x50aa, .value=0xa7},
    };
    const struct BusEvent events[] = {
        {.addr=0x50a9, .value=0xeb, .type=IO_READ},
        {.addr=0x50aa, .value=0xa7, .type=IO_READ},
        {.addr=0x01a7, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_005A) {
    const struct CPU_State initial_cpu = {.pc=0x467e, .a=0x5a, .x=0x76, .y=0x15, .sp=0x5c, .status=0x9e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0051, .value=0xc5}, {.addr=0x467e, .value=0xeb}, {.addr=0x467f, .value=0x51},
    };
    const struct CPU_State final_cpu = {.pc=0x4680, .a=0x5a, .x=0x76, .y=0xc5, .sp=0x5c, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0051, .value=0xc5}, {.addr=0x467e, .value=0xeb}, {.addr=0x467f, .value=0x51},
    };
    const struct BusEvent events[] = {
        {.addr=0x467e, .value=0xeb, .type=IO_READ},
        {.addr=0x467f, .value=0x51, .type=IO_READ},
        {.addr=0x0051, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_005B) {
    const struct CPU_State initial_cpu = {.pc=0x24c1, .a=0xd2, .x=0x93, .y=0x80, .sp=0x2a, .status=0x79};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a7, .value=0xb7}, {.addr=0x24c1, .value=0xeb}, {.addr=0x24c2, .value=0xa7},
    };
    const struct CPU_State final_cpu = {.pc=0x24c3, .a=0xd2, .x=0x93, .y=0xb7, .sp=0x2a, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a7, .value=0xb7}, {.addr=0x24c1, .value=0xeb}, {.addr=0x24c2, .value=0xa7},
    };
    const struct BusEvent events[] = {
        {.addr=0x24c1, .value=0xeb, .type=IO_READ},
        {.addr=0x24c2, .value=0xa7, .type=IO_READ},
        {.addr=0x01a7, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_005C) {
    const struct CPU_State initial_cpu = {.pc=0x434c, .a=0x12, .x=0x54, .y=0x79, .sp=0x72, .status=0x7b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0164, .value=0xa3}, {.addr=0x434c, .value=0xeb}, {.addr=0x434d, .value=0x64},
    };
    const struct CPU_State final_cpu = {.pc=0x434e, .a=0x12, .x=0x54, .y=0xa3, .sp=0x72, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0164, .value=0xa3}, {.addr=0x434c, .value=0xeb}, {.addr=0x434d, .value=0x64},
    };
    const struct BusEvent events[] = {
        {.addr=0x434c, .value=0xeb, .type=IO_READ},
        {.addr=0x434d, .value=0x64, .type=IO_READ},
        {.addr=0x0164, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_005D) {
    const struct CPU_State initial_cpu = {.pc=0x7a6e, .a=0x17, .x=0xf7, .y=0x1b, .sp=0x7a, .status=0xbf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013a, .value=0x25}, {.addr=0x7a6e, .value=0xeb}, {.addr=0x7a6f, .value=0x3a},
    };
    const struct CPU_State final_cpu = {.pc=0x7a70, .a=0x17, .x=0xf7, .y=0x25, .sp=0x7a, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x013a, .value=0x25}, {.addr=0x7a6e, .value=0xeb}, {.addr=0x7a6f, .value=0x3a},
    };
    const struct BusEvent events[] = {
        {.addr=0x7a6e, .value=0xeb, .type=IO_READ},
        {.addr=0x7a6f, .value=0x3a, .type=IO_READ},
        {.addr=0x013a, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_005E) {
    const struct CPU_State initial_cpu = {.pc=0x07f0, .a=0xe4, .x=0x05, .y=0x4d, .sp=0x15, .status=0xe9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011b, .value=0xf3}, {.addr=0x07f0, .value=0xeb}, {.addr=0x07f1, .value=0x1b},
    };
    const struct CPU_State final_cpu = {.pc=0x07f2, .a=0xe4, .x=0x05, .y=0xf3, .sp=0x15, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x011b, .value=0xf3}, {.addr=0x07f0, .value=0xeb}, {.addr=0x07f1, .value=0x1b},
    };
    const struct BusEvent events[] = {
        {.addr=0x07f0, .value=0xeb, .type=IO_READ},
        {.addr=0x07f1, .value=0x1b, .type=IO_READ},
        {.addr=0x011b, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_005F) {
    const struct CPU_State initial_cpu = {.pc=0x785b, .a=0x41, .x=0x85, .y=0x82, .sp=0x76, .status=0x9a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002f, .value=0xfb}, {.addr=0x785b, .value=0xeb}, {.addr=0x785c, .value=0x2f},
    };
    const struct CPU_State final_cpu = {.pc=0x785d, .a=0x41, .x=0x85, .y=0xfb, .sp=0x76, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x002f, .value=0xfb}, {.addr=0x785b, .value=0xeb}, {.addr=0x785c, .value=0x2f},
    };
    const struct BusEvent events[] = {
        {.addr=0x785b, .value=0xeb, .type=IO_READ},
        {.addr=0x785c, .value=0x2f, .type=IO_READ},
        {.addr=0x002f, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0060) {
    const struct CPU_State initial_cpu = {.pc=0xb185, .a=0x16, .x=0x8f, .y=0xc9, .sp=0xc6, .status=0x84};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ef, .value=0x43}, {.addr=0xb185, .value=0xeb}, {.addr=0xb186, .value=0xef},
    };
    const struct CPU_State final_cpu = {.pc=0xb187, .a=0x16, .x=0x8f, .y=0x43, .sp=0xc6, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ef, .value=0x43}, {.addr=0xb185, .value=0xeb}, {.addr=0xb186, .value=0xef},
    };
    const struct BusEvent events[] = {
        {.addr=0xb185, .value=0xeb, .type=IO_READ},
        {.addr=0xb186, .value=0xef, .type=IO_READ},
        {.addr=0x00ef, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0061) {
    const struct CPU_State initial_cpu = {.pc=0x3288, .a=0x93, .x=0x5e, .y=0x7e, .sp=0x3a, .status=0x8d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0032, .value=0xd9}, {.addr=0x3288, .value=0xeb}, {.addr=0x3289, .value=0x32},
    };
    const struct CPU_State final_cpu = {.pc=0x328a, .a=0x93, .x=0x5e, .y=0xd9, .sp=0x3a, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0032, .value=0xd9}, {.addr=0x3288, .value=0xeb}, {.addr=0x3289, .value=0x32},
    };
    const struct BusEvent events[] = {
        {.addr=0x3288, .value=0xeb, .type=IO_READ},
        {.addr=0x3289, .value=0x32, .type=IO_READ},
        {.addr=0x0032, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0062) {
    const struct CPU_State initial_cpu = {.pc=0x9373, .a=0x6a, .x=0x23, .y=0x15, .sp=0xd0, .status=0xc0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0033, .value=0xfd}, {.addr=0x9373, .value=0xeb}, {.addr=0x9374, .value=0x33},
    };
    const struct CPU_State final_cpu = {.pc=0x9375, .a=0x6a, .x=0x23, .y=0xfd, .sp=0xd0, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0033, .value=0xfd}, {.addr=0x9373, .value=0xeb}, {.addr=0x9374, .value=0x33},
    };
    const struct BusEvent events[] = {
        {.addr=0x9373, .value=0xeb, .type=IO_READ},
        {.addr=0x9374, .value=0x33, .type=IO_READ},
        {.addr=0x0033, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0063) {
    const struct CPU_State initial_cpu = {.pc=0x542f, .a=0x18, .x=0x83, .y=0x03, .sp=0x12, .status=0xf3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b0, .value=0xd1}, {.addr=0x542f, .value=0xeb}, {.addr=0x5430, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0x5431, .a=0x18, .x=0x83, .y=0xd1, .sp=0x12, .status=0xf1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b0, .value=0xd1}, {.addr=0x542f, .value=0xeb}, {.addr=0x5430, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0x542f, .value=0xeb, .type=IO_READ},
        {.addr=0x5430, .value=0xb0, .type=IO_READ},
        {.addr=0x01b0, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0064) {
    const struct CPU_State initial_cpu = {.pc=0xfeb4, .a=0xb4, .x=0x98, .y=0x83, .sp=0x13, .status=0x67};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0124, .value=0xa8}, {.addr=0xfeb4, .value=0xeb}, {.addr=0xfeb5, .value=0x24},
    };
    const struct CPU_State final_cpu = {.pc=0xfeb6, .a=0xb4, .x=0x98, .y=0xa8, .sp=0x13, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0124, .value=0xa8}, {.addr=0xfeb4, .value=0xeb}, {.addr=0xfeb5, .value=0x24},
    };
    const struct BusEvent events[] = {
        {.addr=0xfeb4, .value=0xeb, .type=IO_READ},
        {.addr=0xfeb5, .value=0x24, .type=IO_READ},
        {.addr=0x0124, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0065) {
    const struct CPU_State initial_cpu = {.pc=0xfc57, .a=0xc5, .x=0x2a, .y=0x3a, .sp=0x4c, .status=0x40};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008f, .value=0xd1}, {.addr=0xfc57, .value=0xeb}, {.addr=0xfc58, .value=0x8f},
    };
    const struct CPU_State final_cpu = {.pc=0xfc59, .a=0xc5, .x=0x2a, .y=0xd1, .sp=0x4c, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x008f, .value=0xd1}, {.addr=0xfc57, .value=0xeb}, {.addr=0xfc58, .value=0x8f},
    };
    const struct BusEvent events[] = {
        {.addr=0xfc57, .value=0xeb, .type=IO_READ},
        {.addr=0xfc58, .value=0x8f, .type=IO_READ},
        {.addr=0x008f, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0066) {
    const struct CPU_State initial_cpu = {.pc=0x07fb, .a=0xc7, .x=0xb9, .y=0xf3, .sp=0xb6, .status=0xa0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017a, .value=0x87}, {.addr=0x07fb, .value=0xeb}, {.addr=0x07fc, .value=0x7a},
    };
    const struct CPU_State final_cpu = {.pc=0x07fd, .a=0xc7, .x=0xb9, .y=0x87, .sp=0xb6, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x017a, .value=0x87}, {.addr=0x07fb, .value=0xeb}, {.addr=0x07fc, .value=0x7a},
    };
    const struct BusEvent events[] = {
        {.addr=0x07fb, .value=0xeb, .type=IO_READ},
        {.addr=0x07fc, .value=0x7a, .type=IO_READ},
        {.addr=0x017a, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0067) {
    const struct CPU_State initial_cpu = {.pc=0xd5c8, .a=0xe2, .x=0xfc, .y=0xd2, .sp=0x54, .status=0x63};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e7, .value=0x46}, {.addr=0xd5c8, .value=0xeb}, {.addr=0xd5c9, .value=0xe7},
    };
    const struct CPU_State final_cpu = {.pc=0xd5ca, .a=0xe2, .x=0xfc, .y=0x46, .sp=0x54, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e7, .value=0x46}, {.addr=0xd5c8, .value=0xeb}, {.addr=0xd5c9, .value=0xe7},
    };
    const struct BusEvent events[] = {
        {.addr=0xd5c8, .value=0xeb, .type=IO_READ},
        {.addr=0xd5c9, .value=0xe7, .type=IO_READ},
        {.addr=0x01e7, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0068) {
    const struct CPU_State initial_cpu = {.pc=0x30d2, .a=0xfb, .x=0x22, .y=0x88, .sp=0xef, .status=0x5f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a2, .value=0x58}, {.addr=0x30d2, .value=0xeb}, {.addr=0x30d3, .value=0xa2},
    };
    const struct CPU_State final_cpu = {.pc=0x30d4, .a=0xfb, .x=0x22, .y=0x58, .sp=0xef, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a2, .value=0x58}, {.addr=0x30d2, .value=0xeb}, {.addr=0x30d3, .value=0xa2},
    };
    const struct BusEvent events[] = {
        {.addr=0x30d2, .value=0xeb, .type=IO_READ},
        {.addr=0x30d3, .value=0xa2, .type=IO_READ},
        {.addr=0x00a2, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0069) {
    const struct CPU_State initial_cpu = {.pc=0x7910, .a=0x79, .x=0x69, .y=0xdd, .sp=0x68, .status=0x6f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ad, .value=0xc2}, {.addr=0x7910, .value=0xeb}, {.addr=0x7911, .value=0xad},
    };
    const struct CPU_State final_cpu = {.pc=0x7912, .a=0x79, .x=0x69, .y=0xc2, .sp=0x68, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ad, .value=0xc2}, {.addr=0x7910, .value=0xeb}, {.addr=0x7911, .value=0xad},
    };
    const struct BusEvent events[] = {
        {.addr=0x7910, .value=0xeb, .type=IO_READ},
        {.addr=0x7911, .value=0xad, .type=IO_READ},
        {.addr=0x01ad, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_006A) {
    const struct CPU_State initial_cpu = {.pc=0x2eea, .a=0xfe, .x=0x44, .y=0x4a, .sp=0x51, .status=0x41};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cc, .value=0xd3}, {.addr=0x2eea, .value=0xeb}, {.addr=0x2eeb, .value=0xcc},
    };
    const struct CPU_State final_cpu = {.pc=0x2eec, .a=0xfe, .x=0x44, .y=0xd3, .sp=0x51, .status=0xc1};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cc, .value=0xd3}, {.addr=0x2eea, .value=0xeb}, {.addr=0x2eeb, .value=0xcc},
    };
    const struct BusEvent events[] = {
        {.addr=0x2eea, .value=0xeb, .type=IO_READ},
        {.addr=0x2eeb, .value=0xcc, .type=IO_READ},
        {.addr=0x00cc, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_006B) {
    const struct CPU_State initial_cpu = {.pc=0x3337, .a=0x6f, .x=0xff, .y=0xf9, .sp=0x54, .status=0x4f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009b, .value=0xa6}, {.addr=0x3337, .value=0xeb}, {.addr=0x3338, .value=0x9b},
    };
    const struct CPU_State final_cpu = {.pc=0x3339, .a=0x6f, .x=0xff, .y=0xa6, .sp=0x54, .status=0xcd};
    const struct RamEntry final_ram[] = {
        {.addr=0x009b, .value=0xa6}, {.addr=0x3337, .value=0xeb}, {.addr=0x3338, .value=0x9b},
    };
    const struct BusEvent events[] = {
        {.addr=0x3337, .value=0xeb, .type=IO_READ},
        {.addr=0x3338, .value=0x9b, .type=IO_READ},
        {.addr=0x009b, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_006C) {
    const struct CPU_State initial_cpu = {.pc=0xc057, .a=0x5b, .x=0x92, .y=0xd1, .sp=0x8f, .status=0xd1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009a, .value=0xc4}, {.addr=0xc057, .value=0xeb}, {.addr=0xc058, .value=0x9a},
    };
    const struct CPU_State final_cpu = {.pc=0xc059, .a=0x5b, .x=0x92, .y=0xc4, .sp=0x8f, .status=0xd1};
    const struct RamEntry final_ram[] = {
        {.addr=0x009a, .value=0xc4}, {.addr=0xc057, .value=0xeb}, {.addr=0xc058, .value=0x9a},
    };
    const struct BusEvent events[] = {
        {.addr=0xc057, .value=0xeb, .type=IO_READ},
        {.addr=0xc058, .value=0x9a, .type=IO_READ},
        {.addr=0x009a, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_006D) {
    const struct CPU_State initial_cpu = {.pc=0xfc5c, .a=0x1c, .x=0x11, .y=0x64, .sp=0xcb, .status=0x34};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0167, .value=0xfc}, {.addr=0xfc5c, .value=0xeb}, {.addr=0xfc5d, .value=0x67},
    };
    const struct CPU_State final_cpu = {.pc=0xfc5e, .a=0x1c, .x=0x11, .y=0xfc, .sp=0xcb, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0167, .value=0xfc}, {.addr=0xfc5c, .value=0xeb}, {.addr=0xfc5d, .value=0x67},
    };
    const struct BusEvent events[] = {
        {.addr=0xfc5c, .value=0xeb, .type=IO_READ},
        {.addr=0xfc5d, .value=0x67, .type=IO_READ},
        {.addr=0x0167, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_006E) {
    const struct CPU_State initial_cpu = {.pc=0x25f6, .a=0x30, .x=0x9f, .y=0xbd, .sp=0xff, .status=0xa4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0198, .value=0x7f}, {.addr=0x25f6, .value=0xeb}, {.addr=0x25f7, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0x25f8, .a=0x30, .x=0x9f, .y=0x7f, .sp=0xff, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x0198, .value=0x7f}, {.addr=0x25f6, .value=0xeb}, {.addr=0x25f7, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0x25f6, .value=0xeb, .type=IO_READ},
        {.addr=0x25f7, .value=0x98, .type=IO_READ},
        {.addr=0x0198, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_006F) {
    const struct CPU_State initial_cpu = {.pc=0xb48b, .a=0x24, .x=0xe5, .y=0xd6, .sp=0x60, .status=0xc3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008e, .value=0x6a}, {.addr=0xb48b, .value=0xeb}, {.addr=0xb48c, .value=0x8e},
    };
    const struct CPU_State final_cpu = {.pc=0xb48d, .a=0x24, .x=0xe5, .y=0x6a, .sp=0x60, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x008e, .value=0x6a}, {.addr=0xb48b, .value=0xeb}, {.addr=0xb48c, .value=0x8e},
    };
    const struct BusEvent events[] = {
        {.addr=0xb48b, .value=0xeb, .type=IO_READ},
        {.addr=0xb48c, .value=0x8e, .type=IO_READ},
        {.addr=0x008e, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0070) {
    const struct CPU_State initial_cpu = {.pc=0x5325, .a=0x30, .x=0x55, .y=0x38, .sp=0xc5, .status=0x47};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004c, .value=0x51}, {.addr=0x5325, .value=0xeb}, {.addr=0x5326, .value=0x4c},
    };
    const struct CPU_State final_cpu = {.pc=0x5327, .a=0x30, .x=0x55, .y=0x51, .sp=0xc5, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x004c, .value=0x51}, {.addr=0x5325, .value=0xeb}, {.addr=0x5326, .value=0x4c},
    };
    const struct BusEvent events[] = {
        {.addr=0x5325, .value=0xeb, .type=IO_READ},
        {.addr=0x5326, .value=0x4c, .type=IO_READ},
        {.addr=0x004c, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0071) {
    const struct CPU_State initial_cpu = {.pc=0xf935, .a=0xb5, .x=0x59, .y=0x3c, .sp=0x28, .status=0x7a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0122, .value=0x9a}, {.addr=0xf935, .value=0xeb}, {.addr=0xf936, .value=0x22},
    };
    const struct CPU_State final_cpu = {.pc=0xf937, .a=0xb5, .x=0x59, .y=0x9a, .sp=0x28, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0122, .value=0x9a}, {.addr=0xf935, .value=0xeb}, {.addr=0xf936, .value=0x22},
    };
    const struct BusEvent events[] = {
        {.addr=0xf935, .value=0xeb, .type=IO_READ},
        {.addr=0xf936, .value=0x22, .type=IO_READ},
        {.addr=0x0122, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0072) {
    const struct CPU_State initial_cpu = {.pc=0x630e, .a=0x8e, .x=0x57, .y=0xfb, .sp=0xc7, .status=0xd3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ab, .value=0xa9}, {.addr=0x630e, .value=0xeb}, {.addr=0x630f, .value=0xab},
    };
    const struct CPU_State final_cpu = {.pc=0x6310, .a=0x8e, .x=0x57, .y=0xa9, .sp=0xc7, .status=0xd1};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ab, .value=0xa9}, {.addr=0x630e, .value=0xeb}, {.addr=0x630f, .value=0xab},
    };
    const struct BusEvent events[] = {
        {.addr=0x630e, .value=0xeb, .type=IO_READ},
        {.addr=0x630f, .value=0xab, .type=IO_READ},
        {.addr=0x00ab, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0073) {
    const struct CPU_State initial_cpu = {.pc=0x7010, .a=0xe0, .x=0x85, .y=0x5e, .sp=0x6e, .status=0x07};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0010, .value=0x4f}, {.addr=0x7010, .value=0xeb}, {.addr=0x7011, .value=0x10},
    };
    const struct CPU_State final_cpu = {.pc=0x7012, .a=0xe0, .x=0x85, .y=0x4f, .sp=0x6e, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x0010, .value=0x4f}, {.addr=0x7010, .value=0xeb}, {.addr=0x7011, .value=0x10},
    };
    const struct BusEvent events[] = {
        {.addr=0x7010, .value=0xeb, .type=IO_READ},
        {.addr=0x7011, .value=0x10, .type=IO_READ},
        {.addr=0x0010, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0075) {
    const struct CPU_State initial_cpu = {.pc=0xf49b, .a=0x53, .x=0xe9, .y=0x18, .sp=0x93, .status=0xeb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0146, .value=0xfe}, {.addr=0xf49b, .value=0xeb}, {.addr=0xf49c, .value=0x46},
    };
    const struct CPU_State final_cpu = {.pc=0xf49d, .a=0x53, .x=0xe9, .y=0xfe, .sp=0x93, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0146, .value=0xfe}, {.addr=0xf49b, .value=0xeb}, {.addr=0xf49c, .value=0x46},
    };
    const struct BusEvent events[] = {
        {.addr=0xf49b, .value=0xeb, .type=IO_READ},
        {.addr=0xf49c, .value=0x46, .type=IO_READ},
        {.addr=0x0146, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0076) {
    const struct CPU_State initial_cpu = {.pc=0x81ae, .a=0x11, .x=0xa2, .y=0x83, .sp=0x78, .status=0x37};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01da, .value=0xb7}, {.addr=0x81ae, .value=0xeb}, {.addr=0x81af, .value=0xda},
    };
    const struct CPU_State final_cpu = {.pc=0x81b0, .a=0x11, .x=0xa2, .y=0xb7, .sp=0x78, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01da, .value=0xb7}, {.addr=0x81ae, .value=0xeb}, {.addr=0x81af, .value=0xda},
    };
    const struct BusEvent events[] = {
        {.addr=0x81ae, .value=0xeb, .type=IO_READ},
        {.addr=0x81af, .value=0xda, .type=IO_READ},
        {.addr=0x01da, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0077) {
    const struct CPU_State initial_cpu = {.pc=0x0dae, .a=0x59, .x=0x46, .y=0x5e, .sp=0x40, .status=0xfb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013b, .value=0xf8}, {.addr=0x0dae, .value=0xeb}, {.addr=0x0daf, .value=0x3b},
    };
    const struct CPU_State final_cpu = {.pc=0x0db0, .a=0x59, .x=0x46, .y=0xf8, .sp=0x40, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x013b, .value=0xf8}, {.addr=0x0dae, .value=0xeb}, {.addr=0x0daf, .value=0x3b},
    };
    const struct BusEvent events[] = {
        {.addr=0x0dae, .value=0xeb, .type=IO_READ},
        {.addr=0x0daf, .value=0x3b, .type=IO_READ},
        {.addr=0x013b, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0078) {
    const struct CPU_State initial_cpu = {.pc=0x3a72, .a=0xd6, .x=0x18, .y=0x02, .sp=0x9a, .status=0x64};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011e, .value=0xe3}, {.addr=0x3a72, .value=0xeb}, {.addr=0x3a73, .value=0x1e},
    };
    const struct CPU_State final_cpu = {.pc=0x3a74, .a=0xd6, .x=0x18, .y=0xe3, .sp=0x9a, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x011e, .value=0xe3}, {.addr=0x3a72, .value=0xeb}, {.addr=0x3a73, .value=0x1e},
    };
    const struct BusEvent events[] = {
        {.addr=0x3a72, .value=0xeb, .type=IO_READ},
        {.addr=0x3a73, .value=0x1e, .type=IO_READ},
        {.addr=0x011e, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0079) {
    const struct CPU_State initial_cpu = {.pc=0x384c, .a=0x48, .x=0xbf, .y=0x04, .sp=0x9c, .status=0x8a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a7, .value=0x51}, {.addr=0x384c, .value=0xeb}, {.addr=0x384d, .value=0xa7},
    };
    const struct CPU_State final_cpu = {.pc=0x384e, .a=0x48, .x=0xbf, .y=0x51, .sp=0x9c, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a7, .value=0x51}, {.addr=0x384c, .value=0xeb}, {.addr=0x384d, .value=0xa7},
    };
    const struct BusEvent events[] = {
        {.addr=0x384c, .value=0xeb, .type=IO_READ},
        {.addr=0x384d, .value=0xa7, .type=IO_READ},
        {.addr=0x00a7, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_007A) {
    const struct CPU_State initial_cpu = {.pc=0xa5b1, .a=0x9f, .x=0x99, .y=0xf2, .sp=0x68, .status=0xfe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01da, .value=0x52}, {.addr=0xa5b1, .value=0xeb}, {.addr=0xa5b2, .value=0xda},
    };
    const struct CPU_State final_cpu = {.pc=0xa5b3, .a=0x9f, .x=0x99, .y=0x52, .sp=0x68, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01da, .value=0x52}, {.addr=0xa5b1, .value=0xeb}, {.addr=0xa5b2, .value=0xda},
    };
    const struct BusEvent events[] = {
        {.addr=0xa5b1, .value=0xeb, .type=IO_READ},
        {.addr=0xa5b2, .value=0xda, .type=IO_READ},
        {.addr=0x01da, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_007B) {
    const struct CPU_State initial_cpu = {.pc=0x1160, .a=0x1b, .x=0x89, .y=0xa2, .sp=0xaf, .status=0xe6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a7, .value=0x95}, {.addr=0x1160, .value=0xeb}, {.addr=0x1161, .value=0xa7},
    };
    const struct CPU_State final_cpu = {.pc=0x1162, .a=0x1b, .x=0x89, .y=0x95, .sp=0xaf, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a7, .value=0x95}, {.addr=0x1160, .value=0xeb}, {.addr=0x1161, .value=0xa7},
    };
    const struct BusEvent events[] = {
        {.addr=0x1160, .value=0xeb, .type=IO_READ},
        {.addr=0x1161, .value=0xa7, .type=IO_READ},
        {.addr=0x01a7, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_007C) {
    const struct CPU_State initial_cpu = {.pc=0x503d, .a=0x42, .x=0xa2, .y=0xf0, .sp=0x16, .status=0xab};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c2, .value=0x92}, {.addr=0x503d, .value=0xeb}, {.addr=0x503e, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0x503f, .a=0x42, .x=0xa2, .y=0x92, .sp=0x16, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c2, .value=0x92}, {.addr=0x503d, .value=0xeb}, {.addr=0x503e, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0x503d, .value=0xeb, .type=IO_READ},
        {.addr=0x503e, .value=0xc2, .type=IO_READ},
        {.addr=0x01c2, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_007D) {
    const struct CPU_State initial_cpu = {.pc=0x58b0, .a=0x7a, .x=0x80, .y=0x5a, .sp=0x4c, .status=0x9e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0055, .value=0x92}, {.addr=0x58b0, .value=0xeb}, {.addr=0x58b1, .value=0x55},
    };
    const struct CPU_State final_cpu = {.pc=0x58b2, .a=0x7a, .x=0x80, .y=0x92, .sp=0x4c, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0055, .value=0x92}, {.addr=0x58b0, .value=0xeb}, {.addr=0x58b1, .value=0x55},
    };
    const struct BusEvent events[] = {
        {.addr=0x58b0, .value=0xeb, .type=IO_READ},
        {.addr=0x58b1, .value=0x55, .type=IO_READ},
        {.addr=0x0055, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_007E) {
    const struct CPU_State initial_cpu = {.pc=0x68f6, .a=0x76, .x=0x3e, .y=0x8f, .sp=0x22, .status=0x20};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016a, .value=0xde}, {.addr=0x68f6, .value=0xeb}, {.addr=0x68f7, .value=0x6a},
    };
    const struct CPU_State final_cpu = {.pc=0x68f8, .a=0x76, .x=0x3e, .y=0xde, .sp=0x22, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x016a, .value=0xde}, {.addr=0x68f6, .value=0xeb}, {.addr=0x68f7, .value=0x6a},
    };
    const struct BusEvent events[] = {
        {.addr=0x68f6, .value=0xeb, .type=IO_READ},
        {.addr=0x68f7, .value=0x6a, .type=IO_READ},
        {.addr=0x016a, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_007F) {
    const struct CPU_State initial_cpu = {.pc=0x158c, .a=0x51, .x=0x4f, .y=0xcc, .sp=0xc1, .status=0xa6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019c, .value=0x86}, {.addr=0x158c, .value=0xeb}, {.addr=0x158d, .value=0x9c},
    };
    const struct CPU_State final_cpu = {.pc=0x158e, .a=0x51, .x=0x4f, .y=0x86, .sp=0xc1, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x019c, .value=0x86}, {.addr=0x158c, .value=0xeb}, {.addr=0x158d, .value=0x9c},
    };
    const struct BusEvent events[] = {
        {.addr=0x158c, .value=0xeb, .type=IO_READ},
        {.addr=0x158d, .value=0x9c, .type=IO_READ},
        {.addr=0x019c, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0080) {
    const struct CPU_State initial_cpu = {.pc=0x041e, .a=0xd7, .x=0x30, .y=0xab, .sp=0x27, .status=0xf2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013f, .value=0x4c}, {.addr=0x041e, .value=0xeb}, {.addr=0x041f, .value=0x3f},
    };
    const struct CPU_State final_cpu = {.pc=0x0420, .a=0xd7, .x=0x30, .y=0x4c, .sp=0x27, .status=0x70};
    const struct RamEntry final_ram[] = {
        {.addr=0x013f, .value=0x4c}, {.addr=0x041e, .value=0xeb}, {.addr=0x041f, .value=0x3f},
    };
    const struct BusEvent events[] = {
        {.addr=0x041e, .value=0xeb, .type=IO_READ},
        {.addr=0x041f, .value=0x3f, .type=IO_READ},
        {.addr=0x013f, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0081) {
    const struct CPU_State initial_cpu = {.pc=0x1a1c, .a=0xd2, .x=0x8a, .y=0xfb, .sp=0x61, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01de, .value=0xe7}, {.addr=0x1a1c, .value=0xeb}, {.addr=0x1a1d, .value=0xde},
    };
    const struct CPU_State final_cpu = {.pc=0x1a1e, .a=0xd2, .x=0x8a, .y=0xe7, .sp=0x61, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01de, .value=0xe7}, {.addr=0x1a1c, .value=0xeb}, {.addr=0x1a1d, .value=0xde},
    };
    const struct BusEvent events[] = {
        {.addr=0x1a1c, .value=0xeb, .type=IO_READ},
        {.addr=0x1a1d, .value=0xde, .type=IO_READ},
        {.addr=0x01de, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0082) {
    const struct CPU_State initial_cpu = {.pc=0x63ed, .a=0x83, .x=0xd9, .y=0x42, .sp=0xa6, .status=0x02};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c5, .value=0xed}, {.addr=0x63ed, .value=0xeb}, {.addr=0x63ee, .value=0xc5},
    };
    const struct CPU_State final_cpu = {.pc=0x63ef, .a=0x83, .x=0xd9, .y=0xed, .sp=0xa6, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c5, .value=0xed}, {.addr=0x63ed, .value=0xeb}, {.addr=0x63ee, .value=0xc5},
    };
    const struct BusEvent events[] = {
        {.addr=0x63ed, .value=0xeb, .type=IO_READ},
        {.addr=0x63ee, .value=0xc5, .type=IO_READ},
        {.addr=0x00c5, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0083) {
    const struct CPU_State initial_cpu = {.pc=0xeca7, .a=0xe5, .x=0xeb, .y=0x71, .sp=0x34, .status=0x2c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0145, .value=0x19}, {.addr=0xeca7, .value=0xeb}, {.addr=0xeca8, .value=0x45},
    };
    const struct CPU_State final_cpu = {.pc=0xeca9, .a=0xe5, .x=0xeb, .y=0x19, .sp=0x34, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0145, .value=0x19}, {.addr=0xeca7, .value=0xeb}, {.addr=0xeca8, .value=0x45},
    };
    const struct BusEvent events[] = {
        {.addr=0xeca7, .value=0xeb, .type=IO_READ},
        {.addr=0xeca8, .value=0x45, .type=IO_READ},
        {.addr=0x0145, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0084) {
    const struct CPU_State initial_cpu = {.pc=0xd035, .a=0x73, .x=0x4c, .y=0x64, .sp=0x84, .status=0x53};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001a, .value=0x81}, {.addr=0xd035, .value=0xeb}, {.addr=0xd036, .value=0x1a},
    };
    const struct CPU_State final_cpu = {.pc=0xd037, .a=0x73, .x=0x4c, .y=0x81, .sp=0x84, .status=0xd1};
    const struct RamEntry final_ram[] = {
        {.addr=0x001a, .value=0x81}, {.addr=0xd035, .value=0xeb}, {.addr=0xd036, .value=0x1a},
    };
    const struct BusEvent events[] = {
        {.addr=0xd035, .value=0xeb, .type=IO_READ},
        {.addr=0xd036, .value=0x1a, .type=IO_READ},
        {.addr=0x001a, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0086) {
    const struct CPU_State initial_cpu = {.pc=0x4e4f, .a=0xbf, .x=0x84, .y=0x56, .sp=0x5b, .status=0xa1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fc, .value=0xad}, {.addr=0x4e4f, .value=0xeb}, {.addr=0x4e50, .value=0xfc},
    };
    const struct CPU_State final_cpu = {.pc=0x4e51, .a=0xbf, .x=0x84, .y=0xad, .sp=0x5b, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fc, .value=0xad}, {.addr=0x4e4f, .value=0xeb}, {.addr=0x4e50, .value=0xfc},
    };
    const struct BusEvent events[] = {
        {.addr=0x4e4f, .value=0xeb, .type=IO_READ},
        {.addr=0x4e50, .value=0xfc, .type=IO_READ},
        {.addr=0x01fc, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0087) {
    const struct CPU_State initial_cpu = {.pc=0xb6bb, .a=0x13, .x=0xf0, .y=0xab, .sp=0x6d, .status=0x64};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f8, .value=0x81}, {.addr=0xb6bb, .value=0xeb}, {.addr=0xb6bc, .value=0xf8},
    };
    const struct CPU_State final_cpu = {.pc=0xb6bd, .a=0x13, .x=0xf0, .y=0x81, .sp=0x6d, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f8, .value=0x81}, {.addr=0xb6bb, .value=0xeb}, {.addr=0xb6bc, .value=0xf8},
    };
    const struct BusEvent events[] = {
        {.addr=0xb6bb, .value=0xeb, .type=IO_READ},
        {.addr=0xb6bc, .value=0xf8, .type=IO_READ},
        {.addr=0x01f8, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0088) {
    const struct CPU_State initial_cpu = {.pc=0x1224, .a=0xce, .x=0xd2, .y=0x3a, .sp=0xea, .status=0x28};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011e, .value=0x4a}, {.addr=0x1224, .value=0xeb}, {.addr=0x1225, .value=0x1e},
    };
    const struct CPU_State final_cpu = {.pc=0x1226, .a=0xce, .x=0xd2, .y=0x4a, .sp=0xea, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x011e, .value=0x4a}, {.addr=0x1224, .value=0xeb}, {.addr=0x1225, .value=0x1e},
    };
    const struct BusEvent events[] = {
        {.addr=0x1224, .value=0xeb, .type=IO_READ},
        {.addr=0x1225, .value=0x1e, .type=IO_READ},
        {.addr=0x011e, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0089) {
    const struct CPU_State initial_cpu = {.pc=0x53ba, .a=0xbc, .x=0xfd, .y=0x01, .sp=0x19, .status=0xbd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017e, .value=0x23}, {.addr=0x53ba, .value=0xeb}, {.addr=0x53bb, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0x53bc, .a=0xbc, .x=0xfd, .y=0x23, .sp=0x19, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x017e, .value=0x23}, {.addr=0x53ba, .value=0xeb}, {.addr=0x53bb, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0x53ba, .value=0xeb, .type=IO_READ},
        {.addr=0x53bb, .value=0x7e, .type=IO_READ},
        {.addr=0x017e, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_008A) {
    const struct CPU_State initial_cpu = {.pc=0x813c, .a=0x5a, .x=0x2e, .y=0x3b, .sp=0x3a, .status=0x79};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a1, .value=0xc6}, {.addr=0x813c, .value=0xeb}, {.addr=0x813d, .value=0xa1},
    };
    const struct CPU_State final_cpu = {.pc=0x813e, .a=0x5a, .x=0x2e, .y=0xc6, .sp=0x3a, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a1, .value=0xc6}, {.addr=0x813c, .value=0xeb}, {.addr=0x813d, .value=0xa1},
    };
    const struct BusEvent events[] = {
        {.addr=0x813c, .value=0xeb, .type=IO_READ},
        {.addr=0x813d, .value=0xa1, .type=IO_READ},
        {.addr=0x01a1, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_008B) {
    const struct CPU_State initial_cpu = {.pc=0x6e92, .a=0xef, .x=0x94, .y=0x3e, .sp=0x06, .status=0xd8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0062, .value=0xb4}, {.addr=0x6e92, .value=0xeb}, {.addr=0x6e93, .value=0x62},
    };
    const struct CPU_State final_cpu = {.pc=0x6e94, .a=0xef, .x=0x94, .y=0xb4, .sp=0x06, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0062, .value=0xb4}, {.addr=0x6e92, .value=0xeb}, {.addr=0x6e93, .value=0x62},
    };
    const struct BusEvent events[] = {
        {.addr=0x6e92, .value=0xeb, .type=IO_READ},
        {.addr=0x6e93, .value=0x62, .type=IO_READ},
        {.addr=0x0062, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_008C) {
    const struct CPU_State initial_cpu = {.pc=0xf783, .a=0xd9, .x=0x76, .y=0xb7, .sp=0xbf, .status=0x27};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fd, .value=0xcf}, {.addr=0xf783, .value=0xeb}, {.addr=0xf784, .value=0xfd},
    };
    const struct CPU_State final_cpu = {.pc=0xf785, .a=0xd9, .x=0x76, .y=0xcf, .sp=0xbf, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fd, .value=0xcf}, {.addr=0xf783, .value=0xeb}, {.addr=0xf784, .value=0xfd},
    };
    const struct BusEvent events[] = {
        {.addr=0xf783, .value=0xeb, .type=IO_READ},
        {.addr=0xf784, .value=0xfd, .type=IO_READ},
        {.addr=0x01fd, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_008D) {
    const struct CPU_State initial_cpu = {.pc=0xc57f, .a=0xdb, .x=0xd2, .y=0x25, .sp=0x63, .status=0x48};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0043, .value=0x5c}, {.addr=0xc57f, .value=0xeb}, {.addr=0xc580, .value=0x43},
    };
    const struct CPU_State final_cpu = {.pc=0xc581, .a=0xdb, .x=0xd2, .y=0x5c, .sp=0x63, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x0043, .value=0x5c}, {.addr=0xc57f, .value=0xeb}, {.addr=0xc580, .value=0x43},
    };
    const struct BusEvent events[] = {
        {.addr=0xc57f, .value=0xeb, .type=IO_READ},
        {.addr=0xc580, .value=0x43, .type=IO_READ},
        {.addr=0x0043, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_008E) {
    const struct CPU_State initial_cpu = {.pc=0x7c2f, .a=0x2a, .x=0x39, .y=0x8f, .sp=0xc8, .status=0xa7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ae, .value=0x14}, {.addr=0x7c2f, .value=0xeb}, {.addr=0x7c30, .value=0xae},
    };
    const struct CPU_State final_cpu = {.pc=0x7c31, .a=0x2a, .x=0x39, .y=0x14, .sp=0xc8, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ae, .value=0x14}, {.addr=0x7c2f, .value=0xeb}, {.addr=0x7c30, .value=0xae},
    };
    const struct BusEvent events[] = {
        {.addr=0x7c2f, .value=0xeb, .type=IO_READ},
        {.addr=0x7c30, .value=0xae, .type=IO_READ},
        {.addr=0x01ae, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_008F) {
    const struct CPU_State initial_cpu = {.pc=0xf3ad, .a=0x80, .x=0xee, .y=0x2d, .sp=0xbe, .status=0x28};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010a, .value=0x66}, {.addr=0xf3ad, .value=0xeb}, {.addr=0xf3ae, .value=0x0a},
    };
    const struct CPU_State final_cpu = {.pc=0xf3af, .a=0x80, .x=0xee, .y=0x66, .sp=0xbe, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x010a, .value=0x66}, {.addr=0xf3ad, .value=0xeb}, {.addr=0xf3ae, .value=0x0a},
    };
    const struct BusEvent events[] = {
        {.addr=0xf3ad, .value=0xeb, .type=IO_READ},
        {.addr=0xf3ae, .value=0x0a, .type=IO_READ},
        {.addr=0x010a, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0090) {
    const struct CPU_State initial_cpu = {.pc=0xcc83, .a=0x44, .x=0xc2, .y=0x34, .sp=0x06, .status=0x56};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ba, .value=0x10}, {.addr=0xcc83, .value=0xeb}, {.addr=0xcc84, .value=0xba},
    };
    const struct CPU_State final_cpu = {.pc=0xcc85, .a=0x44, .x=0xc2, .y=0x10, .sp=0x06, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ba, .value=0x10}, {.addr=0xcc83, .value=0xeb}, {.addr=0xcc84, .value=0xba},
    };
    const struct BusEvent events[] = {
        {.addr=0xcc83, .value=0xeb, .type=IO_READ},
        {.addr=0xcc84, .value=0xba, .type=IO_READ},
        {.addr=0x00ba, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0091) {
    const struct CPU_State initial_cpu = {.pc=0x18af, .a=0x62, .x=0x13, .y=0x17, .sp=0x00, .status=0x2e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b3, .value=0xdb}, {.addr=0x18af, .value=0xeb}, {.addr=0x18b0, .value=0xb3},
    };
    const struct CPU_State final_cpu = {.pc=0x18b1, .a=0x62, .x=0x13, .y=0xdb, .sp=0x00, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b3, .value=0xdb}, {.addr=0x18af, .value=0xeb}, {.addr=0x18b0, .value=0xb3},
    };
    const struct BusEvent events[] = {
        {.addr=0x18af, .value=0xeb, .type=IO_READ},
        {.addr=0x18b0, .value=0xb3, .type=IO_READ},
        {.addr=0x01b3, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0092) {
    const struct CPU_State initial_cpu = {.pc=0xf21f, .a=0xcf, .x=0xf1, .y=0xe5, .sp=0xad, .status=0xa6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017f, .value=0x75}, {.addr=0xf21f, .value=0xeb}, {.addr=0xf220, .value=0x7f},
    };
    const struct CPU_State final_cpu = {.pc=0xf221, .a=0xcf, .x=0xf1, .y=0x75, .sp=0xad, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x017f, .value=0x75}, {.addr=0xf21f, .value=0xeb}, {.addr=0xf220, .value=0x7f},
    };
    const struct BusEvent events[] = {
        {.addr=0xf21f, .value=0xeb, .type=IO_READ},
        {.addr=0xf220, .value=0x7f, .type=IO_READ},
        {.addr=0x017f, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0093) {
    const struct CPU_State initial_cpu = {.pc=0x62de, .a=0xfe, .x=0x50, .y=0xa6, .sp=0xaa, .status=0xa9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0117, .value=0x8d}, {.addr=0x62de, .value=0xeb}, {.addr=0x62df, .value=0x17},
    };
    const struct CPU_State final_cpu = {.pc=0x62e0, .a=0xfe, .x=0x50, .y=0x8d, .sp=0xaa, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0117, .value=0x8d}, {.addr=0x62de, .value=0xeb}, {.addr=0x62df, .value=0x17},
    };
    const struct BusEvent events[] = {
        {.addr=0x62de, .value=0xeb, .type=IO_READ},
        {.addr=0x62df, .value=0x17, .type=IO_READ},
        {.addr=0x0117, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0094) {
    const struct CPU_State initial_cpu = {.pc=0x458f, .a=0xcf, .x=0x6e, .y=0x14, .sp=0x5e, .status=0xd5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0029, .value=0xdf}, {.addr=0x458f, .value=0xeb}, {.addr=0x4590, .value=0x29},
    };
    const struct CPU_State final_cpu = {.pc=0x4591, .a=0xcf, .x=0x6e, .y=0xdf, .sp=0x5e, .status=0xd5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0029, .value=0xdf}, {.addr=0x458f, .value=0xeb}, {.addr=0x4590, .value=0x29},
    };
    const struct BusEvent events[] = {
        {.addr=0x458f, .value=0xeb, .type=IO_READ},
        {.addr=0x4590, .value=0x29, .type=IO_READ},
        {.addr=0x0029, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0095) {
    const struct CPU_State initial_cpu = {.pc=0x0ede, .a=0x0f, .x=0x37, .y=0x4d, .sp=0x7b, .status=0xb4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ea, .value=0xa0}, {.addr=0x0ede, .value=0xeb}, {.addr=0x0edf, .value=0xea},
    };
    const struct CPU_State final_cpu = {.pc=0x0ee0, .a=0x0f, .x=0x37, .y=0xa0, .sp=0x7b, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ea, .value=0xa0}, {.addr=0x0ede, .value=0xeb}, {.addr=0x0edf, .value=0xea},
    };
    const struct BusEvent events[] = {
        {.addr=0x0ede, .value=0xeb, .type=IO_READ},
        {.addr=0x0edf, .value=0xea, .type=IO_READ},
        {.addr=0x01ea, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0096) {
    const struct CPU_State initial_cpu = {.pc=0xc6ee, .a=0xca, .x=0xdc, .y=0xa8, .sp=0x89, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0029, .value=0x7b}, {.addr=0xc6ee, .value=0xeb}, {.addr=0xc6ef, .value=0x29},
    };
    const struct CPU_State final_cpu = {.pc=0xc6f0, .a=0xca, .x=0xdc, .y=0x7b, .sp=0x89, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0029, .value=0x7b}, {.addr=0xc6ee, .value=0xeb}, {.addr=0xc6ef, .value=0x29},
    };
    const struct BusEvent events[] = {
        {.addr=0xc6ee, .value=0xeb, .type=IO_READ},
        {.addr=0xc6ef, .value=0x29, .type=IO_READ},
        {.addr=0x0029, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0097) {
    const struct CPU_State initial_cpu = {.pc=0x6f9e, .a=0x69, .x=0x14, .y=0x8a, .sp=0x3c, .status=0xcd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0032, .value=0x21}, {.addr=0x6f9e, .value=0xeb}, {.addr=0x6f9f, .value=0x32},
    };
    const struct CPU_State final_cpu = {.pc=0x6fa0, .a=0x69, .x=0x14, .y=0x21, .sp=0x3c, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0032, .value=0x21}, {.addr=0x6f9e, .value=0xeb}, {.addr=0x6f9f, .value=0x32},
    };
    const struct BusEvent events[] = {
        {.addr=0x6f9e, .value=0xeb, .type=IO_READ},
        {.addr=0x6f9f, .value=0x32, .type=IO_READ},
        {.addr=0x0032, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0098) {
    const struct CPU_State initial_cpu = {.pc=0xa56d, .a=0xfa, .x=0x66, .y=0x8b, .sp=0x4a, .status=0x12};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0085, .value=0x33}, {.addr=0xa56d, .value=0xeb}, {.addr=0xa56e, .value=0x85},
    };
    const struct CPU_State final_cpu = {.pc=0xa56f, .a=0xfa, .x=0x66, .y=0x33, .sp=0x4a, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x0085, .value=0x33}, {.addr=0xa56d, .value=0xeb}, {.addr=0xa56e, .value=0x85},
    };
    const struct BusEvent events[] = {
        {.addr=0xa56d, .value=0xeb, .type=IO_READ},
        {.addr=0xa56e, .value=0x85, .type=IO_READ},
        {.addr=0x0085, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0099) {
    const struct CPU_State initial_cpu = {.pc=0xeda8, .a=0x6f, .x=0xcb, .y=0x37, .sp=0x96, .status=0xaf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016b, .value=0xc9}, {.addr=0xeda8, .value=0xeb}, {.addr=0xeda9, .value=0x6b},
    };
    const struct CPU_State final_cpu = {.pc=0xedaa, .a=0x6f, .x=0xcb, .y=0xc9, .sp=0x96, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x016b, .value=0xc9}, {.addr=0xeda8, .value=0xeb}, {.addr=0xeda9, .value=0x6b},
    };
    const struct BusEvent events[] = {
        {.addr=0xeda8, .value=0xeb, .type=IO_READ},
        {.addr=0xeda9, .value=0x6b, .type=IO_READ},
        {.addr=0x016b, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_009A) {
    const struct CPU_State initial_cpu = {.pc=0x261f, .a=0x0c, .x=0x91, .y=0x2b, .sp=0xe7, .status=0xd9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cb, .value=0x53}, {.addr=0x261f, .value=0xeb}, {.addr=0x2620, .value=0xcb},
    };
    const struct CPU_State final_cpu = {.pc=0x2621, .a=0x0c, .x=0x91, .y=0x53, .sp=0xe7, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cb, .value=0x53}, {.addr=0x261f, .value=0xeb}, {.addr=0x2620, .value=0xcb},
    };
    const struct BusEvent events[] = {
        {.addr=0x261f, .value=0xeb, .type=IO_READ},
        {.addr=0x2620, .value=0xcb, .type=IO_READ},
        {.addr=0x00cb, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_009B) {
    const struct CPU_State initial_cpu = {.pc=0x826d, .a=0x5e, .x=0xa9, .y=0xf2, .sp=0xfe, .status=0x2e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01da, .value=0xc6}, {.addr=0x826d, .value=0xeb}, {.addr=0x826e, .value=0xda},
    };
    const struct CPU_State final_cpu = {.pc=0x826f, .a=0x5e, .x=0xa9, .y=0xc6, .sp=0xfe, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x01da, .value=0xc6}, {.addr=0x826d, .value=0xeb}, {.addr=0x826e, .value=0xda},
    };
    const struct BusEvent events[] = {
        {.addr=0x826d, .value=0xeb, .type=IO_READ},
        {.addr=0x826e, .value=0xda, .type=IO_READ},
        {.addr=0x01da, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_009C) {
    const struct CPU_State initial_cpu = {.pc=0x2dcb, .a=0xde, .x=0xde, .y=0x6e, .sp=0xb7, .status=0x7a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d6, .value=0xd6}, {.addr=0x2dcb, .value=0xeb}, {.addr=0x2dcc, .value=0xd6},
    };
    const struct CPU_State final_cpu = {.pc=0x2dcd, .a=0xde, .x=0xde, .y=0xd6, .sp=0xb7, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d6, .value=0xd6}, {.addr=0x2dcb, .value=0xeb}, {.addr=0x2dcc, .value=0xd6},
    };
    const struct BusEvent events[] = {
        {.addr=0x2dcb, .value=0xeb, .type=IO_READ},
        {.addr=0x2dcc, .value=0xd6, .type=IO_READ},
        {.addr=0x01d6, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_009D) {
    const struct CPU_State initial_cpu = {.pc=0xe697, .a=0x43, .x=0x97, .y=0xcb, .sp=0x8d, .status=0x37};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0101, .value=0xdb}, {.addr=0xe697, .value=0xeb}, {.addr=0xe698, .value=0x01},
    };
    const struct CPU_State final_cpu = {.pc=0xe699, .a=0x43, .x=0x97, .y=0xdb, .sp=0x8d, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0101, .value=0xdb}, {.addr=0xe697, .value=0xeb}, {.addr=0xe698, .value=0x01},
    };
    const struct BusEvent events[] = {
        {.addr=0xe697, .value=0xeb, .type=IO_READ},
        {.addr=0xe698, .value=0x01, .type=IO_READ},
        {.addr=0x0101, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_009E) {
    const struct CPU_State initial_cpu = {.pc=0xe842, .a=0xb9, .x=0xb7, .y=0x6d, .sp=0x0d, .status=0x48};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00eb, .value=0x1e}, {.addr=0xe842, .value=0xeb}, {.addr=0xe843, .value=0xeb},
    };
    const struct CPU_State final_cpu = {.pc=0xe844, .a=0xb9, .x=0xb7, .y=0x1e, .sp=0x0d, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x00eb, .value=0x1e}, {.addr=0xe842, .value=0xeb}, {.addr=0xe843, .value=0xeb},
    };
    const struct BusEvent events[] = {
        {.addr=0xe842, .value=0xeb, .type=IO_READ},
        {.addr=0xe843, .value=0xeb, .type=IO_READ},
        {.addr=0x00eb, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_009F) {
    const struct CPU_State initial_cpu = {.pc=0x5ecd, .a=0x9f, .x=0xca, .y=0x1f, .sp=0xbd, .status=0xff};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e3, .value=0x95}, {.addr=0x5ecd, .value=0xeb}, {.addr=0x5ece, .value=0xe3},
    };
    const struct CPU_State final_cpu = {.pc=0x5ecf, .a=0x9f, .x=0xca, .y=0x95, .sp=0xbd, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e3, .value=0x95}, {.addr=0x5ecd, .value=0xeb}, {.addr=0x5ece, .value=0xe3},
    };
    const struct BusEvent events[] = {
        {.addr=0x5ecd, .value=0xeb, .type=IO_READ},
        {.addr=0x5ece, .value=0xe3, .type=IO_READ},
        {.addr=0x01e3, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00A0) {
    const struct CPU_State initial_cpu = {.pc=0x2bd3, .a=0xb1, .x=0x14, .y=0xa9, .sp=0x30, .status=0x32};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b9, .value=0x18}, {.addr=0x2bd3, .value=0xeb}, {.addr=0x2bd4, .value=0xb9},
    };
    const struct CPU_State final_cpu = {.pc=0x2bd5, .a=0xb1, .x=0x14, .y=0x18, .sp=0x30, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b9, .value=0x18}, {.addr=0x2bd3, .value=0xeb}, {.addr=0x2bd4, .value=0xb9},
    };
    const struct BusEvent events[] = {
        {.addr=0x2bd3, .value=0xeb, .type=IO_READ},
        {.addr=0x2bd4, .value=0xb9, .type=IO_READ},
        {.addr=0x01b9, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00A1) {
    const struct CPU_State initial_cpu = {.pc=0x0226, .a=0x24, .x=0xcd, .y=0x41, .sp=0xb6, .status=0x04};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00eb, .value=0xe9}, {.addr=0x0226, .value=0xeb}, {.addr=0x0227, .value=0xeb},
    };
    const struct CPU_State final_cpu = {.pc=0x0228, .a=0x24, .x=0xcd, .y=0xe9, .sp=0xb6, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x00eb, .value=0xe9}, {.addr=0x0226, .value=0xeb}, {.addr=0x0227, .value=0xeb},
    };
    const struct BusEvent events[] = {
        {.addr=0x0226, .value=0xeb, .type=IO_READ},
        {.addr=0x0227, .value=0xeb, .type=IO_READ},
        {.addr=0x00eb, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00A2) {
    const struct CPU_State initial_cpu = {.pc=0x41a0, .a=0x60, .x=0x16, .y=0x10, .sp=0x63, .status=0xec};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0145, .value=0x3e}, {.addr=0x41a0, .value=0xeb}, {.addr=0x41a1, .value=0x45},
    };
    const struct CPU_State final_cpu = {.pc=0x41a2, .a=0x60, .x=0x16, .y=0x3e, .sp=0x63, .status=0x6c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0145, .value=0x3e}, {.addr=0x41a0, .value=0xeb}, {.addr=0x41a1, .value=0x45},
    };
    const struct BusEvent events[] = {
        {.addr=0x41a0, .value=0xeb, .type=IO_READ},
        {.addr=0x41a1, .value=0x45, .type=IO_READ},
        {.addr=0x0145, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00A3) {
    const struct CPU_State initial_cpu = {.pc=0x0337, .a=0xcb, .x=0x69, .y=0x0d, .sp=0x22, .status=0xfd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bf, .value=0xb1}, {.addr=0x0337, .value=0xeb}, {.addr=0x0338, .value=0xbf},
    };
    const struct CPU_State final_cpu = {.pc=0x0339, .a=0xcb, .x=0x69, .y=0xb1, .sp=0x22, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bf, .value=0xb1}, {.addr=0x0337, .value=0xeb}, {.addr=0x0338, .value=0xbf},
    };
    const struct BusEvent events[] = {
        {.addr=0x0337, .value=0xeb, .type=IO_READ},
        {.addr=0x0338, .value=0xbf, .type=IO_READ},
        {.addr=0x01bf, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00A4) {
    const struct CPU_State initial_cpu = {.pc=0x52a9, .a=0x59, .x=0x12, .y=0x8f, .sp=0xa9, .status=0xa5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fe, .value=0xd6}, {.addr=0x52a9, .value=0xeb}, {.addr=0x52aa, .value=0xfe},
    };
    const struct CPU_State final_cpu = {.pc=0x52ab, .a=0x59, .x=0x12, .y=0xd6, .sp=0xa9, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fe, .value=0xd6}, {.addr=0x52a9, .value=0xeb}, {.addr=0x52aa, .value=0xfe},
    };
    const struct BusEvent events[] = {
        {.addr=0x52a9, .value=0xeb, .type=IO_READ},
        {.addr=0x52aa, .value=0xfe, .type=IO_READ},
        {.addr=0x01fe, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00A5) {
    const struct CPU_State initial_cpu = {.pc=0x3ef3, .a=0xe4, .x=0x4c, .y=0x33, .sp=0x77, .status=0x13};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000a, .value=0xc7}, {.addr=0x3ef3, .value=0xeb}, {.addr=0x3ef4, .value=0x0a},
    };
    const struct CPU_State final_cpu = {.pc=0x3ef5, .a=0xe4, .x=0x4c, .y=0xc7, .sp=0x77, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x000a, .value=0xc7}, {.addr=0x3ef3, .value=0xeb}, {.addr=0x3ef4, .value=0x0a},
    };
    const struct BusEvent events[] = {
        {.addr=0x3ef3, .value=0xeb, .type=IO_READ},
        {.addr=0x3ef4, .value=0x0a, .type=IO_READ},
        {.addr=0x000a, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00A6) {
    const struct CPU_State initial_cpu = {.pc=0x1943, .a=0x93, .x=0xa9, .y=0x33, .sp=0xd2, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0172, .value=0xd0}, {.addr=0x1943, .value=0xeb}, {.addr=0x1944, .value=0x72},
    };
    const struct CPU_State final_cpu = {.pc=0x1945, .a=0x93, .x=0xa9, .y=0xd0, .sp=0xd2, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0172, .value=0xd0}, {.addr=0x1943, .value=0xeb}, {.addr=0x1944, .value=0x72},
    };
    const struct BusEvent events[] = {
        {.addr=0x1943, .value=0xeb, .type=IO_READ},
        {.addr=0x1944, .value=0x72, .type=IO_READ},
        {.addr=0x0172, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00A7) {
    const struct CPU_State initial_cpu = {.pc=0x3634, .a=0x2d, .x=0x7c, .y=0x42, .sp=0x1d, .status=0x4a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0060, .value=0x14}, {.addr=0x3634, .value=0xeb}, {.addr=0x3635, .value=0x60},
    };
    const struct CPU_State final_cpu = {.pc=0x3636, .a=0x2d, .x=0x7c, .y=0x14, .sp=0x1d, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x0060, .value=0x14}, {.addr=0x3634, .value=0xeb}, {.addr=0x3635, .value=0x60},
    };
    const struct BusEvent events[] = {
        {.addr=0x3634, .value=0xeb, .type=IO_READ},
        {.addr=0x3635, .value=0x60, .type=IO_READ},
        {.addr=0x0060, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00A8) {
    const struct CPU_State initial_cpu = {.pc=0x8978, .a=0x10, .x=0x50, .y=0x0e, .sp=0x6f, .status=0x88};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ce, .value=0x4d}, {.addr=0x8978, .value=0xeb}, {.addr=0x8979, .value=0xce},
    };
    const struct CPU_State final_cpu = {.pc=0x897a, .a=0x10, .x=0x50, .y=0x4d, .sp=0x6f, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ce, .value=0x4d}, {.addr=0x8978, .value=0xeb}, {.addr=0x8979, .value=0xce},
    };
    const struct BusEvent events[] = {
        {.addr=0x8978, .value=0xeb, .type=IO_READ},
        {.addr=0x8979, .value=0xce, .type=IO_READ},
        {.addr=0x00ce, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00A9) {
    const struct CPU_State initial_cpu = {.pc=0x89f5, .a=0x5f, .x=0xfe, .y=0x45, .sp=0xdd, .status=0x2a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0154, .value=0x39}, {.addr=0x89f5, .value=0xeb}, {.addr=0x89f6, .value=0x54},
    };
    const struct CPU_State final_cpu = {.pc=0x89f7, .a=0x5f, .x=0xfe, .y=0x39, .sp=0xdd, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x0154, .value=0x39}, {.addr=0x89f5, .value=0xeb}, {.addr=0x89f6, .value=0x54},
    };
    const struct BusEvent events[] = {
        {.addr=0x89f5, .value=0xeb, .type=IO_READ},
        {.addr=0x89f6, .value=0x54, .type=IO_READ},
        {.addr=0x0154, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00AA) {
    const struct CPU_State initial_cpu = {.pc=0x3140, .a=0xbb, .x=0x9f, .y=0x18, .sp=0x85, .status=0x16};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005d, .value=0xa6}, {.addr=0x3140, .value=0xeb}, {.addr=0x3141, .value=0x5d},
    };
    const struct CPU_State final_cpu = {.pc=0x3142, .a=0xbb, .x=0x9f, .y=0xa6, .sp=0x85, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x005d, .value=0xa6}, {.addr=0x3140, .value=0xeb}, {.addr=0x3141, .value=0x5d},
    };
    const struct BusEvent events[] = {
        {.addr=0x3140, .value=0xeb, .type=IO_READ},
        {.addr=0x3141, .value=0x5d, .type=IO_READ},
        {.addr=0x005d, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00AB) {
    const struct CPU_State initial_cpu = {.pc=0xca3b, .a=0x52, .x=0xb2, .y=0x4a, .sp=0x4f, .status=0xe3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0187, .value=0xea}, {.addr=0xca3b, .value=0xeb}, {.addr=0xca3c, .value=0x87},
    };
    const struct CPU_State final_cpu = {.pc=0xca3d, .a=0x52, .x=0xb2, .y=0xea, .sp=0x4f, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0187, .value=0xea}, {.addr=0xca3b, .value=0xeb}, {.addr=0xca3c, .value=0x87},
    };
    const struct BusEvent events[] = {
        {.addr=0xca3b, .value=0xeb, .type=IO_READ},
        {.addr=0xca3c, .value=0x87, .type=IO_READ},
        {.addr=0x0187, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00AC) {
    const struct CPU_State initial_cpu = {.pc=0x4601, .a=0x55, .x=0xab, .y=0x4a, .sp=0x3c, .status=0x34};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0124, .value=0x3e}, {.addr=0x4601, .value=0xeb}, {.addr=0x4602, .value=0x24},
    };
    const struct CPU_State final_cpu = {.pc=0x4603, .a=0x55, .x=0xab, .y=0x3e, .sp=0x3c, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x0124, .value=0x3e}, {.addr=0x4601, .value=0xeb}, {.addr=0x4602, .value=0x24},
    };
    const struct BusEvent events[] = {
        {.addr=0x4601, .value=0xeb, .type=IO_READ},
        {.addr=0x4602, .value=0x24, .type=IO_READ},
        {.addr=0x0124, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00AD) {
    const struct CPU_State initial_cpu = {.pc=0xa9b2, .a=0xc6, .x=0x78, .y=0xbe, .sp=0x21, .status=0x22};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01aa, .value=0xeb}, {.addr=0xa9b2, .value=0xeb}, {.addr=0xa9b3, .value=0xaa},
    };
    const struct CPU_State final_cpu = {.pc=0xa9b4, .a=0xc6, .x=0x78, .y=0xeb, .sp=0x21, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01aa, .value=0xeb}, {.addr=0xa9b2, .value=0xeb}, {.addr=0xa9b3, .value=0xaa},
    };
    const struct BusEvent events[] = {
        {.addr=0xa9b2, .value=0xeb, .type=IO_READ},
        {.addr=0xa9b3, .value=0xaa, .type=IO_READ},
        {.addr=0x01aa, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00AE) {
    const struct CPU_State initial_cpu = {.pc=0xbdac, .a=0x4f, .x=0x7b, .y=0x85, .sp=0x4e, .status=0xa4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0194, .value=0xf5}, {.addr=0xbdac, .value=0xeb}, {.addr=0xbdad, .value=0x94},
    };
    const struct CPU_State final_cpu = {.pc=0xbdae, .a=0x4f, .x=0x7b, .y=0xf5, .sp=0x4e, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0194, .value=0xf5}, {.addr=0xbdac, .value=0xeb}, {.addr=0xbdad, .value=0x94},
    };
    const struct BusEvent events[] = {
        {.addr=0xbdac, .value=0xeb, .type=IO_READ},
        {.addr=0xbdad, .value=0x94, .type=IO_READ},
        {.addr=0x0194, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00AF) {
    const struct CPU_State initial_cpu = {.pc=0x0e0e, .a=0x38, .x=0xd8, .y=0x3a, .sp=0x20, .status=0x5a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001f, .value=0xbd}, {.addr=0x0e0e, .value=0xeb}, {.addr=0x0e0f, .value=0x1f},
    };
    const struct CPU_State final_cpu = {.pc=0x0e10, .a=0x38, .x=0xd8, .y=0xbd, .sp=0x20, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x001f, .value=0xbd}, {.addr=0x0e0e, .value=0xeb}, {.addr=0x0e0f, .value=0x1f},
    };
    const struct BusEvent events[] = {
        {.addr=0x0e0e, .value=0xeb, .type=IO_READ},
        {.addr=0x0e0f, .value=0x1f, .type=IO_READ},
        {.addr=0x001f, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00B0) {
    const struct CPU_State initial_cpu = {.pc=0x88a7, .a=0x8f, .x=0x1f, .y=0xc9, .sp=0x81, .status=0x27};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ca, .value=0x64}, {.addr=0x88a7, .value=0xeb}, {.addr=0x88a8, .value=0xca},
    };
    const struct CPU_State final_cpu = {.pc=0x88a9, .a=0x8f, .x=0x1f, .y=0x64, .sp=0x81, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ca, .value=0x64}, {.addr=0x88a7, .value=0xeb}, {.addr=0x88a8, .value=0xca},
    };
    const struct BusEvent events[] = {
        {.addr=0x88a7, .value=0xeb, .type=IO_READ},
        {.addr=0x88a8, .value=0xca, .type=IO_READ},
        {.addr=0x01ca, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00B1) {
    const struct CPU_State initial_cpu = {.pc=0x6028, .a=0xd1, .x=0x92, .y=0x2d, .sp=0xde, .status=0xd0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b3, .value=0x2c}, {.addr=0x6028, .value=0xeb}, {.addr=0x6029, .value=0xb3},
    };
    const struct CPU_State final_cpu = {.pc=0x602a, .a=0xd1, .x=0x92, .y=0x2c, .sp=0xde, .status=0x50};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b3, .value=0x2c}, {.addr=0x6028, .value=0xeb}, {.addr=0x6029, .value=0xb3},
    };
    const struct BusEvent events[] = {
        {.addr=0x6028, .value=0xeb, .type=IO_READ},
        {.addr=0x6029, .value=0xb3, .type=IO_READ},
        {.addr=0x00b3, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00B2) {
    const struct CPU_State initial_cpu = {.pc=0xd349, .a=0x11, .x=0xec, .y=0xb1, .sp=0x59, .status=0x8f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007c, .value=0x5e}, {.addr=0xd349, .value=0xeb}, {.addr=0xd34a, .value=0x7c},
    };
    const struct CPU_State final_cpu = {.pc=0xd34b, .a=0x11, .x=0xec, .y=0x5e, .sp=0x59, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x007c, .value=0x5e}, {.addr=0xd349, .value=0xeb}, {.addr=0xd34a, .value=0x7c},
    };
    const struct BusEvent events[] = {
        {.addr=0xd349, .value=0xeb, .type=IO_READ},
        {.addr=0xd34a, .value=0x7c, .type=IO_READ},
        {.addr=0x007c, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00B3) {
    const struct CPU_State initial_cpu = {.pc=0xaf44, .a=0x99, .x=0xf9, .y=0x36, .sp=0xd8, .status=0xfa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0190, .value=0xea}, {.addr=0xaf44, .value=0xeb}, {.addr=0xaf45, .value=0x90},
    };
    const struct CPU_State final_cpu = {.pc=0xaf46, .a=0x99, .x=0xf9, .y=0xea, .sp=0xd8, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0190, .value=0xea}, {.addr=0xaf44, .value=0xeb}, {.addr=0xaf45, .value=0x90},
    };
    const struct BusEvent events[] = {
        {.addr=0xaf44, .value=0xeb, .type=IO_READ},
        {.addr=0xaf45, .value=0x90, .type=IO_READ},
        {.addr=0x0190, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00B4) {
    const struct CPU_State initial_cpu = {.pc=0x8d02, .a=0x6e, .x=0xba, .y=0x54, .sp=0x93, .status=0xaf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d0, .value=0x47}, {.addr=0x8d02, .value=0xeb}, {.addr=0x8d03, .value=0xd0},
    };
    const struct CPU_State final_cpu = {.pc=0x8d04, .a=0x6e, .x=0xba, .y=0x47, .sp=0x93, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d0, .value=0x47}, {.addr=0x8d02, .value=0xeb}, {.addr=0x8d03, .value=0xd0},
    };
    const struct BusEvent events[] = {
        {.addr=0x8d02, .value=0xeb, .type=IO_READ},
        {.addr=0x8d03, .value=0xd0, .type=IO_READ},
        {.addr=0x01d0, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00B5) {
    const struct CPU_State initial_cpu = {.pc=0x9d5e, .a=0x9b, .x=0x57, .y=0x40, .sp=0xa6, .status=0xac};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0181, .value=0xd6}, {.addr=0x9d5e, .value=0xeb}, {.addr=0x9d5f, .value=0x81},
    };
    const struct CPU_State final_cpu = {.pc=0x9d60, .a=0x9b, .x=0x57, .y=0xd6, .sp=0xa6, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x0181, .value=0xd6}, {.addr=0x9d5e, .value=0xeb}, {.addr=0x9d5f, .value=0x81},
    };
    const struct BusEvent events[] = {
        {.addr=0x9d5e, .value=0xeb, .type=IO_READ},
        {.addr=0x9d5f, .value=0x81, .type=IO_READ},
        {.addr=0x0181, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00B6) {
    const struct CPU_State initial_cpu = {.pc=0xca46, .a=0xb1, .x=0xb2, .y=0xf0, .sp=0x32, .status=0x81};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a1, .value=0x87}, {.addr=0xca46, .value=0xeb}, {.addr=0xca47, .value=0xa1},
    };
    const struct CPU_State final_cpu = {.pc=0xca48, .a=0xb1, .x=0xb2, .y=0x87, .sp=0x32, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a1, .value=0x87}, {.addr=0xca46, .value=0xeb}, {.addr=0xca47, .value=0xa1},
    };
    const struct BusEvent events[] = {
        {.addr=0xca46, .value=0xeb, .type=IO_READ},
        {.addr=0xca47, .value=0xa1, .type=IO_READ},
        {.addr=0x00a1, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00B7) {
    const struct CPU_State initial_cpu = {.pc=0x6cf3, .a=0x14, .x=0x82, .y=0x98, .sp=0xe3, .status=0x96};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004d, .value=0x94}, {.addr=0x6cf3, .value=0xeb}, {.addr=0x6cf4, .value=0x4d},
    };
    const struct CPU_State final_cpu = {.pc=0x6cf5, .a=0x14, .x=0x82, .y=0x94, .sp=0xe3, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x004d, .value=0x94}, {.addr=0x6cf3, .value=0xeb}, {.addr=0x6cf4, .value=0x4d},
    };
    const struct BusEvent events[] = {
        {.addr=0x6cf3, .value=0xeb, .type=IO_READ},
        {.addr=0x6cf4, .value=0x4d, .type=IO_READ},
        {.addr=0x004d, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00B8) {
    const struct CPU_State initial_cpu = {.pc=0xe110, .a=0x24, .x=0x2f, .y=0xbf, .sp=0x64, .status=0x1f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000f, .value=0x73}, {.addr=0xe110, .value=0xeb}, {.addr=0xe111, .value=0x0f},
    };
    const struct CPU_State final_cpu = {.pc=0xe112, .a=0x24, .x=0x2f, .y=0x73, .sp=0x64, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x000f, .value=0x73}, {.addr=0xe110, .value=0xeb}, {.addr=0xe111, .value=0x0f},
    };
    const struct BusEvent events[] = {
        {.addr=0xe110, .value=0xeb, .type=IO_READ},
        {.addr=0xe111, .value=0x0f, .type=IO_READ},
        {.addr=0x000f, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00B9) {
    const struct CPU_State initial_cpu = {.pc=0x5090, .a=0xe8, .x=0x8e, .y=0xfe, .sp=0xeb, .status=0x69};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0198, .value=0x1a}, {.addr=0x5090, .value=0xeb}, {.addr=0x5091, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0x5092, .a=0xe8, .x=0x8e, .y=0x1a, .sp=0xeb, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x0198, .value=0x1a}, {.addr=0x5090, .value=0xeb}, {.addr=0x5091, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0x5090, .value=0xeb, .type=IO_READ},
        {.addr=0x5091, .value=0x98, .type=IO_READ},
        {.addr=0x0198, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00BA) {
    const struct CPU_State initial_cpu = {.pc=0xb7c1, .a=0xc8, .x=0x23, .y=0x21, .sp=0xa9, .status=0xc3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0085, .value=0x6b}, {.addr=0xb7c1, .value=0xeb}, {.addr=0xb7c2, .value=0x85},
    };
    const struct CPU_State final_cpu = {.pc=0xb7c3, .a=0xc8, .x=0x23, .y=0x6b, .sp=0xa9, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x0085, .value=0x6b}, {.addr=0xb7c1, .value=0xeb}, {.addr=0xb7c2, .value=0x85},
    };
    const struct BusEvent events[] = {
        {.addr=0xb7c1, .value=0xeb, .type=IO_READ},
        {.addr=0xb7c2, .value=0x85, .type=IO_READ},
        {.addr=0x0085, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00BB) {
    const struct CPU_State initial_cpu = {.pc=0x05e8, .a=0x0b, .x=0x80, .y=0xf6, .sp=0x44, .status=0xcc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c0, .value=0xd3}, {.addr=0x05e8, .value=0xeb}, {.addr=0x05e9, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0x05ea, .a=0x0b, .x=0x80, .y=0xd3, .sp=0x44, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c0, .value=0xd3}, {.addr=0x05e8, .value=0xeb}, {.addr=0x05e9, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0x05e8, .value=0xeb, .type=IO_READ},
        {.addr=0x05e9, .value=0xc0, .type=IO_READ},
        {.addr=0x00c0, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00BC) {
    const struct CPU_State initial_cpu = {.pc=0x6b56, .a=0x87, .x=0x05, .y=0xef, .sp=0xf8, .status=0xa4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016b, .value=0xe9}, {.addr=0x6b56, .value=0xeb}, {.addr=0x6b57, .value=0x6b},
    };
    const struct CPU_State final_cpu = {.pc=0x6b58, .a=0x87, .x=0x05, .y=0xe9, .sp=0xf8, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x016b, .value=0xe9}, {.addr=0x6b56, .value=0xeb}, {.addr=0x6b57, .value=0x6b},
    };
    const struct BusEvent events[] = {
        {.addr=0x6b56, .value=0xeb, .type=IO_READ},
        {.addr=0x6b57, .value=0x6b, .type=IO_READ},
        {.addr=0x016b, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00BD) {
    const struct CPU_State initial_cpu = {.pc=0x2135, .a=0x20, .x=0x1c, .y=0x87, .sp=0x56, .status=0x61};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fe, .value=0xc5}, {.addr=0x2135, .value=0xeb}, {.addr=0x2136, .value=0xfe},
    };
    const struct CPU_State final_cpu = {.pc=0x2137, .a=0x20, .x=0x1c, .y=0xc5, .sp=0x56, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fe, .value=0xc5}, {.addr=0x2135, .value=0xeb}, {.addr=0x2136, .value=0xfe},
    };
    const struct BusEvent events[] = {
        {.addr=0x2135, .value=0xeb, .type=IO_READ},
        {.addr=0x2136, .value=0xfe, .type=IO_READ},
        {.addr=0x01fe, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00BE) {
    const struct CPU_State initial_cpu = {.pc=0xa775, .a=0xc6, .x=0x97, .y=0x27, .sp=0x38, .status=0x9a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0064, .value=0xb3}, {.addr=0xa775, .value=0xeb}, {.addr=0xa776, .value=0x64},
    };
    const struct CPU_State final_cpu = {.pc=0xa777, .a=0xc6, .x=0x97, .y=0xb3, .sp=0x38, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x0064, .value=0xb3}, {.addr=0xa775, .value=0xeb}, {.addr=0xa776, .value=0x64},
    };
    const struct BusEvent events[] = {
        {.addr=0xa775, .value=0xeb, .type=IO_READ},
        {.addr=0xa776, .value=0x64, .type=IO_READ},
        {.addr=0x0064, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00BF) {
    const struct CPU_State initial_cpu = {.pc=0x16b5, .a=0x6b, .x=0xb5, .y=0xb9, .sp=0x93, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0102, .value=0x3d}, {.addr=0x16b5, .value=0xeb}, {.addr=0x16b6, .value=0x02},
    };
    const struct CPU_State final_cpu = {.pc=0x16b7, .a=0x6b, .x=0xb5, .y=0x3d, .sp=0x93, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x0102, .value=0x3d}, {.addr=0x16b5, .value=0xeb}, {.addr=0x16b6, .value=0x02},
    };
    const struct BusEvent events[] = {
        {.addr=0x16b5, .value=0xeb, .type=IO_READ},
        {.addr=0x16b6, .value=0x02, .type=IO_READ},
        {.addr=0x0102, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00C0) {
    const struct CPU_State initial_cpu = {.pc=0xbea1, .a=0xfe, .x=0x99, .y=0x57, .sp=0x77, .status=0x13};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001b, .value=0x8c}, {.addr=0xbea1, .value=0xeb}, {.addr=0xbea2, .value=0x1b},
    };
    const struct CPU_State final_cpu = {.pc=0xbea3, .a=0xfe, .x=0x99, .y=0x8c, .sp=0x77, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x001b, .value=0x8c}, {.addr=0xbea1, .value=0xeb}, {.addr=0xbea2, .value=0x1b},
    };
    const struct BusEvent events[] = {
        {.addr=0xbea1, .value=0xeb, .type=IO_READ},
        {.addr=0xbea2, .value=0x1b, .type=IO_READ},
        {.addr=0x001b, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00C1) {
    const struct CPU_State initial_cpu = {.pc=0x00b2, .a=0x89, .x=0x06, .y=0x92, .sp=0x95, .status=0x45};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003b, .value=0xef}, {.addr=0x00b2, .value=0xeb}, {.addr=0x00b3, .value=0x3b},
    };
    const struct CPU_State final_cpu = {.pc=0x00b4, .a=0x89, .x=0x06, .y=0xef, .sp=0x95, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x003b, .value=0xef}, {.addr=0x00b2, .value=0xeb}, {.addr=0x00b3, .value=0x3b},
    };
    const struct BusEvent events[] = {
        {.addr=0x00b2, .value=0xeb, .type=IO_READ},
        {.addr=0x00b3, .value=0x3b, .type=IO_READ},
        {.addr=0x003b, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00C2) {
    const struct CPU_State initial_cpu = {.pc=0x372d, .a=0x96, .x=0x91, .y=0xa9, .sp=0x30, .status=0xb2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0186, .value=0x67}, {.addr=0x372d, .value=0xeb}, {.addr=0x372e, .value=0x86},
    };
    const struct CPU_State final_cpu = {.pc=0x372f, .a=0x96, .x=0x91, .y=0x67, .sp=0x30, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x0186, .value=0x67}, {.addr=0x372d, .value=0xeb}, {.addr=0x372e, .value=0x86},
    };
    const struct BusEvent events[] = {
        {.addr=0x372d, .value=0xeb, .type=IO_READ},
        {.addr=0x372e, .value=0x86, .type=IO_READ},
        {.addr=0x0186, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00C3) {
    const struct CPU_State initial_cpu = {.pc=0x08eb, .a=0x4e, .x=0xc5, .y=0x4a, .sp=0x5b, .status=0x2f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013f, .value=0xed}, {.addr=0x08eb, .value=0xeb}, {.addr=0x08ec, .value=0x3f},
    };
    const struct CPU_State final_cpu = {.pc=0x08ed, .a=0x4e, .x=0xc5, .y=0xed, .sp=0x5b, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x013f, .value=0xed}, {.addr=0x08eb, .value=0xeb}, {.addr=0x08ec, .value=0x3f},
    };
    const struct BusEvent events[] = {
        {.addr=0x08eb, .value=0xeb, .type=IO_READ},
        {.addr=0x08ec, .value=0x3f, .type=IO_READ},
        {.addr=0x013f, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00C4) {
    const struct CPU_State initial_cpu = {.pc=0x0dcb, .a=0x0f, .x=0x76, .y=0x82, .sp=0x7d, .status=0x47};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0023, .value=0xcc}, {.addr=0x0dcb, .value=0xeb}, {.addr=0x0dcc, .value=0x23},
    };
    const struct CPU_State final_cpu = {.pc=0x0dcd, .a=0x0f, .x=0x76, .y=0xcc, .sp=0x7d, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0023, .value=0xcc}, {.addr=0x0dcb, .value=0xeb}, {.addr=0x0dcc, .value=0x23},
    };
    const struct BusEvent events[] = {
        {.addr=0x0dcb, .value=0xeb, .type=IO_READ},
        {.addr=0x0dcc, .value=0x23, .type=IO_READ},
        {.addr=0x0023, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00C5) {
    const struct CPU_State initial_cpu = {.pc=0x60ea, .a=0x9b, .x=0x32, .y=0x24, .sp=0x73, .status=0x70};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bc, .value=0x7d}, {.addr=0x60ea, .value=0xeb}, {.addr=0x60eb, .value=0xbc},
    };
    const struct CPU_State final_cpu = {.pc=0x60ec, .a=0x9b, .x=0x32, .y=0x7d, .sp=0x73, .status=0x70};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bc, .value=0x7d}, {.addr=0x60ea, .value=0xeb}, {.addr=0x60eb, .value=0xbc},
    };
    const struct BusEvent events[] = {
        {.addr=0x60ea, .value=0xeb, .type=IO_READ},
        {.addr=0x60eb, .value=0xbc, .type=IO_READ},
        {.addr=0x01bc, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00C6) {
    const struct CPU_State initial_cpu = {.pc=0x6549, .a=0x73, .x=0x3e, .y=0x64, .sp=0x23, .status=0xb3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0100, .value=0x30}, {.addr=0x6549, .value=0xeb}, {.addr=0x654a, .value=0x00},
    };
    const struct CPU_State final_cpu = {.pc=0x654b, .a=0x73, .x=0x3e, .y=0x30, .sp=0x23, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x0100, .value=0x30}, {.addr=0x6549, .value=0xeb}, {.addr=0x654a, .value=0x00},
    };
    const struct BusEvent events[] = {
        {.addr=0x6549, .value=0xeb, .type=IO_READ},
        {.addr=0x654a, .value=0x00, .type=IO_READ},
        {.addr=0x0100, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00C7) {
    const struct CPU_State initial_cpu = {.pc=0xf837, .a=0x3a, .x=0x11, .y=0xcb, .sp=0xb3, .status=0x17};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a5, .value=0x77}, {.addr=0xf837, .value=0xeb}, {.addr=0xf838, .value=0xa5},
    };
    const struct CPU_State final_cpu = {.pc=0xf839, .a=0x3a, .x=0x11, .y=0x77, .sp=0xb3, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a5, .value=0x77}, {.addr=0xf837, .value=0xeb}, {.addr=0xf838, .value=0xa5},
    };
    const struct BusEvent events[] = {
        {.addr=0xf837, .value=0xeb, .type=IO_READ},
        {.addr=0xf838, .value=0xa5, .type=IO_READ},
        {.addr=0x00a5, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00C8) {
    const struct CPU_State initial_cpu = {.pc=0xc319, .a=0xb1, .x=0x0a, .y=0xe0, .sp=0x30, .status=0x40};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0087, .value=0x04}, {.addr=0xc319, .value=0xeb}, {.addr=0xc31a, .value=0x87},
    };
    const struct CPU_State final_cpu = {.pc=0xc31b, .a=0xb1, .x=0x0a, .y=0x04, .sp=0x30, .status=0x40};
    const struct RamEntry final_ram[] = {
        {.addr=0x0087, .value=0x04}, {.addr=0xc319, .value=0xeb}, {.addr=0xc31a, .value=0x87},
    };
    const struct BusEvent events[] = {
        {.addr=0xc319, .value=0xeb, .type=IO_READ},
        {.addr=0xc31a, .value=0x87, .type=IO_READ},
        {.addr=0x0087, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00C9) {
    const struct CPU_State initial_cpu = {.pc=0xc012, .a=0x67, .x=0x15, .y=0x4c, .sp=0x17, .status=0xad};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015a, .value=0xd0}, {.addr=0xc012, .value=0xeb}, {.addr=0xc013, .value=0x5a},
    };
    const struct CPU_State final_cpu = {.pc=0xc014, .a=0x67, .x=0x15, .y=0xd0, .sp=0x17, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x015a, .value=0xd0}, {.addr=0xc012, .value=0xeb}, {.addr=0xc013, .value=0x5a},
    };
    const struct BusEvent events[] = {
        {.addr=0xc012, .value=0xeb, .type=IO_READ},
        {.addr=0xc013, .value=0x5a, .type=IO_READ},
        {.addr=0x015a, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00CA) {
    const struct CPU_State initial_cpu = {.pc=0xe6ae, .a=0x4c, .x=0xa1, .y=0x26, .sp=0x5e, .status=0x1c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0017, .value=0xe6}, {.addr=0xe6ae, .value=0xeb}, {.addr=0xe6af, .value=0x17},
    };
    const struct CPU_State final_cpu = {.pc=0xe6b0, .a=0x4c, .x=0xa1, .y=0xe6, .sp=0x5e, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0017, .value=0xe6}, {.addr=0xe6ae, .value=0xeb}, {.addr=0xe6af, .value=0x17},
    };
    const struct BusEvent events[] = {
        {.addr=0xe6ae, .value=0xeb, .type=IO_READ},
        {.addr=0xe6af, .value=0x17, .type=IO_READ},
        {.addr=0x0017, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00CB) {
    const struct CPU_State initial_cpu = {.pc=0x4535, .a=0x61, .x=0x0a, .y=0x77, .sp=0xbf, .status=0x44};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003c, .value=0x4e}, {.addr=0x4535, .value=0xeb}, {.addr=0x4536, .value=0x3c},
    };
    const struct CPU_State final_cpu = {.pc=0x4537, .a=0x61, .x=0x0a, .y=0x4e, .sp=0xbf, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x003c, .value=0x4e}, {.addr=0x4535, .value=0xeb}, {.addr=0x4536, .value=0x3c},
    };
    const struct BusEvent events[] = {
        {.addr=0x4535, .value=0xeb, .type=IO_READ},
        {.addr=0x4536, .value=0x3c, .type=IO_READ},
        {.addr=0x003c, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00CC) {
    const struct CPU_State initial_cpu = {.pc=0x83a9, .a=0x5e, .x=0x08, .y=0x36, .sp=0x08, .status=0x4c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0099, .value=0xd8}, {.addr=0x83a9, .value=0xeb}, {.addr=0x83aa, .value=0x99},
    };
    const struct CPU_State final_cpu = {.pc=0x83ab, .a=0x5e, .x=0x08, .y=0xd8, .sp=0x08, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0099, .value=0xd8}, {.addr=0x83a9, .value=0xeb}, {.addr=0x83aa, .value=0x99},
    };
    const struct BusEvent events[] = {
        {.addr=0x83a9, .value=0xeb, .type=IO_READ},
        {.addr=0x83aa, .value=0x99, .type=IO_READ},
        {.addr=0x0099, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00CD) {
    const struct CPU_State initial_cpu = {.pc=0x2574, .a=0xa8, .x=0xf4, .y=0x0c, .sp=0xc3, .status=0x8f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002d, .value=0x3a}, {.addr=0x2574, .value=0xeb}, {.addr=0x2575, .value=0x2d},
    };
    const struct CPU_State final_cpu = {.pc=0x2576, .a=0xa8, .x=0xf4, .y=0x3a, .sp=0xc3, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x002d, .value=0x3a}, {.addr=0x2574, .value=0xeb}, {.addr=0x2575, .value=0x2d},
    };
    const struct BusEvent events[] = {
        {.addr=0x2574, .value=0xeb, .type=IO_READ},
        {.addr=0x2575, .value=0x2d, .type=IO_READ},
        {.addr=0x002d, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00CE) {
    const struct CPU_State initial_cpu = {.pc=0x447f, .a=0x91, .x=0x0b, .y=0x1f, .sp=0x39, .status=0x1b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d3, .value=0xeb}, {.addr=0x447f, .value=0xeb}, {.addr=0x4480, .value=0xd3},
    };
    const struct CPU_State final_cpu = {.pc=0x4481, .a=0x91, .x=0x0b, .y=0xeb, .sp=0x39, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d3, .value=0xeb}, {.addr=0x447f, .value=0xeb}, {.addr=0x4480, .value=0xd3},
    };
    const struct BusEvent events[] = {
        {.addr=0x447f, .value=0xeb, .type=IO_READ},
        {.addr=0x4480, .value=0xd3, .type=IO_READ},
        {.addr=0x00d3, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00CF) {
    const struct CPU_State initial_cpu = {.pc=0x2b05, .a=0x3c, .x=0x49, .y=0x16, .sp=0x6b, .status=0x0e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0081, .value=0xbc}, {.addr=0x2b05, .value=0xeb}, {.addr=0x2b06, .value=0x81},
    };
    const struct CPU_State final_cpu = {.pc=0x2b07, .a=0x3c, .x=0x49, .y=0xbc, .sp=0x6b, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0081, .value=0xbc}, {.addr=0x2b05, .value=0xeb}, {.addr=0x2b06, .value=0x81},
    };
    const struct BusEvent events[] = {
        {.addr=0x2b05, .value=0xeb, .type=IO_READ},
        {.addr=0x2b06, .value=0x81, .type=IO_READ},
        {.addr=0x0081, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00D0) {
    const struct CPU_State initial_cpu = {.pc=0xae92, .a=0x0e, .x=0x7f, .y=0x47, .sp=0xc6, .status=0x7a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01dd, .value=0xbd}, {.addr=0xae92, .value=0xeb}, {.addr=0xae93, .value=0xdd},
    };
    const struct CPU_State final_cpu = {.pc=0xae94, .a=0x0e, .x=0x7f, .y=0xbd, .sp=0xc6, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01dd, .value=0xbd}, {.addr=0xae92, .value=0xeb}, {.addr=0xae93, .value=0xdd},
    };
    const struct BusEvent events[] = {
        {.addr=0xae92, .value=0xeb, .type=IO_READ},
        {.addr=0xae93, .value=0xdd, .type=IO_READ},
        {.addr=0x01dd, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00D1) {
    const struct CPU_State initial_cpu = {.pc=0x3b8f, .a=0x54, .x=0x42, .y=0xc8, .sp=0x1c, .status=0xa6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0127, .value=0x74}, {.addr=0x3b8f, .value=0xeb}, {.addr=0x3b90, .value=0x27},
    };
    const struct CPU_State final_cpu = {.pc=0x3b91, .a=0x54, .x=0x42, .y=0x74, .sp=0x1c, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x0127, .value=0x74}, {.addr=0x3b8f, .value=0xeb}, {.addr=0x3b90, .value=0x27},
    };
    const struct BusEvent events[] = {
        {.addr=0x3b8f, .value=0xeb, .type=IO_READ},
        {.addr=0x3b90, .value=0x27, .type=IO_READ},
        {.addr=0x0127, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00D2) {
    const struct CPU_State initial_cpu = {.pc=0xe462, .a=0xe7, .x=0x52, .y=0xae, .sp=0x9d, .status=0x68};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011b, .value=0x8f}, {.addr=0xe462, .value=0xeb}, {.addr=0xe463, .value=0x1b},
    };
    const struct CPU_State final_cpu = {.pc=0xe464, .a=0xe7, .x=0x52, .y=0x8f, .sp=0x9d, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x011b, .value=0x8f}, {.addr=0xe462, .value=0xeb}, {.addr=0xe463, .value=0x1b},
    };
    const struct BusEvent events[] = {
        {.addr=0xe462, .value=0xeb, .type=IO_READ},
        {.addr=0xe463, .value=0x1b, .type=IO_READ},
        {.addr=0x011b, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00D4) {
    const struct CPU_State initial_cpu = {.pc=0x2b5c, .a=0xf5, .x=0xff, .y=0xc5, .sp=0x2c, .status=0xde};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0080, .value=0x62}, {.addr=0x2b5c, .value=0xeb}, {.addr=0x2b5d, .value=0x80},
    };
    const struct CPU_State final_cpu = {.pc=0x2b5e, .a=0xf5, .x=0xff, .y=0x62, .sp=0x2c, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0080, .value=0x62}, {.addr=0x2b5c, .value=0xeb}, {.addr=0x2b5d, .value=0x80},
    };
    const struct BusEvent events[] = {
        {.addr=0x2b5c, .value=0xeb, .type=IO_READ},
        {.addr=0x2b5d, .value=0x80, .type=IO_READ},
        {.addr=0x0080, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00D5) {
    const struct CPU_State initial_cpu = {.pc=0x75ee, .a=0x80, .x=0xff, .y=0x85, .sp=0x6c, .status=0x80};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0066, .value=0x2c}, {.addr=0x75ee, .value=0xeb}, {.addr=0x75ef, .value=0x66},
    };
    const struct CPU_State final_cpu = {.pc=0x75f0, .a=0x80, .x=0xff, .y=0x2c, .sp=0x6c, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x0066, .value=0x2c}, {.addr=0x75ee, .value=0xeb}, {.addr=0x75ef, .value=0x66},
    };
    const struct BusEvent events[] = {
        {.addr=0x75ee, .value=0xeb, .type=IO_READ},
        {.addr=0x75ef, .value=0x66, .type=IO_READ},
        {.addr=0x0066, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00D7) {
    const struct CPU_State initial_cpu = {.pc=0x9397, .a=0xc7, .x=0x38, .y=0x79, .sp=0xf1, .status=0xb2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b2, .value=0x5d}, {.addr=0x9397, .value=0xeb}, {.addr=0x9398, .value=0xb2},
    };
    const struct CPU_State final_cpu = {.pc=0x9399, .a=0xc7, .x=0x38, .y=0x5d, .sp=0xf1, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b2, .value=0x5d}, {.addr=0x9397, .value=0xeb}, {.addr=0x9398, .value=0xb2},
    };
    const struct BusEvent events[] = {
        {.addr=0x9397, .value=0xeb, .type=IO_READ},
        {.addr=0x9398, .value=0xb2, .type=IO_READ},
        {.addr=0x01b2, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00D8) {
    const struct CPU_State initial_cpu = {.pc=0xe021, .a=0x1e, .x=0x53, .y=0x83, .sp=0x92, .status=0x7b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010a, .value=0x38}, {.addr=0xe021, .value=0xeb}, {.addr=0xe022, .value=0x0a},
    };
    const struct CPU_State final_cpu = {.pc=0xe023, .a=0x1e, .x=0x53, .y=0x38, .sp=0x92, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x010a, .value=0x38}, {.addr=0xe021, .value=0xeb}, {.addr=0xe022, .value=0x0a},
    };
    const struct BusEvent events[] = {
        {.addr=0xe021, .value=0xeb, .type=IO_READ},
        {.addr=0xe022, .value=0x0a, .type=IO_READ},
        {.addr=0x010a, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00D9) {
    const struct CPU_State initial_cpu = {.pc=0xbb97, .a=0xb1, .x=0x54, .y=0xef, .sp=0xa2, .status=0x7b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0119, .value=0xb7}, {.addr=0xbb97, .value=0xeb}, {.addr=0xbb98, .value=0x19},
    };
    const struct CPU_State final_cpu = {.pc=0xbb99, .a=0xb1, .x=0x54, .y=0xb7, .sp=0xa2, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0119, .value=0xb7}, {.addr=0xbb97, .value=0xeb}, {.addr=0xbb98, .value=0x19},
    };
    const struct BusEvent events[] = {
        {.addr=0xbb97, .value=0xeb, .type=IO_READ},
        {.addr=0xbb98, .value=0x19, .type=IO_READ},
        {.addr=0x0119, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00DA) {
    const struct CPU_State initial_cpu = {.pc=0xb2b1, .a=0xc5, .x=0x8f, .y=0x31, .sp=0xb8, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0176, .value=0x43}, {.addr=0xb2b1, .value=0xeb}, {.addr=0xb2b2, .value=0x76},
    };
    const struct CPU_State final_cpu = {.pc=0xb2b3, .a=0xc5, .x=0x8f, .y=0x43, .sp=0xb8, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x0176, .value=0x43}, {.addr=0xb2b1, .value=0xeb}, {.addr=0xb2b2, .value=0x76},
    };
    const struct BusEvent events[] = {
        {.addr=0xb2b1, .value=0xeb, .type=IO_READ},
        {.addr=0xb2b2, .value=0x76, .type=IO_READ},
        {.addr=0x0176, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00DB) {
    const struct CPU_State initial_cpu = {.pc=0xb253, .a=0x9d, .x=0x5f, .y=0x7d, .sp=0xed, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0187, .value=0x31}, {.addr=0xb253, .value=0xeb}, {.addr=0xb254, .value=0x87},
    };
    const struct CPU_State final_cpu = {.pc=0xb255, .a=0x9d, .x=0x5f, .y=0x31, .sp=0xed, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x0187, .value=0x31}, {.addr=0xb253, .value=0xeb}, {.addr=0xb254, .value=0x87},
    };
    const struct BusEvent events[] = {
        {.addr=0xb253, .value=0xeb, .type=IO_READ},
        {.addr=0xb254, .value=0x87, .type=IO_READ},
        {.addr=0x0187, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00DC) {
    const struct CPU_State initial_cpu = {.pc=0xbe9d, .a=0xf2, .x=0xd5, .y=0xa2, .sp=0xcb, .status=0xae};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f8, .value=0xbc}, {.addr=0xbe9d, .value=0xeb}, {.addr=0xbe9e, .value=0xf8},
    };
    const struct CPU_State final_cpu = {.pc=0xbe9f, .a=0xf2, .x=0xd5, .y=0xbc, .sp=0xcb, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f8, .value=0xbc}, {.addr=0xbe9d, .value=0xeb}, {.addr=0xbe9e, .value=0xf8},
    };
    const struct BusEvent events[] = {
        {.addr=0xbe9d, .value=0xeb, .type=IO_READ},
        {.addr=0xbe9e, .value=0xf8, .type=IO_READ},
        {.addr=0x01f8, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00DD) {
    const struct CPU_State initial_cpu = {.pc=0x4d6c, .a=0x8b, .x=0xde, .y=0x2e, .sp=0x62, .status=0xdf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009a, .value=0x99}, {.addr=0x4d6c, .value=0xeb}, {.addr=0x4d6d, .value=0x9a},
    };
    const struct CPU_State final_cpu = {.pc=0x4d6e, .a=0x8b, .x=0xde, .y=0x99, .sp=0x62, .status=0xdd};
    const struct RamEntry final_ram[] = {
        {.addr=0x009a, .value=0x99}, {.addr=0x4d6c, .value=0xeb}, {.addr=0x4d6d, .value=0x9a},
    };
    const struct BusEvent events[] = {
        {.addr=0x4d6c, .value=0xeb, .type=IO_READ},
        {.addr=0x4d6d, .value=0x9a, .type=IO_READ},
        {.addr=0x009a, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00DE) {
    const struct CPU_State initial_cpu = {.pc=0x4b58, .a=0xbc, .x=0x95, .y=0x24, .sp=0x5a, .status=0x33};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0122, .value=0x4e}, {.addr=0x4b58, .value=0xeb}, {.addr=0x4b59, .value=0x22},
    };
    const struct CPU_State final_cpu = {.pc=0x4b5a, .a=0xbc, .x=0x95, .y=0x4e, .sp=0x5a, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x0122, .value=0x4e}, {.addr=0x4b58, .value=0xeb}, {.addr=0x4b59, .value=0x22},
    };
    const struct BusEvent events[] = {
        {.addr=0x4b58, .value=0xeb, .type=IO_READ},
        {.addr=0x4b59, .value=0x22, .type=IO_READ},
        {.addr=0x0122, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00E0) {
    const struct CPU_State initial_cpu = {.pc=0x0820, .a=0xa2, .x=0x0a, .y=0xec, .sp=0xd2, .status=0x7e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0103, .value=0xea}, {.addr=0x0820, .value=0xeb}, {.addr=0x0821, .value=0x03},
    };
    const struct CPU_State final_cpu = {.pc=0x0822, .a=0xa2, .x=0x0a, .y=0xea, .sp=0xd2, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0103, .value=0xea}, {.addr=0x0820, .value=0xeb}, {.addr=0x0821, .value=0x03},
    };
    const struct BusEvent events[] = {
        {.addr=0x0820, .value=0xeb, .type=IO_READ},
        {.addr=0x0821, .value=0x03, .type=IO_READ},
        {.addr=0x0103, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00E1) {
    const struct CPU_State initial_cpu = {.pc=0x0601, .a=0xbf, .x=0xd7, .y=0xb0, .sp=0x1e, .status=0x16};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0076, .value=0x0a}, {.addr=0x0601, .value=0xeb}, {.addr=0x0602, .value=0x76},
    };
    const struct CPU_State final_cpu = {.pc=0x0603, .a=0xbf, .x=0xd7, .y=0x0a, .sp=0x1e, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x0076, .value=0x0a}, {.addr=0x0601, .value=0xeb}, {.addr=0x0602, .value=0x76},
    };
    const struct BusEvent events[] = {
        {.addr=0x0601, .value=0xeb, .type=IO_READ},
        {.addr=0x0602, .value=0x76, .type=IO_READ},
        {.addr=0x0076, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x9bb6, .a=0xdc, .x=0x9c, .y=0x4c, .sp=0x12, .status=0x0a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006a, .value=0x48}, {.addr=0x9bb6, .value=0xeb}, {.addr=0x9bb7, .value=0x6a},
    };
    const struct CPU_State final_cpu = {.pc=0x9bb8, .a=0xdc, .x=0x9c, .y=0x48, .sp=0x12, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x006a, .value=0x48}, {.addr=0x9bb6, .value=0xeb}, {.addr=0x9bb7, .value=0x6a},
    };
    const struct BusEvent events[] = {
        {.addr=0x9bb6, .value=0xeb, .type=IO_READ},
        {.addr=0x9bb7, .value=0x6a, .type=IO_READ},
        {.addr=0x006a, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00E3) {
    const struct CPU_State initial_cpu = {.pc=0x9e21, .a=0x9f, .x=0xbe, .y=0xb1, .sp=0xf8, .status=0xed};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a2, .value=0x21}, {.addr=0x9e21, .value=0xeb}, {.addr=0x9e22, .value=0xa2},
    };
    const struct CPU_State final_cpu = {.pc=0x9e23, .a=0x9f, .x=0xbe, .y=0x21, .sp=0xf8, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a2, .value=0x21}, {.addr=0x9e21, .value=0xeb}, {.addr=0x9e22, .value=0xa2},
    };
    const struct BusEvent events[] = {
        {.addr=0x9e21, .value=0xeb, .type=IO_READ},
        {.addr=0x9e22, .value=0xa2, .type=IO_READ},
        {.addr=0x01a2, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00E4) {
    const struct CPU_State initial_cpu = {.pc=0x93be, .a=0x83, .x=0xdd, .y=0x65, .sp=0xbc, .status=0xb4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0118, .value=0x40}, {.addr=0x93be, .value=0xeb}, {.addr=0x93bf, .value=0x18},
    };
    const struct CPU_State final_cpu = {.pc=0x93c0, .a=0x83, .x=0xdd, .y=0x40, .sp=0xbc, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x0118, .value=0x40}, {.addr=0x93be, .value=0xeb}, {.addr=0x93bf, .value=0x18},
    };
    const struct BusEvent events[] = {
        {.addr=0x93be, .value=0xeb, .type=IO_READ},
        {.addr=0x93bf, .value=0x18, .type=IO_READ},
        {.addr=0x0118, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00E5) {
    const struct CPU_State initial_cpu = {.pc=0x2462, .a=0x54, .x=0x09, .y=0x4b, .sp=0xf9, .status=0x2a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0137, .value=0x23}, {.addr=0x2462, .value=0xeb}, {.addr=0x2463, .value=0x37},
    };
    const struct CPU_State final_cpu = {.pc=0x2464, .a=0x54, .x=0x09, .y=0x23, .sp=0xf9, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x0137, .value=0x23}, {.addr=0x2462, .value=0xeb}, {.addr=0x2463, .value=0x37},
    };
    const struct BusEvent events[] = {
        {.addr=0x2462, .value=0xeb, .type=IO_READ},
        {.addr=0x2463, .value=0x37, .type=IO_READ},
        {.addr=0x0137, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00E6) {
    const struct CPU_State initial_cpu = {.pc=0xc92f, .a=0xdc, .x=0x13, .y=0xc6, .sp=0x11, .status=0x3d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0174, .value=0xc3}, {.addr=0xc92f, .value=0xeb}, {.addr=0xc930, .value=0x74},
    };
    const struct CPU_State final_cpu = {.pc=0xc931, .a=0xdc, .x=0x13, .y=0xc3, .sp=0x11, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0174, .value=0xc3}, {.addr=0xc92f, .value=0xeb}, {.addr=0xc930, .value=0x74},
    };
    const struct BusEvent events[] = {
        {.addr=0xc92f, .value=0xeb, .type=IO_READ},
        {.addr=0xc930, .value=0x74, .type=IO_READ},
        {.addr=0x0174, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00E7) {
    const struct CPU_State initial_cpu = {.pc=0xaa22, .a=0x82, .x=0x31, .y=0x2f, .sp=0x6a, .status=0x23};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0197, .value=0xe3}, {.addr=0xaa22, .value=0xeb}, {.addr=0xaa23, .value=0x97},
    };
    const struct CPU_State final_cpu = {.pc=0xaa24, .a=0x82, .x=0x31, .y=0xe3, .sp=0x6a, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0197, .value=0xe3}, {.addr=0xaa22, .value=0xeb}, {.addr=0xaa23, .value=0x97},
    };
    const struct BusEvent events[] = {
        {.addr=0xaa22, .value=0xeb, .type=IO_READ},
        {.addr=0xaa23, .value=0x97, .type=IO_READ},
        {.addr=0x0197, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00E8) {
    const struct CPU_State initial_cpu = {.pc=0xaf40, .a=0x2d, .x=0x60, .y=0x5c, .sp=0xaa, .status=0x86};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0010, .value=0x45}, {.addr=0xaf40, .value=0xeb}, {.addr=0xaf41, .value=0x10},
    };
    const struct CPU_State final_cpu = {.pc=0xaf42, .a=0x2d, .x=0x60, .y=0x45, .sp=0xaa, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x0010, .value=0x45}, {.addr=0xaf40, .value=0xeb}, {.addr=0xaf41, .value=0x10},
    };
    const struct BusEvent events[] = {
        {.addr=0xaf40, .value=0xeb, .type=IO_READ},
        {.addr=0xaf41, .value=0x10, .type=IO_READ},
        {.addr=0x0010, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00E9) {
    const struct CPU_State initial_cpu = {.pc=0x1a5f, .a=0xdb, .x=0x0d, .y=0x38, .sp=0x3f, .status=0x3c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ce, .value=0x84}, {.addr=0x1a5f, .value=0xeb}, {.addr=0x1a60, .value=0xce},
    };
    const struct CPU_State final_cpu = {.pc=0x1a61, .a=0xdb, .x=0x0d, .y=0x84, .sp=0x3f, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ce, .value=0x84}, {.addr=0x1a5f, .value=0xeb}, {.addr=0x1a60, .value=0xce},
    };
    const struct BusEvent events[] = {
        {.addr=0x1a5f, .value=0xeb, .type=IO_READ},
        {.addr=0x1a60, .value=0xce, .type=IO_READ},
        {.addr=0x01ce, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00EA) {
    const struct CPU_State initial_cpu = {.pc=0x8ebf, .a=0x99, .x=0x96, .y=0xeb, .sp=0xfe, .status=0xa9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d1, .value=0xc4}, {.addr=0x8ebf, .value=0xeb}, {.addr=0x8ec0, .value=0xd1},
    };
    const struct CPU_State final_cpu = {.pc=0x8ec1, .a=0x99, .x=0x96, .y=0xc4, .sp=0xfe, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d1, .value=0xc4}, {.addr=0x8ebf, .value=0xeb}, {.addr=0x8ec0, .value=0xd1},
    };
    const struct BusEvent events[] = {
        {.addr=0x8ebf, .value=0xeb, .type=IO_READ},
        {.addr=0x8ec0, .value=0xd1, .type=IO_READ},
        {.addr=0x01d1, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00EB) {
    const struct CPU_State initial_cpu = {.pc=0x9a0c, .a=0x06, .x=0xbe, .y=0xdc, .sp=0x40, .status=0x82};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005a, .value=0x24}, {.addr=0x9a0c, .value=0xeb}, {.addr=0x9a0d, .value=0x5a},
    };
    const struct CPU_State final_cpu = {.pc=0x9a0e, .a=0x06, .x=0xbe, .y=0x24, .sp=0x40, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x005a, .value=0x24}, {.addr=0x9a0c, .value=0xeb}, {.addr=0x9a0d, .value=0x5a},
    };
    const struct BusEvent events[] = {
        {.addr=0x9a0c, .value=0xeb, .type=IO_READ},
        {.addr=0x9a0d, .value=0x5a, .type=IO_READ},
        {.addr=0x005a, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00EC) {
    const struct CPU_State initial_cpu = {.pc=0x906f, .a=0xc7, .x=0x0c, .y=0x90, .sp=0x1d, .status=0x4d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0022, .value=0xfa}, {.addr=0x906f, .value=0xeb}, {.addr=0x9070, .value=0x22},
    };
    const struct CPU_State final_cpu = {.pc=0x9071, .a=0xc7, .x=0x0c, .y=0xfa, .sp=0x1d, .status=0xcd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0022, .value=0xfa}, {.addr=0x906f, .value=0xeb}, {.addr=0x9070, .value=0x22},
    };
    const struct BusEvent events[] = {
        {.addr=0x906f, .value=0xeb, .type=IO_READ},
        {.addr=0x9070, .value=0x22, .type=IO_READ},
        {.addr=0x0022, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00ED) {
    const struct CPU_State initial_cpu = {.pc=0x3042, .a=0x26, .x=0xfb, .y=0xe4, .sp=0x9a, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00af, .value=0x98}, {.addr=0x3042, .value=0xeb}, {.addr=0x3043, .value=0xaf},
    };
    const struct CPU_State final_cpu = {.pc=0x3044, .a=0x26, .x=0xfb, .y=0x98, .sp=0x9a, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00af, .value=0x98}, {.addr=0x3042, .value=0xeb}, {.addr=0x3043, .value=0xaf},
    };
    const struct BusEvent events[] = {
        {.addr=0x3042, .value=0xeb, .type=IO_READ},
        {.addr=0x3043, .value=0xaf, .type=IO_READ},
        {.addr=0x00af, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00EE) {
    const struct CPU_State initial_cpu = {.pc=0xdd71, .a=0x28, .x=0x83, .y=0x52, .sp=0x2b, .status=0x03};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0062, .value=0x67}, {.addr=0xdd71, .value=0xeb}, {.addr=0xdd72, .value=0x62},
    };
    const struct CPU_State final_cpu = {.pc=0xdd73, .a=0x28, .x=0x83, .y=0x67, .sp=0x2b, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x0062, .value=0x67}, {.addr=0xdd71, .value=0xeb}, {.addr=0xdd72, .value=0x62},
    };
    const struct BusEvent events[] = {
        {.addr=0xdd71, .value=0xeb, .type=IO_READ},
        {.addr=0xdd72, .value=0x62, .type=IO_READ},
        {.addr=0x0062, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00EF) {
    const struct CPU_State initial_cpu = {.pc=0x3d59, .a=0x2f, .x=0x53, .y=0xbb, .sp=0x4f, .status=0x3e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012f, .value=0x93}, {.addr=0x3d59, .value=0xeb}, {.addr=0x3d5a, .value=0x2f},
    };
    const struct CPU_State final_cpu = {.pc=0x3d5b, .a=0x2f, .x=0x53, .y=0x93, .sp=0x4f, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x012f, .value=0x93}, {.addr=0x3d59, .value=0xeb}, {.addr=0x3d5a, .value=0x2f},
    };
    const struct BusEvent events[] = {
        {.addr=0x3d59, .value=0xeb, .type=IO_READ},
        {.addr=0x3d5a, .value=0x2f, .type=IO_READ},
        {.addr=0x012f, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00F0) {
    const struct CPU_State initial_cpu = {.pc=0x7783, .a=0xaf, .x=0x2d, .y=0xb5, .sp=0xd0, .status=0xab};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0107, .value=0x3b}, {.addr=0x7783, .value=0xeb}, {.addr=0x7784, .value=0x07},
    };
    const struct CPU_State final_cpu = {.pc=0x7785, .a=0xaf, .x=0x2d, .y=0x3b, .sp=0xd0, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x0107, .value=0x3b}, {.addr=0x7783, .value=0xeb}, {.addr=0x7784, .value=0x07},
    };
    const struct BusEvent events[] = {
        {.addr=0x7783, .value=0xeb, .type=IO_READ},
        {.addr=0x7784, .value=0x07, .type=IO_READ},
        {.addr=0x0107, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00F1) {
    const struct CPU_State initial_cpu = {.pc=0xac18, .a=0x3d, .x=0xa2, .y=0x81, .sp=0x53, .status=0x09};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005c, .value=0x24}, {.addr=0xac18, .value=0xeb}, {.addr=0xac19, .value=0x5c},
    };
    const struct CPU_State final_cpu = {.pc=0xac1a, .a=0x3d, .x=0xa2, .y=0x24, .sp=0x53, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x005c, .value=0x24}, {.addr=0xac18, .value=0xeb}, {.addr=0xac19, .value=0x5c},
    };
    const struct BusEvent events[] = {
        {.addr=0xac18, .value=0xeb, .type=IO_READ},
        {.addr=0xac19, .value=0x5c, .type=IO_READ},
        {.addr=0x005c, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00F2) {
    const struct CPU_State initial_cpu = {.pc=0xf982, .a=0x84, .x=0xd1, .y=0x2d, .sp=0x07, .status=0x60};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013b, .value=0x10}, {.addr=0xf982, .value=0xeb}, {.addr=0xf983, .value=0x3b},
    };
    const struct CPU_State final_cpu = {.pc=0xf984, .a=0x84, .x=0xd1, .y=0x10, .sp=0x07, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x013b, .value=0x10}, {.addr=0xf982, .value=0xeb}, {.addr=0xf983, .value=0x3b},
    };
    const struct BusEvent events[] = {
        {.addr=0xf982, .value=0xeb, .type=IO_READ},
        {.addr=0xf983, .value=0x3b, .type=IO_READ},
        {.addr=0x013b, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00F3) {
    const struct CPU_State initial_cpu = {.pc=0xe012, .a=0x4c, .x=0x17, .y=0xaf, .sp=0x50, .status=0xee};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0148, .value=0xbf}, {.addr=0xe012, .value=0xeb}, {.addr=0xe013, .value=0x48},
    };
    const struct CPU_State final_cpu = {.pc=0xe014, .a=0x4c, .x=0x17, .y=0xbf, .sp=0x50, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x0148, .value=0xbf}, {.addr=0xe012, .value=0xeb}, {.addr=0xe013, .value=0x48},
    };
    const struct BusEvent events[] = {
        {.addr=0xe012, .value=0xeb, .type=IO_READ},
        {.addr=0xe013, .value=0x48, .type=IO_READ},
        {.addr=0x0148, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00F4) {
    const struct CPU_State initial_cpu = {.pc=0x97b3, .a=0x0f, .x=0xeb, .y=0x4f, .sp=0x53, .status=0x5f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002c, .value=0x1e}, {.addr=0x97b3, .value=0xeb}, {.addr=0x97b4, .value=0x2c},
    };
    const struct CPU_State final_cpu = {.pc=0x97b5, .a=0x0f, .x=0xeb, .y=0x1e, .sp=0x53, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x002c, .value=0x1e}, {.addr=0x97b3, .value=0xeb}, {.addr=0x97b4, .value=0x2c},
    };
    const struct BusEvent events[] = {
        {.addr=0x97b3, .value=0xeb, .type=IO_READ},
        {.addr=0x97b4, .value=0x2c, .type=IO_READ},
        {.addr=0x002c, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00F5) {
    const struct CPU_State initial_cpu = {.pc=0x5285, .a=0xc2, .x=0xdf, .y=0x54, .sp=0x97, .status=0xba};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d9, .value=0x7f}, {.addr=0x5285, .value=0xeb}, {.addr=0x5286, .value=0xd9},
    };
    const struct CPU_State final_cpu = {.pc=0x5287, .a=0xc2, .x=0xdf, .y=0x7f, .sp=0x97, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d9, .value=0x7f}, {.addr=0x5285, .value=0xeb}, {.addr=0x5286, .value=0xd9},
    };
    const struct BusEvent events[] = {
        {.addr=0x5285, .value=0xeb, .type=IO_READ},
        {.addr=0x5286, .value=0xd9, .type=IO_READ},
        {.addr=0x01d9, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00F6) {
    const struct CPU_State initial_cpu = {.pc=0x83e6, .a=0xb5, .x=0xfc, .y=0x1d, .sp=0x9d, .status=0xac};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0183, .value=0x86}, {.addr=0x83e6, .value=0xeb}, {.addr=0x83e7, .value=0x83},
    };
    const struct CPU_State final_cpu = {.pc=0x83e8, .a=0xb5, .x=0xfc, .y=0x86, .sp=0x9d, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x0183, .value=0x86}, {.addr=0x83e6, .value=0xeb}, {.addr=0x83e7, .value=0x83},
    };
    const struct BusEvent events[] = {
        {.addr=0x83e6, .value=0xeb, .type=IO_READ},
        {.addr=0x83e7, .value=0x83, .type=IO_READ},
        {.addr=0x0183, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00F7) {
    const struct CPU_State initial_cpu = {.pc=0x5284, .a=0xfe, .x=0xef, .y=0x90, .sp=0x34, .status=0x95};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0050, .value=0x42}, {.addr=0x5284, .value=0xeb}, {.addr=0x5285, .value=0x50},
    };
    const struct CPU_State final_cpu = {.pc=0x5286, .a=0xfe, .x=0xef, .y=0x42, .sp=0x34, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x0050, .value=0x42}, {.addr=0x5284, .value=0xeb}, {.addr=0x5285, .value=0x50},
    };
    const struct BusEvent events[] = {
        {.addr=0x5284, .value=0xeb, .type=IO_READ},
        {.addr=0x5285, .value=0x50, .type=IO_READ},
        {.addr=0x0050, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00F8) {
    const struct CPU_State initial_cpu = {.pc=0xc5a1, .a=0x26, .x=0x5c, .y=0x40, .sp=0xd9, .status=0x1c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0066, .value=0x6e}, {.addr=0xc5a1, .value=0xeb}, {.addr=0xc5a2, .value=0x66},
    };
    const struct CPU_State final_cpu = {.pc=0xc5a3, .a=0x26, .x=0x5c, .y=0x6e, .sp=0xd9, .status=0x1c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0066, .value=0x6e}, {.addr=0xc5a1, .value=0xeb}, {.addr=0xc5a2, .value=0x66},
    };
    const struct BusEvent events[] = {
        {.addr=0xc5a1, .value=0xeb, .type=IO_READ},
        {.addr=0xc5a2, .value=0x66, .type=IO_READ},
        {.addr=0x0066, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00F9) {
    const struct CPU_State initial_cpu = {.pc=0x5fce, .a=0x48, .x=0x3b, .y=0x12, .sp=0x1d, .status=0x23};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a0, .value=0xc7}, {.addr=0x5fce, .value=0xeb}, {.addr=0x5fcf, .value=0xa0},
    };
    const struct CPU_State final_cpu = {.pc=0x5fd0, .a=0x48, .x=0x3b, .y=0xc7, .sp=0x1d, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a0, .value=0xc7}, {.addr=0x5fce, .value=0xeb}, {.addr=0x5fcf, .value=0xa0},
    };
    const struct BusEvent events[] = {
        {.addr=0x5fce, .value=0xeb, .type=IO_READ},
        {.addr=0x5fcf, .value=0xa0, .type=IO_READ},
        {.addr=0x01a0, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00FA) {
    const struct CPU_State initial_cpu = {.pc=0xab7b, .a=0x14, .x=0xf6, .y=0xb7, .sp=0x4f, .status=0xb2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bf, .value=0x21}, {.addr=0xab7b, .value=0xeb}, {.addr=0xab7c, .value=0xbf},
    };
    const struct CPU_State final_cpu = {.pc=0xab7d, .a=0x14, .x=0xf6, .y=0x21, .sp=0x4f, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bf, .value=0x21}, {.addr=0xab7b, .value=0xeb}, {.addr=0xab7c, .value=0xbf},
    };
    const struct BusEvent events[] = {
        {.addr=0xab7b, .value=0xeb, .type=IO_READ},
        {.addr=0xab7c, .value=0xbf, .type=IO_READ},
        {.addr=0x01bf, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00FC) {
    const struct CPU_State initial_cpu = {.pc=0x5f0a, .a=0x74, .x=0x73, .y=0x3a, .sp=0xcb, .status=0xf9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015b, .value=0x39}, {.addr=0x5f0a, .value=0xeb}, {.addr=0x5f0b, .value=0x5b},
    };
    const struct CPU_State final_cpu = {.pc=0x5f0c, .a=0x74, .x=0x73, .y=0x39, .sp=0xcb, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x015b, .value=0x39}, {.addr=0x5f0a, .value=0xeb}, {.addr=0x5f0b, .value=0x5b},
    };
    const struct BusEvent events[] = {
        {.addr=0x5f0a, .value=0xeb, .type=IO_READ},
        {.addr=0x5f0b, .value=0x5b, .type=IO_READ},
        {.addr=0x015b, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00FD) {
    const struct CPU_State initial_cpu = {.pc=0x1d9b, .a=0xa2, .x=0x1c, .y=0xb9, .sp=0xf7, .status=0xf4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a5, .value=0xae}, {.addr=0x1d9b, .value=0xeb}, {.addr=0x1d9c, .value=0xa5},
    };
    const struct CPU_State final_cpu = {.pc=0x1d9d, .a=0xa2, .x=0x1c, .y=0xae, .sp=0xf7, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a5, .value=0xae}, {.addr=0x1d9b, .value=0xeb}, {.addr=0x1d9c, .value=0xa5},
    };
    const struct BusEvent events[] = {
        {.addr=0x1d9b, .value=0xeb, .type=IO_READ},
        {.addr=0x1d9c, .value=0xa5, .type=IO_READ},
        {.addr=0x01a5, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00FE) {
    const struct CPU_State initial_cpu = {.pc=0x3435, .a=0xe8, .x=0x0e, .y=0xf9, .sp=0xcf, .status=0xa2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019e, .value=0x9f}, {.addr=0x3435, .value=0xeb}, {.addr=0x3436, .value=0x9e},
    };
    const struct CPU_State final_cpu = {.pc=0x3437, .a=0xe8, .x=0x0e, .y=0x9f, .sp=0xcf, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x019e, .value=0x9f}, {.addr=0x3435, .value=0xeb}, {.addr=0x3436, .value=0x9e},
    };
    const struct BusEvent events[] = {
        {.addr=0x3435, .value=0xeb, .type=IO_READ},
        {.addr=0x3436, .value=0x9e, .type=IO_READ},
        {.addr=0x019e, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_00FF) {
    const struct CPU_State initial_cpu = {.pc=0x2cfe, .a=0x4f, .x=0x4e, .y=0xd3, .sp=0x9d, .status=0x8e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005d, .value=0xf1}, {.addr=0x2cfe, .value=0xeb}, {.addr=0x2cff, .value=0x5d},
    };
    const struct CPU_State final_cpu = {.pc=0x2d00, .a=0x4f, .x=0x4e, .y=0xf1, .sp=0x9d, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x005d, .value=0xf1}, {.addr=0x2cfe, .value=0xeb}, {.addr=0x2cff, .value=0x5d},
    };
    const struct BusEvent events[] = {
        {.addr=0x2cfe, .value=0xeb, .type=IO_READ},
        {.addr=0x2cff, .value=0x5d, .type=IO_READ},
        {.addr=0x005d, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0100) {
    const struct CPU_State initial_cpu = {.pc=0xdd00, .a=0x4a, .x=0x53, .y=0x84, .sp=0xa4, .status=0x1c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002a, .value=0x03}, {.addr=0xdd00, .value=0xeb}, {.addr=0xdd01, .value=0x2a},
    };
    const struct CPU_State final_cpu = {.pc=0xdd02, .a=0x4a, .x=0x53, .y=0x03, .sp=0xa4, .status=0x1c};
    const struct RamEntry final_ram[] = {
        {.addr=0x002a, .value=0x03}, {.addr=0xdd00, .value=0xeb}, {.addr=0xdd01, .value=0x2a},
    };
    const struct BusEvent events[] = {
        {.addr=0xdd00, .value=0xeb, .type=IO_READ},
        {.addr=0xdd01, .value=0x2a, .type=IO_READ},
        {.addr=0x002a, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0101) {
    const struct CPU_State initial_cpu = {.pc=0x0fed, .a=0x19, .x=0xef, .y=0x8c, .sp=0xd1, .status=0x73};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013e, .value=0x98}, {.addr=0x0fed, .value=0xeb}, {.addr=0x0fee, .value=0x3e},
    };
    const struct CPU_State final_cpu = {.pc=0x0fef, .a=0x19, .x=0xef, .y=0x98, .sp=0xd1, .status=0xf1};
    const struct RamEntry final_ram[] = {
        {.addr=0x013e, .value=0x98}, {.addr=0x0fed, .value=0xeb}, {.addr=0x0fee, .value=0x3e},
    };
    const struct BusEvent events[] = {
        {.addr=0x0fed, .value=0xeb, .type=IO_READ},
        {.addr=0x0fee, .value=0x3e, .type=IO_READ},
        {.addr=0x013e, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0102) {
    const struct CPU_State initial_cpu = {.pc=0x22f2, .a=0x3b, .x=0x1e, .y=0xf3, .sp=0xef, .status=0xac};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c0, .value=0x2f}, {.addr=0x22f2, .value=0xeb}, {.addr=0x22f3, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0x22f4, .a=0x3b, .x=0x1e, .y=0x2f, .sp=0xef, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c0, .value=0x2f}, {.addr=0x22f2, .value=0xeb}, {.addr=0x22f3, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0x22f2, .value=0xeb, .type=IO_READ},
        {.addr=0x22f3, .value=0xc0, .type=IO_READ},
        {.addr=0x01c0, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0103) {
    const struct CPU_State initial_cpu = {.pc=0xf4a2, .a=0x39, .x=0x20, .y=0xdd, .sp=0x64, .status=0x28};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a0, .value=0x8e}, {.addr=0xf4a2, .value=0xeb}, {.addr=0xf4a3, .value=0xa0},
    };
    const struct CPU_State final_cpu = {.pc=0xf4a4, .a=0x39, .x=0x20, .y=0x8e, .sp=0x64, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a0, .value=0x8e}, {.addr=0xf4a2, .value=0xeb}, {.addr=0xf4a3, .value=0xa0},
    };
    const struct BusEvent events[] = {
        {.addr=0xf4a2, .value=0xeb, .type=IO_READ},
        {.addr=0xf4a3, .value=0xa0, .type=IO_READ},
        {.addr=0x01a0, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0104) {
    const struct CPU_State initial_cpu = {.pc=0x0603, .a=0x99, .x=0x75, .y=0xa9, .sp=0xd0, .status=0xa5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0119, .value=0x79}, {.addr=0x0603, .value=0xeb}, {.addr=0x0604, .value=0x19},
    };
    const struct CPU_State final_cpu = {.pc=0x0605, .a=0x99, .x=0x75, .y=0x79, .sp=0xd0, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x0119, .value=0x79}, {.addr=0x0603, .value=0xeb}, {.addr=0x0604, .value=0x19},
    };
    const struct BusEvent events[] = {
        {.addr=0x0603, .value=0xeb, .type=IO_READ},
        {.addr=0x0604, .value=0x19, .type=IO_READ},
        {.addr=0x0119, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0105) {
    const struct CPU_State initial_cpu = {.pc=0x143c, .a=0x66, .x=0x45, .y=0x81, .sp=0xff, .status=0x52};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ef, .value=0x61}, {.addr=0x143c, .value=0xeb}, {.addr=0x143d, .value=0xef},
    };
    const struct CPU_State final_cpu = {.pc=0x143e, .a=0x66, .x=0x45, .y=0x61, .sp=0xff, .status=0x50};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ef, .value=0x61}, {.addr=0x143c, .value=0xeb}, {.addr=0x143d, .value=0xef},
    };
    const struct BusEvent events[] = {
        {.addr=0x143c, .value=0xeb, .type=IO_READ},
        {.addr=0x143d, .value=0xef, .type=IO_READ},
        {.addr=0x00ef, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0106) {
    const struct CPU_State initial_cpu = {.pc=0x9626, .a=0x6e, .x=0x7a, .y=0x01, .sp=0x6d, .status=0x72};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013f, .value=0x17}, {.addr=0x9626, .value=0xeb}, {.addr=0x9627, .value=0x3f},
    };
    const struct CPU_State final_cpu = {.pc=0x9628, .a=0x6e, .x=0x7a, .y=0x17, .sp=0x6d, .status=0x70};
    const struct RamEntry final_ram[] = {
        {.addr=0x013f, .value=0x17}, {.addr=0x9626, .value=0xeb}, {.addr=0x9627, .value=0x3f},
    };
    const struct BusEvent events[] = {
        {.addr=0x9626, .value=0xeb, .type=IO_READ},
        {.addr=0x9627, .value=0x3f, .type=IO_READ},
        {.addr=0x013f, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0107) {
    const struct CPU_State initial_cpu = {.pc=0x5690, .a=0x7e, .x=0xac, .y=0xed, .sp=0x0f, .status=0xc2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0045, .value=0xb5}, {.addr=0x5690, .value=0xeb}, {.addr=0x5691, .value=0x45},
    };
    const struct CPU_State final_cpu = {.pc=0x5692, .a=0x7e, .x=0xac, .y=0xb5, .sp=0x0f, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0045, .value=0xb5}, {.addr=0x5690, .value=0xeb}, {.addr=0x5691, .value=0x45},
    };
    const struct BusEvent events[] = {
        {.addr=0x5690, .value=0xeb, .type=IO_READ},
        {.addr=0x5691, .value=0x45, .type=IO_READ},
        {.addr=0x0045, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0108) {
    const struct CPU_State initial_cpu = {.pc=0x1584, .a=0x4b, .x=0xf0, .y=0xe3, .sp=0x1e, .status=0xaf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016b, .value=0x78}, {.addr=0x1584, .value=0xeb}, {.addr=0x1585, .value=0x6b},
    };
    const struct CPU_State final_cpu = {.pc=0x1586, .a=0x4b, .x=0xf0, .y=0x78, .sp=0x1e, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x016b, .value=0x78}, {.addr=0x1584, .value=0xeb}, {.addr=0x1585, .value=0x6b},
    };
    const struct BusEvent events[] = {
        {.addr=0x1584, .value=0xeb, .type=IO_READ},
        {.addr=0x1585, .value=0x6b, .type=IO_READ},
        {.addr=0x016b, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0109) {
    const struct CPU_State initial_cpu = {.pc=0xe97a, .a=0xa0, .x=0x66, .y=0x76, .sp=0x6d, .status=0xbe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0150, .value=0x35}, {.addr=0xe97a, .value=0xeb}, {.addr=0xe97b, .value=0x50},
    };
    const struct CPU_State final_cpu = {.pc=0xe97c, .a=0xa0, .x=0x66, .y=0x35, .sp=0x6d, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0150, .value=0x35}, {.addr=0xe97a, .value=0xeb}, {.addr=0xe97b, .value=0x50},
    };
    const struct BusEvent events[] = {
        {.addr=0xe97a, .value=0xeb, .type=IO_READ},
        {.addr=0xe97b, .value=0x50, .type=IO_READ},
        {.addr=0x0150, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_010A) {
    const struct CPU_State initial_cpu = {.pc=0xda1a, .a=0xec, .x=0x14, .y=0xbf, .sp=0x56, .status=0x75};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0129, .value=0x7d}, {.addr=0xda1a, .value=0xeb}, {.addr=0xda1b, .value=0x29},
    };
    const struct CPU_State final_cpu = {.pc=0xda1c, .a=0xec, .x=0x14, .y=0x7d, .sp=0x56, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x0129, .value=0x7d}, {.addr=0xda1a, .value=0xeb}, {.addr=0xda1b, .value=0x29},
    };
    const struct BusEvent events[] = {
        {.addr=0xda1a, .value=0xeb, .type=IO_READ},
        {.addr=0xda1b, .value=0x29, .type=IO_READ},
        {.addr=0x0129, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_010B) {
    const struct CPU_State initial_cpu = {.pc=0xb8c1, .a=0x5d, .x=0x88, .y=0x07, .sp=0x6b, .status=0x89};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004e, .value=0xc3}, {.addr=0xb8c1, .value=0xeb}, {.addr=0xb8c2, .value=0x4e},
    };
    const struct CPU_State final_cpu = {.pc=0xb8c3, .a=0x5d, .x=0x88, .y=0xc3, .sp=0x6b, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x004e, .value=0xc3}, {.addr=0xb8c1, .value=0xeb}, {.addr=0xb8c2, .value=0x4e},
    };
    const struct BusEvent events[] = {
        {.addr=0xb8c1, .value=0xeb, .type=IO_READ},
        {.addr=0xb8c2, .value=0x4e, .type=IO_READ},
        {.addr=0x004e, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_010C) {
    const struct CPU_State initial_cpu = {.pc=0x0dec, .a=0xe6, .x=0x49, .y=0x21, .sp=0x44, .status=0xd6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009c, .value=0xa6}, {.addr=0x0dec, .value=0xeb}, {.addr=0x0ded, .value=0x9c},
    };
    const struct CPU_State final_cpu = {.pc=0x0dee, .a=0xe6, .x=0x49, .y=0xa6, .sp=0x44, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x009c, .value=0xa6}, {.addr=0x0dec, .value=0xeb}, {.addr=0x0ded, .value=0x9c},
    };
    const struct BusEvent events[] = {
        {.addr=0x0dec, .value=0xeb, .type=IO_READ},
        {.addr=0x0ded, .value=0x9c, .type=IO_READ},
        {.addr=0x009c, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_010D) {
    const struct CPU_State initial_cpu = {.pc=0x98d0, .a=0xaf, .x=0xf3, .y=0xc6, .sp=0x85, .status=0x66};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ee, .value=0x8f}, {.addr=0x98d0, .value=0xeb}, {.addr=0x98d1, .value=0xee},
    };
    const struct CPU_State final_cpu = {.pc=0x98d2, .a=0xaf, .x=0xf3, .y=0x8f, .sp=0x85, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ee, .value=0x8f}, {.addr=0x98d0, .value=0xeb}, {.addr=0x98d1, .value=0xee},
    };
    const struct BusEvent events[] = {
        {.addr=0x98d0, .value=0xeb, .type=IO_READ},
        {.addr=0x98d1, .value=0xee, .type=IO_READ},
        {.addr=0x01ee, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_010E) {
    const struct CPU_State initial_cpu = {.pc=0x88fa, .a=0x61, .x=0xb4, .y=0xe2, .sp=0x27, .status=0x08};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0070, .value=0xd1}, {.addr=0x88fa, .value=0xeb}, {.addr=0x88fb, .value=0x70},
    };
    const struct CPU_State final_cpu = {.pc=0x88fc, .a=0x61, .x=0xb4, .y=0xd1, .sp=0x27, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x0070, .value=0xd1}, {.addr=0x88fa, .value=0xeb}, {.addr=0x88fb, .value=0x70},
    };
    const struct BusEvent events[] = {
        {.addr=0x88fa, .value=0xeb, .type=IO_READ},
        {.addr=0x88fb, .value=0x70, .type=IO_READ},
        {.addr=0x0070, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_010F) {
    const struct CPU_State initial_cpu = {.pc=0x8020, .a=0x55, .x=0x91, .y=0x7d, .sp=0x3f, .status=0xa0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0183, .value=0x21}, {.addr=0x8020, .value=0xeb}, {.addr=0x8021, .value=0x83},
    };
    const struct CPU_State final_cpu = {.pc=0x8022, .a=0x55, .x=0x91, .y=0x21, .sp=0x3f, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x0183, .value=0x21}, {.addr=0x8020, .value=0xeb}, {.addr=0x8021, .value=0x83},
    };
    const struct BusEvent events[] = {
        {.addr=0x8020, .value=0xeb, .type=IO_READ},
        {.addr=0x8021, .value=0x83, .type=IO_READ},
        {.addr=0x0183, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0110) {
    const struct CPU_State initial_cpu = {.pc=0x0d28, .a=0x22, .x=0x8f, .y=0x04, .sp=0xc2, .status=0x3d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01aa, .value=0x65}, {.addr=0x0d28, .value=0xeb}, {.addr=0x0d29, .value=0xaa},
    };
    const struct CPU_State final_cpu = {.pc=0x0d2a, .a=0x22, .x=0x8f, .y=0x65, .sp=0xc2, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01aa, .value=0x65}, {.addr=0x0d28, .value=0xeb}, {.addr=0x0d29, .value=0xaa},
    };
    const struct BusEvent events[] = {
        {.addr=0x0d28, .value=0xeb, .type=IO_READ},
        {.addr=0x0d29, .value=0xaa, .type=IO_READ},
        {.addr=0x01aa, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0111) {
    const struct CPU_State initial_cpu = {.pc=0x82c8, .a=0xf7, .x=0x98, .y=0xee, .sp=0x2e, .status=0x73};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0139, .value=0x49}, {.addr=0x82c8, .value=0xeb}, {.addr=0x82c9, .value=0x39},
    };
    const struct CPU_State final_cpu = {.pc=0x82ca, .a=0xf7, .x=0x98, .y=0x49, .sp=0x2e, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x0139, .value=0x49}, {.addr=0x82c8, .value=0xeb}, {.addr=0x82c9, .value=0x39},
    };
    const struct BusEvent events[] = {
        {.addr=0x82c8, .value=0xeb, .type=IO_READ},
        {.addr=0x82c9, .value=0x39, .type=IO_READ},
        {.addr=0x0139, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0112) {
    const struct CPU_State initial_cpu = {.pc=0xb435, .a=0xb6, .x=0x6f, .y=0x8f, .sp=0xee, .status=0xeb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e0, .value=0x93}, {.addr=0xb435, .value=0xeb}, {.addr=0xb436, .value=0xe0},
    };
    const struct CPU_State final_cpu = {.pc=0xb437, .a=0xb6, .x=0x6f, .y=0x93, .sp=0xee, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e0, .value=0x93}, {.addr=0xb435, .value=0xeb}, {.addr=0xb436, .value=0xe0},
    };
    const struct BusEvent events[] = {
        {.addr=0xb435, .value=0xeb, .type=IO_READ},
        {.addr=0xb436, .value=0xe0, .type=IO_READ},
        {.addr=0x01e0, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0113) {
    const struct CPU_State initial_cpu = {.pc=0xf9ae, .a=0xb4, .x=0x74, .y=0xbc, .sp=0x0f, .status=0x44};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0085, .value=0x85}, {.addr=0xf9ae, .value=0xeb}, {.addr=0xf9af, .value=0x85},
    };
    const struct CPU_State final_cpu = {.pc=0xf9b0, .a=0xb4, .x=0x74, .y=0x85, .sp=0x0f, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0085, .value=0x85}, {.addr=0xf9ae, .value=0xeb}, {.addr=0xf9af, .value=0x85},
    };
    const struct BusEvent events[] = {
        {.addr=0xf9ae, .value=0xeb, .type=IO_READ},
        {.addr=0xf9af, .value=0x85, .type=IO_READ},
        {.addr=0x0085, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0114) {
    const struct CPU_State initial_cpu = {.pc=0x2a9d, .a=0xfe, .x=0x35, .y=0xc2, .sp=0xf3, .status=0x9d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0059, .value=0x5a}, {.addr=0x2a9d, .value=0xeb}, {.addr=0x2a9e, .value=0x59},
    };
    const struct CPU_State final_cpu = {.pc=0x2a9f, .a=0xfe, .x=0x35, .y=0x5a, .sp=0xf3, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0059, .value=0x5a}, {.addr=0x2a9d, .value=0xeb}, {.addr=0x2a9e, .value=0x59},
    };
    const struct BusEvent events[] = {
        {.addr=0x2a9d, .value=0xeb, .type=IO_READ},
        {.addr=0x2a9e, .value=0x59, .type=IO_READ},
        {.addr=0x0059, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0115) {
    const struct CPU_State initial_cpu = {.pc=0x0eec, .a=0xbd, .x=0x0e, .y=0x50, .sp=0x53, .status=0xee};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01df, .value=0x8c}, {.addr=0x0eec, .value=0xeb}, {.addr=0x0eed, .value=0xdf},
    };
    const struct CPU_State final_cpu = {.pc=0x0eee, .a=0xbd, .x=0x0e, .y=0x8c, .sp=0x53, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x01df, .value=0x8c}, {.addr=0x0eec, .value=0xeb}, {.addr=0x0eed, .value=0xdf},
    };
    const struct BusEvent events[] = {
        {.addr=0x0eec, .value=0xeb, .type=IO_READ},
        {.addr=0x0eed, .value=0xdf, .type=IO_READ},
        {.addr=0x01df, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0116) {
    const struct CPU_State initial_cpu = {.pc=0x7b7e, .a=0x30, .x=0xf8, .y=0x81, .sp=0x1f, .status=0x65};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0161, .value=0x2d}, {.addr=0x7b7e, .value=0xeb}, {.addr=0x7b7f, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0x7b80, .a=0x30, .x=0xf8, .y=0x2d, .sp=0x1f, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x0161, .value=0x2d}, {.addr=0x7b7e, .value=0xeb}, {.addr=0x7b7f, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0x7b7e, .value=0xeb, .type=IO_READ},
        {.addr=0x7b7f, .value=0x61, .type=IO_READ},
        {.addr=0x0161, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0117) {
    const struct CPU_State initial_cpu = {.pc=0xd668, .a=0x51, .x=0x26, .y=0x04, .sp=0x97, .status=0xbb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0163, .value=0x70}, {.addr=0xd668, .value=0xeb}, {.addr=0xd669, .value=0x63},
    };
    const struct CPU_State final_cpu = {.pc=0xd66a, .a=0x51, .x=0x26, .y=0x70, .sp=0x97, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x0163, .value=0x70}, {.addr=0xd668, .value=0xeb}, {.addr=0xd669, .value=0x63},
    };
    const struct BusEvent events[] = {
        {.addr=0xd668, .value=0xeb, .type=IO_READ},
        {.addr=0xd669, .value=0x63, .type=IO_READ},
        {.addr=0x0163, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0118) {
    const struct CPU_State initial_cpu = {.pc=0xb713, .a=0x14, .x=0xde, .y=0xa6, .sp=0x4c, .status=0x43};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b4, .value=0xda}, {.addr=0xb713, .value=0xeb}, {.addr=0xb714, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0xb715, .a=0x14, .x=0xde, .y=0xda, .sp=0x4c, .status=0xc1};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b4, .value=0xda}, {.addr=0xb713, .value=0xeb}, {.addr=0xb714, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0xb713, .value=0xeb, .type=IO_READ},
        {.addr=0xb714, .value=0xb4, .type=IO_READ},
        {.addr=0x00b4, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0119) {
    const struct CPU_State initial_cpu = {.pc=0xab48, .a=0xfd, .x=0xb0, .y=0x3a, .sp=0x0b, .status=0x43};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0010, .value=0xb9}, {.addr=0xab48, .value=0xeb}, {.addr=0xab49, .value=0x10},
    };
    const struct CPU_State final_cpu = {.pc=0xab4a, .a=0xfd, .x=0xb0, .y=0xb9, .sp=0x0b, .status=0xc1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0010, .value=0xb9}, {.addr=0xab48, .value=0xeb}, {.addr=0xab49, .value=0x10},
    };
    const struct BusEvent events[] = {
        {.addr=0xab48, .value=0xeb, .type=IO_READ},
        {.addr=0xab49, .value=0x10, .type=IO_READ},
        {.addr=0x0010, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_011A) {
    const struct CPU_State initial_cpu = {.pc=0x1fcf, .a=0x10, .x=0x18, .y=0xbf, .sp=0x4f, .status=0x7d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c6, .value=0xe3}, {.addr=0x1fcf, .value=0xeb}, {.addr=0x1fd0, .value=0xc6},
    };
    const struct CPU_State final_cpu = {.pc=0x1fd1, .a=0x10, .x=0x18, .y=0xe3, .sp=0x4f, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c6, .value=0xe3}, {.addr=0x1fcf, .value=0xeb}, {.addr=0x1fd0, .value=0xc6},
    };
    const struct BusEvent events[] = {
        {.addr=0x1fcf, .value=0xeb, .type=IO_READ},
        {.addr=0x1fd0, .value=0xc6, .type=IO_READ},
        {.addr=0x01c6, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_011B) {
    const struct CPU_State initial_cpu = {.pc=0x1f9d, .a=0x0b, .x=0x3e, .y=0xf8, .sp=0x25, .status=0x86};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cb, .value=0xb4}, {.addr=0x1f9d, .value=0xeb}, {.addr=0x1f9e, .value=0xcb},
    };
    const struct CPU_State final_cpu = {.pc=0x1f9f, .a=0x0b, .x=0x3e, .y=0xb4, .sp=0x25, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cb, .value=0xb4}, {.addr=0x1f9d, .value=0xeb}, {.addr=0x1f9e, .value=0xcb},
    };
    const struct BusEvent events[] = {
        {.addr=0x1f9d, .value=0xeb, .type=IO_READ},
        {.addr=0x1f9e, .value=0xcb, .type=IO_READ},
        {.addr=0x00cb, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_011C) {
    const struct CPU_State initial_cpu = {.pc=0xb15b, .a=0x4e, .x=0x02, .y=0xf1, .sp=0xb6, .status=0x2a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0174, .value=0x5d}, {.addr=0xb15b, .value=0xeb}, {.addr=0xb15c, .value=0x74},
    };
    const struct CPU_State final_cpu = {.pc=0xb15d, .a=0x4e, .x=0x02, .y=0x5d, .sp=0xb6, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x0174, .value=0x5d}, {.addr=0xb15b, .value=0xeb}, {.addr=0xb15c, .value=0x74},
    };
    const struct BusEvent events[] = {
        {.addr=0xb15b, .value=0xeb, .type=IO_READ},
        {.addr=0xb15c, .value=0x74, .type=IO_READ},
        {.addr=0x0174, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_011D) {
    const struct CPU_State initial_cpu = {.pc=0xb535, .a=0x17, .x=0x2d, .y=0xc4, .sp=0xd3, .status=0x9a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006a, .value=0xe0}, {.addr=0xb535, .value=0xeb}, {.addr=0xb536, .value=0x6a},
    };
    const struct CPU_State final_cpu = {.pc=0xb537, .a=0x17, .x=0x2d, .y=0xe0, .sp=0xd3, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x006a, .value=0xe0}, {.addr=0xb535, .value=0xeb}, {.addr=0xb536, .value=0x6a},
    };
    const struct BusEvent events[] = {
        {.addr=0xb535, .value=0xeb, .type=IO_READ},
        {.addr=0xb536, .value=0x6a, .type=IO_READ},
        {.addr=0x006a, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_011E) {
    const struct CPU_State initial_cpu = {.pc=0x3c54, .a=0x30, .x=0x3b, .y=0x4f, .sp=0x53, .status=0xca};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cb, .value=0x66}, {.addr=0x3c54, .value=0xeb}, {.addr=0x3c55, .value=0xcb},
    };
    const struct CPU_State final_cpu = {.pc=0x3c56, .a=0x30, .x=0x3b, .y=0x66, .sp=0x53, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cb, .value=0x66}, {.addr=0x3c54, .value=0xeb}, {.addr=0x3c55, .value=0xcb},
    };
    const struct BusEvent events[] = {
        {.addr=0x3c54, .value=0xeb, .type=IO_READ},
        {.addr=0x3c55, .value=0xcb, .type=IO_READ},
        {.addr=0x00cb, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_011F) {
    const struct CPU_State initial_cpu = {.pc=0xf74c, .a=0xff, .x=0x5a, .y=0xa3, .sp=0x69, .status=0x32};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0155, .value=0x71}, {.addr=0xf74c, .value=0xeb}, {.addr=0xf74d, .value=0x55},
    };
    const struct CPU_State final_cpu = {.pc=0xf74e, .a=0xff, .x=0x5a, .y=0x71, .sp=0x69, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x0155, .value=0x71}, {.addr=0xf74c, .value=0xeb}, {.addr=0xf74d, .value=0x55},
    };
    const struct BusEvent events[] = {
        {.addr=0xf74c, .value=0xeb, .type=IO_READ},
        {.addr=0xf74d, .value=0x55, .type=IO_READ},
        {.addr=0x0155, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0120) {
    const struct CPU_State initial_cpu = {.pc=0xaf2a, .a=0x61, .x=0x77, .y=0xae, .sp=0x25, .status=0x69};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a2, .value=0x2b}, {.addr=0xaf2a, .value=0xeb}, {.addr=0xaf2b, .value=0xa2},
    };
    const struct CPU_State final_cpu = {.pc=0xaf2c, .a=0x61, .x=0x77, .y=0x2b, .sp=0x25, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a2, .value=0x2b}, {.addr=0xaf2a, .value=0xeb}, {.addr=0xaf2b, .value=0xa2},
    };
    const struct BusEvent events[] = {
        {.addr=0xaf2a, .value=0xeb, .type=IO_READ},
        {.addr=0xaf2b, .value=0xa2, .type=IO_READ},
        {.addr=0x01a2, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0122) {
    const struct CPU_State initial_cpu = {.pc=0x6676, .a=0x78, .x=0x2c, .y=0xe3, .sp=0x8a, .status=0xd6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c2, .value=0xe1}, {.addr=0x6676, .value=0xeb}, {.addr=0x6677, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0x6678, .a=0x78, .x=0x2c, .y=0xe1, .sp=0x8a, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c2, .value=0xe1}, {.addr=0x6676, .value=0xeb}, {.addr=0x6677, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0x6676, .value=0xeb, .type=IO_READ},
        {.addr=0x6677, .value=0xc2, .type=IO_READ},
        {.addr=0x00c2, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0123) {
    const struct CPU_State initial_cpu = {.pc=0x91bf, .a=0xde, .x=0x9d, .y=0x5e, .sp=0x02, .status=0x87};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007e, .value=0x6c}, {.addr=0x91bf, .value=0xeb}, {.addr=0x91c0, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0x91c1, .a=0xde, .x=0x9d, .y=0x6c, .sp=0x02, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x007e, .value=0x6c}, {.addr=0x91bf, .value=0xeb}, {.addr=0x91c0, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0x91bf, .value=0xeb, .type=IO_READ},
        {.addr=0x91c0, .value=0x7e, .type=IO_READ},
        {.addr=0x007e, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0124) {
    const struct CPU_State initial_cpu = {.pc=0x1582, .a=0xa5, .x=0xb1, .y=0x97, .sp=0x2b, .status=0x50};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0097, .value=0x46}, {.addr=0x1582, .value=0xeb}, {.addr=0x1583, .value=0x97},
    };
    const struct CPU_State final_cpu = {.pc=0x1584, .a=0xa5, .x=0xb1, .y=0x46, .sp=0x2b, .status=0x50};
    const struct RamEntry final_ram[] = {
        {.addr=0x0097, .value=0x46}, {.addr=0x1582, .value=0xeb}, {.addr=0x1583, .value=0x97},
    };
    const struct BusEvent events[] = {
        {.addr=0x1582, .value=0xeb, .type=IO_READ},
        {.addr=0x1583, .value=0x97, .type=IO_READ},
        {.addr=0x0097, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0125) {
    const struct CPU_State initial_cpu = {.pc=0x6c6a, .a=0x77, .x=0xc2, .y=0x22, .sp=0xd5, .status=0xd5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ee, .value=0x34}, {.addr=0x6c6a, .value=0xeb}, {.addr=0x6c6b, .value=0xee},
    };
    const struct CPU_State final_cpu = {.pc=0x6c6c, .a=0x77, .x=0xc2, .y=0x34, .sp=0xd5, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ee, .value=0x34}, {.addr=0x6c6a, .value=0xeb}, {.addr=0x6c6b, .value=0xee},
    };
    const struct BusEvent events[] = {
        {.addr=0x6c6a, .value=0xeb, .type=IO_READ},
        {.addr=0x6c6b, .value=0xee, .type=IO_READ},
        {.addr=0x00ee, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0126) {
    const struct CPU_State initial_cpu = {.pc=0x5f49, .a=0x59, .x=0x55, .y=0xbf, .sp=0xae, .status=0x8e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0037, .value=0x74}, {.addr=0x5f49, .value=0xeb}, {.addr=0x5f4a, .value=0x37},
    };
    const struct CPU_State final_cpu = {.pc=0x5f4b, .a=0x59, .x=0x55, .y=0x74, .sp=0xae, .status=0x0c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0037, .value=0x74}, {.addr=0x5f49, .value=0xeb}, {.addr=0x5f4a, .value=0x37},
    };
    const struct BusEvent events[] = {
        {.addr=0x5f49, .value=0xeb, .type=IO_READ},
        {.addr=0x5f4a, .value=0x37, .type=IO_READ},
        {.addr=0x0037, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0127) {
    const struct CPU_State initial_cpu = {.pc=0x2dc4, .a=0xa3, .x=0x12, .y=0xd8, .sp=0x0e, .status=0x8d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ed, .value=0x62}, {.addr=0x2dc4, .value=0xeb}, {.addr=0x2dc5, .value=0xed},
    };
    const struct CPU_State final_cpu = {.pc=0x2dc6, .a=0xa3, .x=0x12, .y=0x62, .sp=0x0e, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ed, .value=0x62}, {.addr=0x2dc4, .value=0xeb}, {.addr=0x2dc5, .value=0xed},
    };
    const struct BusEvent events[] = {
        {.addr=0x2dc4, .value=0xeb, .type=IO_READ},
        {.addr=0x2dc5, .value=0xed, .type=IO_READ},
        {.addr=0x00ed, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0128) {
    const struct CPU_State initial_cpu = {.pc=0x920b, .a=0x1d, .x=0x12, .y=0xfd, .sp=0x5a, .status=0x0a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0059, .value=0x43}, {.addr=0x920b, .value=0xeb}, {.addr=0x920c, .value=0x59},
    };
    const struct CPU_State final_cpu = {.pc=0x920d, .a=0x1d, .x=0x12, .y=0x43, .sp=0x5a, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x0059, .value=0x43}, {.addr=0x920b, .value=0xeb}, {.addr=0x920c, .value=0x59},
    };
    const struct BusEvent events[] = {
        {.addr=0x920b, .value=0xeb, .type=IO_READ},
        {.addr=0x920c, .value=0x59, .type=IO_READ},
        {.addr=0x0059, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0129) {
    const struct CPU_State initial_cpu = {.pc=0x1948, .a=0x53, .x=0xfe, .y=0xd3, .sp=0x2d, .status=0xd4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0044, .value=0x2c}, {.addr=0x1948, .value=0xeb}, {.addr=0x1949, .value=0x44},
    };
    const struct CPU_State final_cpu = {.pc=0x194a, .a=0x53, .x=0xfe, .y=0x2c, .sp=0x2d, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x0044, .value=0x2c}, {.addr=0x1948, .value=0xeb}, {.addr=0x1949, .value=0x44},
    };
    const struct BusEvent events[] = {
        {.addr=0x1948, .value=0xeb, .type=IO_READ},
        {.addr=0x1949, .value=0x44, .type=IO_READ},
        {.addr=0x0044, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_012A) {
    const struct CPU_State initial_cpu = {.pc=0xf793, .a=0xd8, .x=0x46, .y=0x06, .sp=0xb6, .status=0xf6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0160, .value=0x4a}, {.addr=0xf793, .value=0xeb}, {.addr=0xf794, .value=0x60},
    };
    const struct CPU_State final_cpu = {.pc=0xf795, .a=0xd8, .x=0x46, .y=0x4a, .sp=0xb6, .status=0x74};
    const struct RamEntry final_ram[] = {
        {.addr=0x0160, .value=0x4a}, {.addr=0xf793, .value=0xeb}, {.addr=0xf794, .value=0x60},
    };
    const struct BusEvent events[] = {
        {.addr=0xf793, .value=0xeb, .type=IO_READ},
        {.addr=0xf794, .value=0x60, .type=IO_READ},
        {.addr=0x0160, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_012B) {
    const struct CPU_State initial_cpu = {.pc=0xc21e, .a=0x60, .x=0x59, .y=0x69, .sp=0x01, .status=0x6b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bb, .value=0x26}, {.addr=0xc21e, .value=0xeb}, {.addr=0xc21f, .value=0xbb},
    };
    const struct CPU_State final_cpu = {.pc=0xc220, .a=0x60, .x=0x59, .y=0x26, .sp=0x01, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bb, .value=0x26}, {.addr=0xc21e, .value=0xeb}, {.addr=0xc21f, .value=0xbb},
    };
    const struct BusEvent events[] = {
        {.addr=0xc21e, .value=0xeb, .type=IO_READ},
        {.addr=0xc21f, .value=0xbb, .type=IO_READ},
        {.addr=0x01bb, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_012C) {
    const struct CPU_State initial_cpu = {.pc=0x1762, .a=0x58, .x=0x99, .y=0x7a, .sp=0x96, .status=0xa3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011c, .value=0x34}, {.addr=0x1762, .value=0xeb}, {.addr=0x1763, .value=0x1c},
    };
    const struct CPU_State final_cpu = {.pc=0x1764, .a=0x58, .x=0x99, .y=0x34, .sp=0x96, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x011c, .value=0x34}, {.addr=0x1762, .value=0xeb}, {.addr=0x1763, .value=0x1c},
    };
    const struct BusEvent events[] = {
        {.addr=0x1762, .value=0xeb, .type=IO_READ},
        {.addr=0x1763, .value=0x1c, .type=IO_READ},
        {.addr=0x011c, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_012D) {
    const struct CPU_State initial_cpu = {.pc=0xa0e3, .a=0x7f, .x=0xc8, .y=0xc4, .sp=0xff, .status=0xea};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0140, .value=0xf3}, {.addr=0xa0e3, .value=0xeb}, {.addr=0xa0e4, .value=0x40},
    };
    const struct CPU_State final_cpu = {.pc=0xa0e5, .a=0x7f, .x=0xc8, .y=0xf3, .sp=0xff, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0140, .value=0xf3}, {.addr=0xa0e3, .value=0xeb}, {.addr=0xa0e4, .value=0x40},
    };
    const struct BusEvent events[] = {
        {.addr=0xa0e3, .value=0xeb, .type=IO_READ},
        {.addr=0xa0e4, .value=0x40, .type=IO_READ},
        {.addr=0x0140, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_012E) {
    const struct CPU_State initial_cpu = {.pc=0x5ee1, .a=0x33, .x=0x11, .y=0xeb, .sp=0x88, .status=0xe3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0198, .value=0x5d}, {.addr=0x5ee1, .value=0xeb}, {.addr=0x5ee2, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0x5ee3, .a=0x33, .x=0x11, .y=0x5d, .sp=0x88, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x0198, .value=0x5d}, {.addr=0x5ee1, .value=0xeb}, {.addr=0x5ee2, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0x5ee1, .value=0xeb, .type=IO_READ},
        {.addr=0x5ee2, .value=0x98, .type=IO_READ},
        {.addr=0x0198, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_012F) {
    const struct CPU_State initial_cpu = {.pc=0x1b20, .a=0xe6, .x=0x0e, .y=0xd7, .sp=0xa1, .status=0xa7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011f, .value=0x81}, {.addr=0x1b20, .value=0xeb}, {.addr=0x1b21, .value=0x1f},
    };
    const struct CPU_State final_cpu = {.pc=0x1b22, .a=0xe6, .x=0x0e, .y=0x81, .sp=0xa1, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x011f, .value=0x81}, {.addr=0x1b20, .value=0xeb}, {.addr=0x1b21, .value=0x1f},
    };
    const struct BusEvent events[] = {
        {.addr=0x1b20, .value=0xeb, .type=IO_READ},
        {.addr=0x1b21, .value=0x1f, .type=IO_READ},
        {.addr=0x011f, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0130) {
    const struct CPU_State initial_cpu = {.pc=0x1566, .a=0x81, .x=0x42, .y=0x11, .sp=0xfa, .status=0x59};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003d, .value=0x5b}, {.addr=0x1566, .value=0xeb}, {.addr=0x1567, .value=0x3d},
    };
    const struct CPU_State final_cpu = {.pc=0x1568, .a=0x81, .x=0x42, .y=0x5b, .sp=0xfa, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x003d, .value=0x5b}, {.addr=0x1566, .value=0xeb}, {.addr=0x1567, .value=0x3d},
    };
    const struct BusEvent events[] = {
        {.addr=0x1566, .value=0xeb, .type=IO_READ},
        {.addr=0x1567, .value=0x3d, .type=IO_READ},
        {.addr=0x003d, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0131) {
    const struct CPU_State initial_cpu = {.pc=0x128b, .a=0x34, .x=0x10, .y=0x91, .sp=0x0f, .status=0x32};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ee, .value=0x75}, {.addr=0x128b, .value=0xeb}, {.addr=0x128c, .value=0xee},
    };
    const struct CPU_State final_cpu = {.pc=0x128d, .a=0x34, .x=0x10, .y=0x75, .sp=0x0f, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ee, .value=0x75}, {.addr=0x128b, .value=0xeb}, {.addr=0x128c, .value=0xee},
    };
    const struct BusEvent events[] = {
        {.addr=0x128b, .value=0xeb, .type=IO_READ},
        {.addr=0x128c, .value=0xee, .type=IO_READ},
        {.addr=0x01ee, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0132) {
    const struct CPU_State initial_cpu = {.pc=0x9d60, .a=0x10, .x=0x65, .y=0x63, .sp=0x12, .status=0xaa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ae, .value=0xaf}, {.addr=0x9d60, .value=0xeb}, {.addr=0x9d61, .value=0xae},
    };
    const struct CPU_State final_cpu = {.pc=0x9d62, .a=0x10, .x=0x65, .y=0xaf, .sp=0x12, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ae, .value=0xaf}, {.addr=0x9d60, .value=0xeb}, {.addr=0x9d61, .value=0xae},
    };
    const struct BusEvent events[] = {
        {.addr=0x9d60, .value=0xeb, .type=IO_READ},
        {.addr=0x9d61, .value=0xae, .type=IO_READ},
        {.addr=0x01ae, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0133) {
    const struct CPU_State initial_cpu = {.pc=0x7c5d, .a=0xae, .x=0x1a, .y=0x54, .sp=0x1a, .status=0x64};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c9, .value=0x80}, {.addr=0x7c5d, .value=0xeb}, {.addr=0x7c5e, .value=0xc9},
    };
    const struct CPU_State final_cpu = {.pc=0x7c5f, .a=0xae, .x=0x1a, .y=0x80, .sp=0x1a, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c9, .value=0x80}, {.addr=0x7c5d, .value=0xeb}, {.addr=0x7c5e, .value=0xc9},
    };
    const struct BusEvent events[] = {
        {.addr=0x7c5d, .value=0xeb, .type=IO_READ},
        {.addr=0x7c5e, .value=0xc9, .type=IO_READ},
        {.addr=0x01c9, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0134) {
    const struct CPU_State initial_cpu = {.pc=0xf50a, .a=0x57, .x=0x86, .y=0x74, .sp=0x57, .status=0xf4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0189, .value=0x99}, {.addr=0xf50a, .value=0xeb}, {.addr=0xf50b, .value=0x89},
    };
    const struct CPU_State final_cpu = {.pc=0xf50c, .a=0x57, .x=0x86, .y=0x99, .sp=0x57, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0189, .value=0x99}, {.addr=0xf50a, .value=0xeb}, {.addr=0xf50b, .value=0x89},
    };
    const struct BusEvent events[] = {
        {.addr=0xf50a, .value=0xeb, .type=IO_READ},
        {.addr=0xf50b, .value=0x89, .type=IO_READ},
        {.addr=0x0189, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0135) {
    const struct CPU_State initial_cpu = {.pc=0x0b4d, .a=0x07, .x=0xf8, .y=0xae, .sp=0x0e, .status=0xd5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004a, .value=0x9d}, {.addr=0x0b4d, .value=0xeb}, {.addr=0x0b4e, .value=0x4a},
    };
    const struct CPU_State final_cpu = {.pc=0x0b4f, .a=0x07, .x=0xf8, .y=0x9d, .sp=0x0e, .status=0xd5};
    const struct RamEntry final_ram[] = {
        {.addr=0x004a, .value=0x9d}, {.addr=0x0b4d, .value=0xeb}, {.addr=0x0b4e, .value=0x4a},
    };
    const struct BusEvent events[] = {
        {.addr=0x0b4d, .value=0xeb, .type=IO_READ},
        {.addr=0x0b4e, .value=0x4a, .type=IO_READ},
        {.addr=0x004a, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0136) {
    const struct CPU_State initial_cpu = {.pc=0xc911, .a=0x3c, .x=0x04, .y=0xd4, .sp=0x43, .status=0xe0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010d, .value=0x6c}, {.addr=0xc911, .value=0xeb}, {.addr=0xc912, .value=0x0d},
    };
    const struct CPU_State final_cpu = {.pc=0xc913, .a=0x3c, .x=0x04, .y=0x6c, .sp=0x43, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x010d, .value=0x6c}, {.addr=0xc911, .value=0xeb}, {.addr=0xc912, .value=0x0d},
    };
    const struct BusEvent events[] = {
        {.addr=0xc911, .value=0xeb, .type=IO_READ},
        {.addr=0xc912, .value=0x0d, .type=IO_READ},
        {.addr=0x010d, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0137) {
    const struct CPU_State initial_cpu = {.pc=0xc76d, .a=0xd3, .x=0x9a, .y=0x13, .sp=0x15, .status=0xd3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0091, .value=0xe5}, {.addr=0xc76d, .value=0xeb}, {.addr=0xc76e, .value=0x91},
    };
    const struct CPU_State final_cpu = {.pc=0xc76f, .a=0xd3, .x=0x9a, .y=0xe5, .sp=0x15, .status=0xd1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0091, .value=0xe5}, {.addr=0xc76d, .value=0xeb}, {.addr=0xc76e, .value=0x91},
    };
    const struct BusEvent events[] = {
        {.addr=0xc76d, .value=0xeb, .type=IO_READ},
        {.addr=0xc76e, .value=0x91, .type=IO_READ},
        {.addr=0x0091, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0138) {
    const struct CPU_State initial_cpu = {.pc=0xeb4b, .a=0x0f, .x=0xfa, .y=0x12, .sp=0xef, .status=0x4e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00be, .value=0x7a}, {.addr=0xeb4b, .value=0xeb}, {.addr=0xeb4c, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0xeb4d, .a=0x0f, .x=0xfa, .y=0x7a, .sp=0xef, .status=0x4c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00be, .value=0x7a}, {.addr=0xeb4b, .value=0xeb}, {.addr=0xeb4c, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0xeb4b, .value=0xeb, .type=IO_READ},
        {.addr=0xeb4c, .value=0xbe, .type=IO_READ},
        {.addr=0x00be, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0139) {
    const struct CPU_State initial_cpu = {.pc=0x8212, .a=0x0b, .x=0x64, .y=0x17, .sp=0xb9, .status=0xa1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e3, .value=0xa2}, {.addr=0x8212, .value=0xeb}, {.addr=0x8213, .value=0xe3},
    };
    const struct CPU_State final_cpu = {.pc=0x8214, .a=0x0b, .x=0x64, .y=0xa2, .sp=0xb9, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e3, .value=0xa2}, {.addr=0x8212, .value=0xeb}, {.addr=0x8213, .value=0xe3},
    };
    const struct BusEvent events[] = {
        {.addr=0x8212, .value=0xeb, .type=IO_READ},
        {.addr=0x8213, .value=0xe3, .type=IO_READ},
        {.addr=0x01e3, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_013A) {
    const struct CPU_State initial_cpu = {.pc=0x082a, .a=0xae, .x=0x6f, .y=0xb7, .sp=0x12, .status=0x61};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0127, .value=0x7f}, {.addr=0x082a, .value=0xeb}, {.addr=0x082b, .value=0x27},
    };
    const struct CPU_State final_cpu = {.pc=0x082c, .a=0xae, .x=0x6f, .y=0x7f, .sp=0x12, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x0127, .value=0x7f}, {.addr=0x082a, .value=0xeb}, {.addr=0x082b, .value=0x27},
    };
    const struct BusEvent events[] = {
        {.addr=0x082a, .value=0xeb, .type=IO_READ},
        {.addr=0x082b, .value=0x27, .type=IO_READ},
        {.addr=0x0127, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_013B) {
    const struct CPU_State initial_cpu = {.pc=0x1130, .a=0x3d, .x=0xd4, .y=0xf4, .sp=0x20, .status=0xb8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cc, .value=0x1d}, {.addr=0x1130, .value=0xeb}, {.addr=0x1131, .value=0xcc},
    };
    const struct CPU_State final_cpu = {.pc=0x1132, .a=0x3d, .x=0xd4, .y=0x1d, .sp=0x20, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cc, .value=0x1d}, {.addr=0x1130, .value=0xeb}, {.addr=0x1131, .value=0xcc},
    };
    const struct BusEvent events[] = {
        {.addr=0x1130, .value=0xeb, .type=IO_READ},
        {.addr=0x1131, .value=0xcc, .type=IO_READ},
        {.addr=0x01cc, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_013C) {
    const struct CPU_State initial_cpu = {.pc=0x46c9, .a=0x4e, .x=0xbf, .y=0x04, .sp=0xa8, .status=0x01};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d9, .value=0x04}, {.addr=0x46c9, .value=0xeb}, {.addr=0x46ca, .value=0xd9},
    };
    const struct CPU_State final_cpu = {.pc=0x46cb, .a=0x4e, .x=0xbf, .y=0x04, .sp=0xa8, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d9, .value=0x04}, {.addr=0x46c9, .value=0xeb}, {.addr=0x46ca, .value=0xd9},
    };
    const struct BusEvent events[] = {
        {.addr=0x46c9, .value=0xeb, .type=IO_READ},
        {.addr=0x46ca, .value=0xd9, .type=IO_READ},
        {.addr=0x00d9, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_013D) {
    const struct CPU_State initial_cpu = {.pc=0x5fdc, .a=0xe7, .x=0xb2, .y=0xe8, .sp=0xa1, .status=0xa0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d2, .value=0x8a}, {.addr=0x5fdc, .value=0xeb}, {.addr=0x5fdd, .value=0xd2},
    };
    const struct CPU_State final_cpu = {.pc=0x5fde, .a=0xe7, .x=0xb2, .y=0x8a, .sp=0xa1, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d2, .value=0x8a}, {.addr=0x5fdc, .value=0xeb}, {.addr=0x5fdd, .value=0xd2},
    };
    const struct BusEvent events[] = {
        {.addr=0x5fdc, .value=0xeb, .type=IO_READ},
        {.addr=0x5fdd, .value=0xd2, .type=IO_READ},
        {.addr=0x01d2, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_013E) {
    const struct CPU_State initial_cpu = {.pc=0x87ed, .a=0x29, .x=0x25, .y=0x0d, .sp=0x77, .status=0x1a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0044, .value=0x73}, {.addr=0x87ed, .value=0xeb}, {.addr=0x87ee, .value=0x44},
    };
    const struct CPU_State final_cpu = {.pc=0x87ef, .a=0x29, .x=0x25, .y=0x73, .sp=0x77, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x0044, .value=0x73}, {.addr=0x87ed, .value=0xeb}, {.addr=0x87ee, .value=0x44},
    };
    const struct BusEvent events[] = {
        {.addr=0x87ed, .value=0xeb, .type=IO_READ},
        {.addr=0x87ee, .value=0x44, .type=IO_READ},
        {.addr=0x0044, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_013F) {
    const struct CPU_State initial_cpu = {.pc=0xebc7, .a=0x24, .x=0xdb, .y=0xd4, .sp=0x21, .status=0x81};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003e, .value=0x89}, {.addr=0xebc7, .value=0xeb}, {.addr=0xebc8, .value=0x3e},
    };
    const struct CPU_State final_cpu = {.pc=0xebc9, .a=0x24, .x=0xdb, .y=0x89, .sp=0x21, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x003e, .value=0x89}, {.addr=0xebc7, .value=0xeb}, {.addr=0xebc8, .value=0x3e},
    };
    const struct BusEvent events[] = {
        {.addr=0xebc7, .value=0xeb, .type=IO_READ},
        {.addr=0xebc8, .value=0x3e, .type=IO_READ},
        {.addr=0x003e, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0140) {
    const struct CPU_State initial_cpu = {.pc=0x5d1f, .a=0xfe, .x=0x5c, .y=0x5b, .sp=0x8f, .status=0x49};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003d, .value=0xdf}, {.addr=0x5d1f, .value=0xeb}, {.addr=0x5d20, .value=0x3d},
    };
    const struct CPU_State final_cpu = {.pc=0x5d21, .a=0xfe, .x=0x5c, .y=0xdf, .sp=0x8f, .status=0xc9};
    const struct RamEntry final_ram[] = {
        {.addr=0x003d, .value=0xdf}, {.addr=0x5d1f, .value=0xeb}, {.addr=0x5d20, .value=0x3d},
    };
    const struct BusEvent events[] = {
        {.addr=0x5d1f, .value=0xeb, .type=IO_READ},
        {.addr=0x5d20, .value=0x3d, .type=IO_READ},
        {.addr=0x003d, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0141) {
    const struct CPU_State initial_cpu = {.pc=0x743b, .a=0x31, .x=0x76, .y=0xff, .sp=0x86, .status=0xe7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c0, .value=0x40}, {.addr=0x743b, .value=0xeb}, {.addr=0x743c, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0x743d, .a=0x31, .x=0x76, .y=0x40, .sp=0x86, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c0, .value=0x40}, {.addr=0x743b, .value=0xeb}, {.addr=0x743c, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0x743b, .value=0xeb, .type=IO_READ},
        {.addr=0x743c, .value=0xc0, .type=IO_READ},
        {.addr=0x01c0, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0142) {
    const struct CPU_State initial_cpu = {.pc=0xe9a6, .a=0xcc, .x=0x0f, .y=0xcb, .sp=0x00, .status=0xb2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015e, .value=0xb8}, {.addr=0xe9a6, .value=0xeb}, {.addr=0xe9a7, .value=0x5e},
    };
    const struct CPU_State final_cpu = {.pc=0xe9a8, .a=0xcc, .x=0x0f, .y=0xb8, .sp=0x00, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x015e, .value=0xb8}, {.addr=0xe9a6, .value=0xeb}, {.addr=0xe9a7, .value=0x5e},
    };
    const struct BusEvent events[] = {
        {.addr=0xe9a6, .value=0xeb, .type=IO_READ},
        {.addr=0xe9a7, .value=0x5e, .type=IO_READ},
        {.addr=0x015e, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0143) {
    const struct CPU_State initial_cpu = {.pc=0x150e, .a=0xca, .x=0x51, .y=0xd3, .sp=0x63, .status=0x3d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0118, .value=0xe9}, {.addr=0x150e, .value=0xeb}, {.addr=0x150f, .value=0x18},
    };
    const struct CPU_State final_cpu = {.pc=0x1510, .a=0xca, .x=0x51, .y=0xe9, .sp=0x63, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0118, .value=0xe9}, {.addr=0x150e, .value=0xeb}, {.addr=0x150f, .value=0x18},
    };
    const struct BusEvent events[] = {
        {.addr=0x150e, .value=0xeb, .type=IO_READ},
        {.addr=0x150f, .value=0x18, .type=IO_READ},
        {.addr=0x0118, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0144) {
    const struct CPU_State initial_cpu = {.pc=0x6af9, .a=0x7b, .x=0x7c, .y=0x2c, .sp=0x8e, .status=0x15};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009c, .value=0x3f}, {.addr=0x6af9, .value=0xeb}, {.addr=0x6afa, .value=0x9c},
    };
    const struct CPU_State final_cpu = {.pc=0x6afb, .a=0x7b, .x=0x7c, .y=0x3f, .sp=0x8e, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x009c, .value=0x3f}, {.addr=0x6af9, .value=0xeb}, {.addr=0x6afa, .value=0x9c},
    };
    const struct BusEvent events[] = {
        {.addr=0x6af9, .value=0xeb, .type=IO_READ},
        {.addr=0x6afa, .value=0x9c, .type=IO_READ},
        {.addr=0x009c, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0145) {
    const struct CPU_State initial_cpu = {.pc=0x7802, .a=0xf9, .x=0xc5, .y=0x7b, .sp=0xb4, .status=0x2f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b5, .value=0x6f}, {.addr=0x7802, .value=0xeb}, {.addr=0x7803, .value=0xb5},
    };
    const struct CPU_State final_cpu = {.pc=0x7804, .a=0xf9, .x=0xc5, .y=0x6f, .sp=0xb4, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b5, .value=0x6f}, {.addr=0x7802, .value=0xeb}, {.addr=0x7803, .value=0xb5},
    };
    const struct BusEvent events[] = {
        {.addr=0x7802, .value=0xeb, .type=IO_READ},
        {.addr=0x7803, .value=0xb5, .type=IO_READ},
        {.addr=0x01b5, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0146) {
    const struct CPU_State initial_cpu = {.pc=0xd427, .a=0xa2, .x=0x21, .y=0x0d, .sp=0x1f, .status=0x00};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0092, .value=0xb1}, {.addr=0xd427, .value=0xeb}, {.addr=0xd428, .value=0x92},
    };
    const struct CPU_State final_cpu = {.pc=0xd429, .a=0xa2, .x=0x21, .y=0xb1, .sp=0x1f, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x0092, .value=0xb1}, {.addr=0xd427, .value=0xeb}, {.addr=0xd428, .value=0x92},
    };
    const struct BusEvent events[] = {
        {.addr=0xd427, .value=0xeb, .type=IO_READ},
        {.addr=0xd428, .value=0x92, .type=IO_READ},
        {.addr=0x0092, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0147) {
    const struct CPU_State initial_cpu = {.pc=0x7b6b, .a=0x8b, .x=0xa8, .y=0xb8, .sp=0x38, .status=0x10};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00dd, .value=0x9b}, {.addr=0x7b6b, .value=0xeb}, {.addr=0x7b6c, .value=0xdd},
    };
    const struct CPU_State final_cpu = {.pc=0x7b6d, .a=0x8b, .x=0xa8, .y=0x9b, .sp=0x38, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x00dd, .value=0x9b}, {.addr=0x7b6b, .value=0xeb}, {.addr=0x7b6c, .value=0xdd},
    };
    const struct BusEvent events[] = {
        {.addr=0x7b6b, .value=0xeb, .type=IO_READ},
        {.addr=0x7b6c, .value=0xdd, .type=IO_READ},
        {.addr=0x00dd, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0148) {
    const struct CPU_State initial_cpu = {.pc=0x452b, .a=0x92, .x=0xd1, .y=0x3a, .sp=0xad, .status=0x6e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017b, .value=0x76}, {.addr=0x452b, .value=0xeb}, {.addr=0x452c, .value=0x7b},
    };
    const struct CPU_State final_cpu = {.pc=0x452d, .a=0x92, .x=0xd1, .y=0x76, .sp=0xad, .status=0x6c};
    const struct RamEntry final_ram[] = {
        {.addr=0x017b, .value=0x76}, {.addr=0x452b, .value=0xeb}, {.addr=0x452c, .value=0x7b},
    };
    const struct BusEvent events[] = {
        {.addr=0x452b, .value=0xeb, .type=IO_READ},
        {.addr=0x452c, .value=0x7b, .type=IO_READ},
        {.addr=0x017b, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0149) {
    const struct CPU_State initial_cpu = {.pc=0x10fb, .a=0x20, .x=0x4d, .y=0x8a, .sp=0x57, .status=0x6a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019a, .value=0x9d}, {.addr=0x10fb, .value=0xeb}, {.addr=0x10fc, .value=0x9a},
    };
    const struct CPU_State final_cpu = {.pc=0x10fd, .a=0x20, .x=0x4d, .y=0x9d, .sp=0x57, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x019a, .value=0x9d}, {.addr=0x10fb, .value=0xeb}, {.addr=0x10fc, .value=0x9a},
    };
    const struct BusEvent events[] = {
        {.addr=0x10fb, .value=0xeb, .type=IO_READ},
        {.addr=0x10fc, .value=0x9a, .type=IO_READ},
        {.addr=0x019a, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_014A) {
    const struct CPU_State initial_cpu = {.pc=0x2e4c, .a=0xe6, .x=0x00, .y=0xc7, .sp=0xbc, .status=0x92};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b4, .value=0x14}, {.addr=0x2e4c, .value=0xeb}, {.addr=0x2e4d, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0x2e4e, .a=0xe6, .x=0x00, .y=0x14, .sp=0xbc, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b4, .value=0x14}, {.addr=0x2e4c, .value=0xeb}, {.addr=0x2e4d, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0x2e4c, .value=0xeb, .type=IO_READ},
        {.addr=0x2e4d, .value=0xb4, .type=IO_READ},
        {.addr=0x00b4, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_014B) {
    const struct CPU_State initial_cpu = {.pc=0x9e2b, .a=0x96, .x=0xfa, .y=0xad, .sp=0xa8, .status=0x95};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0036, .value=0x5d}, {.addr=0x9e2b, .value=0xeb}, {.addr=0x9e2c, .value=0x36},
    };
    const struct CPU_State final_cpu = {.pc=0x9e2d, .a=0x96, .x=0xfa, .y=0x5d, .sp=0xa8, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x0036, .value=0x5d}, {.addr=0x9e2b, .value=0xeb}, {.addr=0x9e2c, .value=0x36},
    };
    const struct BusEvent events[] = {
        {.addr=0x9e2b, .value=0xeb, .type=IO_READ},
        {.addr=0x9e2c, .value=0x36, .type=IO_READ},
        {.addr=0x0036, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_014C) {
    const struct CPU_State initial_cpu = {.pc=0x075f, .a=0xeb, .x=0xde, .y=0xac, .sp=0xbe, .status=0x95};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e6, .value=0x04}, {.addr=0x075f, .value=0xeb}, {.addr=0x0760, .value=0xe6},
    };
    const struct CPU_State final_cpu = {.pc=0x0761, .a=0xeb, .x=0xde, .y=0x04, .sp=0xbe, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e6, .value=0x04}, {.addr=0x075f, .value=0xeb}, {.addr=0x0760, .value=0xe6},
    };
    const struct BusEvent events[] = {
        {.addr=0x075f, .value=0xeb, .type=IO_READ},
        {.addr=0x0760, .value=0xe6, .type=IO_READ},
        {.addr=0x00e6, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_014D) {
    const struct CPU_State initial_cpu = {.pc=0x189a, .a=0x1f, .x=0x81, .y=0xde, .sp=0x2b, .status=0x2f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0129, .value=0x86}, {.addr=0x189a, .value=0xeb}, {.addr=0x189b, .value=0x29},
    };
    const struct CPU_State final_cpu = {.pc=0x189c, .a=0x1f, .x=0x81, .y=0x86, .sp=0x2b, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x0129, .value=0x86}, {.addr=0x189a, .value=0xeb}, {.addr=0x189b, .value=0x29},
    };
    const struct BusEvent events[] = {
        {.addr=0x189a, .value=0xeb, .type=IO_READ},
        {.addr=0x189b, .value=0x29, .type=IO_READ},
        {.addr=0x0129, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_014E) {
    const struct CPU_State initial_cpu = {.pc=0x20b5, .a=0x9d, .x=0xa4, .y=0x08, .sp=0x0e, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0028, .value=0x91}, {.addr=0x20b5, .value=0xeb}, {.addr=0x20b6, .value=0x28},
    };
    const struct CPU_State final_cpu = {.pc=0x20b7, .a=0x9d, .x=0xa4, .y=0x91, .sp=0x0e, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0028, .value=0x91}, {.addr=0x20b5, .value=0xeb}, {.addr=0x20b6, .value=0x28},
    };
    const struct BusEvent events[] = {
        {.addr=0x20b5, .value=0xeb, .type=IO_READ},
        {.addr=0x20b6, .value=0x28, .type=IO_READ},
        {.addr=0x0028, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_014F) {
    const struct CPU_State initial_cpu = {.pc=0x0282, .a=0xda, .x=0xd2, .y=0xa4, .sp=0x62, .status=0x28};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b1, .value=0xad}, {.addr=0x0282, .value=0xeb}, {.addr=0x0283, .value=0xb1},
    };
    const struct CPU_State final_cpu = {.pc=0x0284, .a=0xda, .x=0xd2, .y=0xad, .sp=0x62, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b1, .value=0xad}, {.addr=0x0282, .value=0xeb}, {.addr=0x0283, .value=0xb1},
    };
    const struct BusEvent events[] = {
        {.addr=0x0282, .value=0xeb, .type=IO_READ},
        {.addr=0x0283, .value=0xb1, .type=IO_READ},
        {.addr=0x01b1, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0150) {
    const struct CPU_State initial_cpu = {.pc=0xa9cb, .a=0xc5, .x=0x25, .y=0xed, .sp=0x18, .status=0xe8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0117, .value=0xd6}, {.addr=0xa9cb, .value=0xeb}, {.addr=0xa9cc, .value=0x17},
    };
    const struct CPU_State final_cpu = {.pc=0xa9cd, .a=0xc5, .x=0x25, .y=0xd6, .sp=0x18, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0117, .value=0xd6}, {.addr=0xa9cb, .value=0xeb}, {.addr=0xa9cc, .value=0x17},
    };
    const struct BusEvent events[] = {
        {.addr=0xa9cb, .value=0xeb, .type=IO_READ},
        {.addr=0xa9cc, .value=0x17, .type=IO_READ},
        {.addr=0x0117, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0151) {
    const struct CPU_State initial_cpu = {.pc=0x9778, .a=0xd8, .x=0x60, .y=0x38, .sp=0x89, .status=0x23};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010c, .value=0x32}, {.addr=0x9778, .value=0xeb}, {.addr=0x9779, .value=0x0c},
    };
    const struct CPU_State final_cpu = {.pc=0x977a, .a=0xd8, .x=0x60, .y=0x32, .sp=0x89, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x010c, .value=0x32}, {.addr=0x9778, .value=0xeb}, {.addr=0x9779, .value=0x0c},
    };
    const struct BusEvent events[] = {
        {.addr=0x9778, .value=0xeb, .type=IO_READ},
        {.addr=0x9779, .value=0x0c, .type=IO_READ},
        {.addr=0x010c, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0152) {
    const struct CPU_State initial_cpu = {.pc=0x98a4, .a=0x09, .x=0x97, .y=0x61, .sp=0xbe, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012d, .value=0x74}, {.addr=0x98a4, .value=0xeb}, {.addr=0x98a5, .value=0x2d},
    };
    const struct CPU_State final_cpu = {.pc=0x98a6, .a=0x09, .x=0x97, .y=0x74, .sp=0xbe, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x012d, .value=0x74}, {.addr=0x98a4, .value=0xeb}, {.addr=0x98a5, .value=0x2d},
    };
    const struct BusEvent events[] = {
        {.addr=0x98a4, .value=0xeb, .type=IO_READ},
        {.addr=0x98a5, .value=0x2d, .type=IO_READ},
        {.addr=0x012d, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0153) {
    const struct CPU_State initial_cpu = {.pc=0x57af, .a=0x47, .x=0x1d, .y=0x29, .sp=0xf2, .status=0xe7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010b, .value=0x5a}, {.addr=0x57af, .value=0xeb}, {.addr=0x57b0, .value=0x0b},
    };
    const struct CPU_State final_cpu = {.pc=0x57b1, .a=0x47, .x=0x1d, .y=0x5a, .sp=0xf2, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x010b, .value=0x5a}, {.addr=0x57af, .value=0xeb}, {.addr=0x57b0, .value=0x0b},
    };
    const struct BusEvent events[] = {
        {.addr=0x57af, .value=0xeb, .type=IO_READ},
        {.addr=0x57b0, .value=0x0b, .type=IO_READ},
        {.addr=0x010b, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0154) {
    const struct CPU_State initial_cpu = {.pc=0x413f, .a=0xc5, .x=0x90, .y=0x0c, .sp=0x97, .status=0xe4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011c, .value=0xe5}, {.addr=0x413f, .value=0xeb}, {.addr=0x4140, .value=0x1c},
    };
    const struct CPU_State final_cpu = {.pc=0x4141, .a=0xc5, .x=0x90, .y=0xe5, .sp=0x97, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x011c, .value=0xe5}, {.addr=0x413f, .value=0xeb}, {.addr=0x4140, .value=0x1c},
    };
    const struct BusEvent events[] = {
        {.addr=0x413f, .value=0xeb, .type=IO_READ},
        {.addr=0x4140, .value=0x1c, .type=IO_READ},
        {.addr=0x011c, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0155) {
    const struct CPU_State initial_cpu = {.pc=0xd2ee, .a=0x34, .x=0x4b, .y=0xb5, .sp=0xce, .status=0xa4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0167, .value=0xb3}, {.addr=0xd2ee, .value=0xeb}, {.addr=0xd2ef, .value=0x67},
    };
    const struct CPU_State final_cpu = {.pc=0xd2f0, .a=0x34, .x=0x4b, .y=0xb3, .sp=0xce, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0167, .value=0xb3}, {.addr=0xd2ee, .value=0xeb}, {.addr=0xd2ef, .value=0x67},
    };
    const struct BusEvent events[] = {
        {.addr=0xd2ee, .value=0xeb, .type=IO_READ},
        {.addr=0xd2ef, .value=0x67, .type=IO_READ},
        {.addr=0x0167, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0156) {
    const struct CPU_State initial_cpu = {.pc=0x1d80, .a=0xec, .x=0x2d, .y=0x73, .sp=0xc8, .status=0x85};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0029, .value=0xb1}, {.addr=0x1d80, .value=0xeb}, {.addr=0x1d81, .value=0x29},
    };
    const struct CPU_State final_cpu = {.pc=0x1d82, .a=0xec, .x=0x2d, .y=0xb1, .sp=0xc8, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x0029, .value=0xb1}, {.addr=0x1d80, .value=0xeb}, {.addr=0x1d81, .value=0x29},
    };
    const struct BusEvent events[] = {
        {.addr=0x1d80, .value=0xeb, .type=IO_READ},
        {.addr=0x1d81, .value=0x29, .type=IO_READ},
        {.addr=0x0029, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0157) {
    const struct CPU_State initial_cpu = {.pc=0x6e96, .a=0x18, .x=0x36, .y=0xcb, .sp=0x3d, .status=0xf4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01dd, .value=0x5d}, {.addr=0x6e96, .value=0xeb}, {.addr=0x6e97, .value=0xdd},
    };
    const struct CPU_State final_cpu = {.pc=0x6e98, .a=0x18, .x=0x36, .y=0x5d, .sp=0x3d, .status=0x74};
    const struct RamEntry final_ram[] = {
        {.addr=0x01dd, .value=0x5d}, {.addr=0x6e96, .value=0xeb}, {.addr=0x6e97, .value=0xdd},
    };
    const struct BusEvent events[] = {
        {.addr=0x6e96, .value=0xeb, .type=IO_READ},
        {.addr=0x6e97, .value=0xdd, .type=IO_READ},
        {.addr=0x01dd, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0159) {
    const struct CPU_State initial_cpu = {.pc=0x103c, .a=0x25, .x=0xcd, .y=0x0c, .sp=0x7f, .status=0x77};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0153, .value=0xb3}, {.addr=0x103c, .value=0xeb}, {.addr=0x103d, .value=0x53},
    };
    const struct CPU_State final_cpu = {.pc=0x103e, .a=0x25, .x=0xcd, .y=0xb3, .sp=0x7f, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0153, .value=0xb3}, {.addr=0x103c, .value=0xeb}, {.addr=0x103d, .value=0x53},
    };
    const struct BusEvent events[] = {
        {.addr=0x103c, .value=0xeb, .type=IO_READ},
        {.addr=0x103d, .value=0x53, .type=IO_READ},
        {.addr=0x0153, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_015A) {
    const struct CPU_State initial_cpu = {.pc=0x2d33, .a=0x3f, .x=0xf7, .y=0x3b, .sp=0xd5, .status=0xcd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cf, .value=0xa1}, {.addr=0x2d33, .value=0xeb}, {.addr=0x2d34, .value=0xcf},
    };
    const struct CPU_State final_cpu = {.pc=0x2d35, .a=0x3f, .x=0xf7, .y=0xa1, .sp=0xd5, .status=0xcd};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cf, .value=0xa1}, {.addr=0x2d33, .value=0xeb}, {.addr=0x2d34, .value=0xcf},
    };
    const struct BusEvent events[] = {
        {.addr=0x2d33, .value=0xeb, .type=IO_READ},
        {.addr=0x2d34, .value=0xcf, .type=IO_READ},
        {.addr=0x00cf, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_015B) {
    const struct CPU_State initial_cpu = {.pc=0xd9c3, .a=0xe3, .x=0x1a, .y=0x2c, .sp=0xec, .status=0x9f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a3, .value=0xe1}, {.addr=0xd9c3, .value=0xeb}, {.addr=0xd9c4, .value=0xa3},
    };
    const struct CPU_State final_cpu = {.pc=0xd9c5, .a=0xe3, .x=0x1a, .y=0xe1, .sp=0xec, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a3, .value=0xe1}, {.addr=0xd9c3, .value=0xeb}, {.addr=0xd9c4, .value=0xa3},
    };
    const struct BusEvent events[] = {
        {.addr=0xd9c3, .value=0xeb, .type=IO_READ},
        {.addr=0xd9c4, .value=0xa3, .type=IO_READ},
        {.addr=0x00a3, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_015C) {
    const struct CPU_State initial_cpu = {.pc=0x6157, .a=0x8b, .x=0x38, .y=0xf2, .sp=0x50, .status=0x3a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011f, .value=0x3c}, {.addr=0x6157, .value=0xeb}, {.addr=0x6158, .value=0x1f},
    };
    const struct CPU_State final_cpu = {.pc=0x6159, .a=0x8b, .x=0x38, .y=0x3c, .sp=0x50, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x011f, .value=0x3c}, {.addr=0x6157, .value=0xeb}, {.addr=0x6158, .value=0x1f},
    };
    const struct BusEvent events[] = {
        {.addr=0x6157, .value=0xeb, .type=IO_READ},
        {.addr=0x6158, .value=0x1f, .type=IO_READ},
        {.addr=0x011f, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_015D) {
    const struct CPU_State initial_cpu = {.pc=0x6b7e, .a=0xfd, .x=0x6a, .y=0x22, .sp=0x3a, .status=0xfc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015e, .value=0x00}, {.addr=0x6b7e, .value=0xeb}, {.addr=0x6b7f, .value=0x5e},
    };
    const struct CPU_State final_cpu = {.pc=0x6b80, .a=0xfd, .x=0x6a, .y=0x00, .sp=0x3a, .status=0x7e};
    const struct RamEntry final_ram[] = {
        {.addr=0x015e, .value=0x00}, {.addr=0x6b7e, .value=0xeb}, {.addr=0x6b7f, .value=0x5e},
    };
    const struct BusEvent events[] = {
        {.addr=0x6b7e, .value=0xeb, .type=IO_READ},
        {.addr=0x6b7f, .value=0x5e, .type=IO_READ},
        {.addr=0x015e, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_015E) {
    const struct CPU_State initial_cpu = {.pc=0x8bbd, .a=0xc0, .x=0x3c, .y=0x29, .sp=0x85, .status=0x80};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c1, .value=0xd5}, {.addr=0x8bbd, .value=0xeb}, {.addr=0x8bbe, .value=0xc1},
    };
    const struct CPU_State final_cpu = {.pc=0x8bbf, .a=0xc0, .x=0x3c, .y=0xd5, .sp=0x85, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c1, .value=0xd5}, {.addr=0x8bbd, .value=0xeb}, {.addr=0x8bbe, .value=0xc1},
    };
    const struct BusEvent events[] = {
        {.addr=0x8bbd, .value=0xeb, .type=IO_READ},
        {.addr=0x8bbe, .value=0xc1, .type=IO_READ},
        {.addr=0x00c1, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_015F) {
    const struct CPU_State initial_cpu = {.pc=0xdb0b, .a=0xf4, .x=0x38, .y=0xa0, .sp=0x18, .status=0x55};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cf, .value=0x57}, {.addr=0xdb0b, .value=0xeb}, {.addr=0xdb0c, .value=0xcf},
    };
    const struct CPU_State final_cpu = {.pc=0xdb0d, .a=0xf4, .x=0x38, .y=0x57, .sp=0x18, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cf, .value=0x57}, {.addr=0xdb0b, .value=0xeb}, {.addr=0xdb0c, .value=0xcf},
    };
    const struct BusEvent events[] = {
        {.addr=0xdb0b, .value=0xeb, .type=IO_READ},
        {.addr=0xdb0c, .value=0xcf, .type=IO_READ},
        {.addr=0x00cf, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0160) {
    const struct CPU_State initial_cpu = {.pc=0xc568, .a=0x1e, .x=0x85, .y=0xb5, .sp=0xf1, .status=0x3e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ef, .value=0x1a}, {.addr=0xc568, .value=0xeb}, {.addr=0xc569, .value=0xef},
    };
    const struct CPU_State final_cpu = {.pc=0xc56a, .a=0x1e, .x=0x85, .y=0x1a, .sp=0xf1, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ef, .value=0x1a}, {.addr=0xc568, .value=0xeb}, {.addr=0xc569, .value=0xef},
    };
    const struct BusEvent events[] = {
        {.addr=0xc568, .value=0xeb, .type=IO_READ},
        {.addr=0xc569, .value=0xef, .type=IO_READ},
        {.addr=0x01ef, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0161) {
    const struct CPU_State initial_cpu = {.pc=0xab32, .a=0xed, .x=0x35, .y=0x47, .sp=0x3b, .status=0xe5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011e, .value=0xa3}, {.addr=0xab32, .value=0xeb}, {.addr=0xab33, .value=0x1e},
    };
    const struct CPU_State final_cpu = {.pc=0xab34, .a=0xed, .x=0x35, .y=0xa3, .sp=0x3b, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x011e, .value=0xa3}, {.addr=0xab32, .value=0xeb}, {.addr=0xab33, .value=0x1e},
    };
    const struct BusEvent events[] = {
        {.addr=0xab32, .value=0xeb, .type=IO_READ},
        {.addr=0xab33, .value=0x1e, .type=IO_READ},
        {.addr=0x011e, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0162) {
    const struct CPU_State initial_cpu = {.pc=0x5ab6, .a=0x0f, .x=0xe8, .y=0x11, .sp=0x30, .status=0x8a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b0, .value=0x67}, {.addr=0x5ab6, .value=0xeb}, {.addr=0x5ab7, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0x5ab8, .a=0x0f, .x=0xe8, .y=0x67, .sp=0x30, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b0, .value=0x67}, {.addr=0x5ab6, .value=0xeb}, {.addr=0x5ab7, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0x5ab6, .value=0xeb, .type=IO_READ},
        {.addr=0x5ab7, .value=0xb0, .type=IO_READ},
        {.addr=0x00b0, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0163) {
    const struct CPU_State initial_cpu = {.pc=0x87c1, .a=0x5b, .x=0xfc, .y=0x55, .sp=0xd3, .status=0x4e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0076, .value=0xe0}, {.addr=0x87c1, .value=0xeb}, {.addr=0x87c2, .value=0x76},
    };
    const struct CPU_State final_cpu = {.pc=0x87c3, .a=0x5b, .x=0xfc, .y=0xe0, .sp=0xd3, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0076, .value=0xe0}, {.addr=0x87c1, .value=0xeb}, {.addr=0x87c2, .value=0x76},
    };
    const struct BusEvent events[] = {
        {.addr=0x87c1, .value=0xeb, .type=IO_READ},
        {.addr=0x87c2, .value=0x76, .type=IO_READ},
        {.addr=0x0076, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0164) {
    const struct CPU_State initial_cpu = {.pc=0x1061, .a=0x1b, .x=0x5c, .y=0x9b, .sp=0xa6, .status=0x90};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009c, .value=0xef}, {.addr=0x1061, .value=0xeb}, {.addr=0x1062, .value=0x9c},
    };
    const struct CPU_State final_cpu = {.pc=0x1063, .a=0x1b, .x=0x5c, .y=0xef, .sp=0xa6, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x009c, .value=0xef}, {.addr=0x1061, .value=0xeb}, {.addr=0x1062, .value=0x9c},
    };
    const struct BusEvent events[] = {
        {.addr=0x1061, .value=0xeb, .type=IO_READ},
        {.addr=0x1062, .value=0x9c, .type=IO_READ},
        {.addr=0x009c, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0165) {
    const struct CPU_State initial_cpu = {.pc=0x22ae, .a=0x9d, .x=0x34, .y=0x90, .sp=0x34, .status=0x1f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0021, .value=0xbc}, {.addr=0x22ae, .value=0xeb}, {.addr=0x22af, .value=0x21},
    };
    const struct CPU_State final_cpu = {.pc=0x22b0, .a=0x9d, .x=0x34, .y=0xbc, .sp=0x34, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0021, .value=0xbc}, {.addr=0x22ae, .value=0xeb}, {.addr=0x22af, .value=0x21},
    };
    const struct BusEvent events[] = {
        {.addr=0x22ae, .value=0xeb, .type=IO_READ},
        {.addr=0x22af, .value=0x21, .type=IO_READ},
        {.addr=0x0021, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0166) {
    const struct CPU_State initial_cpu = {.pc=0x303e, .a=0x9d, .x=0xf3, .y=0x9e, .sp=0x6b, .status=0x57};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d4, .value=0xcd}, {.addr=0x303e, .value=0xeb}, {.addr=0x303f, .value=0xd4},
    };
    const struct CPU_State final_cpu = {.pc=0x3040, .a=0x9d, .x=0xf3, .y=0xcd, .sp=0x6b, .status=0xd5};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d4, .value=0xcd}, {.addr=0x303e, .value=0xeb}, {.addr=0x303f, .value=0xd4},
    };
    const struct BusEvent events[] = {
        {.addr=0x303e, .value=0xeb, .type=IO_READ},
        {.addr=0x303f, .value=0xd4, .type=IO_READ},
        {.addr=0x00d4, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0167) {
    const struct CPU_State initial_cpu = {.pc=0x23a1, .a=0x18, .x=0x18, .y=0x69, .sp=0xa0, .status=0x66};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0107, .value=0x0c}, {.addr=0x23a1, .value=0xeb}, {.addr=0x23a2, .value=0x07},
    };
    const struct CPU_State final_cpu = {.pc=0x23a3, .a=0x18, .x=0x18, .y=0x0c, .sp=0xa0, .status=0x64};
    const struct RamEntry final_ram[] = {
        {.addr=0x0107, .value=0x0c}, {.addr=0x23a1, .value=0xeb}, {.addr=0x23a2, .value=0x07},
    };
    const struct BusEvent events[] = {
        {.addr=0x23a1, .value=0xeb, .type=IO_READ},
        {.addr=0x23a2, .value=0x07, .type=IO_READ},
        {.addr=0x0107, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0168) {
    const struct CPU_State initial_cpu = {.pc=0xa8aa, .a=0x3f, .x=0x21, .y=0xd3, .sp=0xcc, .status=0xa6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ae, .value=0xbf}, {.addr=0xa8aa, .value=0xeb}, {.addr=0xa8ab, .value=0xae},
    };
    const struct CPU_State final_cpu = {.pc=0xa8ac, .a=0x3f, .x=0x21, .y=0xbf, .sp=0xcc, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ae, .value=0xbf}, {.addr=0xa8aa, .value=0xeb}, {.addr=0xa8ab, .value=0xae},
    };
    const struct BusEvent events[] = {
        {.addr=0xa8aa, .value=0xeb, .type=IO_READ},
        {.addr=0xa8ab, .value=0xae, .type=IO_READ},
        {.addr=0x01ae, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0169) {
    const struct CPU_State initial_cpu = {.pc=0xea83, .a=0x6d, .x=0xc1, .y=0x92, .sp=0xac, .status=0x36};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f4, .value=0xfd}, {.addr=0xea83, .value=0xeb}, {.addr=0xea84, .value=0xf4},
    };
    const struct CPU_State final_cpu = {.pc=0xea85, .a=0x6d, .x=0xc1, .y=0xfd, .sp=0xac, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f4, .value=0xfd}, {.addr=0xea83, .value=0xeb}, {.addr=0xea84, .value=0xf4},
    };
    const struct BusEvent events[] = {
        {.addr=0xea83, .value=0xeb, .type=IO_READ},
        {.addr=0xea84, .value=0xf4, .type=IO_READ},
        {.addr=0x01f4, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_016A) {
    const struct CPU_State initial_cpu = {.pc=0xdbe4, .a=0xce, .x=0xf8, .y=0x61, .sp=0xe2, .status=0xfa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012a, .value=0x5b}, {.addr=0xdbe4, .value=0xeb}, {.addr=0xdbe5, .value=0x2a},
    };
    const struct CPU_State final_cpu = {.pc=0xdbe6, .a=0xce, .x=0xf8, .y=0x5b, .sp=0xe2, .status=0x78};
    const struct RamEntry final_ram[] = {
        {.addr=0x012a, .value=0x5b}, {.addr=0xdbe4, .value=0xeb}, {.addr=0xdbe5, .value=0x2a},
    };
    const struct BusEvent events[] = {
        {.addr=0xdbe4, .value=0xeb, .type=IO_READ},
        {.addr=0xdbe5, .value=0x2a, .type=IO_READ},
        {.addr=0x012a, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_016B) {
    const struct CPU_State initial_cpu = {.pc=0x3447, .a=0xe0, .x=0x8c, .y=0xd4, .sp=0x03, .status=0x08};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0008, .value=0x9c}, {.addr=0x3447, .value=0xeb}, {.addr=0x3448, .value=0x08},
    };
    const struct CPU_State final_cpu = {.pc=0x3449, .a=0xe0, .x=0x8c, .y=0x9c, .sp=0x03, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x0008, .value=0x9c}, {.addr=0x3447, .value=0xeb}, {.addr=0x3448, .value=0x08},
    };
    const struct BusEvent events[] = {
        {.addr=0x3447, .value=0xeb, .type=IO_READ},
        {.addr=0x3448, .value=0x08, .type=IO_READ},
        {.addr=0x0008, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_016C) {
    const struct CPU_State initial_cpu = {.pc=0xa70a, .a=0xd2, .x=0xd2, .y=0x3c, .sp=0x78, .status=0x24};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0103, .value=0x68}, {.addr=0xa70a, .value=0xeb}, {.addr=0xa70b, .value=0x03},
    };
    const struct CPU_State final_cpu = {.pc=0xa70c, .a=0xd2, .x=0xd2, .y=0x68, .sp=0x78, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x0103, .value=0x68}, {.addr=0xa70a, .value=0xeb}, {.addr=0xa70b, .value=0x03},
    };
    const struct BusEvent events[] = {
        {.addr=0xa70a, .value=0xeb, .type=IO_READ},
        {.addr=0xa70b, .value=0x03, .type=IO_READ},
        {.addr=0x0103, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_016D) {
    const struct CPU_State initial_cpu = {.pc=0x0154, .a=0xeb, .x=0x35, .y=0x5a, .sp=0x58, .status=0x3a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0154, .value=0xeb}, {.addr=0x0155, .value=0xb6}, {.addr=0x01b6, .value=0xda},
    };
    const struct CPU_State final_cpu = {.pc=0x0156, .a=0xeb, .x=0x35, .y=0xda, .sp=0x58, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0154, .value=0xeb}, {.addr=0x0155, .value=0xb6}, {.addr=0x01b6, .value=0xda},
    };
    const struct BusEvent events[] = {
        {.addr=0x0154, .value=0xeb, .type=IO_READ},
        {.addr=0x0155, .value=0xb6, .type=IO_READ},
        {.addr=0x01b6, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_016E) {
    const struct CPU_State initial_cpu = {.pc=0xfb30, .a=0x0e, .x=0xe5, .y=0x69, .sp=0xb7, .status=0x91};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0021, .value=0xe2}, {.addr=0xfb30, .value=0xeb}, {.addr=0xfb31, .value=0x21},
    };
    const struct CPU_State final_cpu = {.pc=0xfb32, .a=0x0e, .x=0xe5, .y=0xe2, .sp=0xb7, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x0021, .value=0xe2}, {.addr=0xfb30, .value=0xeb}, {.addr=0xfb31, .value=0x21},
    };
    const struct BusEvent events[] = {
        {.addr=0xfb30, .value=0xeb, .type=IO_READ},
        {.addr=0xfb31, .value=0x21, .type=IO_READ},
        {.addr=0x0021, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_016F) {
    const struct CPU_State initial_cpu = {.pc=0x173f, .a=0x5d, .x=0xb1, .y=0xea, .sp=0xa5, .status=0x7e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a1, .value=0x55}, {.addr=0x173f, .value=0xeb}, {.addr=0x1740, .value=0xa1},
    };
    const struct CPU_State final_cpu = {.pc=0x1741, .a=0x5d, .x=0xb1, .y=0x55, .sp=0xa5, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a1, .value=0x55}, {.addr=0x173f, .value=0xeb}, {.addr=0x1740, .value=0xa1},
    };
    const struct BusEvent events[] = {
        {.addr=0x173f, .value=0xeb, .type=IO_READ},
        {.addr=0x1740, .value=0xa1, .type=IO_READ},
        {.addr=0x01a1, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0170) {
    const struct CPU_State initial_cpu = {.pc=0x7a67, .a=0x6f, .x=0xb2, .y=0x47, .sp=0x6a, .status=0x25};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a2, .value=0x63}, {.addr=0x7a67, .value=0xeb}, {.addr=0x7a68, .value=0xa2},
    };
    const struct CPU_State final_cpu = {.pc=0x7a69, .a=0x6f, .x=0xb2, .y=0x63, .sp=0x6a, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a2, .value=0x63}, {.addr=0x7a67, .value=0xeb}, {.addr=0x7a68, .value=0xa2},
    };
    const struct BusEvent events[] = {
        {.addr=0x7a67, .value=0xeb, .type=IO_READ},
        {.addr=0x7a68, .value=0xa2, .type=IO_READ},
        {.addr=0x01a2, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0171) {
    const struct CPU_State initial_cpu = {.pc=0x01b6, .a=0x20, .x=0xaa, .y=0x57, .sp=0xce, .status=0xe3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b6, .value=0xeb}, {.addr=0x01b7, .value=0xf3}, {.addr=0x01f3, .value=0xb2},
    };
    const struct CPU_State final_cpu = {.pc=0x01b8, .a=0x20, .x=0xaa, .y=0xb2, .sp=0xce, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b6, .value=0xeb}, {.addr=0x01b7, .value=0xf3}, {.addr=0x01f3, .value=0xb2},
    };
    const struct BusEvent events[] = {
        {.addr=0x01b6, .value=0xeb, .type=IO_READ},
        {.addr=0x01b7, .value=0xf3, .type=IO_READ},
        {.addr=0x01f3, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0172) {
    const struct CPU_State initial_cpu = {.pc=0x1ae5, .a=0x23, .x=0xd8, .y=0xc7, .sp=0xe5, .status=0x36};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0179, .value=0x41}, {.addr=0x1ae5, .value=0xeb}, {.addr=0x1ae6, .value=0x79},
    };
    const struct CPU_State final_cpu = {.pc=0x1ae7, .a=0x23, .x=0xd8, .y=0x41, .sp=0xe5, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x0179, .value=0x41}, {.addr=0x1ae5, .value=0xeb}, {.addr=0x1ae6, .value=0x79},
    };
    const struct BusEvent events[] = {
        {.addr=0x1ae5, .value=0xeb, .type=IO_READ},
        {.addr=0x1ae6, .value=0x79, .type=IO_READ},
        {.addr=0x0179, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0173) {
    const struct CPU_State initial_cpu = {.pc=0x3498, .a=0xb9, .x=0x8f, .y=0xed, .sp=0xe9, .status=0xeb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a1, .value=0x32}, {.addr=0x3498, .value=0xeb}, {.addr=0x3499, .value=0xa1},
    };
    const struct CPU_State final_cpu = {.pc=0x349a, .a=0xb9, .x=0x8f, .y=0x32, .sp=0xe9, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a1, .value=0x32}, {.addr=0x3498, .value=0xeb}, {.addr=0x3499, .value=0xa1},
    };
    const struct BusEvent events[] = {
        {.addr=0x3498, .value=0xeb, .type=IO_READ},
        {.addr=0x3499, .value=0xa1, .type=IO_READ},
        {.addr=0x01a1, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0174) {
    const struct CPU_State initial_cpu = {.pc=0xd6d3, .a=0x97, .x=0x6e, .y=0x39, .sp=0x9d, .status=0x19};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d3, .value=0xb4}, {.addr=0xd6d3, .value=0xeb}, {.addr=0xd6d4, .value=0xd3},
    };
    const struct CPU_State final_cpu = {.pc=0xd6d5, .a=0x97, .x=0x6e, .y=0xb4, .sp=0x9d, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d3, .value=0xb4}, {.addr=0xd6d3, .value=0xeb}, {.addr=0xd6d4, .value=0xd3},
    };
    const struct BusEvent events[] = {
        {.addr=0xd6d3, .value=0xeb, .type=IO_READ},
        {.addr=0xd6d4, .value=0xd3, .type=IO_READ},
        {.addr=0x00d3, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0175) {
    const struct CPU_State initial_cpu = {.pc=0x8403, .a=0x06, .x=0x30, .y=0x99, .sp=0x8b, .status=0x80};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0055, .value=0x14}, {.addr=0x8403, .value=0xeb}, {.addr=0x8404, .value=0x55},
    };
    const struct CPU_State final_cpu = {.pc=0x8405, .a=0x06, .x=0x30, .y=0x14, .sp=0x8b, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x0055, .value=0x14}, {.addr=0x8403, .value=0xeb}, {.addr=0x8404, .value=0x55},
    };
    const struct BusEvent events[] = {
        {.addr=0x8403, .value=0xeb, .type=IO_READ},
        {.addr=0x8404, .value=0x55, .type=IO_READ},
        {.addr=0x0055, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0176) {
    const struct CPU_State initial_cpu = {.pc=0x3f8e, .a=0xca, .x=0x25, .y=0x0c, .sp=0x04, .status=0xa3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011f, .value=0xe4}, {.addr=0x3f8e, .value=0xeb}, {.addr=0x3f8f, .value=0x1f},
    };
    const struct CPU_State final_cpu = {.pc=0x3f90, .a=0xca, .x=0x25, .y=0xe4, .sp=0x04, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x011f, .value=0xe4}, {.addr=0x3f8e, .value=0xeb}, {.addr=0x3f8f, .value=0x1f},
    };
    const struct BusEvent events[] = {
        {.addr=0x3f8e, .value=0xeb, .type=IO_READ},
        {.addr=0x3f8f, .value=0x1f, .type=IO_READ},
        {.addr=0x011f, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0177) {
    const struct CPU_State initial_cpu = {.pc=0xfdf5, .a=0x18, .x=0x47, .y=0xe9, .sp=0xf6, .status=0x99};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005d, .value=0xdb}, {.addr=0xfdf5, .value=0xeb}, {.addr=0xfdf6, .value=0x5d},
    };
    const struct CPU_State final_cpu = {.pc=0xfdf7, .a=0x18, .x=0x47, .y=0xdb, .sp=0xf6, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x005d, .value=0xdb}, {.addr=0xfdf5, .value=0xeb}, {.addr=0xfdf6, .value=0x5d},
    };
    const struct BusEvent events[] = {
        {.addr=0xfdf5, .value=0xeb, .type=IO_READ},
        {.addr=0xfdf6, .value=0x5d, .type=IO_READ},
        {.addr=0x005d, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0178) {
    const struct CPU_State initial_cpu = {.pc=0x29c5, .a=0xde, .x=0x83, .y=0x0d, .sp=0x26, .status=0xb9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b2, .value=0xa2}, {.addr=0x29c5, .value=0xeb}, {.addr=0x29c6, .value=0xb2},
    };
    const struct CPU_State final_cpu = {.pc=0x29c7, .a=0xde, .x=0x83, .y=0xa2, .sp=0x26, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b2, .value=0xa2}, {.addr=0x29c5, .value=0xeb}, {.addr=0x29c6, .value=0xb2},
    };
    const struct BusEvent events[] = {
        {.addr=0x29c5, .value=0xeb, .type=IO_READ},
        {.addr=0x29c6, .value=0xb2, .type=IO_READ},
        {.addr=0x01b2, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0179) {
    const struct CPU_State initial_cpu = {.pc=0x4ec8, .a=0x0e, .x=0x2a, .y=0xd4, .sp=0xda, .status=0xd3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005c, .value=0x23}, {.addr=0x4ec8, .value=0xeb}, {.addr=0x4ec9, .value=0x5c},
    };
    const struct CPU_State final_cpu = {.pc=0x4eca, .a=0x0e, .x=0x2a, .y=0x23, .sp=0xda, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x005c, .value=0x23}, {.addr=0x4ec8, .value=0xeb}, {.addr=0x4ec9, .value=0x5c},
    };
    const struct BusEvent events[] = {
        {.addr=0x4ec8, .value=0xeb, .type=IO_READ},
        {.addr=0x4ec9, .value=0x5c, .type=IO_READ},
        {.addr=0x005c, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_017A) {
    const struct CPU_State initial_cpu = {.pc=0x1780, .a=0x95, .x=0xad, .y=0x0e, .sp=0xdb, .status=0x0e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009a, .value=0x42}, {.addr=0x1780, .value=0xeb}, {.addr=0x1781, .value=0x9a},
    };
    const struct CPU_State final_cpu = {.pc=0x1782, .a=0x95, .x=0xad, .y=0x42, .sp=0xdb, .status=0x0c};
    const struct RamEntry final_ram[] = {
        {.addr=0x009a, .value=0x42}, {.addr=0x1780, .value=0xeb}, {.addr=0x1781, .value=0x9a},
    };
    const struct BusEvent events[] = {
        {.addr=0x1780, .value=0xeb, .type=IO_READ},
        {.addr=0x1781, .value=0x9a, .type=IO_READ},
        {.addr=0x009a, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_017B) {
    const struct CPU_State initial_cpu = {.pc=0xeef4, .a=0xfd, .x=0x54, .y=0xcd, .sp=0x1b, .status=0x38};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015b, .value=0x0d}, {.addr=0xeef4, .value=0xeb}, {.addr=0xeef5, .value=0x5b},
    };
    const struct CPU_State final_cpu = {.pc=0xeef6, .a=0xfd, .x=0x54, .y=0x0d, .sp=0x1b, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x015b, .value=0x0d}, {.addr=0xeef4, .value=0xeb}, {.addr=0xeef5, .value=0x5b},
    };
    const struct BusEvent events[] = {
        {.addr=0xeef4, .value=0xeb, .type=IO_READ},
        {.addr=0xeef5, .value=0x5b, .type=IO_READ},
        {.addr=0x015b, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_017C) {
    const struct CPU_State initial_cpu = {.pc=0xbbea, .a=0x58, .x=0x14, .y=0x32, .sp=0xd0, .status=0xd3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0060, .value=0x1b}, {.addr=0xbbea, .value=0xeb}, {.addr=0xbbeb, .value=0x60},
    };
    const struct CPU_State final_cpu = {.pc=0xbbec, .a=0x58, .x=0x14, .y=0x1b, .sp=0xd0, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x0060, .value=0x1b}, {.addr=0xbbea, .value=0xeb}, {.addr=0xbbeb, .value=0x60},
    };
    const struct BusEvent events[] = {
        {.addr=0xbbea, .value=0xeb, .type=IO_READ},
        {.addr=0xbbeb, .value=0x60, .type=IO_READ},
        {.addr=0x0060, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_017D) {
    const struct CPU_State initial_cpu = {.pc=0x4238, .a=0x72, .x=0xa1, .y=0x4a, .sp=0x45, .status=0xa5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01aa, .value=0x4d}, {.addr=0x4238, .value=0xeb}, {.addr=0x4239, .value=0xaa},
    };
    const struct CPU_State final_cpu = {.pc=0x423a, .a=0x72, .x=0xa1, .y=0x4d, .sp=0x45, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x01aa, .value=0x4d}, {.addr=0x4238, .value=0xeb}, {.addr=0x4239, .value=0xaa},
    };
    const struct BusEvent events[] = {
        {.addr=0x4238, .value=0xeb, .type=IO_READ},
        {.addr=0x4239, .value=0xaa, .type=IO_READ},
        {.addr=0x01aa, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_017E) {
    const struct CPU_State initial_cpu = {.pc=0x7285, .a=0xc0, .x=0x66, .y=0x28, .sp=0xca, .status=0x27};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0126, .value=0xb7}, {.addr=0x7285, .value=0xeb}, {.addr=0x7286, .value=0x26},
    };
    const struct CPU_State final_cpu = {.pc=0x7287, .a=0xc0, .x=0x66, .y=0xb7, .sp=0xca, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0126, .value=0xb7}, {.addr=0x7285, .value=0xeb}, {.addr=0x7286, .value=0x26},
    };
    const struct BusEvent events[] = {
        {.addr=0x7285, .value=0xeb, .type=IO_READ},
        {.addr=0x7286, .value=0x26, .type=IO_READ},
        {.addr=0x0126, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_017F) {
    const struct CPU_State initial_cpu = {.pc=0x01a7, .a=0xa2, .x=0x8f, .y=0x32, .sp=0xfb, .status=0x06};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0059, .value=0x1e}, {.addr=0x01a7, .value=0xeb}, {.addr=0x01a8, .value=0x59},
    };
    const struct CPU_State final_cpu = {.pc=0x01a9, .a=0xa2, .x=0x8f, .y=0x1e, .sp=0xfb, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x0059, .value=0x1e}, {.addr=0x01a7, .value=0xeb}, {.addr=0x01a8, .value=0x59},
    };
    const struct BusEvent events[] = {
        {.addr=0x01a7, .value=0xeb, .type=IO_READ},
        {.addr=0x01a8, .value=0x59, .type=IO_READ},
        {.addr=0x0059, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0180) {
    const struct CPU_State initial_cpu = {.pc=0xa155, .a=0x87, .x=0xe9, .y=0x14, .sp=0xa4, .status=0xc0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e6, .value=0x74}, {.addr=0xa155, .value=0xeb}, {.addr=0xa156, .value=0xe6},
    };
    const struct CPU_State final_cpu = {.pc=0xa157, .a=0x87, .x=0xe9, .y=0x74, .sp=0xa4, .status=0x40};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e6, .value=0x74}, {.addr=0xa155, .value=0xeb}, {.addr=0xa156, .value=0xe6},
    };
    const struct BusEvent events[] = {
        {.addr=0xa155, .value=0xeb, .type=IO_READ},
        {.addr=0xa156, .value=0xe6, .type=IO_READ},
        {.addr=0x00e6, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0181) {
    const struct CPU_State initial_cpu = {.pc=0x4d1f, .a=0x10, .x=0x2c, .y=0x17, .sp=0xca, .status=0x92};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008e, .value=0x5d}, {.addr=0x4d1f, .value=0xeb}, {.addr=0x4d20, .value=0x8e},
    };
    const struct CPU_State final_cpu = {.pc=0x4d21, .a=0x10, .x=0x2c, .y=0x5d, .sp=0xca, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x008e, .value=0x5d}, {.addr=0x4d1f, .value=0xeb}, {.addr=0x4d20, .value=0x8e},
    };
    const struct BusEvent events[] = {
        {.addr=0x4d1f, .value=0xeb, .type=IO_READ},
        {.addr=0x4d20, .value=0x8e, .type=IO_READ},
        {.addr=0x008e, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0182) {
    const struct CPU_State initial_cpu = {.pc=0x01de, .a=0x83, .x=0xcb, .y=0xad, .sp=0x82, .status=0x1b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0023, .value=0x55}, {.addr=0x01de, .value=0xeb}, {.addr=0x01df, .value=0x23},
    };
    const struct CPU_State final_cpu = {.pc=0x01e0, .a=0x83, .x=0xcb, .y=0x55, .sp=0x82, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x0023, .value=0x55}, {.addr=0x01de, .value=0xeb}, {.addr=0x01df, .value=0x23},
    };
    const struct BusEvent events[] = {
        {.addr=0x01de, .value=0xeb, .type=IO_READ},
        {.addr=0x01df, .value=0x23, .type=IO_READ},
        {.addr=0x0023, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0184) {
    const struct CPU_State initial_cpu = {.pc=0x2a3e, .a=0xdd, .x=0x2a, .y=0x6f, .sp=0x36, .status=0xb7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0170, .value=0xf0}, {.addr=0x2a3e, .value=0xeb}, {.addr=0x2a3f, .value=0x70},
    };
    const struct CPU_State final_cpu = {.pc=0x2a40, .a=0xdd, .x=0x2a, .y=0xf0, .sp=0x36, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0170, .value=0xf0}, {.addr=0x2a3e, .value=0xeb}, {.addr=0x2a3f, .value=0x70},
    };
    const struct BusEvent events[] = {
        {.addr=0x2a3e, .value=0xeb, .type=IO_READ},
        {.addr=0x2a3f, .value=0x70, .type=IO_READ},
        {.addr=0x0170, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0185) {
    const struct CPU_State initial_cpu = {.pc=0x77e8, .a=0x6c, .x=0x47, .y=0xed, .sp=0x01, .status=0xc0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007b, .value=0xe1}, {.addr=0x77e8, .value=0xeb}, {.addr=0x77e9, .value=0x7b},
    };
    const struct CPU_State final_cpu = {.pc=0x77ea, .a=0x6c, .x=0x47, .y=0xe1, .sp=0x01, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x007b, .value=0xe1}, {.addr=0x77e8, .value=0xeb}, {.addr=0x77e9, .value=0x7b},
    };
    const struct BusEvent events[] = {
        {.addr=0x77e8, .value=0xeb, .type=IO_READ},
        {.addr=0x77e9, .value=0x7b, .type=IO_READ},
        {.addr=0x007b, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0186) {
    const struct CPU_State initial_cpu = {.pc=0x1c7a, .a=0xf0, .x=0x2e, .y=0x4a, .sp=0x59, .status=0x4e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0043, .value=0xb8}, {.addr=0x1c7a, .value=0xeb}, {.addr=0x1c7b, .value=0x43},
    };
    const struct CPU_State final_cpu = {.pc=0x1c7c, .a=0xf0, .x=0x2e, .y=0xb8, .sp=0x59, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0043, .value=0xb8}, {.addr=0x1c7a, .value=0xeb}, {.addr=0x1c7b, .value=0x43},
    };
    const struct BusEvent events[] = {
        {.addr=0x1c7a, .value=0xeb, .type=IO_READ},
        {.addr=0x1c7b, .value=0x43, .type=IO_READ},
        {.addr=0x0043, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0187) {
    const struct CPU_State initial_cpu = {.pc=0xc363, .a=0xa9, .x=0xfc, .y=0xeb, .sp=0x90, .status=0xd4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0090, .value=0x6d}, {.addr=0xc363, .value=0xeb}, {.addr=0xc364, .value=0x90},
    };
    const struct CPU_State final_cpu = {.pc=0xc365, .a=0xa9, .x=0xfc, .y=0x6d, .sp=0x90, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x0090, .value=0x6d}, {.addr=0xc363, .value=0xeb}, {.addr=0xc364, .value=0x90},
    };
    const struct BusEvent events[] = {
        {.addr=0xc363, .value=0xeb, .type=IO_READ},
        {.addr=0xc364, .value=0x90, .type=IO_READ},
        {.addr=0x0090, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0188) {
    const struct CPU_State initial_cpu = {.pc=0x9135, .a=0x8d, .x=0xdd, .y=0xaf, .sp=0xa7, .status=0xd4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e9, .value=0x3b}, {.addr=0x9135, .value=0xeb}, {.addr=0x9136, .value=0xe9},
    };
    const struct CPU_State final_cpu = {.pc=0x9137, .a=0x8d, .x=0xdd, .y=0x3b, .sp=0xa7, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e9, .value=0x3b}, {.addr=0x9135, .value=0xeb}, {.addr=0x9136, .value=0xe9},
    };
    const struct BusEvent events[] = {
        {.addr=0x9135, .value=0xeb, .type=IO_READ},
        {.addr=0x9136, .value=0xe9, .type=IO_READ},
        {.addr=0x00e9, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0189) {
    const struct CPU_State initial_cpu = {.pc=0xb13b, .a=0xb5, .x=0x9c, .y=0x02, .sp=0x50, .status=0x4d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c7, .value=0xa3}, {.addr=0xb13b, .value=0xeb}, {.addr=0xb13c, .value=0xc7},
    };
    const struct CPU_State final_cpu = {.pc=0xb13d, .a=0xb5, .x=0x9c, .y=0xa3, .sp=0x50, .status=0xcd};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c7, .value=0xa3}, {.addr=0xb13b, .value=0xeb}, {.addr=0xb13c, .value=0xc7},
    };
    const struct BusEvent events[] = {
        {.addr=0xb13b, .value=0xeb, .type=IO_READ},
        {.addr=0xb13c, .value=0xc7, .type=IO_READ},
        {.addr=0x00c7, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_018A) {
    const struct CPU_State initial_cpu = {.pc=0xa0d0, .a=0x41, .x=0xad, .y=0x2e, .sp=0x0c, .status=0x2d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0119, .value=0x76}, {.addr=0xa0d0, .value=0xeb}, {.addr=0xa0d1, .value=0x19},
    };
    const struct CPU_State final_cpu = {.pc=0xa0d2, .a=0x41, .x=0xad, .y=0x76, .sp=0x0c, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0119, .value=0x76}, {.addr=0xa0d0, .value=0xeb}, {.addr=0xa0d1, .value=0x19},
    };
    const struct BusEvent events[] = {
        {.addr=0xa0d0, .value=0xeb, .type=IO_READ},
        {.addr=0xa0d1, .value=0x19, .type=IO_READ},
        {.addr=0x0119, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_018B) {
    const struct CPU_State initial_cpu = {.pc=0x800a, .a=0x4b, .x=0x3d, .y=0x52, .sp=0x6d, .status=0x11};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0035, .value=0xc9}, {.addr=0x800a, .value=0xeb}, {.addr=0x800b, .value=0x35},
    };
    const struct CPU_State final_cpu = {.pc=0x800c, .a=0x4b, .x=0x3d, .y=0xc9, .sp=0x6d, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x0035, .value=0xc9}, {.addr=0x800a, .value=0xeb}, {.addr=0x800b, .value=0x35},
    };
    const struct BusEvent events[] = {
        {.addr=0x800a, .value=0xeb, .type=IO_READ},
        {.addr=0x800b, .value=0x35, .type=IO_READ},
        {.addr=0x0035, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_018C) {
    const struct CPU_State initial_cpu = {.pc=0x19d4, .a=0xe7, .x=0xc0, .y=0x15, .sp=0x08, .status=0xac};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0118, .value=0xd3}, {.addr=0x19d4, .value=0xeb}, {.addr=0x19d5, .value=0x18},
    };
    const struct CPU_State final_cpu = {.pc=0x19d6, .a=0xe7, .x=0xc0, .y=0xd3, .sp=0x08, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x0118, .value=0xd3}, {.addr=0x19d4, .value=0xeb}, {.addr=0x19d5, .value=0x18},
    };
    const struct BusEvent events[] = {
        {.addr=0x19d4, .value=0xeb, .type=IO_READ},
        {.addr=0x19d5, .value=0x18, .type=IO_READ},
        {.addr=0x0118, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_018E) {
    const struct CPU_State initial_cpu = {.pc=0x83c1, .a=0x15, .x=0x3b, .y=0x69, .sp=0x6f, .status=0x6c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e4, .value=0x3c}, {.addr=0x83c1, .value=0xeb}, {.addr=0x83c2, .value=0xe4},
    };
    const struct CPU_State final_cpu = {.pc=0x83c3, .a=0x15, .x=0x3b, .y=0x3c, .sp=0x6f, .status=0x6c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e4, .value=0x3c}, {.addr=0x83c1, .value=0xeb}, {.addr=0x83c2, .value=0xe4},
    };
    const struct BusEvent events[] = {
        {.addr=0x83c1, .value=0xeb, .type=IO_READ},
        {.addr=0x83c2, .value=0xe4, .type=IO_READ},
        {.addr=0x01e4, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_018F) {
    const struct CPU_State initial_cpu = {.pc=0xc066, .a=0xdd, .x=0x7a, .y=0x5a, .sp=0x4e, .status=0xfa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0112, .value=0x6e}, {.addr=0xc066, .value=0xeb}, {.addr=0xc067, .value=0x12},
    };
    const struct CPU_State final_cpu = {.pc=0xc068, .a=0xdd, .x=0x7a, .y=0x6e, .sp=0x4e, .status=0x78};
    const struct RamEntry final_ram[] = {
        {.addr=0x0112, .value=0x6e}, {.addr=0xc066, .value=0xeb}, {.addr=0xc067, .value=0x12},
    };
    const struct BusEvent events[] = {
        {.addr=0xc066, .value=0xeb, .type=IO_READ},
        {.addr=0xc067, .value=0x12, .type=IO_READ},
        {.addr=0x0112, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0190) {
    const struct CPU_State initial_cpu = {.pc=0xff46, .a=0xf5, .x=0xcf, .y=0x6b, .sp=0xf1, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015c, .value=0xbc}, {.addr=0xff46, .value=0xeb}, {.addr=0xff47, .value=0x5c},
    };
    const struct CPU_State final_cpu = {.pc=0xff48, .a=0xf5, .x=0xcf, .y=0xbc, .sp=0xf1, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x015c, .value=0xbc}, {.addr=0xff46, .value=0xeb}, {.addr=0xff47, .value=0x5c},
    };
    const struct BusEvent events[] = {
        {.addr=0xff46, .value=0xeb, .type=IO_READ},
        {.addr=0xff47, .value=0x5c, .type=IO_READ},
        {.addr=0x015c, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0191) {
    const struct CPU_State initial_cpu = {.pc=0x5980, .a=0x48, .x=0xc2, .y=0xb6, .sp=0xa1, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007e, .value=0x3a}, {.addr=0x5980, .value=0xeb}, {.addr=0x5981, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0x5982, .a=0x48, .x=0xc2, .y=0x3a, .sp=0xa1, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x007e, .value=0x3a}, {.addr=0x5980, .value=0xeb}, {.addr=0x5981, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0x5980, .value=0xeb, .type=IO_READ},
        {.addr=0x5981, .value=0x7e, .type=IO_READ},
        {.addr=0x007e, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0192) {
    const struct CPU_State initial_cpu = {.pc=0x1db8, .a=0xad, .x=0x45, .y=0x28, .sp=0x4f, .status=0x0f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004e, .value=0x61}, {.addr=0x1db8, .value=0xeb}, {.addr=0x1db9, .value=0x4e},
    };
    const struct CPU_State final_cpu = {.pc=0x1dba, .a=0xad, .x=0x45, .y=0x61, .sp=0x4f, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x004e, .value=0x61}, {.addr=0x1db8, .value=0xeb}, {.addr=0x1db9, .value=0x4e},
    };
    const struct BusEvent events[] = {
        {.addr=0x1db8, .value=0xeb, .type=IO_READ},
        {.addr=0x1db9, .value=0x4e, .type=IO_READ},
        {.addr=0x004e, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0193) {
    const struct CPU_State initial_cpu = {.pc=0xe993, .a=0x65, .x=0x0f, .y=0x21, .sp=0x90, .status=0xa1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f5, .value=0x20}, {.addr=0xe993, .value=0xeb}, {.addr=0xe994, .value=0xf5},
    };
    const struct CPU_State final_cpu = {.pc=0xe995, .a=0x65, .x=0x0f, .y=0x20, .sp=0x90, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f5, .value=0x20}, {.addr=0xe993, .value=0xeb}, {.addr=0xe994, .value=0xf5},
    };
    const struct BusEvent events[] = {
        {.addr=0xe993, .value=0xeb, .type=IO_READ},
        {.addr=0xe994, .value=0xf5, .type=IO_READ},
        {.addr=0x01f5, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0194) {
    const struct CPU_State initial_cpu = {.pc=0xdf24, .a=0x40, .x=0x99, .y=0x7d, .sp=0xb9, .status=0x78};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bb, .value=0xa1}, {.addr=0xdf24, .value=0xeb}, {.addr=0xdf25, .value=0xbb},
    };
    const struct CPU_State final_cpu = {.pc=0xdf26, .a=0x40, .x=0x99, .y=0xa1, .sp=0xb9, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bb, .value=0xa1}, {.addr=0xdf24, .value=0xeb}, {.addr=0xdf25, .value=0xbb},
    };
    const struct BusEvent events[] = {
        {.addr=0xdf24, .value=0xeb, .type=IO_READ},
        {.addr=0xdf25, .value=0xbb, .type=IO_READ},
        {.addr=0x01bb, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0195) {
    const struct CPU_State initial_cpu = {.pc=0xd83a, .a=0xd1, .x=0xce, .y=0x18, .sp=0x27, .status=0xdb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0006, .value=0x61}, {.addr=0xd83a, .value=0xeb}, {.addr=0xd83b, .value=0x06},
    };
    const struct CPU_State final_cpu = {.pc=0xd83c, .a=0xd1, .x=0xce, .y=0x61, .sp=0x27, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x0006, .value=0x61}, {.addr=0xd83a, .value=0xeb}, {.addr=0xd83b, .value=0x06},
    };
    const struct BusEvent events[] = {
        {.addr=0xd83a, .value=0xeb, .type=IO_READ},
        {.addr=0xd83b, .value=0x06, .type=IO_READ},
        {.addr=0x0006, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0196) {
    const struct CPU_State initial_cpu = {.pc=0x9390, .a=0x31, .x=0xed, .y=0xad, .sp=0x9a, .status=0xa3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f9, .value=0xdb}, {.addr=0x9390, .value=0xeb}, {.addr=0x9391, .value=0xf9},
    };
    const struct CPU_State final_cpu = {.pc=0x9392, .a=0x31, .x=0xed, .y=0xdb, .sp=0x9a, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f9, .value=0xdb}, {.addr=0x9390, .value=0xeb}, {.addr=0x9391, .value=0xf9},
    };
    const struct BusEvent events[] = {
        {.addr=0x9390, .value=0xeb, .type=IO_READ},
        {.addr=0x9391, .value=0xf9, .type=IO_READ},
        {.addr=0x01f9, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0197) {
    const struct CPU_State initial_cpu = {.pc=0xac75, .a=0xab, .x=0x65, .y=0xac, .sp=0xc7, .status=0x80};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e0, .value=0xbf}, {.addr=0xac75, .value=0xeb}, {.addr=0xac76, .value=0xe0},
    };
    const struct CPU_State final_cpu = {.pc=0xac77, .a=0xab, .x=0x65, .y=0xbf, .sp=0xc7, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e0, .value=0xbf}, {.addr=0xac75, .value=0xeb}, {.addr=0xac76, .value=0xe0},
    };
    const struct BusEvent events[] = {
        {.addr=0xac75, .value=0xeb, .type=IO_READ},
        {.addr=0xac76, .value=0xe0, .type=IO_READ},
        {.addr=0x00e0, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0198) {
    const struct CPU_State initial_cpu = {.pc=0xa2ab, .a=0x1c, .x=0x79, .y=0xf9, .sp=0x4c, .status=0x1b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0027, .value=0xa6}, {.addr=0xa2ab, .value=0xeb}, {.addr=0xa2ac, .value=0x27},
    };
    const struct CPU_State final_cpu = {.pc=0xa2ad, .a=0x1c, .x=0x79, .y=0xa6, .sp=0x4c, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x0027, .value=0xa6}, {.addr=0xa2ab, .value=0xeb}, {.addr=0xa2ac, .value=0x27},
    };
    const struct BusEvent events[] = {
        {.addr=0xa2ab, .value=0xeb, .type=IO_READ},
        {.addr=0xa2ac, .value=0x27, .type=IO_READ},
        {.addr=0x0027, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0199) {
    const struct CPU_State initial_cpu = {.pc=0xe8f8, .a=0x60, .x=0xc0, .y=0xcf, .sp=0xe7, .status=0x70};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019c, .value=0xe3}, {.addr=0xe8f8, .value=0xeb}, {.addr=0xe8f9, .value=0x9c},
    };
    const struct CPU_State final_cpu = {.pc=0xe8fa, .a=0x60, .x=0xc0, .y=0xe3, .sp=0xe7, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x019c, .value=0xe3}, {.addr=0xe8f8, .value=0xeb}, {.addr=0xe8f9, .value=0x9c},
    };
    const struct BusEvent events[] = {
        {.addr=0xe8f8, .value=0xeb, .type=IO_READ},
        {.addr=0xe8f9, .value=0x9c, .type=IO_READ},
        {.addr=0x019c, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_019A) {
    const struct CPU_State initial_cpu = {.pc=0xb16b, .a=0xf1, .x=0xe6, .y=0x81, .sp=0x36, .status=0xd6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000f, .value=0x0d}, {.addr=0xb16b, .value=0xeb}, {.addr=0xb16c, .value=0x0f},
    };
    const struct CPU_State final_cpu = {.pc=0xb16d, .a=0xf1, .x=0xe6, .y=0x0d, .sp=0x36, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x000f, .value=0x0d}, {.addr=0xb16b, .value=0xeb}, {.addr=0xb16c, .value=0x0f},
    };
    const struct BusEvent events[] = {
        {.addr=0xb16b, .value=0xeb, .type=IO_READ},
        {.addr=0xb16c, .value=0x0f, .type=IO_READ},
        {.addr=0x000f, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_019B) {
    const struct CPU_State initial_cpu = {.pc=0x3ab5, .a=0x3a, .x=0xa4, .y=0x7b, .sp=0x2f, .status=0x69};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0175, .value=0x34}, {.addr=0x3ab5, .value=0xeb}, {.addr=0x3ab6, .value=0x75},
    };
    const struct CPU_State final_cpu = {.pc=0x3ab7, .a=0x3a, .x=0xa4, .y=0x34, .sp=0x2f, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x0175, .value=0x34}, {.addr=0x3ab5, .value=0xeb}, {.addr=0x3ab6, .value=0x75},
    };
    const struct BusEvent events[] = {
        {.addr=0x3ab5, .value=0xeb, .type=IO_READ},
        {.addr=0x3ab6, .value=0x75, .type=IO_READ},
        {.addr=0x0175, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_019C) {
    const struct CPU_State initial_cpu = {.pc=0x9f77, .a=0x6a, .x=0x89, .y=0xea, .sp=0x37, .status=0x69};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ea, .value=0x32}, {.addr=0x9f77, .value=0xeb}, {.addr=0x9f78, .value=0xea},
    };
    const struct CPU_State final_cpu = {.pc=0x9f79, .a=0x6a, .x=0x89, .y=0x32, .sp=0x37, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ea, .value=0x32}, {.addr=0x9f77, .value=0xeb}, {.addr=0x9f78, .value=0xea},
    };
    const struct BusEvent events[] = {
        {.addr=0x9f77, .value=0xeb, .type=IO_READ},
        {.addr=0x9f78, .value=0xea, .type=IO_READ},
        {.addr=0x01ea, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_019D) {
    const struct CPU_State initial_cpu = {.pc=0x1dca, .a=0xe0, .x=0x42, .y=0x05, .sp=0x3c, .status=0xb6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a7, .value=0x24}, {.addr=0x1dca, .value=0xeb}, {.addr=0x1dcb, .value=0xa7},
    };
    const struct CPU_State final_cpu = {.pc=0x1dcc, .a=0xe0, .x=0x42, .y=0x24, .sp=0x3c, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a7, .value=0x24}, {.addr=0x1dca, .value=0xeb}, {.addr=0x1dcb, .value=0xa7},
    };
    const struct BusEvent events[] = {
        {.addr=0x1dca, .value=0xeb, .type=IO_READ},
        {.addr=0x1dcb, .value=0xa7, .type=IO_READ},
        {.addr=0x01a7, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_019E) {
    const struct CPU_State initial_cpu = {.pc=0xb2b1, .a=0x2d, .x=0xc3, .y=0xd1, .sp=0x05, .status=0x2f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0117, .value=0x5d}, {.addr=0xb2b1, .value=0xeb}, {.addr=0xb2b2, .value=0x17},
    };
    const struct CPU_State final_cpu = {.pc=0xb2b3, .a=0x2d, .x=0xc3, .y=0x5d, .sp=0x05, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0117, .value=0x5d}, {.addr=0xb2b1, .value=0xeb}, {.addr=0xb2b2, .value=0x17},
    };
    const struct BusEvent events[] = {
        {.addr=0xb2b1, .value=0xeb, .type=IO_READ},
        {.addr=0xb2b2, .value=0x17, .type=IO_READ},
        {.addr=0x0117, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_019F) {
    const struct CPU_State initial_cpu = {.pc=0x8446, .a=0x96, .x=0x66, .y=0x3b, .sp=0x25, .status=0x98};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007d, .value=0x04}, {.addr=0x8446, .value=0xeb}, {.addr=0x8447, .value=0x7d},
    };
    const struct CPU_State final_cpu = {.pc=0x8448, .a=0x96, .x=0x66, .y=0x04, .sp=0x25, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x007d, .value=0x04}, {.addr=0x8446, .value=0xeb}, {.addr=0x8447, .value=0x7d},
    };
    const struct BusEvent events[] = {
        {.addr=0x8446, .value=0xeb, .type=IO_READ},
        {.addr=0x8447, .value=0x7d, .type=IO_READ},
        {.addr=0x007d, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01A0) {
    const struct CPU_State initial_cpu = {.pc=0xf6f0, .a=0x42, .x=0x97, .y=0x3c, .sp=0x0d, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0018, .value=0xd3}, {.addr=0xf6f0, .value=0xeb}, {.addr=0xf6f1, .value=0x18},
    };
    const struct CPU_State final_cpu = {.pc=0xf6f2, .a=0x42, .x=0x97, .y=0xd3, .sp=0x0d, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0018, .value=0xd3}, {.addr=0xf6f0, .value=0xeb}, {.addr=0xf6f1, .value=0x18},
    };
    const struct BusEvent events[] = {
        {.addr=0xf6f0, .value=0xeb, .type=IO_READ},
        {.addr=0xf6f1, .value=0x18, .type=IO_READ},
        {.addr=0x0018, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01A1) {
    const struct CPU_State initial_cpu = {.pc=0xe368, .a=0xa0, .x=0x22, .y=0xc1, .sp=0xdf, .status=0xd8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cc, .value=0xae}, {.addr=0xe368, .value=0xeb}, {.addr=0xe369, .value=0xcc},
    };
    const struct CPU_State final_cpu = {.pc=0xe36a, .a=0xa0, .x=0x22, .y=0xae, .sp=0xdf, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cc, .value=0xae}, {.addr=0xe368, .value=0xeb}, {.addr=0xe369, .value=0xcc},
    };
    const struct BusEvent events[] = {
        {.addr=0xe368, .value=0xeb, .type=IO_READ},
        {.addr=0xe369, .value=0xcc, .type=IO_READ},
        {.addr=0x00cc, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01A2) {
    const struct CPU_State initial_cpu = {.pc=0xda4f, .a=0x46, .x=0x60, .y=0xe8, .sp=0x8c, .status=0x75};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0164, .value=0x43}, {.addr=0xda4f, .value=0xeb}, {.addr=0xda50, .value=0x64},
    };
    const struct CPU_State final_cpu = {.pc=0xda51, .a=0x46, .x=0x60, .y=0x43, .sp=0x8c, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x0164, .value=0x43}, {.addr=0xda4f, .value=0xeb}, {.addr=0xda50, .value=0x64},
    };
    const struct BusEvent events[] = {
        {.addr=0xda4f, .value=0xeb, .type=IO_READ},
        {.addr=0xda50, .value=0x64, .type=IO_READ},
        {.addr=0x0164, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01A3) {
    const struct CPU_State initial_cpu = {.pc=0x0638, .a=0xc6, .x=0x43, .y=0xf9, .sp=0x8f, .status=0x77};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0142, .value=0xb7}, {.addr=0x0638, .value=0xeb}, {.addr=0x0639, .value=0x42},
    };
    const struct CPU_State final_cpu = {.pc=0x063a, .a=0xc6, .x=0x43, .y=0xb7, .sp=0x8f, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0142, .value=0xb7}, {.addr=0x0638, .value=0xeb}, {.addr=0x0639, .value=0x42},
    };
    const struct BusEvent events[] = {
        {.addr=0x0638, .value=0xeb, .type=IO_READ},
        {.addr=0x0639, .value=0x42, .type=IO_READ},
        {.addr=0x0142, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01A4) {
    const struct CPU_State initial_cpu = {.pc=0x3201, .a=0x94, .x=0xf1, .y=0xd0, .sp=0x03, .status=0xd6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a5, .value=0x88}, {.addr=0x3201, .value=0xeb}, {.addr=0x3202, .value=0xa5},
    };
    const struct CPU_State final_cpu = {.pc=0x3203, .a=0x94, .x=0xf1, .y=0x88, .sp=0x03, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a5, .value=0x88}, {.addr=0x3201, .value=0xeb}, {.addr=0x3202, .value=0xa5},
    };
    const struct BusEvent events[] = {
        {.addr=0x3201, .value=0xeb, .type=IO_READ},
        {.addr=0x3202, .value=0xa5, .type=IO_READ},
        {.addr=0x00a5, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01A5) {
    const struct CPU_State initial_cpu = {.pc=0x0168, .a=0x66, .x=0x90, .y=0x69, .sp=0xdb, .status=0x97};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cf, .value=0x94}, {.addr=0x0168, .value=0xeb}, {.addr=0x0169, .value=0xcf},
    };
    const struct CPU_State final_cpu = {.pc=0x016a, .a=0x66, .x=0x90, .y=0x94, .sp=0xdb, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cf, .value=0x94}, {.addr=0x0168, .value=0xeb}, {.addr=0x0169, .value=0xcf},
    };
    const struct BusEvent events[] = {
        {.addr=0x0168, .value=0xeb, .type=IO_READ},
        {.addr=0x0169, .value=0xcf, .type=IO_READ},
        {.addr=0x00cf, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01A6) {
    const struct CPU_State initial_cpu = {.pc=0xb816, .a=0xdb, .x=0x78, .y=0x5b, .sp=0x44, .status=0x9d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0004, .value=0x68}, {.addr=0xb816, .value=0xeb}, {.addr=0xb817, .value=0x04},
    };
    const struct CPU_State final_cpu = {.pc=0xb818, .a=0xdb, .x=0x78, .y=0x68, .sp=0x44, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0004, .value=0x68}, {.addr=0xb816, .value=0xeb}, {.addr=0xb817, .value=0x04},
    };
    const struct BusEvent events[] = {
        {.addr=0xb816, .value=0xeb, .type=IO_READ},
        {.addr=0xb817, .value=0x04, .type=IO_READ},
        {.addr=0x0004, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01A7) {
    const struct CPU_State initial_cpu = {.pc=0xe8cf, .a=0xe0, .x=0xbe, .y=0xa9, .sp=0xae, .status=0xc5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008a, .value=0x0b}, {.addr=0xe8cf, .value=0xeb}, {.addr=0xe8d0, .value=0x8a},
    };
    const struct CPU_State final_cpu = {.pc=0xe8d1, .a=0xe0, .x=0xbe, .y=0x0b, .sp=0xae, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x008a, .value=0x0b}, {.addr=0xe8cf, .value=0xeb}, {.addr=0xe8d0, .value=0x8a},
    };
    const struct BusEvent events[] = {
        {.addr=0xe8cf, .value=0xeb, .type=IO_READ},
        {.addr=0xe8d0, .value=0x8a, .type=IO_READ},
        {.addr=0x008a, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01A8) {
    const struct CPU_State initial_cpu = {.pc=0x1d7d, .a=0x32, .x=0x7e, .y=0x2e, .sp=0x07, .status=0x7c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0132, .value=0xf2}, {.addr=0x1d7d, .value=0xeb}, {.addr=0x1d7e, .value=0x32},
    };
    const struct CPU_State final_cpu = {.pc=0x1d7f, .a=0x32, .x=0x7e, .y=0xf2, .sp=0x07, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0132, .value=0xf2}, {.addr=0x1d7d, .value=0xeb}, {.addr=0x1d7e, .value=0x32},
    };
    const struct BusEvent events[] = {
        {.addr=0x1d7d, .value=0xeb, .type=IO_READ},
        {.addr=0x1d7e, .value=0x32, .type=IO_READ},
        {.addr=0x0132, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01A9) {
    const struct CPU_State initial_cpu = {.pc=0x7d4d, .a=0x9b, .x=0x3e, .y=0x8f, .sp=0x49, .status=0x55};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006d, .value=0x12}, {.addr=0x7d4d, .value=0xeb}, {.addr=0x7d4e, .value=0x6d},
    };
    const struct CPU_State final_cpu = {.pc=0x7d4f, .a=0x9b, .x=0x3e, .y=0x12, .sp=0x49, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x006d, .value=0x12}, {.addr=0x7d4d, .value=0xeb}, {.addr=0x7d4e, .value=0x6d},
    };
    const struct BusEvent events[] = {
        {.addr=0x7d4d, .value=0xeb, .type=IO_READ},
        {.addr=0x7d4e, .value=0x6d, .type=IO_READ},
        {.addr=0x006d, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01AA) {
    const struct CPU_State initial_cpu = {.pc=0xb935, .a=0xe0, .x=0x66, .y=0x64, .sp=0xc2, .status=0x8d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0008, .value=0x6e}, {.addr=0xb935, .value=0xeb}, {.addr=0xb936, .value=0x08},
    };
    const struct CPU_State final_cpu = {.pc=0xb937, .a=0xe0, .x=0x66, .y=0x6e, .sp=0xc2, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0008, .value=0x6e}, {.addr=0xb935, .value=0xeb}, {.addr=0xb936, .value=0x08},
    };
    const struct BusEvent events[] = {
        {.addr=0xb935, .value=0xeb, .type=IO_READ},
        {.addr=0xb936, .value=0x08, .type=IO_READ},
        {.addr=0x0008, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01AB) {
    const struct CPU_State initial_cpu = {.pc=0x14ac, .a=0x3e, .x=0x5a, .y=0x33, .sp=0xc0, .status=0xd7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0062, .value=0xa2}, {.addr=0x14ac, .value=0xeb}, {.addr=0x14ad, .value=0x62},
    };
    const struct CPU_State final_cpu = {.pc=0x14ae, .a=0x3e, .x=0x5a, .y=0xa2, .sp=0xc0, .status=0xd5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0062, .value=0xa2}, {.addr=0x14ac, .value=0xeb}, {.addr=0x14ad, .value=0x62},
    };
    const struct BusEvent events[] = {
        {.addr=0x14ac, .value=0xeb, .type=IO_READ},
        {.addr=0x14ad, .value=0x62, .type=IO_READ},
        {.addr=0x0062, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01AC) {
    const struct CPU_State initial_cpu = {.pc=0x4edb, .a=0x8c, .x=0xff, .y=0xb7, .sp=0x81, .status=0x98};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c8, .value=0x44}, {.addr=0x4edb, .value=0xeb}, {.addr=0x4edc, .value=0xc8},
    };
    const struct CPU_State final_cpu = {.pc=0x4edd, .a=0x8c, .x=0xff, .y=0x44, .sp=0x81, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c8, .value=0x44}, {.addr=0x4edb, .value=0xeb}, {.addr=0x4edc, .value=0xc8},
    };
    const struct BusEvent events[] = {
        {.addr=0x4edb, .value=0xeb, .type=IO_READ},
        {.addr=0x4edc, .value=0xc8, .type=IO_READ},
        {.addr=0x00c8, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01AD) {
    const struct CPU_State initial_cpu = {.pc=0x51dc, .a=0x8b, .x=0x16, .y=0x70, .sp=0x9c, .status=0x91};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0087, .value=0xd1}, {.addr=0x51dc, .value=0xeb}, {.addr=0x51dd, .value=0x87},
    };
    const struct CPU_State final_cpu = {.pc=0x51de, .a=0x8b, .x=0x16, .y=0xd1, .sp=0x9c, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x0087, .value=0xd1}, {.addr=0x51dc, .value=0xeb}, {.addr=0x51dd, .value=0x87},
    };
    const struct BusEvent events[] = {
        {.addr=0x51dc, .value=0xeb, .type=IO_READ},
        {.addr=0x51dd, .value=0x87, .type=IO_READ},
        {.addr=0x0087, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01AE) {
    const struct CPU_State initial_cpu = {.pc=0xf794, .a=0xed, .x=0xfb, .y=0x93, .sp=0xf2, .status=0x81};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0057, .value=0xcc}, {.addr=0xf794, .value=0xeb}, {.addr=0xf795, .value=0x57},
    };
    const struct CPU_State final_cpu = {.pc=0xf796, .a=0xed, .x=0xfb, .y=0xcc, .sp=0xf2, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x0057, .value=0xcc}, {.addr=0xf794, .value=0xeb}, {.addr=0xf795, .value=0x57},
    };
    const struct BusEvent events[] = {
        {.addr=0xf794, .value=0xeb, .type=IO_READ},
        {.addr=0xf795, .value=0x57, .type=IO_READ},
        {.addr=0x0057, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01AF) {
    const struct CPU_State initial_cpu = {.pc=0xb276, .a=0xab, .x=0x02, .y=0x5f, .sp=0xc1, .status=0xe1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017d, .value=0x24}, {.addr=0xb276, .value=0xeb}, {.addr=0xb277, .value=0x7d},
    };
    const struct CPU_State final_cpu = {.pc=0xb278, .a=0xab, .x=0x02, .y=0x24, .sp=0xc1, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x017d, .value=0x24}, {.addr=0xb276, .value=0xeb}, {.addr=0xb277, .value=0x7d},
    };
    const struct BusEvent events[] = {
        {.addr=0xb276, .value=0xeb, .type=IO_READ},
        {.addr=0xb277, .value=0x7d, .type=IO_READ},
        {.addr=0x017d, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01B0) {
    const struct CPU_State initial_cpu = {.pc=0x0c08, .a=0xf2, .x=0xc4, .y=0xde, .sp=0x30, .status=0xb6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0164, .value=0x5e}, {.addr=0x0c08, .value=0xeb}, {.addr=0x0c09, .value=0x64},
    };
    const struct CPU_State final_cpu = {.pc=0x0c0a, .a=0xf2, .x=0xc4, .y=0x5e, .sp=0x30, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x0164, .value=0x5e}, {.addr=0x0c08, .value=0xeb}, {.addr=0x0c09, .value=0x64},
    };
    const struct BusEvent events[] = {
        {.addr=0x0c08, .value=0xeb, .type=IO_READ},
        {.addr=0x0c09, .value=0x64, .type=IO_READ},
        {.addr=0x0164, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01B1) {
    const struct CPU_State initial_cpu = {.pc=0xf808, .a=0x15, .x=0xa8, .y=0x98, .sp=0x71, .status=0x65};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0124, .value=0xd1}, {.addr=0xf808, .value=0xeb}, {.addr=0xf809, .value=0x24},
    };
    const struct CPU_State final_cpu = {.pc=0xf80a, .a=0x15, .x=0xa8, .y=0xd1, .sp=0x71, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0124, .value=0xd1}, {.addr=0xf808, .value=0xeb}, {.addr=0xf809, .value=0x24},
    };
    const struct BusEvent events[] = {
        {.addr=0xf808, .value=0xeb, .type=IO_READ},
        {.addr=0xf809, .value=0x24, .type=IO_READ},
        {.addr=0x0124, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x9f60, .a=0xff, .x=0x2b, .y=0x21, .sp=0xf5, .status=0x40};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d0, .value=0x7e}, {.addr=0x9f60, .value=0xeb}, {.addr=0x9f61, .value=0xd0},
    };
    const struct CPU_State final_cpu = {.pc=0x9f62, .a=0xff, .x=0x2b, .y=0x7e, .sp=0xf5, .status=0x40};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d0, .value=0x7e}, {.addr=0x9f60, .value=0xeb}, {.addr=0x9f61, .value=0xd0},
    };
    const struct BusEvent events[] = {
        {.addr=0x9f60, .value=0xeb, .type=IO_READ},
        {.addr=0x9f61, .value=0xd0, .type=IO_READ},
        {.addr=0x00d0, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01B3) {
    const struct CPU_State initial_cpu = {.pc=0xf729, .a=0xc7, .x=0xb8, .y=0xb6, .sp=0x6c, .status=0x27};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010b, .value=0xdf}, {.addr=0xf729, .value=0xeb}, {.addr=0xf72a, .value=0x0b},
    };
    const struct CPU_State final_cpu = {.pc=0xf72b, .a=0xc7, .x=0xb8, .y=0xdf, .sp=0x6c, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x010b, .value=0xdf}, {.addr=0xf729, .value=0xeb}, {.addr=0xf72a, .value=0x0b},
    };
    const struct BusEvent events[] = {
        {.addr=0xf729, .value=0xeb, .type=IO_READ},
        {.addr=0xf72a, .value=0x0b, .type=IO_READ},
        {.addr=0x010b, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01B4) {
    const struct CPU_State initial_cpu = {.pc=0xd2da, .a=0x98, .x=0x60, .y=0xba, .sp=0x2d, .status=0xf4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0122, .value=0x55}, {.addr=0xd2da, .value=0xeb}, {.addr=0xd2db, .value=0x22},
    };
    const struct CPU_State final_cpu = {.pc=0xd2dc, .a=0x98, .x=0x60, .y=0x55, .sp=0x2d, .status=0x74};
    const struct RamEntry final_ram[] = {
        {.addr=0x0122, .value=0x55}, {.addr=0xd2da, .value=0xeb}, {.addr=0xd2db, .value=0x22},
    };
    const struct BusEvent events[] = {
        {.addr=0xd2da, .value=0xeb, .type=IO_READ},
        {.addr=0xd2db, .value=0x22, .type=IO_READ},
        {.addr=0x0122, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01B5) {
    const struct CPU_State initial_cpu = {.pc=0x55e6, .a=0x0d, .x=0x48, .y=0xbc, .sp=0xe1, .status=0xb3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e4, .value=0xd5}, {.addr=0x55e6, .value=0xeb}, {.addr=0x55e7, .value=0xe4},
    };
    const struct CPU_State final_cpu = {.pc=0x55e8, .a=0x0d, .x=0x48, .y=0xd5, .sp=0xe1, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e4, .value=0xd5}, {.addr=0x55e6, .value=0xeb}, {.addr=0x55e7, .value=0xe4},
    };
    const struct BusEvent events[] = {
        {.addr=0x55e6, .value=0xeb, .type=IO_READ},
        {.addr=0x55e7, .value=0xe4, .type=IO_READ},
        {.addr=0x01e4, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01B6) {
    const struct CPU_State initial_cpu = {.pc=0x454f, .a=0xe4, .x=0xf2, .y=0x51, .sp=0xaf, .status=0x96};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0050, .value=0x14}, {.addr=0x454f, .value=0xeb}, {.addr=0x4550, .value=0x50},
    };
    const struct CPU_State final_cpu = {.pc=0x4551, .a=0xe4, .x=0xf2, .y=0x14, .sp=0xaf, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x0050, .value=0x14}, {.addr=0x454f, .value=0xeb}, {.addr=0x4550, .value=0x50},
    };
    const struct BusEvent events[] = {
        {.addr=0x454f, .value=0xeb, .type=IO_READ},
        {.addr=0x4550, .value=0x50, .type=IO_READ},
        {.addr=0x0050, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01B7) {
    const struct CPU_State initial_cpu = {.pc=0x267e, .a=0x32, .x=0x1b, .y=0xcf, .sp=0x73, .status=0xf2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013f, .value=0x7d}, {.addr=0x267e, .value=0xeb}, {.addr=0x267f, .value=0x3f},
    };
    const struct CPU_State final_cpu = {.pc=0x2680, .a=0x32, .x=0x1b, .y=0x7d, .sp=0x73, .status=0x70};
    const struct RamEntry final_ram[] = {
        {.addr=0x013f, .value=0x7d}, {.addr=0x267e, .value=0xeb}, {.addr=0x267f, .value=0x3f},
    };
    const struct BusEvent events[] = {
        {.addr=0x267e, .value=0xeb, .type=IO_READ},
        {.addr=0x267f, .value=0x3f, .type=IO_READ},
        {.addr=0x013f, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01B8) {
    const struct CPU_State initial_cpu = {.pc=0x35a4, .a=0xfa, .x=0x87, .y=0x57, .sp=0x3f, .status=0xea};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0176, .value=0x27}, {.addr=0x35a4, .value=0xeb}, {.addr=0x35a5, .value=0x76},
    };
    const struct CPU_State final_cpu = {.pc=0x35a6, .a=0xfa, .x=0x87, .y=0x27, .sp=0x3f, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x0176, .value=0x27}, {.addr=0x35a4, .value=0xeb}, {.addr=0x35a5, .value=0x76},
    };
    const struct BusEvent events[] = {
        {.addr=0x35a4, .value=0xeb, .type=IO_READ},
        {.addr=0x35a5, .value=0x76, .type=IO_READ},
        {.addr=0x0176, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01B9) {
    const struct CPU_State initial_cpu = {.pc=0x92d3, .a=0x3a, .x=0x6a, .y=0x26, .sp=0xec, .status=0x1f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002b, .value=0xcc}, {.addr=0x92d3, .value=0xeb}, {.addr=0x92d4, .value=0x2b},
    };
    const struct CPU_State final_cpu = {.pc=0x92d5, .a=0x3a, .x=0x6a, .y=0xcc, .sp=0xec, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x002b, .value=0xcc}, {.addr=0x92d3, .value=0xeb}, {.addr=0x92d4, .value=0x2b},
    };
    const struct BusEvent events[] = {
        {.addr=0x92d3, .value=0xeb, .type=IO_READ},
        {.addr=0x92d4, .value=0x2b, .type=IO_READ},
        {.addr=0x002b, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01BB) {
    const struct CPU_State initial_cpu = {.pc=0x9d89, .a=0xee, .x=0xa3, .y=0xe1, .sp=0x1b, .status=0x41};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007d, .value=0x87}, {.addr=0x9d89, .value=0xeb}, {.addr=0x9d8a, .value=0x7d},
    };
    const struct CPU_State final_cpu = {.pc=0x9d8b, .a=0xee, .x=0xa3, .y=0x87, .sp=0x1b, .status=0xc1};
    const struct RamEntry final_ram[] = {
        {.addr=0x007d, .value=0x87}, {.addr=0x9d89, .value=0xeb}, {.addr=0x9d8a, .value=0x7d},
    };
    const struct BusEvent events[] = {
        {.addr=0x9d89, .value=0xeb, .type=IO_READ},
        {.addr=0x9d8a, .value=0x7d, .type=IO_READ},
        {.addr=0x007d, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01BC) {
    const struct CPU_State initial_cpu = {.pc=0x7a85, .a=0x22, .x=0xb2, .y=0x13, .sp=0x5f, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0060, .value=0x53}, {.addr=0x7a85, .value=0xeb}, {.addr=0x7a86, .value=0x60},
    };
    const struct CPU_State final_cpu = {.pc=0x7a87, .a=0x22, .x=0xb2, .y=0x53, .sp=0x5f, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x0060, .value=0x53}, {.addr=0x7a85, .value=0xeb}, {.addr=0x7a86, .value=0x60},
    };
    const struct BusEvent events[] = {
        {.addr=0x7a85, .value=0xeb, .type=IO_READ},
        {.addr=0x7a86, .value=0x60, .type=IO_READ},
        {.addr=0x0060, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01BD) {
    const struct CPU_State initial_cpu = {.pc=0x699c, .a=0x60, .x=0xf3, .y=0xa8, .sp=0xb1, .status=0xaa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0118, .value=0xed}, {.addr=0x699c, .value=0xeb}, {.addr=0x699d, .value=0x18},
    };
    const struct CPU_State final_cpu = {.pc=0x699e, .a=0x60, .x=0xf3, .y=0xed, .sp=0xb1, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0118, .value=0xed}, {.addr=0x699c, .value=0xeb}, {.addr=0x699d, .value=0x18},
    };
    const struct BusEvent events[] = {
        {.addr=0x699c, .value=0xeb, .type=IO_READ},
        {.addr=0x699d, .value=0x18, .type=IO_READ},
        {.addr=0x0118, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01BE) {
    const struct CPU_State initial_cpu = {.pc=0x6a69, .a=0x9e, .x=0x99, .y=0xf5, .sp=0x8a, .status=0xf2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0194, .value=0x3c}, {.addr=0x6a69, .value=0xeb}, {.addr=0x6a6a, .value=0x94},
    };
    const struct CPU_State final_cpu = {.pc=0x6a6b, .a=0x9e, .x=0x99, .y=0x3c, .sp=0x8a, .status=0x70};
    const struct RamEntry final_ram[] = {
        {.addr=0x0194, .value=0x3c}, {.addr=0x6a69, .value=0xeb}, {.addr=0x6a6a, .value=0x94},
    };
    const struct BusEvent events[] = {
        {.addr=0x6a69, .value=0xeb, .type=IO_READ},
        {.addr=0x6a6a, .value=0x94, .type=IO_READ},
        {.addr=0x0194, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01BF) {
    const struct CPU_State initial_cpu = {.pc=0xb8f8, .a=0x2b, .x=0x5a, .y=0x8e, .sp=0xda, .status=0x56};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0056, .value=0x4d}, {.addr=0xb8f8, .value=0xeb}, {.addr=0xb8f9, .value=0x56},
    };
    const struct CPU_State final_cpu = {.pc=0xb8fa, .a=0x2b, .x=0x5a, .y=0x4d, .sp=0xda, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x0056, .value=0x4d}, {.addr=0xb8f8, .value=0xeb}, {.addr=0xb8f9, .value=0x56},
    };
    const struct BusEvent events[] = {
        {.addr=0xb8f8, .value=0xeb, .type=IO_READ},
        {.addr=0xb8f9, .value=0x56, .type=IO_READ},
        {.addr=0x0056, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01C1) {
    const struct CPU_State initial_cpu = {.pc=0x35b4, .a=0x7a, .x=0x1f, .y=0x13, .sp=0x20, .status=0x76};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a4, .value=0xcd}, {.addr=0x35b4, .value=0xeb}, {.addr=0x35b5, .value=0xa4},
    };
    const struct CPU_State final_cpu = {.pc=0x35b6, .a=0x7a, .x=0x1f, .y=0xcd, .sp=0x20, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a4, .value=0xcd}, {.addr=0x35b4, .value=0xeb}, {.addr=0x35b5, .value=0xa4},
    };
    const struct BusEvent events[] = {
        {.addr=0x35b4, .value=0xeb, .type=IO_READ},
        {.addr=0x35b5, .value=0xa4, .type=IO_READ},
        {.addr=0x01a4, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01C2) {
    const struct CPU_State initial_cpu = {.pc=0x7bd2, .a=0xd6, .x=0x94, .y=0xf1, .sp=0xaa, .status=0x39};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f1, .value=0x15}, {.addr=0x7bd2, .value=0xeb}, {.addr=0x7bd3, .value=0xf1},
    };
    const struct CPU_State final_cpu = {.pc=0x7bd4, .a=0xd6, .x=0x94, .y=0x15, .sp=0xaa, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f1, .value=0x15}, {.addr=0x7bd2, .value=0xeb}, {.addr=0x7bd3, .value=0xf1},
    };
    const struct BusEvent events[] = {
        {.addr=0x7bd2, .value=0xeb, .type=IO_READ},
        {.addr=0x7bd3, .value=0xf1, .type=IO_READ},
        {.addr=0x01f1, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01C3) {
    const struct CPU_State initial_cpu = {.pc=0x93f8, .a=0x82, .x=0xd0, .y=0x05, .sp=0x85, .status=0x6a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0120, .value=0x10}, {.addr=0x93f8, .value=0xeb}, {.addr=0x93f9, .value=0x20},
    };
    const struct CPU_State final_cpu = {.pc=0x93fa, .a=0x82, .x=0xd0, .y=0x10, .sp=0x85, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x0120, .value=0x10}, {.addr=0x93f8, .value=0xeb}, {.addr=0x93f9, .value=0x20},
    };
    const struct BusEvent events[] = {
        {.addr=0x93f8, .value=0xeb, .type=IO_READ},
        {.addr=0x93f9, .value=0x20, .type=IO_READ},
        {.addr=0x0120, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01C4) {
    const struct CPU_State initial_cpu = {.pc=0x4ae2, .a=0x1d, .x=0xea, .y=0x65, .sp=0xc5, .status=0x70};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0131, .value=0xcf}, {.addr=0x4ae2, .value=0xeb}, {.addr=0x4ae3, .value=0x31},
    };
    const struct CPU_State final_cpu = {.pc=0x4ae4, .a=0x1d, .x=0xea, .y=0xcf, .sp=0xc5, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0131, .value=0xcf}, {.addr=0x4ae2, .value=0xeb}, {.addr=0x4ae3, .value=0x31},
    };
    const struct BusEvent events[] = {
        {.addr=0x4ae2, .value=0xeb, .type=IO_READ},
        {.addr=0x4ae3, .value=0x31, .type=IO_READ},
        {.addr=0x0131, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01C5) {
    const struct CPU_State initial_cpu = {.pc=0x9def, .a=0x8d, .x=0x76, .y=0xe8, .sp=0x69, .status=0x3a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f3, .value=0x02}, {.addr=0x9def, .value=0xeb}, {.addr=0x9df0, .value=0xf3},
    };
    const struct CPU_State final_cpu = {.pc=0x9df1, .a=0x8d, .x=0x76, .y=0x02, .sp=0x69, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f3, .value=0x02}, {.addr=0x9def, .value=0xeb}, {.addr=0x9df0, .value=0xf3},
    };
    const struct BusEvent events[] = {
        {.addr=0x9def, .value=0xeb, .type=IO_READ},
        {.addr=0x9df0, .value=0xf3, .type=IO_READ},
        {.addr=0x01f3, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01C6) {
    const struct CPU_State initial_cpu = {.pc=0x8f70, .a=0x24, .x=0x55, .y=0xea, .sp=0xc1, .status=0x01};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001f, .value=0x7d}, {.addr=0x8f70, .value=0xeb}, {.addr=0x8f71, .value=0x1f},
    };
    const struct CPU_State final_cpu = {.pc=0x8f72, .a=0x24, .x=0x55, .y=0x7d, .sp=0xc1, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x001f, .value=0x7d}, {.addr=0x8f70, .value=0xeb}, {.addr=0x8f71, .value=0x1f},
    };
    const struct BusEvent events[] = {
        {.addr=0x8f70, .value=0xeb, .type=IO_READ},
        {.addr=0x8f71, .value=0x1f, .type=IO_READ},
        {.addr=0x001f, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01C7) {
    const struct CPU_State initial_cpu = {.pc=0x6458, .a=0x59, .x=0x4d, .y=0xdc, .sp=0xff, .status=0xe9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fe, .value=0x0a}, {.addr=0x6458, .value=0xeb}, {.addr=0x6459, .value=0xfe},
    };
    const struct CPU_State final_cpu = {.pc=0x645a, .a=0x59, .x=0x4d, .y=0x0a, .sp=0xff, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fe, .value=0x0a}, {.addr=0x6458, .value=0xeb}, {.addr=0x6459, .value=0xfe},
    };
    const struct BusEvent events[] = {
        {.addr=0x6458, .value=0xeb, .type=IO_READ},
        {.addr=0x6459, .value=0xfe, .type=IO_READ},
        {.addr=0x01fe, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01C9) {
    const struct CPU_State initial_cpu = {.pc=0x96b4, .a=0xea, .x=0x66, .y=0xea, .sp=0xd2, .status=0x49};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005d, .value=0x72}, {.addr=0x96b4, .value=0xeb}, {.addr=0x96b5, .value=0x5d},
    };
    const struct CPU_State final_cpu = {.pc=0x96b6, .a=0xea, .x=0x66, .y=0x72, .sp=0xd2, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x005d, .value=0x72}, {.addr=0x96b4, .value=0xeb}, {.addr=0x96b5, .value=0x5d},
    };
    const struct BusEvent events[] = {
        {.addr=0x96b4, .value=0xeb, .type=IO_READ},
        {.addr=0x96b5, .value=0x5d, .type=IO_READ},
        {.addr=0x005d, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01CA) {
    const struct CPU_State initial_cpu = {.pc=0x7850, .a=0xa7, .x=0xce, .y=0xad, .sp=0x56, .status=0x8c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a4, .value=0x38}, {.addr=0x7850, .value=0xeb}, {.addr=0x7851, .value=0xa4},
    };
    const struct CPU_State final_cpu = {.pc=0x7852, .a=0xa7, .x=0xce, .y=0x38, .sp=0x56, .status=0x0c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a4, .value=0x38}, {.addr=0x7850, .value=0xeb}, {.addr=0x7851, .value=0xa4},
    };
    const struct BusEvent events[] = {
        {.addr=0x7850, .value=0xeb, .type=IO_READ},
        {.addr=0x7851, .value=0xa4, .type=IO_READ},
        {.addr=0x00a4, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01CB) {
    const struct CPU_State initial_cpu = {.pc=0xfcee, .a=0xde, .x=0xe9, .y=0x3d, .sp=0x70, .status=0x6b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0148, .value=0x3c}, {.addr=0xfcee, .value=0xeb}, {.addr=0xfcef, .value=0x48},
    };
    const struct CPU_State final_cpu = {.pc=0xfcf0, .a=0xde, .x=0xe9, .y=0x3c, .sp=0x70, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x0148, .value=0x3c}, {.addr=0xfcee, .value=0xeb}, {.addr=0xfcef, .value=0x48},
    };
    const struct BusEvent events[] = {
        {.addr=0xfcee, .value=0xeb, .type=IO_READ},
        {.addr=0xfcef, .value=0x48, .type=IO_READ},
        {.addr=0x0148, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01CC) {
    const struct CPU_State initial_cpu = {.pc=0x25fe, .a=0xb0, .x=0xfc, .y=0x99, .sp=0x20, .status=0x9f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0007, .value=0x30}, {.addr=0x25fe, .value=0xeb}, {.addr=0x25ff, .value=0x07},
    };
    const struct CPU_State final_cpu = {.pc=0x2600, .a=0xb0, .x=0xfc, .y=0x30, .sp=0x20, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0007, .value=0x30}, {.addr=0x25fe, .value=0xeb}, {.addr=0x25ff, .value=0x07},
    };
    const struct BusEvent events[] = {
        {.addr=0x25fe, .value=0xeb, .type=IO_READ},
        {.addr=0x25ff, .value=0x07, .type=IO_READ},
        {.addr=0x0007, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01CD) {
    const struct CPU_State initial_cpu = {.pc=0x4a12, .a=0x9b, .x=0xc8, .y=0x7c, .sp=0x0a, .status=0x44};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0076, .value=0x0a}, {.addr=0x4a12, .value=0xeb}, {.addr=0x4a13, .value=0x76},
    };
    const struct CPU_State final_cpu = {.pc=0x4a14, .a=0x9b, .x=0xc8, .y=0x0a, .sp=0x0a, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x0076, .value=0x0a}, {.addr=0x4a12, .value=0xeb}, {.addr=0x4a13, .value=0x76},
    };
    const struct BusEvent events[] = {
        {.addr=0x4a12, .value=0xeb, .type=IO_READ},
        {.addr=0x4a13, .value=0x76, .type=IO_READ},
        {.addr=0x0076, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01CE) {
    const struct CPU_State initial_cpu = {.pc=0xa1d3, .a=0xca, .x=0x14, .y=0x14, .sp=0x8b, .status=0x2e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e2, .value=0xcc}, {.addr=0xa1d3, .value=0xeb}, {.addr=0xa1d4, .value=0xe2},
    };
    const struct CPU_State final_cpu = {.pc=0xa1d5, .a=0xca, .x=0x14, .y=0xcc, .sp=0x8b, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e2, .value=0xcc}, {.addr=0xa1d3, .value=0xeb}, {.addr=0xa1d4, .value=0xe2},
    };
    const struct BusEvent events[] = {
        {.addr=0xa1d3, .value=0xeb, .type=IO_READ},
        {.addr=0xa1d4, .value=0xe2, .type=IO_READ},
        {.addr=0x01e2, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01CF) {
    const struct CPU_State initial_cpu = {.pc=0xa284, .a=0xdc, .x=0x02, .y=0xf2, .sp=0xfd, .status=0x97};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005e, .value=0x0b}, {.addr=0xa284, .value=0xeb}, {.addr=0xa285, .value=0x5e},
    };
    const struct CPU_State final_cpu = {.pc=0xa286, .a=0xdc, .x=0x02, .y=0x0b, .sp=0xfd, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x005e, .value=0x0b}, {.addr=0xa284, .value=0xeb}, {.addr=0xa285, .value=0x5e},
    };
    const struct BusEvent events[] = {
        {.addr=0xa284, .value=0xeb, .type=IO_READ},
        {.addr=0xa285, .value=0x5e, .type=IO_READ},
        {.addr=0x005e, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01D0) {
    const struct CPU_State initial_cpu = {.pc=0xc650, .a=0x92, .x=0x9f, .y=0xbf, .sp=0x0e, .status=0x3f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c9, .value=0xcb}, {.addr=0xc650, .value=0xeb}, {.addr=0xc651, .value=0xc9},
    };
    const struct CPU_State final_cpu = {.pc=0xc652, .a=0x92, .x=0x9f, .y=0xcb, .sp=0x0e, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c9, .value=0xcb}, {.addr=0xc650, .value=0xeb}, {.addr=0xc651, .value=0xc9},
    };
    const struct BusEvent events[] = {
        {.addr=0xc650, .value=0xeb, .type=IO_READ},
        {.addr=0xc651, .value=0xc9, .type=IO_READ},
        {.addr=0x01c9, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01D1) {
    const struct CPU_State initial_cpu = {.pc=0x2abe, .a=0x9f, .x=0xbe, .y=0x0e, .sp=0x8e, .status=0x14};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c8, .value=0x44}, {.addr=0x2abe, .value=0xeb}, {.addr=0x2abf, .value=0xc8},
    };
    const struct CPU_State final_cpu = {.pc=0x2ac0, .a=0x9f, .x=0xbe, .y=0x44, .sp=0x8e, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c8, .value=0x44}, {.addr=0x2abe, .value=0xeb}, {.addr=0x2abf, .value=0xc8},
    };
    const struct BusEvent events[] = {
        {.addr=0x2abe, .value=0xeb, .type=IO_READ},
        {.addr=0x2abf, .value=0xc8, .type=IO_READ},
        {.addr=0x00c8, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01D2) {
    const struct CPU_State initial_cpu = {.pc=0x4769, .a=0x11, .x=0x37, .y=0x4f, .sp=0xc0, .status=0xac};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013f, .value=0x09}, {.addr=0x4769, .value=0xeb}, {.addr=0x476a, .value=0x3f},
    };
    const struct CPU_State final_cpu = {.pc=0x476b, .a=0x11, .x=0x37, .y=0x09, .sp=0xc0, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x013f, .value=0x09}, {.addr=0x4769, .value=0xeb}, {.addr=0x476a, .value=0x3f},
    };
    const struct BusEvent events[] = {
        {.addr=0x4769, .value=0xeb, .type=IO_READ},
        {.addr=0x476a, .value=0x3f, .type=IO_READ},
        {.addr=0x013f, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01D3) {
    const struct CPU_State initial_cpu = {.pc=0xa42d, .a=0x6c, .x=0xf6, .y=0x2e, .sp=0x99, .status=0xee};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b2, .value=0x64}, {.addr=0xa42d, .value=0xeb}, {.addr=0xa42e, .value=0xb2},
    };
    const struct CPU_State final_cpu = {.pc=0xa42f, .a=0x6c, .x=0xf6, .y=0x64, .sp=0x99, .status=0x6c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b2, .value=0x64}, {.addr=0xa42d, .value=0xeb}, {.addr=0xa42e, .value=0xb2},
    };
    const struct BusEvent events[] = {
        {.addr=0xa42d, .value=0xeb, .type=IO_READ},
        {.addr=0xa42e, .value=0xb2, .type=IO_READ},
        {.addr=0x01b2, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01D4) {
    const struct CPU_State initial_cpu = {.pc=0x1d5c, .a=0x3d, .x=0xee, .y=0x60, .sp=0x30, .status=0x89};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000b, .value=0x62}, {.addr=0x1d5c, .value=0xeb}, {.addr=0x1d5d, .value=0x0b},
    };
    const struct CPU_State final_cpu = {.pc=0x1d5e, .a=0x3d, .x=0xee, .y=0x62, .sp=0x30, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x000b, .value=0x62}, {.addr=0x1d5c, .value=0xeb}, {.addr=0x1d5d, .value=0x0b},
    };
    const struct BusEvent events[] = {
        {.addr=0x1d5c, .value=0xeb, .type=IO_READ},
        {.addr=0x1d5d, .value=0x0b, .type=IO_READ},
        {.addr=0x000b, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01D5) {
    const struct CPU_State initial_cpu = {.pc=0x2070, .a=0x6b, .x=0xf7, .y=0x7d, .sp=0xeb, .status=0x25};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0142, .value=0x80}, {.addr=0x2070, .value=0xeb}, {.addr=0x2071, .value=0x42},
    };
    const struct CPU_State final_cpu = {.pc=0x2072, .a=0x6b, .x=0xf7, .y=0x80, .sp=0xeb, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0142, .value=0x80}, {.addr=0x2070, .value=0xeb}, {.addr=0x2071, .value=0x42},
    };
    const struct BusEvent events[] = {
        {.addr=0x2070, .value=0xeb, .type=IO_READ},
        {.addr=0x2071, .value=0x42, .type=IO_READ},
        {.addr=0x0142, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01D6) {
    const struct CPU_State initial_cpu = {.pc=0x2f25, .a=0x5e, .x=0x29, .y=0xe8, .sp=0xab, .status=0x6f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014a, .value=0x0a}, {.addr=0x2f25, .value=0xeb}, {.addr=0x2f26, .value=0x4a},
    };
    const struct CPU_State final_cpu = {.pc=0x2f27, .a=0x5e, .x=0x29, .y=0x0a, .sp=0xab, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x014a, .value=0x0a}, {.addr=0x2f25, .value=0xeb}, {.addr=0x2f26, .value=0x4a},
    };
    const struct BusEvent events[] = {
        {.addr=0x2f25, .value=0xeb, .type=IO_READ},
        {.addr=0x2f26, .value=0x4a, .type=IO_READ},
        {.addr=0x014a, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01D7) {
    const struct CPU_State initial_cpu = {.pc=0xd930, .a=0xc2, .x=0x1e, .y=0x30, .sp=0x2c, .status=0x8e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0062, .value=0x3f}, {.addr=0xd930, .value=0xeb}, {.addr=0xd931, .value=0x62},
    };
    const struct CPU_State final_cpu = {.pc=0xd932, .a=0xc2, .x=0x1e, .y=0x3f, .sp=0x2c, .status=0x0c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0062, .value=0x3f}, {.addr=0xd930, .value=0xeb}, {.addr=0xd931, .value=0x62},
    };
    const struct BusEvent events[] = {
        {.addr=0xd930, .value=0xeb, .type=IO_READ},
        {.addr=0xd931, .value=0x62, .type=IO_READ},
        {.addr=0x0062, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01D8) {
    const struct CPU_State initial_cpu = {.pc=0x4275, .a=0x57, .x=0x83, .y=0x06, .sp=0x2f, .status=0x53};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003f, .value=0x5e}, {.addr=0x4275, .value=0xeb}, {.addr=0x4276, .value=0x3f},
    };
    const struct CPU_State final_cpu = {.pc=0x4277, .a=0x57, .x=0x83, .y=0x5e, .sp=0x2f, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x003f, .value=0x5e}, {.addr=0x4275, .value=0xeb}, {.addr=0x4276, .value=0x3f},
    };
    const struct BusEvent events[] = {
        {.addr=0x4275, .value=0xeb, .type=IO_READ},
        {.addr=0x4276, .value=0x3f, .type=IO_READ},
        {.addr=0x003f, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01D9) {
    const struct CPU_State initial_cpu = {.pc=0x840a, .a=0xab, .x=0x20, .y=0x1a, .sp=0xac, .status=0x4c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0086, .value=0x98}, {.addr=0x840a, .value=0xeb}, {.addr=0x840b, .value=0x86},
    };
    const struct CPU_State final_cpu = {.pc=0x840c, .a=0xab, .x=0x20, .y=0x98, .sp=0xac, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0086, .value=0x98}, {.addr=0x840a, .value=0xeb}, {.addr=0x840b, .value=0x86},
    };
    const struct BusEvent events[] = {
        {.addr=0x840a, .value=0xeb, .type=IO_READ},
        {.addr=0x840b, .value=0x86, .type=IO_READ},
        {.addr=0x0086, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01DA) {
    const struct CPU_State initial_cpu = {.pc=0xeeba, .a=0xaa, .x=0x2d, .y=0x58, .sp=0xe0, .status=0xab};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012c, .value=0x6e}, {.addr=0xeeba, .value=0xeb}, {.addr=0xeebb, .value=0x2c},
    };
    const struct CPU_State final_cpu = {.pc=0xeebc, .a=0xaa, .x=0x2d, .y=0x6e, .sp=0xe0, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x012c, .value=0x6e}, {.addr=0xeeba, .value=0xeb}, {.addr=0xeebb, .value=0x2c},
    };
    const struct BusEvent events[] = {
        {.addr=0xeeba, .value=0xeb, .type=IO_READ},
        {.addr=0xeebb, .value=0x2c, .type=IO_READ},
        {.addr=0x012c, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01DB) {
    const struct CPU_State initial_cpu = {.pc=0x10e6, .a=0x23, .x=0x91, .y=0x01, .sp=0x46, .status=0xc0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e5, .value=0xb8}, {.addr=0x10e6, .value=0xeb}, {.addr=0x10e7, .value=0xe5},
    };
    const struct CPU_State final_cpu = {.pc=0x10e8, .a=0x23, .x=0x91, .y=0xb8, .sp=0x46, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e5, .value=0xb8}, {.addr=0x10e6, .value=0xeb}, {.addr=0x10e7, .value=0xe5},
    };
    const struct BusEvent events[] = {
        {.addr=0x10e6, .value=0xeb, .type=IO_READ},
        {.addr=0x10e7, .value=0xe5, .type=IO_READ},
        {.addr=0x00e5, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01DC) {
    const struct CPU_State initial_cpu = {.pc=0xff98, .a=0xe3, .x=0x2d, .y=0xb6, .sp=0xbc, .status=0xb6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019b, .value=0x35}, {.addr=0xff98, .value=0xeb}, {.addr=0xff99, .value=0x9b},
    };
    const struct CPU_State final_cpu = {.pc=0xff9a, .a=0xe3, .x=0x2d, .y=0x35, .sp=0xbc, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x019b, .value=0x35}, {.addr=0xff98, .value=0xeb}, {.addr=0xff99, .value=0x9b},
    };
    const struct BusEvent events[] = {
        {.addr=0xff98, .value=0xeb, .type=IO_READ},
        {.addr=0xff99, .value=0x9b, .type=IO_READ},
        {.addr=0x019b, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01DD) {
    const struct CPU_State initial_cpu = {.pc=0xb17e, .a=0x31, .x=0x7e, .y=0x6f, .sp=0x3f, .status=0x14};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0036, .value=0x1e}, {.addr=0xb17e, .value=0xeb}, {.addr=0xb17f, .value=0x36},
    };
    const struct CPU_State final_cpu = {.pc=0xb180, .a=0x31, .x=0x7e, .y=0x1e, .sp=0x3f, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x0036, .value=0x1e}, {.addr=0xb17e, .value=0xeb}, {.addr=0xb17f, .value=0x36},
    };
    const struct BusEvent events[] = {
        {.addr=0xb17e, .value=0xeb, .type=IO_READ},
        {.addr=0xb17f, .value=0x36, .type=IO_READ},
        {.addr=0x0036, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01DE) {
    const struct CPU_State initial_cpu = {.pc=0xb709, .a=0x4d, .x=0xd3, .y=0x6b, .sp=0xee, .status=0x0b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00aa, .value=0xa5}, {.addr=0xb709, .value=0xeb}, {.addr=0xb70a, .value=0xaa},
    };
    const struct CPU_State final_cpu = {.pc=0xb70b, .a=0x4d, .x=0xd3, .y=0xa5, .sp=0xee, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x00aa, .value=0xa5}, {.addr=0xb709, .value=0xeb}, {.addr=0xb70a, .value=0xaa},
    };
    const struct BusEvent events[] = {
        {.addr=0xb709, .value=0xeb, .type=IO_READ},
        {.addr=0xb70a, .value=0xaa, .type=IO_READ},
        {.addr=0x00aa, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01DF) {
    const struct CPU_State initial_cpu = {.pc=0x48e8, .a=0x45, .x=0x32, .y=0x2a, .sp=0x51, .status=0x7c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fb, .value=0xba}, {.addr=0x48e8, .value=0xeb}, {.addr=0x48e9, .value=0xfb},
    };
    const struct CPU_State final_cpu = {.pc=0x48ea, .a=0x45, .x=0x32, .y=0xba, .sp=0x51, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fb, .value=0xba}, {.addr=0x48e8, .value=0xeb}, {.addr=0x48e9, .value=0xfb},
    };
    const struct BusEvent events[] = {
        {.addr=0x48e8, .value=0xeb, .type=IO_READ},
        {.addr=0x48e9, .value=0xfb, .type=IO_READ},
        {.addr=0x01fb, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01E0) {
    const struct CPU_State initial_cpu = {.pc=0xae3f, .a=0x4c, .x=0xee, .y=0x3f, .sp=0xa2, .status=0xd2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e3, .value=0x14}, {.addr=0xae3f, .value=0xeb}, {.addr=0xae40, .value=0xe3},
    };
    const struct CPU_State final_cpu = {.pc=0xae41, .a=0x4c, .x=0xee, .y=0x14, .sp=0xa2, .status=0x50};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e3, .value=0x14}, {.addr=0xae3f, .value=0xeb}, {.addr=0xae40, .value=0xe3},
    };
    const struct BusEvent events[] = {
        {.addr=0xae3f, .value=0xeb, .type=IO_READ},
        {.addr=0xae40, .value=0xe3, .type=IO_READ},
        {.addr=0x00e3, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01E1) {
    const struct CPU_State initial_cpu = {.pc=0x8334, .a=0x66, .x=0xac, .y=0x3f, .sp=0x92, .status=0x1f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005d, .value=0x78}, {.addr=0x8334, .value=0xeb}, {.addr=0x8335, .value=0x5d},
    };
    const struct CPU_State final_cpu = {.pc=0x8336, .a=0x66, .x=0xac, .y=0x78, .sp=0x92, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x005d, .value=0x78}, {.addr=0x8334, .value=0xeb}, {.addr=0x8335, .value=0x5d},
    };
    const struct BusEvent events[] = {
        {.addr=0x8334, .value=0xeb, .type=IO_READ},
        {.addr=0x8335, .value=0x5d, .type=IO_READ},
        {.addr=0x005d, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01E2) {
    const struct CPU_State initial_cpu = {.pc=0xc2bb, .a=0x6f, .x=0x21, .y=0x14, .sp=0x31, .status=0x06};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0033, .value=0xfb}, {.addr=0xc2bb, .value=0xeb}, {.addr=0xc2bc, .value=0x33},
    };
    const struct CPU_State final_cpu = {.pc=0xc2bd, .a=0x6f, .x=0x21, .y=0xfb, .sp=0x31, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x0033, .value=0xfb}, {.addr=0xc2bb, .value=0xeb}, {.addr=0xc2bc, .value=0x33},
    };
    const struct BusEvent events[] = {
        {.addr=0xc2bb, .value=0xeb, .type=IO_READ},
        {.addr=0xc2bc, .value=0x33, .type=IO_READ},
        {.addr=0x0033, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01E3) {
    const struct CPU_State initial_cpu = {.pc=0xae75, .a=0x3b, .x=0xd6, .y=0xa2, .sp=0x1f, .status=0x3d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c0, .value=0x0a}, {.addr=0xae75, .value=0xeb}, {.addr=0xae76, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0xae77, .a=0x3b, .x=0xd6, .y=0x0a, .sp=0x1f, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c0, .value=0x0a}, {.addr=0xae75, .value=0xeb}, {.addr=0xae76, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0xae75, .value=0xeb, .type=IO_READ},
        {.addr=0xae76, .value=0xc0, .type=IO_READ},
        {.addr=0x01c0, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01E4) {
    const struct CPU_State initial_cpu = {.pc=0x2cbf, .a=0x00, .x=0x17, .y=0xca, .sp=0xaa, .status=0x1c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b1, .value=0xce}, {.addr=0x2cbf, .value=0xeb}, {.addr=0x2cc0, .value=0xb1},
    };
    const struct CPU_State final_cpu = {.pc=0x2cc1, .a=0x00, .x=0x17, .y=0xce, .sp=0xaa, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b1, .value=0xce}, {.addr=0x2cbf, .value=0xeb}, {.addr=0x2cc0, .value=0xb1},
    };
    const struct BusEvent events[] = {
        {.addr=0x2cbf, .value=0xeb, .type=IO_READ},
        {.addr=0x2cc0, .value=0xb1, .type=IO_READ},
        {.addr=0x00b1, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01E5) {
    const struct CPU_State initial_cpu = {.pc=0x648f, .a=0xfb, .x=0xe1, .y=0x8d, .sp=0x07, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013c, .value=0xbb}, {.addr=0x648f, .value=0xeb}, {.addr=0x6490, .value=0x3c},
    };
    const struct CPU_State final_cpu = {.pc=0x6491, .a=0xfb, .x=0xe1, .y=0xbb, .sp=0x07, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x013c, .value=0xbb}, {.addr=0x648f, .value=0xeb}, {.addr=0x6490, .value=0x3c},
    };
    const struct BusEvent events[] = {
        {.addr=0x648f, .value=0xeb, .type=IO_READ},
        {.addr=0x6490, .value=0x3c, .type=IO_READ},
        {.addr=0x013c, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01E6) {
    const struct CPU_State initial_cpu = {.pc=0x1bf1, .a=0x70, .x=0xcd, .y=0x94, .sp=0x2b, .status=0x7d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019f, .value=0x12}, {.addr=0x1bf1, .value=0xeb}, {.addr=0x1bf2, .value=0x9f},
    };
    const struct CPU_State final_cpu = {.pc=0x1bf3, .a=0x70, .x=0xcd, .y=0x12, .sp=0x2b, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x019f, .value=0x12}, {.addr=0x1bf1, .value=0xeb}, {.addr=0x1bf2, .value=0x9f},
    };
    const struct BusEvent events[] = {
        {.addr=0x1bf1, .value=0xeb, .type=IO_READ},
        {.addr=0x1bf2, .value=0x9f, .type=IO_READ},
        {.addr=0x019f, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01E7) {
    const struct CPU_State initial_cpu = {.pc=0xbd90, .a=0x90, .x=0x7e, .y=0x51, .sp=0x9f, .status=0xd8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0050, .value=0x45}, {.addr=0xbd90, .value=0xeb}, {.addr=0xbd91, .value=0x50},
    };
    const struct CPU_State final_cpu = {.pc=0xbd92, .a=0x90, .x=0x7e, .y=0x45, .sp=0x9f, .status=0x58};
    const struct RamEntry final_ram[] = {
        {.addr=0x0050, .value=0x45}, {.addr=0xbd90, .value=0xeb}, {.addr=0xbd91, .value=0x50},
    };
    const struct BusEvent events[] = {
        {.addr=0xbd90, .value=0xeb, .type=IO_READ},
        {.addr=0xbd91, .value=0x50, .type=IO_READ},
        {.addr=0x0050, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01E8) {
    const struct CPU_State initial_cpu = {.pc=0xd30b, .a=0x19, .x=0x0a, .y=0xb7, .sp=0xe4, .status=0xcf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006f, .value=0xc3}, {.addr=0xd30b, .value=0xeb}, {.addr=0xd30c, .value=0x6f},
    };
    const struct CPU_State final_cpu = {.pc=0xd30d, .a=0x19, .x=0x0a, .y=0xc3, .sp=0xe4, .status=0xcd};
    const struct RamEntry final_ram[] = {
        {.addr=0x006f, .value=0xc3}, {.addr=0xd30b, .value=0xeb}, {.addr=0xd30c, .value=0x6f},
    };
    const struct BusEvent events[] = {
        {.addr=0xd30b, .value=0xeb, .type=IO_READ},
        {.addr=0xd30c, .value=0x6f, .type=IO_READ},
        {.addr=0x006f, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01EA) {
    const struct CPU_State initial_cpu = {.pc=0xa633, .a=0xe3, .x=0x20, .y=0xc1, .sp=0xb1, .status=0x7f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0128, .value=0x9f}, {.addr=0xa633, .value=0xeb}, {.addr=0xa634, .value=0x28},
    };
    const struct CPU_State final_cpu = {.pc=0xa635, .a=0xe3, .x=0x20, .y=0x9f, .sp=0xb1, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0128, .value=0x9f}, {.addr=0xa633, .value=0xeb}, {.addr=0xa634, .value=0x28},
    };
    const struct BusEvent events[] = {
        {.addr=0xa633, .value=0xeb, .type=IO_READ},
        {.addr=0xa634, .value=0x28, .type=IO_READ},
        {.addr=0x0128, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01EB) {
    const struct CPU_State initial_cpu = {.pc=0xbefe, .a=0x4a, .x=0x31, .y=0x2e, .sp=0x57, .status=0xa3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0175, .value=0x85}, {.addr=0xbefe, .value=0xeb}, {.addr=0xbeff, .value=0x75},
    };
    const struct CPU_State final_cpu = {.pc=0xbf00, .a=0x4a, .x=0x31, .y=0x85, .sp=0x57, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0175, .value=0x85}, {.addr=0xbefe, .value=0xeb}, {.addr=0xbeff, .value=0x75},
    };
    const struct BusEvent events[] = {
        {.addr=0xbefe, .value=0xeb, .type=IO_READ},
        {.addr=0xbeff, .value=0x75, .type=IO_READ},
        {.addr=0x0175, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01EC) {
    const struct CPU_State initial_cpu = {.pc=0xfd07, .a=0x46, .x=0x56, .y=0x79, .sp=0xa8, .status=0xc3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0043, .value=0x4b}, {.addr=0xfd07, .value=0xeb}, {.addr=0xfd08, .value=0x43},
    };
    const struct CPU_State final_cpu = {.pc=0xfd09, .a=0x46, .x=0x56, .y=0x4b, .sp=0xa8, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x0043, .value=0x4b}, {.addr=0xfd07, .value=0xeb}, {.addr=0xfd08, .value=0x43},
    };
    const struct BusEvent events[] = {
        {.addr=0xfd07, .value=0xeb, .type=IO_READ},
        {.addr=0xfd08, .value=0x43, .type=IO_READ},
        {.addr=0x0043, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01ED) {
    const struct CPU_State initial_cpu = {.pc=0xf8b3, .a=0xe5, .x=0x39, .y=0x25, .sp=0xbf, .status=0x3d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015c, .value=0x10}, {.addr=0xf8b3, .value=0xeb}, {.addr=0xf8b4, .value=0x5c},
    };
    const struct CPU_State final_cpu = {.pc=0xf8b5, .a=0xe5, .x=0x39, .y=0x10, .sp=0xbf, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x015c, .value=0x10}, {.addr=0xf8b3, .value=0xeb}, {.addr=0xf8b4, .value=0x5c},
    };
    const struct BusEvent events[] = {
        {.addr=0xf8b3, .value=0xeb, .type=IO_READ},
        {.addr=0xf8b4, .value=0x5c, .type=IO_READ},
        {.addr=0x015c, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01EE) {
    const struct CPU_State initial_cpu = {.pc=0x992e, .a=0x03, .x=0x46, .y=0x06, .sp=0x18, .status=0x42};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a0, .value=0x28}, {.addr=0x992e, .value=0xeb}, {.addr=0x992f, .value=0xa0},
    };
    const struct CPU_State final_cpu = {.pc=0x9930, .a=0x03, .x=0x46, .y=0x28, .sp=0x18, .status=0x40};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a0, .value=0x28}, {.addr=0x992e, .value=0xeb}, {.addr=0x992f, .value=0xa0},
    };
    const struct BusEvent events[] = {
        {.addr=0x992e, .value=0xeb, .type=IO_READ},
        {.addr=0x992f, .value=0xa0, .type=IO_READ},
        {.addr=0x00a0, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01EF) {
    const struct CPU_State initial_cpu = {.pc=0xd407, .a=0x56, .x=0xba, .y=0x23, .sp=0x31, .status=0xe7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0163, .value=0x70}, {.addr=0xd407, .value=0xeb}, {.addr=0xd408, .value=0x63},
    };
    const struct CPU_State final_cpu = {.pc=0xd409, .a=0x56, .x=0xba, .y=0x70, .sp=0x31, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x0163, .value=0x70}, {.addr=0xd407, .value=0xeb}, {.addr=0xd408, .value=0x63},
    };
    const struct BusEvent events[] = {
        {.addr=0xd407, .value=0xeb, .type=IO_READ},
        {.addr=0xd408, .value=0x63, .type=IO_READ},
        {.addr=0x0163, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01F0) {
    const struct CPU_State initial_cpu = {.pc=0x58e7, .a=0x7e, .x=0xd9, .y=0xa6, .sp=0xae, .status=0xe1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019c, .value=0xf3}, {.addr=0x58e7, .value=0xeb}, {.addr=0x58e8, .value=0x9c},
    };
    const struct CPU_State final_cpu = {.pc=0x58e9, .a=0x7e, .x=0xd9, .y=0xf3, .sp=0xae, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x019c, .value=0xf3}, {.addr=0x58e7, .value=0xeb}, {.addr=0x58e8, .value=0x9c},
    };
    const struct BusEvent events[] = {
        {.addr=0x58e7, .value=0xeb, .type=IO_READ},
        {.addr=0x58e8, .value=0x9c, .type=IO_READ},
        {.addr=0x019c, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01F1) {
    const struct CPU_State initial_cpu = {.pc=0x3559, .a=0x29, .x=0x1b, .y=0xc7, .sp=0xee, .status=0x40};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0071, .value=0xe5}, {.addr=0x3559, .value=0xeb}, {.addr=0x355a, .value=0x71},
    };
    const struct CPU_State final_cpu = {.pc=0x355b, .a=0x29, .x=0x1b, .y=0xe5, .sp=0xee, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0071, .value=0xe5}, {.addr=0x3559, .value=0xeb}, {.addr=0x355a, .value=0x71},
    };
    const struct BusEvent events[] = {
        {.addr=0x3559, .value=0xeb, .type=IO_READ},
        {.addr=0x355a, .value=0x71, .type=IO_READ},
        {.addr=0x0071, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01F2) {
    const struct CPU_State initial_cpu = {.pc=0xd2d3, .a=0x67, .x=0x52, .y=0xb7, .sp=0x02, .status=0xa9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0152, .value=0x9c}, {.addr=0xd2d3, .value=0xeb}, {.addr=0xd2d4, .value=0x52},
    };
    const struct CPU_State final_cpu = {.pc=0xd2d5, .a=0x67, .x=0x52, .y=0x9c, .sp=0x02, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0152, .value=0x9c}, {.addr=0xd2d3, .value=0xeb}, {.addr=0xd2d4, .value=0x52},
    };
    const struct BusEvent events[] = {
        {.addr=0xd2d3, .value=0xeb, .type=IO_READ},
        {.addr=0xd2d4, .value=0x52, .type=IO_READ},
        {.addr=0x0152, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01F3) {
    const struct CPU_State initial_cpu = {.pc=0x22c2, .a=0x1c, .x=0xe4, .y=0x97, .sp=0xab, .status=0xb2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01aa, .value=0x5b}, {.addr=0x22c2, .value=0xeb}, {.addr=0x22c3, .value=0xaa},
    };
    const struct CPU_State final_cpu = {.pc=0x22c4, .a=0x1c, .x=0xe4, .y=0x5b, .sp=0xab, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x01aa, .value=0x5b}, {.addr=0x22c2, .value=0xeb}, {.addr=0x22c3, .value=0xaa},
    };
    const struct BusEvent events[] = {
        {.addr=0x22c2, .value=0xeb, .type=IO_READ},
        {.addr=0x22c3, .value=0xaa, .type=IO_READ},
        {.addr=0x01aa, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01F4) {
    const struct CPU_State initial_cpu = {.pc=0x9b90, .a=0xd4, .x=0xd6, .y=0xf3, .sp=0x12, .status=0x93};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ce, .value=0xb4}, {.addr=0x9b90, .value=0xeb}, {.addr=0x9b91, .value=0xce},
    };
    const struct CPU_State final_cpu = {.pc=0x9b92, .a=0xd4, .x=0xd6, .y=0xb4, .sp=0x12, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ce, .value=0xb4}, {.addr=0x9b90, .value=0xeb}, {.addr=0x9b91, .value=0xce},
    };
    const struct BusEvent events[] = {
        {.addr=0x9b90, .value=0xeb, .type=IO_READ},
        {.addr=0x9b91, .value=0xce, .type=IO_READ},
        {.addr=0x00ce, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01F5) {
    const struct CPU_State initial_cpu = {.pc=0xad81, .a=0x67, .x=0xfa, .y=0x2b, .sp=0x6b, .status=0xec};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014f, .value=0x02}, {.addr=0xad81, .value=0xeb}, {.addr=0xad82, .value=0x4f},
    };
    const struct CPU_State final_cpu = {.pc=0xad83, .a=0x67, .x=0xfa, .y=0x02, .sp=0x6b, .status=0x6c};
    const struct RamEntry final_ram[] = {
        {.addr=0x014f, .value=0x02}, {.addr=0xad81, .value=0xeb}, {.addr=0xad82, .value=0x4f},
    };
    const struct BusEvent events[] = {
        {.addr=0xad81, .value=0xeb, .type=IO_READ},
        {.addr=0xad82, .value=0x4f, .type=IO_READ},
        {.addr=0x014f, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01F6) {
    const struct CPU_State initial_cpu = {.pc=0xde7d, .a=0x4a, .x=0x3d, .y=0xff, .sp=0x4b, .status=0xc4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0035, .value=0x92}, {.addr=0xde7d, .value=0xeb}, {.addr=0xde7e, .value=0x35},
    };
    const struct CPU_State final_cpu = {.pc=0xde7f, .a=0x4a, .x=0x3d, .y=0x92, .sp=0x4b, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0035, .value=0x92}, {.addr=0xde7d, .value=0xeb}, {.addr=0xde7e, .value=0x35},
    };
    const struct BusEvent events[] = {
        {.addr=0xde7d, .value=0xeb, .type=IO_READ},
        {.addr=0xde7e, .value=0x35, .type=IO_READ},
        {.addr=0x0035, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01F7) {
    const struct CPU_State initial_cpu = {.pc=0xc135, .a=0xe6, .x=0xa9, .y=0x3e, .sp=0xc8, .status=0x27};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a4, .value=0x84}, {.addr=0xc135, .value=0xeb}, {.addr=0xc136, .value=0xa4},
    };
    const struct CPU_State final_cpu = {.pc=0xc137, .a=0xe6, .x=0xa9, .y=0x84, .sp=0xc8, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a4, .value=0x84}, {.addr=0xc135, .value=0xeb}, {.addr=0xc136, .value=0xa4},
    };
    const struct BusEvent events[] = {
        {.addr=0xc135, .value=0xeb, .type=IO_READ},
        {.addr=0xc136, .value=0xa4, .type=IO_READ},
        {.addr=0x01a4, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01F8) {
    const struct CPU_State initial_cpu = {.pc=0xe516, .a=0x24, .x=0xca, .y=0x76, .sp=0x0f, .status=0xf0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018f, .value=0xab}, {.addr=0xe516, .value=0xeb}, {.addr=0xe517, .value=0x8f},
    };
    const struct CPU_State final_cpu = {.pc=0xe518, .a=0x24, .x=0xca, .y=0xab, .sp=0x0f, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x018f, .value=0xab}, {.addr=0xe516, .value=0xeb}, {.addr=0xe517, .value=0x8f},
    };
    const struct BusEvent events[] = {
        {.addr=0xe516, .value=0xeb, .type=IO_READ},
        {.addr=0xe517, .value=0x8f, .type=IO_READ},
        {.addr=0x018f, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x684f, .a=0x3c, .x=0x1e, .y=0x7b, .sp=0xaa, .status=0x60};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0179, .value=0xa3}, {.addr=0x684f, .value=0xeb}, {.addr=0x6850, .value=0x79},
    };
    const struct CPU_State final_cpu = {.pc=0x6851, .a=0x3c, .x=0x1e, .y=0xa3, .sp=0xaa, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0179, .value=0xa3}, {.addr=0x684f, .value=0xeb}, {.addr=0x6850, .value=0x79},
    };
    const struct BusEvent events[] = {
        {.addr=0x684f, .value=0xeb, .type=IO_READ},
        {.addr=0x6850, .value=0x79, .type=IO_READ},
        {.addr=0x0179, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01FB) {
    const struct CPU_State initial_cpu = {.pc=0xe0aa, .a=0x2d, .x=0x8a, .y=0x31, .sp=0xe0, .status=0x33};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0186, .value=0xd0}, {.addr=0xe0aa, .value=0xeb}, {.addr=0xe0ab, .value=0x86},
    };
    const struct CPU_State final_cpu = {.pc=0xe0ac, .a=0x2d, .x=0x8a, .y=0xd0, .sp=0xe0, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0186, .value=0xd0}, {.addr=0xe0aa, .value=0xeb}, {.addr=0xe0ab, .value=0x86},
    };
    const struct BusEvent events[] = {
        {.addr=0xe0aa, .value=0xeb, .type=IO_READ},
        {.addr=0xe0ab, .value=0x86, .type=IO_READ},
        {.addr=0x0186, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01FC) {
    const struct CPU_State initial_cpu = {.pc=0x689f, .a=0xb6, .x=0xc6, .y=0xb6, .sp=0xc7, .status=0xb4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0138, .value=0xad}, {.addr=0x689f, .value=0xeb}, {.addr=0x68a0, .value=0x38},
    };
    const struct CPU_State final_cpu = {.pc=0x68a1, .a=0xb6, .x=0xc6, .y=0xad, .sp=0xc7, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0138, .value=0xad}, {.addr=0x689f, .value=0xeb}, {.addr=0x68a0, .value=0x38},
    };
    const struct BusEvent events[] = {
        {.addr=0x689f, .value=0xeb, .type=IO_READ},
        {.addr=0x68a0, .value=0x38, .type=IO_READ},
        {.addr=0x0138, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01FD) {
    const struct CPU_State initial_cpu = {.pc=0x4339, .a=0x85, .x=0x32, .y=0xbb, .sp=0x5e, .status=0x5f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005f, .value=0xb4}, {.addr=0x4339, .value=0xeb}, {.addr=0x433a, .value=0x5f},
    };
    const struct CPU_State final_cpu = {.pc=0x433b, .a=0x85, .x=0x32, .y=0xb4, .sp=0x5e, .status=0xdd};
    const struct RamEntry final_ram[] = {
        {.addr=0x005f, .value=0xb4}, {.addr=0x4339, .value=0xeb}, {.addr=0x433a, .value=0x5f},
    };
    const struct BusEvent events[] = {
        {.addr=0x4339, .value=0xeb, .type=IO_READ},
        {.addr=0x433a, .value=0x5f, .type=IO_READ},
        {.addr=0x005f, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01FE) {
    const struct CPU_State initial_cpu = {.pc=0xa37f, .a=0xdc, .x=0xa5, .y=0x1c, .sp=0x31, .status=0x8b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0004, .value=0x5b}, {.addr=0xa37f, .value=0xeb}, {.addr=0xa380, .value=0x04},
    };
    const struct CPU_State final_cpu = {.pc=0xa381, .a=0xdc, .x=0xa5, .y=0x5b, .sp=0x31, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x0004, .value=0x5b}, {.addr=0xa37f, .value=0xeb}, {.addr=0xa380, .value=0x04},
    };
    const struct BusEvent events[] = {
        {.addr=0xa37f, .value=0xeb, .type=IO_READ},
        {.addr=0xa380, .value=0x04, .type=IO_READ},
        {.addr=0x0004, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_01FF) {
    const struct CPU_State initial_cpu = {.pc=0xc882, .a=0xcb, .x=0xe6, .y=0x62, .sp=0xe9, .status=0x5e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0014, .value=0xc8}, {.addr=0xc882, .value=0xeb}, {.addr=0xc883, .value=0x14},
    };
    const struct CPU_State final_cpu = {.pc=0xc884, .a=0xcb, .x=0xe6, .y=0xc8, .sp=0xe9, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0014, .value=0xc8}, {.addr=0xc882, .value=0xeb}, {.addr=0xc883, .value=0x14},
    };
    const struct BusEvent events[] = {
        {.addr=0xc882, .value=0xeb, .type=IO_READ},
        {.addr=0xc883, .value=0x14, .type=IO_READ},
        {.addr=0x0014, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0200) {
    const struct CPU_State initial_cpu = {.pc=0xb7f4, .a=0x5a, .x=0x71, .y=0xc1, .sp=0xf2, .status=0x27};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f2, .value=0x0b}, {.addr=0xb7f4, .value=0xeb}, {.addr=0xb7f5, .value=0xf2},
    };
    const struct CPU_State final_cpu = {.pc=0xb7f6, .a=0x5a, .x=0x71, .y=0x0b, .sp=0xf2, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f2, .value=0x0b}, {.addr=0xb7f4, .value=0xeb}, {.addr=0xb7f5, .value=0xf2},
    };
    const struct BusEvent events[] = {
        {.addr=0xb7f4, .value=0xeb, .type=IO_READ},
        {.addr=0xb7f5, .value=0xf2, .type=IO_READ},
        {.addr=0x01f2, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0201) {
    const struct CPU_State initial_cpu = {.pc=0x672a, .a=0xaf, .x=0x7c, .y=0x7e, .sp=0xc0, .status=0xa2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cf, .value=0xc4}, {.addr=0x672a, .value=0xeb}, {.addr=0x672b, .value=0xcf},
    };
    const struct CPU_State final_cpu = {.pc=0x672c, .a=0xaf, .x=0x7c, .y=0xc4, .sp=0xc0, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cf, .value=0xc4}, {.addr=0x672a, .value=0xeb}, {.addr=0x672b, .value=0xcf},
    };
    const struct BusEvent events[] = {
        {.addr=0x672a, .value=0xeb, .type=IO_READ},
        {.addr=0x672b, .value=0xcf, .type=IO_READ},
        {.addr=0x01cf, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0202) {
    const struct CPU_State initial_cpu = {.pc=0xa0aa, .a=0xc7, .x=0xb7, .y=0x33, .sp=0x3c, .status=0x2d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0101, .value=0xe8}, {.addr=0xa0aa, .value=0xeb}, {.addr=0xa0ab, .value=0x01},
    };
    const struct CPU_State final_cpu = {.pc=0xa0ac, .a=0xc7, .x=0xb7, .y=0xe8, .sp=0x3c, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x0101, .value=0xe8}, {.addr=0xa0aa, .value=0xeb}, {.addr=0xa0ab, .value=0x01},
    };
    const struct BusEvent events[] = {
        {.addr=0xa0aa, .value=0xeb, .type=IO_READ},
        {.addr=0xa0ab, .value=0x01, .type=IO_READ},
        {.addr=0x0101, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0203) {
    const struct CPU_State initial_cpu = {.pc=0x2d27, .a=0xf7, .x=0xb9, .y=0x73, .sp=0x52, .status=0x6b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0149, .value=0xf7}, {.addr=0x2d27, .value=0xeb}, {.addr=0x2d28, .value=0x49},
    };
    const struct CPU_State final_cpu = {.pc=0x2d29, .a=0xf7, .x=0xb9, .y=0xf7, .sp=0x52, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0149, .value=0xf7}, {.addr=0x2d27, .value=0xeb}, {.addr=0x2d28, .value=0x49},
    };
    const struct BusEvent events[] = {
        {.addr=0x2d27, .value=0xeb, .type=IO_READ},
        {.addr=0x2d28, .value=0x49, .type=IO_READ},
        {.addr=0x0149, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0204) {
    const struct CPU_State initial_cpu = {.pc=0x2189, .a=0xf3, .x=0x3c, .y=0xe1, .sp=0xad, .status=0xc6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d9, .value=0x9a}, {.addr=0x2189, .value=0xeb}, {.addr=0x218a, .value=0xd9},
    };
    const struct CPU_State final_cpu = {.pc=0x218b, .a=0xf3, .x=0x3c, .y=0x9a, .sp=0xad, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d9, .value=0x9a}, {.addr=0x2189, .value=0xeb}, {.addr=0x218a, .value=0xd9},
    };
    const struct BusEvent events[] = {
        {.addr=0x2189, .value=0xeb, .type=IO_READ},
        {.addr=0x218a, .value=0xd9, .type=IO_READ},
        {.addr=0x00d9, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0205) {
    const struct CPU_State initial_cpu = {.pc=0x3256, .a=0xde, .x=0x36, .y=0x8e, .sp=0x32, .status=0x26};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0183, .value=0xb2}, {.addr=0x3256, .value=0xeb}, {.addr=0x3257, .value=0x83},
    };
    const struct CPU_State final_cpu = {.pc=0x3258, .a=0xde, .x=0x36, .y=0xb2, .sp=0x32, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0183, .value=0xb2}, {.addr=0x3256, .value=0xeb}, {.addr=0x3257, .value=0x83},
    };
    const struct BusEvent events[] = {
        {.addr=0x3256, .value=0xeb, .type=IO_READ},
        {.addr=0x3257, .value=0x83, .type=IO_READ},
        {.addr=0x0183, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0206) {
    const struct CPU_State initial_cpu = {.pc=0x17e6, .a=0x62, .x=0xc1, .y=0x2b, .sp=0x03, .status=0x7d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0101, .value=0x9d}, {.addr=0x17e6, .value=0xeb}, {.addr=0x17e7, .value=0x01},
    };
    const struct CPU_State final_cpu = {.pc=0x17e8, .a=0x62, .x=0xc1, .y=0x9d, .sp=0x03, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0101, .value=0x9d}, {.addr=0x17e6, .value=0xeb}, {.addr=0x17e7, .value=0x01},
    };
    const struct BusEvent events[] = {
        {.addr=0x17e6, .value=0xeb, .type=IO_READ},
        {.addr=0x17e7, .value=0x01, .type=IO_READ},
        {.addr=0x0101, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0207) {
    const struct CPU_State initial_cpu = {.pc=0xd099, .a=0x01, .x=0x0a, .y=0xaf, .sp=0x85, .status=0x8d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bc, .value=0x9d}, {.addr=0xd099, .value=0xeb}, {.addr=0xd09a, .value=0xbc},
    };
    const struct CPU_State final_cpu = {.pc=0xd09b, .a=0x01, .x=0x0a, .y=0x9d, .sp=0x85, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bc, .value=0x9d}, {.addr=0xd099, .value=0xeb}, {.addr=0xd09a, .value=0xbc},
    };
    const struct BusEvent events[] = {
        {.addr=0xd099, .value=0xeb, .type=IO_READ},
        {.addr=0xd09a, .value=0xbc, .type=IO_READ},
        {.addr=0x00bc, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0208) {
    const struct CPU_State initial_cpu = {.pc=0x912d, .a=0xc0, .x=0x25, .y=0x1e, .sp=0x09, .status=0xe0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c0, .value=0xbe}, {.addr=0x912d, .value=0xeb}, {.addr=0x912e, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0x912f, .a=0xc0, .x=0x25, .y=0xbe, .sp=0x09, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c0, .value=0xbe}, {.addr=0x912d, .value=0xeb}, {.addr=0x912e, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0x912d, .value=0xeb, .type=IO_READ},
        {.addr=0x912e, .value=0xc0, .type=IO_READ},
        {.addr=0x01c0, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0209) {
    const struct CPU_State initial_cpu = {.pc=0xb830, .a=0xf3, .x=0xb6, .y=0xe5, .sp=0xad, .status=0x66};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d7, .value=0x36}, {.addr=0xb830, .value=0xeb}, {.addr=0xb831, .value=0xd7},
    };
    const struct CPU_State final_cpu = {.pc=0xb832, .a=0xf3, .x=0xb6, .y=0x36, .sp=0xad, .status=0x64};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d7, .value=0x36}, {.addr=0xb830, .value=0xeb}, {.addr=0xb831, .value=0xd7},
    };
    const struct BusEvent events[] = {
        {.addr=0xb830, .value=0xeb, .type=IO_READ},
        {.addr=0xb831, .value=0xd7, .type=IO_READ},
        {.addr=0x01d7, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_020A) {
    const struct CPU_State initial_cpu = {.pc=0x58fc, .a=0xbc, .x=0x5f, .y=0x41, .sp=0x8c, .status=0xba};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b7, .value=0xaa}, {.addr=0x58fc, .value=0xeb}, {.addr=0x58fd, .value=0xb7},
    };
    const struct CPU_State final_cpu = {.pc=0x58fe, .a=0xbc, .x=0x5f, .y=0xaa, .sp=0x8c, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b7, .value=0xaa}, {.addr=0x58fc, .value=0xeb}, {.addr=0x58fd, .value=0xb7},
    };
    const struct BusEvent events[] = {
        {.addr=0x58fc, .value=0xeb, .type=IO_READ},
        {.addr=0x58fd, .value=0xb7, .type=IO_READ},
        {.addr=0x01b7, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_020B) {
    const struct CPU_State initial_cpu = {.pc=0xd0f3, .a=0xc4, .x=0xba, .y=0xc5, .sp=0xc8, .status=0x37};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0132, .value=0x87}, {.addr=0xd0f3, .value=0xeb}, {.addr=0xd0f4, .value=0x32},
    };
    const struct CPU_State final_cpu = {.pc=0xd0f5, .a=0xc4, .x=0xba, .y=0x87, .sp=0xc8, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0132, .value=0x87}, {.addr=0xd0f3, .value=0xeb}, {.addr=0xd0f4, .value=0x32},
    };
    const struct BusEvent events[] = {
        {.addr=0xd0f3, .value=0xeb, .type=IO_READ},
        {.addr=0xd0f4, .value=0x32, .type=IO_READ},
        {.addr=0x0132, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_020C) {
    const struct CPU_State initial_cpu = {.pc=0x72b5, .a=0x96, .x=0x3a, .y=0x21, .sp=0xd2, .status=0x06};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0080, .value=0xed}, {.addr=0x72b5, .value=0xeb}, {.addr=0x72b6, .value=0x80},
    };
    const struct CPU_State final_cpu = {.pc=0x72b7, .a=0x96, .x=0x3a, .y=0xed, .sp=0xd2, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x0080, .value=0xed}, {.addr=0x72b5, .value=0xeb}, {.addr=0x72b6, .value=0x80},
    };
    const struct BusEvent events[] = {
        {.addr=0x72b5, .value=0xeb, .type=IO_READ},
        {.addr=0x72b6, .value=0x80, .type=IO_READ},
        {.addr=0x0080, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_020D) {
    const struct CPU_State initial_cpu = {.pc=0xb4c9, .a=0xa2, .x=0x96, .y=0x64, .sp=0x7f, .status=0x07};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ab, .value=0xda}, {.addr=0xb4c9, .value=0xeb}, {.addr=0xb4ca, .value=0xab},
    };
    const struct CPU_State final_cpu = {.pc=0xb4cb, .a=0xa2, .x=0x96, .y=0xda, .sp=0x7f, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ab, .value=0xda}, {.addr=0xb4c9, .value=0xeb}, {.addr=0xb4ca, .value=0xab},
    };
    const struct BusEvent events[] = {
        {.addr=0xb4c9, .value=0xeb, .type=IO_READ},
        {.addr=0xb4ca, .value=0xab, .type=IO_READ},
        {.addr=0x00ab, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_020E) {
    const struct CPU_State initial_cpu = {.pc=0xd981, .a=0xd5, .x=0x6e, .y=0x27, .sp=0x1f, .status=0x9d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0058, .value=0xfb}, {.addr=0xd981, .value=0xeb}, {.addr=0xd982, .value=0x58},
    };
    const struct CPU_State final_cpu = {.pc=0xd983, .a=0xd5, .x=0x6e, .y=0xfb, .sp=0x1f, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0058, .value=0xfb}, {.addr=0xd981, .value=0xeb}, {.addr=0xd982, .value=0x58},
    };
    const struct BusEvent events[] = {
        {.addr=0xd981, .value=0xeb, .type=IO_READ},
        {.addr=0xd982, .value=0x58, .type=IO_READ},
        {.addr=0x0058, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_020F) {
    const struct CPU_State initial_cpu = {.pc=0x4137, .a=0x7a, .x=0x7a, .y=0x63, .sp=0xc1, .status=0x91};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0071, .value=0xed}, {.addr=0x4137, .value=0xeb}, {.addr=0x4138, .value=0x71},
    };
    const struct CPU_State final_cpu = {.pc=0x4139, .a=0x7a, .x=0x7a, .y=0xed, .sp=0xc1, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x0071, .value=0xed}, {.addr=0x4137, .value=0xeb}, {.addr=0x4138, .value=0x71},
    };
    const struct BusEvent events[] = {
        {.addr=0x4137, .value=0xeb, .type=IO_READ},
        {.addr=0x4138, .value=0x71, .type=IO_READ},
        {.addr=0x0071, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0210) {
    const struct CPU_State initial_cpu = {.pc=0x1230, .a=0x3d, .x=0x09, .y=0xef, .sp=0xb9, .status=0x17};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0039, .value=0x49}, {.addr=0x1230, .value=0xeb}, {.addr=0x1231, .value=0x39},
    };
    const struct CPU_State final_cpu = {.pc=0x1232, .a=0x3d, .x=0x09, .y=0x49, .sp=0xb9, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x0039, .value=0x49}, {.addr=0x1230, .value=0xeb}, {.addr=0x1231, .value=0x39},
    };
    const struct BusEvent events[] = {
        {.addr=0x1230, .value=0xeb, .type=IO_READ},
        {.addr=0x1231, .value=0x39, .type=IO_READ},
        {.addr=0x0039, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0211) {
    const struct CPU_State initial_cpu = {.pc=0x2f9e, .a=0xd7, .x=0xc8, .y=0xe4, .sp=0x41, .status=0x99};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0059, .value=0xec}, {.addr=0x2f9e, .value=0xeb}, {.addr=0x2f9f, .value=0x59},
    };
    const struct CPU_State final_cpu = {.pc=0x2fa0, .a=0xd7, .x=0xc8, .y=0xec, .sp=0x41, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x0059, .value=0xec}, {.addr=0x2f9e, .value=0xeb}, {.addr=0x2f9f, .value=0x59},
    };
    const struct BusEvent events[] = {
        {.addr=0x2f9e, .value=0xeb, .type=IO_READ},
        {.addr=0x2f9f, .value=0x59, .type=IO_READ},
        {.addr=0x0059, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0212) {
    const struct CPU_State initial_cpu = {.pc=0x9ed5, .a=0x42, .x=0xb9, .y=0xc3, .sp=0x0c, .status=0x18};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0062, .value=0x93}, {.addr=0x9ed5, .value=0xeb}, {.addr=0x9ed6, .value=0x62},
    };
    const struct CPU_State final_cpu = {.pc=0x9ed7, .a=0x42, .x=0xb9, .y=0x93, .sp=0x0c, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x0062, .value=0x93}, {.addr=0x9ed5, .value=0xeb}, {.addr=0x9ed6, .value=0x62},
    };
    const struct BusEvent events[] = {
        {.addr=0x9ed5, .value=0xeb, .type=IO_READ},
        {.addr=0x9ed6, .value=0x62, .type=IO_READ},
        {.addr=0x0062, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0213) {
    const struct CPU_State initial_cpu = {.pc=0x8069, .a=0x98, .x=0xc2, .y=0x72, .sp=0x0c, .status=0x38};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0178, .value=0x47}, {.addr=0x8069, .value=0xeb}, {.addr=0x806a, .value=0x78},
    };
    const struct CPU_State final_cpu = {.pc=0x806b, .a=0x98, .x=0xc2, .y=0x47, .sp=0x0c, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x0178, .value=0x47}, {.addr=0x8069, .value=0xeb}, {.addr=0x806a, .value=0x78},
    };
    const struct BusEvent events[] = {
        {.addr=0x8069, .value=0xeb, .type=IO_READ},
        {.addr=0x806a, .value=0x78, .type=IO_READ},
        {.addr=0x0178, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0214) {
    const struct CPU_State initial_cpu = {.pc=0x90ea, .a=0x2c, .x=0x39, .y=0x2d, .sp=0x64, .status=0xa0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01af, .value=0x2e}, {.addr=0x90ea, .value=0xeb}, {.addr=0x90eb, .value=0xaf},
    };
    const struct CPU_State final_cpu = {.pc=0x90ec, .a=0x2c, .x=0x39, .y=0x2e, .sp=0x64, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x01af, .value=0x2e}, {.addr=0x90ea, .value=0xeb}, {.addr=0x90eb, .value=0xaf},
    };
    const struct BusEvent events[] = {
        {.addr=0x90ea, .value=0xeb, .type=IO_READ},
        {.addr=0x90eb, .value=0xaf, .type=IO_READ},
        {.addr=0x01af, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0215) {
    const struct CPU_State initial_cpu = {.pc=0xaa52, .a=0x36, .x=0xaf, .y=0xaa, .sp=0xa1, .status=0xfa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018b, .value=0x47}, {.addr=0xaa52, .value=0xeb}, {.addr=0xaa53, .value=0x8b},
    };
    const struct CPU_State final_cpu = {.pc=0xaa54, .a=0x36, .x=0xaf, .y=0x47, .sp=0xa1, .status=0x78};
    const struct RamEntry final_ram[] = {
        {.addr=0x018b, .value=0x47}, {.addr=0xaa52, .value=0xeb}, {.addr=0xaa53, .value=0x8b},
    };
    const struct BusEvent events[] = {
        {.addr=0xaa52, .value=0xeb, .type=IO_READ},
        {.addr=0xaa53, .value=0x8b, .type=IO_READ},
        {.addr=0x018b, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0216) {
    const struct CPU_State initial_cpu = {.pc=0x8d9e, .a=0x9f, .x=0x46, .y=0x6c, .sp=0x93, .status=0xa7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0122, .value=0xb7}, {.addr=0x8d9e, .value=0xeb}, {.addr=0x8d9f, .value=0x22},
    };
    const struct CPU_State final_cpu = {.pc=0x8da0, .a=0x9f, .x=0x46, .y=0xb7, .sp=0x93, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0122, .value=0xb7}, {.addr=0x8d9e, .value=0xeb}, {.addr=0x8d9f, .value=0x22},
    };
    const struct BusEvent events[] = {
        {.addr=0x8d9e, .value=0xeb, .type=IO_READ},
        {.addr=0x8d9f, .value=0x22, .type=IO_READ},
        {.addr=0x0122, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0217) {
    const struct CPU_State initial_cpu = {.pc=0x1f7e, .a=0x3b, .x=0x3e, .y=0x63, .sp=0x02, .status=0xaa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0176, .value=0x59}, {.addr=0x1f7e, .value=0xeb}, {.addr=0x1f7f, .value=0x76},
    };
    const struct CPU_State final_cpu = {.pc=0x1f80, .a=0x3b, .x=0x3e, .y=0x59, .sp=0x02, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x0176, .value=0x59}, {.addr=0x1f7e, .value=0xeb}, {.addr=0x1f7f, .value=0x76},
    };
    const struct BusEvent events[] = {
        {.addr=0x1f7e, .value=0xeb, .type=IO_READ},
        {.addr=0x1f7f, .value=0x76, .type=IO_READ},
        {.addr=0x0176, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0218) {
    const struct CPU_State initial_cpu = {.pc=0xe51e, .a=0xfa, .x=0x55, .y=0xd2, .sp=0x3c, .status=0x83};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c5, .value=0xc5}, {.addr=0xe51e, .value=0xeb}, {.addr=0xe51f, .value=0xc5},
    };
    const struct CPU_State final_cpu = {.pc=0xe520, .a=0xfa, .x=0x55, .y=0xc5, .sp=0x3c, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c5, .value=0xc5}, {.addr=0xe51e, .value=0xeb}, {.addr=0xe51f, .value=0xc5},
    };
    const struct BusEvent events[] = {
        {.addr=0xe51e, .value=0xeb, .type=IO_READ},
        {.addr=0xe51f, .value=0xc5, .type=IO_READ},
        {.addr=0x00c5, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0219) {
    const struct CPU_State initial_cpu = {.pc=0x1199, .a=0xc9, .x=0xcf, .y=0xc0, .sp=0xf9, .status=0xef};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013b, .value=0xa4}, {.addr=0x1199, .value=0xeb}, {.addr=0x119a, .value=0x3b},
    };
    const struct CPU_State final_cpu = {.pc=0x119b, .a=0xc9, .x=0xcf, .y=0xa4, .sp=0xf9, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x013b, .value=0xa4}, {.addr=0x1199, .value=0xeb}, {.addr=0x119a, .value=0x3b},
    };
    const struct BusEvent events[] = {
        {.addr=0x1199, .value=0xeb, .type=IO_READ},
        {.addr=0x119a, .value=0x3b, .type=IO_READ},
        {.addr=0x013b, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_021A) {
    const struct CPU_State initial_cpu = {.pc=0x3f42, .a=0x7a, .x=0xfd, .y=0x59, .sp=0x72, .status=0x01};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e7, .value=0x79}, {.addr=0x3f42, .value=0xeb}, {.addr=0x3f43, .value=0xe7},
    };
    const struct CPU_State final_cpu = {.pc=0x3f44, .a=0x7a, .x=0xfd, .y=0x79, .sp=0x72, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e7, .value=0x79}, {.addr=0x3f42, .value=0xeb}, {.addr=0x3f43, .value=0xe7},
    };
    const struct BusEvent events[] = {
        {.addr=0x3f42, .value=0xeb, .type=IO_READ},
        {.addr=0x3f43, .value=0xe7, .type=IO_READ},
        {.addr=0x00e7, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_021B) {
    const struct CPU_State initial_cpu = {.pc=0x75a8, .a=0x17, .x=0xb2, .y=0x08, .sp=0xd7, .status=0xdd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d0, .value=0x7f}, {.addr=0x75a8, .value=0xeb}, {.addr=0x75a9, .value=0xd0},
    };
    const struct CPU_State final_cpu = {.pc=0x75aa, .a=0x17, .x=0xb2, .y=0x7f, .sp=0xd7, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d0, .value=0x7f}, {.addr=0x75a8, .value=0xeb}, {.addr=0x75a9, .value=0xd0},
    };
    const struct BusEvent events[] = {
        {.addr=0x75a8, .value=0xeb, .type=IO_READ},
        {.addr=0x75a9, .value=0xd0, .type=IO_READ},
        {.addr=0x00d0, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_021C) {
    const struct CPU_State initial_cpu = {.pc=0xc00c, .a=0x04, .x=0xf9, .y=0xde, .sp=0x8b, .status=0x9b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b3, .value=0xff}, {.addr=0xc00c, .value=0xeb}, {.addr=0xc00d, .value=0xb3},
    };
    const struct CPU_State final_cpu = {.pc=0xc00e, .a=0x04, .x=0xf9, .y=0xff, .sp=0x8b, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b3, .value=0xff}, {.addr=0xc00c, .value=0xeb}, {.addr=0xc00d, .value=0xb3},
    };
    const struct BusEvent events[] = {
        {.addr=0xc00c, .value=0xeb, .type=IO_READ},
        {.addr=0xc00d, .value=0xb3, .type=IO_READ},
        {.addr=0x00b3, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_021D) {
    const struct CPU_State initial_cpu = {.pc=0x3307, .a=0x15, .x=0x82, .y=0xbb, .sp=0x66, .status=0x90};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001e, .value=0x66}, {.addr=0x3307, .value=0xeb}, {.addr=0x3308, .value=0x1e},
    };
    const struct CPU_State final_cpu = {.pc=0x3309, .a=0x15, .x=0x82, .y=0x66, .sp=0x66, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x001e, .value=0x66}, {.addr=0x3307, .value=0xeb}, {.addr=0x3308, .value=0x1e},
    };
    const struct BusEvent events[] = {
        {.addr=0x3307, .value=0xeb, .type=IO_READ},
        {.addr=0x3308, .value=0x1e, .type=IO_READ},
        {.addr=0x001e, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_021E) {
    const struct CPU_State initial_cpu = {.pc=0xfc28, .a=0x5a, .x=0xde, .y=0x33, .sp=0xac, .status=0xa2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fd, .value=0x16}, {.addr=0xfc28, .value=0xeb}, {.addr=0xfc29, .value=0xfd},
    };
    const struct CPU_State final_cpu = {.pc=0xfc2a, .a=0x5a, .x=0xde, .y=0x16, .sp=0xac, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fd, .value=0x16}, {.addr=0xfc28, .value=0xeb}, {.addr=0xfc29, .value=0xfd},
    };
    const struct BusEvent events[] = {
        {.addr=0xfc28, .value=0xeb, .type=IO_READ},
        {.addr=0xfc29, .value=0xfd, .type=IO_READ},
        {.addr=0x01fd, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_021F) {
    const struct CPU_State initial_cpu = {.pc=0xe697, .a=0xa9, .x=0xf8, .y=0xc1, .sp=0x07, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01af, .value=0x36}, {.addr=0xe697, .value=0xeb}, {.addr=0xe698, .value=0xaf},
    };
    const struct CPU_State final_cpu = {.pc=0xe699, .a=0xa9, .x=0xf8, .y=0x36, .sp=0x07, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x01af, .value=0x36}, {.addr=0xe697, .value=0xeb}, {.addr=0xe698, .value=0xaf},
    };
    const struct BusEvent events[] = {
        {.addr=0xe697, .value=0xeb, .type=IO_READ},
        {.addr=0xe698, .value=0xaf, .type=IO_READ},
        {.addr=0x01af, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0220) {
    const struct CPU_State initial_cpu = {.pc=0x160b, .a=0x46, .x=0x4b, .y=0x38, .sp=0x3f, .status=0xb1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ca, .value=0x40}, {.addr=0x160b, .value=0xeb}, {.addr=0x160c, .value=0xca},
    };
    const struct CPU_State final_cpu = {.pc=0x160d, .a=0x46, .x=0x4b, .y=0x40, .sp=0x3f, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ca, .value=0x40}, {.addr=0x160b, .value=0xeb}, {.addr=0x160c, .value=0xca},
    };
    const struct BusEvent events[] = {
        {.addr=0x160b, .value=0xeb, .type=IO_READ},
        {.addr=0x160c, .value=0xca, .type=IO_READ},
        {.addr=0x01ca, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0221) {
    const struct CPU_State initial_cpu = {.pc=0x6398, .a=0x4a, .x=0x61, .y=0x72, .sp=0x8a, .status=0x66};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0190, .value=0x6c}, {.addr=0x6398, .value=0xeb}, {.addr=0x6399, .value=0x90},
    };
    const struct CPU_State final_cpu = {.pc=0x639a, .a=0x4a, .x=0x61, .y=0x6c, .sp=0x8a, .status=0x64};
    const struct RamEntry final_ram[] = {
        {.addr=0x0190, .value=0x6c}, {.addr=0x6398, .value=0xeb}, {.addr=0x6399, .value=0x90},
    };
    const struct BusEvent events[] = {
        {.addr=0x6398, .value=0xeb, .type=IO_READ},
        {.addr=0x6399, .value=0x90, .type=IO_READ},
        {.addr=0x0190, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0222) {
    const struct CPU_State initial_cpu = {.pc=0xce2d, .a=0x24, .x=0x98, .y=0xc2, .sp=0xbb, .status=0x9c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004a, .value=0xf7}, {.addr=0xce2d, .value=0xeb}, {.addr=0xce2e, .value=0x4a},
    };
    const struct CPU_State final_cpu = {.pc=0xce2f, .a=0x24, .x=0x98, .y=0xf7, .sp=0xbb, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x004a, .value=0xf7}, {.addr=0xce2d, .value=0xeb}, {.addr=0xce2e, .value=0x4a},
    };
    const struct BusEvent events[] = {
        {.addr=0xce2d, .value=0xeb, .type=IO_READ},
        {.addr=0xce2e, .value=0x4a, .type=IO_READ},
        {.addr=0x004a, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0223) {
    const struct CPU_State initial_cpu = {.pc=0xcd82, .a=0x63, .x=0x07, .y=0x04, .sp=0xb9, .status=0x77};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cb, .value=0x6b}, {.addr=0xcd82, .value=0xeb}, {.addr=0xcd83, .value=0xcb},
    };
    const struct CPU_State final_cpu = {.pc=0xcd84, .a=0x63, .x=0x07, .y=0x6b, .sp=0xb9, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cb, .value=0x6b}, {.addr=0xcd82, .value=0xeb}, {.addr=0xcd83, .value=0xcb},
    };
    const struct BusEvent events[] = {
        {.addr=0xcd82, .value=0xeb, .type=IO_READ},
        {.addr=0xcd83, .value=0xcb, .type=IO_READ},
        {.addr=0x01cb, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0224) {
    const struct CPU_State initial_cpu = {.pc=0x731f, .a=0x2b, .x=0xbd, .y=0x1f, .sp=0xcf, .status=0x34};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0183, .value=0x66}, {.addr=0x731f, .value=0xeb}, {.addr=0x7320, .value=0x83},
    };
    const struct CPU_State final_cpu = {.pc=0x7321, .a=0x2b, .x=0xbd, .y=0x66, .sp=0xcf, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x0183, .value=0x66}, {.addr=0x731f, .value=0xeb}, {.addr=0x7320, .value=0x83},
    };
    const struct BusEvent events[] = {
        {.addr=0x731f, .value=0xeb, .type=IO_READ},
        {.addr=0x7320, .value=0x83, .type=IO_READ},
        {.addr=0x0183, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0225) {
    const struct CPU_State initial_cpu = {.pc=0xf148, .a=0x9e, .x=0xd7, .y=0xb9, .sp=0x2a, .status=0x03};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0092, .value=0x8a}, {.addr=0xf148, .value=0xeb}, {.addr=0xf149, .value=0x92},
    };
    const struct CPU_State final_cpu = {.pc=0xf14a, .a=0x9e, .x=0xd7, .y=0x8a, .sp=0x2a, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x0092, .value=0x8a}, {.addr=0xf148, .value=0xeb}, {.addr=0xf149, .value=0x92},
    };
    const struct BusEvent events[] = {
        {.addr=0xf148, .value=0xeb, .type=IO_READ},
        {.addr=0xf149, .value=0x92, .type=IO_READ},
        {.addr=0x0092, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0226) {
    const struct CPU_State initial_cpu = {.pc=0xd967, .a=0x90, .x=0x6f, .y=0xa7, .sp=0xe2, .status=0xfb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0187, .value=0x2f}, {.addr=0xd967, .value=0xeb}, {.addr=0xd968, .value=0x87},
    };
    const struct CPU_State final_cpu = {.pc=0xd969, .a=0x90, .x=0x6f, .y=0x2f, .sp=0xe2, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x0187, .value=0x2f}, {.addr=0xd967, .value=0xeb}, {.addr=0xd968, .value=0x87},
    };
    const struct BusEvent events[] = {
        {.addr=0xd967, .value=0xeb, .type=IO_READ},
        {.addr=0xd968, .value=0x87, .type=IO_READ},
        {.addr=0x0187, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0227) {
    const struct CPU_State initial_cpu = {.pc=0xabc1, .a=0x8d, .x=0xdd, .y=0xa6, .sp=0x86, .status=0x90};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0061, .value=0x99}, {.addr=0xabc1, .value=0xeb}, {.addr=0xabc2, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0xabc3, .a=0x8d, .x=0xdd, .y=0x99, .sp=0x86, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x0061, .value=0x99}, {.addr=0xabc1, .value=0xeb}, {.addr=0xabc2, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0xabc1, .value=0xeb, .type=IO_READ},
        {.addr=0xabc2, .value=0x61, .type=IO_READ},
        {.addr=0x0061, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0228) {
    const struct CPU_State initial_cpu = {.pc=0x492e, .a=0x5d, .x=0xb6, .y=0x67, .sp=0x9f, .status=0xe6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bd, .value=0xc2}, {.addr=0x492e, .value=0xeb}, {.addr=0x492f, .value=0xbd},
    };
    const struct CPU_State final_cpu = {.pc=0x4930, .a=0x5d, .x=0xb6, .y=0xc2, .sp=0x9f, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bd, .value=0xc2}, {.addr=0x492e, .value=0xeb}, {.addr=0x492f, .value=0xbd},
    };
    const struct BusEvent events[] = {
        {.addr=0x492e, .value=0xeb, .type=IO_READ},
        {.addr=0x492f, .value=0xbd, .type=IO_READ},
        {.addr=0x01bd, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0229) {
    const struct CPU_State initial_cpu = {.pc=0x8c34, .a=0xe7, .x=0x03, .y=0x36, .sp=0x7e, .status=0x91};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0098, .value=0x42}, {.addr=0x8c34, .value=0xeb}, {.addr=0x8c35, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0x8c36, .a=0xe7, .x=0x03, .y=0x42, .sp=0x7e, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x0098, .value=0x42}, {.addr=0x8c34, .value=0xeb}, {.addr=0x8c35, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0x8c34, .value=0xeb, .type=IO_READ},
        {.addr=0x8c35, .value=0x98, .type=IO_READ},
        {.addr=0x0098, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_022A) {
    const struct CPU_State initial_cpu = {.pc=0xccf6, .a=0x02, .x=0x94, .y=0x93, .sp=0x9f, .status=0x3c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0197, .value=0xb4}, {.addr=0xccf6, .value=0xeb}, {.addr=0xccf7, .value=0x97},
    };
    const struct CPU_State final_cpu = {.pc=0xccf8, .a=0x02, .x=0x94, .y=0xb4, .sp=0x9f, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0197, .value=0xb4}, {.addr=0xccf6, .value=0xeb}, {.addr=0xccf7, .value=0x97},
    };
    const struct BusEvent events[] = {
        {.addr=0xccf6, .value=0xeb, .type=IO_READ},
        {.addr=0xccf7, .value=0x97, .type=IO_READ},
        {.addr=0x0197, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_022B) {
    const struct CPU_State initial_cpu = {.pc=0x69de, .a=0xe2, .x=0x5b, .y=0x91, .sp=0x5b, .status=0xcd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c1, .value=0xe0}, {.addr=0x69de, .value=0xeb}, {.addr=0x69df, .value=0xc1},
    };
    const struct CPU_State final_cpu = {.pc=0x69e0, .a=0xe2, .x=0x5b, .y=0xe0, .sp=0x5b, .status=0xcd};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c1, .value=0xe0}, {.addr=0x69de, .value=0xeb}, {.addr=0x69df, .value=0xc1},
    };
    const struct BusEvent events[] = {
        {.addr=0x69de, .value=0xeb, .type=IO_READ},
        {.addr=0x69df, .value=0xc1, .type=IO_READ},
        {.addr=0x00c1, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_022C) {
    const struct CPU_State initial_cpu = {.pc=0x99f2, .a=0x45, .x=0x71, .y=0x32, .sp=0x43, .status=0xd4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a4, .value=0xdc}, {.addr=0x99f2, .value=0xeb}, {.addr=0x99f3, .value=0xa4},
    };
    const struct CPU_State final_cpu = {.pc=0x99f4, .a=0x45, .x=0x71, .y=0xdc, .sp=0x43, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a4, .value=0xdc}, {.addr=0x99f2, .value=0xeb}, {.addr=0x99f3, .value=0xa4},
    };
    const struct BusEvent events[] = {
        {.addr=0x99f2, .value=0xeb, .type=IO_READ},
        {.addr=0x99f3, .value=0xa4, .type=IO_READ},
        {.addr=0x00a4, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_022D) {
    const struct CPU_State initial_cpu = {.pc=0x8c83, .a=0x9e, .x=0x90, .y=0x3b, .sp=0x27, .status=0xea};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01af, .value=0x32}, {.addr=0x8c83, .value=0xeb}, {.addr=0x8c84, .value=0xaf},
    };
    const struct CPU_State final_cpu = {.pc=0x8c85, .a=0x9e, .x=0x90, .y=0x32, .sp=0x27, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x01af, .value=0x32}, {.addr=0x8c83, .value=0xeb}, {.addr=0x8c84, .value=0xaf},
    };
    const struct BusEvent events[] = {
        {.addr=0x8c83, .value=0xeb, .type=IO_READ},
        {.addr=0x8c84, .value=0xaf, .type=IO_READ},
        {.addr=0x01af, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_022E) {
    const struct CPU_State initial_cpu = {.pc=0x0ea0, .a=0x17, .x=0x31, .y=0xca, .sp=0x0f, .status=0x87};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000a, .value=0x23}, {.addr=0x0ea0, .value=0xeb}, {.addr=0x0ea1, .value=0x0a},
    };
    const struct CPU_State final_cpu = {.pc=0x0ea2, .a=0x17, .x=0x31, .y=0x23, .sp=0x0f, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x000a, .value=0x23}, {.addr=0x0ea0, .value=0xeb}, {.addr=0x0ea1, .value=0x0a},
    };
    const struct BusEvent events[] = {
        {.addr=0x0ea0, .value=0xeb, .type=IO_READ},
        {.addr=0x0ea1, .value=0x0a, .type=IO_READ},
        {.addr=0x000a, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_022F) {
    const struct CPU_State initial_cpu = {.pc=0x373b, .a=0x81, .x=0x6d, .y=0x5d, .sp=0x32, .status=0xd7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bb, .value=0xa7}, {.addr=0x373b, .value=0xeb}, {.addr=0x373c, .value=0xbb},
    };
    const struct CPU_State final_cpu = {.pc=0x373d, .a=0x81, .x=0x6d, .y=0xa7, .sp=0x32, .status=0xd5};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bb, .value=0xa7}, {.addr=0x373b, .value=0xeb}, {.addr=0x373c, .value=0xbb},
    };
    const struct BusEvent events[] = {
        {.addr=0x373b, .value=0xeb, .type=IO_READ},
        {.addr=0x373c, .value=0xbb, .type=IO_READ},
        {.addr=0x00bb, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0230) {
    const struct CPU_State initial_cpu = {.pc=0xe465, .a=0xd2, .x=0x6c, .y=0x86, .sp=0x83, .status=0x43};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0015, .value=0xdf}, {.addr=0xe465, .value=0xeb}, {.addr=0xe466, .value=0x15},
    };
    const struct CPU_State final_cpu = {.pc=0xe467, .a=0xd2, .x=0x6c, .y=0xdf, .sp=0x83, .status=0xc1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0015, .value=0xdf}, {.addr=0xe465, .value=0xeb}, {.addr=0xe466, .value=0x15},
    };
    const struct BusEvent events[] = {
        {.addr=0xe465, .value=0xeb, .type=IO_READ},
        {.addr=0xe466, .value=0x15, .type=IO_READ},
        {.addr=0x0015, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0231) {
    const struct CPU_State initial_cpu = {.pc=0xfc00, .a=0x9f, .x=0xd5, .y=0xc9, .sp=0x5f, .status=0xf6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0191, .value=0xe9}, {.addr=0xfc00, .value=0xeb}, {.addr=0xfc01, .value=0x91},
    };
    const struct CPU_State final_cpu = {.pc=0xfc02, .a=0x9f, .x=0xd5, .y=0xe9, .sp=0x5f, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0191, .value=0xe9}, {.addr=0xfc00, .value=0xeb}, {.addr=0xfc01, .value=0x91},
    };
    const struct BusEvent events[] = {
        {.addr=0xfc00, .value=0xeb, .type=IO_READ},
        {.addr=0xfc01, .value=0x91, .type=IO_READ},
        {.addr=0x0191, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0232) {
    const struct CPU_State initial_cpu = {.pc=0x3d83, .a=0x44, .x=0xf2, .y=0xd6, .sp=0x33, .status=0x98};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b8, .value=0x78}, {.addr=0x3d83, .value=0xeb}, {.addr=0x3d84, .value=0xb8},
    };
    const struct CPU_State final_cpu = {.pc=0x3d85, .a=0x44, .x=0xf2, .y=0x78, .sp=0x33, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b8, .value=0x78}, {.addr=0x3d83, .value=0xeb}, {.addr=0x3d84, .value=0xb8},
    };
    const struct BusEvent events[] = {
        {.addr=0x3d83, .value=0xeb, .type=IO_READ},
        {.addr=0x3d84, .value=0xb8, .type=IO_READ},
        {.addr=0x00b8, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0233) {
    const struct CPU_State initial_cpu = {.pc=0xe926, .a=0xe4, .x=0x05, .y=0x1d, .sp=0x73, .status=0x4e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c9, .value=0x28}, {.addr=0xe926, .value=0xeb}, {.addr=0xe927, .value=0xc9},
    };
    const struct CPU_State final_cpu = {.pc=0xe928, .a=0xe4, .x=0x05, .y=0x28, .sp=0x73, .status=0x4c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c9, .value=0x28}, {.addr=0xe926, .value=0xeb}, {.addr=0xe927, .value=0xc9},
    };
    const struct BusEvent events[] = {
        {.addr=0xe926, .value=0xeb, .type=IO_READ},
        {.addr=0xe927, .value=0xc9, .type=IO_READ},
        {.addr=0x00c9, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0234) {
    const struct CPU_State initial_cpu = {.pc=0x719a, .a=0x17, .x=0x91, .y=0x78, .sp=0x55, .status=0x0a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0012, .value=0xe5}, {.addr=0x719a, .value=0xeb}, {.addr=0x719b, .value=0x12},
    };
    const struct CPU_State final_cpu = {.pc=0x719c, .a=0x17, .x=0x91, .y=0xe5, .sp=0x55, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x0012, .value=0xe5}, {.addr=0x719a, .value=0xeb}, {.addr=0x719b, .value=0x12},
    };
    const struct BusEvent events[] = {
        {.addr=0x719a, .value=0xeb, .type=IO_READ},
        {.addr=0x719b, .value=0x12, .type=IO_READ},
        {.addr=0x0012, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0235) {
    const struct CPU_State initial_cpu = {.pc=0x5b4b, .a=0x36, .x=0xb5, .y=0x8b, .sp=0xaa, .status=0x21};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b2, .value=0x82}, {.addr=0x5b4b, .value=0xeb}, {.addr=0x5b4c, .value=0xb2},
    };
    const struct CPU_State final_cpu = {.pc=0x5b4d, .a=0x36, .x=0xb5, .y=0x82, .sp=0xaa, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b2, .value=0x82}, {.addr=0x5b4b, .value=0xeb}, {.addr=0x5b4c, .value=0xb2},
    };
    const struct BusEvent events[] = {
        {.addr=0x5b4b, .value=0xeb, .type=IO_READ},
        {.addr=0x5b4c, .value=0xb2, .type=IO_READ},
        {.addr=0x01b2, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0236) {
    const struct CPU_State initial_cpu = {.pc=0xadd7, .a=0xc6, .x=0x83, .y=0x22, .sp=0x7e, .status=0x08};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e0, .value=0x7a}, {.addr=0xadd7, .value=0xeb}, {.addr=0xadd8, .value=0xe0},
    };
    const struct CPU_State final_cpu = {.pc=0xadd9, .a=0xc6, .x=0x83, .y=0x7a, .sp=0x7e, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e0, .value=0x7a}, {.addr=0xadd7, .value=0xeb}, {.addr=0xadd8, .value=0xe0},
    };
    const struct BusEvent events[] = {
        {.addr=0xadd7, .value=0xeb, .type=IO_READ},
        {.addr=0xadd8, .value=0xe0, .type=IO_READ},
        {.addr=0x00e0, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0237) {
    const struct CPU_State initial_cpu = {.pc=0xbba6, .a=0xd3, .x=0x31, .y=0xc5, .sp=0xff, .status=0xc0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005e, .value=0xbd}, {.addr=0xbba6, .value=0xeb}, {.addr=0xbba7, .value=0x5e},
    };
    const struct CPU_State final_cpu = {.pc=0xbba8, .a=0xd3, .x=0x31, .y=0xbd, .sp=0xff, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x005e, .value=0xbd}, {.addr=0xbba6, .value=0xeb}, {.addr=0xbba7, .value=0x5e},
    };
    const struct BusEvent events[] = {
        {.addr=0xbba6, .value=0xeb, .type=IO_READ},
        {.addr=0xbba7, .value=0x5e, .type=IO_READ},
        {.addr=0x005e, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0238) {
    const struct CPU_State initial_cpu = {.pc=0xdf5f, .a=0x3d, .x=0xfd, .y=0x30, .sp=0xe0, .status=0x17};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0013, .value=0xc4}, {.addr=0xdf5f, .value=0xeb}, {.addr=0xdf60, .value=0x13},
    };
    const struct CPU_State final_cpu = {.pc=0xdf61, .a=0x3d, .x=0xfd, .y=0xc4, .sp=0xe0, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x0013, .value=0xc4}, {.addr=0xdf5f, .value=0xeb}, {.addr=0xdf60, .value=0x13},
    };
    const struct BusEvent events[] = {
        {.addr=0xdf5f, .value=0xeb, .type=IO_READ},
        {.addr=0xdf60, .value=0x13, .type=IO_READ},
        {.addr=0x0013, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0239) {
    const struct CPU_State initial_cpu = {.pc=0xd1f3, .a=0x33, .x=0x84, .y=0xb7, .sp=0x89, .status=0x6f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ca, .value=0x2f}, {.addr=0xd1f3, .value=0xeb}, {.addr=0xd1f4, .value=0xca},
    };
    const struct CPU_State final_cpu = {.pc=0xd1f5, .a=0x33, .x=0x84, .y=0x2f, .sp=0x89, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ca, .value=0x2f}, {.addr=0xd1f3, .value=0xeb}, {.addr=0xd1f4, .value=0xca},
    };
    const struct BusEvent events[] = {
        {.addr=0xd1f3, .value=0xeb, .type=IO_READ},
        {.addr=0xd1f4, .value=0xca, .type=IO_READ},
        {.addr=0x01ca, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_023A) {
    const struct CPU_State initial_cpu = {.pc=0x0f2a, .a=0x15, .x=0x00, .y=0x95, .sp=0xf2, .status=0x54};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0011, .value=0x09}, {.addr=0x0f2a, .value=0xeb}, {.addr=0x0f2b, .value=0x11},
    };
    const struct CPU_State final_cpu = {.pc=0x0f2c, .a=0x15, .x=0x00, .y=0x09, .sp=0xf2, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x0011, .value=0x09}, {.addr=0x0f2a, .value=0xeb}, {.addr=0x0f2b, .value=0x11},
    };
    const struct BusEvent events[] = {
        {.addr=0x0f2a, .value=0xeb, .type=IO_READ},
        {.addr=0x0f2b, .value=0x11, .type=IO_READ},
        {.addr=0x0011, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_023B) {
    const struct CPU_State initial_cpu = {.pc=0x8c71, .a=0x98, .x=0x80, .y=0x6f, .sp=0x80, .status=0x4c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000d, .value=0xb3}, {.addr=0x8c71, .value=0xeb}, {.addr=0x8c72, .value=0x0d},
    };
    const struct CPU_State final_cpu = {.pc=0x8c73, .a=0x98, .x=0x80, .y=0xb3, .sp=0x80, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x000d, .value=0xb3}, {.addr=0x8c71, .value=0xeb}, {.addr=0x8c72, .value=0x0d},
    };
    const struct BusEvent events[] = {
        {.addr=0x8c71, .value=0xeb, .type=IO_READ},
        {.addr=0x8c72, .value=0x0d, .type=IO_READ},
        {.addr=0x000d, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_023C) {
    const struct CPU_State initial_cpu = {.pc=0xd14f, .a=0x5d, .x=0x6b, .y=0xd6, .sp=0xef, .status=0x0c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ac, .value=0x58}, {.addr=0xd14f, .value=0xeb}, {.addr=0xd150, .value=0xac},
    };
    const struct CPU_State final_cpu = {.pc=0xd151, .a=0x5d, .x=0x6b, .y=0x58, .sp=0xef, .status=0x0c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ac, .value=0x58}, {.addr=0xd14f, .value=0xeb}, {.addr=0xd150, .value=0xac},
    };
    const struct BusEvent events[] = {
        {.addr=0xd14f, .value=0xeb, .type=IO_READ},
        {.addr=0xd150, .value=0xac, .type=IO_READ},
        {.addr=0x00ac, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_023D) {
    const struct CPU_State initial_cpu = {.pc=0x12dc, .a=0x91, .x=0x37, .y=0x72, .sp=0xd0, .status=0x50};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000a, .value=0xe5}, {.addr=0x12dc, .value=0xeb}, {.addr=0x12dd, .value=0x0a},
    };
    const struct CPU_State final_cpu = {.pc=0x12de, .a=0x91, .x=0x37, .y=0xe5, .sp=0xd0, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x000a, .value=0xe5}, {.addr=0x12dc, .value=0xeb}, {.addr=0x12dd, .value=0x0a},
    };
    const struct BusEvent events[] = {
        {.addr=0x12dc, .value=0xeb, .type=IO_READ},
        {.addr=0x12dd, .value=0x0a, .type=IO_READ},
        {.addr=0x000a, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_023E) {
    const struct CPU_State initial_cpu = {.pc=0x8022, .a=0x2e, .x=0x93, .y=0x40, .sp=0xa5, .status=0x9f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007a, .value=0x7a}, {.addr=0x8022, .value=0xeb}, {.addr=0x8023, .value=0x7a},
    };
    const struct CPU_State final_cpu = {.pc=0x8024, .a=0x2e, .x=0x93, .y=0x7a, .sp=0xa5, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x007a, .value=0x7a}, {.addr=0x8022, .value=0xeb}, {.addr=0x8023, .value=0x7a},
    };
    const struct BusEvent events[] = {
        {.addr=0x8022, .value=0xeb, .type=IO_READ},
        {.addr=0x8023, .value=0x7a, .type=IO_READ},
        {.addr=0x007a, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_023F) {
    const struct CPU_State initial_cpu = {.pc=0x2e1a, .a=0x98, .x=0x3d, .y=0xde, .sp=0xd9, .status=0x32};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a4, .value=0x47}, {.addr=0x2e1a, .value=0xeb}, {.addr=0x2e1b, .value=0xa4},
    };
    const struct CPU_State final_cpu = {.pc=0x2e1c, .a=0x98, .x=0x3d, .y=0x47, .sp=0xd9, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a4, .value=0x47}, {.addr=0x2e1a, .value=0xeb}, {.addr=0x2e1b, .value=0xa4},
    };
    const struct BusEvent events[] = {
        {.addr=0x2e1a, .value=0xeb, .type=IO_READ},
        {.addr=0x2e1b, .value=0xa4, .type=IO_READ},
        {.addr=0x01a4, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0240) {
    const struct CPU_State initial_cpu = {.pc=0x6127, .a=0xb3, .x=0x8d, .y=0x04, .sp=0x10, .status=0xd2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0051, .value=0x2f}, {.addr=0x6127, .value=0xeb}, {.addr=0x6128, .value=0x51},
    };
    const struct CPU_State final_cpu = {.pc=0x6129, .a=0xb3, .x=0x8d, .y=0x2f, .sp=0x10, .status=0x50};
    const struct RamEntry final_ram[] = {
        {.addr=0x0051, .value=0x2f}, {.addr=0x6127, .value=0xeb}, {.addr=0x6128, .value=0x51},
    };
    const struct BusEvent events[] = {
        {.addr=0x6127, .value=0xeb, .type=IO_READ},
        {.addr=0x6128, .value=0x51, .type=IO_READ},
        {.addr=0x0051, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0241) {
    const struct CPU_State initial_cpu = {.pc=0xb58c, .a=0xea, .x=0x26, .y=0x81, .sp=0x11, .status=0x6f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0147, .value=0x42}, {.addr=0xb58c, .value=0xeb}, {.addr=0xb58d, .value=0x47},
    };
    const struct CPU_State final_cpu = {.pc=0xb58e, .a=0xea, .x=0x26, .y=0x42, .sp=0x11, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0147, .value=0x42}, {.addr=0xb58c, .value=0xeb}, {.addr=0xb58d, .value=0x47},
    };
    const struct BusEvent events[] = {
        {.addr=0xb58c, .value=0xeb, .type=IO_READ},
        {.addr=0xb58d, .value=0x47, .type=IO_READ},
        {.addr=0x0147, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0242) {
    const struct CPU_State initial_cpu = {.pc=0xe450, .a=0x1a, .x=0x18, .y=0xa1, .sp=0xd0, .status=0x50};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c1, .value=0xaf}, {.addr=0xe450, .value=0xeb}, {.addr=0xe451, .value=0xc1},
    };
    const struct CPU_State final_cpu = {.pc=0xe452, .a=0x1a, .x=0x18, .y=0xaf, .sp=0xd0, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c1, .value=0xaf}, {.addr=0xe450, .value=0xeb}, {.addr=0xe451, .value=0xc1},
    };
    const struct BusEvent events[] = {
        {.addr=0xe450, .value=0xeb, .type=IO_READ},
        {.addr=0xe451, .value=0xc1, .type=IO_READ},
        {.addr=0x00c1, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0243) {
    const struct CPU_State initial_cpu = {.pc=0x8eb9, .a=0xa0, .x=0x2f, .y=0x19, .sp=0xa4, .status=0x60};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01dd, .value=0x3b}, {.addr=0x8eb9, .value=0xeb}, {.addr=0x8eba, .value=0xdd},
    };
    const struct CPU_State final_cpu = {.pc=0x8ebb, .a=0xa0, .x=0x2f, .y=0x3b, .sp=0xa4, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x01dd, .value=0x3b}, {.addr=0x8eb9, .value=0xeb}, {.addr=0x8eba, .value=0xdd},
    };
    const struct BusEvent events[] = {
        {.addr=0x8eb9, .value=0xeb, .type=IO_READ},
        {.addr=0x8eba, .value=0xdd, .type=IO_READ},
        {.addr=0x01dd, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0244) {
    const struct CPU_State initial_cpu = {.pc=0x68e9, .a=0x22, .x=0xac, .y=0xc5, .sp=0x2c, .status=0xe3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f1, .value=0xf5}, {.addr=0x68e9, .value=0xeb}, {.addr=0x68ea, .value=0xf1},
    };
    const struct CPU_State final_cpu = {.pc=0x68eb, .a=0x22, .x=0xac, .y=0xf5, .sp=0x2c, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f1, .value=0xf5}, {.addr=0x68e9, .value=0xeb}, {.addr=0x68ea, .value=0xf1},
    };
    const struct BusEvent events[] = {
        {.addr=0x68e9, .value=0xeb, .type=IO_READ},
        {.addr=0x68ea, .value=0xf1, .type=IO_READ},
        {.addr=0x01f1, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0245) {
    const struct CPU_State initial_cpu = {.pc=0xc724, .a=0x9c, .x=0x07, .y=0x92, .sp=0xc4, .status=0x1e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0037, .value=0x25}, {.addr=0xc724, .value=0xeb}, {.addr=0xc725, .value=0x37},
    };
    const struct CPU_State final_cpu = {.pc=0xc726, .a=0x9c, .x=0x07, .y=0x25, .sp=0xc4, .status=0x1c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0037, .value=0x25}, {.addr=0xc724, .value=0xeb}, {.addr=0xc725, .value=0x37},
    };
    const struct BusEvent events[] = {
        {.addr=0xc724, .value=0xeb, .type=IO_READ},
        {.addr=0xc725, .value=0x37, .type=IO_READ},
        {.addr=0x0037, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0246) {
    const struct CPU_State initial_cpu = {.pc=0x3dea, .a=0x34, .x=0xf3, .y=0x74, .sp=0x17, .status=0xdb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0000, .value=0x5c}, {.addr=0x3dea, .value=0xeb}, {.addr=0x3deb, .value=0x00},
    };
    const struct CPU_State final_cpu = {.pc=0x3dec, .a=0x34, .x=0xf3, .y=0x5c, .sp=0x17, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x0000, .value=0x5c}, {.addr=0x3dea, .value=0xeb}, {.addr=0x3deb, .value=0x00},
    };
    const struct BusEvent events[] = {
        {.addr=0x3dea, .value=0xeb, .type=IO_READ},
        {.addr=0x3deb, .value=0x00, .type=IO_READ},
        {.addr=0x0000, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0247) {
    const struct CPU_State initial_cpu = {.pc=0x38e2, .a=0xce, .x=0xbd, .y=0xcd, .sp=0x61, .status=0x1c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0082, .value=0xa4}, {.addr=0x38e2, .value=0xeb}, {.addr=0x38e3, .value=0x82},
    };
    const struct CPU_State final_cpu = {.pc=0x38e4, .a=0xce, .x=0xbd, .y=0xa4, .sp=0x61, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0082, .value=0xa4}, {.addr=0x38e2, .value=0xeb}, {.addr=0x38e3, .value=0x82},
    };
    const struct BusEvent events[] = {
        {.addr=0x38e2, .value=0xeb, .type=IO_READ},
        {.addr=0x38e3, .value=0x82, .type=IO_READ},
        {.addr=0x0082, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0248) {
    const struct CPU_State initial_cpu = {.pc=0x547b, .a=0xb0, .x=0x38, .y=0x9c, .sp=0xda, .status=0x38};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0135, .value=0x79}, {.addr=0x547b, .value=0xeb}, {.addr=0x547c, .value=0x35},
    };
    const struct CPU_State final_cpu = {.pc=0x547d, .a=0xb0, .x=0x38, .y=0x79, .sp=0xda, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x0135, .value=0x79}, {.addr=0x547b, .value=0xeb}, {.addr=0x547c, .value=0x35},
    };
    const struct BusEvent events[] = {
        {.addr=0x547b, .value=0xeb, .type=IO_READ},
        {.addr=0x547c, .value=0x35, .type=IO_READ},
        {.addr=0x0135, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0249) {
    const struct CPU_State initial_cpu = {.pc=0x6f37, .a=0x07, .x=0xb0, .y=0x10, .sp=0x4a, .status=0x7e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0179, .value=0x4d}, {.addr=0x6f37, .value=0xeb}, {.addr=0x6f38, .value=0x79},
    };
    const struct CPU_State final_cpu = {.pc=0x6f39, .a=0x07, .x=0xb0, .y=0x4d, .sp=0x4a, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0179, .value=0x4d}, {.addr=0x6f37, .value=0xeb}, {.addr=0x6f38, .value=0x79},
    };
    const struct BusEvent events[] = {
        {.addr=0x6f37, .value=0xeb, .type=IO_READ},
        {.addr=0x6f38, .value=0x79, .type=IO_READ},
        {.addr=0x0179, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_024A) {
    const struct CPU_State initial_cpu = {.pc=0x3ea2, .a=0xe3, .x=0xbc, .y=0x71, .sp=0x31, .status=0x78};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0165, .value=0x59}, {.addr=0x3ea2, .value=0xeb}, {.addr=0x3ea3, .value=0x65},
    };
    const struct CPU_State final_cpu = {.pc=0x3ea4, .a=0xe3, .x=0xbc, .y=0x59, .sp=0x31, .status=0x78};
    const struct RamEntry final_ram[] = {
        {.addr=0x0165, .value=0x59}, {.addr=0x3ea2, .value=0xeb}, {.addr=0x3ea3, .value=0x65},
    };
    const struct BusEvent events[] = {
        {.addr=0x3ea2, .value=0xeb, .type=IO_READ},
        {.addr=0x3ea3, .value=0x65, .type=IO_READ},
        {.addr=0x0165, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_024B) {
    const struct CPU_State initial_cpu = {.pc=0x044c, .a=0x1d, .x=0x42, .y=0xa0, .sp=0x8b, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013c, .value=0x8a}, {.addr=0x044c, .value=0xeb}, {.addr=0x044d, .value=0x3c},
    };
    const struct CPU_State final_cpu = {.pc=0x044e, .a=0x1d, .x=0x42, .y=0x8a, .sp=0x8b, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x013c, .value=0x8a}, {.addr=0x044c, .value=0xeb}, {.addr=0x044d, .value=0x3c},
    };
    const struct BusEvent events[] = {
        {.addr=0x044c, .value=0xeb, .type=IO_READ},
        {.addr=0x044d, .value=0x3c, .type=IO_READ},
        {.addr=0x013c, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_024C) {
    const struct CPU_State initial_cpu = {.pc=0x1e06, .a=0x1f, .x=0xab, .y=0x62, .sp=0x5c, .status=0x94};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0026, .value=0x50}, {.addr=0x1e06, .value=0xeb}, {.addr=0x1e07, .value=0x26},
    };
    const struct CPU_State final_cpu = {.pc=0x1e08, .a=0x1f, .x=0xab, .y=0x50, .sp=0x5c, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x0026, .value=0x50}, {.addr=0x1e06, .value=0xeb}, {.addr=0x1e07, .value=0x26},
    };
    const struct BusEvent events[] = {
        {.addr=0x1e06, .value=0xeb, .type=IO_READ},
        {.addr=0x1e07, .value=0x26, .type=IO_READ},
        {.addr=0x0026, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_024D) {
    const struct CPU_State initial_cpu = {.pc=0xea3b, .a=0xd4, .x=0xcd, .y=0xde, .sp=0x76, .status=0x53};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001b, .value=0x66}, {.addr=0xea3b, .value=0xeb}, {.addr=0xea3c, .value=0x1b},
    };
    const struct CPU_State final_cpu = {.pc=0xea3d, .a=0xd4, .x=0xcd, .y=0x66, .sp=0x76, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x001b, .value=0x66}, {.addr=0xea3b, .value=0xeb}, {.addr=0xea3c, .value=0x1b},
    };
    const struct BusEvent events[] = {
        {.addr=0xea3b, .value=0xeb, .type=IO_READ},
        {.addr=0xea3c, .value=0x1b, .type=IO_READ},
        {.addr=0x001b, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_024E) {
    const struct CPU_State initial_cpu = {.pc=0x5a4b, .a=0xb9, .x=0xd2, .y=0xe1, .sp=0xa5, .status=0xe5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017b, .value=0xc4}, {.addr=0x5a4b, .value=0xeb}, {.addr=0x5a4c, .value=0x7b},
    };
    const struct CPU_State final_cpu = {.pc=0x5a4d, .a=0xb9, .x=0xd2, .y=0xc4, .sp=0xa5, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x017b, .value=0xc4}, {.addr=0x5a4b, .value=0xeb}, {.addr=0x5a4c, .value=0x7b},
    };
    const struct BusEvent events[] = {
        {.addr=0x5a4b, .value=0xeb, .type=IO_READ},
        {.addr=0x5a4c, .value=0x7b, .type=IO_READ},
        {.addr=0x017b, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_024F) {
    const struct CPU_State initial_cpu = {.pc=0xe6df, .a=0x3a, .x=0x65, .y=0xf0, .sp=0xd8, .status=0x4f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006f, .value=0xcd}, {.addr=0xe6df, .value=0xeb}, {.addr=0xe6e0, .value=0x6f},
    };
    const struct CPU_State final_cpu = {.pc=0xe6e1, .a=0x3a, .x=0x65, .y=0xcd, .sp=0xd8, .status=0xcd};
    const struct RamEntry final_ram[] = {
        {.addr=0x006f, .value=0xcd}, {.addr=0xe6df, .value=0xeb}, {.addr=0xe6e0, .value=0x6f},
    };
    const struct BusEvent events[] = {
        {.addr=0xe6df, .value=0xeb, .type=IO_READ},
        {.addr=0xe6e0, .value=0x6f, .type=IO_READ},
        {.addr=0x006f, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0250) {
    const struct CPU_State initial_cpu = {.pc=0x2085, .a=0x43, .x=0x3a, .y=0x21, .sp=0xb9, .status=0xe7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0185, .value=0xe5}, {.addr=0x2085, .value=0xeb}, {.addr=0x2086, .value=0x85},
    };
    const struct CPU_State final_cpu = {.pc=0x2087, .a=0x43, .x=0x3a, .y=0xe5, .sp=0xb9, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0185, .value=0xe5}, {.addr=0x2085, .value=0xeb}, {.addr=0x2086, .value=0x85},
    };
    const struct BusEvent events[] = {
        {.addr=0x2085, .value=0xeb, .type=IO_READ},
        {.addr=0x2086, .value=0x85, .type=IO_READ},
        {.addr=0x0185, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0251) {
    const struct CPU_State initial_cpu = {.pc=0x887f, .a=0x25, .x=0xc4, .y=0x73, .sp=0x01, .status=0x58};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0098, .value=0xd4}, {.addr=0x887f, .value=0xeb}, {.addr=0x8880, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0x8881, .a=0x25, .x=0xc4, .y=0xd4, .sp=0x01, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0098, .value=0xd4}, {.addr=0x887f, .value=0xeb}, {.addr=0x8880, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0x887f, .value=0xeb, .type=IO_READ},
        {.addr=0x8880, .value=0x98, .type=IO_READ},
        {.addr=0x0098, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0252) {
    const struct CPU_State initial_cpu = {.pc=0xda6a, .a=0x98, .x=0x2a, .y=0x1b, .sp=0x87, .status=0x09};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0080, .value=0x74}, {.addr=0xda6a, .value=0xeb}, {.addr=0xda6b, .value=0x80},
    };
    const struct CPU_State final_cpu = {.pc=0xda6c, .a=0x98, .x=0x2a, .y=0x74, .sp=0x87, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x0080, .value=0x74}, {.addr=0xda6a, .value=0xeb}, {.addr=0xda6b, .value=0x80},
    };
    const struct BusEvent events[] = {
        {.addr=0xda6a, .value=0xeb, .type=IO_READ},
        {.addr=0xda6b, .value=0x80, .type=IO_READ},
        {.addr=0x0080, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0253) {
    const struct CPU_State initial_cpu = {.pc=0x64f6, .a=0x2e, .x=0x68, .y=0xfe, .sp=0x52, .status=0x67};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c5, .value=0xf2}, {.addr=0x64f6, .value=0xeb}, {.addr=0x64f7, .value=0xc5},
    };
    const struct CPU_State final_cpu = {.pc=0x64f8, .a=0x2e, .x=0x68, .y=0xf2, .sp=0x52, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c5, .value=0xf2}, {.addr=0x64f6, .value=0xeb}, {.addr=0x64f7, .value=0xc5},
    };
    const struct BusEvent events[] = {
        {.addr=0x64f6, .value=0xeb, .type=IO_READ},
        {.addr=0x64f7, .value=0xc5, .type=IO_READ},
        {.addr=0x01c5, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0254) {
    const struct CPU_State initial_cpu = {.pc=0xe87e, .a=0xa5, .x=0x9f, .y=0x2b, .sp=0x52, .status=0xa1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cd, .value=0xca}, {.addr=0xe87e, .value=0xeb}, {.addr=0xe87f, .value=0xcd},
    };
    const struct CPU_State final_cpu = {.pc=0xe880, .a=0xa5, .x=0x9f, .y=0xca, .sp=0x52, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cd, .value=0xca}, {.addr=0xe87e, .value=0xeb}, {.addr=0xe87f, .value=0xcd},
    };
    const struct BusEvent events[] = {
        {.addr=0xe87e, .value=0xeb, .type=IO_READ},
        {.addr=0xe87f, .value=0xcd, .type=IO_READ},
        {.addr=0x01cd, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0255) {
    const struct CPU_State initial_cpu = {.pc=0x4a58, .a=0x91, .x=0x3a, .y=0x15, .sp=0x7a, .status=0xdf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0046, .value=0x65}, {.addr=0x4a58, .value=0xeb}, {.addr=0x4a59, .value=0x46},
    };
    const struct CPU_State final_cpu = {.pc=0x4a5a, .a=0x91, .x=0x3a, .y=0x65, .sp=0x7a, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0046, .value=0x65}, {.addr=0x4a58, .value=0xeb}, {.addr=0x4a59, .value=0x46},
    };
    const struct BusEvent events[] = {
        {.addr=0x4a58, .value=0xeb, .type=IO_READ},
        {.addr=0x4a59, .value=0x46, .type=IO_READ},
        {.addr=0x0046, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0256) {
    const struct CPU_State initial_cpu = {.pc=0xf30e, .a=0x93, .x=0x40, .y=0xb9, .sp=0xc0, .status=0xde};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0019, .value=0xb4}, {.addr=0xf30e, .value=0xeb}, {.addr=0xf30f, .value=0x19},
    };
    const struct CPU_State final_cpu = {.pc=0xf310, .a=0x93, .x=0x40, .y=0xb4, .sp=0xc0, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0019, .value=0xb4}, {.addr=0xf30e, .value=0xeb}, {.addr=0xf30f, .value=0x19},
    };
    const struct BusEvent events[] = {
        {.addr=0xf30e, .value=0xeb, .type=IO_READ},
        {.addr=0xf30f, .value=0x19, .type=IO_READ},
        {.addr=0x0019, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0257) {
    const struct CPU_State initial_cpu = {.pc=0xc459, .a=0x02, .x=0x1b, .y=0xbe, .sp=0xf6, .status=0x16};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e7, .value=0x61}, {.addr=0xc459, .value=0xeb}, {.addr=0xc45a, .value=0xe7},
    };
    const struct CPU_State final_cpu = {.pc=0xc45b, .a=0x02, .x=0x1b, .y=0x61, .sp=0xf6, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e7, .value=0x61}, {.addr=0xc459, .value=0xeb}, {.addr=0xc45a, .value=0xe7},
    };
    const struct BusEvent events[] = {
        {.addr=0xc459, .value=0xeb, .type=IO_READ},
        {.addr=0xc45a, .value=0xe7, .type=IO_READ},
        {.addr=0x00e7, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0258) {
    const struct CPU_State initial_cpu = {.pc=0x40ff, .a=0x7f, .x=0xec, .y=0xa6, .sp=0x3a, .status=0x69};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01dc, .value=0xec}, {.addr=0x40ff, .value=0xeb}, {.addr=0x4100, .value=0xdc},
    };
    const struct CPU_State final_cpu = {.pc=0x4101, .a=0x7f, .x=0xec, .y=0xec, .sp=0x3a, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01dc, .value=0xec}, {.addr=0x40ff, .value=0xeb}, {.addr=0x4100, .value=0xdc},
    };
    const struct BusEvent events[] = {
        {.addr=0x40ff, .value=0xeb, .type=IO_READ},
        {.addr=0x4100, .value=0xdc, .type=IO_READ},
        {.addr=0x01dc, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0259) {
    const struct CPU_State initial_cpu = {.pc=0xbf95, .a=0xb7, .x=0x4a, .y=0x2c, .sp=0x82, .status=0xf3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018d, .value=0x98}, {.addr=0xbf95, .value=0xeb}, {.addr=0xbf96, .value=0x8d},
    };
    const struct CPU_State final_cpu = {.pc=0xbf97, .a=0xb7, .x=0x4a, .y=0x98, .sp=0x82, .status=0xf1};
    const struct RamEntry final_ram[] = {
        {.addr=0x018d, .value=0x98}, {.addr=0xbf95, .value=0xeb}, {.addr=0xbf96, .value=0x8d},
    };
    const struct BusEvent events[] = {
        {.addr=0xbf95, .value=0xeb, .type=IO_READ},
        {.addr=0xbf96, .value=0x8d, .type=IO_READ},
        {.addr=0x018d, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_025A) {
    const struct CPU_State initial_cpu = {.pc=0x0b00, .a=0xae, .x=0xe5, .y=0x3a, .sp=0xf1, .status=0xfa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c6, .value=0x50}, {.addr=0x0b00, .value=0xeb}, {.addr=0x0b01, .value=0xc6},
    };
    const struct CPU_State final_cpu = {.pc=0x0b02, .a=0xae, .x=0xe5, .y=0x50, .sp=0xf1, .status=0x78};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c6, .value=0x50}, {.addr=0x0b00, .value=0xeb}, {.addr=0x0b01, .value=0xc6},
    };
    const struct BusEvent events[] = {
        {.addr=0x0b00, .value=0xeb, .type=IO_READ},
        {.addr=0x0b01, .value=0xc6, .type=IO_READ},
        {.addr=0x01c6, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_025B) {
    const struct CPU_State initial_cpu = {.pc=0x6857, .a=0x05, .x=0x26, .y=0x97, .sp=0xa8, .status=0x7a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0183, .value=0xb4}, {.addr=0x6857, .value=0xeb}, {.addr=0x6858, .value=0x83},
    };
    const struct CPU_State final_cpu = {.pc=0x6859, .a=0x05, .x=0x26, .y=0xb4, .sp=0xa8, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0183, .value=0xb4}, {.addr=0x6857, .value=0xeb}, {.addr=0x6858, .value=0x83},
    };
    const struct BusEvent events[] = {
        {.addr=0x6857, .value=0xeb, .type=IO_READ},
        {.addr=0x6858, .value=0x83, .type=IO_READ},
        {.addr=0x0183, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_025C) {
    const struct CPU_State initial_cpu = {.pc=0x007f, .a=0x9d, .x=0xd9, .y=0x8a, .sp=0x52, .status=0xf5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007f, .value=0xeb}, {.addr=0x0080, .value=0x26}, {.addr=0x0126, .value=0x99},
    };
    const struct CPU_State final_cpu = {.pc=0x0081, .a=0x9d, .x=0xd9, .y=0x99, .sp=0x52, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x007f, .value=0xeb}, {.addr=0x0080, .value=0x26}, {.addr=0x0126, .value=0x99},
    };
    const struct BusEvent events[] = {
        {.addr=0x007f, .value=0xeb, .type=IO_READ},
        {.addr=0x0080, .value=0x26, .type=IO_READ},
        {.addr=0x0126, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_025E) {
    const struct CPU_State initial_cpu = {.pc=0xd9d8, .a=0x43, .x=0x1c, .y=0xb6, .sp=0x7d, .status=0x72};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014f, .value=0x20}, {.addr=0xd9d8, .value=0xeb}, {.addr=0xd9d9, .value=0x4f},
    };
    const struct CPU_State final_cpu = {.pc=0xd9da, .a=0x43, .x=0x1c, .y=0x20, .sp=0x7d, .status=0x70};
    const struct RamEntry final_ram[] = {
        {.addr=0x014f, .value=0x20}, {.addr=0xd9d8, .value=0xeb}, {.addr=0xd9d9, .value=0x4f},
    };
    const struct BusEvent events[] = {
        {.addr=0xd9d8, .value=0xeb, .type=IO_READ},
        {.addr=0xd9d9, .value=0x4f, .type=IO_READ},
        {.addr=0x014f, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_025F) {
    const struct CPU_State initial_cpu = {.pc=0xc395, .a=0xbd, .x=0xab, .y=0x85, .sp=0xb6, .status=0x49};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007f, .value=0xaa}, {.addr=0xc395, .value=0xeb}, {.addr=0xc396, .value=0x7f},
    };
    const struct CPU_State final_cpu = {.pc=0xc397, .a=0xbd, .x=0xab, .y=0xaa, .sp=0xb6, .status=0xc9};
    const struct RamEntry final_ram[] = {
        {.addr=0x007f, .value=0xaa}, {.addr=0xc395, .value=0xeb}, {.addr=0xc396, .value=0x7f},
    };
    const struct BusEvent events[] = {
        {.addr=0xc395, .value=0xeb, .type=IO_READ},
        {.addr=0xc396, .value=0x7f, .type=IO_READ},
        {.addr=0x007f, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0260) {
    const struct CPU_State initial_cpu = {.pc=0xc384, .a=0xec, .x=0xae, .y=0xda, .sp=0x3d, .status=0xf0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0146, .value=0x39}, {.addr=0xc384, .value=0xeb}, {.addr=0xc385, .value=0x46},
    };
    const struct CPU_State final_cpu = {.pc=0xc386, .a=0xec, .x=0xae, .y=0x39, .sp=0x3d, .status=0x70};
    const struct RamEntry final_ram[] = {
        {.addr=0x0146, .value=0x39}, {.addr=0xc384, .value=0xeb}, {.addr=0xc385, .value=0x46},
    };
    const struct BusEvent events[] = {
        {.addr=0xc384, .value=0xeb, .type=IO_READ},
        {.addr=0xc385, .value=0x46, .type=IO_READ},
        {.addr=0x0146, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0261) {
    const struct CPU_State initial_cpu = {.pc=0x1606, .a=0xf1, .x=0x96, .y=0xad, .sp=0x87, .status=0x99};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0048, .value=0xa4}, {.addr=0x1606, .value=0xeb}, {.addr=0x1607, .value=0x48},
    };
    const struct CPU_State final_cpu = {.pc=0x1608, .a=0xf1, .x=0x96, .y=0xa4, .sp=0x87, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x0048, .value=0xa4}, {.addr=0x1606, .value=0xeb}, {.addr=0x1607, .value=0x48},
    };
    const struct BusEvent events[] = {
        {.addr=0x1606, .value=0xeb, .type=IO_READ},
        {.addr=0x1607, .value=0x48, .type=IO_READ},
        {.addr=0x0048, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0262) {
    const struct CPU_State initial_cpu = {.pc=0x7f08, .a=0xbc, .x=0x76, .y=0x7d, .sp=0x08, .status=0x60};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017d, .value=0x91}, {.addr=0x7f08, .value=0xeb}, {.addr=0x7f09, .value=0x7d},
    };
    const struct CPU_State final_cpu = {.pc=0x7f0a, .a=0xbc, .x=0x76, .y=0x91, .sp=0x08, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x017d, .value=0x91}, {.addr=0x7f08, .value=0xeb}, {.addr=0x7f09, .value=0x7d},
    };
    const struct BusEvent events[] = {
        {.addr=0x7f08, .value=0xeb, .type=IO_READ},
        {.addr=0x7f09, .value=0x7d, .type=IO_READ},
        {.addr=0x017d, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0263) {
    const struct CPU_State initial_cpu = {.pc=0xb075, .a=0x14, .x=0x8c, .y=0xb0, .sp=0xc8, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00aa, .value=0x43}, {.addr=0xb075, .value=0xeb}, {.addr=0xb076, .value=0xaa},
    };
    const struct CPU_State final_cpu = {.pc=0xb077, .a=0x14, .x=0x8c, .y=0x43, .sp=0xc8, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00aa, .value=0x43}, {.addr=0xb075, .value=0xeb}, {.addr=0xb076, .value=0xaa},
    };
    const struct BusEvent events[] = {
        {.addr=0xb075, .value=0xeb, .type=IO_READ},
        {.addr=0xb076, .value=0xaa, .type=IO_READ},
        {.addr=0x00aa, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0264) {
    const struct CPU_State initial_cpu = {.pc=0x0d84, .a=0xd0, .x=0x8e, .y=0x4e, .sp=0x9d, .status=0xf1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012e, .value=0x57}, {.addr=0x0d84, .value=0xeb}, {.addr=0x0d85, .value=0x2e},
    };
    const struct CPU_State final_cpu = {.pc=0x0d86, .a=0xd0, .x=0x8e, .y=0x57, .sp=0x9d, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x012e, .value=0x57}, {.addr=0x0d84, .value=0xeb}, {.addr=0x0d85, .value=0x2e},
    };
    const struct BusEvent events[] = {
        {.addr=0x0d84, .value=0xeb, .type=IO_READ},
        {.addr=0x0d85, .value=0x2e, .type=IO_READ},
        {.addr=0x012e, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0265) {
    const struct CPU_State initial_cpu = {.pc=0x6fdb, .a=0x2a, .x=0x48, .y=0x67, .sp=0x82, .status=0x97};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0019, .value=0x94}, {.addr=0x6fdb, .value=0xeb}, {.addr=0x6fdc, .value=0x19},
    };
    const struct CPU_State final_cpu = {.pc=0x6fdd, .a=0x2a, .x=0x48, .y=0x94, .sp=0x82, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x0019, .value=0x94}, {.addr=0x6fdb, .value=0xeb}, {.addr=0x6fdc, .value=0x19},
    };
    const struct BusEvent events[] = {
        {.addr=0x6fdb, .value=0xeb, .type=IO_READ},
        {.addr=0x6fdc, .value=0x19, .type=IO_READ},
        {.addr=0x0019, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0266) {
    const struct CPU_State initial_cpu = {.pc=0x17af, .a=0x26, .x=0xd3, .y=0xc5, .sp=0x1f, .status=0x92};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0071, .value=0x67}, {.addr=0x17af, .value=0xeb}, {.addr=0x17b0, .value=0x71},
    };
    const struct CPU_State final_cpu = {.pc=0x17b1, .a=0x26, .x=0xd3, .y=0x67, .sp=0x1f, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x0071, .value=0x67}, {.addr=0x17af, .value=0xeb}, {.addr=0x17b0, .value=0x71},
    };
    const struct BusEvent events[] = {
        {.addr=0x17af, .value=0xeb, .type=IO_READ},
        {.addr=0x17b0, .value=0x71, .type=IO_READ},
        {.addr=0x0071, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0267) {
    const struct CPU_State initial_cpu = {.pc=0x1095, .a=0xef, .x=0x74, .y=0x64, .sp=0x42, .status=0x58};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0035, .value=0x65}, {.addr=0x1095, .value=0xeb}, {.addr=0x1096, .value=0x35},
    };
    const struct CPU_State final_cpu = {.pc=0x1097, .a=0xef, .x=0x74, .y=0x65, .sp=0x42, .status=0x58};
    const struct RamEntry final_ram[] = {
        {.addr=0x0035, .value=0x65}, {.addr=0x1095, .value=0xeb}, {.addr=0x1096, .value=0x35},
    };
    const struct BusEvent events[] = {
        {.addr=0x1095, .value=0xeb, .type=IO_READ},
        {.addr=0x1096, .value=0x35, .type=IO_READ},
        {.addr=0x0035, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0268) {
    const struct CPU_State initial_cpu = {.pc=0xff70, .a=0xa5, .x=0x18, .y=0x03, .sp=0xe7, .status=0x8e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0095, .value=0xc8}, {.addr=0xff70, .value=0xeb}, {.addr=0xff71, .value=0x95},
    };
    const struct CPU_State final_cpu = {.pc=0xff72, .a=0xa5, .x=0x18, .y=0xc8, .sp=0xe7, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0095, .value=0xc8}, {.addr=0xff70, .value=0xeb}, {.addr=0xff71, .value=0x95},
    };
    const struct BusEvent events[] = {
        {.addr=0xff70, .value=0xeb, .type=IO_READ},
        {.addr=0xff71, .value=0x95, .type=IO_READ},
        {.addr=0x0095, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0269) {
    const struct CPU_State initial_cpu = {.pc=0x7c14, .a=0x7f, .x=0x40, .y=0x0c, .sp=0xa9, .status=0xb8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01af, .value=0x9c}, {.addr=0x7c14, .value=0xeb}, {.addr=0x7c15, .value=0xaf},
    };
    const struct CPU_State final_cpu = {.pc=0x7c16, .a=0x7f, .x=0x40, .y=0x9c, .sp=0xa9, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01af, .value=0x9c}, {.addr=0x7c14, .value=0xeb}, {.addr=0x7c15, .value=0xaf},
    };
    const struct BusEvent events[] = {
        {.addr=0x7c14, .value=0xeb, .type=IO_READ},
        {.addr=0x7c15, .value=0xaf, .type=IO_READ},
        {.addr=0x01af, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_026A) {
    const struct CPU_State initial_cpu = {.pc=0x9e5f, .a=0x54, .x=0xeb, .y=0x62, .sp=0x92, .status=0xa3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01db, .value=0x99}, {.addr=0x9e5f, .value=0xeb}, {.addr=0x9e60, .value=0xdb},
    };
    const struct CPU_State final_cpu = {.pc=0x9e61, .a=0x54, .x=0xeb, .y=0x99, .sp=0x92, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01db, .value=0x99}, {.addr=0x9e5f, .value=0xeb}, {.addr=0x9e60, .value=0xdb},
    };
    const struct BusEvent events[] = {
        {.addr=0x9e5f, .value=0xeb, .type=IO_READ},
        {.addr=0x9e60, .value=0xdb, .type=IO_READ},
        {.addr=0x01db, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_026B) {
    const struct CPU_State initial_cpu = {.pc=0xd1a1, .a=0xfb, .x=0x3a, .y=0x7c, .sp=0x64, .status=0xa4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ce, .value=0xac}, {.addr=0xd1a1, .value=0xeb}, {.addr=0xd1a2, .value=0xce},
    };
    const struct CPU_State final_cpu = {.pc=0xd1a3, .a=0xfb, .x=0x3a, .y=0xac, .sp=0x64, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ce, .value=0xac}, {.addr=0xd1a1, .value=0xeb}, {.addr=0xd1a2, .value=0xce},
    };
    const struct BusEvent events[] = {
        {.addr=0xd1a1, .value=0xeb, .type=IO_READ},
        {.addr=0xd1a2, .value=0xce, .type=IO_READ},
        {.addr=0x01ce, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_026C) {
    const struct CPU_State initial_cpu = {.pc=0xcfed, .a=0xb2, .x=0x07, .y=0x75, .sp=0x6f, .status=0xef};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0115, .value=0xea}, {.addr=0xcfed, .value=0xeb}, {.addr=0xcfee, .value=0x15},
    };
    const struct CPU_State final_cpu = {.pc=0xcfef, .a=0xb2, .x=0x07, .y=0xea, .sp=0x6f, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x0115, .value=0xea}, {.addr=0xcfed, .value=0xeb}, {.addr=0xcfee, .value=0x15},
    };
    const struct BusEvent events[] = {
        {.addr=0xcfed, .value=0xeb, .type=IO_READ},
        {.addr=0xcfee, .value=0x15, .type=IO_READ},
        {.addr=0x0115, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_026D) {
    const struct CPU_State initial_cpu = {.pc=0xaab2, .a=0xd5, .x=0x1f, .y=0x32, .sp=0x53, .status=0xdf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0088, .value=0x37}, {.addr=0xaab2, .value=0xeb}, {.addr=0xaab3, .value=0x88},
    };
    const struct CPU_State final_cpu = {.pc=0xaab4, .a=0xd5, .x=0x1f, .y=0x37, .sp=0x53, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0088, .value=0x37}, {.addr=0xaab2, .value=0xeb}, {.addr=0xaab3, .value=0x88},
    };
    const struct BusEvent events[] = {
        {.addr=0xaab2, .value=0xeb, .type=IO_READ},
        {.addr=0xaab3, .value=0x88, .type=IO_READ},
        {.addr=0x0088, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_026E) {
    const struct CPU_State initial_cpu = {.pc=0x2e61, .a=0x45, .x=0x3f, .y=0x69, .sp=0xd3, .status=0x88};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0056, .value=0x23}, {.addr=0x2e61, .value=0xeb}, {.addr=0x2e62, .value=0x56},
    };
    const struct CPU_State final_cpu = {.pc=0x2e63, .a=0x45, .x=0x3f, .y=0x23, .sp=0xd3, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x0056, .value=0x23}, {.addr=0x2e61, .value=0xeb}, {.addr=0x2e62, .value=0x56},
    };
    const struct BusEvent events[] = {
        {.addr=0x2e61, .value=0xeb, .type=IO_READ},
        {.addr=0x2e62, .value=0x56, .type=IO_READ},
        {.addr=0x0056, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_026F) {
    const struct CPU_State initial_cpu = {.pc=0x3cc7, .a=0x43, .x=0x1d, .y=0xe6, .sp=0x41, .status=0xd2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b6, .value=0x60}, {.addr=0x3cc7, .value=0xeb}, {.addr=0x3cc8, .value=0xb6},
    };
    const struct CPU_State final_cpu = {.pc=0x3cc9, .a=0x43, .x=0x1d, .y=0x60, .sp=0x41, .status=0x50};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b6, .value=0x60}, {.addr=0x3cc7, .value=0xeb}, {.addr=0x3cc8, .value=0xb6},
    };
    const struct BusEvent events[] = {
        {.addr=0x3cc7, .value=0xeb, .type=IO_READ},
        {.addr=0x3cc8, .value=0xb6, .type=IO_READ},
        {.addr=0x00b6, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0270) {
    const struct CPU_State initial_cpu = {.pc=0x4cfa, .a=0x6a, .x=0xff, .y=0x86, .sp=0x19, .status=0x58};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c3, .value=0xd2}, {.addr=0x4cfa, .value=0xeb}, {.addr=0x4cfb, .value=0xc3},
    };
    const struct CPU_State final_cpu = {.pc=0x4cfc, .a=0x6a, .x=0xff, .y=0xd2, .sp=0x19, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c3, .value=0xd2}, {.addr=0x4cfa, .value=0xeb}, {.addr=0x4cfb, .value=0xc3},
    };
    const struct BusEvent events[] = {
        {.addr=0x4cfa, .value=0xeb, .type=IO_READ},
        {.addr=0x4cfb, .value=0xc3, .type=IO_READ},
        {.addr=0x00c3, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0271) {
    const struct CPU_State initial_cpu = {.pc=0x7c0e, .a=0x05, .x=0xf2, .y=0x6d, .sp=0x03, .status=0x66};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0100, .value=0x65}, {.addr=0x7c0e, .value=0xeb}, {.addr=0x7c0f, .value=0x00},
    };
    const struct CPU_State final_cpu = {.pc=0x7c10, .a=0x05, .x=0xf2, .y=0x65, .sp=0x03, .status=0x64};
    const struct RamEntry final_ram[] = {
        {.addr=0x0100, .value=0x65}, {.addr=0x7c0e, .value=0xeb}, {.addr=0x7c0f, .value=0x00},
    };
    const struct BusEvent events[] = {
        {.addr=0x7c0e, .value=0xeb, .type=IO_READ},
        {.addr=0x7c0f, .value=0x00, .type=IO_READ},
        {.addr=0x0100, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0272) {
    const struct CPU_State initial_cpu = {.pc=0x848f, .a=0xbd, .x=0xb3, .y=0x76, .sp=0x93, .status=0x50};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008f, .value=0x50}, {.addr=0x848f, .value=0xeb}, {.addr=0x8490, .value=0x8f},
    };
    const struct CPU_State final_cpu = {.pc=0x8491, .a=0xbd, .x=0xb3, .y=0x50, .sp=0x93, .status=0x50};
    const struct RamEntry final_ram[] = {
        {.addr=0x008f, .value=0x50}, {.addr=0x848f, .value=0xeb}, {.addr=0x8490, .value=0x8f},
    };
    const struct BusEvent events[] = {
        {.addr=0x848f, .value=0xeb, .type=IO_READ},
        {.addr=0x8490, .value=0x8f, .type=IO_READ},
        {.addr=0x008f, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0273) {
    const struct CPU_State initial_cpu = {.pc=0xc024, .a=0x87, .x=0x41, .y=0x5e, .sp=0x83, .status=0x2a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019a, .value=0x76}, {.addr=0xc024, .value=0xeb}, {.addr=0xc025, .value=0x9a},
    };
    const struct CPU_State final_cpu = {.pc=0xc026, .a=0x87, .x=0x41, .y=0x76, .sp=0x83, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x019a, .value=0x76}, {.addr=0xc024, .value=0xeb}, {.addr=0xc025, .value=0x9a},
    };
    const struct BusEvent events[] = {
        {.addr=0xc024, .value=0xeb, .type=IO_READ},
        {.addr=0xc025, .value=0x9a, .type=IO_READ},
        {.addr=0x019a, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0274) {
    const struct CPU_State initial_cpu = {.pc=0xd7ec, .a=0x31, .x=0xa3, .y=0x04, .sp=0xcb, .status=0x41};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0009, .value=0x96}, {.addr=0xd7ec, .value=0xeb}, {.addr=0xd7ed, .value=0x09},
    };
    const struct CPU_State final_cpu = {.pc=0xd7ee, .a=0x31, .x=0xa3, .y=0x96, .sp=0xcb, .status=0xc1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0009, .value=0x96}, {.addr=0xd7ec, .value=0xeb}, {.addr=0xd7ed, .value=0x09},
    };
    const struct BusEvent events[] = {
        {.addr=0xd7ec, .value=0xeb, .type=IO_READ},
        {.addr=0xd7ed, .value=0x09, .type=IO_READ},
        {.addr=0x0009, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0275) {
    const struct CPU_State initial_cpu = {.pc=0x5f4c, .a=0x59, .x=0x43, .y=0x4f, .sp=0x59, .status=0x07};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ef, .value=0xac}, {.addr=0x5f4c, .value=0xeb}, {.addr=0x5f4d, .value=0xef},
    };
    const struct CPU_State final_cpu = {.pc=0x5f4e, .a=0x59, .x=0x43, .y=0xac, .sp=0x59, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ef, .value=0xac}, {.addr=0x5f4c, .value=0xeb}, {.addr=0x5f4d, .value=0xef},
    };
    const struct BusEvent events[] = {
        {.addr=0x5f4c, .value=0xeb, .type=IO_READ},
        {.addr=0x5f4d, .value=0xef, .type=IO_READ},
        {.addr=0x00ef, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0276) {
    const struct CPU_State initial_cpu = {.pc=0x60b5, .a=0xe2, .x=0x15, .y=0x80, .sp=0x06, .status=0xed};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a5, .value=0x54}, {.addr=0x60b5, .value=0xeb}, {.addr=0x60b6, .value=0xa5},
    };
    const struct CPU_State final_cpu = {.pc=0x60b7, .a=0xe2, .x=0x15, .y=0x54, .sp=0x06, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a5, .value=0x54}, {.addr=0x60b5, .value=0xeb}, {.addr=0x60b6, .value=0xa5},
    };
    const struct BusEvent events[] = {
        {.addr=0x60b5, .value=0xeb, .type=IO_READ},
        {.addr=0x60b6, .value=0xa5, .type=IO_READ},
        {.addr=0x01a5, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0277) {
    const struct CPU_State initial_cpu = {.pc=0x4b7d, .a=0xca, .x=0x71, .y=0x30, .sp=0x65, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003e, .value=0x90}, {.addr=0x4b7d, .value=0xeb}, {.addr=0x4b7e, .value=0x3e},
    };
    const struct CPU_State final_cpu = {.pc=0x4b7f, .a=0xca, .x=0x71, .y=0x90, .sp=0x65, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x003e, .value=0x90}, {.addr=0x4b7d, .value=0xeb}, {.addr=0x4b7e, .value=0x3e},
    };
    const struct BusEvent events[] = {
        {.addr=0x4b7d, .value=0xeb, .type=IO_READ},
        {.addr=0x4b7e, .value=0x3e, .type=IO_READ},
        {.addr=0x003e, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0278) {
    const struct CPU_State initial_cpu = {.pc=0x88b8, .a=0x58, .x=0x81, .y=0x3e, .sp=0x03, .status=0x1c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00dc, .value=0x7b}, {.addr=0x88b8, .value=0xeb}, {.addr=0x88b9, .value=0xdc},
    };
    const struct CPU_State final_cpu = {.pc=0x88ba, .a=0x58, .x=0x81, .y=0x7b, .sp=0x03, .status=0x1c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00dc, .value=0x7b}, {.addr=0x88b8, .value=0xeb}, {.addr=0x88b9, .value=0xdc},
    };
    const struct BusEvent events[] = {
        {.addr=0x88b8, .value=0xeb, .type=IO_READ},
        {.addr=0x88b9, .value=0xdc, .type=IO_READ},
        {.addr=0x00dc, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0279) {
    const struct CPU_State initial_cpu = {.pc=0x0758, .a=0xfb, .x=0x48, .y=0xc5, .sp=0x29, .status=0x11};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006c, .value=0xb2}, {.addr=0x0758, .value=0xeb}, {.addr=0x0759, .value=0x6c},
    };
    const struct CPU_State final_cpu = {.pc=0x075a, .a=0xfb, .x=0x48, .y=0xb2, .sp=0x29, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x006c, .value=0xb2}, {.addr=0x0758, .value=0xeb}, {.addr=0x0759, .value=0x6c},
    };
    const struct BusEvent events[] = {
        {.addr=0x0758, .value=0xeb, .type=IO_READ},
        {.addr=0x0759, .value=0x6c, .type=IO_READ},
        {.addr=0x006c, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_027A) {
    const struct CPU_State initial_cpu = {.pc=0x2c1e, .a=0x18, .x=0xaf, .y=0x41, .sp=0x8c, .status=0x1c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0058, .value=0x35}, {.addr=0x2c1e, .value=0xeb}, {.addr=0x2c1f, .value=0x58},
    };
    const struct CPU_State final_cpu = {.pc=0x2c20, .a=0x18, .x=0xaf, .y=0x35, .sp=0x8c, .status=0x1c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0058, .value=0x35}, {.addr=0x2c1e, .value=0xeb}, {.addr=0x2c1f, .value=0x58},
    };
    const struct BusEvent events[] = {
        {.addr=0x2c1e, .value=0xeb, .type=IO_READ},
        {.addr=0x2c1f, .value=0x58, .type=IO_READ},
        {.addr=0x0058, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_027B) {
    const struct CPU_State initial_cpu = {.pc=0xa13e, .a=0xcf, .x=0x39, .y=0x3e, .sp=0x87, .status=0x49};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009b, .value=0x62}, {.addr=0xa13e, .value=0xeb}, {.addr=0xa13f, .value=0x9b},
    };
    const struct CPU_State final_cpu = {.pc=0xa140, .a=0xcf, .x=0x39, .y=0x62, .sp=0x87, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x009b, .value=0x62}, {.addr=0xa13e, .value=0xeb}, {.addr=0xa13f, .value=0x9b},
    };
    const struct BusEvent events[] = {
        {.addr=0xa13e, .value=0xeb, .type=IO_READ},
        {.addr=0xa13f, .value=0x9b, .type=IO_READ},
        {.addr=0x009b, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_027C) {
    const struct CPU_State initial_cpu = {.pc=0x5ecb, .a=0xc7, .x=0xbc, .y=0x5e, .sp=0x1a, .status=0x65};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0101, .value=0xd9}, {.addr=0x5ecb, .value=0xeb}, {.addr=0x5ecc, .value=0x01},
    };
    const struct CPU_State final_cpu = {.pc=0x5ecd, .a=0xc7, .x=0xbc, .y=0xd9, .sp=0x1a, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0101, .value=0xd9}, {.addr=0x5ecb, .value=0xeb}, {.addr=0x5ecc, .value=0x01},
    };
    const struct BusEvent events[] = {
        {.addr=0x5ecb, .value=0xeb, .type=IO_READ},
        {.addr=0x5ecc, .value=0x01, .type=IO_READ},
        {.addr=0x0101, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_027D) {
    const struct CPU_State initial_cpu = {.pc=0x9b50, .a=0x0c, .x=0x0a, .y=0xde, .sp=0xe7, .status=0xea};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0183, .value=0x22}, {.addr=0x9b50, .value=0xeb}, {.addr=0x9b51, .value=0x83},
    };
    const struct CPU_State final_cpu = {.pc=0x9b52, .a=0x0c, .x=0x0a, .y=0x22, .sp=0xe7, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x0183, .value=0x22}, {.addr=0x9b50, .value=0xeb}, {.addr=0x9b51, .value=0x83},
    };
    const struct BusEvent events[] = {
        {.addr=0x9b50, .value=0xeb, .type=IO_READ},
        {.addr=0x9b51, .value=0x83, .type=IO_READ},
        {.addr=0x0183, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_027E) {
    const struct CPU_State initial_cpu = {.pc=0xd972, .a=0xf7, .x=0x5a, .y=0xb7, .sp=0x78, .status=0x9d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c1, .value=0xe1}, {.addr=0xd972, .value=0xeb}, {.addr=0xd973, .value=0xc1},
    };
    const struct CPU_State final_cpu = {.pc=0xd974, .a=0xf7, .x=0x5a, .y=0xe1, .sp=0x78, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c1, .value=0xe1}, {.addr=0xd972, .value=0xeb}, {.addr=0xd973, .value=0xc1},
    };
    const struct BusEvent events[] = {
        {.addr=0xd972, .value=0xeb, .type=IO_READ},
        {.addr=0xd973, .value=0xc1, .type=IO_READ},
        {.addr=0x00c1, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_027F) {
    const struct CPU_State initial_cpu = {.pc=0x30eb, .a=0xf7, .x=0x06, .y=0x65, .sp=0x10, .status=0xd3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0067, .value=0x33}, {.addr=0x30eb, .value=0xeb}, {.addr=0x30ec, .value=0x67},
    };
    const struct CPU_State final_cpu = {.pc=0x30ed, .a=0xf7, .x=0x06, .y=0x33, .sp=0x10, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x0067, .value=0x33}, {.addr=0x30eb, .value=0xeb}, {.addr=0x30ec, .value=0x67},
    };
    const struct BusEvent events[] = {
        {.addr=0x30eb, .value=0xeb, .type=IO_READ},
        {.addr=0x30ec, .value=0x67, .type=IO_READ},
        {.addr=0x0067, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0280) {
    const struct CPU_State initial_cpu = {.pc=0x0f42, .a=0xd4, .x=0xec, .y=0x7d, .sp=0x29, .status=0x9a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001c, .value=0xa6}, {.addr=0x0f42, .value=0xeb}, {.addr=0x0f43, .value=0x1c},
    };
    const struct CPU_State final_cpu = {.pc=0x0f44, .a=0xd4, .x=0xec, .y=0xa6, .sp=0x29, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x001c, .value=0xa6}, {.addr=0x0f42, .value=0xeb}, {.addr=0x0f43, .value=0x1c},
    };
    const struct BusEvent events[] = {
        {.addr=0x0f42, .value=0xeb, .type=IO_READ},
        {.addr=0x0f43, .value=0x1c, .type=IO_READ},
        {.addr=0x001c, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0281) {
    const struct CPU_State initial_cpu = {.pc=0xdab5, .a=0x78, .x=0x26, .y=0xdf, .sp=0x69, .status=0xbb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0166, .value=0xcf}, {.addr=0xdab5, .value=0xeb}, {.addr=0xdab6, .value=0x66},
    };
    const struct CPU_State final_cpu = {.pc=0xdab7, .a=0x78, .x=0x26, .y=0xcf, .sp=0x69, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0166, .value=0xcf}, {.addr=0xdab5, .value=0xeb}, {.addr=0xdab6, .value=0x66},
    };
    const struct BusEvent events[] = {
        {.addr=0xdab5, .value=0xeb, .type=IO_READ},
        {.addr=0xdab6, .value=0x66, .type=IO_READ},
        {.addr=0x0166, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0282) {
    const struct CPU_State initial_cpu = {.pc=0xac53, .a=0x3f, .x=0x9c, .y=0x60, .sp=0x8c, .status=0x14};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007b, .value=0xe7}, {.addr=0xac53, .value=0xeb}, {.addr=0xac54, .value=0x7b},
    };
    const struct CPU_State final_cpu = {.pc=0xac55, .a=0x3f, .x=0x9c, .y=0xe7, .sp=0x8c, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x007b, .value=0xe7}, {.addr=0xac53, .value=0xeb}, {.addr=0xac54, .value=0x7b},
    };
    const struct BusEvent events[] = {
        {.addr=0xac53, .value=0xeb, .type=IO_READ},
        {.addr=0xac54, .value=0x7b, .type=IO_READ},
        {.addr=0x007b, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0284) {
    const struct CPU_State initial_cpu = {.pc=0x21bf, .a=0xd5, .x=0xa0, .y=0x66, .sp=0xd1, .status=0x98};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0078, .value=0x92}, {.addr=0x21bf, .value=0xeb}, {.addr=0x21c0, .value=0x78},
    };
    const struct CPU_State final_cpu = {.pc=0x21c1, .a=0xd5, .x=0xa0, .y=0x92, .sp=0xd1, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x0078, .value=0x92}, {.addr=0x21bf, .value=0xeb}, {.addr=0x21c0, .value=0x78},
    };
    const struct BusEvent events[] = {
        {.addr=0x21bf, .value=0xeb, .type=IO_READ},
        {.addr=0x21c0, .value=0x78, .type=IO_READ},
        {.addr=0x0078, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0285) {
    const struct CPU_State initial_cpu = {.pc=0x5501, .a=0x1c, .x=0xdc, .y=0xa3, .sp=0x56, .status=0xc6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0076, .value=0x5b}, {.addr=0x5501, .value=0xeb}, {.addr=0x5502, .value=0x76},
    };
    const struct CPU_State final_cpu = {.pc=0x5503, .a=0x1c, .x=0xdc, .y=0x5b, .sp=0x56, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x0076, .value=0x5b}, {.addr=0x5501, .value=0xeb}, {.addr=0x5502, .value=0x76},
    };
    const struct BusEvent events[] = {
        {.addr=0x5501, .value=0xeb, .type=IO_READ},
        {.addr=0x5502, .value=0x76, .type=IO_READ},
        {.addr=0x0076, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0286) {
    const struct CPU_State initial_cpu = {.pc=0xaac1, .a=0x98, .x=0x88, .y=0x23, .sp=0xde, .status=0x0a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0011, .value=0x87}, {.addr=0xaac1, .value=0xeb}, {.addr=0xaac2, .value=0x11},
    };
    const struct CPU_State final_cpu = {.pc=0xaac3, .a=0x98, .x=0x88, .y=0x87, .sp=0xde, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x0011, .value=0x87}, {.addr=0xaac1, .value=0xeb}, {.addr=0xaac2, .value=0x11},
    };
    const struct BusEvent events[] = {
        {.addr=0xaac1, .value=0xeb, .type=IO_READ},
        {.addr=0xaac2, .value=0x11, .type=IO_READ},
        {.addr=0x0011, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0288) {
    const struct CPU_State initial_cpu = {.pc=0x499d, .a=0x1e, .x=0x27, .y=0x9d, .sp=0xd6, .status=0x98};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006c, .value=0x74}, {.addr=0x499d, .value=0xeb}, {.addr=0x499e, .value=0x6c},
    };
    const struct CPU_State final_cpu = {.pc=0x499f, .a=0x1e, .x=0x27, .y=0x74, .sp=0xd6, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x006c, .value=0x74}, {.addr=0x499d, .value=0xeb}, {.addr=0x499e, .value=0x6c},
    };
    const struct BusEvent events[] = {
        {.addr=0x499d, .value=0xeb, .type=IO_READ},
        {.addr=0x499e, .value=0x6c, .type=IO_READ},
        {.addr=0x006c, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0289) {
    const struct CPU_State initial_cpu = {.pc=0x4141, .a=0x0d, .x=0xa6, .y=0x76, .sp=0x23, .status=0x41};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a3, .value=0xe9}, {.addr=0x4141, .value=0xeb}, {.addr=0x4142, .value=0xa3},
    };
    const struct CPU_State final_cpu = {.pc=0x4143, .a=0x0d, .x=0xa6, .y=0xe9, .sp=0x23, .status=0xc1};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a3, .value=0xe9}, {.addr=0x4141, .value=0xeb}, {.addr=0x4142, .value=0xa3},
    };
    const struct BusEvent events[] = {
        {.addr=0x4141, .value=0xeb, .type=IO_READ},
        {.addr=0x4142, .value=0xa3, .type=IO_READ},
        {.addr=0x00a3, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_028A) {
    const struct CPU_State initial_cpu = {.pc=0x7430, .a=0x30, .x=0x72, .y=0x98, .sp=0x0e, .status=0x66};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bd, .value=0x34}, {.addr=0x7430, .value=0xeb}, {.addr=0x7431, .value=0xbd},
    };
    const struct CPU_State final_cpu = {.pc=0x7432, .a=0x30, .x=0x72, .y=0x34, .sp=0x0e, .status=0x64};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bd, .value=0x34}, {.addr=0x7430, .value=0xeb}, {.addr=0x7431, .value=0xbd},
    };
    const struct BusEvent events[] = {
        {.addr=0x7430, .value=0xeb, .type=IO_READ},
        {.addr=0x7431, .value=0xbd, .type=IO_READ},
        {.addr=0x01bd, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_028B) {
    const struct CPU_State initial_cpu = {.pc=0xa55d, .a=0xfe, .x=0xfc, .y=0xa3, .sp=0x6e, .status=0x7b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0141, .value=0xd5}, {.addr=0xa55d, .value=0xeb}, {.addr=0xa55e, .value=0x41},
    };
    const struct CPU_State final_cpu = {.pc=0xa55f, .a=0xfe, .x=0xfc, .y=0xd5, .sp=0x6e, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0141, .value=0xd5}, {.addr=0xa55d, .value=0xeb}, {.addr=0xa55e, .value=0x41},
    };
    const struct BusEvent events[] = {
        {.addr=0xa55d, .value=0xeb, .type=IO_READ},
        {.addr=0xa55e, .value=0x41, .type=IO_READ},
        {.addr=0x0141, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_028C) {
    const struct CPU_State initial_cpu = {.pc=0xad66, .a=0x2c, .x=0x62, .y=0x09, .sp=0x71, .status=0x03};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00dd, .value=0x8a}, {.addr=0xad66, .value=0xeb}, {.addr=0xad67, .value=0xdd},
    };
    const struct CPU_State final_cpu = {.pc=0xad68, .a=0x2c, .x=0x62, .y=0x8a, .sp=0x71, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x00dd, .value=0x8a}, {.addr=0xad66, .value=0xeb}, {.addr=0xad67, .value=0xdd},
    };
    const struct BusEvent events[] = {
        {.addr=0xad66, .value=0xeb, .type=IO_READ},
        {.addr=0xad67, .value=0xdd, .type=IO_READ},
        {.addr=0x00dd, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_028D) {
    const struct CPU_State initial_cpu = {.pc=0xb87c, .a=0x1c, .x=0xc0, .y=0xb3, .sp=0x12, .status=0x75};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c1, .value=0xe0}, {.addr=0xb87c, .value=0xeb}, {.addr=0xb87d, .value=0xc1},
    };
    const struct CPU_State final_cpu = {.pc=0xb87e, .a=0x1c, .x=0xc0, .y=0xe0, .sp=0x12, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c1, .value=0xe0}, {.addr=0xb87c, .value=0xeb}, {.addr=0xb87d, .value=0xc1},
    };
    const struct BusEvent events[] = {
        {.addr=0xb87c, .value=0xeb, .type=IO_READ},
        {.addr=0xb87d, .value=0xc1, .type=IO_READ},
        {.addr=0x01c1, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_028E) {
    const struct CPU_State initial_cpu = {.pc=0xe7a0, .a=0x20, .x=0xb8, .y=0x3a, .sp=0xd2, .status=0xf9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01aa, .value=0xab}, {.addr=0xe7a0, .value=0xeb}, {.addr=0xe7a1, .value=0xaa},
    };
    const struct CPU_State final_cpu = {.pc=0xe7a2, .a=0x20, .x=0xb8, .y=0xab, .sp=0xd2, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01aa, .value=0xab}, {.addr=0xe7a0, .value=0xeb}, {.addr=0xe7a1, .value=0xaa},
    };
    const struct BusEvent events[] = {
        {.addr=0xe7a0, .value=0xeb, .type=IO_READ},
        {.addr=0xe7a1, .value=0xaa, .type=IO_READ},
        {.addr=0x01aa, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_028F) {
    const struct CPU_State initial_cpu = {.pc=0x4d87, .a=0x2c, .x=0xd4, .y=0x3f, .sp=0xec, .status=0x4a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c9, .value=0x65}, {.addr=0x4d87, .value=0xeb}, {.addr=0x4d88, .value=0xc9},
    };
    const struct CPU_State final_cpu = {.pc=0x4d89, .a=0x2c, .x=0xd4, .y=0x65, .sp=0xec, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c9, .value=0x65}, {.addr=0x4d87, .value=0xeb}, {.addr=0x4d88, .value=0xc9},
    };
    const struct BusEvent events[] = {
        {.addr=0x4d87, .value=0xeb, .type=IO_READ},
        {.addr=0x4d88, .value=0xc9, .type=IO_READ},
        {.addr=0x00c9, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0290) {
    const struct CPU_State initial_cpu = {.pc=0x04d2, .a=0x18, .x=0xf0, .y=0x00, .sp=0xca, .status=0x73};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019a, .value=0xb5}, {.addr=0x04d2, .value=0xeb}, {.addr=0x04d3, .value=0x9a},
    };
    const struct CPU_State final_cpu = {.pc=0x04d4, .a=0x18, .x=0xf0, .y=0xb5, .sp=0xca, .status=0xf1};
    const struct RamEntry final_ram[] = {
        {.addr=0x019a, .value=0xb5}, {.addr=0x04d2, .value=0xeb}, {.addr=0x04d3, .value=0x9a},
    };
    const struct BusEvent events[] = {
        {.addr=0x04d2, .value=0xeb, .type=IO_READ},
        {.addr=0x04d3, .value=0x9a, .type=IO_READ},
        {.addr=0x019a, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0291) {
    const struct CPU_State initial_cpu = {.pc=0xf0eb, .a=0x1c, .x=0xa0, .y=0xfa, .sp=0xf2, .status=0x30};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014e, .value=0x19}, {.addr=0xf0eb, .value=0xeb}, {.addr=0xf0ec, .value=0x4e},
    };
    const struct CPU_State final_cpu = {.pc=0xf0ed, .a=0x1c, .x=0xa0, .y=0x19, .sp=0xf2, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x014e, .value=0x19}, {.addr=0xf0eb, .value=0xeb}, {.addr=0xf0ec, .value=0x4e},
    };
    const struct BusEvent events[] = {
        {.addr=0xf0eb, .value=0xeb, .type=IO_READ},
        {.addr=0xf0ec, .value=0x4e, .type=IO_READ},
        {.addr=0x014e, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0292) {
    const struct CPU_State initial_cpu = {.pc=0x4f51, .a=0x8c, .x=0xb5, .y=0x3d, .sp=0x1c, .status=0x33};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017c, .value=0xd9}, {.addr=0x4f51, .value=0xeb}, {.addr=0x4f52, .value=0x7c},
    };
    const struct CPU_State final_cpu = {.pc=0x4f53, .a=0x8c, .x=0xb5, .y=0xd9, .sp=0x1c, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x017c, .value=0xd9}, {.addr=0x4f51, .value=0xeb}, {.addr=0x4f52, .value=0x7c},
    };
    const struct BusEvent events[] = {
        {.addr=0x4f51, .value=0xeb, .type=IO_READ},
        {.addr=0x4f52, .value=0x7c, .type=IO_READ},
        {.addr=0x017c, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0293) {
    const struct CPU_State initial_cpu = {.pc=0xfcac, .a=0x35, .x=0xbd, .y=0x21, .sp=0x89, .status=0x85};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006a, .value=0x50}, {.addr=0xfcac, .value=0xeb}, {.addr=0xfcad, .value=0x6a},
    };
    const struct CPU_State final_cpu = {.pc=0xfcae, .a=0x35, .x=0xbd, .y=0x50, .sp=0x89, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x006a, .value=0x50}, {.addr=0xfcac, .value=0xeb}, {.addr=0xfcad, .value=0x6a},
    };
    const struct BusEvent events[] = {
        {.addr=0xfcac, .value=0xeb, .type=IO_READ},
        {.addr=0xfcad, .value=0x6a, .type=IO_READ},
        {.addr=0x006a, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0294) {
    const struct CPU_State initial_cpu = {.pc=0x5605, .a=0xfe, .x=0xcc, .y=0x70, .sp=0xbc, .status=0x1c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005c, .value=0x31}, {.addr=0x5605, .value=0xeb}, {.addr=0x5606, .value=0x5c},
    };
    const struct CPU_State final_cpu = {.pc=0x5607, .a=0xfe, .x=0xcc, .y=0x31, .sp=0xbc, .status=0x1c};
    const struct RamEntry final_ram[] = {
        {.addr=0x005c, .value=0x31}, {.addr=0x5605, .value=0xeb}, {.addr=0x5606, .value=0x5c},
    };
    const struct BusEvent events[] = {
        {.addr=0x5605, .value=0xeb, .type=IO_READ},
        {.addr=0x5606, .value=0x5c, .type=IO_READ},
        {.addr=0x005c, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0295) {
    const struct CPU_State initial_cpu = {.pc=0xde82, .a=0x0c, .x=0x46, .y=0x29, .sp=0x6a, .status=0x26};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018f, .value=0x0a}, {.addr=0xde82, .value=0xeb}, {.addr=0xde83, .value=0x8f},
    };
    const struct CPU_State final_cpu = {.pc=0xde84, .a=0x0c, .x=0x46, .y=0x0a, .sp=0x6a, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x018f, .value=0x0a}, {.addr=0xde82, .value=0xeb}, {.addr=0xde83, .value=0x8f},
    };
    const struct BusEvent events[] = {
        {.addr=0xde82, .value=0xeb, .type=IO_READ},
        {.addr=0xde83, .value=0x8f, .type=IO_READ},
        {.addr=0x018f, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0296) {
    const struct CPU_State initial_cpu = {.pc=0x6101, .a=0x1b, .x=0x85, .y=0x08, .sp=0x48, .status=0xbf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010e, .value=0x21}, {.addr=0x6101, .value=0xeb}, {.addr=0x6102, .value=0x0e},
    };
    const struct CPU_State final_cpu = {.pc=0x6103, .a=0x1b, .x=0x85, .y=0x21, .sp=0x48, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x010e, .value=0x21}, {.addr=0x6101, .value=0xeb}, {.addr=0x6102, .value=0x0e},
    };
    const struct BusEvent events[] = {
        {.addr=0x6101, .value=0xeb, .type=IO_READ},
        {.addr=0x6102, .value=0x0e, .type=IO_READ},
        {.addr=0x010e, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0297) {
    const struct CPU_State initial_cpu = {.pc=0xe3d2, .a=0xb5, .x=0xbf, .y=0xfc, .sp=0x02, .status=0x61};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ff, .value=0x61}, {.addr=0xe3d2, .value=0xeb}, {.addr=0xe3d3, .value=0xff},
    };
    const struct CPU_State final_cpu = {.pc=0xe3d4, .a=0xb5, .x=0xbf, .y=0x61, .sp=0x02, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ff, .value=0x61}, {.addr=0xe3d2, .value=0xeb}, {.addr=0xe3d3, .value=0xff},
    };
    const struct BusEvent events[] = {
        {.addr=0xe3d2, .value=0xeb, .type=IO_READ},
        {.addr=0xe3d3, .value=0xff, .type=IO_READ},
        {.addr=0x01ff, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0298) {
    const struct CPU_State initial_cpu = {.pc=0x1fd3, .a=0x6f, .x=0xed, .y=0xbc, .sp=0x0f, .status=0x05};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0014, .value=0xe6}, {.addr=0x1fd3, .value=0xeb}, {.addr=0x1fd4, .value=0x14},
    };
    const struct CPU_State final_cpu = {.pc=0x1fd5, .a=0x6f, .x=0xed, .y=0xe6, .sp=0x0f, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x0014, .value=0xe6}, {.addr=0x1fd3, .value=0xeb}, {.addr=0x1fd4, .value=0x14},
    };
    const struct BusEvent events[] = {
        {.addr=0x1fd3, .value=0xeb, .type=IO_READ},
        {.addr=0x1fd4, .value=0x14, .type=IO_READ},
        {.addr=0x0014, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0299) {
    const struct CPU_State initial_cpu = {.pc=0xb03e, .a=0xd9, .x=0x6c, .y=0x75, .sp=0xea, .status=0xfa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0133, .value=0xc6}, {.addr=0xb03e, .value=0xeb}, {.addr=0xb03f, .value=0x33},
    };
    const struct CPU_State final_cpu = {.pc=0xb040, .a=0xd9, .x=0x6c, .y=0xc6, .sp=0xea, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0133, .value=0xc6}, {.addr=0xb03e, .value=0xeb}, {.addr=0xb03f, .value=0x33},
    };
    const struct BusEvent events[] = {
        {.addr=0xb03e, .value=0xeb, .type=IO_READ},
        {.addr=0xb03f, .value=0x33, .type=IO_READ},
        {.addr=0x0133, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_029A) {
    const struct CPU_State initial_cpu = {.pc=0xb593, .a=0x48, .x=0xcd, .y=0x2c, .sp=0x96, .status=0x15};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bd, .value=0x92}, {.addr=0xb593, .value=0xeb}, {.addr=0xb594, .value=0xbd},
    };
    const struct CPU_State final_cpu = {.pc=0xb595, .a=0x48, .x=0xcd, .y=0x92, .sp=0x96, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bd, .value=0x92}, {.addr=0xb593, .value=0xeb}, {.addr=0xb594, .value=0xbd},
    };
    const struct BusEvent events[] = {
        {.addr=0xb593, .value=0xeb, .type=IO_READ},
        {.addr=0xb594, .value=0xbd, .type=IO_READ},
        {.addr=0x00bd, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_029B) {
    const struct CPU_State initial_cpu = {.pc=0x8fe0, .a=0x3f, .x=0x98, .y=0x50, .sp=0x91, .status=0x47};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0098, .value=0x35}, {.addr=0x8fe0, .value=0xeb}, {.addr=0x8fe1, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0x8fe2, .a=0x3f, .x=0x98, .y=0x35, .sp=0x91, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x0098, .value=0x35}, {.addr=0x8fe0, .value=0xeb}, {.addr=0x8fe1, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0x8fe0, .value=0xeb, .type=IO_READ},
        {.addr=0x8fe1, .value=0x98, .type=IO_READ},
        {.addr=0x0098, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_029D) {
    const struct CPU_State initial_cpu = {.pc=0x48a3, .a=0x38, .x=0x8f, .y=0x0f, .sp=0xa2, .status=0x90};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002c, .value=0x45}, {.addr=0x48a3, .value=0xeb}, {.addr=0x48a4, .value=0x2c},
    };
    const struct CPU_State final_cpu = {.pc=0x48a5, .a=0x38, .x=0x8f, .y=0x45, .sp=0xa2, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x002c, .value=0x45}, {.addr=0x48a3, .value=0xeb}, {.addr=0x48a4, .value=0x2c},
    };
    const struct BusEvent events[] = {
        {.addr=0x48a3, .value=0xeb, .type=IO_READ},
        {.addr=0x48a4, .value=0x2c, .type=IO_READ},
        {.addr=0x002c, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_029E) {
    const struct CPU_State initial_cpu = {.pc=0xc252, .a=0x7c, .x=0xee, .y=0xd2, .sp=0xa6, .status=0xdd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0036, .value=0x7a}, {.addr=0xc252, .value=0xeb}, {.addr=0xc253, .value=0x36},
    };
    const struct CPU_State final_cpu = {.pc=0xc254, .a=0x7c, .x=0xee, .y=0x7a, .sp=0xa6, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0036, .value=0x7a}, {.addr=0xc252, .value=0xeb}, {.addr=0xc253, .value=0x36},
    };
    const struct BusEvent events[] = {
        {.addr=0xc252, .value=0xeb, .type=IO_READ},
        {.addr=0xc253, .value=0x36, .type=IO_READ},
        {.addr=0x0036, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_029F) {
    const struct CPU_State initial_cpu = {.pc=0x7957, .a=0x90, .x=0xf1, .y=0xe8, .sp=0x26, .status=0x1f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bb, .value=0x72}, {.addr=0x7957, .value=0xeb}, {.addr=0x7958, .value=0xbb},
    };
    const struct CPU_State final_cpu = {.pc=0x7959, .a=0x90, .x=0xf1, .y=0x72, .sp=0x26, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bb, .value=0x72}, {.addr=0x7957, .value=0xeb}, {.addr=0x7958, .value=0xbb},
    };
    const struct BusEvent events[] = {
        {.addr=0x7957, .value=0xeb, .type=IO_READ},
        {.addr=0x7958, .value=0xbb, .type=IO_READ},
        {.addr=0x00bb, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02A0) {
    const struct CPU_State initial_cpu = {.pc=0x6acf, .a=0x9e, .x=0x48, .y=0x9a, .sp=0xc7, .status=0x79};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a4, .value=0x57}, {.addr=0x6acf, .value=0xeb}, {.addr=0x6ad0, .value=0xa4},
    };
    const struct CPU_State final_cpu = {.pc=0x6ad1, .a=0x9e, .x=0x48, .y=0x57, .sp=0xc7, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a4, .value=0x57}, {.addr=0x6acf, .value=0xeb}, {.addr=0x6ad0, .value=0xa4},
    };
    const struct BusEvent events[] = {
        {.addr=0x6acf, .value=0xeb, .type=IO_READ},
        {.addr=0x6ad0, .value=0xa4, .type=IO_READ},
        {.addr=0x01a4, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02A1) {
    const struct CPU_State initial_cpu = {.pc=0x2fe4, .a=0xa2, .x=0xf7, .y=0x53, .sp=0x6e, .status=0x28};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0130, .value=0x70}, {.addr=0x2fe4, .value=0xeb}, {.addr=0x2fe5, .value=0x30},
    };
    const struct CPU_State final_cpu = {.pc=0x2fe6, .a=0xa2, .x=0xf7, .y=0x70, .sp=0x6e, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x0130, .value=0x70}, {.addr=0x2fe4, .value=0xeb}, {.addr=0x2fe5, .value=0x30},
    };
    const struct BusEvent events[] = {
        {.addr=0x2fe4, .value=0xeb, .type=IO_READ},
        {.addr=0x2fe5, .value=0x30, .type=IO_READ},
        {.addr=0x0130, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02A2) {
    const struct CPU_State initial_cpu = {.pc=0xea39, .a=0xb5, .x=0x5f, .y=0x74, .sp=0x5b, .status=0xa6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015c, .value=0xdd}, {.addr=0xea39, .value=0xeb}, {.addr=0xea3a, .value=0x5c},
    };
    const struct CPU_State final_cpu = {.pc=0xea3b, .a=0xb5, .x=0x5f, .y=0xdd, .sp=0x5b, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x015c, .value=0xdd}, {.addr=0xea39, .value=0xeb}, {.addr=0xea3a, .value=0x5c},
    };
    const struct BusEvent events[] = {
        {.addr=0xea39, .value=0xeb, .type=IO_READ},
        {.addr=0xea3a, .value=0x5c, .type=IO_READ},
        {.addr=0x015c, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02A3) {
    const struct CPU_State initial_cpu = {.pc=0x85cc, .a=0xf2, .x=0xd2, .y=0x65, .sp=0x58, .status=0xe0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01af, .value=0xce}, {.addr=0x85cc, .value=0xeb}, {.addr=0x85cd, .value=0xaf},
    };
    const struct CPU_State final_cpu = {.pc=0x85ce, .a=0xf2, .x=0xd2, .y=0xce, .sp=0x58, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01af, .value=0xce}, {.addr=0x85cc, .value=0xeb}, {.addr=0x85cd, .value=0xaf},
    };
    const struct BusEvent events[] = {
        {.addr=0x85cc, .value=0xeb, .type=IO_READ},
        {.addr=0x85cd, .value=0xaf, .type=IO_READ},
        {.addr=0x01af, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02A4) {
    const struct CPU_State initial_cpu = {.pc=0xc558, .a=0x10, .x=0xc9, .y=0x9c, .sp=0x31, .status=0x61};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0123, .value=0x1a}, {.addr=0xc558, .value=0xeb}, {.addr=0xc559, .value=0x23},
    };
    const struct CPU_State final_cpu = {.pc=0xc55a, .a=0x10, .x=0xc9, .y=0x1a, .sp=0x31, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x0123, .value=0x1a}, {.addr=0xc558, .value=0xeb}, {.addr=0xc559, .value=0x23},
    };
    const struct BusEvent events[] = {
        {.addr=0xc558, .value=0xeb, .type=IO_READ},
        {.addr=0xc559, .value=0x23, .type=IO_READ},
        {.addr=0x0123, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x1d74, .a=0xb9, .x=0xee, .y=0x3e, .sp=0xc4, .status=0xa7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010a, .value=0xe9}, {.addr=0x1d74, .value=0xeb}, {.addr=0x1d75, .value=0x0a},
    };
    const struct CPU_State final_cpu = {.pc=0x1d76, .a=0xb9, .x=0xee, .y=0xe9, .sp=0xc4, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x010a, .value=0xe9}, {.addr=0x1d74, .value=0xeb}, {.addr=0x1d75, .value=0x0a},
    };
    const struct BusEvent events[] = {
        {.addr=0x1d74, .value=0xeb, .type=IO_READ},
        {.addr=0x1d75, .value=0x0a, .type=IO_READ},
        {.addr=0x010a, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02A6) {
    const struct CPU_State initial_cpu = {.pc=0xfb62, .a=0x00, .x=0x6e, .y=0xd8, .sp=0x75, .status=0xe8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01eb, .value=0xa6}, {.addr=0xfb62, .value=0xeb}, {.addr=0xfb63, .value=0xeb},
    };
    const struct CPU_State final_cpu = {.pc=0xfb64, .a=0x00, .x=0x6e, .y=0xa6, .sp=0x75, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01eb, .value=0xa6}, {.addr=0xfb62, .value=0xeb}, {.addr=0xfb63, .value=0xeb},
    };
    const struct BusEvent events[] = {
        {.addr=0xfb62, .value=0xeb, .type=IO_READ},
        {.addr=0xfb63, .value=0xeb, .type=IO_READ},
        {.addr=0x01eb, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02A7) {
    const struct CPU_State initial_cpu = {.pc=0xf995, .a=0xf3, .x=0xbf, .y=0x11, .sp=0x86, .status=0x71};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0121, .value=0xf3}, {.addr=0xf995, .value=0xeb}, {.addr=0xf996, .value=0x21},
    };
    const struct CPU_State final_cpu = {.pc=0xf997, .a=0xf3, .x=0xbf, .y=0xf3, .sp=0x86, .status=0xf1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0121, .value=0xf3}, {.addr=0xf995, .value=0xeb}, {.addr=0xf996, .value=0x21},
    };
    const struct BusEvent events[] = {
        {.addr=0xf995, .value=0xeb, .type=IO_READ},
        {.addr=0xf996, .value=0x21, .type=IO_READ},
        {.addr=0x0121, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02A8) {
    const struct CPU_State initial_cpu = {.pc=0x2f1e, .a=0x05, .x=0xa5, .y=0x7b, .sp=0x82, .status=0xee};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cc, .value=0x30}, {.addr=0x2f1e, .value=0xeb}, {.addr=0x2f1f, .value=0xcc},
    };
    const struct CPU_State final_cpu = {.pc=0x2f20, .a=0x05, .x=0xa5, .y=0x30, .sp=0x82, .status=0x6c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cc, .value=0x30}, {.addr=0x2f1e, .value=0xeb}, {.addr=0x2f1f, .value=0xcc},
    };
    const struct BusEvent events[] = {
        {.addr=0x2f1e, .value=0xeb, .type=IO_READ},
        {.addr=0x2f1f, .value=0xcc, .type=IO_READ},
        {.addr=0x01cc, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02A9) {
    const struct CPU_State initial_cpu = {.pc=0xf2ef, .a=0x72, .x=0xd4, .y=0x9f, .sp=0xb0, .status=0x19};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0056, .value=0xc7}, {.addr=0xf2ef, .value=0xeb}, {.addr=0xf2f0, .value=0x56},
    };
    const struct CPU_State final_cpu = {.pc=0xf2f1, .a=0x72, .x=0xd4, .y=0xc7, .sp=0xb0, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x0056, .value=0xc7}, {.addr=0xf2ef, .value=0xeb}, {.addr=0xf2f0, .value=0x56},
    };
    const struct BusEvent events[] = {
        {.addr=0xf2ef, .value=0xeb, .type=IO_READ},
        {.addr=0xf2f0, .value=0x56, .type=IO_READ},
        {.addr=0x0056, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02AA) {
    const struct CPU_State initial_cpu = {.pc=0xe3f4, .a=0x94, .x=0xcd, .y=0xeb, .sp=0xe5, .status=0x3e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0197, .value=0x28}, {.addr=0xe3f4, .value=0xeb}, {.addr=0xe3f5, .value=0x97},
    };
    const struct CPU_State final_cpu = {.pc=0xe3f6, .a=0x94, .x=0xcd, .y=0x28, .sp=0xe5, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0197, .value=0x28}, {.addr=0xe3f4, .value=0xeb}, {.addr=0xe3f5, .value=0x97},
    };
    const struct BusEvent events[] = {
        {.addr=0xe3f4, .value=0xeb, .type=IO_READ},
        {.addr=0xe3f5, .value=0x97, .type=IO_READ},
        {.addr=0x0197, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02AB) {
    const struct CPU_State initial_cpu = {.pc=0xc5c3, .a=0xcb, .x=0x8f, .y=0xc0, .sp=0x9a, .status=0xbf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0169, .value=0x9e}, {.addr=0xc5c3, .value=0xeb}, {.addr=0xc5c4, .value=0x69},
    };
    const struct CPU_State final_cpu = {.pc=0xc5c5, .a=0xcb, .x=0x8f, .y=0x9e, .sp=0x9a, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0169, .value=0x9e}, {.addr=0xc5c3, .value=0xeb}, {.addr=0xc5c4, .value=0x69},
    };
    const struct BusEvent events[] = {
        {.addr=0xc5c3, .value=0xeb, .type=IO_READ},
        {.addr=0xc5c4, .value=0x69, .type=IO_READ},
        {.addr=0x0169, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02AC) {
    const struct CPU_State initial_cpu = {.pc=0x4690, .a=0x6e, .x=0x6d, .y=0x1c, .sp=0x78, .status=0x36};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c7, .value=0x8f}, {.addr=0x4690, .value=0xeb}, {.addr=0x4691, .value=0xc7},
    };
    const struct CPU_State final_cpu = {.pc=0x4692, .a=0x6e, .x=0x6d, .y=0x8f, .sp=0x78, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c7, .value=0x8f}, {.addr=0x4690, .value=0xeb}, {.addr=0x4691, .value=0xc7},
    };
    const struct BusEvent events[] = {
        {.addr=0x4690, .value=0xeb, .type=IO_READ},
        {.addr=0x4691, .value=0xc7, .type=IO_READ},
        {.addr=0x01c7, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02AD) {
    const struct CPU_State initial_cpu = {.pc=0xd077, .a=0xbc, .x=0xd8, .y=0x2f, .sp=0x23, .status=0xc1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a5, .value=0x9a}, {.addr=0xd077, .value=0xeb}, {.addr=0xd078, .value=0xa5},
    };
    const struct CPU_State final_cpu = {.pc=0xd079, .a=0xbc, .x=0xd8, .y=0x9a, .sp=0x23, .status=0xc1};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a5, .value=0x9a}, {.addr=0xd077, .value=0xeb}, {.addr=0xd078, .value=0xa5},
    };
    const struct BusEvent events[] = {
        {.addr=0xd077, .value=0xeb, .type=IO_READ},
        {.addr=0xd078, .value=0xa5, .type=IO_READ},
        {.addr=0x00a5, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02AE) {
    const struct CPU_State initial_cpu = {.pc=0x108a, .a=0xc4, .x=0x5e, .y=0x6e, .sp=0x33, .status=0x8b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0005, .value=0x55}, {.addr=0x108a, .value=0xeb}, {.addr=0x108b, .value=0x05},
    };
    const struct CPU_State final_cpu = {.pc=0x108c, .a=0xc4, .x=0x5e, .y=0x55, .sp=0x33, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x0005, .value=0x55}, {.addr=0x108a, .value=0xeb}, {.addr=0x108b, .value=0x05},
    };
    const struct BusEvent events[] = {
        {.addr=0x108a, .value=0xeb, .type=IO_READ},
        {.addr=0x108b, .value=0x05, .type=IO_READ},
        {.addr=0x0005, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02AF) {
    const struct CPU_State initial_cpu = {.pc=0xdbf4, .a=0x01, .x=0x9e, .y=0xfe, .sp=0x41, .status=0xbd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b5, .value=0x3c}, {.addr=0xdbf4, .value=0xeb}, {.addr=0xdbf5, .value=0xb5},
    };
    const struct CPU_State final_cpu = {.pc=0xdbf6, .a=0x01, .x=0x9e, .y=0x3c, .sp=0x41, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b5, .value=0x3c}, {.addr=0xdbf4, .value=0xeb}, {.addr=0xdbf5, .value=0xb5},
    };
    const struct BusEvent events[] = {
        {.addr=0xdbf4, .value=0xeb, .type=IO_READ},
        {.addr=0xdbf5, .value=0xb5, .type=IO_READ},
        {.addr=0x01b5, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02B0) {
    const struct CPU_State initial_cpu = {.pc=0xad4d, .a=0x83, .x=0xbd, .y=0x3e, .sp=0x34, .status=0xc4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ef, .value=0xb2}, {.addr=0xad4d, .value=0xeb}, {.addr=0xad4e, .value=0xef},
    };
    const struct CPU_State final_cpu = {.pc=0xad4f, .a=0x83, .x=0xbd, .y=0xb2, .sp=0x34, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ef, .value=0xb2}, {.addr=0xad4d, .value=0xeb}, {.addr=0xad4e, .value=0xef},
    };
    const struct BusEvent events[] = {
        {.addr=0xad4d, .value=0xeb, .type=IO_READ},
        {.addr=0xad4e, .value=0xef, .type=IO_READ},
        {.addr=0x00ef, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02B1) {
    const struct CPU_State initial_cpu = {.pc=0x7c43, .a=0x39, .x=0xa9, .y=0xf8, .sp=0x76, .status=0xf7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0138, .value=0xad}, {.addr=0x7c43, .value=0xeb}, {.addr=0x7c44, .value=0x38},
    };
    const struct CPU_State final_cpu = {.pc=0x7c45, .a=0x39, .x=0xa9, .y=0xad, .sp=0x76, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0138, .value=0xad}, {.addr=0x7c43, .value=0xeb}, {.addr=0x7c44, .value=0x38},
    };
    const struct BusEvent events[] = {
        {.addr=0x7c43, .value=0xeb, .type=IO_READ},
        {.addr=0x7c44, .value=0x38, .type=IO_READ},
        {.addr=0x0138, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02B3) {
    const struct CPU_State initial_cpu = {.pc=0x1214, .a=0xde, .x=0x2b, .y=0x73, .sp=0x2e, .status=0xc0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001f, .value=0x8c}, {.addr=0x1214, .value=0xeb}, {.addr=0x1215, .value=0x1f},
    };
    const struct CPU_State final_cpu = {.pc=0x1216, .a=0xde, .x=0x2b, .y=0x8c, .sp=0x2e, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x001f, .value=0x8c}, {.addr=0x1214, .value=0xeb}, {.addr=0x1215, .value=0x1f},
    };
    const struct BusEvent events[] = {
        {.addr=0x1214, .value=0xeb, .type=IO_READ},
        {.addr=0x1215, .value=0x1f, .type=IO_READ},
        {.addr=0x001f, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02B4) {
    const struct CPU_State initial_cpu = {.pc=0x2362, .a=0x80, .x=0x4c, .y=0xaa, .sp=0xc3, .status=0xd2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009c, .value=0x1b}, {.addr=0x2362, .value=0xeb}, {.addr=0x2363, .value=0x9c},
    };
    const struct CPU_State final_cpu = {.pc=0x2364, .a=0x80, .x=0x4c, .y=0x1b, .sp=0xc3, .status=0x50};
    const struct RamEntry final_ram[] = {
        {.addr=0x009c, .value=0x1b}, {.addr=0x2362, .value=0xeb}, {.addr=0x2363, .value=0x9c},
    };
    const struct BusEvent events[] = {
        {.addr=0x2362, .value=0xeb, .type=IO_READ},
        {.addr=0x2363, .value=0x9c, .type=IO_READ},
        {.addr=0x009c, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02B5) {
    const struct CPU_State initial_cpu = {.pc=0x5f22, .a=0x3e, .x=0xda, .y=0xf3, .sp=0x83, .status=0x66};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ad, .value=0x98}, {.addr=0x5f22, .value=0xeb}, {.addr=0x5f23, .value=0xad},
    };
    const struct CPU_State final_cpu = {.pc=0x5f24, .a=0x3e, .x=0xda, .y=0x98, .sp=0x83, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ad, .value=0x98}, {.addr=0x5f22, .value=0xeb}, {.addr=0x5f23, .value=0xad},
    };
    const struct BusEvent events[] = {
        {.addr=0x5f22, .value=0xeb, .type=IO_READ},
        {.addr=0x5f23, .value=0xad, .type=IO_READ},
        {.addr=0x01ad, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02B6) {
    const struct CPU_State initial_cpu = {.pc=0x77a4, .a=0x3c, .x=0xec, .y=0x35, .sp=0x5c, .status=0xc3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008d, .value=0x7d}, {.addr=0x77a4, .value=0xeb}, {.addr=0x77a5, .value=0x8d},
    };
    const struct CPU_State final_cpu = {.pc=0x77a6, .a=0x3c, .x=0xec, .y=0x7d, .sp=0x5c, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x008d, .value=0x7d}, {.addr=0x77a4, .value=0xeb}, {.addr=0x77a5, .value=0x8d},
    };
    const struct BusEvent events[] = {
        {.addr=0x77a4, .value=0xeb, .type=IO_READ},
        {.addr=0x77a5, .value=0x8d, .type=IO_READ},
        {.addr=0x008d, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02B7) {
    const struct CPU_State initial_cpu = {.pc=0xc0a9, .a=0x29, .x=0x2c, .y=0x02, .sp=0xff, .status=0xc7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0005, .value=0xf9}, {.addr=0xc0a9, .value=0xeb}, {.addr=0xc0aa, .value=0x05},
    };
    const struct CPU_State final_cpu = {.pc=0xc0ab, .a=0x29, .x=0x2c, .y=0xf9, .sp=0xff, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0005, .value=0xf9}, {.addr=0xc0a9, .value=0xeb}, {.addr=0xc0aa, .value=0x05},
    };
    const struct BusEvent events[] = {
        {.addr=0xc0a9, .value=0xeb, .type=IO_READ},
        {.addr=0xc0aa, .value=0x05, .type=IO_READ},
        {.addr=0x0005, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02B8) {
    const struct CPU_State initial_cpu = {.pc=0x3497, .a=0x25, .x=0xaf, .y=0x06, .sp=0xb5, .status=0x90};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006a, .value=0x62}, {.addr=0x3497, .value=0xeb}, {.addr=0x3498, .value=0x6a},
    };
    const struct CPU_State final_cpu = {.pc=0x3499, .a=0x25, .x=0xaf, .y=0x62, .sp=0xb5, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x006a, .value=0x62}, {.addr=0x3497, .value=0xeb}, {.addr=0x3498, .value=0x6a},
    };
    const struct BusEvent events[] = {
        {.addr=0x3497, .value=0xeb, .type=IO_READ},
        {.addr=0x3498, .value=0x6a, .type=IO_READ},
        {.addr=0x006a, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02B9) {
    const struct CPU_State initial_cpu = {.pc=0x1e88, .a=0xa7, .x=0x89, .y=0x28, .sp=0x42, .status=0x77};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ab, .value=0xa7}, {.addr=0x1e88, .value=0xeb}, {.addr=0x1e89, .value=0xab},
    };
    const struct CPU_State final_cpu = {.pc=0x1e8a, .a=0xa7, .x=0x89, .y=0xa7, .sp=0x42, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ab, .value=0xa7}, {.addr=0x1e88, .value=0xeb}, {.addr=0x1e89, .value=0xab},
    };
    const struct BusEvent events[] = {
        {.addr=0x1e88, .value=0xeb, .type=IO_READ},
        {.addr=0x1e89, .value=0xab, .type=IO_READ},
        {.addr=0x01ab, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02BA) {
    const struct CPU_State initial_cpu = {.pc=0x42ce, .a=0x76, .x=0xda, .y=0xdf, .sp=0xbd, .status=0x38};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0151, .value=0x18}, {.addr=0x42ce, .value=0xeb}, {.addr=0x42cf, .value=0x51},
    };
    const struct CPU_State final_cpu = {.pc=0x42d0, .a=0x76, .x=0xda, .y=0x18, .sp=0xbd, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x0151, .value=0x18}, {.addr=0x42ce, .value=0xeb}, {.addr=0x42cf, .value=0x51},
    };
    const struct BusEvent events[] = {
        {.addr=0x42ce, .value=0xeb, .type=IO_READ},
        {.addr=0x42cf, .value=0x51, .type=IO_READ},
        {.addr=0x0151, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02BB) {
    const struct CPU_State initial_cpu = {.pc=0x0c2a, .a=0xf3, .x=0x2c, .y=0x0c, .sp=0xe7, .status=0x81};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0046, .value=0x62}, {.addr=0x0c2a, .value=0xeb}, {.addr=0x0c2b, .value=0x46},
    };
    const struct CPU_State final_cpu = {.pc=0x0c2c, .a=0xf3, .x=0x2c, .y=0x62, .sp=0xe7, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x0046, .value=0x62}, {.addr=0x0c2a, .value=0xeb}, {.addr=0x0c2b, .value=0x46},
    };
    const struct BusEvent events[] = {
        {.addr=0x0c2a, .value=0xeb, .type=IO_READ},
        {.addr=0x0c2b, .value=0x46, .type=IO_READ},
        {.addr=0x0046, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02BC) {
    const struct CPU_State initial_cpu = {.pc=0xcbd1, .a=0xfc, .x=0x60, .y=0xa3, .sp=0x81, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0060, .value=0xe5}, {.addr=0xcbd1, .value=0xeb}, {.addr=0xcbd2, .value=0x60},
    };
    const struct CPU_State final_cpu = {.pc=0xcbd3, .a=0xfc, .x=0x60, .y=0xe5, .sp=0x81, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0060, .value=0xe5}, {.addr=0xcbd1, .value=0xeb}, {.addr=0xcbd2, .value=0x60},
    };
    const struct BusEvent events[] = {
        {.addr=0xcbd1, .value=0xeb, .type=IO_READ},
        {.addr=0xcbd2, .value=0x60, .type=IO_READ},
        {.addr=0x0060, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02BD) {
    const struct CPU_State initial_cpu = {.pc=0x00e5, .a=0x48, .x=0xc7, .y=0xb6, .sp=0x9b, .status=0x03};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a6, .value=0x00}, {.addr=0x00e5, .value=0xeb}, {.addr=0x00e6, .value=0xa6},
    };
    const struct CPU_State final_cpu = {.pc=0x00e7, .a=0x48, .x=0xc7, .y=0x00, .sp=0x9b, .status=0x03};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a6, .value=0x00}, {.addr=0x00e5, .value=0xeb}, {.addr=0x00e6, .value=0xa6},
    };
    const struct BusEvent events[] = {
        {.addr=0x00e5, .value=0xeb, .type=IO_READ},
        {.addr=0x00e6, .value=0xa6, .type=IO_READ},
        {.addr=0x00a6, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02BE) {
    const struct CPU_State initial_cpu = {.pc=0xee03, .a=0xce, .x=0x38, .y=0xce, .sp=0xf9, .status=0x14};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0096, .value=0x88}, {.addr=0xee03, .value=0xeb}, {.addr=0xee04, .value=0x96},
    };
    const struct CPU_State final_cpu = {.pc=0xee05, .a=0xce, .x=0x38, .y=0x88, .sp=0xf9, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x0096, .value=0x88}, {.addr=0xee03, .value=0xeb}, {.addr=0xee04, .value=0x96},
    };
    const struct BusEvent events[] = {
        {.addr=0xee03, .value=0xeb, .type=IO_READ},
        {.addr=0xee04, .value=0x96, .type=IO_READ},
        {.addr=0x0096, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02BF) {
    const struct CPU_State initial_cpu = {.pc=0x56b4, .a=0x04, .x=0xd9, .y=0x30, .sp=0xc8, .status=0x39};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d6, .value=0xc6}, {.addr=0x56b4, .value=0xeb}, {.addr=0x56b5, .value=0xd6},
    };
    const struct CPU_State final_cpu = {.pc=0x56b6, .a=0x04, .x=0xd9, .y=0xc6, .sp=0xc8, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d6, .value=0xc6}, {.addr=0x56b4, .value=0xeb}, {.addr=0x56b5, .value=0xd6},
    };
    const struct BusEvent events[] = {
        {.addr=0x56b4, .value=0xeb, .type=IO_READ},
        {.addr=0x56b5, .value=0xd6, .type=IO_READ},
        {.addr=0x01d6, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02C0) {
    const struct CPU_State initial_cpu = {.pc=0x3fa5, .a=0xcd, .x=0xa6, .y=0xa8, .sp=0x37, .status=0x97};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000c, .value=0xb7}, {.addr=0x3fa5, .value=0xeb}, {.addr=0x3fa6, .value=0x0c},
    };
    const struct CPU_State final_cpu = {.pc=0x3fa7, .a=0xcd, .x=0xa6, .y=0xb7, .sp=0x37, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x000c, .value=0xb7}, {.addr=0x3fa5, .value=0xeb}, {.addr=0x3fa6, .value=0x0c},
    };
    const struct BusEvent events[] = {
        {.addr=0x3fa5, .value=0xeb, .type=IO_READ},
        {.addr=0x3fa6, .value=0x0c, .type=IO_READ},
        {.addr=0x000c, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02C1) {
    const struct CPU_State initial_cpu = {.pc=0x71e0, .a=0xb5, .x=0x05, .y=0x5c, .sp=0xff, .status=0xfc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0131, .value=0x49}, {.addr=0x71e0, .value=0xeb}, {.addr=0x71e1, .value=0x31},
    };
    const struct CPU_State final_cpu = {.pc=0x71e2, .a=0xb5, .x=0x05, .y=0x49, .sp=0xff, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0131, .value=0x49}, {.addr=0x71e0, .value=0xeb}, {.addr=0x71e1, .value=0x31},
    };
    const struct BusEvent events[] = {
        {.addr=0x71e0, .value=0xeb, .type=IO_READ},
        {.addr=0x71e1, .value=0x31, .type=IO_READ},
        {.addr=0x0131, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02C2) {
    const struct CPU_State initial_cpu = {.pc=0xd540, .a=0xdc, .x=0xc6, .y=0xa1, .sp=0xb6, .status=0x38};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0145, .value=0xf5}, {.addr=0xd540, .value=0xeb}, {.addr=0xd541, .value=0x45},
    };
    const struct CPU_State final_cpu = {.pc=0xd542, .a=0xdc, .x=0xc6, .y=0xf5, .sp=0xb6, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0145, .value=0xf5}, {.addr=0xd540, .value=0xeb}, {.addr=0xd541, .value=0x45},
    };
    const struct BusEvent events[] = {
        {.addr=0xd540, .value=0xeb, .type=IO_READ},
        {.addr=0xd541, .value=0x45, .type=IO_READ},
        {.addr=0x0145, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02C3) {
    const struct CPU_State initial_cpu = {.pc=0x352b, .a=0x9d, .x=0x98, .y=0x97, .sp=0xed, .status=0xfd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018c, .value=0x4f}, {.addr=0x352b, .value=0xeb}, {.addr=0x352c, .value=0x8c},
    };
    const struct CPU_State final_cpu = {.pc=0x352d, .a=0x9d, .x=0x98, .y=0x4f, .sp=0xed, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x018c, .value=0x4f}, {.addr=0x352b, .value=0xeb}, {.addr=0x352c, .value=0x8c},
    };
    const struct BusEvent events[] = {
        {.addr=0x352b, .value=0xeb, .type=IO_READ},
        {.addr=0x352c, .value=0x8c, .type=IO_READ},
        {.addr=0x018c, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02C4) {
    const struct CPU_State initial_cpu = {.pc=0xb4bb, .a=0xdf, .x=0x23, .y=0x2c, .sp=0x88, .status=0x42};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0092, .value=0x24}, {.addr=0xb4bb, .value=0xeb}, {.addr=0xb4bc, .value=0x92},
    };
    const struct CPU_State final_cpu = {.pc=0xb4bd, .a=0xdf, .x=0x23, .y=0x24, .sp=0x88, .status=0x40};
    const struct RamEntry final_ram[] = {
        {.addr=0x0092, .value=0x24}, {.addr=0xb4bb, .value=0xeb}, {.addr=0xb4bc, .value=0x92},
    };
    const struct BusEvent events[] = {
        {.addr=0xb4bb, .value=0xeb, .type=IO_READ},
        {.addr=0xb4bc, .value=0x92, .type=IO_READ},
        {.addr=0x0092, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x17ce, .a=0x45, .x=0x95, .y=0x41, .sp=0xb0, .status=0xaf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fc, .value=0xff}, {.addr=0x17ce, .value=0xeb}, {.addr=0x17cf, .value=0xfc},
    };
    const struct CPU_State final_cpu = {.pc=0x17d0, .a=0x45, .x=0x95, .y=0xff, .sp=0xb0, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fc, .value=0xff}, {.addr=0x17ce, .value=0xeb}, {.addr=0x17cf, .value=0xfc},
    };
    const struct BusEvent events[] = {
        {.addr=0x17ce, .value=0xeb, .type=IO_READ},
        {.addr=0x17cf, .value=0xfc, .type=IO_READ},
        {.addr=0x01fc, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02C6) {
    const struct CPU_State initial_cpu = {.pc=0x6137, .a=0xeb, .x=0xda, .y=0x3c, .sp=0x63, .status=0xd8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005e, .value=0xd7}, {.addr=0x6137, .value=0xeb}, {.addr=0x6138, .value=0x5e},
    };
    const struct CPU_State final_cpu = {.pc=0x6139, .a=0xeb, .x=0xda, .y=0xd7, .sp=0x63, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x005e, .value=0xd7}, {.addr=0x6137, .value=0xeb}, {.addr=0x6138, .value=0x5e},
    };
    const struct BusEvent events[] = {
        {.addr=0x6137, .value=0xeb, .type=IO_READ},
        {.addr=0x6138, .value=0x5e, .type=IO_READ},
        {.addr=0x005e, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02C7) {
    const struct CPU_State initial_cpu = {.pc=0xb819, .a=0xca, .x=0xd9, .y=0x6d, .sp=0x2c, .status=0x0f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0069, .value=0xa6}, {.addr=0xb819, .value=0xeb}, {.addr=0xb81a, .value=0x69},
    };
    const struct CPU_State final_cpu = {.pc=0xb81b, .a=0xca, .x=0xd9, .y=0xa6, .sp=0x2c, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0069, .value=0xa6}, {.addr=0xb819, .value=0xeb}, {.addr=0xb81a, .value=0x69},
    };
    const struct BusEvent events[] = {
        {.addr=0xb819, .value=0xeb, .type=IO_READ},
        {.addr=0xb81a, .value=0x69, .type=IO_READ},
        {.addr=0x0069, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02C8) {
    const struct CPU_State initial_cpu = {.pc=0x2848, .a=0x5a, .x=0xb5, .y=0xde, .sp=0x8e, .status=0x1e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d1, .value=0x94}, {.addr=0x2848, .value=0xeb}, {.addr=0x2849, .value=0xd1},
    };
    const struct CPU_State final_cpu = {.pc=0x284a, .a=0x5a, .x=0xb5, .y=0x94, .sp=0x8e, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d1, .value=0x94}, {.addr=0x2848, .value=0xeb}, {.addr=0x2849, .value=0xd1},
    };
    const struct BusEvent events[] = {
        {.addr=0x2848, .value=0xeb, .type=IO_READ},
        {.addr=0x2849, .value=0xd1, .type=IO_READ},
        {.addr=0x00d1, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02C9) {
    const struct CPU_State initial_cpu = {.pc=0x1aec, .a=0x02, .x=0xdf, .y=0x2a, .sp=0x90, .status=0x9b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0010, .value=0x0e}, {.addr=0x1aec, .value=0xeb}, {.addr=0x1aed, .value=0x10},
    };
    const struct CPU_State final_cpu = {.pc=0x1aee, .a=0x02, .x=0xdf, .y=0x0e, .sp=0x90, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x0010, .value=0x0e}, {.addr=0x1aec, .value=0xeb}, {.addr=0x1aed, .value=0x10},
    };
    const struct BusEvent events[] = {
        {.addr=0x1aec, .value=0xeb, .type=IO_READ},
        {.addr=0x1aed, .value=0x10, .type=IO_READ},
        {.addr=0x0010, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02CA) {
    const struct CPU_State initial_cpu = {.pc=0x513d, .a=0xd2, .x=0x44, .y=0x36, .sp=0xbb, .status=0xdc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0078, .value=0x98}, {.addr=0x513d, .value=0xeb}, {.addr=0x513e, .value=0x78},
    };
    const struct CPU_State final_cpu = {.pc=0x513f, .a=0xd2, .x=0x44, .y=0x98, .sp=0xbb, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0078, .value=0x98}, {.addr=0x513d, .value=0xeb}, {.addr=0x513e, .value=0x78},
    };
    const struct BusEvent events[] = {
        {.addr=0x513d, .value=0xeb, .type=IO_READ},
        {.addr=0x513e, .value=0x78, .type=IO_READ},
        {.addr=0x0078, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02CB) {
    const struct CPU_State initial_cpu = {.pc=0x1c15, .a=0x08, .x=0xa1, .y=0x57, .sp=0x91, .status=0x5f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009f, .value=0x97}, {.addr=0x1c15, .value=0xeb}, {.addr=0x1c16, .value=0x9f},
    };
    const struct CPU_State final_cpu = {.pc=0x1c17, .a=0x08, .x=0xa1, .y=0x97, .sp=0x91, .status=0xdd};
    const struct RamEntry final_ram[] = {
        {.addr=0x009f, .value=0x97}, {.addr=0x1c15, .value=0xeb}, {.addr=0x1c16, .value=0x9f},
    };
    const struct BusEvent events[] = {
        {.addr=0x1c15, .value=0xeb, .type=IO_READ},
        {.addr=0x1c16, .value=0x9f, .type=IO_READ},
        {.addr=0x009f, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02CC) {
    const struct CPU_State initial_cpu = {.pc=0x86bc, .a=0x3c, .x=0x34, .y=0x5c, .sp=0x73, .status=0x40};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0000, .value=0x6c}, {.addr=0x86bc, .value=0xeb}, {.addr=0x86bd, .value=0x00},
    };
    const struct CPU_State final_cpu = {.pc=0x86be, .a=0x3c, .x=0x34, .y=0x6c, .sp=0x73, .status=0x40};
    const struct RamEntry final_ram[] = {
        {.addr=0x0000, .value=0x6c}, {.addr=0x86bc, .value=0xeb}, {.addr=0x86bd, .value=0x00},
    };
    const struct BusEvent events[] = {
        {.addr=0x86bc, .value=0xeb, .type=IO_READ},
        {.addr=0x86bd, .value=0x00, .type=IO_READ},
        {.addr=0x0000, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02CD) {
    const struct CPU_State initial_cpu = {.pc=0xe240, .a=0xc7, .x=0x15, .y=0x64, .sp=0x1b, .status=0x29};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a5, .value=0x1a}, {.addr=0xe240, .value=0xeb}, {.addr=0xe241, .value=0xa5},
    };
    const struct CPU_State final_cpu = {.pc=0xe242, .a=0xc7, .x=0x15, .y=0x1a, .sp=0x1b, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a5, .value=0x1a}, {.addr=0xe240, .value=0xeb}, {.addr=0xe241, .value=0xa5},
    };
    const struct BusEvent events[] = {
        {.addr=0xe240, .value=0xeb, .type=IO_READ},
        {.addr=0xe241, .value=0xa5, .type=IO_READ},
        {.addr=0x01a5, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02CE) {
    const struct CPU_State initial_cpu = {.pc=0xf5c2, .a=0x49, .x=0x2f, .y=0x76, .sp=0x74, .status=0x97};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0017, .value=0x47}, {.addr=0xf5c2, .value=0xeb}, {.addr=0xf5c3, .value=0x17},
    };
    const struct CPU_State final_cpu = {.pc=0xf5c4, .a=0x49, .x=0x2f, .y=0x47, .sp=0x74, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x0017, .value=0x47}, {.addr=0xf5c2, .value=0xeb}, {.addr=0xf5c3, .value=0x17},
    };
    const struct BusEvent events[] = {
        {.addr=0xf5c2, .value=0xeb, .type=IO_READ},
        {.addr=0xf5c3, .value=0x17, .type=IO_READ},
        {.addr=0x0017, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02CF) {
    const struct CPU_State initial_cpu = {.pc=0xfa7a, .a=0x99, .x=0xee, .y=0x43, .sp=0x4d, .status=0x3d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017f, .value=0x84}, {.addr=0xfa7a, .value=0xeb}, {.addr=0xfa7b, .value=0x7f},
    };
    const struct CPU_State final_cpu = {.pc=0xfa7c, .a=0x99, .x=0xee, .y=0x84, .sp=0x4d, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x017f, .value=0x84}, {.addr=0xfa7a, .value=0xeb}, {.addr=0xfa7b, .value=0x7f},
    };
    const struct BusEvent events[] = {
        {.addr=0xfa7a, .value=0xeb, .type=IO_READ},
        {.addr=0xfa7b, .value=0x7f, .type=IO_READ},
        {.addr=0x017f, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02D0) {
    const struct CPU_State initial_cpu = {.pc=0xe66b, .a=0x39, .x=0x11, .y=0xfe, .sp=0x1e, .status=0x3b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015a, .value=0xf2}, {.addr=0xe66b, .value=0xeb}, {.addr=0xe66c, .value=0x5a},
    };
    const struct CPU_State final_cpu = {.pc=0xe66d, .a=0x39, .x=0x11, .y=0xf2, .sp=0x1e, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x015a, .value=0xf2}, {.addr=0xe66b, .value=0xeb}, {.addr=0xe66c, .value=0x5a},
    };
    const struct BusEvent events[] = {
        {.addr=0xe66b, .value=0xeb, .type=IO_READ},
        {.addr=0xe66c, .value=0x5a, .type=IO_READ},
        {.addr=0x015a, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02D1) {
    const struct CPU_State initial_cpu = {.pc=0x3679, .a=0x8d, .x=0x4f, .y=0xf0, .sp=0xd0, .status=0xe6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bd, .value=0xc0}, {.addr=0x3679, .value=0xeb}, {.addr=0x367a, .value=0xbd},
    };
    const struct CPU_State final_cpu = {.pc=0x367b, .a=0x8d, .x=0x4f, .y=0xc0, .sp=0xd0, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bd, .value=0xc0}, {.addr=0x3679, .value=0xeb}, {.addr=0x367a, .value=0xbd},
    };
    const struct BusEvent events[] = {
        {.addr=0x3679, .value=0xeb, .type=IO_READ},
        {.addr=0x367a, .value=0xbd, .type=IO_READ},
        {.addr=0x01bd, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x5c7a, .a=0x0a, .x=0x4d, .y=0x90, .sp=0x0c, .status=0xa3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0154, .value=0x0c}, {.addr=0x5c7a, .value=0xeb}, {.addr=0x5c7b, .value=0x54},
    };
    const struct CPU_State final_cpu = {.pc=0x5c7c, .a=0x0a, .x=0x4d, .y=0x0c, .sp=0x0c, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x0154, .value=0x0c}, {.addr=0x5c7a, .value=0xeb}, {.addr=0x5c7b, .value=0x54},
    };
    const struct BusEvent events[] = {
        {.addr=0x5c7a, .value=0xeb, .type=IO_READ},
        {.addr=0x5c7b, .value=0x54, .type=IO_READ},
        {.addr=0x0154, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02D4) {
    const struct CPU_State initial_cpu = {.pc=0x43bd, .a=0x7d, .x=0x0a, .y=0xd1, .sp=0x78, .status=0xf1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ab, .value=0x5e}, {.addr=0x43bd, .value=0xeb}, {.addr=0x43be, .value=0xab},
    };
    const struct CPU_State final_cpu = {.pc=0x43bf, .a=0x7d, .x=0x0a, .y=0x5e, .sp=0x78, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ab, .value=0x5e}, {.addr=0x43bd, .value=0xeb}, {.addr=0x43be, .value=0xab},
    };
    const struct BusEvent events[] = {
        {.addr=0x43bd, .value=0xeb, .type=IO_READ},
        {.addr=0x43be, .value=0xab, .type=IO_READ},
        {.addr=0x01ab, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02D5) {
    const struct CPU_State initial_cpu = {.pc=0x5e84, .a=0xb2, .x=0x50, .y=0x23, .sp=0xcb, .status=0xe9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d1, .value=0xea}, {.addr=0x5e84, .value=0xeb}, {.addr=0x5e85, .value=0xd1},
    };
    const struct CPU_State final_cpu = {.pc=0x5e86, .a=0xb2, .x=0x50, .y=0xea, .sp=0xcb, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d1, .value=0xea}, {.addr=0x5e84, .value=0xeb}, {.addr=0x5e85, .value=0xd1},
    };
    const struct BusEvent events[] = {
        {.addr=0x5e84, .value=0xeb, .type=IO_READ},
        {.addr=0x5e85, .value=0xd1, .type=IO_READ},
        {.addr=0x01d1, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02D6) {
    const struct CPU_State initial_cpu = {.pc=0xa3a0, .a=0x7b, .x=0x67, .y=0x40, .sp=0xf4, .status=0xcb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0068, .value=0x8a}, {.addr=0xa3a0, .value=0xeb}, {.addr=0xa3a1, .value=0x68},
    };
    const struct CPU_State final_cpu = {.pc=0xa3a2, .a=0x7b, .x=0x67, .y=0x8a, .sp=0xf4, .status=0xc9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0068, .value=0x8a}, {.addr=0xa3a0, .value=0xeb}, {.addr=0xa3a1, .value=0x68},
    };
    const struct BusEvent events[] = {
        {.addr=0xa3a0, .value=0xeb, .type=IO_READ},
        {.addr=0xa3a1, .value=0x68, .type=IO_READ},
        {.addr=0x0068, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02D7) {
    const struct CPU_State initial_cpu = {.pc=0x8713, .a=0x9f, .x=0xc3, .y=0x52, .sp=0xbe, .status=0x25};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c1, .value=0x40}, {.addr=0x8713, .value=0xeb}, {.addr=0x8714, .value=0xc1},
    };
    const struct CPU_State final_cpu = {.pc=0x8715, .a=0x9f, .x=0xc3, .y=0x40, .sp=0xbe, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c1, .value=0x40}, {.addr=0x8713, .value=0xeb}, {.addr=0x8714, .value=0xc1},
    };
    const struct BusEvent events[] = {
        {.addr=0x8713, .value=0xeb, .type=IO_READ},
        {.addr=0x8714, .value=0xc1, .type=IO_READ},
        {.addr=0x01c1, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02D8) {
    const struct CPU_State initial_cpu = {.pc=0x6712, .a=0x09, .x=0x79, .y=0x98, .sp=0x79, .status=0xed};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013d, .value=0x25}, {.addr=0x6712, .value=0xeb}, {.addr=0x6713, .value=0x3d},
    };
    const struct CPU_State final_cpu = {.pc=0x6714, .a=0x09, .x=0x79, .y=0x25, .sp=0x79, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x013d, .value=0x25}, {.addr=0x6712, .value=0xeb}, {.addr=0x6713, .value=0x3d},
    };
    const struct BusEvent events[] = {
        {.addr=0x6712, .value=0xeb, .type=IO_READ},
        {.addr=0x6713, .value=0x3d, .type=IO_READ},
        {.addr=0x013d, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02D9) {
    const struct CPU_State initial_cpu = {.pc=0x4c76, .a=0x85, .x=0xa8, .y=0xf1, .sp=0x47, .status=0xb9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0156, .value=0x6c}, {.addr=0x4c76, .value=0xeb}, {.addr=0x4c77, .value=0x56},
    };
    const struct CPU_State final_cpu = {.pc=0x4c78, .a=0x85, .x=0xa8, .y=0x6c, .sp=0x47, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x0156, .value=0x6c}, {.addr=0x4c76, .value=0xeb}, {.addr=0x4c77, .value=0x56},
    };
    const struct BusEvent events[] = {
        {.addr=0x4c76, .value=0xeb, .type=IO_READ},
        {.addr=0x4c77, .value=0x56, .type=IO_READ},
        {.addr=0x0156, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02DA) {
    const struct CPU_State initial_cpu = {.pc=0xaada, .a=0xfd, .x=0x22, .y=0xa4, .sp=0x75, .status=0xfa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010a, .value=0xb3}, {.addr=0xaada, .value=0xeb}, {.addr=0xaadb, .value=0x0a},
    };
    const struct CPU_State final_cpu = {.pc=0xaadc, .a=0xfd, .x=0x22, .y=0xb3, .sp=0x75, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x010a, .value=0xb3}, {.addr=0xaada, .value=0xeb}, {.addr=0xaadb, .value=0x0a},
    };
    const struct BusEvent events[] = {
        {.addr=0xaada, .value=0xeb, .type=IO_READ},
        {.addr=0xaadb, .value=0x0a, .type=IO_READ},
        {.addr=0x010a, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02DB) {
    const struct CPU_State initial_cpu = {.pc=0x4078, .a=0x74, .x=0xa1, .y=0x85, .sp=0xf9, .status=0x03};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0064, .value=0x79}, {.addr=0x4078, .value=0xeb}, {.addr=0x4079, .value=0x64},
    };
    const struct CPU_State final_cpu = {.pc=0x407a, .a=0x74, .x=0xa1, .y=0x79, .sp=0xf9, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x0064, .value=0x79}, {.addr=0x4078, .value=0xeb}, {.addr=0x4079, .value=0x64},
    };
    const struct BusEvent events[] = {
        {.addr=0x4078, .value=0xeb, .type=IO_READ},
        {.addr=0x4079, .value=0x64, .type=IO_READ},
        {.addr=0x0064, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02DC) {
    const struct CPU_State initial_cpu = {.pc=0x8c69, .a=0x01, .x=0x87, .y=0x0b, .sp=0x47, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0076, .value=0xc1}, {.addr=0x8c69, .value=0xeb}, {.addr=0x8c6a, .value=0x76},
    };
    const struct CPU_State final_cpu = {.pc=0x8c6b, .a=0x01, .x=0x87, .y=0xc1, .sp=0x47, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0076, .value=0xc1}, {.addr=0x8c69, .value=0xeb}, {.addr=0x8c6a, .value=0x76},
    };
    const struct BusEvent events[] = {
        {.addr=0x8c69, .value=0xeb, .type=IO_READ},
        {.addr=0x8c6a, .value=0x76, .type=IO_READ},
        {.addr=0x0076, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02DD) {
    const struct CPU_State initial_cpu = {.pc=0x3ad1, .a=0x58, .x=0x48, .y=0xa9, .sp=0x1f, .status=0x59};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0066, .value=0xc0}, {.addr=0x3ad1, .value=0xeb}, {.addr=0x3ad2, .value=0x66},
    };
    const struct CPU_State final_cpu = {.pc=0x3ad3, .a=0x58, .x=0x48, .y=0xc0, .sp=0x1f, .status=0xd9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0066, .value=0xc0}, {.addr=0x3ad1, .value=0xeb}, {.addr=0x3ad2, .value=0x66},
    };
    const struct BusEvent events[] = {
        {.addr=0x3ad1, .value=0xeb, .type=IO_READ},
        {.addr=0x3ad2, .value=0x66, .type=IO_READ},
        {.addr=0x0066, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02DE) {
    const struct CPU_State initial_cpu = {.pc=0xd28a, .a=0x43, .x=0x78, .y=0x0b, .sp=0xfa, .status=0xfb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f6, .value=0xc7}, {.addr=0xd28a, .value=0xeb}, {.addr=0xd28b, .value=0xf6},
    };
    const struct CPU_State final_cpu = {.pc=0xd28c, .a=0x43, .x=0x78, .y=0xc7, .sp=0xfa, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f6, .value=0xc7}, {.addr=0xd28a, .value=0xeb}, {.addr=0xd28b, .value=0xf6},
    };
    const struct BusEvent events[] = {
        {.addr=0xd28a, .value=0xeb, .type=IO_READ},
        {.addr=0xd28b, .value=0xf6, .type=IO_READ},
        {.addr=0x01f6, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02DF) {
    const struct CPU_State initial_cpu = {.pc=0xe1ef, .a=0x07, .x=0x04, .y=0xa0, .sp=0xf5, .status=0xbf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c3, .value=0x21}, {.addr=0xe1ef, .value=0xeb}, {.addr=0xe1f0, .value=0xc3},
    };
    const struct CPU_State final_cpu = {.pc=0xe1f1, .a=0x07, .x=0x04, .y=0x21, .sp=0xf5, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c3, .value=0x21}, {.addr=0xe1ef, .value=0xeb}, {.addr=0xe1f0, .value=0xc3},
    };
    const struct BusEvent events[] = {
        {.addr=0xe1ef, .value=0xeb, .type=IO_READ},
        {.addr=0xe1f0, .value=0xc3, .type=IO_READ},
        {.addr=0x01c3, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02E0) {
    const struct CPU_State initial_cpu = {.pc=0x3090, .a=0x4c, .x=0xb9, .y=0xfb, .sp=0x23, .status=0x2a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011c, .value=0xe0}, {.addr=0x3090, .value=0xeb}, {.addr=0x3091, .value=0x1c},
    };
    const struct CPU_State final_cpu = {.pc=0x3092, .a=0x4c, .x=0xb9, .y=0xe0, .sp=0x23, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x011c, .value=0xe0}, {.addr=0x3090, .value=0xeb}, {.addr=0x3091, .value=0x1c},
    };
    const struct BusEvent events[] = {
        {.addr=0x3090, .value=0xeb, .type=IO_READ},
        {.addr=0x3091, .value=0x1c, .type=IO_READ},
        {.addr=0x011c, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02E1) {
    const struct CPU_State initial_cpu = {.pc=0xe359, .a=0x6e, .x=0x4d, .y=0x3f, .sp=0x3b, .status=0xf1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016f, .value=0x1e}, {.addr=0xe359, .value=0xeb}, {.addr=0xe35a, .value=0x6f},
    };
    const struct CPU_State final_cpu = {.pc=0xe35b, .a=0x6e, .x=0x4d, .y=0x1e, .sp=0x3b, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x016f, .value=0x1e}, {.addr=0xe359, .value=0xeb}, {.addr=0xe35a, .value=0x6f},
    };
    const struct BusEvent events[] = {
        {.addr=0xe359, .value=0xeb, .type=IO_READ},
        {.addr=0xe35a, .value=0x6f, .type=IO_READ},
        {.addr=0x016f, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02E2) {
    const struct CPU_State initial_cpu = {.pc=0x3858, .a=0xc8, .x=0x25, .y=0x76, .sp=0xa7, .status=0xe9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0152, .value=0xea}, {.addr=0x3858, .value=0xeb}, {.addr=0x3859, .value=0x52},
    };
    const struct CPU_State final_cpu = {.pc=0x385a, .a=0xc8, .x=0x25, .y=0xea, .sp=0xa7, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0152, .value=0xea}, {.addr=0x3858, .value=0xeb}, {.addr=0x3859, .value=0x52},
    };
    const struct BusEvent events[] = {
        {.addr=0x3858, .value=0xeb, .type=IO_READ},
        {.addr=0x3859, .value=0x52, .type=IO_READ},
        {.addr=0x0152, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02E3) {
    const struct CPU_State initial_cpu = {.pc=0xe8fd, .a=0x24, .x=0x3e, .y=0xc4, .sp=0x7c, .status=0x6e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b5, .value=0x72}, {.addr=0xe8fd, .value=0xeb}, {.addr=0xe8fe, .value=0xb5},
    };
    const struct CPU_State final_cpu = {.pc=0xe8ff, .a=0x24, .x=0x3e, .y=0x72, .sp=0x7c, .status=0x6c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b5, .value=0x72}, {.addr=0xe8fd, .value=0xeb}, {.addr=0xe8fe, .value=0xb5},
    };
    const struct BusEvent events[] = {
        {.addr=0xe8fd, .value=0xeb, .type=IO_READ},
        {.addr=0xe8fe, .value=0xb5, .type=IO_READ},
        {.addr=0x01b5, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02E4) {
    const struct CPU_State initial_cpu = {.pc=0x2502, .a=0x4f, .x=0xbb, .y=0x5c, .sp=0x6e, .status=0x59};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0022, .value=0xba}, {.addr=0x2502, .value=0xeb}, {.addr=0x2503, .value=0x22},
    };
    const struct CPU_State final_cpu = {.pc=0x2504, .a=0x4f, .x=0xbb, .y=0xba, .sp=0x6e, .status=0xd9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0022, .value=0xba}, {.addr=0x2502, .value=0xeb}, {.addr=0x2503, .value=0x22},
    };
    const struct BusEvent events[] = {
        {.addr=0x2502, .value=0xeb, .type=IO_READ},
        {.addr=0x2503, .value=0x22, .type=IO_READ},
        {.addr=0x0022, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02E5) {
    const struct CPU_State initial_cpu = {.pc=0x5632, .a=0x3b, .x=0x83, .y=0x7a, .sp=0xe4, .status=0x85};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b7, .value=0xdc}, {.addr=0x5632, .value=0xeb}, {.addr=0x5633, .value=0xb7},
    };
    const struct CPU_State final_cpu = {.pc=0x5634, .a=0x3b, .x=0x83, .y=0xdc, .sp=0xe4, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b7, .value=0xdc}, {.addr=0x5632, .value=0xeb}, {.addr=0x5633, .value=0xb7},
    };
    const struct BusEvent events[] = {
        {.addr=0x5632, .value=0xeb, .type=IO_READ},
        {.addr=0x5633, .value=0xb7, .type=IO_READ},
        {.addr=0x00b7, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02E6) {
    const struct CPU_State initial_cpu = {.pc=0xf296, .a=0x1d, .x=0x03, .y=0x6c, .sp=0xa2, .status=0x06};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00df, .value=0x1a}, {.addr=0xf296, .value=0xeb}, {.addr=0xf297, .value=0xdf},
    };
    const struct CPU_State final_cpu = {.pc=0xf298, .a=0x1d, .x=0x03, .y=0x1a, .sp=0xa2, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x00df, .value=0x1a}, {.addr=0xf296, .value=0xeb}, {.addr=0xf297, .value=0xdf},
    };
    const struct BusEvent events[] = {
        {.addr=0xf296, .value=0xeb, .type=IO_READ},
        {.addr=0xf297, .value=0xdf, .type=IO_READ},
        {.addr=0x00df, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02E7) {
    const struct CPU_State initial_cpu = {.pc=0x5b83, .a=0xb5, .x=0x85, .y=0xd3, .sp=0xe0, .status=0x5e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0064, .value=0xe0}, {.addr=0x5b83, .value=0xeb}, {.addr=0x5b84, .value=0x64},
    };
    const struct CPU_State final_cpu = {.pc=0x5b85, .a=0xb5, .x=0x85, .y=0xe0, .sp=0xe0, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0064, .value=0xe0}, {.addr=0x5b83, .value=0xeb}, {.addr=0x5b84, .value=0x64},
    };
    const struct BusEvent events[] = {
        {.addr=0x5b83, .value=0xeb, .type=IO_READ},
        {.addr=0x5b84, .value=0x64, .type=IO_READ},
        {.addr=0x0064, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02E8) {
    const struct CPU_State initial_cpu = {.pc=0x4178, .a=0x12, .x=0xef, .y=0x62, .sp=0x2f, .status=0x1b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b4, .value=0x79}, {.addr=0x4178, .value=0xeb}, {.addr=0x4179, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0x417a, .a=0x12, .x=0xef, .y=0x79, .sp=0x2f, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b4, .value=0x79}, {.addr=0x4178, .value=0xeb}, {.addr=0x4179, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0x4178, .value=0xeb, .type=IO_READ},
        {.addr=0x4179, .value=0xb4, .type=IO_READ},
        {.addr=0x00b4, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02E9) {
    const struct CPU_State initial_cpu = {.pc=0x05f1, .a=0xb0, .x=0x4b, .y=0xe7, .sp=0xa1, .status=0xf2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010a, .value=0x0d}, {.addr=0x05f1, .value=0xeb}, {.addr=0x05f2, .value=0x0a},
    };
    const struct CPU_State final_cpu = {.pc=0x05f3, .a=0xb0, .x=0x4b, .y=0x0d, .sp=0xa1, .status=0x70};
    const struct RamEntry final_ram[] = {
        {.addr=0x010a, .value=0x0d}, {.addr=0x05f1, .value=0xeb}, {.addr=0x05f2, .value=0x0a},
    };
    const struct BusEvent events[] = {
        {.addr=0x05f1, .value=0xeb, .type=IO_READ},
        {.addr=0x05f2, .value=0x0a, .type=IO_READ},
        {.addr=0x010a, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02EA) {
    const struct CPU_State initial_cpu = {.pc=0x44bc, .a=0x83, .x=0x60, .y=0xb4, .sp=0x53, .status=0x75};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01eb, .value=0xcf}, {.addr=0x44bc, .value=0xeb}, {.addr=0x44bd, .value=0xeb},
    };
    const struct CPU_State final_cpu = {.pc=0x44be, .a=0x83, .x=0x60, .y=0xcf, .sp=0x53, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01eb, .value=0xcf}, {.addr=0x44bc, .value=0xeb}, {.addr=0x44bd, .value=0xeb},
    };
    const struct BusEvent events[] = {
        {.addr=0x44bc, .value=0xeb, .type=IO_READ},
        {.addr=0x44bd, .value=0xeb, .type=IO_READ},
        {.addr=0x01eb, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02EB) {
    const struct CPU_State initial_cpu = {.pc=0x1bff, .a=0x2d, .x=0x81, .y=0x25, .sp=0x1f, .status=0x52};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ce, .value=0xfb}, {.addr=0x1bff, .value=0xeb}, {.addr=0x1c00, .value=0xce},
    };
    const struct CPU_State final_cpu = {.pc=0x1c01, .a=0x2d, .x=0x81, .y=0xfb, .sp=0x1f, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ce, .value=0xfb}, {.addr=0x1bff, .value=0xeb}, {.addr=0x1c00, .value=0xce},
    };
    const struct BusEvent events[] = {
        {.addr=0x1bff, .value=0xeb, .type=IO_READ},
        {.addr=0x1c00, .value=0xce, .type=IO_READ},
        {.addr=0x00ce, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02EC) {
    const struct CPU_State initial_cpu = {.pc=0x904d, .a=0xb5, .x=0xc0, .y=0xf0, .sp=0x35, .status=0xd6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00da, .value=0x65}, {.addr=0x904d, .value=0xeb}, {.addr=0x904e, .value=0xda},
    };
    const struct CPU_State final_cpu = {.pc=0x904f, .a=0xb5, .x=0xc0, .y=0x65, .sp=0x35, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x00da, .value=0x65}, {.addr=0x904d, .value=0xeb}, {.addr=0x904e, .value=0xda},
    };
    const struct BusEvent events[] = {
        {.addr=0x904d, .value=0xeb, .type=IO_READ},
        {.addr=0x904e, .value=0xda, .type=IO_READ},
        {.addr=0x00da, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02ED) {
    const struct CPU_State initial_cpu = {.pc=0x64d2, .a=0xbc, .x=0xb5, .y=0x9b, .sp=0x89, .status=0x64};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e7, .value=0xef}, {.addr=0x64d2, .value=0xeb}, {.addr=0x64d3, .value=0xe7},
    };
    const struct CPU_State final_cpu = {.pc=0x64d4, .a=0xbc, .x=0xb5, .y=0xef, .sp=0x89, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e7, .value=0xef}, {.addr=0x64d2, .value=0xeb}, {.addr=0x64d3, .value=0xe7},
    };
    const struct BusEvent events[] = {
        {.addr=0x64d2, .value=0xeb, .type=IO_READ},
        {.addr=0x64d3, .value=0xe7, .type=IO_READ},
        {.addr=0x01e7, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02EE) {
    const struct CPU_State initial_cpu = {.pc=0xcb84, .a=0x9a, .x=0xaf, .y=0x31, .sp=0x3a, .status=0xfd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013d, .value=0xc2}, {.addr=0xcb84, .value=0xeb}, {.addr=0xcb85, .value=0x3d},
    };
    const struct CPU_State final_cpu = {.pc=0xcb86, .a=0x9a, .x=0xaf, .y=0xc2, .sp=0x3a, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x013d, .value=0xc2}, {.addr=0xcb84, .value=0xeb}, {.addr=0xcb85, .value=0x3d},
    };
    const struct BusEvent events[] = {
        {.addr=0xcb84, .value=0xeb, .type=IO_READ},
        {.addr=0xcb85, .value=0x3d, .type=IO_READ},
        {.addr=0x013d, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02EF) {
    const struct CPU_State initial_cpu = {.pc=0x1672, .a=0x37, .x=0x59, .y=0x28, .sp=0x77, .status=0xb2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a8, .value=0x25}, {.addr=0x1672, .value=0xeb}, {.addr=0x1673, .value=0xa8},
    };
    const struct CPU_State final_cpu = {.pc=0x1674, .a=0x37, .x=0x59, .y=0x25, .sp=0x77, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a8, .value=0x25}, {.addr=0x1672, .value=0xeb}, {.addr=0x1673, .value=0xa8},
    };
    const struct BusEvent events[] = {
        {.addr=0x1672, .value=0xeb, .type=IO_READ},
        {.addr=0x1673, .value=0xa8, .type=IO_READ},
        {.addr=0x01a8, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02F0) {
    const struct CPU_State initial_cpu = {.pc=0x12d5, .a=0x10, .x=0xdb, .y=0x2f, .sp=0x3b, .status=0x9a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004e, .value=0xf0}, {.addr=0x12d5, .value=0xeb}, {.addr=0x12d6, .value=0x4e},
    };
    const struct CPU_State final_cpu = {.pc=0x12d7, .a=0x10, .x=0xdb, .y=0xf0, .sp=0x3b, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x004e, .value=0xf0}, {.addr=0x12d5, .value=0xeb}, {.addr=0x12d6, .value=0x4e},
    };
    const struct BusEvent events[] = {
        {.addr=0x12d5, .value=0xeb, .type=IO_READ},
        {.addr=0x12d6, .value=0x4e, .type=IO_READ},
        {.addr=0x004e, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02F1) {
    const struct CPU_State initial_cpu = {.pc=0x28d4, .a=0x92, .x=0x1b, .y=0xfc, .sp=0x5c, .status=0xc6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0099, .value=0x0f}, {.addr=0x28d4, .value=0xeb}, {.addr=0x28d5, .value=0x99},
    };
    const struct CPU_State final_cpu = {.pc=0x28d6, .a=0x92, .x=0x1b, .y=0x0f, .sp=0x5c, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x0099, .value=0x0f}, {.addr=0x28d4, .value=0xeb}, {.addr=0x28d5, .value=0x99},
    };
    const struct BusEvent events[] = {
        {.addr=0x28d4, .value=0xeb, .type=IO_READ},
        {.addr=0x28d5, .value=0x99, .type=IO_READ},
        {.addr=0x0099, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02F2) {
    const struct CPU_State initial_cpu = {.pc=0xc26b, .a=0x91, .x=0x81, .y=0x8a, .sp=0x20, .status=0x96};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a9, .value=0xce}, {.addr=0xc26b, .value=0xeb}, {.addr=0xc26c, .value=0xa9},
    };
    const struct CPU_State final_cpu = {.pc=0xc26d, .a=0x91, .x=0x81, .y=0xce, .sp=0x20, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a9, .value=0xce}, {.addr=0xc26b, .value=0xeb}, {.addr=0xc26c, .value=0xa9},
    };
    const struct BusEvent events[] = {
        {.addr=0xc26b, .value=0xeb, .type=IO_READ},
        {.addr=0xc26c, .value=0xa9, .type=IO_READ},
        {.addr=0x00a9, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02F3) {
    const struct CPU_State initial_cpu = {.pc=0x7e2e, .a=0xba, .x=0xf8, .y=0xd0, .sp=0xe4, .status=0xbe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017e, .value=0x24}, {.addr=0x7e2e, .value=0xeb}, {.addr=0x7e2f, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0x7e30, .a=0xba, .x=0xf8, .y=0x24, .sp=0xe4, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x017e, .value=0x24}, {.addr=0x7e2e, .value=0xeb}, {.addr=0x7e2f, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0x7e2e, .value=0xeb, .type=IO_READ},
        {.addr=0x7e2f, .value=0x7e, .type=IO_READ},
        {.addr=0x017e, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02F4) {
    const struct CPU_State initial_cpu = {.pc=0x347f, .a=0xcd, .x=0x09, .y=0x5d, .sp=0x79, .status=0x54};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005e, .value=0x1a}, {.addr=0x347f, .value=0xeb}, {.addr=0x3480, .value=0x5e},
    };
    const struct CPU_State final_cpu = {.pc=0x3481, .a=0xcd, .x=0x09, .y=0x1a, .sp=0x79, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x005e, .value=0x1a}, {.addr=0x347f, .value=0xeb}, {.addr=0x3480, .value=0x5e},
    };
    const struct BusEvent events[] = {
        {.addr=0x347f, .value=0xeb, .type=IO_READ},
        {.addr=0x3480, .value=0x5e, .type=IO_READ},
        {.addr=0x005e, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02F5) {
    const struct CPU_State initial_cpu = {.pc=0x35b6, .a=0xd6, .x=0x64, .y=0xa3, .sp=0x0d, .status=0x16};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c0, .value=0xf2}, {.addr=0x35b6, .value=0xeb}, {.addr=0x35b7, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0x35b8, .a=0xd6, .x=0x64, .y=0xf2, .sp=0x0d, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c0, .value=0xf2}, {.addr=0x35b6, .value=0xeb}, {.addr=0x35b7, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0x35b6, .value=0xeb, .type=IO_READ},
        {.addr=0x35b7, .value=0xc0, .type=IO_READ},
        {.addr=0x00c0, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02F6) {
    const struct CPU_State initial_cpu = {.pc=0x20bd, .a=0x00, .x=0x25, .y=0x46, .sp=0x73, .status=0xc0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0053, .value=0xf7}, {.addr=0x20bd, .value=0xeb}, {.addr=0x20be, .value=0x53},
    };
    const struct CPU_State final_cpu = {.pc=0x20bf, .a=0x00, .x=0x25, .y=0xf7, .sp=0x73, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0053, .value=0xf7}, {.addr=0x20bd, .value=0xeb}, {.addr=0x20be, .value=0x53},
    };
    const struct BusEvent events[] = {
        {.addr=0x20bd, .value=0xeb, .type=IO_READ},
        {.addr=0x20be, .value=0x53, .type=IO_READ},
        {.addr=0x0053, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02F7) {
    const struct CPU_State initial_cpu = {.pc=0x3e97, .a=0x90, .x=0x4b, .y=0xea, .sp=0xc3, .status=0xed};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a9, .value=0x0d}, {.addr=0x3e97, .value=0xeb}, {.addr=0x3e98, .value=0xa9},
    };
    const struct CPU_State final_cpu = {.pc=0x3e99, .a=0x90, .x=0x4b, .y=0x0d, .sp=0xc3, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a9, .value=0x0d}, {.addr=0x3e97, .value=0xeb}, {.addr=0x3e98, .value=0xa9},
    };
    const struct BusEvent events[] = {
        {.addr=0x3e97, .value=0xeb, .type=IO_READ},
        {.addr=0x3e98, .value=0xa9, .type=IO_READ},
        {.addr=0x01a9, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02F8) {
    const struct CPU_State initial_cpu = {.pc=0x565f, .a=0x5b, .x=0xd7, .y=0xad, .sp=0x0f, .status=0x6e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010e, .value=0x6b}, {.addr=0x565f, .value=0xeb}, {.addr=0x5660, .value=0x0e},
    };
    const struct CPU_State final_cpu = {.pc=0x5661, .a=0x5b, .x=0xd7, .y=0x6b, .sp=0x0f, .status=0x6c};
    const struct RamEntry final_ram[] = {
        {.addr=0x010e, .value=0x6b}, {.addr=0x565f, .value=0xeb}, {.addr=0x5660, .value=0x0e},
    };
    const struct BusEvent events[] = {
        {.addr=0x565f, .value=0xeb, .type=IO_READ},
        {.addr=0x5660, .value=0x0e, .type=IO_READ},
        {.addr=0x010e, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02F9) {
    const struct CPU_State initial_cpu = {.pc=0x29be, .a=0xa5, .x=0x9d, .y=0xea, .sp=0x13, .status=0xe1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ae, .value=0x35}, {.addr=0x29be, .value=0xeb}, {.addr=0x29bf, .value=0xae},
    };
    const struct CPU_State final_cpu = {.pc=0x29c0, .a=0xa5, .x=0x9d, .y=0x35, .sp=0x13, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ae, .value=0x35}, {.addr=0x29be, .value=0xeb}, {.addr=0x29bf, .value=0xae},
    };
    const struct BusEvent events[] = {
        {.addr=0x29be, .value=0xeb, .type=IO_READ},
        {.addr=0x29bf, .value=0xae, .type=IO_READ},
        {.addr=0x01ae, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02FA) {
    const struct CPU_State initial_cpu = {.pc=0x0a6b, .a=0x66, .x=0x39, .y=0x83, .sp=0xa1, .status=0x2a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0188, .value=0xe3}, {.addr=0x0a6b, .value=0xeb}, {.addr=0x0a6c, .value=0x88},
    };
    const struct CPU_State final_cpu = {.pc=0x0a6d, .a=0x66, .x=0x39, .y=0xe3, .sp=0xa1, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0188, .value=0xe3}, {.addr=0x0a6b, .value=0xeb}, {.addr=0x0a6c, .value=0x88},
    };
    const struct BusEvent events[] = {
        {.addr=0x0a6b, .value=0xeb, .type=IO_READ},
        {.addr=0x0a6c, .value=0x88, .type=IO_READ},
        {.addr=0x0188, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02FB) {
    const struct CPU_State initial_cpu = {.pc=0x67c0, .a=0x12, .x=0x15, .y=0x7c, .sp=0x46, .status=0x34};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0163, .value=0xd4}, {.addr=0x67c0, .value=0xeb}, {.addr=0x67c1, .value=0x63},
    };
    const struct CPU_State final_cpu = {.pc=0x67c2, .a=0x12, .x=0x15, .y=0xd4, .sp=0x46, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0163, .value=0xd4}, {.addr=0x67c0, .value=0xeb}, {.addr=0x67c1, .value=0x63},
    };
    const struct BusEvent events[] = {
        {.addr=0x67c0, .value=0xeb, .type=IO_READ},
        {.addr=0x67c1, .value=0x63, .type=IO_READ},
        {.addr=0x0163, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02FC) {
    const struct CPU_State initial_cpu = {.pc=0xaa0d, .a=0xfd, .x=0x4a, .y=0x62, .sp=0x13, .status=0x88};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0087, .value=0x28}, {.addr=0xaa0d, .value=0xeb}, {.addr=0xaa0e, .value=0x87},
    };
    const struct CPU_State final_cpu = {.pc=0xaa0f, .a=0xfd, .x=0x4a, .y=0x28, .sp=0x13, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x0087, .value=0x28}, {.addr=0xaa0d, .value=0xeb}, {.addr=0xaa0e, .value=0x87},
    };
    const struct BusEvent events[] = {
        {.addr=0xaa0d, .value=0xeb, .type=IO_READ},
        {.addr=0xaa0e, .value=0x87, .type=IO_READ},
        {.addr=0x0087, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02FD) {
    const struct CPU_State initial_cpu = {.pc=0xe545, .a=0x59, .x=0x22, .y=0x31, .sp=0x78, .status=0x8b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0071, .value=0x89}, {.addr=0xe545, .value=0xeb}, {.addr=0xe546, .value=0x71},
    };
    const struct CPU_State final_cpu = {.pc=0xe547, .a=0x59, .x=0x22, .y=0x89, .sp=0x78, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x0071, .value=0x89}, {.addr=0xe545, .value=0xeb}, {.addr=0xe546, .value=0x71},
    };
    const struct BusEvent events[] = {
        {.addr=0xe545, .value=0xeb, .type=IO_READ},
        {.addr=0xe546, .value=0x71, .type=IO_READ},
        {.addr=0x0071, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02FE) {
    const struct CPU_State initial_cpu = {.pc=0x7ee1, .a=0x36, .x=0x44, .y=0xd6, .sp=0xe7, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c4, .value=0xe3}, {.addr=0x7ee1, .value=0xeb}, {.addr=0x7ee2, .value=0xc4},
    };
    const struct CPU_State final_cpu = {.pc=0x7ee3, .a=0x36, .x=0x44, .y=0xe3, .sp=0xe7, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c4, .value=0xe3}, {.addr=0x7ee1, .value=0xeb}, {.addr=0x7ee2, .value=0xc4},
    };
    const struct BusEvent events[] = {
        {.addr=0x7ee1, .value=0xeb, .type=IO_READ},
        {.addr=0x7ee2, .value=0xc4, .type=IO_READ},
        {.addr=0x00c4, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x5ae8, .a=0xe2, .x=0x2a, .y=0x4c, .sp=0xc5, .status=0x77};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e3, .value=0x48}, {.addr=0x5ae8, .value=0xeb}, {.addr=0x5ae9, .value=0xe3},
    };
    const struct CPU_State final_cpu = {.pc=0x5aea, .a=0xe2, .x=0x2a, .y=0x48, .sp=0xc5, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e3, .value=0x48}, {.addr=0x5ae8, .value=0xeb}, {.addr=0x5ae9, .value=0xe3},
    };
    const struct BusEvent events[] = {
        {.addr=0x5ae8, .value=0xeb, .type=IO_READ},
        {.addr=0x5ae9, .value=0xe3, .type=IO_READ},
        {.addr=0x01e3, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0300) {
    const struct CPU_State initial_cpu = {.pc=0x6c5f, .a=0x05, .x=0x6d, .y=0xe8, .sp=0x3e, .status=0x3d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011b, .value=0xbd}, {.addr=0x6c5f, .value=0xeb}, {.addr=0x6c60, .value=0x1b},
    };
    const struct CPU_State final_cpu = {.pc=0x6c61, .a=0x05, .x=0x6d, .y=0xbd, .sp=0x3e, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x011b, .value=0xbd}, {.addr=0x6c5f, .value=0xeb}, {.addr=0x6c60, .value=0x1b},
    };
    const struct BusEvent events[] = {
        {.addr=0x6c5f, .value=0xeb, .type=IO_READ},
        {.addr=0x6c60, .value=0x1b, .type=IO_READ},
        {.addr=0x011b, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0301) {
    const struct CPU_State initial_cpu = {.pc=0x94e4, .a=0xc3, .x=0x91, .y=0xb3, .sp=0xd2, .status=0xad};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014e, .value=0x0c}, {.addr=0x94e4, .value=0xeb}, {.addr=0x94e5, .value=0x4e},
    };
    const struct CPU_State final_cpu = {.pc=0x94e6, .a=0xc3, .x=0x91, .y=0x0c, .sp=0xd2, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x014e, .value=0x0c}, {.addr=0x94e4, .value=0xeb}, {.addr=0x94e5, .value=0x4e},
    };
    const struct BusEvent events[] = {
        {.addr=0x94e4, .value=0xeb, .type=IO_READ},
        {.addr=0x94e5, .value=0x4e, .type=IO_READ},
        {.addr=0x014e, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0302) {
    const struct CPU_State initial_cpu = {.pc=0x07f1, .a=0x49, .x=0x37, .y=0x60, .sp=0x57, .status=0xeb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0181, .value=0xe9}, {.addr=0x07f1, .value=0xeb}, {.addr=0x07f2, .value=0x81},
    };
    const struct CPU_State final_cpu = {.pc=0x07f3, .a=0x49, .x=0x37, .y=0xe9, .sp=0x57, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0181, .value=0xe9}, {.addr=0x07f1, .value=0xeb}, {.addr=0x07f2, .value=0x81},
    };
    const struct BusEvent events[] = {
        {.addr=0x07f1, .value=0xeb, .type=IO_READ},
        {.addr=0x07f2, .value=0x81, .type=IO_READ},
        {.addr=0x0181, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0303) {
    const struct CPU_State initial_cpu = {.pc=0x0d73, .a=0x44, .x=0x4e, .y=0x60, .sp=0x8f, .status=0x9d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003c, .value=0x9c}, {.addr=0x0d73, .value=0xeb}, {.addr=0x0d74, .value=0x3c},
    };
    const struct CPU_State final_cpu = {.pc=0x0d75, .a=0x44, .x=0x4e, .y=0x9c, .sp=0x8f, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x003c, .value=0x9c}, {.addr=0x0d73, .value=0xeb}, {.addr=0x0d74, .value=0x3c},
    };
    const struct BusEvent events[] = {
        {.addr=0x0d73, .value=0xeb, .type=IO_READ},
        {.addr=0x0d74, .value=0x3c, .type=IO_READ},
        {.addr=0x003c, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0304) {
    const struct CPU_State initial_cpu = {.pc=0x1995, .a=0x9c, .x=0xaf, .y=0x76, .sp=0xa2, .status=0x1b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b1, .value=0x2e}, {.addr=0x1995, .value=0xeb}, {.addr=0x1996, .value=0xb1},
    };
    const struct CPU_State final_cpu = {.pc=0x1997, .a=0x9c, .x=0xaf, .y=0x2e, .sp=0xa2, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b1, .value=0x2e}, {.addr=0x1995, .value=0xeb}, {.addr=0x1996, .value=0xb1},
    };
    const struct BusEvent events[] = {
        {.addr=0x1995, .value=0xeb, .type=IO_READ},
        {.addr=0x1996, .value=0xb1, .type=IO_READ},
        {.addr=0x00b1, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0305) {
    const struct CPU_State initial_cpu = {.pc=0xb5fb, .a=0x09, .x=0xf3, .y=0xb7, .sp=0x9f, .status=0x64};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0111, .value=0xbe}, {.addr=0xb5fb, .value=0xeb}, {.addr=0xb5fc, .value=0x11},
    };
    const struct CPU_State final_cpu = {.pc=0xb5fd, .a=0x09, .x=0xf3, .y=0xbe, .sp=0x9f, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0111, .value=0xbe}, {.addr=0xb5fb, .value=0xeb}, {.addr=0xb5fc, .value=0x11},
    };
    const struct BusEvent events[] = {
        {.addr=0xb5fb, .value=0xeb, .type=IO_READ},
        {.addr=0xb5fc, .value=0x11, .type=IO_READ},
        {.addr=0x0111, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0306) {
    const struct CPU_State initial_cpu = {.pc=0x0973, .a=0x9f, .x=0xf4, .y=0x91, .sp=0x6a, .status=0xcd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a8, .value=0x35}, {.addr=0x0973, .value=0xeb}, {.addr=0x0974, .value=0xa8},
    };
    const struct CPU_State final_cpu = {.pc=0x0975, .a=0x9f, .x=0xf4, .y=0x35, .sp=0x6a, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a8, .value=0x35}, {.addr=0x0973, .value=0xeb}, {.addr=0x0974, .value=0xa8},
    };
    const struct BusEvent events[] = {
        {.addr=0x0973, .value=0xeb, .type=IO_READ},
        {.addr=0x0974, .value=0xa8, .type=IO_READ},
        {.addr=0x00a8, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0307) {
    const struct CPU_State initial_cpu = {.pc=0x0526, .a=0xb8, .x=0xa8, .y=0xe3, .sp=0xe2, .status=0x48};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b1, .value=0x8a}, {.addr=0x0526, .value=0xeb}, {.addr=0x0527, .value=0xb1},
    };
    const struct CPU_State final_cpu = {.pc=0x0528, .a=0xb8, .x=0xa8, .y=0x8a, .sp=0xe2, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b1, .value=0x8a}, {.addr=0x0526, .value=0xeb}, {.addr=0x0527, .value=0xb1},
    };
    const struct BusEvent events[] = {
        {.addr=0x0526, .value=0xeb, .type=IO_READ},
        {.addr=0x0527, .value=0xb1, .type=IO_READ},
        {.addr=0x00b1, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0308) {
    const struct CPU_State initial_cpu = {.pc=0x6f97, .a=0x81, .x=0xe1, .y=0x97, .sp=0xb9, .status=0x86};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0055, .value=0x90}, {.addr=0x6f97, .value=0xeb}, {.addr=0x6f98, .value=0x55},
    };
    const struct CPU_State final_cpu = {.pc=0x6f99, .a=0x81, .x=0xe1, .y=0x90, .sp=0xb9, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x0055, .value=0x90}, {.addr=0x6f97, .value=0xeb}, {.addr=0x6f98, .value=0x55},
    };
    const struct BusEvent events[] = {
        {.addr=0x6f97, .value=0xeb, .type=IO_READ},
        {.addr=0x6f98, .value=0x55, .type=IO_READ},
        {.addr=0x0055, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0309) {
    const struct CPU_State initial_cpu = {.pc=0x5eb5, .a=0x0e, .x=0x91, .y=0xba, .sp=0x4a, .status=0x40};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b3, .value=0x25}, {.addr=0x5eb5, .value=0xeb}, {.addr=0x5eb6, .value=0xb3},
    };
    const struct CPU_State final_cpu = {.pc=0x5eb7, .a=0x0e, .x=0x91, .y=0x25, .sp=0x4a, .status=0x40};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b3, .value=0x25}, {.addr=0x5eb5, .value=0xeb}, {.addr=0x5eb6, .value=0xb3},
    };
    const struct BusEvent events[] = {
        {.addr=0x5eb5, .value=0xeb, .type=IO_READ},
        {.addr=0x5eb6, .value=0xb3, .type=IO_READ},
        {.addr=0x00b3, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_030A) {
    const struct CPU_State initial_cpu = {.pc=0xd964, .a=0xa5, .x=0x2c, .y=0x87, .sp=0x62, .status=0xdb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00af, .value=0x76}, {.addr=0xd964, .value=0xeb}, {.addr=0xd965, .value=0xaf},
    };
    const struct CPU_State final_cpu = {.pc=0xd966, .a=0xa5, .x=0x2c, .y=0x76, .sp=0x62, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x00af, .value=0x76}, {.addr=0xd964, .value=0xeb}, {.addr=0xd965, .value=0xaf},
    };
    const struct BusEvent events[] = {
        {.addr=0xd964, .value=0xeb, .type=IO_READ},
        {.addr=0xd965, .value=0xaf, .type=IO_READ},
        {.addr=0x00af, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_030B) {
    const struct CPU_State initial_cpu = {.pc=0x6f2f, .a=0x33, .x=0x77, .y=0xb2, .sp=0xb9, .status=0x81};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a6, .value=0x0a}, {.addr=0x6f2f, .value=0xeb}, {.addr=0x6f30, .value=0xa6},
    };
    const struct CPU_State final_cpu = {.pc=0x6f31, .a=0x33, .x=0x77, .y=0x0a, .sp=0xb9, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a6, .value=0x0a}, {.addr=0x6f2f, .value=0xeb}, {.addr=0x6f30, .value=0xa6},
    };
    const struct BusEvent events[] = {
        {.addr=0x6f2f, .value=0xeb, .type=IO_READ},
        {.addr=0x6f30, .value=0xa6, .type=IO_READ},
        {.addr=0x00a6, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_030C) {
    const struct CPU_State initial_cpu = {.pc=0xfc78, .a=0x00, .x=0x71, .y=0xc2, .sp=0xc2, .status=0x5d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ca, .value=0x43}, {.addr=0xfc78, .value=0xeb}, {.addr=0xfc79, .value=0xca},
    };
    const struct CPU_State final_cpu = {.pc=0xfc7a, .a=0x00, .x=0x71, .y=0x43, .sp=0xc2, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ca, .value=0x43}, {.addr=0xfc78, .value=0xeb}, {.addr=0xfc79, .value=0xca},
    };
    const struct BusEvent events[] = {
        {.addr=0xfc78, .value=0xeb, .type=IO_READ},
        {.addr=0xfc79, .value=0xca, .type=IO_READ},
        {.addr=0x00ca, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_030D) {
    const struct CPU_State initial_cpu = {.pc=0xb34f, .a=0x25, .x=0x00, .y=0x45, .sp=0x27, .status=0x08};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007a, .value=0x09}, {.addr=0xb34f, .value=0xeb}, {.addr=0xb350, .value=0x7a},
    };
    const struct CPU_State final_cpu = {.pc=0xb351, .a=0x25, .x=0x00, .y=0x09, .sp=0x27, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x007a, .value=0x09}, {.addr=0xb34f, .value=0xeb}, {.addr=0xb350, .value=0x7a},
    };
    const struct BusEvent events[] = {
        {.addr=0xb34f, .value=0xeb, .type=IO_READ},
        {.addr=0xb350, .value=0x7a, .type=IO_READ},
        {.addr=0x007a, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_030E) {
    const struct CPU_State initial_cpu = {.pc=0x0716, .a=0x56, .x=0x4a, .y=0xd2, .sp=0x4a, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cb, .value=0x8c}, {.addr=0x0716, .value=0xeb}, {.addr=0x0717, .value=0xcb},
    };
    const struct CPU_State final_cpu = {.pc=0x0718, .a=0x56, .x=0x4a, .y=0x8c, .sp=0x4a, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cb, .value=0x8c}, {.addr=0x0716, .value=0xeb}, {.addr=0x0717, .value=0xcb},
    };
    const struct BusEvent events[] = {
        {.addr=0x0716, .value=0xeb, .type=IO_READ},
        {.addr=0x0717, .value=0xcb, .type=IO_READ},
        {.addr=0x01cb, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_030F) {
    const struct CPU_State initial_cpu = {.pc=0x99ab, .a=0x82, .x=0x69, .y=0x3f, .sp=0xbc, .status=0x5b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d9, .value=0x60}, {.addr=0x99ab, .value=0xeb}, {.addr=0x99ac, .value=0xd9},
    };
    const struct CPU_State final_cpu = {.pc=0x99ad, .a=0x82, .x=0x69, .y=0x60, .sp=0xbc, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d9, .value=0x60}, {.addr=0x99ab, .value=0xeb}, {.addr=0x99ac, .value=0xd9},
    };
    const struct BusEvent events[] = {
        {.addr=0x99ab, .value=0xeb, .type=IO_READ},
        {.addr=0x99ac, .value=0xd9, .type=IO_READ},
        {.addr=0x00d9, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0310) {
    const struct CPU_State initial_cpu = {.pc=0x4053, .a=0x7d, .x=0x63, .y=0x52, .sp=0x6b, .status=0xdb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007a, .value=0xcc}, {.addr=0x4053, .value=0xeb}, {.addr=0x4054, .value=0x7a},
    };
    const struct CPU_State final_cpu = {.pc=0x4055, .a=0x7d, .x=0x63, .y=0xcc, .sp=0x6b, .status=0xd9};
    const struct RamEntry final_ram[] = {
        {.addr=0x007a, .value=0xcc}, {.addr=0x4053, .value=0xeb}, {.addr=0x4054, .value=0x7a},
    };
    const struct BusEvent events[] = {
        {.addr=0x4053, .value=0xeb, .type=IO_READ},
        {.addr=0x4054, .value=0x7a, .type=IO_READ},
        {.addr=0x007a, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0311) {
    const struct CPU_State initial_cpu = {.pc=0x0de3, .a=0x4b, .x=0x9d, .y=0xd5, .sp=0x8b, .status=0xf1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e4, .value=0x76}, {.addr=0x0de3, .value=0xeb}, {.addr=0x0de4, .value=0xe4},
    };
    const struct CPU_State final_cpu = {.pc=0x0de5, .a=0x4b, .x=0x9d, .y=0x76, .sp=0x8b, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e4, .value=0x76}, {.addr=0x0de3, .value=0xeb}, {.addr=0x0de4, .value=0xe4},
    };
    const struct BusEvent events[] = {
        {.addr=0x0de3, .value=0xeb, .type=IO_READ},
        {.addr=0x0de4, .value=0xe4, .type=IO_READ},
        {.addr=0x01e4, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0312) {
    const struct CPU_State initial_cpu = {.pc=0xc47d, .a=0x74, .x=0x12, .y=0xff, .sp=0xdb, .status=0xdf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0070, .value=0x43}, {.addr=0xc47d, .value=0xeb}, {.addr=0xc47e, .value=0x70},
    };
    const struct CPU_State final_cpu = {.pc=0xc47f, .a=0x74, .x=0x12, .y=0x43, .sp=0xdb, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0070, .value=0x43}, {.addr=0xc47d, .value=0xeb}, {.addr=0xc47e, .value=0x70},
    };
    const struct BusEvent events[] = {
        {.addr=0xc47d, .value=0xeb, .type=IO_READ},
        {.addr=0xc47e, .value=0x70, .type=IO_READ},
        {.addr=0x0070, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0313) {
    const struct CPU_State initial_cpu = {.pc=0x30b5, .a=0xa4, .x=0x5b, .y=0x06, .sp=0x09, .status=0x60};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014c, .value=0xea}, {.addr=0x30b5, .value=0xeb}, {.addr=0x30b6, .value=0x4c},
    };
    const struct CPU_State final_cpu = {.pc=0x30b7, .a=0xa4, .x=0x5b, .y=0xea, .sp=0x09, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x014c, .value=0xea}, {.addr=0x30b5, .value=0xeb}, {.addr=0x30b6, .value=0x4c},
    };
    const struct BusEvent events[] = {
        {.addr=0x30b5, .value=0xeb, .type=IO_READ},
        {.addr=0x30b6, .value=0x4c, .type=IO_READ},
        {.addr=0x014c, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0314) {
    const struct CPU_State initial_cpu = {.pc=0x3240, .a=0x42, .x=0xe7, .y=0xc4, .sp=0xf1, .status=0x7b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0198, .value=0xd0}, {.addr=0x3240, .value=0xeb}, {.addr=0x3241, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0x3242, .a=0x42, .x=0xe7, .y=0xd0, .sp=0xf1, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0198, .value=0xd0}, {.addr=0x3240, .value=0xeb}, {.addr=0x3241, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0x3240, .value=0xeb, .type=IO_READ},
        {.addr=0x3241, .value=0x98, .type=IO_READ},
        {.addr=0x0198, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0315) {
    const struct CPU_State initial_cpu = {.pc=0x984b, .a=0x27, .x=0x42, .y=0x1d, .sp=0xe2, .status=0x4f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0013, .value=0xba}, {.addr=0x984b, .value=0xeb}, {.addr=0x984c, .value=0x13},
    };
    const struct CPU_State final_cpu = {.pc=0x984d, .a=0x27, .x=0x42, .y=0xba, .sp=0xe2, .status=0xcd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0013, .value=0xba}, {.addr=0x984b, .value=0xeb}, {.addr=0x984c, .value=0x13},
    };
    const struct BusEvent events[] = {
        {.addr=0x984b, .value=0xeb, .type=IO_READ},
        {.addr=0x984c, .value=0x13, .type=IO_READ},
        {.addr=0x0013, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0316) {
    const struct CPU_State initial_cpu = {.pc=0x8982, .a=0x2d, .x=0xdc, .y=0x80, .sp=0x4b, .status=0xb4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0131, .value=0x34}, {.addr=0x8982, .value=0xeb}, {.addr=0x8983, .value=0x31},
    };
    const struct CPU_State final_cpu = {.pc=0x8984, .a=0x2d, .x=0xdc, .y=0x34, .sp=0x4b, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x0131, .value=0x34}, {.addr=0x8982, .value=0xeb}, {.addr=0x8983, .value=0x31},
    };
    const struct BusEvent events[] = {
        {.addr=0x8982, .value=0xeb, .type=IO_READ},
        {.addr=0x8983, .value=0x31, .type=IO_READ},
        {.addr=0x0131, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0317) {
    const struct CPU_State initial_cpu = {.pc=0x7d4b, .a=0x6b, .x=0x76, .y=0xd0, .sp=0xc7, .status=0x39};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0198, .value=0x38}, {.addr=0x7d4b, .value=0xeb}, {.addr=0x7d4c, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0x7d4d, .a=0x6b, .x=0x76, .y=0x38, .sp=0xc7, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x0198, .value=0x38}, {.addr=0x7d4b, .value=0xeb}, {.addr=0x7d4c, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0x7d4b, .value=0xeb, .type=IO_READ},
        {.addr=0x7d4c, .value=0x98, .type=IO_READ},
        {.addr=0x0198, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0318) {
    const struct CPU_State initial_cpu = {.pc=0x4032, .a=0x15, .x=0x50, .y=0x96, .sp=0x03, .status=0x40};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cd, .value=0x90}, {.addr=0x4032, .value=0xeb}, {.addr=0x4033, .value=0xcd},
    };
    const struct CPU_State final_cpu = {.pc=0x4034, .a=0x15, .x=0x50, .y=0x90, .sp=0x03, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cd, .value=0x90}, {.addr=0x4032, .value=0xeb}, {.addr=0x4033, .value=0xcd},
    };
    const struct BusEvent events[] = {
        {.addr=0x4032, .value=0xeb, .type=IO_READ},
        {.addr=0x4033, .value=0xcd, .type=IO_READ},
        {.addr=0x00cd, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0319) {
    const struct CPU_State initial_cpu = {.pc=0x0226, .a=0xd8, .x=0x37, .y=0xe7, .sp=0x1e, .status=0x18};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009d, .value=0x9c}, {.addr=0x0226, .value=0xeb}, {.addr=0x0227, .value=0x9d},
    };
    const struct CPU_State final_cpu = {.pc=0x0228, .a=0xd8, .x=0x37, .y=0x9c, .sp=0x1e, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x009d, .value=0x9c}, {.addr=0x0226, .value=0xeb}, {.addr=0x0227, .value=0x9d},
    };
    const struct BusEvent events[] = {
        {.addr=0x0226, .value=0xeb, .type=IO_READ},
        {.addr=0x0227, .value=0x9d, .type=IO_READ},
        {.addr=0x009d, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_031A) {
    const struct CPU_State initial_cpu = {.pc=0x514f, .a=0xec, .x=0x42, .y=0x65, .sp=0x62, .status=0xb1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0126, .value=0x2e}, {.addr=0x514f, .value=0xeb}, {.addr=0x5150, .value=0x26},
    };
    const struct CPU_State final_cpu = {.pc=0x5151, .a=0xec, .x=0x42, .y=0x2e, .sp=0x62, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x0126, .value=0x2e}, {.addr=0x514f, .value=0xeb}, {.addr=0x5150, .value=0x26},
    };
    const struct BusEvent events[] = {
        {.addr=0x514f, .value=0xeb, .type=IO_READ},
        {.addr=0x5150, .value=0x26, .type=IO_READ},
        {.addr=0x0126, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_031B) {
    const struct CPU_State initial_cpu = {.pc=0xe042, .a=0xca, .x=0x3a, .y=0x61, .sp=0x63, .status=0x4a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d2, .value=0x02}, {.addr=0xe042, .value=0xeb}, {.addr=0xe043, .value=0xd2},
    };
    const struct CPU_State final_cpu = {.pc=0xe044, .a=0xca, .x=0x3a, .y=0x02, .sp=0x63, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d2, .value=0x02}, {.addr=0xe042, .value=0xeb}, {.addr=0xe043, .value=0xd2},
    };
    const struct BusEvent events[] = {
        {.addr=0xe042, .value=0xeb, .type=IO_READ},
        {.addr=0xe043, .value=0xd2, .type=IO_READ},
        {.addr=0x00d2, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_031C) {
    const struct CPU_State initial_cpu = {.pc=0xd2ef, .a=0xe2, .x=0xe1, .y=0x3b, .sp=0xa0, .status=0x79};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0135, .value=0xd2}, {.addr=0xd2ef, .value=0xeb}, {.addr=0xd2f0, .value=0x35},
    };
    const struct CPU_State final_cpu = {.pc=0xd2f1, .a=0xe2, .x=0xe1, .y=0xd2, .sp=0xa0, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0135, .value=0xd2}, {.addr=0xd2ef, .value=0xeb}, {.addr=0xd2f0, .value=0x35},
    };
    const struct BusEvent events[] = {
        {.addr=0xd2ef, .value=0xeb, .type=IO_READ},
        {.addr=0xd2f0, .value=0x35, .type=IO_READ},
        {.addr=0x0135, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_031D) {
    const struct CPU_State initial_cpu = {.pc=0x782c, .a=0xa0, .x=0x6f, .y=0x1c, .sp=0x16, .status=0x82};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a2, .value=0xb9}, {.addr=0x782c, .value=0xeb}, {.addr=0x782d, .value=0xa2},
    };
    const struct CPU_State final_cpu = {.pc=0x782e, .a=0xa0, .x=0x6f, .y=0xb9, .sp=0x16, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a2, .value=0xb9}, {.addr=0x782c, .value=0xeb}, {.addr=0x782d, .value=0xa2},
    };
    const struct BusEvent events[] = {
        {.addr=0x782c, .value=0xeb, .type=IO_READ},
        {.addr=0x782d, .value=0xa2, .type=IO_READ},
        {.addr=0x00a2, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_031E) {
    const struct CPU_State initial_cpu = {.pc=0x0c65, .a=0x4e, .x=0x81, .y=0x2f, .sp=0x4a, .status=0x87};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e4, .value=0xb1}, {.addr=0x0c65, .value=0xeb}, {.addr=0x0c66, .value=0xe4},
    };
    const struct CPU_State final_cpu = {.pc=0x0c67, .a=0x4e, .x=0x81, .y=0xb1, .sp=0x4a, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e4, .value=0xb1}, {.addr=0x0c65, .value=0xeb}, {.addr=0x0c66, .value=0xe4},
    };
    const struct BusEvent events[] = {
        {.addr=0x0c65, .value=0xeb, .type=IO_READ},
        {.addr=0x0c66, .value=0xe4, .type=IO_READ},
        {.addr=0x00e4, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_031F) {
    const struct CPU_State initial_cpu = {.pc=0x740e, .a=0x67, .x=0xbd, .y=0x31, .sp=0x1a, .status=0xd1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000f, .value=0x6f}, {.addr=0x740e, .value=0xeb}, {.addr=0x740f, .value=0x0f},
    };
    const struct CPU_State final_cpu = {.pc=0x7410, .a=0x67, .x=0xbd, .y=0x6f, .sp=0x1a, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x000f, .value=0x6f}, {.addr=0x740e, .value=0xeb}, {.addr=0x740f, .value=0x0f},
    };
    const struct BusEvent events[] = {
        {.addr=0x740e, .value=0xeb, .type=IO_READ},
        {.addr=0x740f, .value=0x0f, .type=IO_READ},
        {.addr=0x000f, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0320) {
    const struct CPU_State initial_cpu = {.pc=0xd7a2, .a=0x82, .x=0xdf, .y=0x34, .sp=0xf3, .status=0x45};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b6, .value=0x71}, {.addr=0xd7a2, .value=0xeb}, {.addr=0xd7a3, .value=0xb6},
    };
    const struct CPU_State final_cpu = {.pc=0xd7a4, .a=0x82, .x=0xdf, .y=0x71, .sp=0xf3, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b6, .value=0x71}, {.addr=0xd7a2, .value=0xeb}, {.addr=0xd7a3, .value=0xb6},
    };
    const struct BusEvent events[] = {
        {.addr=0xd7a2, .value=0xeb, .type=IO_READ},
        {.addr=0xd7a3, .value=0xb6, .type=IO_READ},
        {.addr=0x00b6, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0321) {
    const struct CPU_State initial_cpu = {.pc=0xb52e, .a=0xa8, .x=0x22, .y=0xbf, .sp=0x88, .status=0xbd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c2, .value=0x3e}, {.addr=0xb52e, .value=0xeb}, {.addr=0xb52f, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0xb530, .a=0xa8, .x=0x22, .y=0x3e, .sp=0x88, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c2, .value=0x3e}, {.addr=0xb52e, .value=0xeb}, {.addr=0xb52f, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0xb52e, .value=0xeb, .type=IO_READ},
        {.addr=0xb52f, .value=0xc2, .type=IO_READ},
        {.addr=0x01c2, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0322) {
    const struct CPU_State initial_cpu = {.pc=0xb37f, .a=0xbb, .x=0x3c, .y=0x62, .sp=0x52, .status=0xa4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b2, .value=0xbd}, {.addr=0xb37f, .value=0xeb}, {.addr=0xb380, .value=0xb2},
    };
    const struct CPU_State final_cpu = {.pc=0xb381, .a=0xbb, .x=0x3c, .y=0xbd, .sp=0x52, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b2, .value=0xbd}, {.addr=0xb37f, .value=0xeb}, {.addr=0xb380, .value=0xb2},
    };
    const struct BusEvent events[] = {
        {.addr=0xb37f, .value=0xeb, .type=IO_READ},
        {.addr=0xb380, .value=0xb2, .type=IO_READ},
        {.addr=0x01b2, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0323) {
    const struct CPU_State initial_cpu = {.pc=0x0a4a, .a=0xcc, .x=0x6c, .y=0xf5, .sp=0x93, .status=0x40};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0053, .value=0x94}, {.addr=0x0a4a, .value=0xeb}, {.addr=0x0a4b, .value=0x53},
    };
    const struct CPU_State final_cpu = {.pc=0x0a4c, .a=0xcc, .x=0x6c, .y=0x94, .sp=0x93, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0053, .value=0x94}, {.addr=0x0a4a, .value=0xeb}, {.addr=0x0a4b, .value=0x53},
    };
    const struct BusEvent events[] = {
        {.addr=0x0a4a, .value=0xeb, .type=IO_READ},
        {.addr=0x0a4b, .value=0x53, .type=IO_READ},
        {.addr=0x0053, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0324) {
    const struct CPU_State initial_cpu = {.pc=0xbbf7, .a=0xf2, .x=0x8e, .y=0x80, .sp=0x6c, .status=0x2a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0131, .value=0xfa}, {.addr=0xbbf7, .value=0xeb}, {.addr=0xbbf8, .value=0x31},
    };
    const struct CPU_State final_cpu = {.pc=0xbbf9, .a=0xf2, .x=0x8e, .y=0xfa, .sp=0x6c, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0131, .value=0xfa}, {.addr=0xbbf7, .value=0xeb}, {.addr=0xbbf8, .value=0x31},
    };
    const struct BusEvent events[] = {
        {.addr=0xbbf7, .value=0xeb, .type=IO_READ},
        {.addr=0xbbf8, .value=0x31, .type=IO_READ},
        {.addr=0x0131, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0325) {
    const struct CPU_State initial_cpu = {.pc=0x3237, .a=0x1f, .x=0x46, .y=0x18, .sp=0xfe, .status=0xf3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013e, .value=0x62}, {.addr=0x3237, .value=0xeb}, {.addr=0x3238, .value=0x3e},
    };
    const struct CPU_State final_cpu = {.pc=0x3239, .a=0x1f, .x=0x46, .y=0x62, .sp=0xfe, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x013e, .value=0x62}, {.addr=0x3237, .value=0xeb}, {.addr=0x3238, .value=0x3e},
    };
    const struct BusEvent events[] = {
        {.addr=0x3237, .value=0xeb, .type=IO_READ},
        {.addr=0x3238, .value=0x3e, .type=IO_READ},
        {.addr=0x013e, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0326) {
    const struct CPU_State initial_cpu = {.pc=0x3f7e, .a=0xd8, .x=0xcb, .y=0xca, .sp=0x70, .status=0x34};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0182, .value=0x3f}, {.addr=0x3f7e, .value=0xeb}, {.addr=0x3f7f, .value=0x82},
    };
    const struct CPU_State final_cpu = {.pc=0x3f80, .a=0xd8, .x=0xcb, .y=0x3f, .sp=0x70, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x0182, .value=0x3f}, {.addr=0x3f7e, .value=0xeb}, {.addr=0x3f7f, .value=0x82},
    };
    const struct BusEvent events[] = {
        {.addr=0x3f7e, .value=0xeb, .type=IO_READ},
        {.addr=0x3f7f, .value=0x82, .type=IO_READ},
        {.addr=0x0182, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0327) {
    const struct CPU_State initial_cpu = {.pc=0x022c, .a=0x88, .x=0x62, .y=0x85, .sp=0x5f, .status=0x55};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0067, .value=0x0c}, {.addr=0x022c, .value=0xeb}, {.addr=0x022d, .value=0x67},
    };
    const struct CPU_State final_cpu = {.pc=0x022e, .a=0x88, .x=0x62, .y=0x0c, .sp=0x5f, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x0067, .value=0x0c}, {.addr=0x022c, .value=0xeb}, {.addr=0x022d, .value=0x67},
    };
    const struct BusEvent events[] = {
        {.addr=0x022c, .value=0xeb, .type=IO_READ},
        {.addr=0x022d, .value=0x67, .type=IO_READ},
        {.addr=0x0067, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0328) {
    const struct CPU_State initial_cpu = {.pc=0xf9d9, .a=0xa0, .x=0xc4, .y=0xce, .sp=0x94, .status=0x22};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0178, .value=0xf4}, {.addr=0xf9d9, .value=0xeb}, {.addr=0xf9da, .value=0x78},
    };
    const struct CPU_State final_cpu = {.pc=0xf9db, .a=0xa0, .x=0xc4, .y=0xf4, .sp=0x94, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0178, .value=0xf4}, {.addr=0xf9d9, .value=0xeb}, {.addr=0xf9da, .value=0x78},
    };
    const struct BusEvent events[] = {
        {.addr=0xf9d9, .value=0xeb, .type=IO_READ},
        {.addr=0xf9da, .value=0x78, .type=IO_READ},
        {.addr=0x0178, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0329) {
    const struct CPU_State initial_cpu = {.pc=0x5edd, .a=0x40, .x=0xd8, .y=0x95, .sp=0x2c, .status=0x66};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0197, .value=0x42}, {.addr=0x5edd, .value=0xeb}, {.addr=0x5ede, .value=0x97},
    };
    const struct CPU_State final_cpu = {.pc=0x5edf, .a=0x40, .x=0xd8, .y=0x42, .sp=0x2c, .status=0x64};
    const struct RamEntry final_ram[] = {
        {.addr=0x0197, .value=0x42}, {.addr=0x5edd, .value=0xeb}, {.addr=0x5ede, .value=0x97},
    };
    const struct BusEvent events[] = {
        {.addr=0x5edd, .value=0xeb, .type=IO_READ},
        {.addr=0x5ede, .value=0x97, .type=IO_READ},
        {.addr=0x0197, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_032A) {
    const struct CPU_State initial_cpu = {.pc=0x29e4, .a=0x49, .x=0xc8, .y=0x76, .sp=0xaa, .status=0xfd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016c, .value=0x38}, {.addr=0x29e4, .value=0xeb}, {.addr=0x29e5, .value=0x6c},
    };
    const struct CPU_State final_cpu = {.pc=0x29e6, .a=0x49, .x=0xc8, .y=0x38, .sp=0xaa, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x016c, .value=0x38}, {.addr=0x29e4, .value=0xeb}, {.addr=0x29e5, .value=0x6c},
    };
    const struct BusEvent events[] = {
        {.addr=0x29e4, .value=0xeb, .type=IO_READ},
        {.addr=0x29e5, .value=0x6c, .type=IO_READ},
        {.addr=0x016c, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_032B) {
    const struct CPU_State initial_cpu = {.pc=0x0408, .a=0xc7, .x=0xa9, .y=0x47, .sp=0xf9, .status=0x0c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0042, .value=0xc6}, {.addr=0x0408, .value=0xeb}, {.addr=0x0409, .value=0x42},
    };
    const struct CPU_State final_cpu = {.pc=0x040a, .a=0xc7, .x=0xa9, .y=0xc6, .sp=0xf9, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0042, .value=0xc6}, {.addr=0x0408, .value=0xeb}, {.addr=0x0409, .value=0x42},
    };
    const struct BusEvent events[] = {
        {.addr=0x0408, .value=0xeb, .type=IO_READ},
        {.addr=0x0409, .value=0x42, .type=IO_READ},
        {.addr=0x0042, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_032C) {
    const struct CPU_State initial_cpu = {.pc=0xa586, .a=0xb6, .x=0x48, .y=0x28, .sp=0x0a, .status=0xa6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0185, .value=0xae}, {.addr=0xa586, .value=0xeb}, {.addr=0xa587, .value=0x85},
    };
    const struct CPU_State final_cpu = {.pc=0xa588, .a=0xb6, .x=0x48, .y=0xae, .sp=0x0a, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0185, .value=0xae}, {.addr=0xa586, .value=0xeb}, {.addr=0xa587, .value=0x85},
    };
    const struct BusEvent events[] = {
        {.addr=0xa586, .value=0xeb, .type=IO_READ},
        {.addr=0xa587, .value=0x85, .type=IO_READ},
        {.addr=0x0185, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_032E) {
    const struct CPU_State initial_cpu = {.pc=0x9558, .a=0x43, .x=0xc5, .y=0xe3, .sp=0xb9, .status=0xf2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e8, .value=0xbe}, {.addr=0x9558, .value=0xeb}, {.addr=0x9559, .value=0xe8},
    };
    const struct CPU_State final_cpu = {.pc=0x955a, .a=0x43, .x=0xc5, .y=0xbe, .sp=0xb9, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e8, .value=0xbe}, {.addr=0x9558, .value=0xeb}, {.addr=0x9559, .value=0xe8},
    };
    const struct BusEvent events[] = {
        {.addr=0x9558, .value=0xeb, .type=IO_READ},
        {.addr=0x9559, .value=0xe8, .type=IO_READ},
        {.addr=0x01e8, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_032F) {
    const struct CPU_State initial_cpu = {.pc=0xd256, .a=0x5e, .x=0xb7, .y=0x13, .sp=0x28, .status=0x8f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001f, .value=0x8c}, {.addr=0xd256, .value=0xeb}, {.addr=0xd257, .value=0x1f},
    };
    const struct CPU_State final_cpu = {.pc=0xd258, .a=0x5e, .x=0xb7, .y=0x8c, .sp=0x28, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x001f, .value=0x8c}, {.addr=0xd256, .value=0xeb}, {.addr=0xd257, .value=0x1f},
    };
    const struct BusEvent events[] = {
        {.addr=0xd256, .value=0xeb, .type=IO_READ},
        {.addr=0xd257, .value=0x1f, .type=IO_READ},
        {.addr=0x001f, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0330) {
    const struct CPU_State initial_cpu = {.pc=0x79c7, .a=0x3e, .x=0x24, .y=0x94, .sp=0xe3, .status=0xe1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0145, .value=0x48}, {.addr=0x79c7, .value=0xeb}, {.addr=0x79c8, .value=0x45},
    };
    const struct CPU_State final_cpu = {.pc=0x79c9, .a=0x3e, .x=0x24, .y=0x48, .sp=0xe3, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x0145, .value=0x48}, {.addr=0x79c7, .value=0xeb}, {.addr=0x79c8, .value=0x45},
    };
    const struct BusEvent events[] = {
        {.addr=0x79c7, .value=0xeb, .type=IO_READ},
        {.addr=0x79c8, .value=0x45, .type=IO_READ},
        {.addr=0x0145, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0331) {
    const struct CPU_State initial_cpu = {.pc=0x53df, .a=0x04, .x=0x54, .y=0x00, .sp=0xfe, .status=0xd0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0086, .value=0x42}, {.addr=0x53df, .value=0xeb}, {.addr=0x53e0, .value=0x86},
    };
    const struct CPU_State final_cpu = {.pc=0x53e1, .a=0x04, .x=0x54, .y=0x42, .sp=0xfe, .status=0x50};
    const struct RamEntry final_ram[] = {
        {.addr=0x0086, .value=0x42}, {.addr=0x53df, .value=0xeb}, {.addr=0x53e0, .value=0x86},
    };
    const struct BusEvent events[] = {
        {.addr=0x53df, .value=0xeb, .type=IO_READ},
        {.addr=0x53e0, .value=0x86, .type=IO_READ},
        {.addr=0x0086, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0332) {
    const struct CPU_State initial_cpu = {.pc=0xe5a7, .a=0x30, .x=0x41, .y=0xd9, .sp=0x4a, .status=0xf2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012f, .value=0x25}, {.addr=0xe5a7, .value=0xeb}, {.addr=0xe5a8, .value=0x2f},
    };
    const struct CPU_State final_cpu = {.pc=0xe5a9, .a=0x30, .x=0x41, .y=0x25, .sp=0x4a, .status=0x70};
    const struct RamEntry final_ram[] = {
        {.addr=0x012f, .value=0x25}, {.addr=0xe5a7, .value=0xeb}, {.addr=0xe5a8, .value=0x2f},
    };
    const struct BusEvent events[] = {
        {.addr=0xe5a7, .value=0xeb, .type=IO_READ},
        {.addr=0xe5a8, .value=0x2f, .type=IO_READ},
        {.addr=0x012f, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0333) {
    const struct CPU_State initial_cpu = {.pc=0x90ce, .a=0xe6, .x=0x68, .y=0x6c, .sp=0x30, .status=0x07};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d7, .value=0xde}, {.addr=0x90ce, .value=0xeb}, {.addr=0x90cf, .value=0xd7},
    };
    const struct CPU_State final_cpu = {.pc=0x90d0, .a=0xe6, .x=0x68, .y=0xde, .sp=0x30, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d7, .value=0xde}, {.addr=0x90ce, .value=0xeb}, {.addr=0x90cf, .value=0xd7},
    };
    const struct BusEvent events[] = {
        {.addr=0x90ce, .value=0xeb, .type=IO_READ},
        {.addr=0x90cf, .value=0xd7, .type=IO_READ},
        {.addr=0x00d7, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0334) {
    const struct CPU_State initial_cpu = {.pc=0x2b2b, .a=0xdd, .x=0x1f, .y=0xc2, .sp=0x18, .status=0xf0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ad, .value=0xd0}, {.addr=0x2b2b, .value=0xeb}, {.addr=0x2b2c, .value=0xad},
    };
    const struct CPU_State final_cpu = {.pc=0x2b2d, .a=0xdd, .x=0x1f, .y=0xd0, .sp=0x18, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ad, .value=0xd0}, {.addr=0x2b2b, .value=0xeb}, {.addr=0x2b2c, .value=0xad},
    };
    const struct BusEvent events[] = {
        {.addr=0x2b2b, .value=0xeb, .type=IO_READ},
        {.addr=0x2b2c, .value=0xad, .type=IO_READ},
        {.addr=0x01ad, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0335) {
    const struct CPU_State initial_cpu = {.pc=0x476f, .a=0xf8, .x=0x58, .y=0xaf, .sp=0x11, .status=0x7a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01da, .value=0x26}, {.addr=0x476f, .value=0xeb}, {.addr=0x4770, .value=0xda},
    };
    const struct CPU_State final_cpu = {.pc=0x4771, .a=0xf8, .x=0x58, .y=0x26, .sp=0x11, .status=0x78};
    const struct RamEntry final_ram[] = {
        {.addr=0x01da, .value=0x26}, {.addr=0x476f, .value=0xeb}, {.addr=0x4770, .value=0xda},
    };
    const struct BusEvent events[] = {
        {.addr=0x476f, .value=0xeb, .type=IO_READ},
        {.addr=0x4770, .value=0xda, .type=IO_READ},
        {.addr=0x01da, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0336) {
    const struct CPU_State initial_cpu = {.pc=0xd7ef, .a=0xd9, .x=0x54, .y=0x0b, .sp=0x7b, .status=0x99};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009b, .value=0x9d}, {.addr=0xd7ef, .value=0xeb}, {.addr=0xd7f0, .value=0x9b},
    };
    const struct CPU_State final_cpu = {.pc=0xd7f1, .a=0xd9, .x=0x54, .y=0x9d, .sp=0x7b, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x009b, .value=0x9d}, {.addr=0xd7ef, .value=0xeb}, {.addr=0xd7f0, .value=0x9b},
    };
    const struct BusEvent events[] = {
        {.addr=0xd7ef, .value=0xeb, .type=IO_READ},
        {.addr=0xd7f0, .value=0x9b, .type=IO_READ},
        {.addr=0x009b, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0337) {
    const struct CPU_State initial_cpu = {.pc=0xfb86, .a=0xf7, .x=0x2c, .y=0xb1, .sp=0x23, .status=0x1d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009a, .value=0x5f}, {.addr=0xfb86, .value=0xeb}, {.addr=0xfb87, .value=0x9a},
    };
    const struct CPU_State final_cpu = {.pc=0xfb88, .a=0xf7, .x=0x2c, .y=0x5f, .sp=0x23, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x009a, .value=0x5f}, {.addr=0xfb86, .value=0xeb}, {.addr=0xfb87, .value=0x9a},
    };
    const struct BusEvent events[] = {
        {.addr=0xfb86, .value=0xeb, .type=IO_READ},
        {.addr=0xfb87, .value=0x9a, .type=IO_READ},
        {.addr=0x009a, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0338) {
    const struct CPU_State initial_cpu = {.pc=0x22d3, .a=0x3b, .x=0xa8, .y=0x08, .sp=0x32, .status=0xba};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0109, .value=0xd7}, {.addr=0x22d3, .value=0xeb}, {.addr=0x22d4, .value=0x09},
    };
    const struct CPU_State final_cpu = {.pc=0x22d5, .a=0x3b, .x=0xa8, .y=0xd7, .sp=0x32, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0109, .value=0xd7}, {.addr=0x22d3, .value=0xeb}, {.addr=0x22d4, .value=0x09},
    };
    const struct BusEvent events[] = {
        {.addr=0x22d3, .value=0xeb, .type=IO_READ},
        {.addr=0x22d4, .value=0x09, .type=IO_READ},
        {.addr=0x0109, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0339) {
    const struct CPU_State initial_cpu = {.pc=0x1994, .a=0x11, .x=0x3b, .y=0x84, .sp=0xb8, .status=0xb8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0139, .value=0xde}, {.addr=0x1994, .value=0xeb}, {.addr=0x1995, .value=0x39},
    };
    const struct CPU_State final_cpu = {.pc=0x1996, .a=0x11, .x=0x3b, .y=0xde, .sp=0xb8, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0139, .value=0xde}, {.addr=0x1994, .value=0xeb}, {.addr=0x1995, .value=0x39},
    };
    const struct BusEvent events[] = {
        {.addr=0x1994, .value=0xeb, .type=IO_READ},
        {.addr=0x1995, .value=0x39, .type=IO_READ},
        {.addr=0x0139, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_033A) {
    const struct CPU_State initial_cpu = {.pc=0x901e, .a=0xaf, .x=0xcd, .y=0xac, .sp=0xa5, .status=0x9f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0034, .value=0x48}, {.addr=0x901e, .value=0xeb}, {.addr=0x901f, .value=0x34},
    };
    const struct CPU_State final_cpu = {.pc=0x9020, .a=0xaf, .x=0xcd, .y=0x48, .sp=0xa5, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0034, .value=0x48}, {.addr=0x901e, .value=0xeb}, {.addr=0x901f, .value=0x34},
    };
    const struct BusEvent events[] = {
        {.addr=0x901e, .value=0xeb, .type=IO_READ},
        {.addr=0x901f, .value=0x34, .type=IO_READ},
        {.addr=0x0034, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_033B) {
    const struct CPU_State initial_cpu = {.pc=0xc8d2, .a=0xe9, .x=0xba, .y=0x73, .sp=0x62, .status=0xa7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014b, .value=0xab}, {.addr=0xc8d2, .value=0xeb}, {.addr=0xc8d3, .value=0x4b},
    };
    const struct CPU_State final_cpu = {.pc=0xc8d4, .a=0xe9, .x=0xba, .y=0xab, .sp=0x62, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x014b, .value=0xab}, {.addr=0xc8d2, .value=0xeb}, {.addr=0xc8d3, .value=0x4b},
    };
    const struct BusEvent events[] = {
        {.addr=0xc8d2, .value=0xeb, .type=IO_READ},
        {.addr=0xc8d3, .value=0x4b, .type=IO_READ},
        {.addr=0x014b, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_033C) {
    const struct CPU_State initial_cpu = {.pc=0x0aa7, .a=0x03, .x=0xdf, .y=0x5a, .sp=0x08, .status=0x99};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00dd, .value=0x92}, {.addr=0x0aa7, .value=0xeb}, {.addr=0x0aa8, .value=0xdd},
    };
    const struct CPU_State final_cpu = {.pc=0x0aa9, .a=0x03, .x=0xdf, .y=0x92, .sp=0x08, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x00dd, .value=0x92}, {.addr=0x0aa7, .value=0xeb}, {.addr=0x0aa8, .value=0xdd},
    };
    const struct BusEvent events[] = {
        {.addr=0x0aa7, .value=0xeb, .type=IO_READ},
        {.addr=0x0aa8, .value=0xdd, .type=IO_READ},
        {.addr=0x00dd, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_033D) {
    const struct CPU_State initial_cpu = {.pc=0x30e3, .a=0x02, .x=0x67, .y=0xde, .sp=0xd2, .status=0xc1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008d, .value=0xc4}, {.addr=0x30e3, .value=0xeb}, {.addr=0x30e4, .value=0x8d},
    };
    const struct CPU_State final_cpu = {.pc=0x30e5, .a=0x02, .x=0x67, .y=0xc4, .sp=0xd2, .status=0xc1};
    const struct RamEntry final_ram[] = {
        {.addr=0x008d, .value=0xc4}, {.addr=0x30e3, .value=0xeb}, {.addr=0x30e4, .value=0x8d},
    };
    const struct BusEvent events[] = {
        {.addr=0x30e3, .value=0xeb, .type=IO_READ},
        {.addr=0x30e4, .value=0x8d, .type=IO_READ},
        {.addr=0x008d, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_033E) {
    const struct CPU_State initial_cpu = {.pc=0x0b99, .a=0xb8, .x=0xe0, .y=0x8e, .sp=0xd9, .status=0xa4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0190, .value=0xd4}, {.addr=0x0b99, .value=0xeb}, {.addr=0x0b9a, .value=0x90},
    };
    const struct CPU_State final_cpu = {.pc=0x0b9b, .a=0xb8, .x=0xe0, .y=0xd4, .sp=0xd9, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0190, .value=0xd4}, {.addr=0x0b99, .value=0xeb}, {.addr=0x0b9a, .value=0x90},
    };
    const struct BusEvent events[] = {
        {.addr=0x0b99, .value=0xeb, .type=IO_READ},
        {.addr=0x0b9a, .value=0x90, .type=IO_READ},
        {.addr=0x0190, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_033F) {
    const struct CPU_State initial_cpu = {.pc=0x249e, .a=0xad, .x=0x3b, .y=0xf1, .sp=0x86, .status=0x53};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a1, .value=0xbb}, {.addr=0x249e, .value=0xeb}, {.addr=0x249f, .value=0xa1},
    };
    const struct CPU_State final_cpu = {.pc=0x24a0, .a=0xad, .x=0x3b, .y=0xbb, .sp=0x86, .status=0xd1};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a1, .value=0xbb}, {.addr=0x249e, .value=0xeb}, {.addr=0x249f, .value=0xa1},
    };
    const struct BusEvent events[] = {
        {.addr=0x249e, .value=0xeb, .type=IO_READ},
        {.addr=0x249f, .value=0xa1, .type=IO_READ},
        {.addr=0x00a1, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0340) {
    const struct CPU_State initial_cpu = {.pc=0x2d0d, .a=0xd9, .x=0xa0, .y=0x8f, .sp=0xee, .status=0x60};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0162, .value=0xa8}, {.addr=0x2d0d, .value=0xeb}, {.addr=0x2d0e, .value=0x62},
    };
    const struct CPU_State final_cpu = {.pc=0x2d0f, .a=0xd9, .x=0xa0, .y=0xa8, .sp=0xee, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0162, .value=0xa8}, {.addr=0x2d0d, .value=0xeb}, {.addr=0x2d0e, .value=0x62},
    };
    const struct BusEvent events[] = {
        {.addr=0x2d0d, .value=0xeb, .type=IO_READ},
        {.addr=0x2d0e, .value=0x62, .type=IO_READ},
        {.addr=0x0162, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0341) {
    const struct CPU_State initial_cpu = {.pc=0xb99f, .a=0xc4, .x=0x7d, .y=0x1a, .sp=0xc2, .status=0x72};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013a, .value=0x42}, {.addr=0xb99f, .value=0xeb}, {.addr=0xb9a0, .value=0x3a},
    };
    const struct CPU_State final_cpu = {.pc=0xb9a1, .a=0xc4, .x=0x7d, .y=0x42, .sp=0xc2, .status=0x70};
    const struct RamEntry final_ram[] = {
        {.addr=0x013a, .value=0x42}, {.addr=0xb99f, .value=0xeb}, {.addr=0xb9a0, .value=0x3a},
    };
    const struct BusEvent events[] = {
        {.addr=0xb99f, .value=0xeb, .type=IO_READ},
        {.addr=0xb9a0, .value=0x3a, .type=IO_READ},
        {.addr=0x013a, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0342) {
    const struct CPU_State initial_cpu = {.pc=0x99c9, .a=0x30, .x=0xdc, .y=0x89, .sp=0x92, .status=0xf2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0186, .value=0xa6}, {.addr=0x99c9, .value=0xeb}, {.addr=0x99ca, .value=0x86},
    };
    const struct CPU_State final_cpu = {.pc=0x99cb, .a=0x30, .x=0xdc, .y=0xa6, .sp=0x92, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0186, .value=0xa6}, {.addr=0x99c9, .value=0xeb}, {.addr=0x99ca, .value=0x86},
    };
    const struct BusEvent events[] = {
        {.addr=0x99c9, .value=0xeb, .type=IO_READ},
        {.addr=0x99ca, .value=0x86, .type=IO_READ},
        {.addr=0x0186, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0343) {
    const struct CPU_State initial_cpu = {.pc=0x41c7, .a=0xbe, .x=0x10, .y=0xb9, .sp=0x1f, .status=0xa6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f2, .value=0xae}, {.addr=0x41c7, .value=0xeb}, {.addr=0x41c8, .value=0xf2},
    };
    const struct CPU_State final_cpu = {.pc=0x41c9, .a=0xbe, .x=0x10, .y=0xae, .sp=0x1f, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f2, .value=0xae}, {.addr=0x41c7, .value=0xeb}, {.addr=0x41c8, .value=0xf2},
    };
    const struct BusEvent events[] = {
        {.addr=0x41c7, .value=0xeb, .type=IO_READ},
        {.addr=0x41c8, .value=0xf2, .type=IO_READ},
        {.addr=0x01f2, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0344) {
    const struct CPU_State initial_cpu = {.pc=0x174f, .a=0xc2, .x=0xac, .y=0x2b, .sp=0x33, .status=0xb6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a1, .value=0x9d}, {.addr=0x174f, .value=0xeb}, {.addr=0x1750, .value=0xa1},
    };
    const struct CPU_State final_cpu = {.pc=0x1751, .a=0xc2, .x=0xac, .y=0x9d, .sp=0x33, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a1, .value=0x9d}, {.addr=0x174f, .value=0xeb}, {.addr=0x1750, .value=0xa1},
    };
    const struct BusEvent events[] = {
        {.addr=0x174f, .value=0xeb, .type=IO_READ},
        {.addr=0x1750, .value=0xa1, .type=IO_READ},
        {.addr=0x01a1, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0345) {
    const struct CPU_State initial_cpu = {.pc=0x8645, .a=0xe1, .x=0x4c, .y=0x96, .sp=0x59, .status=0x4b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c0, .value=0x17}, {.addr=0x8645, .value=0xeb}, {.addr=0x8646, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0x8647, .a=0xe1, .x=0x4c, .y=0x17, .sp=0x59, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c0, .value=0x17}, {.addr=0x8645, .value=0xeb}, {.addr=0x8646, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0x8645, .value=0xeb, .type=IO_READ},
        {.addr=0x8646, .value=0xc0, .type=IO_READ},
        {.addr=0x00c0, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0346) {
    const struct CPU_State initial_cpu = {.pc=0x9e71, .a=0x4e, .x=0x9c, .y=0x2e, .sp=0x68, .status=0xdb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0039, .value=0x13}, {.addr=0x9e71, .value=0xeb}, {.addr=0x9e72, .value=0x39},
    };
    const struct CPU_State final_cpu = {.pc=0x9e73, .a=0x4e, .x=0x9c, .y=0x13, .sp=0x68, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x0039, .value=0x13}, {.addr=0x9e71, .value=0xeb}, {.addr=0x9e72, .value=0x39},
    };
    const struct BusEvent events[] = {
        {.addr=0x9e71, .value=0xeb, .type=IO_READ},
        {.addr=0x9e72, .value=0x39, .type=IO_READ},
        {.addr=0x0039, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0347) {
    const struct CPU_State initial_cpu = {.pc=0xa8b1, .a=0x1a, .x=0xac, .y=0x5e, .sp=0xbf, .status=0x6a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01de, .value=0x83}, {.addr=0xa8b1, .value=0xeb}, {.addr=0xa8b2, .value=0xde},
    };
    const struct CPU_State final_cpu = {.pc=0xa8b3, .a=0x1a, .x=0xac, .y=0x83, .sp=0xbf, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01de, .value=0x83}, {.addr=0xa8b1, .value=0xeb}, {.addr=0xa8b2, .value=0xde},
    };
    const struct BusEvent events[] = {
        {.addr=0xa8b1, .value=0xeb, .type=IO_READ},
        {.addr=0xa8b2, .value=0xde, .type=IO_READ},
        {.addr=0x01de, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0348) {
    const struct CPU_State initial_cpu = {.pc=0x6300, .a=0xf3, .x=0xc4, .y=0x52, .sp=0x5b, .status=0x22};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a4, .value=0xfc}, {.addr=0x6300, .value=0xeb}, {.addr=0x6301, .value=0xa4},
    };
    const struct CPU_State final_cpu = {.pc=0x6302, .a=0xf3, .x=0xc4, .y=0xfc, .sp=0x5b, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a4, .value=0xfc}, {.addr=0x6300, .value=0xeb}, {.addr=0x6301, .value=0xa4},
    };
    const struct BusEvent events[] = {
        {.addr=0x6300, .value=0xeb, .type=IO_READ},
        {.addr=0x6301, .value=0xa4, .type=IO_READ},
        {.addr=0x01a4, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0349) {
    const struct CPU_State initial_cpu = {.pc=0x7193, .a=0xe6, .x=0x42, .y=0x7f, .sp=0xd0, .status=0x5e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0015, .value=0xff}, {.addr=0x7193, .value=0xeb}, {.addr=0x7194, .value=0x15},
    };
    const struct CPU_State final_cpu = {.pc=0x7195, .a=0xe6, .x=0x42, .y=0xff, .sp=0xd0, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0015, .value=0xff}, {.addr=0x7193, .value=0xeb}, {.addr=0x7194, .value=0x15},
    };
    const struct BusEvent events[] = {
        {.addr=0x7193, .value=0xeb, .type=IO_READ},
        {.addr=0x7194, .value=0x15, .type=IO_READ},
        {.addr=0x0015, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_034A) {
    const struct CPU_State initial_cpu = {.pc=0x8f3e, .a=0x34, .x=0xd9, .y=0x9a, .sp=0x87, .status=0x8e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e5, .value=0x9e}, {.addr=0x8f3e, .value=0xeb}, {.addr=0x8f3f, .value=0xe5},
    };
    const struct CPU_State final_cpu = {.pc=0x8f40, .a=0x34, .x=0xd9, .y=0x9e, .sp=0x87, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e5, .value=0x9e}, {.addr=0x8f3e, .value=0xeb}, {.addr=0x8f3f, .value=0xe5},
    };
    const struct BusEvent events[] = {
        {.addr=0x8f3e, .value=0xeb, .type=IO_READ},
        {.addr=0x8f3f, .value=0xe5, .type=IO_READ},
        {.addr=0x00e5, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_034B) {
    const struct CPU_State initial_cpu = {.pc=0xacf9, .a=0x2c, .x=0x44, .y=0x51, .sp=0x0e, .status=0xf3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0122, .value=0xa5}, {.addr=0xacf9, .value=0xeb}, {.addr=0xacfa, .value=0x22},
    };
    const struct CPU_State final_cpu = {.pc=0xacfb, .a=0x2c, .x=0x44, .y=0xa5, .sp=0x0e, .status=0xf1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0122, .value=0xa5}, {.addr=0xacf9, .value=0xeb}, {.addr=0xacfa, .value=0x22},
    };
    const struct BusEvent events[] = {
        {.addr=0xacf9, .value=0xeb, .type=IO_READ},
        {.addr=0xacfa, .value=0x22, .type=IO_READ},
        {.addr=0x0122, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_034C) {
    const struct CPU_State initial_cpu = {.pc=0xfdd8, .a=0xe1, .x=0xc0, .y=0x0a, .sp=0xd6, .status=0x7d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017b, .value=0xd4}, {.addr=0xfdd8, .value=0xeb}, {.addr=0xfdd9, .value=0x7b},
    };
    const struct CPU_State final_cpu = {.pc=0xfdda, .a=0xe1, .x=0xc0, .y=0xd4, .sp=0xd6, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x017b, .value=0xd4}, {.addr=0xfdd8, .value=0xeb}, {.addr=0xfdd9, .value=0x7b},
    };
    const struct BusEvent events[] = {
        {.addr=0xfdd8, .value=0xeb, .type=IO_READ},
        {.addr=0xfdd9, .value=0x7b, .type=IO_READ},
        {.addr=0x017b, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_034D) {
    const struct CPU_State initial_cpu = {.pc=0x4af5, .a=0x27, .x=0x1e, .y=0x0a, .sp=0x2b, .status=0xad};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ff, .value=0xa6}, {.addr=0x4af5, .value=0xeb}, {.addr=0x4af6, .value=0xff},
    };
    const struct CPU_State final_cpu = {.pc=0x4af7, .a=0x27, .x=0x1e, .y=0xa6, .sp=0x2b, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ff, .value=0xa6}, {.addr=0x4af5, .value=0xeb}, {.addr=0x4af6, .value=0xff},
    };
    const struct BusEvent events[] = {
        {.addr=0x4af5, .value=0xeb, .type=IO_READ},
        {.addr=0x4af6, .value=0xff, .type=IO_READ},
        {.addr=0x01ff, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_034E) {
    const struct CPU_State initial_cpu = {.pc=0x1d98, .a=0x04, .x=0xd0, .y=0xec, .sp=0x42, .status=0x89};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0090, .value=0x2f}, {.addr=0x1d98, .value=0xeb}, {.addr=0x1d99, .value=0x90},
    };
    const struct CPU_State final_cpu = {.pc=0x1d9a, .a=0x04, .x=0xd0, .y=0x2f, .sp=0x42, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x0090, .value=0x2f}, {.addr=0x1d98, .value=0xeb}, {.addr=0x1d99, .value=0x90},
    };
    const struct BusEvent events[] = {
        {.addr=0x1d98, .value=0xeb, .type=IO_READ},
        {.addr=0x1d99, .value=0x90, .type=IO_READ},
        {.addr=0x0090, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_034F) {
    const struct CPU_State initial_cpu = {.pc=0x4161, .a=0xea, .x=0xd9, .y=0x4d, .sp=0x3d, .status=0xb6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ac, .value=0x37}, {.addr=0x4161, .value=0xeb}, {.addr=0x4162, .value=0xac},
    };
    const struct CPU_State final_cpu = {.pc=0x4163, .a=0xea, .x=0xd9, .y=0x37, .sp=0x3d, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ac, .value=0x37}, {.addr=0x4161, .value=0xeb}, {.addr=0x4162, .value=0xac},
    };
    const struct BusEvent events[] = {
        {.addr=0x4161, .value=0xeb, .type=IO_READ},
        {.addr=0x4162, .value=0xac, .type=IO_READ},
        {.addr=0x01ac, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0350) {
    const struct CPU_State initial_cpu = {.pc=0x28af, .a=0xb8, .x=0x75, .y=0x3c, .sp=0x97, .status=0x6d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0175, .value=0xe9}, {.addr=0x28af, .value=0xeb}, {.addr=0x28b0, .value=0x75},
    };
    const struct CPU_State final_cpu = {.pc=0x28b1, .a=0xb8, .x=0x75, .y=0xe9, .sp=0x97, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x0175, .value=0xe9}, {.addr=0x28af, .value=0xeb}, {.addr=0x28b0, .value=0x75},
    };
    const struct BusEvent events[] = {
        {.addr=0x28af, .value=0xeb, .type=IO_READ},
        {.addr=0x28b0, .value=0x75, .type=IO_READ},
        {.addr=0x0175, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0351) {
    const struct CPU_State initial_cpu = {.pc=0xb77f, .a=0xf7, .x=0x33, .y=0x4d, .sp=0xe9, .status=0x19};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008f, .value=0x02}, {.addr=0xb77f, .value=0xeb}, {.addr=0xb780, .value=0x8f},
    };
    const struct CPU_State final_cpu = {.pc=0xb781, .a=0xf7, .x=0x33, .y=0x02, .sp=0xe9, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x008f, .value=0x02}, {.addr=0xb77f, .value=0xeb}, {.addr=0xb780, .value=0x8f},
    };
    const struct BusEvent events[] = {
        {.addr=0xb77f, .value=0xeb, .type=IO_READ},
        {.addr=0xb780, .value=0x8f, .type=IO_READ},
        {.addr=0x008f, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0352) {
    const struct CPU_State initial_cpu = {.pc=0x7f22, .a=0x32, .x=0xb6, .y=0xbf, .sp=0xfb, .status=0x96};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008b, .value=0x45}, {.addr=0x7f22, .value=0xeb}, {.addr=0x7f23, .value=0x8b},
    };
    const struct CPU_State final_cpu = {.pc=0x7f24, .a=0x32, .x=0xb6, .y=0x45, .sp=0xfb, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x008b, .value=0x45}, {.addr=0x7f22, .value=0xeb}, {.addr=0x7f23, .value=0x8b},
    };
    const struct BusEvent events[] = {
        {.addr=0x7f22, .value=0xeb, .type=IO_READ},
        {.addr=0x7f23, .value=0x8b, .type=IO_READ},
        {.addr=0x008b, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0353) {
    const struct CPU_State initial_cpu = {.pc=0x6bd7, .a=0x8e, .x=0x05, .y=0x60, .sp=0x66, .status=0xf7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e7, .value=0x02}, {.addr=0x6bd7, .value=0xeb}, {.addr=0x6bd8, .value=0xe7},
    };
    const struct CPU_State final_cpu = {.pc=0x6bd9, .a=0x8e, .x=0x05, .y=0x02, .sp=0x66, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e7, .value=0x02}, {.addr=0x6bd7, .value=0xeb}, {.addr=0x6bd8, .value=0xe7},
    };
    const struct BusEvent events[] = {
        {.addr=0x6bd7, .value=0xeb, .type=IO_READ},
        {.addr=0x6bd8, .value=0xe7, .type=IO_READ},
        {.addr=0x01e7, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0355) {
    const struct CPU_State initial_cpu = {.pc=0x652b, .a=0x09, .x=0x7e, .y=0x90, .sp=0x42, .status=0x2a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ae, .value=0xeb}, {.addr=0x652b, .value=0xeb}, {.addr=0x652c, .value=0xae},
    };
    const struct CPU_State final_cpu = {.pc=0x652d, .a=0x09, .x=0x7e, .y=0xeb, .sp=0x42, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ae, .value=0xeb}, {.addr=0x652b, .value=0xeb}, {.addr=0x652c, .value=0xae},
    };
    const struct BusEvent events[] = {
        {.addr=0x652b, .value=0xeb, .type=IO_READ},
        {.addr=0x652c, .value=0xae, .type=IO_READ},
        {.addr=0x01ae, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0356) {
    const struct CPU_State initial_cpu = {.pc=0xa9ff, .a=0xef, .x=0x9b, .y=0x97, .sp=0xf5, .status=0xd1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001e, .value=0x58}, {.addr=0xa9ff, .value=0xeb}, {.addr=0xaa00, .value=0x1e},
    };
    const struct CPU_State final_cpu = {.pc=0xaa01, .a=0xef, .x=0x9b, .y=0x58, .sp=0xf5, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x001e, .value=0x58}, {.addr=0xa9ff, .value=0xeb}, {.addr=0xaa00, .value=0x1e},
    };
    const struct BusEvent events[] = {
        {.addr=0xa9ff, .value=0xeb, .type=IO_READ},
        {.addr=0xaa00, .value=0x1e, .type=IO_READ},
        {.addr=0x001e, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0358) {
    const struct CPU_State initial_cpu = {.pc=0x1e15, .a=0xef, .x=0x62, .y=0x4f, .sp=0x42, .status=0x36};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0185, .value=0x2d}, {.addr=0x1e15, .value=0xeb}, {.addr=0x1e16, .value=0x85},
    };
    const struct CPU_State final_cpu = {.pc=0x1e17, .a=0xef, .x=0x62, .y=0x2d, .sp=0x42, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x0185, .value=0x2d}, {.addr=0x1e15, .value=0xeb}, {.addr=0x1e16, .value=0x85},
    };
    const struct BusEvent events[] = {
        {.addr=0x1e15, .value=0xeb, .type=IO_READ},
        {.addr=0x1e16, .value=0x85, .type=IO_READ},
        {.addr=0x0185, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0359) {
    const struct CPU_State initial_cpu = {.pc=0x9e5c, .a=0x6a, .x=0xd3, .y=0x65, .sp=0xba, .status=0x82};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0060, .value=0x0d}, {.addr=0x9e5c, .value=0xeb}, {.addr=0x9e5d, .value=0x60},
    };
    const struct CPU_State final_cpu = {.pc=0x9e5e, .a=0x6a, .x=0xd3, .y=0x0d, .sp=0xba, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x0060, .value=0x0d}, {.addr=0x9e5c, .value=0xeb}, {.addr=0x9e5d, .value=0x60},
    };
    const struct BusEvent events[] = {
        {.addr=0x9e5c, .value=0xeb, .type=IO_READ},
        {.addr=0x9e5d, .value=0x60, .type=IO_READ},
        {.addr=0x0060, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_035A) {
    const struct CPU_State initial_cpu = {.pc=0x5674, .a=0x29, .x=0x03, .y=0x42, .sp=0x69, .status=0xe0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0114, .value=0xb1}, {.addr=0x5674, .value=0xeb}, {.addr=0x5675, .value=0x14},
    };
    const struct CPU_State final_cpu = {.pc=0x5676, .a=0x29, .x=0x03, .y=0xb1, .sp=0x69, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0114, .value=0xb1}, {.addr=0x5674, .value=0xeb}, {.addr=0x5675, .value=0x14},
    };
    const struct BusEvent events[] = {
        {.addr=0x5674, .value=0xeb, .type=IO_READ},
        {.addr=0x5675, .value=0x14, .type=IO_READ},
        {.addr=0x0114, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_035C) {
    const struct CPU_State initial_cpu = {.pc=0x8bd3, .a=0xed, .x=0xaf, .y=0x34, .sp=0xad, .status=0x9c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c9, .value=0xb6}, {.addr=0x8bd3, .value=0xeb}, {.addr=0x8bd4, .value=0xc9},
    };
    const struct CPU_State final_cpu = {.pc=0x8bd5, .a=0xed, .x=0xaf, .y=0xb6, .sp=0xad, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c9, .value=0xb6}, {.addr=0x8bd3, .value=0xeb}, {.addr=0x8bd4, .value=0xc9},
    };
    const struct BusEvent events[] = {
        {.addr=0x8bd3, .value=0xeb, .type=IO_READ},
        {.addr=0x8bd4, .value=0xc9, .type=IO_READ},
        {.addr=0x00c9, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_035D) {
    const struct CPU_State initial_cpu = {.pc=0xc6d7, .a=0xc7, .x=0xdf, .y=0xc4, .sp=0x0a, .status=0xef};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015d, .value=0xa5}, {.addr=0xc6d7, .value=0xeb}, {.addr=0xc6d8, .value=0x5d},
    };
    const struct CPU_State final_cpu = {.pc=0xc6d9, .a=0xc7, .x=0xdf, .y=0xa5, .sp=0x0a, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x015d, .value=0xa5}, {.addr=0xc6d7, .value=0xeb}, {.addr=0xc6d8, .value=0x5d},
    };
    const struct BusEvent events[] = {
        {.addr=0xc6d7, .value=0xeb, .type=IO_READ},
        {.addr=0xc6d8, .value=0x5d, .type=IO_READ},
        {.addr=0x015d, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_035E) {
    const struct CPU_State initial_cpu = {.pc=0xa659, .a=0xbe, .x=0xfe, .y=0x19, .sp=0x9c, .status=0x39};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bd, .value=0xf3}, {.addr=0xa659, .value=0xeb}, {.addr=0xa65a, .value=0xbd},
    };
    const struct CPU_State final_cpu = {.pc=0xa65b, .a=0xbe, .x=0xfe, .y=0xf3, .sp=0x9c, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bd, .value=0xf3}, {.addr=0xa659, .value=0xeb}, {.addr=0xa65a, .value=0xbd},
    };
    const struct BusEvent events[] = {
        {.addr=0xa659, .value=0xeb, .type=IO_READ},
        {.addr=0xa65a, .value=0xbd, .type=IO_READ},
        {.addr=0x01bd, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_035F) {
    const struct CPU_State initial_cpu = {.pc=0xa139, .a=0x75, .x=0x33, .y=0xba, .sp=0x5b, .status=0xa0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e5, .value=0x53}, {.addr=0xa139, .value=0xeb}, {.addr=0xa13a, .value=0xe5},
    };
    const struct CPU_State final_cpu = {.pc=0xa13b, .a=0x75, .x=0x33, .y=0x53, .sp=0x5b, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e5, .value=0x53}, {.addr=0xa139, .value=0xeb}, {.addr=0xa13a, .value=0xe5},
    };
    const struct BusEvent events[] = {
        {.addr=0xa139, .value=0xeb, .type=IO_READ},
        {.addr=0xa13a, .value=0xe5, .type=IO_READ},
        {.addr=0x01e5, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0360) {
    const struct CPU_State initial_cpu = {.pc=0x92b2, .a=0xf6, .x=0xf0, .y=0x67, .sp=0x2a, .status=0xc4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006b, .value=0xcd}, {.addr=0x92b2, .value=0xeb}, {.addr=0x92b3, .value=0x6b},
    };
    const struct CPU_State final_cpu = {.pc=0x92b4, .a=0xf6, .x=0xf0, .y=0xcd, .sp=0x2a, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x006b, .value=0xcd}, {.addr=0x92b2, .value=0xeb}, {.addr=0x92b3, .value=0x6b},
    };
    const struct BusEvent events[] = {
        {.addr=0x92b2, .value=0xeb, .type=IO_READ},
        {.addr=0x92b3, .value=0x6b, .type=IO_READ},
        {.addr=0x006b, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0361) {
    const struct CPU_State initial_cpu = {.pc=0xd4e4, .a=0xc7, .x=0x75, .y=0x15, .sp=0x7d, .status=0x8c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006d, .value=0x0f}, {.addr=0xd4e4, .value=0xeb}, {.addr=0xd4e5, .value=0x6d},
    };
    const struct CPU_State final_cpu = {.pc=0xd4e6, .a=0xc7, .x=0x75, .y=0x0f, .sp=0x7d, .status=0x0c};
    const struct RamEntry final_ram[] = {
        {.addr=0x006d, .value=0x0f}, {.addr=0xd4e4, .value=0xeb}, {.addr=0xd4e5, .value=0x6d},
    };
    const struct BusEvent events[] = {
        {.addr=0xd4e4, .value=0xeb, .type=IO_READ},
        {.addr=0xd4e5, .value=0x6d, .type=IO_READ},
        {.addr=0x006d, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0362) {
    const struct CPU_State initial_cpu = {.pc=0x6d34, .a=0x48, .x=0x34, .y=0xc6, .sp=0xd8, .status=0x1f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003a, .value=0x59}, {.addr=0x6d34, .value=0xeb}, {.addr=0x6d35, .value=0x3a},
    };
    const struct CPU_State final_cpu = {.pc=0x6d36, .a=0x48, .x=0x34, .y=0x59, .sp=0xd8, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x003a, .value=0x59}, {.addr=0x6d34, .value=0xeb}, {.addr=0x6d35, .value=0x3a},
    };
    const struct BusEvent events[] = {
        {.addr=0x6d34, .value=0xeb, .type=IO_READ},
        {.addr=0x6d35, .value=0x3a, .type=IO_READ},
        {.addr=0x003a, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0363) {
    const struct CPU_State initial_cpu = {.pc=0x85ce, .a=0x30, .x=0xa6, .y=0x06, .sp=0xf6, .status=0xe5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a3, .value=0x0c}, {.addr=0x85ce, .value=0xeb}, {.addr=0x85cf, .value=0xa3},
    };
    const struct CPU_State final_cpu = {.pc=0x85d0, .a=0x30, .x=0xa6, .y=0x0c, .sp=0xf6, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a3, .value=0x0c}, {.addr=0x85ce, .value=0xeb}, {.addr=0x85cf, .value=0xa3},
    };
    const struct BusEvent events[] = {
        {.addr=0x85ce, .value=0xeb, .type=IO_READ},
        {.addr=0x85cf, .value=0xa3, .type=IO_READ},
        {.addr=0x01a3, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0364) {
    const struct CPU_State initial_cpu = {.pc=0xde9d, .a=0x1b, .x=0xeb, .y=0xcb, .sp=0x67, .status=0xeb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b9, .value=0xad}, {.addr=0xde9d, .value=0xeb}, {.addr=0xde9e, .value=0xb9},
    };
    const struct CPU_State final_cpu = {.pc=0xde9f, .a=0x1b, .x=0xeb, .y=0xad, .sp=0x67, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b9, .value=0xad}, {.addr=0xde9d, .value=0xeb}, {.addr=0xde9e, .value=0xb9},
    };
    const struct BusEvent events[] = {
        {.addr=0xde9d, .value=0xeb, .type=IO_READ},
        {.addr=0xde9e, .value=0xb9, .type=IO_READ},
        {.addr=0x01b9, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0365) {
    const struct CPU_State initial_cpu = {.pc=0x423f, .a=0xb1, .x=0xd9, .y=0xb3, .sp=0xab, .status=0xd9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0072, .value=0xc1}, {.addr=0x423f, .value=0xeb}, {.addr=0x4240, .value=0x72},
    };
    const struct CPU_State final_cpu = {.pc=0x4241, .a=0xb1, .x=0xd9, .y=0xc1, .sp=0xab, .status=0xd9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0072, .value=0xc1}, {.addr=0x423f, .value=0xeb}, {.addr=0x4240, .value=0x72},
    };
    const struct BusEvent events[] = {
        {.addr=0x423f, .value=0xeb, .type=IO_READ},
        {.addr=0x4240, .value=0x72, .type=IO_READ},
        {.addr=0x0072, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0366) {
    const struct CPU_State initial_cpu = {.pc=0xac29, .a=0xc2, .x=0x37, .y=0x53, .sp=0x18, .status=0x11};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0049, .value=0x60}, {.addr=0xac29, .value=0xeb}, {.addr=0xac2a, .value=0x49},
    };
    const struct CPU_State final_cpu = {.pc=0xac2b, .a=0xc2, .x=0x37, .y=0x60, .sp=0x18, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x0049, .value=0x60}, {.addr=0xac29, .value=0xeb}, {.addr=0xac2a, .value=0x49},
    };
    const struct BusEvent events[] = {
        {.addr=0xac29, .value=0xeb, .type=IO_READ},
        {.addr=0xac2a, .value=0x49, .type=IO_READ},
        {.addr=0x0049, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0367) {
    const struct CPU_State initial_cpu = {.pc=0x5bfe, .a=0x21, .x=0x51, .y=0x04, .sp=0x7c, .status=0x21};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012c, .value=0x42}, {.addr=0x5bfe, .value=0xeb}, {.addr=0x5bff, .value=0x2c},
    };
    const struct CPU_State final_cpu = {.pc=0x5c00, .a=0x21, .x=0x51, .y=0x42, .sp=0x7c, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x012c, .value=0x42}, {.addr=0x5bfe, .value=0xeb}, {.addr=0x5bff, .value=0x2c},
    };
    const struct BusEvent events[] = {
        {.addr=0x5bfe, .value=0xeb, .type=IO_READ},
        {.addr=0x5bff, .value=0x2c, .type=IO_READ},
        {.addr=0x012c, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0368) {
    const struct CPU_State initial_cpu = {.pc=0xb536, .a=0x5f, .x=0xe2, .y=0xea, .sp=0xde, .status=0x01};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b5, .value=0x91}, {.addr=0xb536, .value=0xeb}, {.addr=0xb537, .value=0xb5},
    };
    const struct CPU_State final_cpu = {.pc=0xb538, .a=0x5f, .x=0xe2, .y=0x91, .sp=0xde, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b5, .value=0x91}, {.addr=0xb536, .value=0xeb}, {.addr=0xb537, .value=0xb5},
    };
    const struct BusEvent events[] = {
        {.addr=0xb536, .value=0xeb, .type=IO_READ},
        {.addr=0xb537, .value=0xb5, .type=IO_READ},
        {.addr=0x00b5, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0369) {
    const struct CPU_State initial_cpu = {.pc=0x4323, .a=0xe5, .x=0x47, .y=0xd1, .sp=0x6e, .status=0x5d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005d, .value=0x04}, {.addr=0x4323, .value=0xeb}, {.addr=0x4324, .value=0x5d},
    };
    const struct CPU_State final_cpu = {.pc=0x4325, .a=0xe5, .x=0x47, .y=0x04, .sp=0x6e, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x005d, .value=0x04}, {.addr=0x4323, .value=0xeb}, {.addr=0x4324, .value=0x5d},
    };
    const struct BusEvent events[] = {
        {.addr=0x4323, .value=0xeb, .type=IO_READ},
        {.addr=0x4324, .value=0x5d, .type=IO_READ},
        {.addr=0x005d, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_036A) {
    const struct CPU_State initial_cpu = {.pc=0x75cb, .a=0x91, .x=0x31, .y=0x21, .sp=0x8e, .status=0xbb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b1, .value=0x55}, {.addr=0x75cb, .value=0xeb}, {.addr=0x75cc, .value=0xb1},
    };
    const struct CPU_State final_cpu = {.pc=0x75cd, .a=0x91, .x=0x31, .y=0x55, .sp=0x8e, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b1, .value=0x55}, {.addr=0x75cb, .value=0xeb}, {.addr=0x75cc, .value=0xb1},
    };
    const struct BusEvent events[] = {
        {.addr=0x75cb, .value=0xeb, .type=IO_READ},
        {.addr=0x75cc, .value=0xb1, .type=IO_READ},
        {.addr=0x01b1, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_036B) {
    const struct CPU_State initial_cpu = {.pc=0x7d64, .a=0xb5, .x=0xf8, .y=0x80, .sp=0xd1, .status=0x91};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0002, .value=0x5f}, {.addr=0x7d64, .value=0xeb}, {.addr=0x7d65, .value=0x02},
    };
    const struct CPU_State final_cpu = {.pc=0x7d66, .a=0xb5, .x=0xf8, .y=0x5f, .sp=0xd1, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x0002, .value=0x5f}, {.addr=0x7d64, .value=0xeb}, {.addr=0x7d65, .value=0x02},
    };
    const struct BusEvent events[] = {
        {.addr=0x7d64, .value=0xeb, .type=IO_READ},
        {.addr=0x7d65, .value=0x02, .type=IO_READ},
        {.addr=0x0002, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_036C) {
    const struct CPU_State initial_cpu = {.pc=0x1322, .a=0x76, .x=0x24, .y=0x9d, .sp=0xa9, .status=0x80};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ed, .value=0x70}, {.addr=0x1322, .value=0xeb}, {.addr=0x1323, .value=0xed},
    };
    const struct CPU_State final_cpu = {.pc=0x1324, .a=0x76, .x=0x24, .y=0x70, .sp=0xa9, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ed, .value=0x70}, {.addr=0x1322, .value=0xeb}, {.addr=0x1323, .value=0xed},
    };
    const struct BusEvent events[] = {
        {.addr=0x1322, .value=0xeb, .type=IO_READ},
        {.addr=0x1323, .value=0xed, .type=IO_READ},
        {.addr=0x00ed, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_036D) {
    const struct CPU_State initial_cpu = {.pc=0x3e0f, .a=0x64, .x=0x1f, .y=0x62, .sp=0x1e, .status=0x7f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a4, .value=0x7f}, {.addr=0x3e0f, .value=0xeb}, {.addr=0x3e10, .value=0xa4},
    };
    const struct CPU_State final_cpu = {.pc=0x3e11, .a=0x64, .x=0x1f, .y=0x7f, .sp=0x1e, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a4, .value=0x7f}, {.addr=0x3e0f, .value=0xeb}, {.addr=0x3e10, .value=0xa4},
    };
    const struct BusEvent events[] = {
        {.addr=0x3e0f, .value=0xeb, .type=IO_READ},
        {.addr=0x3e10, .value=0xa4, .type=IO_READ},
        {.addr=0x01a4, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_036E) {
    const struct CPU_State initial_cpu = {.pc=0x3e05, .a=0x6d, .x=0xb7, .y=0x26, .sp=0xd1, .status=0xff};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0140, .value=0xe9}, {.addr=0x3e05, .value=0xeb}, {.addr=0x3e06, .value=0x40},
    };
    const struct CPU_State final_cpu = {.pc=0x3e07, .a=0x6d, .x=0xb7, .y=0xe9, .sp=0xd1, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0140, .value=0xe9}, {.addr=0x3e05, .value=0xeb}, {.addr=0x3e06, .value=0x40},
    };
    const struct BusEvent events[] = {
        {.addr=0x3e05, .value=0xeb, .type=IO_READ},
        {.addr=0x3e06, .value=0x40, .type=IO_READ},
        {.addr=0x0140, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0370) {
    const struct CPU_State initial_cpu = {.pc=0x9d10, .a=0x0a, .x=0x6c, .y=0x04, .sp=0x2c, .status=0x32};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c0, .value=0x37}, {.addr=0x9d10, .value=0xeb}, {.addr=0x9d11, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0x9d12, .a=0x0a, .x=0x6c, .y=0x37, .sp=0x2c, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c0, .value=0x37}, {.addr=0x9d10, .value=0xeb}, {.addr=0x9d11, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0x9d10, .value=0xeb, .type=IO_READ},
        {.addr=0x9d11, .value=0xc0, .type=IO_READ},
        {.addr=0x01c0, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0371) {
    const struct CPU_State initial_cpu = {.pc=0xf0fa, .a=0x08, .x=0x0a, .y=0x2c, .sp=0x12, .status=0x43};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004f, .value=0xe5}, {.addr=0xf0fa, .value=0xeb}, {.addr=0xf0fb, .value=0x4f},
    };
    const struct CPU_State final_cpu = {.pc=0xf0fc, .a=0x08, .x=0x0a, .y=0xe5, .sp=0x12, .status=0xc1};
    const struct RamEntry final_ram[] = {
        {.addr=0x004f, .value=0xe5}, {.addr=0xf0fa, .value=0xeb}, {.addr=0xf0fb, .value=0x4f},
    };
    const struct BusEvent events[] = {
        {.addr=0xf0fa, .value=0xeb, .type=IO_READ},
        {.addr=0xf0fb, .value=0x4f, .type=IO_READ},
        {.addr=0x004f, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0372) {
    const struct CPU_State initial_cpu = {.pc=0xe3b1, .a=0x0f, .x=0x94, .y=0xdd, .sp=0x5f, .status=0x12};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00be, .value=0xf5}, {.addr=0xe3b1, .value=0xeb}, {.addr=0xe3b2, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0xe3b3, .a=0x0f, .x=0x94, .y=0xf5, .sp=0x5f, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x00be, .value=0xf5}, {.addr=0xe3b1, .value=0xeb}, {.addr=0xe3b2, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0xe3b1, .value=0xeb, .type=IO_READ},
        {.addr=0xe3b2, .value=0xbe, .type=IO_READ},
        {.addr=0x00be, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0373) {
    const struct CPU_State initial_cpu = {.pc=0x1158, .a=0x77, .x=0x1b, .y=0x15, .sp=0x4a, .status=0x70};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0182, .value=0x9c}, {.addr=0x1158, .value=0xeb}, {.addr=0x1159, .value=0x82},
    };
    const struct CPU_State final_cpu = {.pc=0x115a, .a=0x77, .x=0x1b, .y=0x9c, .sp=0x4a, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0182, .value=0x9c}, {.addr=0x1158, .value=0xeb}, {.addr=0x1159, .value=0x82},
    };
    const struct BusEvent events[] = {
        {.addr=0x1158, .value=0xeb, .type=IO_READ},
        {.addr=0x1159, .value=0x82, .type=IO_READ},
        {.addr=0x0182, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0374) {
    const struct CPU_State initial_cpu = {.pc=0xa296, .a=0xd0, .x=0x5b, .y=0xcb, .sp=0x74, .status=0x49};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0087, .value=0xa3}, {.addr=0xa296, .value=0xeb}, {.addr=0xa297, .value=0x87},
    };
    const struct CPU_State final_cpu = {.pc=0xa298, .a=0xd0, .x=0x5b, .y=0xa3, .sp=0x74, .status=0xc9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0087, .value=0xa3}, {.addr=0xa296, .value=0xeb}, {.addr=0xa297, .value=0x87},
    };
    const struct BusEvent events[] = {
        {.addr=0xa296, .value=0xeb, .type=IO_READ},
        {.addr=0xa297, .value=0x87, .type=IO_READ},
        {.addr=0x0087, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0375) {
    const struct CPU_State initial_cpu = {.pc=0x45ff, .a=0xd2, .x=0x49, .y=0x4a, .sp=0xae, .status=0x26};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011b, .value=0x8f}, {.addr=0x45ff, .value=0xeb}, {.addr=0x4600, .value=0x1b},
    };
    const struct CPU_State final_cpu = {.pc=0x4601, .a=0xd2, .x=0x49, .y=0x8f, .sp=0xae, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x011b, .value=0x8f}, {.addr=0x45ff, .value=0xeb}, {.addr=0x4600, .value=0x1b},
    };
    const struct BusEvent events[] = {
        {.addr=0x45ff, .value=0xeb, .type=IO_READ},
        {.addr=0x4600, .value=0x1b, .type=IO_READ},
        {.addr=0x011b, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0376) {
    const struct CPU_State initial_cpu = {.pc=0xa9cb, .a=0x29, .x=0xf1, .y=0x8c, .sp=0x1e, .status=0x59};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002c, .value=0x01}, {.addr=0xa9cb, .value=0xeb}, {.addr=0xa9cc, .value=0x2c},
    };
    const struct CPU_State final_cpu = {.pc=0xa9cd, .a=0x29, .x=0xf1, .y=0x01, .sp=0x1e, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x002c, .value=0x01}, {.addr=0xa9cb, .value=0xeb}, {.addr=0xa9cc, .value=0x2c},
    };
    const struct BusEvent events[] = {
        {.addr=0xa9cb, .value=0xeb, .type=IO_READ},
        {.addr=0xa9cc, .value=0x2c, .type=IO_READ},
        {.addr=0x002c, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0377) {
    const struct CPU_State initial_cpu = {.pc=0x6466, .a=0x12, .x=0xbe, .y=0xa9, .sp=0xc2, .status=0x3c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ba, .value=0xf6}, {.addr=0x6466, .value=0xeb}, {.addr=0x6467, .value=0xba},
    };
    const struct CPU_State final_cpu = {.pc=0x6468, .a=0x12, .x=0xbe, .y=0xf6, .sp=0xc2, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ba, .value=0xf6}, {.addr=0x6466, .value=0xeb}, {.addr=0x6467, .value=0xba},
    };
    const struct BusEvent events[] = {
        {.addr=0x6466, .value=0xeb, .type=IO_READ},
        {.addr=0x6467, .value=0xba, .type=IO_READ},
        {.addr=0x01ba, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0378) {
    const struct CPU_State initial_cpu = {.pc=0xba19, .a=0xbb, .x=0xbf, .y=0x62, .sp=0xab, .status=0x97};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008f, .value=0xa3}, {.addr=0xba19, .value=0xeb}, {.addr=0xba1a, .value=0x8f},
    };
    const struct CPU_State final_cpu = {.pc=0xba1b, .a=0xbb, .x=0xbf, .y=0xa3, .sp=0xab, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x008f, .value=0xa3}, {.addr=0xba19, .value=0xeb}, {.addr=0xba1a, .value=0x8f},
    };
    const struct BusEvent events[] = {
        {.addr=0xba19, .value=0xeb, .type=IO_READ},
        {.addr=0xba1a, .value=0x8f, .type=IO_READ},
        {.addr=0x008f, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0379) {
    const struct CPU_State initial_cpu = {.pc=0x7771, .a=0xe9, .x=0x66, .y=0xae, .sp=0x87, .status=0x71};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c1, .value=0x55}, {.addr=0x7771, .value=0xeb}, {.addr=0x7772, .value=0xc1},
    };
    const struct CPU_State final_cpu = {.pc=0x7773, .a=0xe9, .x=0x66, .y=0x55, .sp=0x87, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c1, .value=0x55}, {.addr=0x7771, .value=0xeb}, {.addr=0x7772, .value=0xc1},
    };
    const struct BusEvent events[] = {
        {.addr=0x7771, .value=0xeb, .type=IO_READ},
        {.addr=0x7772, .value=0xc1, .type=IO_READ},
        {.addr=0x01c1, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_037A) {
    const struct CPU_State initial_cpu = {.pc=0x1d26, .a=0x9f, .x=0xf2, .y=0xbc, .sp=0xe4, .status=0xa0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0180, .value=0x3c}, {.addr=0x1d26, .value=0xeb}, {.addr=0x1d27, .value=0x80},
    };
    const struct CPU_State final_cpu = {.pc=0x1d28, .a=0x9f, .x=0xf2, .y=0x3c, .sp=0xe4, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x0180, .value=0x3c}, {.addr=0x1d26, .value=0xeb}, {.addr=0x1d27, .value=0x80},
    };
    const struct BusEvent events[] = {
        {.addr=0x1d26, .value=0xeb, .type=IO_READ},
        {.addr=0x1d27, .value=0x80, .type=IO_READ},
        {.addr=0x0180, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_037B) {
    const struct CPU_State initial_cpu = {.pc=0x5320, .a=0x3e, .x=0x03, .y=0x6a, .sp=0xbd, .status=0xef};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018a, .value=0xa0}, {.addr=0x5320, .value=0xeb}, {.addr=0x5321, .value=0x8a},
    };
    const struct CPU_State final_cpu = {.pc=0x5322, .a=0x3e, .x=0x03, .y=0xa0, .sp=0xbd, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x018a, .value=0xa0}, {.addr=0x5320, .value=0xeb}, {.addr=0x5321, .value=0x8a},
    };
    const struct BusEvent events[] = {
        {.addr=0x5320, .value=0xeb, .type=IO_READ},
        {.addr=0x5321, .value=0x8a, .type=IO_READ},
        {.addr=0x018a, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_037C) {
    const struct CPU_State initial_cpu = {.pc=0xe154, .a=0x24, .x=0x0c, .y=0xe3, .sp=0xa7, .status=0xd6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002e, .value=0x32}, {.addr=0xe154, .value=0xeb}, {.addr=0xe155, .value=0x2e},
    };
    const struct CPU_State final_cpu = {.pc=0xe156, .a=0x24, .x=0x0c, .y=0x32, .sp=0xa7, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x002e, .value=0x32}, {.addr=0xe154, .value=0xeb}, {.addr=0xe155, .value=0x2e},
    };
    const struct BusEvent events[] = {
        {.addr=0xe154, .value=0xeb, .type=IO_READ},
        {.addr=0xe155, .value=0x2e, .type=IO_READ},
        {.addr=0x002e, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_037D) {
    const struct CPU_State initial_cpu = {.pc=0x04a2, .a=0xb0, .x=0x92, .y=0xb8, .sp=0xd0, .status=0x1f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0044, .value=0x48}, {.addr=0x04a2, .value=0xeb}, {.addr=0x04a3, .value=0x44},
    };
    const struct CPU_State final_cpu = {.pc=0x04a4, .a=0xb0, .x=0x92, .y=0x48, .sp=0xd0, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0044, .value=0x48}, {.addr=0x04a2, .value=0xeb}, {.addr=0x04a3, .value=0x44},
    };
    const struct BusEvent events[] = {
        {.addr=0x04a2, .value=0xeb, .type=IO_READ},
        {.addr=0x04a3, .value=0x44, .type=IO_READ},
        {.addr=0x0044, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_037E) {
    const struct CPU_State initial_cpu = {.pc=0x1349, .a=0x15, .x=0x3a, .y=0x2a, .sp=0x7c, .status=0x1b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bf, .value=0xd6}, {.addr=0x1349, .value=0xeb}, {.addr=0x134a, .value=0xbf},
    };
    const struct CPU_State final_cpu = {.pc=0x134b, .a=0x15, .x=0x3a, .y=0xd6, .sp=0x7c, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bf, .value=0xd6}, {.addr=0x1349, .value=0xeb}, {.addr=0x134a, .value=0xbf},
    };
    const struct BusEvent events[] = {
        {.addr=0x1349, .value=0xeb, .type=IO_READ},
        {.addr=0x134a, .value=0xbf, .type=IO_READ},
        {.addr=0x00bf, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_037F) {
    const struct CPU_State initial_cpu = {.pc=0x51d1, .a=0xd3, .x=0x74, .y=0xe8, .sp=0x51, .status=0xd8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0017, .value=0x38}, {.addr=0x51d1, .value=0xeb}, {.addr=0x51d2, .value=0x17},
    };
    const struct CPU_State final_cpu = {.pc=0x51d3, .a=0xd3, .x=0x74, .y=0x38, .sp=0x51, .status=0x58};
    const struct RamEntry final_ram[] = {
        {.addr=0x0017, .value=0x38}, {.addr=0x51d1, .value=0xeb}, {.addr=0x51d2, .value=0x17},
    };
    const struct BusEvent events[] = {
        {.addr=0x51d1, .value=0xeb, .type=IO_READ},
        {.addr=0x51d2, .value=0x17, .type=IO_READ},
        {.addr=0x0017, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0380) {
    const struct CPU_State initial_cpu = {.pc=0xd23e, .a=0xb7, .x=0xab, .y=0x82, .sp=0x0c, .status=0xb0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0159, .value=0xe8}, {.addr=0xd23e, .value=0xeb}, {.addr=0xd23f, .value=0x59},
    };
    const struct CPU_State final_cpu = {.pc=0xd240, .a=0xb7, .x=0xab, .y=0xe8, .sp=0x0c, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0159, .value=0xe8}, {.addr=0xd23e, .value=0xeb}, {.addr=0xd23f, .value=0x59},
    };
    const struct BusEvent events[] = {
        {.addr=0xd23e, .value=0xeb, .type=IO_READ},
        {.addr=0xd23f, .value=0x59, .type=IO_READ},
        {.addr=0x0159, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0381) {
    const struct CPU_State initial_cpu = {.pc=0x3e4b, .a=0xf5, .x=0xe8, .y=0x31, .sp=0xa2, .status=0xbe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0120, .value=0x42}, {.addr=0x3e4b, .value=0xeb}, {.addr=0x3e4c, .value=0x20},
    };
    const struct CPU_State final_cpu = {.pc=0x3e4d, .a=0xf5, .x=0xe8, .y=0x42, .sp=0xa2, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0120, .value=0x42}, {.addr=0x3e4b, .value=0xeb}, {.addr=0x3e4c, .value=0x20},
    };
    const struct BusEvent events[] = {
        {.addr=0x3e4b, .value=0xeb, .type=IO_READ},
        {.addr=0x3e4c, .value=0x20, .type=IO_READ},
        {.addr=0x0120, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0382) {
    const struct CPU_State initial_cpu = {.pc=0x952b, .a=0x82, .x=0xbe, .y=0xba, .sp=0x72, .status=0x62};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0154, .value=0xde}, {.addr=0x952b, .value=0xeb}, {.addr=0x952c, .value=0x54},
    };
    const struct CPU_State final_cpu = {.pc=0x952d, .a=0x82, .x=0xbe, .y=0xde, .sp=0x72, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0154, .value=0xde}, {.addr=0x952b, .value=0xeb}, {.addr=0x952c, .value=0x54},
    };
    const struct BusEvent events[] = {
        {.addr=0x952b, .value=0xeb, .type=IO_READ},
        {.addr=0x952c, .value=0x54, .type=IO_READ},
        {.addr=0x0154, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0383) {
    const struct CPU_State initial_cpu = {.pc=0xeb0c, .a=0x15, .x=0x6c, .y=0x26, .sp=0x91, .status=0x10};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002f, .value=0x04}, {.addr=0xeb0c, .value=0xeb}, {.addr=0xeb0d, .value=0x2f},
    };
    const struct CPU_State final_cpu = {.pc=0xeb0e, .a=0x15, .x=0x6c, .y=0x04, .sp=0x91, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x002f, .value=0x04}, {.addr=0xeb0c, .value=0xeb}, {.addr=0xeb0d, .value=0x2f},
    };
    const struct BusEvent events[] = {
        {.addr=0xeb0c, .value=0xeb, .type=IO_READ},
        {.addr=0xeb0d, .value=0x2f, .type=IO_READ},
        {.addr=0x002f, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0384) {
    const struct CPU_State initial_cpu = {.pc=0x42a5, .a=0x97, .x=0xba, .y=0x47, .sp=0xdf, .status=0x57};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c7, .value=0xaf}, {.addr=0x42a5, .value=0xeb}, {.addr=0x42a6, .value=0xc7},
    };
    const struct CPU_State final_cpu = {.pc=0x42a7, .a=0x97, .x=0xba, .y=0xaf, .sp=0xdf, .status=0xd5};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c7, .value=0xaf}, {.addr=0x42a5, .value=0xeb}, {.addr=0x42a6, .value=0xc7},
    };
    const struct BusEvent events[] = {
        {.addr=0x42a5, .value=0xeb, .type=IO_READ},
        {.addr=0x42a6, .value=0xc7, .type=IO_READ},
        {.addr=0x00c7, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0385) {
    const struct CPU_State initial_cpu = {.pc=0xcff0, .a=0x67, .x=0x89, .y=0xe0, .sp=0x15, .status=0x0f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0032, .value=0xa7}, {.addr=0xcff0, .value=0xeb}, {.addr=0xcff1, .value=0x32},
    };
    const struct CPU_State final_cpu = {.pc=0xcff2, .a=0x67, .x=0x89, .y=0xa7, .sp=0x15, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0032, .value=0xa7}, {.addr=0xcff0, .value=0xeb}, {.addr=0xcff1, .value=0x32},
    };
    const struct BusEvent events[] = {
        {.addr=0xcff0, .value=0xeb, .type=IO_READ},
        {.addr=0xcff1, .value=0x32, .type=IO_READ},
        {.addr=0x0032, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0386) {
    const struct CPU_State initial_cpu = {.pc=0x16d5, .a=0xd1, .x=0xe4, .y=0xce, .sp=0x47, .status=0xb0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d2, .value=0xc9}, {.addr=0x16d5, .value=0xeb}, {.addr=0x16d6, .value=0xd2},
    };
    const struct CPU_State final_cpu = {.pc=0x16d7, .a=0xd1, .x=0xe4, .y=0xc9, .sp=0x47, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d2, .value=0xc9}, {.addr=0x16d5, .value=0xeb}, {.addr=0x16d6, .value=0xd2},
    };
    const struct BusEvent events[] = {
        {.addr=0x16d5, .value=0xeb, .type=IO_READ},
        {.addr=0x16d6, .value=0xd2, .type=IO_READ},
        {.addr=0x01d2, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0387) {
    const struct CPU_State initial_cpu = {.pc=0x896d, .a=0xb1, .x=0x5a, .y=0xa1, .sp=0x18, .status=0x14};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0023, .value=0x26}, {.addr=0x896d, .value=0xeb}, {.addr=0x896e, .value=0x23},
    };
    const struct CPU_State final_cpu = {.pc=0x896f, .a=0xb1, .x=0x5a, .y=0x26, .sp=0x18, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x0023, .value=0x26}, {.addr=0x896d, .value=0xeb}, {.addr=0x896e, .value=0x23},
    };
    const struct BusEvent events[] = {
        {.addr=0x896d, .value=0xeb, .type=IO_READ},
        {.addr=0x896e, .value=0x23, .type=IO_READ},
        {.addr=0x0023, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0388) {
    const struct CPU_State initial_cpu = {.pc=0x9bc7, .a=0x76, .x=0x6c, .y=0x64, .sp=0x52, .status=0x9b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006c, .value=0xc3}, {.addr=0x9bc7, .value=0xeb}, {.addr=0x9bc8, .value=0x6c},
    };
    const struct CPU_State final_cpu = {.pc=0x9bc9, .a=0x76, .x=0x6c, .y=0xc3, .sp=0x52, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x006c, .value=0xc3}, {.addr=0x9bc7, .value=0xeb}, {.addr=0x9bc8, .value=0x6c},
    };
    const struct BusEvent events[] = {
        {.addr=0x9bc7, .value=0xeb, .type=IO_READ},
        {.addr=0x9bc8, .value=0x6c, .type=IO_READ},
        {.addr=0x006c, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0389) {
    const struct CPU_State initial_cpu = {.pc=0xb065, .a=0xab, .x=0xa5, .y=0x5c, .sp=0x1f, .status=0x8a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d4, .value=0xe7}, {.addr=0xb065, .value=0xeb}, {.addr=0xb066, .value=0xd4},
    };
    const struct CPU_State final_cpu = {.pc=0xb067, .a=0xab, .x=0xa5, .y=0xe7, .sp=0x1f, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d4, .value=0xe7}, {.addr=0xb065, .value=0xeb}, {.addr=0xb066, .value=0xd4},
    };
    const struct BusEvent events[] = {
        {.addr=0xb065, .value=0xeb, .type=IO_READ},
        {.addr=0xb066, .value=0xd4, .type=IO_READ},
        {.addr=0x00d4, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_038A) {
    const struct CPU_State initial_cpu = {.pc=0x2f40, .a=0xc6, .x=0x97, .y=0xe3, .sp=0x86, .status=0xa0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0198, .value=0xb0}, {.addr=0x2f40, .value=0xeb}, {.addr=0x2f41, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0x2f42, .a=0xc6, .x=0x97, .y=0xb0, .sp=0x86, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0198, .value=0xb0}, {.addr=0x2f40, .value=0xeb}, {.addr=0x2f41, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0x2f40, .value=0xeb, .type=IO_READ},
        {.addr=0x2f41, .value=0x98, .type=IO_READ},
        {.addr=0x0198, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_038B) {
    const struct CPU_State initial_cpu = {.pc=0xaa6d, .a=0xa7, .x=0xab, .y=0xd8, .sp=0x09, .status=0x8b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003c, .value=0x80}, {.addr=0xaa6d, .value=0xeb}, {.addr=0xaa6e, .value=0x3c},
    };
    const struct CPU_State final_cpu = {.pc=0xaa6f, .a=0xa7, .x=0xab, .y=0x80, .sp=0x09, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x003c, .value=0x80}, {.addr=0xaa6d, .value=0xeb}, {.addr=0xaa6e, .value=0x3c},
    };
    const struct BusEvent events[] = {
        {.addr=0xaa6d, .value=0xeb, .type=IO_READ},
        {.addr=0xaa6e, .value=0x3c, .type=IO_READ},
        {.addr=0x003c, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_038C) {
    const struct CPU_State initial_cpu = {.pc=0x58bd, .a=0x0f, .x=0x70, .y=0x19, .sp=0x2f, .status=0x0b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bf, .value=0x6b}, {.addr=0x58bd, .value=0xeb}, {.addr=0x58be, .value=0xbf},
    };
    const struct CPU_State final_cpu = {.pc=0x58bf, .a=0x0f, .x=0x70, .y=0x6b, .sp=0x2f, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bf, .value=0x6b}, {.addr=0x58bd, .value=0xeb}, {.addr=0x58be, .value=0xbf},
    };
    const struct BusEvent events[] = {
        {.addr=0x58bd, .value=0xeb, .type=IO_READ},
        {.addr=0x58be, .value=0xbf, .type=IO_READ},
        {.addr=0x00bf, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_038D) {
    const struct CPU_State initial_cpu = {.pc=0x728f, .a=0x72, .x=0x6f, .y=0x9e, .sp=0x1e, .status=0x20};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a8, .value=0x5c}, {.addr=0x728f, .value=0xeb}, {.addr=0x7290, .value=0xa8},
    };
    const struct CPU_State final_cpu = {.pc=0x7291, .a=0x72, .x=0x6f, .y=0x5c, .sp=0x1e, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a8, .value=0x5c}, {.addr=0x728f, .value=0xeb}, {.addr=0x7290, .value=0xa8},
    };
    const struct BusEvent events[] = {
        {.addr=0x728f, .value=0xeb, .type=IO_READ},
        {.addr=0x7290, .value=0xa8, .type=IO_READ},
        {.addr=0x01a8, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_038E) {
    const struct CPU_State initial_cpu = {.pc=0xb100, .a=0x77, .x=0xdb, .y=0x9d, .sp=0x78, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0004, .value=0xf8}, {.addr=0xb100, .value=0xeb}, {.addr=0xb101, .value=0x04},
    };
    const struct CPU_State final_cpu = {.pc=0xb102, .a=0x77, .x=0xdb, .y=0xf8, .sp=0x78, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0004, .value=0xf8}, {.addr=0xb100, .value=0xeb}, {.addr=0xb101, .value=0x04},
    };
    const struct BusEvent events[] = {
        {.addr=0xb100, .value=0xeb, .type=IO_READ},
        {.addr=0xb101, .value=0x04, .type=IO_READ},
        {.addr=0x0004, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_038F) {
    const struct CPU_State initial_cpu = {.pc=0x2dde, .a=0xfb, .x=0xbd, .y=0x67, .sp=0xe7, .status=0xcf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0043, .value=0xcc}, {.addr=0x2dde, .value=0xeb}, {.addr=0x2ddf, .value=0x43},
    };
    const struct CPU_State final_cpu = {.pc=0x2de0, .a=0xfb, .x=0xbd, .y=0xcc, .sp=0xe7, .status=0xcd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0043, .value=0xcc}, {.addr=0x2dde, .value=0xeb}, {.addr=0x2ddf, .value=0x43},
    };
    const struct BusEvent events[] = {
        {.addr=0x2dde, .value=0xeb, .type=IO_READ},
        {.addr=0x2ddf, .value=0x43, .type=IO_READ},
        {.addr=0x0043, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0391) {
    const struct CPU_State initial_cpu = {.pc=0xb5c4, .a=0xcb, .x=0xc3, .y=0xdc, .sp=0xa1, .status=0x34};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0128, .value=0x6f}, {.addr=0xb5c4, .value=0xeb}, {.addr=0xb5c5, .value=0x28},
    };
    const struct CPU_State final_cpu = {.pc=0xb5c6, .a=0xcb, .x=0xc3, .y=0x6f, .sp=0xa1, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x0128, .value=0x6f}, {.addr=0xb5c4, .value=0xeb}, {.addr=0xb5c5, .value=0x28},
    };
    const struct BusEvent events[] = {
        {.addr=0xb5c4, .value=0xeb, .type=IO_READ},
        {.addr=0xb5c5, .value=0x28, .type=IO_READ},
        {.addr=0x0128, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0392) {
    const struct CPU_State initial_cpu = {.pc=0x79dc, .a=0xdb, .x=0xd1, .y=0x50, .sp=0x9e, .status=0x2a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ab, .value=0x6b}, {.addr=0x79dc, .value=0xeb}, {.addr=0x79dd, .value=0xab},
    };
    const struct CPU_State final_cpu = {.pc=0x79de, .a=0xdb, .x=0xd1, .y=0x6b, .sp=0x9e, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ab, .value=0x6b}, {.addr=0x79dc, .value=0xeb}, {.addr=0x79dd, .value=0xab},
    };
    const struct BusEvent events[] = {
        {.addr=0x79dc, .value=0xeb, .type=IO_READ},
        {.addr=0x79dd, .value=0xab, .type=IO_READ},
        {.addr=0x01ab, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0393) {
    const struct CPU_State initial_cpu = {.pc=0x72cc, .a=0x29, .x=0xb4, .y=0x4c, .sp=0x9c, .status=0xfb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018f, .value=0x58}, {.addr=0x72cc, .value=0xeb}, {.addr=0x72cd, .value=0x8f},
    };
    const struct CPU_State final_cpu = {.pc=0x72ce, .a=0x29, .x=0xb4, .y=0x58, .sp=0x9c, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x018f, .value=0x58}, {.addr=0x72cc, .value=0xeb}, {.addr=0x72cd, .value=0x8f},
    };
    const struct BusEvent events[] = {
        {.addr=0x72cc, .value=0xeb, .type=IO_READ},
        {.addr=0x72cd, .value=0x8f, .type=IO_READ},
        {.addr=0x018f, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0394) {
    const struct CPU_State initial_cpu = {.pc=0x7e46, .a=0xa7, .x=0x43, .y=0xe0, .sp=0x65, .status=0xba};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0115, .value=0x09}, {.addr=0x7e46, .value=0xeb}, {.addr=0x7e47, .value=0x15},
    };
    const struct CPU_State final_cpu = {.pc=0x7e48, .a=0xa7, .x=0x43, .y=0x09, .sp=0x65, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x0115, .value=0x09}, {.addr=0x7e46, .value=0xeb}, {.addr=0x7e47, .value=0x15},
    };
    const struct BusEvent events[] = {
        {.addr=0x7e46, .value=0xeb, .type=IO_READ},
        {.addr=0x7e47, .value=0x15, .type=IO_READ},
        {.addr=0x0115, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0395) {
    const struct CPU_State initial_cpu = {.pc=0x5fc3, .a=0x7a, .x=0x8b, .y=0x89, .sp=0xc1, .status=0xc0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d5, .value=0xfc}, {.addr=0x5fc3, .value=0xeb}, {.addr=0x5fc4, .value=0xd5},
    };
    const struct CPU_State final_cpu = {.pc=0x5fc5, .a=0x7a, .x=0x8b, .y=0xfc, .sp=0xc1, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d5, .value=0xfc}, {.addr=0x5fc3, .value=0xeb}, {.addr=0x5fc4, .value=0xd5},
    };
    const struct BusEvent events[] = {
        {.addr=0x5fc3, .value=0xeb, .type=IO_READ},
        {.addr=0x5fc4, .value=0xd5, .type=IO_READ},
        {.addr=0x00d5, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0396) {
    const struct CPU_State initial_cpu = {.pc=0x5fce, .a=0x2c, .x=0x53, .y=0x62, .sp=0x20, .status=0x05};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000f, .value=0x38}, {.addr=0x5fce, .value=0xeb}, {.addr=0x5fcf, .value=0x0f},
    };
    const struct CPU_State final_cpu = {.pc=0x5fd0, .a=0x2c, .x=0x53, .y=0x38, .sp=0x20, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x000f, .value=0x38}, {.addr=0x5fce, .value=0xeb}, {.addr=0x5fcf, .value=0x0f},
    };
    const struct BusEvent events[] = {
        {.addr=0x5fce, .value=0xeb, .type=IO_READ},
        {.addr=0x5fcf, .value=0x0f, .type=IO_READ},
        {.addr=0x000f, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0397) {
    const struct CPU_State initial_cpu = {.pc=0x045c, .a=0x2c, .x=0x00, .y=0x59, .sp=0x9d, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004f, .value=0x0d}, {.addr=0x045c, .value=0xeb}, {.addr=0x045d, .value=0x4f},
    };
    const struct CPU_State final_cpu = {.pc=0x045e, .a=0x2c, .x=0x00, .y=0x0d, .sp=0x9d, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x004f, .value=0x0d}, {.addr=0x045c, .value=0xeb}, {.addr=0x045d, .value=0x4f},
    };
    const struct BusEvent events[] = {
        {.addr=0x045c, .value=0xeb, .type=IO_READ},
        {.addr=0x045d, .value=0x4f, .type=IO_READ},
        {.addr=0x004f, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0398) {
    const struct CPU_State initial_cpu = {.pc=0x2237, .a=0x7a, .x=0x62, .y=0x38, .sp=0xdf, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0144, .value=0xed}, {.addr=0x2237, .value=0xeb}, {.addr=0x2238, .value=0x44},
    };
    const struct CPU_State final_cpu = {.pc=0x2239, .a=0x7a, .x=0x62, .y=0xed, .sp=0xdf, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0144, .value=0xed}, {.addr=0x2237, .value=0xeb}, {.addr=0x2238, .value=0x44},
    };
    const struct BusEvent events[] = {
        {.addr=0x2237, .value=0xeb, .type=IO_READ},
        {.addr=0x2238, .value=0x44, .type=IO_READ},
        {.addr=0x0144, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_0399) {
    const struct CPU_State initial_cpu = {.pc=0x6b7f, .a=0x31, .x=0x44, .y=0xd3, .sp=0xfd, .status=0x4a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0013, .value=0xc6}, {.addr=0x6b7f, .value=0xeb}, {.addr=0x6b80, .value=0x13},
    };
    const struct CPU_State final_cpu = {.pc=0x6b81, .a=0x31, .x=0x44, .y=0xc6, .sp=0xfd, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0013, .value=0xc6}, {.addr=0x6b7f, .value=0xeb}, {.addr=0x6b80, .value=0x13},
    };
    const struct BusEvent events[] = {
        {.addr=0x6b7f, .value=0xeb, .type=IO_READ},
        {.addr=0x6b80, .value=0x13, .type=IO_READ},
        {.addr=0x0013, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_039A) {
    const struct CPU_State initial_cpu = {.pc=0x2dec, .a=0xbf, .x=0xd7, .y=0x1c, .sp=0xad, .status=0x65};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0195, .value=0x9c}, {.addr=0x2dec, .value=0xeb}, {.addr=0x2ded, .value=0x95},
    };
    const struct CPU_State final_cpu = {.pc=0x2dee, .a=0xbf, .x=0xd7, .y=0x9c, .sp=0xad, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0195, .value=0x9c}, {.addr=0x2dec, .value=0xeb}, {.addr=0x2ded, .value=0x95},
    };
    const struct BusEvent events[] = {
        {.addr=0x2dec, .value=0xeb, .type=IO_READ},
        {.addr=0x2ded, .value=0x95, .type=IO_READ},
        {.addr=0x0195, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_039B) {
    const struct CPU_State initial_cpu = {.pc=0x6728, .a=0xaa, .x=0xcc, .y=0xa0, .sp=0x99, .status=0x14};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009d, .value=0x61}, {.addr=0x6728, .value=0xeb}, {.addr=0x6729, .value=0x9d},
    };
    const struct CPU_State final_cpu = {.pc=0x672a, .a=0xaa, .x=0xcc, .y=0x61, .sp=0x99, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x009d, .value=0x61}, {.addr=0x6728, .value=0xeb}, {.addr=0x6729, .value=0x9d},
    };
    const struct BusEvent events[] = {
        {.addr=0x6728, .value=0xeb, .type=IO_READ},
        {.addr=0x6729, .value=0x9d, .type=IO_READ},
        {.addr=0x009d, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_039C) {
    const struct CPU_State initial_cpu = {.pc=0x7b1d, .a=0x1b, .x=0x9c, .y=0x56, .sp=0xfc, .status=0x91};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000e, .value=0x1b}, {.addr=0x7b1d, .value=0xeb}, {.addr=0x7b1e, .value=0x0e},
    };
    const struct CPU_State final_cpu = {.pc=0x7b1f, .a=0x1b, .x=0x9c, .y=0x1b, .sp=0xfc, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x000e, .value=0x1b}, {.addr=0x7b1d, .value=0xeb}, {.addr=0x7b1e, .value=0x0e},
    };
    const struct BusEvent events[] = {
        {.addr=0x7b1d, .value=0xeb, .type=IO_READ},
        {.addr=0x7b1e, .value=0x0e, .type=IO_READ},
        {.addr=0x000e, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_039D) {
    const struct CPU_State initial_cpu = {.pc=0x0cb2, .a=0x93, .x=0xd6, .y=0x4c, .sp=0x61, .status=0xc5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001c, .value=0xe2}, {.addr=0x0cb2, .value=0xeb}, {.addr=0x0cb3, .value=0x1c},
    };
    const struct CPU_State final_cpu = {.pc=0x0cb4, .a=0x93, .x=0xd6, .y=0xe2, .sp=0x61, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x001c, .value=0xe2}, {.addr=0x0cb2, .value=0xeb}, {.addr=0x0cb3, .value=0x1c},
    };
    const struct BusEvent events[] = {
        {.addr=0x0cb2, .value=0xeb, .type=IO_READ},
        {.addr=0x0cb3, .value=0x1c, .type=IO_READ},
        {.addr=0x001c, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_039E) {
    const struct CPU_State initial_cpu = {.pc=0x5057, .a=0x26, .x=0x1b, .y=0x89, .sp=0xb6, .status=0x33};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012b, .value=0x43}, {.addr=0x5057, .value=0xeb}, {.addr=0x5058, .value=0x2b},
    };
    const struct CPU_State final_cpu = {.pc=0x5059, .a=0x26, .x=0x1b, .y=0x43, .sp=0xb6, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x012b, .value=0x43}, {.addr=0x5057, .value=0xeb}, {.addr=0x5058, .value=0x2b},
    };
    const struct BusEvent events[] = {
        {.addr=0x5057, .value=0xeb, .type=IO_READ},
        {.addr=0x5058, .value=0x2b, .type=IO_READ},
        {.addr=0x012b, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_039F) {
    const struct CPU_State initial_cpu = {.pc=0x3309, .a=0x58, .x=0x25, .y=0x5a, .sp=0x1f, .status=0xeb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e4, .value=0x69}, {.addr=0x3309, .value=0xeb}, {.addr=0x330a, .value=0xe4},
    };
    const struct CPU_State final_cpu = {.pc=0x330b, .a=0x58, .x=0x25, .y=0x69, .sp=0x1f, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e4, .value=0x69}, {.addr=0x3309, .value=0xeb}, {.addr=0x330a, .value=0xe4},
    };
    const struct BusEvent events[] = {
        {.addr=0x3309, .value=0xeb, .type=IO_READ},
        {.addr=0x330a, .value=0xe4, .type=IO_READ},
        {.addr=0x01e4, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03A0) {
    const struct CPU_State initial_cpu = {.pc=0xdaf2, .a=0xb8, .x=0x9d, .y=0x78, .sp=0x07, .status=0x9f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cb, .value=0x60}, {.addr=0xdaf2, .value=0xeb}, {.addr=0xdaf3, .value=0xcb},
    };
    const struct CPU_State final_cpu = {.pc=0xdaf4, .a=0xb8, .x=0x9d, .y=0x60, .sp=0x07, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cb, .value=0x60}, {.addr=0xdaf2, .value=0xeb}, {.addr=0xdaf3, .value=0xcb},
    };
    const struct BusEvent events[] = {
        {.addr=0xdaf2, .value=0xeb, .type=IO_READ},
        {.addr=0xdaf3, .value=0xcb, .type=IO_READ},
        {.addr=0x00cb, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03A1) {
    const struct CPU_State initial_cpu = {.pc=0x27d3, .a=0x07, .x=0x24, .y=0xba, .sp=0x07, .status=0x32};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0161, .value=0x3a}, {.addr=0x27d3, .value=0xeb}, {.addr=0x27d4, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0x27d5, .a=0x07, .x=0x24, .y=0x3a, .sp=0x07, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x0161, .value=0x3a}, {.addr=0x27d3, .value=0xeb}, {.addr=0x27d4, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0x27d3, .value=0xeb, .type=IO_READ},
        {.addr=0x27d4, .value=0x61, .type=IO_READ},
        {.addr=0x0161, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03A2) {
    const struct CPU_State initial_cpu = {.pc=0x9926, .a=0xa2, .x=0x68, .y=0x71, .sp=0xb4, .status=0x05};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006d, .value=0xb7}, {.addr=0x9926, .value=0xeb}, {.addr=0x9927, .value=0x6d},
    };
    const struct CPU_State final_cpu = {.pc=0x9928, .a=0xa2, .x=0x68, .y=0xb7, .sp=0xb4, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x006d, .value=0xb7}, {.addr=0x9926, .value=0xeb}, {.addr=0x9927, .value=0x6d},
    };
    const struct BusEvent events[] = {
        {.addr=0x9926, .value=0xeb, .type=IO_READ},
        {.addr=0x9927, .value=0x6d, .type=IO_READ},
        {.addr=0x006d, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03A3) {
    const struct CPU_State initial_cpu = {.pc=0x007c, .a=0xf1, .x=0x6d, .y=0x0a, .sp=0xf6, .status=0x78};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007c, .value=0xeb}, {.addr=0x007d, .value=0x95}, {.addr=0x0195, .value=0xa6},
    };
    const struct CPU_State final_cpu = {.pc=0x007e, .a=0xf1, .x=0x6d, .y=0xa6, .sp=0xf6, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x007c, .value=0xeb}, {.addr=0x007d, .value=0x95}, {.addr=0x0195, .value=0xa6},
    };
    const struct BusEvent events[] = {
        {.addr=0x007c, .value=0xeb, .type=IO_READ},
        {.addr=0x007d, .value=0x95, .type=IO_READ},
        {.addr=0x0195, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03A4) {
    const struct CPU_State initial_cpu = {.pc=0x0058, .a=0x97, .x=0x30, .y=0x3b, .sp=0x61, .status=0x5d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0058, .value=0xeb}, {.addr=0x0059, .value=0xd7}, {.addr=0x00d7, .value=0x71},
    };
    const struct CPU_State final_cpu = {.pc=0x005a, .a=0x97, .x=0x30, .y=0x71, .sp=0x61, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0058, .value=0xeb}, {.addr=0x0059, .value=0xd7}, {.addr=0x00d7, .value=0x71},
    };
    const struct BusEvent events[] = {
        {.addr=0x0058, .value=0xeb, .type=IO_READ},
        {.addr=0x0059, .value=0xd7, .type=IO_READ},
        {.addr=0x00d7, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03A5) {
    const struct CPU_State initial_cpu = {.pc=0x5712, .a=0x3f, .x=0xbc, .y=0x3d, .sp=0xbf, .status=0xf1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fa, .value=0xdf}, {.addr=0x5712, .value=0xeb}, {.addr=0x5713, .value=0xfa},
    };
    const struct CPU_State final_cpu = {.pc=0x5714, .a=0x3f, .x=0xbc, .y=0xdf, .sp=0xbf, .status=0xf1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fa, .value=0xdf}, {.addr=0x5712, .value=0xeb}, {.addr=0x5713, .value=0xfa},
    };
    const struct BusEvent events[] = {
        {.addr=0x5712, .value=0xeb, .type=IO_READ},
        {.addr=0x5713, .value=0xfa, .type=IO_READ},
        {.addr=0x01fa, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x5817, .a=0x89, .x=0x8b, .y=0xcf, .sp=0x23, .status=0xd3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002c, .value=0xa5}, {.addr=0x5817, .value=0xeb}, {.addr=0x5818, .value=0x2c},
    };
    const struct CPU_State final_cpu = {.pc=0x5819, .a=0x89, .x=0x8b, .y=0xa5, .sp=0x23, .status=0xd1};
    const struct RamEntry final_ram[] = {
        {.addr=0x002c, .value=0xa5}, {.addr=0x5817, .value=0xeb}, {.addr=0x5818, .value=0x2c},
    };
    const struct BusEvent events[] = {
        {.addr=0x5817, .value=0xeb, .type=IO_READ},
        {.addr=0x5818, .value=0x2c, .type=IO_READ},
        {.addr=0x002c, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03A7) {
    const struct CPU_State initial_cpu = {.pc=0x3c50, .a=0x6a, .x=0x2f, .y=0x9e, .sp=0x2a, .status=0x02};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0091, .value=0x87}, {.addr=0x3c50, .value=0xeb}, {.addr=0x3c51, .value=0x91},
    };
    const struct CPU_State final_cpu = {.pc=0x3c52, .a=0x6a, .x=0x2f, .y=0x87, .sp=0x2a, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x0091, .value=0x87}, {.addr=0x3c50, .value=0xeb}, {.addr=0x3c51, .value=0x91},
    };
    const struct BusEvent events[] = {
        {.addr=0x3c50, .value=0xeb, .type=IO_READ},
        {.addr=0x3c51, .value=0x91, .type=IO_READ},
        {.addr=0x0091, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03A8) {
    const struct CPU_State initial_cpu = {.pc=0xd377, .a=0xe5, .x=0x51, .y=0xed, .sp=0x3d, .status=0xc3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0074, .value=0x2d}, {.addr=0xd377, .value=0xeb}, {.addr=0xd378, .value=0x74},
    };
    const struct CPU_State final_cpu = {.pc=0xd379, .a=0xe5, .x=0x51, .y=0x2d, .sp=0x3d, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x0074, .value=0x2d}, {.addr=0xd377, .value=0xeb}, {.addr=0xd378, .value=0x74},
    };
    const struct BusEvent events[] = {
        {.addr=0xd377, .value=0xeb, .type=IO_READ},
        {.addr=0xd378, .value=0x74, .type=IO_READ},
        {.addr=0x0074, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03A9) {
    const struct CPU_State initial_cpu = {.pc=0x8122, .a=0xec, .x=0xe4, .y=0xb9, .sp=0xdc, .status=0x10};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005b, .value=0xa8}, {.addr=0x8122, .value=0xeb}, {.addr=0x8123, .value=0x5b},
    };
    const struct CPU_State final_cpu = {.pc=0x8124, .a=0xec, .x=0xe4, .y=0xa8, .sp=0xdc, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x005b, .value=0xa8}, {.addr=0x8122, .value=0xeb}, {.addr=0x8123, .value=0x5b},
    };
    const struct BusEvent events[] = {
        {.addr=0x8122, .value=0xeb, .type=IO_READ},
        {.addr=0x8123, .value=0x5b, .type=IO_READ},
        {.addr=0x005b, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03AA) {
    const struct CPU_State initial_cpu = {.pc=0xd1a3, .a=0x81, .x=0xfc, .y=0x4d, .sp=0x23, .status=0x01};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b2, .value=0xe7}, {.addr=0xd1a3, .value=0xeb}, {.addr=0xd1a4, .value=0xb2},
    };
    const struct CPU_State final_cpu = {.pc=0xd1a5, .a=0x81, .x=0xfc, .y=0xe7, .sp=0x23, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b2, .value=0xe7}, {.addr=0xd1a3, .value=0xeb}, {.addr=0xd1a4, .value=0xb2},
    };
    const struct BusEvent events[] = {
        {.addr=0xd1a3, .value=0xeb, .type=IO_READ},
        {.addr=0xd1a4, .value=0xb2, .type=IO_READ},
        {.addr=0x00b2, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03AB) {
    const struct CPU_State initial_cpu = {.pc=0x3466, .a=0xd0, .x=0xd9, .y=0x28, .sp=0x74, .status=0xbc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0136, .value=0xfc}, {.addr=0x3466, .value=0xeb}, {.addr=0x3467, .value=0x36},
    };
    const struct CPU_State final_cpu = {.pc=0x3468, .a=0xd0, .x=0xd9, .y=0xfc, .sp=0x74, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0136, .value=0xfc}, {.addr=0x3466, .value=0xeb}, {.addr=0x3467, .value=0x36},
    };
    const struct BusEvent events[] = {
        {.addr=0x3466, .value=0xeb, .type=IO_READ},
        {.addr=0x3467, .value=0x36, .type=IO_READ},
        {.addr=0x0136, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03AC) {
    const struct CPU_State initial_cpu = {.pc=0x38db, .a=0x94, .x=0xfa, .y=0x90, .sp=0x02, .status=0x1d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a6, .value=0x6f}, {.addr=0x38db, .value=0xeb}, {.addr=0x38dc, .value=0xa6},
    };
    const struct CPU_State final_cpu = {.pc=0x38dd, .a=0x94, .x=0xfa, .y=0x6f, .sp=0x02, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a6, .value=0x6f}, {.addr=0x38db, .value=0xeb}, {.addr=0x38dc, .value=0xa6},
    };
    const struct BusEvent events[] = {
        {.addr=0x38db, .value=0xeb, .type=IO_READ},
        {.addr=0x38dc, .value=0xa6, .type=IO_READ},
        {.addr=0x00a6, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03AD) {
    const struct CPU_State initial_cpu = {.pc=0xf32e, .a=0x78, .x=0xd7, .y=0x21, .sp=0x22, .status=0xf7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0106, .value=0x05}, {.addr=0xf32e, .value=0xeb}, {.addr=0xf32f, .value=0x06},
    };
    const struct CPU_State final_cpu = {.pc=0xf330, .a=0x78, .x=0xd7, .y=0x05, .sp=0x22, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x0106, .value=0x05}, {.addr=0xf32e, .value=0xeb}, {.addr=0xf32f, .value=0x06},
    };
    const struct BusEvent events[] = {
        {.addr=0xf32e, .value=0xeb, .type=IO_READ},
        {.addr=0xf32f, .value=0x06, .type=IO_READ},
        {.addr=0x0106, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03AE) {
    const struct CPU_State initial_cpu = {.pc=0xbe9d, .a=0xf1, .x=0x4f, .y=0x1c, .sp=0x44, .status=0xc3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b7, .value=0xbc}, {.addr=0xbe9d, .value=0xeb}, {.addr=0xbe9e, .value=0xb7},
    };
    const struct CPU_State final_cpu = {.pc=0xbe9f, .a=0xf1, .x=0x4f, .y=0xbc, .sp=0x44, .status=0xc1};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b7, .value=0xbc}, {.addr=0xbe9d, .value=0xeb}, {.addr=0xbe9e, .value=0xb7},
    };
    const struct BusEvent events[] = {
        {.addr=0xbe9d, .value=0xeb, .type=IO_READ},
        {.addr=0xbe9e, .value=0xb7, .type=IO_READ},
        {.addr=0x00b7, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03AF) {
    const struct CPU_State initial_cpu = {.pc=0x10a1, .a=0x0c, .x=0x6f, .y=0x9e, .sp=0x26, .status=0xa3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fd, .value=0x2e}, {.addr=0x10a1, .value=0xeb}, {.addr=0x10a2, .value=0xfd},
    };
    const struct CPU_State final_cpu = {.pc=0x10a3, .a=0x0c, .x=0x6f, .y=0x2e, .sp=0x26, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fd, .value=0x2e}, {.addr=0x10a1, .value=0xeb}, {.addr=0x10a2, .value=0xfd},
    };
    const struct BusEvent events[] = {
        {.addr=0x10a1, .value=0xeb, .type=IO_READ},
        {.addr=0x10a2, .value=0xfd, .type=IO_READ},
        {.addr=0x01fd, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03B0) {
    const struct CPU_State initial_cpu = {.pc=0xed56, .a=0x1b, .x=0xb5, .y=0xb7, .sp=0xfc, .status=0x87};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d3, .value=0x1e}, {.addr=0xed56, .value=0xeb}, {.addr=0xed57, .value=0xd3},
    };
    const struct CPU_State final_cpu = {.pc=0xed58, .a=0x1b, .x=0xb5, .y=0x1e, .sp=0xfc, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d3, .value=0x1e}, {.addr=0xed56, .value=0xeb}, {.addr=0xed57, .value=0xd3},
    };
    const struct BusEvent events[] = {
        {.addr=0xed56, .value=0xeb, .type=IO_READ},
        {.addr=0xed57, .value=0xd3, .type=IO_READ},
        {.addr=0x00d3, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03B1) {
    const struct CPU_State initial_cpu = {.pc=0xd6cc, .a=0x35, .x=0xb5, .y=0xb7, .sp=0x4c, .status=0x85};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0002, .value=0xd0}, {.addr=0xd6cc, .value=0xeb}, {.addr=0xd6cd, .value=0x02},
    };
    const struct CPU_State final_cpu = {.pc=0xd6ce, .a=0x35, .x=0xb5, .y=0xd0, .sp=0x4c, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x0002, .value=0xd0}, {.addr=0xd6cc, .value=0xeb}, {.addr=0xd6cd, .value=0x02},
    };
    const struct BusEvent events[] = {
        {.addr=0xd6cc, .value=0xeb, .type=IO_READ},
        {.addr=0xd6cd, .value=0x02, .type=IO_READ},
        {.addr=0x0002, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03B2) {
    const struct CPU_State initial_cpu = {.pc=0xfcfc, .a=0xbf, .x=0x60, .y=0x4b, .sp=0x09, .status=0xed};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010a, .value=0x84}, {.addr=0xfcfc, .value=0xeb}, {.addr=0xfcfd, .value=0x0a},
    };
    const struct CPU_State final_cpu = {.pc=0xfcfe, .a=0xbf, .x=0x60, .y=0x84, .sp=0x09, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x010a, .value=0x84}, {.addr=0xfcfc, .value=0xeb}, {.addr=0xfcfd, .value=0x0a},
    };
    const struct BusEvent events[] = {
        {.addr=0xfcfc, .value=0xeb, .type=IO_READ},
        {.addr=0xfcfd, .value=0x0a, .type=IO_READ},
        {.addr=0x010a, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03B4) {
    const struct CPU_State initial_cpu = {.pc=0xe8e8, .a=0xf5, .x=0xa3, .y=0x57, .sp=0xee, .status=0x92};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c5, .value=0x80}, {.addr=0xe8e8, .value=0xeb}, {.addr=0xe8e9, .value=0xc5},
    };
    const struct CPU_State final_cpu = {.pc=0xe8ea, .a=0xf5, .x=0xa3, .y=0x80, .sp=0xee, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c5, .value=0x80}, {.addr=0xe8e8, .value=0xeb}, {.addr=0xe8e9, .value=0xc5},
    };
    const struct BusEvent events[] = {
        {.addr=0xe8e8, .value=0xeb, .type=IO_READ},
        {.addr=0xe8e9, .value=0xc5, .type=IO_READ},
        {.addr=0x00c5, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03B5) {
    const struct CPU_State initial_cpu = {.pc=0xac97, .a=0x27, .x=0x1e, .y=0x64, .sp=0x0c, .status=0xc9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ce, .value=0x64}, {.addr=0xac97, .value=0xeb}, {.addr=0xac98, .value=0xce},
    };
    const struct CPU_State final_cpu = {.pc=0xac99, .a=0x27, .x=0x1e, .y=0x64, .sp=0x0c, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ce, .value=0x64}, {.addr=0xac97, .value=0xeb}, {.addr=0xac98, .value=0xce},
    };
    const struct BusEvent events[] = {
        {.addr=0xac97, .value=0xeb, .type=IO_READ},
        {.addr=0xac98, .value=0xce, .type=IO_READ},
        {.addr=0x00ce, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03B6) {
    const struct CPU_State initial_cpu = {.pc=0x402d, .a=0x0d, .x=0x59, .y=0xc8, .sp=0xce, .status=0x2e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017a, .value=0x71}, {.addr=0x402d, .value=0xeb}, {.addr=0x402e, .value=0x7a},
    };
    const struct CPU_State final_cpu = {.pc=0x402f, .a=0x0d, .x=0x59, .y=0x71, .sp=0xce, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x017a, .value=0x71}, {.addr=0x402d, .value=0xeb}, {.addr=0x402e, .value=0x7a},
    };
    const struct BusEvent events[] = {
        {.addr=0x402d, .value=0xeb, .type=IO_READ},
        {.addr=0x402e, .value=0x7a, .type=IO_READ},
        {.addr=0x017a, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03B7) {
    const struct CPU_State initial_cpu = {.pc=0xcc94, .a=0xc4, .x=0xfb, .y=0xfd, .sp=0xf6, .status=0x2f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ff, .value=0x12}, {.addr=0xcc94, .value=0xeb}, {.addr=0xcc95, .value=0xff},
    };
    const struct CPU_State final_cpu = {.pc=0xcc96, .a=0xc4, .x=0xfb, .y=0x12, .sp=0xf6, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ff, .value=0x12}, {.addr=0xcc94, .value=0xeb}, {.addr=0xcc95, .value=0xff},
    };
    const struct BusEvent events[] = {
        {.addr=0xcc94, .value=0xeb, .type=IO_READ},
        {.addr=0xcc95, .value=0xff, .type=IO_READ},
        {.addr=0x01ff, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03B8) {
    const struct CPU_State initial_cpu = {.pc=0x9b30, .a=0x34, .x=0xe6, .y=0x1e, .sp=0x49, .status=0x02};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0053, .value=0x1d}, {.addr=0x9b30, .value=0xeb}, {.addr=0x9b31, .value=0x53},
    };
    const struct CPU_State final_cpu = {.pc=0x9b32, .a=0x34, .x=0xe6, .y=0x1d, .sp=0x49, .status=0x00};
    const struct RamEntry final_ram[] = {
        {.addr=0x0053, .value=0x1d}, {.addr=0x9b30, .value=0xeb}, {.addr=0x9b31, .value=0x53},
    };
    const struct BusEvent events[] = {
        {.addr=0x9b30, .value=0xeb, .type=IO_READ},
        {.addr=0x9b31, .value=0x53, .type=IO_READ},
        {.addr=0x0053, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03B9) {
    const struct CPU_State initial_cpu = {.pc=0x6c75, .a=0x51, .x=0x68, .y=0x3b, .sp=0x46, .status=0xfa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bc, .value=0x30}, {.addr=0x6c75, .value=0xeb}, {.addr=0x6c76, .value=0xbc},
    };
    const struct CPU_State final_cpu = {.pc=0x6c77, .a=0x51, .x=0x68, .y=0x30, .sp=0x46, .status=0x78};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bc, .value=0x30}, {.addr=0x6c75, .value=0xeb}, {.addr=0x6c76, .value=0xbc},
    };
    const struct BusEvent events[] = {
        {.addr=0x6c75, .value=0xeb, .type=IO_READ},
        {.addr=0x6c76, .value=0xbc, .type=IO_READ},
        {.addr=0x01bc, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03BA) {
    const struct CPU_State initial_cpu = {.pc=0x5ada, .a=0x9c, .x=0x8e, .y=0x4f, .sp=0xf7, .status=0x8c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004d, .value=0xe7}, {.addr=0x5ada, .value=0xeb}, {.addr=0x5adb, .value=0x4d},
    };
    const struct CPU_State final_cpu = {.pc=0x5adc, .a=0x9c, .x=0x8e, .y=0xe7, .sp=0xf7, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x004d, .value=0xe7}, {.addr=0x5ada, .value=0xeb}, {.addr=0x5adb, .value=0x4d},
    };
    const struct BusEvent events[] = {
        {.addr=0x5ada, .value=0xeb, .type=IO_READ},
        {.addr=0x5adb, .value=0x4d, .type=IO_READ},
        {.addr=0x004d, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03BB) {
    const struct CPU_State initial_cpu = {.pc=0xbd11, .a=0x0e, .x=0x94, .y=0xf9, .sp=0x46, .status=0x6d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0122, .value=0x31}, {.addr=0xbd11, .value=0xeb}, {.addr=0xbd12, .value=0x22},
    };
    const struct CPU_State final_cpu = {.pc=0xbd13, .a=0x0e, .x=0x94, .y=0x31, .sp=0x46, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0122, .value=0x31}, {.addr=0xbd11, .value=0xeb}, {.addr=0xbd12, .value=0x22},
    };
    const struct BusEvent events[] = {
        {.addr=0xbd11, .value=0xeb, .type=IO_READ},
        {.addr=0xbd12, .value=0x22, .type=IO_READ},
        {.addr=0x0122, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03BC) {
    const struct CPU_State initial_cpu = {.pc=0x5f2b, .a=0x39, .x=0x11, .y=0x4a, .sp=0x4b, .status=0xc3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0024, .value=0xec}, {.addr=0x5f2b, .value=0xeb}, {.addr=0x5f2c, .value=0x24},
    };
    const struct CPU_State final_cpu = {.pc=0x5f2d, .a=0x39, .x=0x11, .y=0xec, .sp=0x4b, .status=0xc1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0024, .value=0xec}, {.addr=0x5f2b, .value=0xeb}, {.addr=0x5f2c, .value=0x24},
    };
    const struct BusEvent events[] = {
        {.addr=0x5f2b, .value=0xeb, .type=IO_READ},
        {.addr=0x5f2c, .value=0x24, .type=IO_READ},
        {.addr=0x0024, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03BD) {
    const struct CPU_State initial_cpu = {.pc=0x366b, .a=0xa0, .x=0xc0, .y=0xa3, .sp=0x48, .status=0xd2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0074, .value=0xc9}, {.addr=0x366b, .value=0xeb}, {.addr=0x366c, .value=0x74},
    };
    const struct CPU_State final_cpu = {.pc=0x366d, .a=0xa0, .x=0xc0, .y=0xc9, .sp=0x48, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0074, .value=0xc9}, {.addr=0x366b, .value=0xeb}, {.addr=0x366c, .value=0x74},
    };
    const struct BusEvent events[] = {
        {.addr=0x366b, .value=0xeb, .type=IO_READ},
        {.addr=0x366c, .value=0x74, .type=IO_READ},
        {.addr=0x0074, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03BE) {
    const struct CPU_State initial_cpu = {.pc=0xe2b8, .a=0xb6, .x=0x5d, .y=0x78, .sp=0x36, .status=0xe1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0135, .value=0xee}, {.addr=0xe2b8, .value=0xeb}, {.addr=0xe2b9, .value=0x35},
    };
    const struct CPU_State final_cpu = {.pc=0xe2ba, .a=0xb6, .x=0x5d, .y=0xee, .sp=0x36, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0135, .value=0xee}, {.addr=0xe2b8, .value=0xeb}, {.addr=0xe2b9, .value=0x35},
    };
    const struct BusEvent events[] = {
        {.addr=0xe2b8, .value=0xeb, .type=IO_READ},
        {.addr=0xe2b9, .value=0x35, .type=IO_READ},
        {.addr=0x0135, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03BF) {
    const struct CPU_State initial_cpu = {.pc=0x4985, .a=0xd2, .x=0x3e, .y=0x88, .sp=0x5c, .status=0x67};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013c, .value=0x54}, {.addr=0x4985, .value=0xeb}, {.addr=0x4986, .value=0x3c},
    };
    const struct CPU_State final_cpu = {.pc=0x4987, .a=0xd2, .x=0x3e, .y=0x54, .sp=0x5c, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x013c, .value=0x54}, {.addr=0x4985, .value=0xeb}, {.addr=0x4986, .value=0x3c},
    };
    const struct BusEvent events[] = {
        {.addr=0x4985, .value=0xeb, .type=IO_READ},
        {.addr=0x4986, .value=0x3c, .type=IO_READ},
        {.addr=0x013c, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03C0) {
    const struct CPU_State initial_cpu = {.pc=0x16f5, .a=0x42, .x=0x9a, .y=0xa4, .sp=0x82, .status=0x5d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e8, .value=0x8d}, {.addr=0x16f5, .value=0xeb}, {.addr=0x16f6, .value=0xe8},
    };
    const struct CPU_State final_cpu = {.pc=0x16f7, .a=0x42, .x=0x9a, .y=0x8d, .sp=0x82, .status=0xdd};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e8, .value=0x8d}, {.addr=0x16f5, .value=0xeb}, {.addr=0x16f6, .value=0xe8},
    };
    const struct BusEvent events[] = {
        {.addr=0x16f5, .value=0xeb, .type=IO_READ},
        {.addr=0x16f6, .value=0xe8, .type=IO_READ},
        {.addr=0x00e8, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03C1) {
    const struct CPU_State initial_cpu = {.pc=0x2132, .a=0x54, .x=0xf5, .y=0x45, .sp=0x2b, .status=0xc2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000a, .value=0x28}, {.addr=0x2132, .value=0xeb}, {.addr=0x2133, .value=0x0a},
    };
    const struct CPU_State final_cpu = {.pc=0x2134, .a=0x54, .x=0xf5, .y=0x28, .sp=0x2b, .status=0x40};
    const struct RamEntry final_ram[] = {
        {.addr=0x000a, .value=0x28}, {.addr=0x2132, .value=0xeb}, {.addr=0x2133, .value=0x0a},
    };
    const struct BusEvent events[] = {
        {.addr=0x2132, .value=0xeb, .type=IO_READ},
        {.addr=0x2133, .value=0x0a, .type=IO_READ},
        {.addr=0x000a, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03C2) {
    const struct CPU_State initial_cpu = {.pc=0x6041, .a=0xa9, .x=0xc1, .y=0x5d, .sp=0x82, .status=0xd6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0074, .value=0xbe}, {.addr=0x6041, .value=0xeb}, {.addr=0x6042, .value=0x74},
    };
    const struct CPU_State final_cpu = {.pc=0x6043, .a=0xa9, .x=0xc1, .y=0xbe, .sp=0x82, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0074, .value=0xbe}, {.addr=0x6041, .value=0xeb}, {.addr=0x6042, .value=0x74},
    };
    const struct BusEvent events[] = {
        {.addr=0x6041, .value=0xeb, .type=IO_READ},
        {.addr=0x6042, .value=0x74, .type=IO_READ},
        {.addr=0x0074, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03C3) {
    const struct CPU_State initial_cpu = {.pc=0xedbe, .a=0x79, .x=0xee, .y=0x0b, .sp=0x40, .status=0x2c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b1, .value=0x63}, {.addr=0xedbe, .value=0xeb}, {.addr=0xedbf, .value=0xb1},
    };
    const struct CPU_State final_cpu = {.pc=0xedc0, .a=0x79, .x=0xee, .y=0x63, .sp=0x40, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b1, .value=0x63}, {.addr=0xedbe, .value=0xeb}, {.addr=0xedbf, .value=0xb1},
    };
    const struct BusEvent events[] = {
        {.addr=0xedbe, .value=0xeb, .type=IO_READ},
        {.addr=0xedbf, .value=0xb1, .type=IO_READ},
        {.addr=0x01b1, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03C4) {
    const struct CPU_State initial_cpu = {.pc=0xf5f9, .a=0x9b, .x=0xe7, .y=0x3a, .sp=0x5a, .status=0x28};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e9, .value=0x92}, {.addr=0xf5f9, .value=0xeb}, {.addr=0xf5fa, .value=0xe9},
    };
    const struct CPU_State final_cpu = {.pc=0xf5fb, .a=0x9b, .x=0xe7, .y=0x92, .sp=0x5a, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e9, .value=0x92}, {.addr=0xf5f9, .value=0xeb}, {.addr=0xf5fa, .value=0xe9},
    };
    const struct BusEvent events[] = {
        {.addr=0xf5f9, .value=0xeb, .type=IO_READ},
        {.addr=0xf5fa, .value=0xe9, .type=IO_READ},
        {.addr=0x01e9, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03C7) {
    const struct CPU_State initial_cpu = {.pc=0x29e4, .a=0x6f, .x=0xad, .y=0x7f, .sp=0xf0, .status=0x10};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bb, .value=0xed}, {.addr=0x29e4, .value=0xeb}, {.addr=0x29e5, .value=0xbb},
    };
    const struct CPU_State final_cpu = {.pc=0x29e6, .a=0x6f, .x=0xad, .y=0xed, .sp=0xf0, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bb, .value=0xed}, {.addr=0x29e4, .value=0xeb}, {.addr=0x29e5, .value=0xbb},
    };
    const struct BusEvent events[] = {
        {.addr=0x29e4, .value=0xeb, .type=IO_READ},
        {.addr=0x29e5, .value=0xbb, .type=IO_READ},
        {.addr=0x00bb, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03C8) {
    const struct CPU_State initial_cpu = {.pc=0x99bd, .a=0x44, .x=0x06, .y=0xc6, .sp=0xdd, .status=0x0a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009e, .value=0x9a}, {.addr=0x99bd, .value=0xeb}, {.addr=0x99be, .value=0x9e},
    };
    const struct CPU_State final_cpu = {.pc=0x99bf, .a=0x44, .x=0x06, .y=0x9a, .sp=0xdd, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x009e, .value=0x9a}, {.addr=0x99bd, .value=0xeb}, {.addr=0x99be, .value=0x9e},
    };
    const struct BusEvent events[] = {
        {.addr=0x99bd, .value=0xeb, .type=IO_READ},
        {.addr=0x99be, .value=0x9e, .type=IO_READ},
        {.addr=0x009e, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03C9) {
    const struct CPU_State initial_cpu = {.pc=0x0e48, .a=0x84, .x=0x8f, .y=0x91, .sp=0x91, .status=0x10};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0027, .value=0xbe}, {.addr=0x0e48, .value=0xeb}, {.addr=0x0e49, .value=0x27},
    };
    const struct CPU_State final_cpu = {.pc=0x0e4a, .a=0x84, .x=0x8f, .y=0xbe, .sp=0x91, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x0027, .value=0xbe}, {.addr=0x0e48, .value=0xeb}, {.addr=0x0e49, .value=0x27},
    };
    const struct BusEvent events[] = {
        {.addr=0x0e48, .value=0xeb, .type=IO_READ},
        {.addr=0x0e49, .value=0x27, .type=IO_READ},
        {.addr=0x0027, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03CA) {
    const struct CPU_State initial_cpu = {.pc=0x59e3, .a=0xe3, .x=0x1c, .y=0x08, .sp=0xf8, .status=0x21};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0166, .value=0x7a}, {.addr=0x59e3, .value=0xeb}, {.addr=0x59e4, .value=0x66},
    };
    const struct CPU_State final_cpu = {.pc=0x59e5, .a=0xe3, .x=0x1c, .y=0x7a, .sp=0xf8, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x0166, .value=0x7a}, {.addr=0x59e3, .value=0xeb}, {.addr=0x59e4, .value=0x66},
    };
    const struct BusEvent events[] = {
        {.addr=0x59e3, .value=0xeb, .type=IO_READ},
        {.addr=0x59e4, .value=0x66, .type=IO_READ},
        {.addr=0x0166, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03CB) {
    const struct CPU_State initial_cpu = {.pc=0xb115, .a=0x66, .x=0xb0, .y=0x8f, .sp=0xc6, .status=0xbc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e5, .value=0x43}, {.addr=0xb115, .value=0xeb}, {.addr=0xb116, .value=0xe5},
    };
    const struct CPU_State final_cpu = {.pc=0xb117, .a=0x66, .x=0xb0, .y=0x43, .sp=0xc6, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e5, .value=0x43}, {.addr=0xb115, .value=0xeb}, {.addr=0xb116, .value=0xe5},
    };
    const struct BusEvent events[] = {
        {.addr=0xb115, .value=0xeb, .type=IO_READ},
        {.addr=0xb116, .value=0xe5, .type=IO_READ},
        {.addr=0x01e5, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03CC) {
    const struct CPU_State initial_cpu = {.pc=0x98e3, .a=0xb9, .x=0xc9, .y=0x37, .sp=0xcc, .status=0xe1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018e, .value=0xf8}, {.addr=0x98e3, .value=0xeb}, {.addr=0x98e4, .value=0x8e},
    };
    const struct CPU_State final_cpu = {.pc=0x98e5, .a=0xb9, .x=0xc9, .y=0xf8, .sp=0xcc, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x018e, .value=0xf8}, {.addr=0x98e3, .value=0xeb}, {.addr=0x98e4, .value=0x8e},
    };
    const struct BusEvent events[] = {
        {.addr=0x98e3, .value=0xeb, .type=IO_READ},
        {.addr=0x98e4, .value=0x8e, .type=IO_READ},
        {.addr=0x018e, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03CD) {
    const struct CPU_State initial_cpu = {.pc=0x66e0, .a=0x89, .x=0x78, .y=0xd5, .sp=0xc0, .status=0x14};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0076, .value=0xd0}, {.addr=0x66e0, .value=0xeb}, {.addr=0x66e1, .value=0x76},
    };
    const struct CPU_State final_cpu = {.pc=0x66e2, .a=0x89, .x=0x78, .y=0xd0, .sp=0xc0, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x0076, .value=0xd0}, {.addr=0x66e0, .value=0xeb}, {.addr=0x66e1, .value=0x76},
    };
    const struct BusEvent events[] = {
        {.addr=0x66e0, .value=0xeb, .type=IO_READ},
        {.addr=0x66e1, .value=0x76, .type=IO_READ},
        {.addr=0x0076, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03CE) {
    const struct CPU_State initial_cpu = {.pc=0x9d4c, .a=0x48, .x=0x3c, .y=0xe5, .sp=0x44, .status=0x0a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0016, .value=0x24}, {.addr=0x9d4c, .value=0xeb}, {.addr=0x9d4d, .value=0x16},
    };
    const struct CPU_State final_cpu = {.pc=0x9d4e, .a=0x48, .x=0x3c, .y=0x24, .sp=0x44, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x0016, .value=0x24}, {.addr=0x9d4c, .value=0xeb}, {.addr=0x9d4d, .value=0x16},
    };
    const struct BusEvent events[] = {
        {.addr=0x9d4c, .value=0xeb, .type=IO_READ},
        {.addr=0x9d4d, .value=0x16, .type=IO_READ},
        {.addr=0x0016, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03CF) {
    const struct CPU_State initial_cpu = {.pc=0x9119, .a=0xcc, .x=0x83, .y=0x22, .sp=0x70, .status=0xc9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cf, .value=0x6b}, {.addr=0x9119, .value=0xeb}, {.addr=0x911a, .value=0xcf},
    };
    const struct CPU_State final_cpu = {.pc=0x911b, .a=0xcc, .x=0x83, .y=0x6b, .sp=0x70, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cf, .value=0x6b}, {.addr=0x9119, .value=0xeb}, {.addr=0x911a, .value=0xcf},
    };
    const struct BusEvent events[] = {
        {.addr=0x9119, .value=0xeb, .type=IO_READ},
        {.addr=0x911a, .value=0xcf, .type=IO_READ},
        {.addr=0x00cf, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03D0) {
    const struct CPU_State initial_cpu = {.pc=0x76de, .a=0x73, .x=0x12, .y=0xbe, .sp=0x2d, .status=0xb4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018e, .value=0xd2}, {.addr=0x76de, .value=0xeb}, {.addr=0x76df, .value=0x8e},
    };
    const struct CPU_State final_cpu = {.pc=0x76e0, .a=0x73, .x=0x12, .y=0xd2, .sp=0x2d, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x018e, .value=0xd2}, {.addr=0x76de, .value=0xeb}, {.addr=0x76df, .value=0x8e},
    };
    const struct BusEvent events[] = {
        {.addr=0x76de, .value=0xeb, .type=IO_READ},
        {.addr=0x76df, .value=0x8e, .type=IO_READ},
        {.addr=0x018e, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03D1) {
    const struct CPU_State initial_cpu = {.pc=0xcbd6, .a=0x7d, .x=0x17, .y=0x2d, .sp=0xde, .status=0x4c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0069, .value=0xd7}, {.addr=0xcbd6, .value=0xeb}, {.addr=0xcbd7, .value=0x69},
    };
    const struct CPU_State final_cpu = {.pc=0xcbd8, .a=0x7d, .x=0x17, .y=0xd7, .sp=0xde, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0069, .value=0xd7}, {.addr=0xcbd6, .value=0xeb}, {.addr=0xcbd7, .value=0x69},
    };
    const struct BusEvent events[] = {
        {.addr=0xcbd6, .value=0xeb, .type=IO_READ},
        {.addr=0xcbd7, .value=0x69, .type=IO_READ},
        {.addr=0x0069, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03D2) {
    const struct CPU_State initial_cpu = {.pc=0x72c5, .a=0xf4, .x=0x3f, .y=0xb0, .sp=0xd9, .status=0x28};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0181, .value=0x04}, {.addr=0x72c5, .value=0xeb}, {.addr=0x72c6, .value=0x81},
    };
    const struct CPU_State final_cpu = {.pc=0x72c7, .a=0xf4, .x=0x3f, .y=0x04, .sp=0xd9, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x0181, .value=0x04}, {.addr=0x72c5, .value=0xeb}, {.addr=0x72c6, .value=0x81},
    };
    const struct BusEvent events[] = {
        {.addr=0x72c5, .value=0xeb, .type=IO_READ},
        {.addr=0x72c6, .value=0x81, .type=IO_READ},
        {.addr=0x0181, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03D3) {
    const struct CPU_State initial_cpu = {.pc=0xdc42, .a=0x6b, .x=0x8b, .y=0x9c, .sp=0x5d, .status=0x88};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008f, .value=0xb0}, {.addr=0xdc42, .value=0xeb}, {.addr=0xdc43, .value=0x8f},
    };
    const struct CPU_State final_cpu = {.pc=0xdc44, .a=0x6b, .x=0x8b, .y=0xb0, .sp=0x5d, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x008f, .value=0xb0}, {.addr=0xdc42, .value=0xeb}, {.addr=0xdc43, .value=0x8f},
    };
    const struct BusEvent events[] = {
        {.addr=0xdc42, .value=0xeb, .type=IO_READ},
        {.addr=0xdc43, .value=0x8f, .type=IO_READ},
        {.addr=0x008f, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03D4) {
    const struct CPU_State initial_cpu = {.pc=0x1746, .a=0x42, .x=0x0f, .y=0x59, .sp=0x09, .status=0x63};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011b, .value=0xef}, {.addr=0x1746, .value=0xeb}, {.addr=0x1747, .value=0x1b},
    };
    const struct CPU_State final_cpu = {.pc=0x1748, .a=0x42, .x=0x0f, .y=0xef, .sp=0x09, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x011b, .value=0xef}, {.addr=0x1746, .value=0xeb}, {.addr=0x1747, .value=0x1b},
    };
    const struct BusEvent events[] = {
        {.addr=0x1746, .value=0xeb, .type=IO_READ},
        {.addr=0x1747, .value=0x1b, .type=IO_READ},
        {.addr=0x011b, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03D5) {
    const struct CPU_State initial_cpu = {.pc=0xc7e7, .a=0xc3, .x=0xb9, .y=0xb7, .sp=0xd1, .status=0xce};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d1, .value=0xc5}, {.addr=0xc7e7, .value=0xeb}, {.addr=0xc7e8, .value=0xd1},
    };
    const struct CPU_State final_cpu = {.pc=0xc7e9, .a=0xc3, .x=0xb9, .y=0xc5, .sp=0xd1, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d1, .value=0xc5}, {.addr=0xc7e7, .value=0xeb}, {.addr=0xc7e8, .value=0xd1},
    };
    const struct BusEvent events[] = {
        {.addr=0xc7e7, .value=0xeb, .type=IO_READ},
        {.addr=0xc7e8, .value=0xd1, .type=IO_READ},
        {.addr=0x00d1, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03D6) {
    const struct CPU_State initial_cpu = {.pc=0x1d1c, .a=0xef, .x=0x1c, .y=0x7d, .sp=0x4d, .status=0xa1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a3, .value=0xf6}, {.addr=0x1d1c, .value=0xeb}, {.addr=0x1d1d, .value=0xa3},
    };
    const struct CPU_State final_cpu = {.pc=0x1d1e, .a=0xef, .x=0x1c, .y=0xf6, .sp=0x4d, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a3, .value=0xf6}, {.addr=0x1d1c, .value=0xeb}, {.addr=0x1d1d, .value=0xa3},
    };
    const struct BusEvent events[] = {
        {.addr=0x1d1c, .value=0xeb, .type=IO_READ},
        {.addr=0x1d1d, .value=0xa3, .type=IO_READ},
        {.addr=0x01a3, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03D7) {
    const struct CPU_State initial_cpu = {.pc=0xd824, .a=0xb1, .x=0x60, .y=0xed, .sp=0xcf, .status=0x04};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0095, .value=0xb2}, {.addr=0xd824, .value=0xeb}, {.addr=0xd825, .value=0x95},
    };
    const struct CPU_State final_cpu = {.pc=0xd826, .a=0xb1, .x=0x60, .y=0xb2, .sp=0xcf, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x0095, .value=0xb2}, {.addr=0xd824, .value=0xeb}, {.addr=0xd825, .value=0x95},
    };
    const struct BusEvent events[] = {
        {.addr=0xd824, .value=0xeb, .type=IO_READ},
        {.addr=0xd825, .value=0x95, .type=IO_READ},
        {.addr=0x0095, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03D8) {
    const struct CPU_State initial_cpu = {.pc=0xe7f1, .a=0xfa, .x=0x9d, .y=0x78, .sp=0xfa, .status=0x1c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002a, .value=0xf3}, {.addr=0xe7f1, .value=0xeb}, {.addr=0xe7f2, .value=0x2a},
    };
    const struct CPU_State final_cpu = {.pc=0xe7f3, .a=0xfa, .x=0x9d, .y=0xf3, .sp=0xfa, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x002a, .value=0xf3}, {.addr=0xe7f1, .value=0xeb}, {.addr=0xe7f2, .value=0x2a},
    };
    const struct BusEvent events[] = {
        {.addr=0xe7f1, .value=0xeb, .type=IO_READ},
        {.addr=0xe7f2, .value=0x2a, .type=IO_READ},
        {.addr=0x002a, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03D9) {
    const struct CPU_State initial_cpu = {.pc=0xd774, .a=0x1a, .x=0xdb, .y=0xfc, .sp=0x13, .status=0x87};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009d, .value=0xaf}, {.addr=0xd774, .value=0xeb}, {.addr=0xd775, .value=0x9d},
    };
    const struct CPU_State final_cpu = {.pc=0xd776, .a=0x1a, .x=0xdb, .y=0xaf, .sp=0x13, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x009d, .value=0xaf}, {.addr=0xd774, .value=0xeb}, {.addr=0xd775, .value=0x9d},
    };
    const struct BusEvent events[] = {
        {.addr=0xd774, .value=0xeb, .type=IO_READ},
        {.addr=0xd775, .value=0x9d, .type=IO_READ},
        {.addr=0x009d, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03DA) {
    const struct CPU_State initial_cpu = {.pc=0x9314, .a=0xf5, .x=0x70, .y=0x3a, .sp=0x7e, .status=0xe7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d1, .value=0xab}, {.addr=0x9314, .value=0xeb}, {.addr=0x9315, .value=0xd1},
    };
    const struct CPU_State final_cpu = {.pc=0x9316, .a=0xf5, .x=0x70, .y=0xab, .sp=0x7e, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d1, .value=0xab}, {.addr=0x9314, .value=0xeb}, {.addr=0x9315, .value=0xd1},
    };
    const struct BusEvent events[] = {
        {.addr=0x9314, .value=0xeb, .type=IO_READ},
        {.addr=0x9315, .value=0xd1, .type=IO_READ},
        {.addr=0x01d1, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03DB) {
    const struct CPU_State initial_cpu = {.pc=0xbe2b, .a=0x60, .x=0x18, .y=0xf6, .sp=0xf7, .status=0xb0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018a, .value=0x73}, {.addr=0xbe2b, .value=0xeb}, {.addr=0xbe2c, .value=0x8a},
    };
    const struct CPU_State final_cpu = {.pc=0xbe2d, .a=0x60, .x=0x18, .y=0x73, .sp=0xf7, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x018a, .value=0x73}, {.addr=0xbe2b, .value=0xeb}, {.addr=0xbe2c, .value=0x8a},
    };
    const struct BusEvent events[] = {
        {.addr=0xbe2b, .value=0xeb, .type=IO_READ},
        {.addr=0xbe2c, .value=0x8a, .type=IO_READ},
        {.addr=0x018a, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03DC) {
    const struct CPU_State initial_cpu = {.pc=0x0c95, .a=0x0f, .x=0x8b, .y=0x01, .sp=0xc6, .status=0x18};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e5, .value=0xc7}, {.addr=0x0c95, .value=0xeb}, {.addr=0x0c96, .value=0xe5},
    };
    const struct CPU_State final_cpu = {.pc=0x0c97, .a=0x0f, .x=0x8b, .y=0xc7, .sp=0xc6, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e5, .value=0xc7}, {.addr=0x0c95, .value=0xeb}, {.addr=0x0c96, .value=0xe5},
    };
    const struct BusEvent events[] = {
        {.addr=0x0c95, .value=0xeb, .type=IO_READ},
        {.addr=0x0c96, .value=0xe5, .type=IO_READ},
        {.addr=0x00e5, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03DD) {
    const struct CPU_State initial_cpu = {.pc=0xb371, .a=0x55, .x=0x46, .y=0x30, .sp=0x66, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0036, .value=0xcb}, {.addr=0xb371, .value=0xeb}, {.addr=0xb372, .value=0x36},
    };
    const struct CPU_State final_cpu = {.pc=0xb373, .a=0x55, .x=0x46, .y=0xcb, .sp=0x66, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0036, .value=0xcb}, {.addr=0xb371, .value=0xeb}, {.addr=0xb372, .value=0x36},
    };
    const struct BusEvent events[] = {
        {.addr=0xb371, .value=0xeb, .type=IO_READ},
        {.addr=0xb372, .value=0x36, .type=IO_READ},
        {.addr=0x0036, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03DE) {
    const struct CPU_State initial_cpu = {.pc=0xebed, .a=0xe4, .x=0x47, .y=0x78, .sp=0x64, .status=0xb0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016e, .value=0xe3}, {.addr=0xebed, .value=0xeb}, {.addr=0xebee, .value=0x6e},
    };
    const struct CPU_State final_cpu = {.pc=0xebef, .a=0xe4, .x=0x47, .y=0xe3, .sp=0x64, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x016e, .value=0xe3}, {.addr=0xebed, .value=0xeb}, {.addr=0xebee, .value=0x6e},
    };
    const struct BusEvent events[] = {
        {.addr=0xebed, .value=0xeb, .type=IO_READ},
        {.addr=0xebee, .value=0x6e, .type=IO_READ},
        {.addr=0x016e, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03DF) {
    const struct CPU_State initial_cpu = {.pc=0xd864, .a=0xca, .x=0xde, .y=0x5d, .sp=0x59, .status=0xed};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0159, .value=0x74}, {.addr=0xd864, .value=0xeb}, {.addr=0xd865, .value=0x59},
    };
    const struct CPU_State final_cpu = {.pc=0xd866, .a=0xca, .x=0xde, .y=0x74, .sp=0x59, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0159, .value=0x74}, {.addr=0xd864, .value=0xeb}, {.addr=0xd865, .value=0x59},
    };
    const struct BusEvent events[] = {
        {.addr=0xd864, .value=0xeb, .type=IO_READ},
        {.addr=0xd865, .value=0x59, .type=IO_READ},
        {.addr=0x0159, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03E0) {
    const struct CPU_State initial_cpu = {.pc=0xd45b, .a=0x9c, .x=0x45, .y=0x24, .sp=0xe8, .status=0x44};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000c, .value=0x90}, {.addr=0xd45b, .value=0xeb}, {.addr=0xd45c, .value=0x0c},
    };
    const struct CPU_State final_cpu = {.pc=0xd45d, .a=0x9c, .x=0x45, .y=0x90, .sp=0xe8, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x000c, .value=0x90}, {.addr=0xd45b, .value=0xeb}, {.addr=0xd45c, .value=0x0c},
    };
    const struct BusEvent events[] = {
        {.addr=0xd45b, .value=0xeb, .type=IO_READ},
        {.addr=0xd45c, .value=0x0c, .type=IO_READ},
        {.addr=0x000c, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03E1) {
    const struct CPU_State initial_cpu = {.pc=0xc7b1, .a=0x17, .x=0x4d, .y=0xb8, .sp=0x58, .status=0xc3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a0, .value=0x25}, {.addr=0xc7b1, .value=0xeb}, {.addr=0xc7b2, .value=0xa0},
    };
    const struct CPU_State final_cpu = {.pc=0xc7b3, .a=0x17, .x=0x4d, .y=0x25, .sp=0x58, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a0, .value=0x25}, {.addr=0xc7b1, .value=0xeb}, {.addr=0xc7b2, .value=0xa0},
    };
    const struct BusEvent events[] = {
        {.addr=0xc7b1, .value=0xeb, .type=IO_READ},
        {.addr=0xc7b2, .value=0xa0, .type=IO_READ},
        {.addr=0x00a0, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03E2) {
    const struct CPU_State initial_cpu = {.pc=0xdd89, .a=0x90, .x=0xb9, .y=0x4f, .sp=0x46, .status=0x84};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b6, .value=0xab}, {.addr=0xdd89, .value=0xeb}, {.addr=0xdd8a, .value=0xb6},
    };
    const struct CPU_State final_cpu = {.pc=0xdd8b, .a=0x90, .x=0xb9, .y=0xab, .sp=0x46, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b6, .value=0xab}, {.addr=0xdd89, .value=0xeb}, {.addr=0xdd8a, .value=0xb6},
    };
    const struct BusEvent events[] = {
        {.addr=0xdd89, .value=0xeb, .type=IO_READ},
        {.addr=0xdd8a, .value=0xb6, .type=IO_READ},
        {.addr=0x00b6, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03E3) {
    const struct CPU_State initial_cpu = {.pc=0xf554, .a=0x0e, .x=0x0a, .y=0x59, .sp=0x16, .status=0x04};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ae, .value=0xf6}, {.addr=0xf554, .value=0xeb}, {.addr=0xf555, .value=0xae},
    };
    const struct CPU_State final_cpu = {.pc=0xf556, .a=0x0e, .x=0x0a, .y=0xf6, .sp=0x16, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ae, .value=0xf6}, {.addr=0xf554, .value=0xeb}, {.addr=0xf555, .value=0xae},
    };
    const struct BusEvent events[] = {
        {.addr=0xf554, .value=0xeb, .type=IO_READ},
        {.addr=0xf555, .value=0xae, .type=IO_READ},
        {.addr=0x00ae, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03E4) {
    const struct CPU_State initial_cpu = {.pc=0x8c13, .a=0xd4, .x=0x23, .y=0xaf, .sp=0x0e, .status=0xc9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004a, .value=0xf5}, {.addr=0x8c13, .value=0xeb}, {.addr=0x8c14, .value=0x4a},
    };
    const struct CPU_State final_cpu = {.pc=0x8c15, .a=0xd4, .x=0x23, .y=0xf5, .sp=0x0e, .status=0xc9};
    const struct RamEntry final_ram[] = {
        {.addr=0x004a, .value=0xf5}, {.addr=0x8c13, .value=0xeb}, {.addr=0x8c14, .value=0x4a},
    };
    const struct BusEvent events[] = {
        {.addr=0x8c13, .value=0xeb, .type=IO_READ},
        {.addr=0x8c14, .value=0x4a, .type=IO_READ},
        {.addr=0x004a, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03E5) {
    const struct CPU_State initial_cpu = {.pc=0x0e70, .a=0x0a, .x=0x36, .y=0x94, .sp=0x77, .status=0xd2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0018, .value=0x47}, {.addr=0x0e70, .value=0xeb}, {.addr=0x0e71, .value=0x18},
    };
    const struct CPU_State final_cpu = {.pc=0x0e72, .a=0x0a, .x=0x36, .y=0x47, .sp=0x77, .status=0x50};
    const struct RamEntry final_ram[] = {
        {.addr=0x0018, .value=0x47}, {.addr=0x0e70, .value=0xeb}, {.addr=0x0e71, .value=0x18},
    };
    const struct BusEvent events[] = {
        {.addr=0x0e70, .value=0xeb, .type=IO_READ},
        {.addr=0x0e71, .value=0x18, .type=IO_READ},
        {.addr=0x0018, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03E6) {
    const struct CPU_State initial_cpu = {.pc=0x4a48, .a=0xa9, .x=0xec, .y=0x37, .sp=0x35, .status=0x10};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0096, .value=0xba}, {.addr=0x4a48, .value=0xeb}, {.addr=0x4a49, .value=0x96},
    };
    const struct CPU_State final_cpu = {.pc=0x4a4a, .a=0xa9, .x=0xec, .y=0xba, .sp=0x35, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x0096, .value=0xba}, {.addr=0x4a48, .value=0xeb}, {.addr=0x4a49, .value=0x96},
    };
    const struct BusEvent events[] = {
        {.addr=0x4a48, .value=0xeb, .type=IO_READ},
        {.addr=0x4a49, .value=0x96, .type=IO_READ},
        {.addr=0x0096, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_EB, _EB_03E7) {
    const struct CPU_State initial_cpu = {.pc=0x61c1, .a=0x87, .x=0x17, .y=0xf2, .sp=0xcc, .status=0xe6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019f, .value=0xa7}, {.addr=0x61c1, .value=0xeb}, {.addr=0x61c2, .value=0x9f},
    };
    const struct CPU_State final_cpu = {.pc=0x61c3, .a=0x87, .x=0x17, .y=0xa7, .sp=0xcc, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x019f, .value=0xa7}, {.addr=0x61c1, .value=0xeb}, {.addr=0x61c2, .value=0x9f},
    };
    const struct BusEvent events[] = {
        {.addr=0x61c1, .value=0xeb, .type=IO_READ},
        {.addr=0x61c2, .value=0x9f, .type=IO_READ},
        {.addr=0x019f, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("EB 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
