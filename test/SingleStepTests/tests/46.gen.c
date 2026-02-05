#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_46, _46_0000) {
    const struct CPU_State initial_cpu = {.pc=0x575c, .a=0x7a, .x=0xdf, .y=0xde, .sp=0x73, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0x0e}, {.addr=0x575c, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x575d, .a=0x74, .x=0xdf, .y=0xde, .sp=0x73, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0x0e}, {.addr=0x575c, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x575c, .value=0x46, .type=IO_READ},
        {.addr=0x575d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01df, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0001) {
    const struct CPU_State initial_cpu = {.pc=0xb7a9, .a=0x5b, .x=0xb3, .y=0xe8, .sp=0x08, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0x0c}, {.addr=0xb7a9, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xb7aa, .a=0x57, .x=0xb3, .y=0xe8, .sp=0x08, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0x0c}, {.addr=0xb7a9, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xb7a9, .value=0x46, .type=IO_READ},
        {.addr=0xb7aa, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b3, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0002) {
    const struct CPU_State initial_cpu = {.pc=0x47b1, .a=0x1a, .x=0xd0, .y=0xac, .sp=0xf7, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x01d0, .value=0xd7}, {.addr=0x47b1, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x47b2, .a=0xcd, .x=0xd0, .y=0xac, .sp=0xf7, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x01d0, .value=0xd7}, {.addr=0x47b1, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x47b1, .value=0x46, .type=IO_READ},
        {.addr=0x47b2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d0, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0003) {
    const struct CPU_State initial_cpu = {.pc=0x8071, .a=0xf6, .x=0x31, .y=0x3a, .sp=0x7a, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x0031, .value=0xf2}, {.addr=0x8071, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x8072, .a=0x04, .x=0x31, .y=0x3a, .sp=0x7a, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x0031, .value=0xf2}, {.addr=0x8071, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x8071, .value=0x46, .type=IO_READ},
        {.addr=0x8072, .value=DUMMY, .type=IO_READ},
        {.addr=0x0031, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0004) {
    const struct CPU_State initial_cpu = {.pc=0x5174, .a=0x29, .x=0xd7, .y=0xff, .sp=0xf1, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x01d7, .value=0x37}, {.addr=0x5174, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x5175, .a=0x1e, .x=0xd7, .y=0xff, .sp=0xf1, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x01d7, .value=0x37}, {.addr=0x5174, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x5174, .value=0x46, .type=IO_READ},
        {.addr=0x5175, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d7, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0005) {
    const struct CPU_State initial_cpu = {.pc=0xdec6, .a=0x42, .x=0xa1, .y=0x77, .sp=0x62, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0x12}, {.addr=0xdec6, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xdec7, .a=0x50, .x=0xa1, .y=0x77, .sp=0x62, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0x12}, {.addr=0xdec6, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xdec6, .value=0x46, .type=IO_READ},
        {.addr=0xdec7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a1, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0006) {
    const struct CPU_State initial_cpu = {.pc=0x1fae, .a=0x81, .x=0x94, .y=0x7f, .sp=0x18, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x0194, .value=0x33}, {.addr=0x1fae, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x1faf, .a=0xb2, .x=0x94, .y=0x7f, .sp=0x18, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x0194, .value=0x33}, {.addr=0x1fae, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x1fae, .value=0x46, .type=IO_READ},
        {.addr=0x1faf, .value=DUMMY, .type=IO_READ},
        {.addr=0x0194, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0007) {
    const struct CPU_State initial_cpu = {.pc=0x453f, .a=0x8a, .x=0x2a, .y=0x1a, .sp=0xeb, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x012a, .value=0xad}, {.addr=0x453f, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x4540, .a=0x27, .x=0x2a, .y=0x1a, .sp=0xeb, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x012a, .value=0xad}, {.addr=0x453f, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x453f, .value=0x46, .type=IO_READ},
        {.addr=0x4540, .value=DUMMY, .type=IO_READ},
        {.addr=0x012a, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0008) {
    const struct CPU_State initial_cpu = {.pc=0x9e52, .a=0xa6, .x=0x61, .y=0x0c, .sp=0x15, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x0061, .value=0xd9}, {.addr=0x9e52, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x9e53, .a=0x7f, .x=0x61, .y=0x0c, .sp=0x15, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0061, .value=0xd9}, {.addr=0x9e52, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x9e52, .value=0x46, .type=IO_READ},
        {.addr=0x9e53, .value=DUMMY, .type=IO_READ},
        {.addr=0x0061, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0009) {
    const struct CPU_State initial_cpu = {.pc=0x0a0a, .a=0x97, .x=0x09, .y=0xb0, .sp=0x18, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x0109, .value=0x8b}, {.addr=0x0a0a, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x0a0b, .a=0x1c, .x=0x09, .y=0xb0, .sp=0x18, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0109, .value=0x8b}, {.addr=0x0a0a, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x0a0a, .value=0x46, .type=IO_READ},
        {.addr=0x0a0b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0109, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_000A) {
    const struct CPU_State initial_cpu = {.pc=0x505d, .a=0x07, .x=0x31, .y=0x37, .sp=0x96, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x0031, .value=0x9e}, {.addr=0x505d, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x505e, .a=0x99, .x=0x31, .y=0x37, .sp=0x96, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0031, .value=0x9e}, {.addr=0x505d, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x505d, .value=0x46, .type=IO_READ},
        {.addr=0x505e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0031, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_000B) {
    const struct CPU_State initial_cpu = {.pc=0xca42, .a=0x7d, .x=0x85, .y=0xee, .sp=0x98, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x0185, .value=0xbe}, {.addr=0xca42, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xca43, .a=0xc3, .x=0x85, .y=0xee, .sp=0x98, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x0185, .value=0xbe}, {.addr=0xca42, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xca42, .value=0x46, .type=IO_READ},
        {.addr=0xca43, .value=DUMMY, .type=IO_READ},
        {.addr=0x0185, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_000C) {
    const struct CPU_State initial_cpu = {.pc=0x216e, .a=0xa3, .x=0x7a, .y=0xd8, .sp=0x6a, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x007a, .value=0x8b}, {.addr=0x216e, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x216f, .a=0x28, .x=0x7a, .y=0xd8, .sp=0x6a, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x007a, .value=0x8b}, {.addr=0x216e, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x216e, .value=0x46, .type=IO_READ},
        {.addr=0x216f, .value=DUMMY, .type=IO_READ},
        {.addr=0x007a, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_000D) {
    const struct CPU_State initial_cpu = {.pc=0x09ef, .a=0x67, .x=0xa5, .y=0xf8, .sp=0x28, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0xdc}, {.addr=0x09ef, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x09f0, .a=0xbb, .x=0xa5, .y=0xf8, .sp=0x28, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0xdc}, {.addr=0x09ef, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x09ef, .value=0x46, .type=IO_READ},
        {.addr=0x09f0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a5, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_000E) {
    const struct CPU_State initial_cpu = {.pc=0xd8f3, .a=0x1a, .x=0xd4, .y=0xb9, .sp=0x16, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x01d4, .value=0x54}, {.addr=0xd8f3, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xd8f4, .a=0x4e, .x=0xd4, .y=0xb9, .sp=0x16, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x01d4, .value=0x54}, {.addr=0xd8f3, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xd8f3, .value=0x46, .type=IO_READ},
        {.addr=0xd8f4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d4, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_000F) {
    const struct CPU_State initial_cpu = {.pc=0x1a24, .a=0x35, .x=0x0d, .y=0xf2, .sp=0xc5, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x000d, .value=0x7c}, {.addr=0x1a24, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x1a25, .a=0x49, .x=0x0d, .y=0xf2, .sp=0xc5, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x000d, .value=0x7c}, {.addr=0x1a24, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x1a24, .value=0x46, .type=IO_READ},
        {.addr=0x1a25, .value=DUMMY, .type=IO_READ},
        {.addr=0x000d, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0010) {
    const struct CPU_State initial_cpu = {.pc=0x66cc, .a=0x68, .x=0xd0, .y=0xa0, .sp=0xc4, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x01d0, .value=0x62}, {.addr=0x66cc, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x66cd, .a=0x0a, .x=0xd0, .y=0xa0, .sp=0xc4, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x01d0, .value=0x62}, {.addr=0x66cc, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x66cc, .value=0x46, .type=IO_READ},
        {.addr=0x66cd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d0, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0011) {
    const struct CPU_State initial_cpu = {.pc=0xfd48, .a=0x87, .x=0xc6, .y=0x3a, .sp=0xab, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x01c6, .value=0xcb}, {.addr=0xfd48, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xfd49, .a=0x4c, .x=0xc6, .y=0x3a, .sp=0xab, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x01c6, .value=0xcb}, {.addr=0xfd48, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xfd48, .value=0x46, .type=IO_READ},
        {.addr=0xfd49, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c6, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0012) {
    const struct CPU_State initial_cpu = {.pc=0xb0c2, .a=0x0e, .x=0xec, .y=0x67, .sp=0xde, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x01ec, .value=0x07}, {.addr=0xb0c2, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xb0c3, .a=0x09, .x=0xec, .y=0x67, .sp=0xde, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x01ec, .value=0x07}, {.addr=0xb0c2, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xb0c2, .value=0x46, .type=IO_READ},
        {.addr=0xb0c3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ec, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0013) {
    const struct CPU_State initial_cpu = {.pc=0xe145, .a=0xac, .x=0x60, .y=0x76, .sp=0x9e, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x0160, .value=0x3b}, {.addr=0xe145, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xe146, .a=0x97, .x=0x60, .y=0x76, .sp=0x9e, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x0160, .value=0x3b}, {.addr=0xe145, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xe145, .value=0x46, .type=IO_READ},
        {.addr=0xe146, .value=DUMMY, .type=IO_READ},
        {.addr=0x0160, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0014) {
    const struct CPU_State initial_cpu = {.pc=0xcb0b, .a=0x18, .x=0x44, .y=0x95, .sp=0xff, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x0044, .value=0x31}, {.addr=0xcb0b, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xcb0c, .a=0x29, .x=0x44, .y=0x95, .sp=0xff, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x0044, .value=0x31}, {.addr=0xcb0b, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xcb0b, .value=0x46, .type=IO_READ},
        {.addr=0xcb0c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0044, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0015) {
    const struct CPU_State initial_cpu = {.pc=0x7f1a, .a=0xa6, .x=0x3a, .y=0x62, .sp=0xf9, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x003a, .value=0x4b}, {.addr=0x7f1a, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x7f1b, .a=0xed, .x=0x3a, .y=0x62, .sp=0xf9, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x003a, .value=0x4b}, {.addr=0x7f1a, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x7f1a, .value=0x46, .type=IO_READ},
        {.addr=0x7f1b, .value=DUMMY, .type=IO_READ},
        {.addr=0x003a, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0016) {
    const struct CPU_State initial_cpu = {.pc=0xee71, .a=0x2b, .x=0x1d, .y=0xda, .sp=0x42, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x001d, .value=0x39}, {.addr=0xee71, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xee72, .a=0x12, .x=0x1d, .y=0xda, .sp=0x42, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x001d, .value=0x39}, {.addr=0xee71, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xee71, .value=0x46, .type=IO_READ},
        {.addr=0xee72, .value=DUMMY, .type=IO_READ},
        {.addr=0x001d, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0017) {
    const struct CPU_State initial_cpu = {.pc=0x80c5, .a=0x44, .x=0x03, .y=0xb5, .sp=0x8b, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x0003, .value=0xff}, {.addr=0x80c5, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x80c6, .a=0xbb, .x=0x03, .y=0xb5, .sp=0x8b, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x0003, .value=0xff}, {.addr=0x80c5, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x80c5, .value=0x46, .type=IO_READ},
        {.addr=0x80c6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0003, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0018) {
    const struct CPU_State initial_cpu = {.pc=0xfc29, .a=0xf4, .x=0x0a, .y=0x36, .sp=0x1f, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0x08}, {.addr=0xfc29, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xfc2a, .a=0xfc, .x=0x0a, .y=0x36, .sp=0x1f, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0x08}, {.addr=0xfc29, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xfc29, .value=0x46, .type=IO_READ},
        {.addr=0xfc2a, .value=DUMMY, .type=IO_READ},
        {.addr=0x010a, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0019) {
    const struct CPU_State initial_cpu = {.pc=0x09a7, .a=0xf6, .x=0x95, .y=0xf3, .sp=0x99, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x0195, .value=0x2f}, {.addr=0x09a7, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x09a8, .a=0xd9, .x=0x95, .y=0xf3, .sp=0x99, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x0195, .value=0x2f}, {.addr=0x09a7, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x09a7, .value=0x46, .type=IO_READ},
        {.addr=0x09a8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0195, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_001B) {
    const struct CPU_State initial_cpu = {.pc=0x6161, .a=0x83, .x=0xfa, .y=0x49, .sp=0x44, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x01fa, .value=0x01}, {.addr=0x6161, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x6162, .a=0x82, .x=0xfa, .y=0x49, .sp=0x44, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x01fa, .value=0x01}, {.addr=0x6161, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x6161, .value=0x46, .type=IO_READ},
        {.addr=0x6162, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fa, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_001C) {
    const struct CPU_State initial_cpu = {.pc=0x6438, .a=0xd6, .x=0x87, .y=0x56, .sp=0xd6, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x0187, .value=0xb9}, {.addr=0x6438, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x6439, .a=0x6f, .x=0x87, .y=0x56, .sp=0xd6, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x0187, .value=0xb9}, {.addr=0x6438, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x6438, .value=0x46, .type=IO_READ},
        {.addr=0x6439, .value=DUMMY, .type=IO_READ},
        {.addr=0x0187, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_001D) {
    const struct CPU_State initial_cpu = {.pc=0x9101, .a=0x16, .x=0x12, .y=0x04, .sp=0x27, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0xaf}, {.addr=0x9101, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x9102, .a=0xb9, .x=0x12, .y=0x04, .sp=0x27, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0xaf}, {.addr=0x9101, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x9101, .value=0x46, .type=IO_READ},
        {.addr=0x9102, .value=DUMMY, .type=IO_READ},
        {.addr=0x0112, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_001E) {
    const struct CPU_State initial_cpu = {.pc=0x6584, .a=0x71, .x=0x84, .y=0x06, .sp=0xf7, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0x18}, {.addr=0x6584, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x6585, .a=0x69, .x=0x84, .y=0x06, .sp=0xf7, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0x18}, {.addr=0x6584, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x6584, .value=0x46, .type=IO_READ},
        {.addr=0x6585, .value=DUMMY, .type=IO_READ},
        {.addr=0x0184, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_001F) {
    const struct CPU_State initial_cpu = {.pc=0x834e, .a=0x7a, .x=0xce, .y=0x0e, .sp=0x30, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x00ce, .value=0x7b}, {.addr=0x834e, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x834f, .a=0x01, .x=0xce, .y=0x0e, .sp=0x30, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x00ce, .value=0x7b}, {.addr=0x834e, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x834e, .value=0x46, .type=IO_READ},
        {.addr=0x834f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ce, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0020) {
    const struct CPU_State initial_cpu = {.pc=0x5303, .a=0xd0, .x=0xdc, .y=0x47, .sp=0x23, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x00dc, .value=0xe4}, {.addr=0x5303, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x5304, .a=0x34, .x=0xdc, .y=0x47, .sp=0x23, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x00dc, .value=0xe4}, {.addr=0x5303, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x5303, .value=0x46, .type=IO_READ},
        {.addr=0x5304, .value=DUMMY, .type=IO_READ},
        {.addr=0x00dc, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0021) {
    const struct CPU_State initial_cpu = {.pc=0x4abe, .a=0x10, .x=0x57, .y=0x6a, .sp=0x8e, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x0057, .value=0x7a}, {.addr=0x4abe, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x4abf, .a=0x6a, .x=0x57, .y=0x6a, .sp=0x8e, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x0057, .value=0x7a}, {.addr=0x4abe, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x4abe, .value=0x46, .type=IO_READ},
        {.addr=0x4abf, .value=DUMMY, .type=IO_READ},
        {.addr=0x0057, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0022) {
    const struct CPU_State initial_cpu = {.pc=0x70af, .a=0x72, .x=0x04, .y=0x00, .sp=0x31, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0x3e}, {.addr=0x70af, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x70b0, .a=0x4c, .x=0x04, .y=0x00, .sp=0x31, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0x3e}, {.addr=0x70af, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x70af, .value=0x46, .type=IO_READ},
        {.addr=0x70b0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0104, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0023) {
    const struct CPU_State initial_cpu = {.pc=0xa383, .a=0xb7, .x=0xa6, .y=0x85, .sp=0x6f, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x01a6, .value=0x2f}, {.addr=0xa383, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xa384, .a=0x98, .x=0xa6, .y=0x85, .sp=0x6f, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x01a6, .value=0x2f}, {.addr=0xa383, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xa383, .value=0x46, .type=IO_READ},
        {.addr=0xa384, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a6, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0024) {
    const struct CPU_State initial_cpu = {.pc=0x2b54, .a=0x6c, .x=0xd7, .y=0xdc, .sp=0xed, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x01d7, .value=0xfb}, {.addr=0x2b54, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x2b55, .a=0x97, .x=0xd7, .y=0xdc, .sp=0xed, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x01d7, .value=0xfb}, {.addr=0x2b54, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x2b54, .value=0x46, .type=IO_READ},
        {.addr=0x2b55, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d7, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0025) {
    const struct CPU_State initial_cpu = {.pc=0x1326, .a=0x27, .x=0x9a, .y=0xad, .sp=0x0b, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x009a, .value=0x36}, {.addr=0x1326, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x1327, .a=0x11, .x=0x9a, .y=0xad, .sp=0x0b, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x009a, .value=0x36}, {.addr=0x1326, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x1326, .value=0x46, .type=IO_READ},
        {.addr=0x1327, .value=DUMMY, .type=IO_READ},
        {.addr=0x009a, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0026) {
    const struct CPU_State initial_cpu = {.pc=0x9562, .a=0x87, .x=0x58, .y=0x3e, .sp=0x70, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x0058, .value=0x20}, {.addr=0x9562, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x9563, .a=0xa7, .x=0x58, .y=0x3e, .sp=0x70, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x0058, .value=0x20}, {.addr=0x9562, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x9562, .value=0x46, .type=IO_READ},
        {.addr=0x9563, .value=DUMMY, .type=IO_READ},
        {.addr=0x0058, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0027) {
    const struct CPU_State initial_cpu = {.pc=0xcb15, .a=0x88, .x=0x2d, .y=0xb5, .sp=0x25, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x012d, .value=0x26}, {.addr=0xcb15, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xcb16, .a=0xae, .x=0x2d, .y=0xb5, .sp=0x25, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x012d, .value=0x26}, {.addr=0xcb15, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xcb15, .value=0x46, .type=IO_READ},
        {.addr=0xcb16, .value=DUMMY, .type=IO_READ},
        {.addr=0x012d, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0028) {
    const struct CPU_State initial_cpu = {.pc=0xabf6, .a=0x28, .x=0xae, .y=0xee, .sp=0x14, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x01ae, .value=0x9a}, {.addr=0xabf6, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xabf7, .a=0xb2, .x=0xae, .y=0xee, .sp=0x14, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x01ae, .value=0x9a}, {.addr=0xabf6, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xabf6, .value=0x46, .type=IO_READ},
        {.addr=0xabf7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ae, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0029) {
    const struct CPU_State initial_cpu = {.pc=0x9e66, .a=0x96, .x=0xa0, .y=0x62, .sp=0xf6, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x00a0, .value=0xbc}, {.addr=0x9e66, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x9e67, .a=0x2a, .x=0xa0, .y=0x62, .sp=0xf6, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x00a0, .value=0xbc}, {.addr=0x9e66, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x9e66, .value=0x46, .type=IO_READ},
        {.addr=0x9e67, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a0, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_002A) {
    const struct CPU_State initial_cpu = {.pc=0x893c, .a=0x00, .x=0xc2, .y=0x07, .sp=0x9f, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x00c2, .value=0xe0}, {.addr=0x893c, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x893d, .a=0xe0, .x=0xc2, .y=0x07, .sp=0x9f, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x00c2, .value=0xe0}, {.addr=0x893c, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x893c, .value=0x46, .type=IO_READ},
        {.addr=0x893d, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c2, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_002B) {
    const struct CPU_State initial_cpu = {.pc=0xcdd9, .a=0x9e, .x=0x55, .y=0x8c, .sp=0x0c, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0x1b}, {.addr=0xcdd9, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xcdda, .a=0x85, .x=0x55, .y=0x8c, .sp=0x0c, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0x1b}, {.addr=0xcdd9, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xcdd9, .value=0x46, .type=IO_READ},
        {.addr=0xcdda, .value=DUMMY, .type=IO_READ},
        {.addr=0x0155, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_002C) {
    const struct CPU_State initial_cpu = {.pc=0x985b, .a=0x39, .x=0x9c, .y=0x85, .sp=0x18, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x009c, .value=0xfb}, {.addr=0x985b, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x985c, .a=0xc2, .x=0x9c, .y=0x85, .sp=0x18, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x009c, .value=0xfb}, {.addr=0x985b, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x985b, .value=0x46, .type=IO_READ},
        {.addr=0x985c, .value=DUMMY, .type=IO_READ},
        {.addr=0x009c, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_002D) {
    const struct CPU_State initial_cpu = {.pc=0x90b4, .a=0x3c, .x=0x52, .y=0x12, .sp=0x83, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x0052, .value=0x54}, {.addr=0x90b4, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x90b5, .a=0x68, .x=0x52, .y=0x12, .sp=0x83, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x0052, .value=0x54}, {.addr=0x90b4, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x90b4, .value=0x46, .type=IO_READ},
        {.addr=0x90b5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0052, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_002E) {
    const struct CPU_State initial_cpu = {.pc=0xd187, .a=0x96, .x=0xcb, .y=0x30, .sp=0xd9, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x01cb, .value=0x49}, {.addr=0xd187, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xd188, .a=0xdf, .x=0xcb, .y=0x30, .sp=0xd9, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x01cb, .value=0x49}, {.addr=0xd187, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xd187, .value=0x46, .type=IO_READ},
        {.addr=0xd188, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cb, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_002F) {
    const struct CPU_State initial_cpu = {.pc=0x3709, .a=0x30, .x=0x3d, .y=0x98, .sp=0x52, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x003d, .value=0x29}, {.addr=0x3709, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x370a, .a=0x19, .x=0x3d, .y=0x98, .sp=0x52, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x003d, .value=0x29}, {.addr=0x3709, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x3709, .value=0x46, .type=IO_READ},
        {.addr=0x370a, .value=DUMMY, .type=IO_READ},
        {.addr=0x003d, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0030) {
    const struct CPU_State initial_cpu = {.pc=0xc233, .a=0x1a, .x=0xf7, .y=0xbc, .sp=0x2d, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x01f7, .value=0x0b}, {.addr=0xc233, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xc234, .a=0x11, .x=0xf7, .y=0xbc, .sp=0x2d, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x01f7, .value=0x0b}, {.addr=0xc233, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xc233, .value=0x46, .type=IO_READ},
        {.addr=0xc234, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f7, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0031) {
    const struct CPU_State initial_cpu = {.pc=0xd0a4, .a=0x7c, .x=0xd3, .y=0xea, .sp=0x27, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x01d3, .value=0x12}, {.addr=0xd0a4, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xd0a5, .a=0x6e, .x=0xd3, .y=0xea, .sp=0x27, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x01d3, .value=0x12}, {.addr=0xd0a4, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xd0a4, .value=0x46, .type=IO_READ},
        {.addr=0xd0a5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d3, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0032) {
    const struct CPU_State initial_cpu = {.pc=0xf40b, .a=0x02, .x=0x3c, .y=0xd2, .sp=0xe0, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0x9e}, {.addr=0xf40b, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xf40c, .a=0x9c, .x=0x3c, .y=0xd2, .sp=0xe0, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0x9e}, {.addr=0xf40b, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xf40b, .value=0x46, .type=IO_READ},
        {.addr=0xf40c, .value=DUMMY, .type=IO_READ},
        {.addr=0x013c, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0033) {
    const struct CPU_State initial_cpu = {.pc=0x7ec1, .a=0xbf, .x=0x87, .y=0x46, .sp=0x7b, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x0187, .value=0xbc}, {.addr=0x7ec1, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x7ec2, .a=0x03, .x=0x87, .y=0x46, .sp=0x7b, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x0187, .value=0xbc}, {.addr=0x7ec1, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x7ec1, .value=0x46, .type=IO_READ},
        {.addr=0x7ec2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0187, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0034) {
    const struct CPU_State initial_cpu = {.pc=0xd8de, .a=0xb6, .x=0xce, .y=0x92, .sp=0x74, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x01ce, .value=0x9d}, {.addr=0xd8de, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xd8df, .a=0x2b, .x=0xce, .y=0x92, .sp=0x74, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01ce, .value=0x9d}, {.addr=0xd8de, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xd8de, .value=0x46, .type=IO_READ},
        {.addr=0xd8df, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ce, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0035) {
    const struct CPU_State initial_cpu = {.pc=0x4a83, .a=0xa1, .x=0xa3, .y=0xf4, .sp=0x6e, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x01a3, .value=0xa8}, {.addr=0x4a83, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x4a84, .a=0x09, .x=0xa3, .y=0xf4, .sp=0x6e, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x01a3, .value=0xa8}, {.addr=0x4a83, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x4a83, .value=0x46, .type=IO_READ},
        {.addr=0x4a84, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a3, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0036) {
    const struct CPU_State initial_cpu = {.pc=0x24c3, .a=0x20, .x=0x38, .y=0xad, .sp=0xa9, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x0138, .value=0x67}, {.addr=0x24c3, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x24c4, .a=0x47, .x=0x38, .y=0xad, .sp=0xa9, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x0138, .value=0x67}, {.addr=0x24c3, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x24c3, .value=0x46, .type=IO_READ},
        {.addr=0x24c4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0138, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0037) {
    const struct CPU_State initial_cpu = {.pc=0x7e85, .a=0xed, .x=0x3b, .y=0x65, .sp=0x19, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x013b, .value=0xa8}, {.addr=0x7e85, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x7e86, .a=0x45, .x=0x3b, .y=0x65, .sp=0x19, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x013b, .value=0xa8}, {.addr=0x7e85, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x7e85, .value=0x46, .type=IO_READ},
        {.addr=0x7e86, .value=DUMMY, .type=IO_READ},
        {.addr=0x013b, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0038) {
    const struct CPU_State initial_cpu = {.pc=0x845b, .a=0xf8, .x=0x98, .y=0xa1, .sp=0xdd, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x0198, .value=0x8d}, {.addr=0x845b, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x845c, .a=0x75, .x=0x98, .y=0xa1, .sp=0xdd, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x0198, .value=0x8d}, {.addr=0x845b, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x845b, .value=0x46, .type=IO_READ},
        {.addr=0x845c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0198, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0039) {
    const struct CPU_State initial_cpu = {.pc=0xb892, .a=0xc9, .x=0x3d, .y=0x5c, .sp=0xeb, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x003d, .value=0x92}, {.addr=0xb892, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xb893, .a=0x5b, .x=0x3d, .y=0x5c, .sp=0xeb, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x003d, .value=0x92}, {.addr=0xb892, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xb892, .value=0x46, .type=IO_READ},
        {.addr=0xb893, .value=DUMMY, .type=IO_READ},
        {.addr=0x003d, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_003A) {
    const struct CPU_State initial_cpu = {.pc=0xa977, .a=0x22, .x=0x7d, .y=0xaf, .sp=0x4d, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x007d, .value=0x93}, {.addr=0xa977, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xa978, .a=0xb1, .x=0x7d, .y=0xaf, .sp=0x4d, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x007d, .value=0x93}, {.addr=0xa977, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xa977, .value=0x46, .type=IO_READ},
        {.addr=0xa978, .value=DUMMY, .type=IO_READ},
        {.addr=0x007d, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_003B) {
    const struct CPU_State initial_cpu = {.pc=0xed91, .a=0x7c, .x=0x57, .y=0x44, .sp=0xf8, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x0157, .value=0x00}, {.addr=0xed91, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xed92, .a=0x7c, .x=0x57, .y=0x44, .sp=0xf8, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x0157, .value=0x00}, {.addr=0xed91, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xed91, .value=0x46, .type=IO_READ},
        {.addr=0xed92, .value=DUMMY, .type=IO_READ},
        {.addr=0x0157, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_003C) {
    const struct CPU_State initial_cpu = {.pc=0x9004, .a=0x2a, .x=0x30, .y=0x4a, .sp=0xd1, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x0130, .value=0x11}, {.addr=0x9004, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x9005, .a=0x3b, .x=0x30, .y=0x4a, .sp=0xd1, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x0130, .value=0x11}, {.addr=0x9004, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x9004, .value=0x46, .type=IO_READ},
        {.addr=0x9005, .value=DUMMY, .type=IO_READ},
        {.addr=0x0130, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_003D) {
    const struct CPU_State initial_cpu = {.pc=0x0e63, .a=0xab, .x=0x9f, .y=0xb5, .sp=0x61, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x019f, .value=0xb0}, {.addr=0x0e63, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x0e64, .a=0x1b, .x=0x9f, .y=0xb5, .sp=0x61, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x019f, .value=0xb0}, {.addr=0x0e63, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x0e63, .value=0x46, .type=IO_READ},
        {.addr=0x0e64, .value=DUMMY, .type=IO_READ},
        {.addr=0x019f, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_003E) {
    const struct CPU_State initial_cpu = {.pc=0x9812, .a=0x28, .x=0x74, .y=0xb6, .sp=0x5a, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x0174, .value=0x49}, {.addr=0x9812, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x9813, .a=0x61, .x=0x74, .y=0xb6, .sp=0x5a, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x0174, .value=0x49}, {.addr=0x9812, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x9812, .value=0x46, .type=IO_READ},
        {.addr=0x9813, .value=DUMMY, .type=IO_READ},
        {.addr=0x0174, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_003F) {
    const struct CPU_State initial_cpu = {.pc=0x54a2, .a=0xc0, .x=0x6d, .y=0x90, .sp=0xfa, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x016d, .value=0x55}, {.addr=0x54a2, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x54a3, .a=0x95, .x=0x6d, .y=0x90, .sp=0xfa, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x016d, .value=0x55}, {.addr=0x54a2, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x54a2, .value=0x46, .type=IO_READ},
        {.addr=0x54a3, .value=DUMMY, .type=IO_READ},
        {.addr=0x016d, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0040) {
    const struct CPU_State initial_cpu = {.pc=0x4586, .a=0xc1, .x=0x74, .y=0xfc, .sp=0x38, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x0074, .value=0xa0}, {.addr=0x4586, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x4587, .a=0x61, .x=0x74, .y=0xfc, .sp=0x38, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0074, .value=0xa0}, {.addr=0x4586, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x4586, .value=0x46, .type=IO_READ},
        {.addr=0x4587, .value=DUMMY, .type=IO_READ},
        {.addr=0x0074, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0041) {
    const struct CPU_State initial_cpu = {.pc=0xc337, .a=0xa2, .x=0x92, .y=0x9e, .sp=0x6b, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x0192, .value=0xd7}, {.addr=0xc337, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xc338, .a=0x75, .x=0x92, .y=0x9e, .sp=0x6b, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x0192, .value=0xd7}, {.addr=0xc337, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xc337, .value=0x46, .type=IO_READ},
        {.addr=0xc338, .value=DUMMY, .type=IO_READ},
        {.addr=0x0192, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0042) {
    const struct CPU_State initial_cpu = {.pc=0x14a2, .a=0xd2, .x=0x14, .y=0x96, .sp=0xaf, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x0014, .value=0xa8}, {.addr=0x14a2, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x14a3, .a=0x7a, .x=0x14, .y=0x96, .sp=0xaf, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x0014, .value=0xa8}, {.addr=0x14a2, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x14a2, .value=0x46, .type=IO_READ},
        {.addr=0x14a3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0014, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0043) {
    const struct CPU_State initial_cpu = {.pc=0x91b6, .a=0xe2, .x=0x77, .y=0xe9, .sp=0x64, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x0077, .value=0xcb}, {.addr=0x91b6, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x91b7, .a=0x29, .x=0x77, .y=0xe9, .sp=0x64, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x0077, .value=0xcb}, {.addr=0x91b6, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x91b6, .value=0x46, .type=IO_READ},
        {.addr=0x91b7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0077, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0044) {
    const struct CPU_State initial_cpu = {.pc=0x6672, .a=0x85, .x=0x4c, .y=0xf7, .sp=0xbf, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x014c, .value=0x26}, {.addr=0x6672, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x6673, .a=0xa3, .x=0x4c, .y=0xf7, .sp=0xbf, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x014c, .value=0x26}, {.addr=0x6672, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x6672, .value=0x46, .type=IO_READ},
        {.addr=0x6673, .value=DUMMY, .type=IO_READ},
        {.addr=0x014c, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0045) {
    const struct CPU_State initial_cpu = {.pc=0xc70b, .a=0x65, .x=0x20, .y=0xd0, .sp=0x43, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x0020, .value=0xeb}, {.addr=0xc70b, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xc70c, .a=0x8e, .x=0x20, .y=0xd0, .sp=0x43, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x0020, .value=0xeb}, {.addr=0xc70b, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xc70b, .value=0x46, .type=IO_READ},
        {.addr=0xc70c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0020, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0046) {
    const struct CPU_State initial_cpu = {.pc=0x2ab9, .a=0x8a, .x=0x4c, .y=0xba, .sp=0xdf, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x004c, .value=0xac}, {.addr=0x2ab9, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x2aba, .a=0x26, .x=0x4c, .y=0xba, .sp=0xdf, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x004c, .value=0xac}, {.addr=0x2ab9, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x2ab9, .value=0x46, .type=IO_READ},
        {.addr=0x2aba, .value=DUMMY, .type=IO_READ},
        {.addr=0x004c, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0047) {
    const struct CPU_State initial_cpu = {.pc=0x3d71, .a=0xe0, .x=0x18, .y=0x28, .sp=0x2f, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x0118, .value=0xc5}, {.addr=0x3d71, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x3d72, .a=0x25, .x=0x18, .y=0x28, .sp=0x2f, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x0118, .value=0xc5}, {.addr=0x3d71, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x3d71, .value=0x46, .type=IO_READ},
        {.addr=0x3d72, .value=DUMMY, .type=IO_READ},
        {.addr=0x0118, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0048) {
    const struct CPU_State initial_cpu = {.pc=0x0095, .a=0x7f, .x=0xa1, .y=0xf3, .sp=0x28, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x0095, .value=0x46}, {.addr=0x00a1, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0x0096, .a=0x6f, .x=0xa1, .y=0xf3, .sp=0x28, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0095, .value=0x46}, {.addr=0x00a1, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0x0095, .value=0x46, .type=IO_READ},
        {.addr=0x0096, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a1, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0049) {
    const struct CPU_State initial_cpu = {.pc=0xeca8, .a=0xb8, .x=0xd0, .y=0x54, .sp=0xc6, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x00d0, .value=0xae}, {.addr=0xeca8, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xeca9, .a=0x16, .x=0xd0, .y=0x54, .sp=0xc6, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x00d0, .value=0xae}, {.addr=0xeca8, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xeca8, .value=0x46, .type=IO_READ},
        {.addr=0xeca9, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d0, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_004A) {
    const struct CPU_State initial_cpu = {.pc=0xb835, .a=0x56, .x=0x5f, .y=0xba, .sp=0x60, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x005f, .value=0x95}, {.addr=0xb835, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xb836, .a=0xc3, .x=0x5f, .y=0xba, .sp=0x60, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x005f, .value=0x95}, {.addr=0xb835, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xb835, .value=0x46, .type=IO_READ},
        {.addr=0xb836, .value=DUMMY, .type=IO_READ},
        {.addr=0x005f, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_004B) {
    const struct CPU_State initial_cpu = {.pc=0x4409, .a=0x7c, .x=0xe1, .y=0x31, .sp=0x2c, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x00e1, .value=0x3f}, {.addr=0x4409, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x440a, .a=0x43, .x=0xe1, .y=0x31, .sp=0x2c, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x00e1, .value=0x3f}, {.addr=0x4409, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x4409, .value=0x46, .type=IO_READ},
        {.addr=0x440a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e1, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_004C) {
    const struct CPU_State initial_cpu = {.pc=0x8e89, .a=0x96, .x=0x80, .y=0x4e, .sp=0x1f, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x0080, .value=0xff}, {.addr=0x8e89, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x8e8a, .a=0x69, .x=0x80, .y=0x4e, .sp=0x1f, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0080, .value=0xff}, {.addr=0x8e89, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x8e89, .value=0x46, .type=IO_READ},
        {.addr=0x8e8a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0080, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_004D) {
    const struct CPU_State initial_cpu = {.pc=0x9e03, .a=0x40, .x=0xe1, .y=0xad, .sp=0x07, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x00e1, .value=0x6d}, {.addr=0x9e03, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x9e04, .a=0x2d, .x=0xe1, .y=0xad, .sp=0x07, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x00e1, .value=0x6d}, {.addr=0x9e03, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x9e03, .value=0x46, .type=IO_READ},
        {.addr=0x9e04, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e1, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_004E) {
    const struct CPU_State initial_cpu = {.pc=0x12fa, .a=0x63, .x=0xe7, .y=0x8f, .sp=0x0f, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x01e7, .value=0x16}, {.addr=0x12fa, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x12fb, .a=0x75, .x=0xe7, .y=0x8f, .sp=0x0f, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x01e7, .value=0x16}, {.addr=0x12fa, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x12fa, .value=0x46, .type=IO_READ},
        {.addr=0x12fb, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e7, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_004F) {
    const struct CPU_State initial_cpu = {.pc=0x6b31, .a=0xbe, .x=0x93, .y=0x3e, .sp=0x7f, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x0093, .value=0x12}, {.addr=0x6b31, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x6b32, .a=0xac, .x=0x93, .y=0x3e, .sp=0x7f, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x0093, .value=0x12}, {.addr=0x6b31, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x6b31, .value=0x46, .type=IO_READ},
        {.addr=0x6b32, .value=DUMMY, .type=IO_READ},
        {.addr=0x0093, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0050) {
    const struct CPU_State initial_cpu = {.pc=0x884e, .a=0x55, .x=0x57, .y=0x94, .sp=0x53, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x0057, .value=0x9d}, {.addr=0x884e, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x884f, .a=0xc8, .x=0x57, .y=0x94, .sp=0x53, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x0057, .value=0x9d}, {.addr=0x884e, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x884e, .value=0x46, .type=IO_READ},
        {.addr=0x884f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0057, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0051) {
    const struct CPU_State initial_cpu = {.pc=0xcd33, .a=0x3f, .x=0xb4, .y=0x49, .sp=0x99, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x01b4, .value=0x82}, {.addr=0xcd33, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xcd34, .a=0xbd, .x=0xb4, .y=0x49, .sp=0x99, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x01b4, .value=0x82}, {.addr=0xcd33, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xcd33, .value=0x46, .type=IO_READ},
        {.addr=0xcd34, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b4, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0052) {
    const struct CPU_State initial_cpu = {.pc=0xe778, .a=0xad, .x=0x19, .y=0x0b, .sp=0x20, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x0119, .value=0x21}, {.addr=0xe778, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xe779, .a=0x8c, .x=0x19, .y=0x0b, .sp=0x20, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x0119, .value=0x21}, {.addr=0xe778, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xe778, .value=0x46, .type=IO_READ},
        {.addr=0xe779, .value=DUMMY, .type=IO_READ},
        {.addr=0x0119, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0053) {
    const struct CPU_State initial_cpu = {.pc=0xe841, .a=0x79, .x=0xe3, .y=0xaa, .sp=0x8a, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x00e3, .value=0x05}, {.addr=0xe841, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xe842, .a=0x7c, .x=0xe3, .y=0xaa, .sp=0x8a, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x00e3, .value=0x05}, {.addr=0xe841, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xe841, .value=0x46, .type=IO_READ},
        {.addr=0xe842, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e3, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0054) {
    const struct CPU_State initial_cpu = {.pc=0xfe9e, .a=0xa8, .x=0x6b, .y=0x8a, .sp=0xaa, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x006b, .value=0x49}, {.addr=0xfe9e, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xfe9f, .a=0xe1, .x=0x6b, .y=0x8a, .sp=0xaa, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x006b, .value=0x49}, {.addr=0xfe9e, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xfe9e, .value=0x46, .type=IO_READ},
        {.addr=0xfe9f, .value=DUMMY, .type=IO_READ},
        {.addr=0x006b, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0055) {
    const struct CPU_State initial_cpu = {.pc=0xe556, .a=0x17, .x=0xf8, .y=0xf0, .sp=0xe9, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x01f8, .value=0xcd}, {.addr=0xe556, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xe557, .a=0xda, .x=0xf8, .y=0xf0, .sp=0xe9, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x01f8, .value=0xcd}, {.addr=0xe556, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xe556, .value=0x46, .type=IO_READ},
        {.addr=0xe557, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f8, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0056) {
    const struct CPU_State initial_cpu = {.pc=0xd0f6, .a=0x02, .x=0xab, .y=0x74, .sp=0xfd, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x01ab, .value=0x70}, {.addr=0xd0f6, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xd0f7, .a=0x72, .x=0xab, .y=0x74, .sp=0xfd, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x01ab, .value=0x70}, {.addr=0xd0f6, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xd0f6, .value=0x46, .type=IO_READ},
        {.addr=0xd0f7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ab, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0057) {
    const struct CPU_State initial_cpu = {.pc=0xd97c, .a=0x44, .x=0xcc, .y=0x96, .sp=0x18, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x00cc, .value=0xf8}, {.addr=0xd97c, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xd97d, .a=0xbc, .x=0xcc, .y=0x96, .sp=0x18, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x00cc, .value=0xf8}, {.addr=0xd97c, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xd97c, .value=0x46, .type=IO_READ},
        {.addr=0xd97d, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cc, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0058) {
    const struct CPU_State initial_cpu = {.pc=0x9055, .a=0x9f, .x=0x95, .y=0x65, .sp=0x18, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x0195, .value=0xed}, {.addr=0x9055, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x9056, .a=0x72, .x=0x95, .y=0x65, .sp=0x18, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x0195, .value=0xed}, {.addr=0x9055, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x9055, .value=0x46, .type=IO_READ},
        {.addr=0x9056, .value=DUMMY, .type=IO_READ},
        {.addr=0x0195, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0059) {
    const struct CPU_State initial_cpu = {.pc=0xedf8, .a=0xe9, .x=0x38, .y=0x02, .sp=0xfe, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x0138, .value=0xfe}, {.addr=0xedf8, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xedf9, .a=0x17, .x=0x38, .y=0x02, .sp=0xfe, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x0138, .value=0xfe}, {.addr=0xedf8, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xedf8, .value=0x46, .type=IO_READ},
        {.addr=0xedf9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0138, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_005A) {
    const struct CPU_State initial_cpu = {.pc=0x64f4, .a=0xc0, .x=0x8a, .y=0x44, .sp=0xdc, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x008a, .value=0x7d}, {.addr=0x64f4, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x64f5, .a=0xbd, .x=0x8a, .y=0x44, .sp=0xdc, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x008a, .value=0x7d}, {.addr=0x64f4, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x64f4, .value=0x46, .type=IO_READ},
        {.addr=0x64f5, .value=DUMMY, .type=IO_READ},
        {.addr=0x008a, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_005C) {
    const struct CPU_State initial_cpu = {.pc=0x181a, .a=0x0d, .x=0xb4, .y=0x69, .sp=0xa0, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x01b4, .value=0x60}, {.addr=0x181a, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x181b, .a=0x6d, .x=0xb4, .y=0x69, .sp=0xa0, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x01b4, .value=0x60}, {.addr=0x181a, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x181a, .value=0x46, .type=IO_READ},
        {.addr=0x181b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b4, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_005D) {
    const struct CPU_State initial_cpu = {.pc=0x1d3b, .a=0x8a, .x=0x43, .y=0xea, .sp=0xda, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x0043, .value=0xb4}, {.addr=0x1d3b, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x1d3c, .a=0x3e, .x=0x43, .y=0xea, .sp=0xda, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0043, .value=0xb4}, {.addr=0x1d3b, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x1d3b, .value=0x46, .type=IO_READ},
        {.addr=0x1d3c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0043, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_005E) {
    const struct CPU_State initial_cpu = {.pc=0x0606, .a=0xd9, .x=0x37, .y=0x22, .sp=0xc2, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x0037, .value=0xa2}, {.addr=0x0606, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x0607, .a=0x7b, .x=0x37, .y=0x22, .sp=0xc2, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x0037, .value=0xa2}, {.addr=0x0606, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x0606, .value=0x46, .type=IO_READ},
        {.addr=0x0607, .value=DUMMY, .type=IO_READ},
        {.addr=0x0037, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0060) {
    const struct CPU_State initial_cpu = {.pc=0xc771, .a=0xdb, .x=0xe7, .y=0x83, .sp=0xd0, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x01e7, .value=0x0e}, {.addr=0xc771, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xc772, .a=0xd5, .x=0xe7, .y=0x83, .sp=0xd0, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x01e7, .value=0x0e}, {.addr=0xc771, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xc771, .value=0x46, .type=IO_READ},
        {.addr=0xc772, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e7, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0061) {
    const struct CPU_State initial_cpu = {.pc=0xfc1e, .a=0x40, .x=0x1f, .y=0x15, .sp=0xff, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x001f, .value=0x01}, {.addr=0xfc1e, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xfc1f, .a=0x41, .x=0x1f, .y=0x15, .sp=0xff, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x001f, .value=0x01}, {.addr=0xfc1e, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xfc1e, .value=0x46, .type=IO_READ},
        {.addr=0xfc1f, .value=DUMMY, .type=IO_READ},
        {.addr=0x001f, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0062) {
    const struct CPU_State initial_cpu = {.pc=0x88a5, .a=0x75, .x=0xcf, .y=0x4e, .sp=0x4a, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x01cf, .value=0xfb}, {.addr=0x88a5, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x88a6, .a=0x8e, .x=0xcf, .y=0x4e, .sp=0x4a, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x01cf, .value=0xfb}, {.addr=0x88a5, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x88a5, .value=0x46, .type=IO_READ},
        {.addr=0x88a6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cf, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0063) {
    const struct CPU_State initial_cpu = {.pc=0x0f7f, .a=0xbb, .x=0xcf, .y=0x9e, .sp=0xc0, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x00cf, .value=0x9c}, {.addr=0x0f7f, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x0f80, .a=0x27, .x=0xcf, .y=0x9e, .sp=0xc0, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x00cf, .value=0x9c}, {.addr=0x0f7f, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x0f7f, .value=0x46, .type=IO_READ},
        {.addr=0x0f80, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cf, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0064) {
    const struct CPU_State initial_cpu = {.pc=0xd600, .a=0x91, .x=0xf0, .y=0x1d, .sp=0x3f, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x01f0, .value=0x38}, {.addr=0xd600, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xd601, .a=0xa9, .x=0xf0, .y=0x1d, .sp=0x3f, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x01f0, .value=0x38}, {.addr=0xd600, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xd600, .value=0x46, .type=IO_READ},
        {.addr=0xd601, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f0, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0065) {
    const struct CPU_State initial_cpu = {.pc=0xf711, .a=0x84, .x=0x64, .y=0xda, .sp=0x1d, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0xe9}, {.addr=0xf711, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xf712, .a=0x6d, .x=0x64, .y=0xda, .sp=0x1d, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0xe9}, {.addr=0xf711, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xf711, .value=0x46, .type=IO_READ},
        {.addr=0xf712, .value=DUMMY, .type=IO_READ},
        {.addr=0x0164, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0066) {
    const struct CPU_State initial_cpu = {.pc=0x4e29, .a=0x2f, .x=0x2b, .y=0xdf, .sp=0xe6, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x002b, .value=0xcc}, {.addr=0x4e29, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x4e2a, .a=0xe3, .x=0x2b, .y=0xdf, .sp=0xe6, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x002b, .value=0xcc}, {.addr=0x4e29, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x4e29, .value=0x46, .type=IO_READ},
        {.addr=0x4e2a, .value=DUMMY, .type=IO_READ},
        {.addr=0x002b, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0067) {
    const struct CPU_State initial_cpu = {.pc=0x7045, .a=0xee, .x=0x3e, .y=0x8a, .sp=0xff, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x013e, .value=0x0f}, {.addr=0x7045, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x7046, .a=0xe1, .x=0x3e, .y=0x8a, .sp=0xff, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x013e, .value=0x0f}, {.addr=0x7045, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x7045, .value=0x46, .type=IO_READ},
        {.addr=0x7046, .value=DUMMY, .type=IO_READ},
        {.addr=0x013e, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0068) {
    const struct CPU_State initial_cpu = {.pc=0xfff5, .a=0xd3, .x=0x2d, .y=0x80, .sp=0x86, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x002d, .value=0x48}, {.addr=0xfff5, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xfff6, .a=0x9b, .x=0x2d, .y=0x80, .sp=0x86, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x002d, .value=0x48}, {.addr=0xfff5, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xfff5, .value=0x46, .type=IO_READ},
        {.addr=0xfff6, .value=DUMMY, .type=IO_READ},
        {.addr=0x002d, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0069) {
    const struct CPU_State initial_cpu = {.pc=0x4338, .a=0x97, .x=0x5c, .y=0x8d, .sp=0x31, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x005c, .value=0xc2}, {.addr=0x4338, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x4339, .a=0x55, .x=0x5c, .y=0x8d, .sp=0x31, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x005c, .value=0xc2}, {.addr=0x4338, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x4338, .value=0x46, .type=IO_READ},
        {.addr=0x4339, .value=DUMMY, .type=IO_READ},
        {.addr=0x005c, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_006B) {
    const struct CPU_State initial_cpu = {.pc=0x431b, .a=0x15, .x=0x25, .y=0x13, .sp=0x13, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x0025, .value=0x0a}, {.addr=0x431b, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x431c, .a=0x1f, .x=0x25, .y=0x13, .sp=0x13, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x0025, .value=0x0a}, {.addr=0x431b, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x431b, .value=0x46, .type=IO_READ},
        {.addr=0x431c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0025, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_006C) {
    const struct CPU_State initial_cpu = {.pc=0x51c6, .a=0x38, .x=0x2d, .y=0x4e, .sp=0xd5, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x002d, .value=0xc7}, {.addr=0x51c6, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x51c7, .a=0xff, .x=0x2d, .y=0x4e, .sp=0xd5, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x002d, .value=0xc7}, {.addr=0x51c6, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x51c6, .value=0x46, .type=IO_READ},
        {.addr=0x51c7, .value=DUMMY, .type=IO_READ},
        {.addr=0x002d, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_006D) {
    const struct CPU_State initial_cpu = {.pc=0x42ec, .a=0xdf, .x=0xc1, .y=0xae, .sp=0x24, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x01c1, .value=0xec}, {.addr=0x42ec, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x42ed, .a=0x33, .x=0xc1, .y=0xae, .sp=0x24, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x01c1, .value=0xec}, {.addr=0x42ec, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x42ec, .value=0x46, .type=IO_READ},
        {.addr=0x42ed, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c1, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_006E) {
    const struct CPU_State initial_cpu = {.pc=0xd46d, .a=0x98, .x=0x00, .y=0x20, .sp=0x82, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x0100, .value=0x94}, {.addr=0xd46d, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xd46e, .a=0x0c, .x=0x00, .y=0x20, .sp=0x82, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x0100, .value=0x94}, {.addr=0xd46d, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xd46d, .value=0x46, .type=IO_READ},
        {.addr=0xd46e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0100, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_006F) {
    const struct CPU_State initial_cpu = {.pc=0x9c35, .a=0xbc, .x=0xe3, .y=0x48, .sp=0x96, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0x42}, {.addr=0x9c35, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x9c36, .a=0xfe, .x=0xe3, .y=0x48, .sp=0x96, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0x42}, {.addr=0x9c35, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x9c35, .value=0x46, .type=IO_READ},
        {.addr=0x9c36, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e3, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0070) {
    const struct CPU_State initial_cpu = {.pc=0xe8dc, .a=0xea, .x=0x03, .y=0x3b, .sp=0x77, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x0003, .value=0x65}, {.addr=0xe8dc, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xe8dd, .a=0x8f, .x=0x03, .y=0x3b, .sp=0x77, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x0003, .value=0x65}, {.addr=0xe8dc, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xe8dc, .value=0x46, .type=IO_READ},
        {.addr=0xe8dd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0003, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0071) {
    const struct CPU_State initial_cpu = {.pc=0x2c7b, .a=0xd1, .x=0xe1, .y=0xe7, .sp=0x47, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x01e1, .value=0x3c}, {.addr=0x2c7b, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x2c7c, .a=0xed, .x=0xe1, .y=0xe7, .sp=0x47, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x01e1, .value=0x3c}, {.addr=0x2c7b, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x2c7b, .value=0x46, .type=IO_READ},
        {.addr=0x2c7c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e1, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0072) {
    const struct CPU_State initial_cpu = {.pc=0xc96e, .a=0xf8, .x=0x47, .y=0x73, .sp=0x47, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x0047, .value=0x4c}, {.addr=0xc96e, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xc96f, .a=0xb4, .x=0x47, .y=0x73, .sp=0x47, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0047, .value=0x4c}, {.addr=0xc96e, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xc96e, .value=0x46, .type=IO_READ},
        {.addr=0xc96f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0047, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0073) {
    const struct CPU_State initial_cpu = {.pc=0xb87b, .a=0xb3, .x=0x65, .y=0xb5, .sp=0x63, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x0165, .value=0xd1}, {.addr=0xb87b, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xb87c, .a=0x62, .x=0x65, .y=0xb5, .sp=0x63, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x0165, .value=0xd1}, {.addr=0xb87b, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xb87b, .value=0x46, .type=IO_READ},
        {.addr=0xb87c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0165, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0074) {
    const struct CPU_State initial_cpu = {.pc=0x186c, .a=0x63, .x=0xc6, .y=0xe0, .sp=0xb9, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x00c6, .value=0xc9}, {.addr=0x186c, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x186d, .a=0xaa, .x=0xc6, .y=0xe0, .sp=0xb9, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x00c6, .value=0xc9}, {.addr=0x186c, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x186c, .value=0x46, .type=IO_READ},
        {.addr=0x186d, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c6, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0075) {
    const struct CPU_State initial_cpu = {.pc=0xbc29, .a=0xf9, .x=0x55, .y=0x08, .sp=0xf5, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0x01}, {.addr=0xbc29, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xbc2a, .a=0xf8, .x=0x55, .y=0x08, .sp=0xf5, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0x01}, {.addr=0xbc29, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xbc29, .value=0x46, .type=IO_READ},
        {.addr=0xbc2a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0155, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0076) {
    const struct CPU_State initial_cpu = {.pc=0x8b01, .a=0xb9, .x=0xb1, .y=0x50, .sp=0xd5, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x01b1, .value=0x23}, {.addr=0x8b01, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x8b02, .a=0x9a, .x=0xb1, .y=0x50, .sp=0xd5, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x01b1, .value=0x23}, {.addr=0x8b01, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x8b01, .value=0x46, .type=IO_READ},
        {.addr=0x8b02, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b1, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0077) {
    const struct CPU_State initial_cpu = {.pc=0x7d0c, .a=0x77, .x=0xb5, .y=0xeb, .sp=0x41, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x01b5, .value=0xa1}, {.addr=0x7d0c, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x7d0d, .a=0xd6, .x=0xb5, .y=0xeb, .sp=0x41, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x01b5, .value=0xa1}, {.addr=0x7d0c, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x7d0c, .value=0x46, .type=IO_READ},
        {.addr=0x7d0d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b5, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0078) {
    const struct CPU_State initial_cpu = {.pc=0x9167, .a=0xf3, .x=0x73, .y=0xc0, .sp=0x81, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0x46}, {.addr=0x9167, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x9168, .a=0xb5, .x=0x73, .y=0xc0, .sp=0x81, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0x46}, {.addr=0x9167, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x9167, .value=0x46, .type=IO_READ},
        {.addr=0x9168, .value=DUMMY, .type=IO_READ},
        {.addr=0x0173, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0079) {
    const struct CPU_State initial_cpu = {.pc=0x7602, .a=0x74, .x=0x03, .y=0x80, .sp=0xe1, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x0103, .value=0xd2}, {.addr=0x7602, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x7603, .a=0xa6, .x=0x03, .y=0x80, .sp=0xe1, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x0103, .value=0xd2}, {.addr=0x7602, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x7602, .value=0x46, .type=IO_READ},
        {.addr=0x7603, .value=DUMMY, .type=IO_READ},
        {.addr=0x0103, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_007A) {
    const struct CPU_State initial_cpu = {.pc=0xce80, .a=0xb9, .x=0x50, .y=0x94, .sp=0x33, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x0050, .value=0x26}, {.addr=0xce80, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xce81, .a=0x9f, .x=0x50, .y=0x94, .sp=0x33, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x0050, .value=0x26}, {.addr=0xce80, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xce80, .value=0x46, .type=IO_READ},
        {.addr=0xce81, .value=DUMMY, .type=IO_READ},
        {.addr=0x0050, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_007B) {
    const struct CPU_State initial_cpu = {.pc=0x5082, .a=0xb5, .x=0x78, .y=0x3a, .sp=0x0d, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x0178, .value=0x38}, {.addr=0x5082, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x5083, .a=0x8d, .x=0x78, .y=0x3a, .sp=0x0d, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0178, .value=0x38}, {.addr=0x5082, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x5082, .value=0x46, .type=IO_READ},
        {.addr=0x5083, .value=DUMMY, .type=IO_READ},
        {.addr=0x0178, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_007C) {
    const struct CPU_State initial_cpu = {.pc=0x82b2, .a=0xcf, .x=0x93, .y=0xae, .sp=0x83, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x0093, .value=0x6f}, {.addr=0x82b2, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x82b3, .a=0xa0, .x=0x93, .y=0xae, .sp=0x83, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0093, .value=0x6f}, {.addr=0x82b2, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x82b2, .value=0x46, .type=IO_READ},
        {.addr=0x82b3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0093, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_007D) {
    const struct CPU_State initial_cpu = {.pc=0xec17, .a=0xd5, .x=0x2d, .y=0x2e, .sp=0x0c, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x012d, .value=0x47}, {.addr=0xec17, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xec18, .a=0x92, .x=0x2d, .y=0x2e, .sp=0x0c, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x012d, .value=0x47}, {.addr=0xec17, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xec17, .value=0x46, .type=IO_READ},
        {.addr=0xec18, .value=DUMMY, .type=IO_READ},
        {.addr=0x012d, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_007E) {
    const struct CPU_State initial_cpu = {.pc=0x68c4, .a=0x7b, .x=0x2b, .y=0xe4, .sp=0x7f, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x002b, .value=0x47}, {.addr=0x68c4, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x68c5, .a=0x3c, .x=0x2b, .y=0xe4, .sp=0x7f, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x002b, .value=0x47}, {.addr=0x68c4, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x68c4, .value=0x46, .type=IO_READ},
        {.addr=0x68c5, .value=DUMMY, .type=IO_READ},
        {.addr=0x002b, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_007F) {
    const struct CPU_State initial_cpu = {.pc=0xeab9, .a=0xc4, .x=0x84, .y=0x5f, .sp=0xe9, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x0084, .value=0x00}, {.addr=0xeab9, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xeaba, .a=0xc4, .x=0x84, .y=0x5f, .sp=0xe9, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x0084, .value=0x00}, {.addr=0xeab9, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xeab9, .value=0x46, .type=IO_READ},
        {.addr=0xeaba, .value=DUMMY, .type=IO_READ},
        {.addr=0x0084, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0080) {
    const struct CPU_State initial_cpu = {.pc=0x6b4d, .a=0xca, .x=0x6c, .y=0x8c, .sp=0x5d, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x016c, .value=0x23}, {.addr=0x6b4d, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x6b4e, .a=0xe9, .x=0x6c, .y=0x8c, .sp=0x5d, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x016c, .value=0x23}, {.addr=0x6b4d, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x6b4d, .value=0x46, .type=IO_READ},
        {.addr=0x6b4e, .value=DUMMY, .type=IO_READ},
        {.addr=0x016c, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0081) {
    const struct CPU_State initial_cpu = {.pc=0x9dac, .a=0x2e, .x=0xc0, .y=0x96, .sp=0xaf, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x01c0, .value=0x3c}, {.addr=0x9dac, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x9dad, .a=0x12, .x=0xc0, .y=0x96, .sp=0xaf, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x01c0, .value=0x3c}, {.addr=0x9dac, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x9dac, .value=0x46, .type=IO_READ},
        {.addr=0x9dad, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c0, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0082) {
    const struct CPU_State initial_cpu = {.pc=0x559b, .a=0xf3, .x=0xb7, .y=0x07, .sp=0xad, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x01b7, .value=0xc1}, {.addr=0x559b, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x559c, .a=0x32, .x=0xb7, .y=0x07, .sp=0xad, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x01b7, .value=0xc1}, {.addr=0x559b, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x559b, .value=0x46, .type=IO_READ},
        {.addr=0x559c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b7, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0083) {
    const struct CPU_State initial_cpu = {.pc=0xf3bb, .a=0x53, .x=0x8b, .y=0x6e, .sp=0x61, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x018b, .value=0x79}, {.addr=0xf3bb, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xf3bc, .a=0x2a, .x=0x8b, .y=0x6e, .sp=0x61, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x018b, .value=0x79}, {.addr=0xf3bb, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xf3bb, .value=0x46, .type=IO_READ},
        {.addr=0xf3bc, .value=DUMMY, .type=IO_READ},
        {.addr=0x018b, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0084) {
    const struct CPU_State initial_cpu = {.pc=0x80ba, .a=0x65, .x=0x68, .y=0xe3, .sp=0x4b, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x0168, .value=0x00}, {.addr=0x80ba, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x80bb, .a=0x65, .x=0x68, .y=0xe3, .sp=0x4b, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x0168, .value=0x00}, {.addr=0x80ba, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x80ba, .value=0x46, .type=IO_READ},
        {.addr=0x80bb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0168, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0085) {
    const struct CPU_State initial_cpu = {.pc=0x6311, .a=0x3c, .x=0x47, .y=0x03, .sp=0x91, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x0047, .value=0x13}, {.addr=0x6311, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x6312, .a=0x2f, .x=0x47, .y=0x03, .sp=0x91, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x0047, .value=0x13}, {.addr=0x6311, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x6311, .value=0x46, .type=IO_READ},
        {.addr=0x6312, .value=DUMMY, .type=IO_READ},
        {.addr=0x0047, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0086) {
    const struct CPU_State initial_cpu = {.pc=0x16b9, .a=0x4e, .x=0x3a, .y=0x0e, .sp=0xa4, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x013a, .value=0x7c}, {.addr=0x16b9, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x16ba, .a=0x32, .x=0x3a, .y=0x0e, .sp=0xa4, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x013a, .value=0x7c}, {.addr=0x16b9, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x16b9, .value=0x46, .type=IO_READ},
        {.addr=0x16ba, .value=DUMMY, .type=IO_READ},
        {.addr=0x013a, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0087) {
    const struct CPU_State initial_cpu = {.pc=0xa0f4, .a=0x98, .x=0x4b, .y=0xf6, .sp=0xb2, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x014b, .value=0xb9}, {.addr=0xa0f4, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xa0f5, .a=0x21, .x=0x4b, .y=0xf6, .sp=0xb2, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x014b, .value=0xb9}, {.addr=0xa0f4, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xa0f4, .value=0x46, .type=IO_READ},
        {.addr=0xa0f5, .value=DUMMY, .type=IO_READ},
        {.addr=0x014b, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0088) {
    const struct CPU_State initial_cpu = {.pc=0xbeee, .a=0x40, .x=0xdb, .y=0x91, .sp=0x26, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x00db, .value=0x8b}, {.addr=0xbeee, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xbeef, .a=0xcb, .x=0xdb, .y=0x91, .sp=0x26, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x00db, .value=0x8b}, {.addr=0xbeee, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xbeee, .value=0x46, .type=IO_READ},
        {.addr=0xbeef, .value=DUMMY, .type=IO_READ},
        {.addr=0x00db, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0089) {
    const struct CPU_State initial_cpu = {.pc=0xe5d0, .a=0x77, .x=0xdf, .y=0xf8, .sp=0xe9, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0x69}, {.addr=0xe5d0, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xe5d1, .a=0x1e, .x=0xdf, .y=0xf8, .sp=0xe9, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0x69}, {.addr=0xe5d0, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xe5d0, .value=0x46, .type=IO_READ},
        {.addr=0xe5d1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01df, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_008A) {
    const struct CPU_State initial_cpu = {.pc=0xa446, .a=0x11, .x=0xc3, .y=0x83, .sp=0x04, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0x31}, {.addr=0xa446, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xa447, .a=0x20, .x=0xc3, .y=0x83, .sp=0x04, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0x31}, {.addr=0xa446, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xa446, .value=0x46, .type=IO_READ},
        {.addr=0xa447, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c3, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_008C) {
    const struct CPU_State initial_cpu = {.pc=0x89ea, .a=0x69, .x=0x0a, .y=0xe3, .sp=0xe6, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0x01}, {.addr=0x89ea, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x89eb, .a=0x68, .x=0x0a, .y=0xe3, .sp=0xe6, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0x01}, {.addr=0x89ea, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x89ea, .value=0x46, .type=IO_READ},
        {.addr=0x89eb, .value=DUMMY, .type=IO_READ},
        {.addr=0x010a, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_008D) {
    const struct CPU_State initial_cpu = {.pc=0x0203, .a=0x77, .x=0x50, .y=0xce, .sp=0xe9, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x0050, .value=0x13}, {.addr=0x0203, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x0204, .a=0x64, .x=0x50, .y=0xce, .sp=0xe9, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x0050, .value=0x13}, {.addr=0x0203, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x0203, .value=0x46, .type=IO_READ},
        {.addr=0x0204, .value=DUMMY, .type=IO_READ},
        {.addr=0x0050, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_008E) {
    const struct CPU_State initial_cpu = {.pc=0xa6a7, .a=0x84, .x=0x94, .y=0x35, .sp=0x66, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x0094, .value=0xc3}, {.addr=0xa6a7, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xa6a8, .a=0x47, .x=0x94, .y=0x35, .sp=0x66, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x0094, .value=0xc3}, {.addr=0xa6a7, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xa6a7, .value=0x46, .type=IO_READ},
        {.addr=0xa6a8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0094, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_008F) {
    const struct CPU_State initial_cpu = {.pc=0xdb9a, .a=0xf4, .x=0x24, .y=0x95, .sp=0x38, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0x71}, {.addr=0xdb9a, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xdb9b, .a=0x85, .x=0x24, .y=0x95, .sp=0x38, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0x71}, {.addr=0xdb9a, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xdb9a, .value=0x46, .type=IO_READ},
        {.addr=0xdb9b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0124, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0090) {
    const struct CPU_State initial_cpu = {.pc=0x7316, .a=0x54, .x=0x40, .y=0x62, .sp=0x31, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x0140, .value=0xa9}, {.addr=0x7316, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x7317, .a=0xfd, .x=0x40, .y=0x62, .sp=0x31, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0140, .value=0xa9}, {.addr=0x7316, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x7316, .value=0x46, .type=IO_READ},
        {.addr=0x7317, .value=DUMMY, .type=IO_READ},
        {.addr=0x0140, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0091) {
    const struct CPU_State initial_cpu = {.pc=0xb9e7, .a=0x6f, .x=0xc4, .y=0x74, .sp=0xb0, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x00c4, .value=0x5f}, {.addr=0xb9e7, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xb9e8, .a=0x30, .x=0xc4, .y=0x74, .sp=0xb0, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x00c4, .value=0x5f}, {.addr=0xb9e7, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xb9e7, .value=0x46, .type=IO_READ},
        {.addr=0xb9e8, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c4, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0092) {
    const struct CPU_State initial_cpu = {.pc=0x2ff2, .a=0xbe, .x=0x92, .y=0xeb, .sp=0xcc, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x0092, .value=0x8a}, {.addr=0x2ff2, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x2ff3, .a=0x34, .x=0x92, .y=0xeb, .sp=0xcc, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x0092, .value=0x8a}, {.addr=0x2ff2, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x2ff2, .value=0x46, .type=IO_READ},
        {.addr=0x2ff3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0092, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0093) {
    const struct CPU_State initial_cpu = {.pc=0xe852, .a=0x3e, .x=0x4d, .y=0xf7, .sp=0x99, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x004d, .value=0xac}, {.addr=0xe852, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xe853, .a=0x92, .x=0x4d, .y=0xf7, .sp=0x99, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x004d, .value=0xac}, {.addr=0xe852, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xe852, .value=0x46, .type=IO_READ},
        {.addr=0xe853, .value=DUMMY, .type=IO_READ},
        {.addr=0x004d, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0094) {
    const struct CPU_State initial_cpu = {.pc=0x18d6, .a=0xb6, .x=0x44, .y=0xfe, .sp=0x12, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x0044, .value=0x18}, {.addr=0x18d6, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x18d7, .a=0xae, .x=0x44, .y=0xfe, .sp=0x12, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0044, .value=0x18}, {.addr=0x18d6, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x18d6, .value=0x46, .type=IO_READ},
        {.addr=0x18d7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0044, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0095) {
    const struct CPU_State initial_cpu = {.pc=0xfb53, .a=0x45, .x=0xbf, .y=0x8b, .sp=0x35, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x00bf, .value=0x25}, {.addr=0xfb53, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xfb54, .a=0x60, .x=0xbf, .y=0x8b, .sp=0x35, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x00bf, .value=0x25}, {.addr=0xfb53, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xfb53, .value=0x46, .type=IO_READ},
        {.addr=0xfb54, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bf, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0096) {
    const struct CPU_State initial_cpu = {.pc=0xbf6a, .a=0x1b, .x=0xd6, .y=0xc2, .sp=0xe8, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x00d6, .value=0x00}, {.addr=0xbf6a, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xbf6b, .a=0x1b, .x=0xd6, .y=0xc2, .sp=0xe8, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x00d6, .value=0x00}, {.addr=0xbf6a, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xbf6a, .value=0x46, .type=IO_READ},
        {.addr=0xbf6b, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d6, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0097) {
    const struct CPU_State initial_cpu = {.pc=0x64bd, .a=0x2e, .x=0x5a, .y=0xc5, .sp=0x40, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x015a, .value=0xda}, {.addr=0x64bd, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x64be, .a=0xf4, .x=0x5a, .y=0xc5, .sp=0x40, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x015a, .value=0xda}, {.addr=0x64bd, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x64bd, .value=0x46, .type=IO_READ},
        {.addr=0x64be, .value=DUMMY, .type=IO_READ},
        {.addr=0x015a, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0098) {
    const struct CPU_State initial_cpu = {.pc=0x8c35, .a=0xb3, .x=0xae, .y=0x50, .sp=0x9b, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x00ae, .value=0xf4}, {.addr=0x8c35, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x8c36, .a=0x47, .x=0xae, .y=0x50, .sp=0x9b, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x00ae, .value=0xf4}, {.addr=0x8c35, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x8c35, .value=0x46, .type=IO_READ},
        {.addr=0x8c36, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ae, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0099) {
    const struct CPU_State initial_cpu = {.pc=0x9a8d, .a=0x4b, .x=0xad, .y=0x1b, .sp=0x5b, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x01ad, .value=0xca}, {.addr=0x9a8d, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x9a8e, .a=0x81, .x=0xad, .y=0x1b, .sp=0x5b, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x01ad, .value=0xca}, {.addr=0x9a8d, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x9a8d, .value=0x46, .type=IO_READ},
        {.addr=0x9a8e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ad, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_009A) {
    const struct CPU_State initial_cpu = {.pc=0xee37, .a=0xd8, .x=0xe7, .y=0x0b, .sp=0x40, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x01e7, .value=0x9e}, {.addr=0xee37, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xee38, .a=0x46, .x=0xe7, .y=0x0b, .sp=0x40, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x01e7, .value=0x9e}, {.addr=0xee37, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xee37, .value=0x46, .type=IO_READ},
        {.addr=0xee38, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e7, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_009B) {
    const struct CPU_State initial_cpu = {.pc=0xa4f2, .a=0xb1, .x=0x73, .y=0xd9, .sp=0xe8, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0xca}, {.addr=0xa4f2, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xa4f3, .a=0x7b, .x=0x73, .y=0xd9, .sp=0xe8, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0xca}, {.addr=0xa4f2, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xa4f2, .value=0x46, .type=IO_READ},
        {.addr=0xa4f3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0173, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_009C) {
    const struct CPU_State initial_cpu = {.pc=0x2188, .a=0x8b, .x=0xec, .y=0x5c, .sp=0x98, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x01ec, .value=0x78}, {.addr=0x2188, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x2189, .a=0xf3, .x=0xec, .y=0x5c, .sp=0x98, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x01ec, .value=0x78}, {.addr=0x2188, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x2188, .value=0x46, .type=IO_READ},
        {.addr=0x2189, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ec, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_009D) {
    const struct CPU_State initial_cpu = {.pc=0x50bc, .a=0xde, .x=0x18, .y=0x08, .sp=0xab, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x0118, .value=0xa0}, {.addr=0x50bc, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x50bd, .a=0x7e, .x=0x18, .y=0x08, .sp=0xab, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x0118, .value=0xa0}, {.addr=0x50bc, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x50bc, .value=0x46, .type=IO_READ},
        {.addr=0x50bd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0118, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_009E) {
    const struct CPU_State initial_cpu = {.pc=0xe911, .a=0xd3, .x=0x0b, .y=0x74, .sp=0xb5, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x000b, .value=0x0e}, {.addr=0xe911, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xe912, .a=0xdd, .x=0x0b, .y=0x74, .sp=0xb5, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x000b, .value=0x0e}, {.addr=0xe911, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xe911, .value=0x46, .type=IO_READ},
        {.addr=0xe912, .value=DUMMY, .type=IO_READ},
        {.addr=0x000b, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_009F) {
    const struct CPU_State initial_cpu = {.pc=0xa864, .a=0xd3, .x=0xa1, .y=0x73, .sp=0x6a, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0x44}, {.addr=0xa864, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xa865, .a=0x97, .x=0xa1, .y=0x73, .sp=0x6a, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0x44}, {.addr=0xa864, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xa864, .value=0x46, .type=IO_READ},
        {.addr=0xa865, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a1, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00A0) {
    const struct CPU_State initial_cpu = {.pc=0xc66c, .a=0x5a, .x=0x79, .y=0x77, .sp=0x6e, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x0079, .value=0xb4}, {.addr=0xc66c, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xc66d, .a=0xee, .x=0x79, .y=0x77, .sp=0x6e, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0079, .value=0xb4}, {.addr=0xc66c, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xc66c, .value=0x46, .type=IO_READ},
        {.addr=0xc66d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0079, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00A1) {
    const struct CPU_State initial_cpu = {.pc=0x22a3, .a=0xe4, .x=0x86, .y=0xdb, .sp=0x74, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x0186, .value=0xc7}, {.addr=0x22a3, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x22a4, .a=0x23, .x=0x86, .y=0xdb, .sp=0x74, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x0186, .value=0xc7}, {.addr=0x22a3, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x22a3, .value=0x46, .type=IO_READ},
        {.addr=0x22a4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0186, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00A2) {
    const struct CPU_State initial_cpu = {.pc=0x35fc, .a=0xb7, .x=0xbd, .y=0xd5, .sp=0x32, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0xb4}, {.addr=0x35fc, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x35fd, .a=0x03, .x=0xbd, .y=0xd5, .sp=0x32, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0xb4}, {.addr=0x35fc, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x35fc, .value=0x46, .type=IO_READ},
        {.addr=0x35fd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bd, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00A3) {
    const struct CPU_State initial_cpu = {.pc=0xfe1c, .a=0xcf, .x=0xa3, .y=0x65, .sp=0xed, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x00a3, .value=0x44}, {.addr=0xfe1c, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xfe1d, .a=0x8b, .x=0xa3, .y=0x65, .sp=0xed, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x00a3, .value=0x44}, {.addr=0xfe1c, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xfe1c, .value=0x46, .type=IO_READ},
        {.addr=0xfe1d, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a3, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00A4) {
    const struct CPU_State initial_cpu = {.pc=0x8f42, .a=0xc2, .x=0x2e, .y=0x4e, .sp=0xf8, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x002e, .value=0x43}, {.addr=0x8f42, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x8f43, .a=0x81, .x=0x2e, .y=0x4e, .sp=0xf8, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x002e, .value=0x43}, {.addr=0x8f42, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x8f42, .value=0x46, .type=IO_READ},
        {.addr=0x8f43, .value=DUMMY, .type=IO_READ},
        {.addr=0x002e, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00A5) {
    const struct CPU_State initial_cpu = {.pc=0xcb81, .a=0x49, .x=0x66, .y=0x64, .sp=0x3c, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0x69}, {.addr=0xcb81, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xcb82, .a=0x20, .x=0x66, .y=0x64, .sp=0x3c, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0x69}, {.addr=0xcb81, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xcb81, .value=0x46, .type=IO_READ},
        {.addr=0xcb82, .value=DUMMY, .type=IO_READ},
        {.addr=0x0166, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00A6) {
    const struct CPU_State initial_cpu = {.pc=0x01b9, .a=0xe8, .x=0x3a, .y=0x4b, .sp=0x48, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x013a, .value=0x30}, {.addr=0x01b9, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x01ba, .a=0xd8, .x=0x3a, .y=0x4b, .sp=0x48, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x013a, .value=0x30}, {.addr=0x01b9, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x01b9, .value=0x46, .type=IO_READ},
        {.addr=0x01ba, .value=DUMMY, .type=IO_READ},
        {.addr=0x013a, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00A7) {
    const struct CPU_State initial_cpu = {.pc=0x4ffc, .a=0x46, .x=0x6d, .y=0x2a, .sp=0xf2, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x016d, .value=0xc4}, {.addr=0x4ffc, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x4ffd, .a=0x82, .x=0x6d, .y=0x2a, .sp=0xf2, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x016d, .value=0xc4}, {.addr=0x4ffc, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x4ffc, .value=0x46, .type=IO_READ},
        {.addr=0x4ffd, .value=DUMMY, .type=IO_READ},
        {.addr=0x016d, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00A8) {
    const struct CPU_State initial_cpu = {.pc=0xc0b6, .a=0xd2, .x=0xbf, .y=0x52, .sp=0xe3, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x00bf, .value=0x62}, {.addr=0xc0b6, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xc0b7, .a=0xb0, .x=0xbf, .y=0x52, .sp=0xe3, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x00bf, .value=0x62}, {.addr=0xc0b6, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xc0b6, .value=0x46, .type=IO_READ},
        {.addr=0xc0b7, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bf, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00A9) {
    const struct CPU_State initial_cpu = {.pc=0x74c3, .a=0x8b, .x=0x2c, .y=0xd7, .sp=0xe0, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x012c, .value=0x8c}, {.addr=0x74c3, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x74c4, .a=0x07, .x=0x2c, .y=0xd7, .sp=0xe0, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x012c, .value=0x8c}, {.addr=0x74c3, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x74c3, .value=0x46, .type=IO_READ},
        {.addr=0x74c4, .value=DUMMY, .type=IO_READ},
        {.addr=0x012c, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00AA) {
    const struct CPU_State initial_cpu = {.pc=0x482b, .a=0x68, .x=0xfa, .y=0x08, .sp=0xd4, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x01fa, .value=0x5d}, {.addr=0x482b, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x482c, .a=0x35, .x=0xfa, .y=0x08, .sp=0xd4, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x01fa, .value=0x5d}, {.addr=0x482b, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x482b, .value=0x46, .type=IO_READ},
        {.addr=0x482c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fa, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x66ef, .a=0x1a, .x=0x41, .y=0x0e, .sp=0x3a, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x0141, .value=0xf9}, {.addr=0x66ef, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x66f0, .a=0xe3, .x=0x41, .y=0x0e, .sp=0x3a, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x0141, .value=0xf9}, {.addr=0x66ef, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x66ef, .value=0x46, .type=IO_READ},
        {.addr=0x66f0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0141, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00AC) {
    const struct CPU_State initial_cpu = {.pc=0xf734, .a=0x90, .x=0x4e, .y=0xd8, .sp=0x52, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x004e, .value=0x5a}, {.addr=0xf734, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xf735, .a=0xca, .x=0x4e, .y=0xd8, .sp=0x52, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x004e, .value=0x5a}, {.addr=0xf734, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xf734, .value=0x46, .type=IO_READ},
        {.addr=0xf735, .value=DUMMY, .type=IO_READ},
        {.addr=0x004e, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00AD) {
    const struct CPU_State initial_cpu = {.pc=0xf1d4, .a=0x45, .x=0xe3, .y=0x65, .sp=0x37, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x00e3, .value=0xd6}, {.addr=0xf1d4, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xf1d5, .a=0x93, .x=0xe3, .y=0x65, .sp=0x37, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x00e3, .value=0xd6}, {.addr=0xf1d4, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xf1d4, .value=0x46, .type=IO_READ},
        {.addr=0xf1d5, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e3, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00AE) {
    const struct CPU_State initial_cpu = {.pc=0x4afc, .a=0x26, .x=0xd5, .y=0x5f, .sp=0x3e, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x01d5, .value=0x23}, {.addr=0x4afc, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x4afd, .a=0x05, .x=0xd5, .y=0x5f, .sp=0x3e, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x01d5, .value=0x23}, {.addr=0x4afc, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x4afc, .value=0x46, .type=IO_READ},
        {.addr=0x4afd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d5, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00AF) {
    const struct CPU_State initial_cpu = {.pc=0x1f9b, .a=0x37, .x=0xea, .y=0xa1, .sp=0x71, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x01ea, .value=0x3a}, {.addr=0x1f9b, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x1f9c, .a=0x0d, .x=0xea, .y=0xa1, .sp=0x71, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x01ea, .value=0x3a}, {.addr=0x1f9b, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x1f9b, .value=0x46, .type=IO_READ},
        {.addr=0x1f9c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ea, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00B0) {
    const struct CPU_State initial_cpu = {.pc=0x55e7, .a=0x65, .x=0x8e, .y=0x13, .sp=0x80, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x008e, .value=0xeb}, {.addr=0x55e7, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x55e8, .a=0x8e, .x=0x8e, .y=0x13, .sp=0x80, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x008e, .value=0xeb}, {.addr=0x55e7, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x55e7, .value=0x46, .type=IO_READ},
        {.addr=0x55e8, .value=DUMMY, .type=IO_READ},
        {.addr=0x008e, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00B1) {
    const struct CPU_State initial_cpu = {.pc=0xda7d, .a=0x6e, .x=0x23, .y=0x61, .sp=0x72, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x0123, .value=0xed}, {.addr=0xda7d, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xda7e, .a=0x83, .x=0x23, .y=0x61, .sp=0x72, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x0123, .value=0xed}, {.addr=0xda7d, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xda7d, .value=0x46, .type=IO_READ},
        {.addr=0xda7e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0123, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00B2) {
    const struct CPU_State initial_cpu = {.pc=0x54c4, .a=0xc3, .x=0x2d, .y=0xc9, .sp=0x72, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x002d, .value=0xc4}, {.addr=0x54c4, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x54c5, .a=0x07, .x=0x2d, .y=0xc9, .sp=0x72, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x002d, .value=0xc4}, {.addr=0x54c4, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x54c4, .value=0x46, .type=IO_READ},
        {.addr=0x54c5, .value=DUMMY, .type=IO_READ},
        {.addr=0x002d, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00B3) {
    const struct CPU_State initial_cpu = {.pc=0xc2be, .a=0x91, .x=0x78, .y=0xd6, .sp=0x91, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x0178, .value=0x2b}, {.addr=0xc2be, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xc2bf, .a=0xba, .x=0x78, .y=0xd6, .sp=0x91, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x0178, .value=0x2b}, {.addr=0xc2be, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xc2be, .value=0x46, .type=IO_READ},
        {.addr=0xc2bf, .value=DUMMY, .type=IO_READ},
        {.addr=0x0178, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00B4) {
    const struct CPU_State initial_cpu = {.pc=0xb3b3, .a=0xd8, .x=0x0a, .y=0x36, .sp=0xcb, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x000a, .value=0x69}, {.addr=0xb3b3, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xb3b4, .a=0xb1, .x=0x0a, .y=0x36, .sp=0xcb, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x000a, .value=0x69}, {.addr=0xb3b3, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xb3b3, .value=0x46, .type=IO_READ},
        {.addr=0xb3b4, .value=DUMMY, .type=IO_READ},
        {.addr=0x000a, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00B5) {
    const struct CPU_State initial_cpu = {.pc=0x5d32, .a=0x5a, .x=0x46, .y=0xfc, .sp=0x42, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x0046, .value=0x14}, {.addr=0x5d32, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x5d33, .a=0x4e, .x=0x46, .y=0xfc, .sp=0x42, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0046, .value=0x14}, {.addr=0x5d32, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x5d32, .value=0x46, .type=IO_READ},
        {.addr=0x5d33, .value=DUMMY, .type=IO_READ},
        {.addr=0x0046, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00B6) {
    const struct CPU_State initial_cpu = {.pc=0xd858, .a=0x20, .x=0x0c, .y=0xb1, .sp=0x95, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x000c, .value=0x99}, {.addr=0xd858, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xd859, .a=0xb9, .x=0x0c, .y=0xb1, .sp=0x95, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x000c, .value=0x99}, {.addr=0xd858, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xd858, .value=0x46, .type=IO_READ},
        {.addr=0xd859, .value=DUMMY, .type=IO_READ},
        {.addr=0x000c, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00B7) {
    const struct CPU_State initial_cpu = {.pc=0x3464, .a=0x9d, .x=0x67, .y=0x20, .sp=0xb3, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0x3f}, {.addr=0x3464, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x3465, .a=0xa2, .x=0x67, .y=0x20, .sp=0xb3, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0x3f}, {.addr=0x3464, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x3464, .value=0x46, .type=IO_READ},
        {.addr=0x3465, .value=DUMMY, .type=IO_READ},
        {.addr=0x0167, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00B8) {
    const struct CPU_State initial_cpu = {.pc=0x6113, .a=0xdb, .x=0x05, .y=0xb4, .sp=0x0a, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x0005, .value=0x5a}, {.addr=0x6113, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x6114, .a=0x81, .x=0x05, .y=0xb4, .sp=0x0a, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x0005, .value=0x5a}, {.addr=0x6113, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x6113, .value=0x46, .type=IO_READ},
        {.addr=0x6114, .value=DUMMY, .type=IO_READ},
        {.addr=0x0005, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00B9) {
    const struct CPU_State initial_cpu = {.pc=0xdf1b, .a=0x7f, .x=0xeb, .y=0x8d, .sp=0x83, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0x36}, {.addr=0xdf1b, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xdf1c, .a=0x49, .x=0xeb, .y=0x8d, .sp=0x83, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0x36}, {.addr=0xdf1b, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xdf1b, .value=0x46, .type=IO_READ},
        {.addr=0xdf1c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01eb, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00BB) {
    const struct CPU_State initial_cpu = {.pc=0xfb91, .a=0x61, .x=0xa9, .y=0xa8, .sp=0x15, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x01a9, .value=0x31}, {.addr=0xfb91, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xfb92, .a=0x50, .x=0xa9, .y=0xa8, .sp=0x15, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01a9, .value=0x31}, {.addr=0xfb91, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xfb91, .value=0x46, .type=IO_READ},
        {.addr=0xfb92, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a9, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00BC) {
    const struct CPU_State initial_cpu = {.pc=0x5c18, .a=0x40, .x=0xec, .y=0xb9, .sp=0x9a, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x00ec, .value=0x18}, {.addr=0x5c18, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x5c19, .a=0x58, .x=0xec, .y=0xb9, .sp=0x9a, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x00ec, .value=0x18}, {.addr=0x5c18, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x5c18, .value=0x46, .type=IO_READ},
        {.addr=0x5c19, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ec, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00BD) {
    const struct CPU_State initial_cpu = {.pc=0x48bf, .a=0x0f, .x=0x76, .y=0x55, .sp=0xe8, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x0076, .value=0xce}, {.addr=0x48bf, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x48c0, .a=0xc1, .x=0x76, .y=0x55, .sp=0xe8, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x0076, .value=0xce}, {.addr=0x48bf, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x48bf, .value=0x46, .type=IO_READ},
        {.addr=0x48c0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0076, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00BE) {
    const struct CPU_State initial_cpu = {.pc=0xc0e0, .a=0xaa, .x=0xe1, .y=0x1d, .sp=0x7f, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x01e1, .value=0xff}, {.addr=0xc0e0, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xc0e1, .a=0x55, .x=0xe1, .y=0x1d, .sp=0x7f, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x01e1, .value=0xff}, {.addr=0xc0e0, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xc0e0, .value=0x46, .type=IO_READ},
        {.addr=0xc0e1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e1, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00BF) {
    const struct CPU_State initial_cpu = {.pc=0x3d0b, .a=0x91, .x=0xee, .y=0x83, .sp=0x0a, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0xa8}, {.addr=0x3d0b, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x3d0c, .a=0x39, .x=0xee, .y=0x83, .sp=0x0a, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0xa8}, {.addr=0x3d0b, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x3d0b, .value=0x46, .type=IO_READ},
        {.addr=0x3d0c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ee, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00C0) {
    const struct CPU_State initial_cpu = {.pc=0xe97c, .a=0x0d, .x=0x04, .y=0xd2, .sp=0xf8, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0x1f}, {.addr=0xe97c, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xe97d, .a=0x12, .x=0x04, .y=0xd2, .sp=0xf8, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0x1f}, {.addr=0xe97c, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xe97c, .value=0x46, .type=IO_READ},
        {.addr=0xe97d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0104, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00C1) {
    const struct CPU_State initial_cpu = {.pc=0x8b7f, .a=0xfc, .x=0xed, .y=0xb0, .sp=0x58, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x01ed, .value=0x90}, {.addr=0x8b7f, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x8b80, .a=0x6c, .x=0xed, .y=0xb0, .sp=0x58, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x01ed, .value=0x90}, {.addr=0x8b7f, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x8b7f, .value=0x46, .type=IO_READ},
        {.addr=0x8b80, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ed, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00C2) {
    const struct CPU_State initial_cpu = {.pc=0x5bab, .a=0x80, .x=0xf6, .y=0x0f, .sp=0xbe, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x01f6, .value=0x6b}, {.addr=0x5bab, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x5bac, .a=0xeb, .x=0xf6, .y=0x0f, .sp=0xbe, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x01f6, .value=0x6b}, {.addr=0x5bab, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x5bab, .value=0x46, .type=IO_READ},
        {.addr=0x5bac, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f6, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00C3) {
    const struct CPU_State initial_cpu = {.pc=0x8861, .a=0x73, .x=0x99, .y=0x5c, .sp=0x28, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x0199, .value=0xb7}, {.addr=0x8861, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x8862, .a=0xc4, .x=0x99, .y=0x5c, .sp=0x28, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x0199, .value=0xb7}, {.addr=0x8861, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x8861, .value=0x46, .type=IO_READ},
        {.addr=0x8862, .value=DUMMY, .type=IO_READ},
        {.addr=0x0199, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00C4) {
    const struct CPU_State initial_cpu = {.pc=0x4645, .a=0x8e, .x=0x3e, .y=0x05, .sp=0x21, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x003e, .value=0x3f}, {.addr=0x4645, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x4646, .a=0xb1, .x=0x3e, .y=0x05, .sp=0x21, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x003e, .value=0x3f}, {.addr=0x4645, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x4645, .value=0x46, .type=IO_READ},
        {.addr=0x4646, .value=DUMMY, .type=IO_READ},
        {.addr=0x003e, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00C5) {
    const struct CPU_State initial_cpu = {.pc=0x9b53, .a=0x1e, .x=0x54, .y=0x29, .sp=0x06, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x0054, .value=0x5b}, {.addr=0x9b53, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x9b54, .a=0x45, .x=0x54, .y=0x29, .sp=0x06, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x0054, .value=0x5b}, {.addr=0x9b53, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x9b53, .value=0x46, .type=IO_READ},
        {.addr=0x9b54, .value=DUMMY, .type=IO_READ},
        {.addr=0x0054, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00C6) {
    const struct CPU_State initial_cpu = {.pc=0x5682, .a=0x22, .x=0x3a, .y=0x73, .sp=0xe1, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x013a, .value=0xc9}, {.addr=0x5682, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x5683, .a=0xeb, .x=0x3a, .y=0x73, .sp=0xe1, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x013a, .value=0xc9}, {.addr=0x5682, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x5682, .value=0x46, .type=IO_READ},
        {.addr=0x5683, .value=DUMMY, .type=IO_READ},
        {.addr=0x013a, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00C7) {
    const struct CPU_State initial_cpu = {.pc=0xd1ea, .a=0x30, .x=0x2c, .y=0xf5, .sp=0xac, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x012c, .value=0xcf}, {.addr=0xd1ea, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xd1eb, .a=0xff, .x=0x2c, .y=0xf5, .sp=0xac, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x012c, .value=0xcf}, {.addr=0xd1ea, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xd1ea, .value=0x46, .type=IO_READ},
        {.addr=0xd1eb, .value=DUMMY, .type=IO_READ},
        {.addr=0x012c, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00C8) {
    const struct CPU_State initial_cpu = {.pc=0x7b53, .a=0x03, .x=0xc6, .y=0x19, .sp=0x45, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x00c6, .value=0xf9}, {.addr=0x7b53, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x7b54, .a=0xfa, .x=0xc6, .y=0x19, .sp=0x45, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x00c6, .value=0xf9}, {.addr=0x7b53, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x7b53, .value=0x46, .type=IO_READ},
        {.addr=0x7b54, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c6, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00C9) {
    const struct CPU_State initial_cpu = {.pc=0x09d4, .a=0xdd, .x=0x30, .y=0x6d, .sp=0xb8, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x0030, .value=0xa9}, {.addr=0x09d4, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x09d5, .a=0x74, .x=0x30, .y=0x6d, .sp=0xb8, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0030, .value=0xa9}, {.addr=0x09d4, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x09d4, .value=0x46, .type=IO_READ},
        {.addr=0x09d5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0030, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00CA) {
    const struct CPU_State initial_cpu = {.pc=0x4711, .a=0x1f, .x=0x2a, .y=0x3e, .sp=0xd6, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x012a, .value=0xda}, {.addr=0x4711, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x4712, .a=0xc5, .x=0x2a, .y=0x3e, .sp=0xd6, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x012a, .value=0xda}, {.addr=0x4711, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x4711, .value=0x46, .type=IO_READ},
        {.addr=0x4712, .value=DUMMY, .type=IO_READ},
        {.addr=0x012a, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00CB) {
    const struct CPU_State initial_cpu = {.pc=0x42f3, .a=0xc1, .x=0x99, .y=0xd3, .sp=0xf5, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x0199, .value=0xe2}, {.addr=0x42f3, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x42f4, .a=0x23, .x=0x99, .y=0xd3, .sp=0xf5, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x0199, .value=0xe2}, {.addr=0x42f3, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x42f3, .value=0x46, .type=IO_READ},
        {.addr=0x42f4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0199, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00CC) {
    const struct CPU_State initial_cpu = {.pc=0x2cfb, .a=0x42, .x=0xe8, .y=0x3a, .sp=0x8e, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x00e8, .value=0xa8}, {.addr=0x2cfb, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x2cfc, .a=0xea, .x=0xe8, .y=0x3a, .sp=0x8e, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x00e8, .value=0xa8}, {.addr=0x2cfb, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x2cfb, .value=0x46, .type=IO_READ},
        {.addr=0x2cfc, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e8, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00CD) {
    const struct CPU_State initial_cpu = {.pc=0xc2b3, .a=0xfa, .x=0x68, .y=0x47, .sp=0xaf, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x0168, .value=0xea}, {.addr=0xc2b3, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xc2b4, .a=0x10, .x=0x68, .y=0x47, .sp=0xaf, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x0168, .value=0xea}, {.addr=0xc2b3, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xc2b3, .value=0x46, .type=IO_READ},
        {.addr=0xc2b4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0168, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00CE) {
    const struct CPU_State initial_cpu = {.pc=0x1843, .a=0x5f, .x=0x42, .y=0x5b, .sp=0xef, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x0042, .value=0xfd}, {.addr=0x1843, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x1844, .a=0xa2, .x=0x42, .y=0x5b, .sp=0xef, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x0042, .value=0xfd}, {.addr=0x1843, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x1843, .value=0x46, .type=IO_READ},
        {.addr=0x1844, .value=DUMMY, .type=IO_READ},
        {.addr=0x0042, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00CF) {
    const struct CPU_State initial_cpu = {.pc=0x4804, .a=0x89, .x=0xc5, .y=0xcb, .sp=0xc9, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x01c5, .value=0xc4}, {.addr=0x4804, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x4805, .a=0x4d, .x=0xc5, .y=0xcb, .sp=0xc9, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x01c5, .value=0xc4}, {.addr=0x4804, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x4804, .value=0x46, .type=IO_READ},
        {.addr=0x4805, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c5, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00D0) {
    const struct CPU_State initial_cpu = {.pc=0xf87e, .a=0x96, .x=0x83, .y=0x74, .sp=0x0f, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x0083, .value=0x65}, {.addr=0xf87e, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xf87f, .a=0xf3, .x=0x83, .y=0x74, .sp=0x0f, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0083, .value=0x65}, {.addr=0xf87e, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xf87e, .value=0x46, .type=IO_READ},
        {.addr=0xf87f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0083, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00D1) {
    const struct CPU_State initial_cpu = {.pc=0xc988, .a=0xa2, .x=0xfc, .y=0xf5, .sp=0x2e, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x72}, {.addr=0xc988, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xc989, .a=0xd0, .x=0xfc, .y=0xf5, .sp=0x2e, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0x72}, {.addr=0xc988, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xc988, .value=0x46, .type=IO_READ},
        {.addr=0xc989, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fc, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00D2) {
    const struct CPU_State initial_cpu = {.pc=0xaec0, .a=0xfa, .x=0x05, .y=0x16, .sp=0xbd, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x0105, .value=0x0a}, {.addr=0xaec0, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xaec1, .a=0xf0, .x=0x05, .y=0x16, .sp=0xbd, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x0105, .value=0x0a}, {.addr=0xaec0, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xaec0, .value=0x46, .type=IO_READ},
        {.addr=0xaec1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0105, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00D3) {
    const struct CPU_State initial_cpu = {.pc=0x00d3, .a=0xbf, .x=0x5b, .y=0xe6, .sp=0xd6, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x005b, .value=0x64}, {.addr=0x00d3, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x00d4, .a=0xdb, .x=0x5b, .y=0xe6, .sp=0xd6, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x005b, .value=0x64}, {.addr=0x00d3, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x00d3, .value=0x46, .type=IO_READ},
        {.addr=0x00d4, .value=DUMMY, .type=IO_READ},
        {.addr=0x005b, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00D4) {
    const struct CPU_State initial_cpu = {.pc=0xde50, .a=0x4b, .x=0x6a, .y=0x9f, .sp=0xc2, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x006a, .value=0x23}, {.addr=0xde50, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xde51, .a=0x68, .x=0x6a, .y=0x9f, .sp=0xc2, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x006a, .value=0x23}, {.addr=0xde50, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xde50, .value=0x46, .type=IO_READ},
        {.addr=0xde51, .value=DUMMY, .type=IO_READ},
        {.addr=0x006a, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00D5) {
    const struct CPU_State initial_cpu = {.pc=0x7c3b, .a=0x14, .x=0x1b, .y=0x5a, .sp=0xcf, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x001b, .value=0xff}, {.addr=0x7c3b, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x7c3c, .a=0xeb, .x=0x1b, .y=0x5a, .sp=0xcf, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x001b, .value=0xff}, {.addr=0x7c3b, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x7c3b, .value=0x46, .type=IO_READ},
        {.addr=0x7c3c, .value=DUMMY, .type=IO_READ},
        {.addr=0x001b, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00D6) {
    const struct CPU_State initial_cpu = {.pc=0xac42, .a=0x1d, .x=0x03, .y=0xcf, .sp=0x3f, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x0103, .value=0x11}, {.addr=0xac42, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xac43, .a=0x0c, .x=0x03, .y=0xcf, .sp=0x3f, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x0103, .value=0x11}, {.addr=0xac42, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xac42, .value=0x46, .type=IO_READ},
        {.addr=0xac43, .value=DUMMY, .type=IO_READ},
        {.addr=0x0103, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00D7) {
    const struct CPU_State initial_cpu = {.pc=0xf6e3, .a=0x11, .x=0xb5, .y=0x2d, .sp=0xf4, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x01b5, .value=0x89}, {.addr=0xf6e3, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xf6e4, .a=0x98, .x=0xb5, .y=0x2d, .sp=0xf4, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x01b5, .value=0x89}, {.addr=0xf6e3, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xf6e3, .value=0x46, .type=IO_READ},
        {.addr=0xf6e4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b5, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00D8) {
    const struct CPU_State initial_cpu = {.pc=0x9383, .a=0xb4, .x=0xb9, .y=0x3e, .sp=0x14, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x00b9, .value=0x54}, {.addr=0x9383, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x9384, .a=0xe0, .x=0xb9, .y=0x3e, .sp=0x14, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x00b9, .value=0x54}, {.addr=0x9383, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x9383, .value=0x46, .type=IO_READ},
        {.addr=0x9384, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b9, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00D9) {
    const struct CPU_State initial_cpu = {.pc=0x1b89, .a=0x8f, .x=0xf4, .y=0x8c, .sp=0x72, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x01f4, .value=0x9b}, {.addr=0x1b89, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x1b8a, .a=0x14, .x=0xf4, .y=0x8c, .sp=0x72, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x01f4, .value=0x9b}, {.addr=0x1b89, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x1b89, .value=0x46, .type=IO_READ},
        {.addr=0x1b8a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f4, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00DA) {
    const struct CPU_State initial_cpu = {.pc=0x744a, .a=0x35, .x=0x08, .y=0x13, .sp=0x7a, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x0108, .value=0x1a}, {.addr=0x744a, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x744b, .a=0x2f, .x=0x08, .y=0x13, .sp=0x7a, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x0108, .value=0x1a}, {.addr=0x744a, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x744a, .value=0x46, .type=IO_READ},
        {.addr=0x744b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0108, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00DB) {
    const struct CPU_State initial_cpu = {.pc=0xadf6, .a=0x94, .x=0xb7, .y=0x37, .sp=0xc5, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x00b7, .value=0x70}, {.addr=0xadf6, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xadf7, .a=0xe4, .x=0xb7, .y=0x37, .sp=0xc5, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x00b7, .value=0x70}, {.addr=0xadf6, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xadf6, .value=0x46, .type=IO_READ},
        {.addr=0xadf7, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b7, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00DC) {
    const struct CPU_State initial_cpu = {.pc=0x93ee, .a=0x1a, .x=0x80, .y=0xdd, .sp=0x5d, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x0080, .value=0x6c}, {.addr=0x93ee, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x93ef, .a=0x76, .x=0x80, .y=0xdd, .sp=0x5d, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x0080, .value=0x6c}, {.addr=0x93ee, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x93ee, .value=0x46, .type=IO_READ},
        {.addr=0x93ef, .value=DUMMY, .type=IO_READ},
        {.addr=0x0080, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00DD) {
    const struct CPU_State initial_cpu = {.pc=0xd9bd, .a=0xa3, .x=0x42, .y=0x29, .sp=0xc0, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x0142, .value=0x81}, {.addr=0xd9bd, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xd9be, .a=0x22, .x=0x42, .y=0x29, .sp=0xc0, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x0142, .value=0x81}, {.addr=0xd9bd, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xd9bd, .value=0x46, .type=IO_READ},
        {.addr=0xd9be, .value=DUMMY, .type=IO_READ},
        {.addr=0x0142, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00DE) {
    const struct CPU_State initial_cpu = {.pc=0xa067, .a=0x81, .x=0x7f, .y=0xcb, .sp=0x92, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x007f, .value=0x24}, {.addr=0xa067, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xa068, .a=0xa5, .x=0x7f, .y=0xcb, .sp=0x92, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x007f, .value=0x24}, {.addr=0xa067, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xa067, .value=0x46, .type=IO_READ},
        {.addr=0xa068, .value=DUMMY, .type=IO_READ},
        {.addr=0x007f, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00DF) {
    const struct CPU_State initial_cpu = {.pc=0x292c, .a=0x79, .x=0x67, .y=0x86, .sp=0x8b, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0x24}, {.addr=0x292c, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x292d, .a=0x5d, .x=0x67, .y=0x86, .sp=0x8b, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0x24}, {.addr=0x292c, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x292c, .value=0x46, .type=IO_READ},
        {.addr=0x292d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0167, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00E0) {
    const struct CPU_State initial_cpu = {.pc=0x2609, .a=0xb2, .x=0x53, .y=0xbc, .sp=0x7d, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x0053, .value=0x7a}, {.addr=0x2609, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x260a, .a=0xc8, .x=0x53, .y=0xbc, .sp=0x7d, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0053, .value=0x7a}, {.addr=0x2609, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x2609, .value=0x46, .type=IO_READ},
        {.addr=0x260a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0053, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00E1) {
    const struct CPU_State initial_cpu = {.pc=0x1cda, .a=0x04, .x=0xd9, .y=0xe4, .sp=0xf1, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x01d9, .value=0x77}, {.addr=0x1cda, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x1cdb, .a=0x73, .x=0xd9, .y=0xe4, .sp=0xf1, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x01d9, .value=0x77}, {.addr=0x1cda, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x1cda, .value=0x46, .type=IO_READ},
        {.addr=0x1cdb, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d9, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x151f, .a=0x94, .x=0xb5, .y=0xad, .sp=0xf3, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x01b5, .value=0x3a}, {.addr=0x151f, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x1520, .a=0xae, .x=0xb5, .y=0xad, .sp=0xf3, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x01b5, .value=0x3a}, {.addr=0x151f, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x151f, .value=0x46, .type=IO_READ},
        {.addr=0x1520, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b5, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00E3) {
    const struct CPU_State initial_cpu = {.pc=0x053d, .a=0xef, .x=0x3d, .y=0x69, .sp=0xa4, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x003d, .value=0x68}, {.addr=0x053d, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x053e, .a=0x87, .x=0x3d, .y=0x69, .sp=0xa4, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x003d, .value=0x68}, {.addr=0x053d, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x053d, .value=0x46, .type=IO_READ},
        {.addr=0x053e, .value=DUMMY, .type=IO_READ},
        {.addr=0x003d, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00E4) {
    const struct CPU_State initial_cpu = {.pc=0x9b66, .a=0x84, .x=0xe3, .y=0x9f, .sp=0x60, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x00e3, .value=0x04}, {.addr=0x9b66, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x9b67, .a=0x80, .x=0xe3, .y=0x9f, .sp=0x60, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x00e3, .value=0x04}, {.addr=0x9b66, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x9b66, .value=0x46, .type=IO_READ},
        {.addr=0x9b67, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e3, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00E5) {
    const struct CPU_State initial_cpu = {.pc=0x6e2d, .a=0xd3, .x=0x99, .y=0xf9, .sp=0x14, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x0099, .value=0x56}, {.addr=0x6e2d, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x6e2e, .a=0x85, .x=0x99, .y=0xf9, .sp=0x14, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x0099, .value=0x56}, {.addr=0x6e2d, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x6e2d, .value=0x46, .type=IO_READ},
        {.addr=0x6e2e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0099, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00E6) {
    const struct CPU_State initial_cpu = {.pc=0x1c3f, .a=0xe9, .x=0x8c, .y=0xed, .sp=0x1a, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x018c, .value=0x63}, {.addr=0x1c3f, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x1c40, .a=0x8a, .x=0x8c, .y=0xed, .sp=0x1a, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x018c, .value=0x63}, {.addr=0x1c3f, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x1c3f, .value=0x46, .type=IO_READ},
        {.addr=0x1c40, .value=DUMMY, .type=IO_READ},
        {.addr=0x018c, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00E7) {
    const struct CPU_State initial_cpu = {.pc=0x9687, .a=0xb5, .x=0x26, .y=0x95, .sp=0xae, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x0126, .value=0xbb}, {.addr=0x9687, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x9688, .a=0x0e, .x=0x26, .y=0x95, .sp=0xae, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x0126, .value=0xbb}, {.addr=0x9687, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x9687, .value=0x46, .type=IO_READ},
        {.addr=0x9688, .value=DUMMY, .type=IO_READ},
        {.addr=0x0126, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00E8) {
    const struct CPU_State initial_cpu = {.pc=0x17cb, .a=0x9c, .x=0xb4, .y=0xef, .sp=0xf6, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x01b4, .value=0xac}, {.addr=0x17cb, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x17cc, .a=0x30, .x=0xb4, .y=0xef, .sp=0xf6, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01b4, .value=0xac}, {.addr=0x17cb, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x17cb, .value=0x46, .type=IO_READ},
        {.addr=0x17cc, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b4, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00E9) {
    const struct CPU_State initial_cpu = {.pc=0x50af, .a=0xcc, .x=0x7d, .y=0xef, .sp=0xac, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x007d, .value=0x75}, {.addr=0x50af, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x50b0, .a=0xb9, .x=0x7d, .y=0xef, .sp=0xac, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x007d, .value=0x75}, {.addr=0x50af, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x50af, .value=0x46, .type=IO_READ},
        {.addr=0x50b0, .value=DUMMY, .type=IO_READ},
        {.addr=0x007d, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00EA) {
    const struct CPU_State initial_cpu = {.pc=0xbf51, .a=0xe4, .x=0x80, .y=0x7c, .sp=0x17, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0x3d}, {.addr=0xbf51, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xbf52, .a=0xd9, .x=0x80, .y=0x7c, .sp=0x17, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0x3d}, {.addr=0xbf51, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xbf51, .value=0x46, .type=IO_READ},
        {.addr=0xbf52, .value=DUMMY, .type=IO_READ},
        {.addr=0x0180, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00EB) {
    const struct CPU_State initial_cpu = {.pc=0xdd14, .a=0x85, .x=0x1f, .y=0x07, .sp=0x3d, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0xde}, {.addr=0xdd14, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xdd15, .a=0x5b, .x=0x1f, .y=0x07, .sp=0x3d, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0xde}, {.addr=0xdd14, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xdd14, .value=0x46, .type=IO_READ},
        {.addr=0xdd15, .value=DUMMY, .type=IO_READ},
        {.addr=0x011f, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00EC) {
    const struct CPU_State initial_cpu = {.pc=0x2b4e, .a=0x68, .x=0xeb, .y=0x6a, .sp=0x71, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0x90}, {.addr=0x2b4e, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x2b4f, .a=0xf8, .x=0xeb, .y=0x6a, .sp=0x71, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0x90}, {.addr=0x2b4e, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x2b4e, .value=0x46, .type=IO_READ},
        {.addr=0x2b4f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01eb, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00ED) {
    const struct CPU_State initial_cpu = {.pc=0x99d3, .a=0x56, .x=0x52, .y=0xad, .sp=0xcc, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x0052, .value=0x03}, {.addr=0x99d3, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x99d4, .a=0x55, .x=0x52, .y=0xad, .sp=0xcc, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x0052, .value=0x03}, {.addr=0x99d3, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x99d3, .value=0x46, .type=IO_READ},
        {.addr=0x99d4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0052, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00EE) {
    const struct CPU_State initial_cpu = {.pc=0x0279, .a=0x35, .x=0x78, .y=0x28, .sp=0x89, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x0178, .value=0xc9}, {.addr=0x0279, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x027a, .a=0xfc, .x=0x78, .y=0x28, .sp=0x89, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0178, .value=0xc9}, {.addr=0x0279, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x0279, .value=0x46, .type=IO_READ},
        {.addr=0x027a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0178, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00EF) {
    const struct CPU_State initial_cpu = {.pc=0xfc77, .a=0xe5, .x=0x07, .y=0x44, .sp=0x64, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0x9b}, {.addr=0xfc77, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xfc78, .a=0x7e, .x=0x07, .y=0x44, .sp=0x64, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0x9b}, {.addr=0xfc77, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xfc77, .value=0x46, .type=IO_READ},
        {.addr=0xfc78, .value=DUMMY, .type=IO_READ},
        {.addr=0x0107, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00F0) {
    const struct CPU_State initial_cpu = {.pc=0xe261, .a=0x90, .x=0xc5, .y=0x06, .sp=0xfb, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x01c5, .value=0x86}, {.addr=0xe261, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xe262, .a=0x16, .x=0xc5, .y=0x06, .sp=0xfb, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x01c5, .value=0x86}, {.addr=0xe261, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xe261, .value=0x46, .type=IO_READ},
        {.addr=0xe262, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c5, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00F1) {
    const struct CPU_State initial_cpu = {.pc=0xf746, .a=0xd2, .x=0xc0, .y=0x0a, .sp=0x0b, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x01c0, .value=0xab}, {.addr=0xf746, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xf747, .a=0x79, .x=0xc0, .y=0x0a, .sp=0x0b, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x01c0, .value=0xab}, {.addr=0xf746, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xf746, .value=0x46, .type=IO_READ},
        {.addr=0xf747, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c0, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00F2) {
    const struct CPU_State initial_cpu = {.pc=0xffe9, .a=0x5c, .x=0x94, .y=0x8f, .sp=0xbe, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x0094, .value=0x44}, {.addr=0xffe9, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xffea, .a=0x18, .x=0x94, .y=0x8f, .sp=0xbe, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x0094, .value=0x44}, {.addr=0xffe9, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xffe9, .value=0x46, .type=IO_READ},
        {.addr=0xffea, .value=DUMMY, .type=IO_READ},
        {.addr=0x0094, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00F3) {
    const struct CPU_State initial_cpu = {.pc=0x13e4, .a=0x8d, .x=0xce, .y=0xc7, .sp=0x83, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x01ce, .value=0x42}, {.addr=0x13e4, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x13e5, .a=0xcf, .x=0xce, .y=0xc7, .sp=0x83, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x01ce, .value=0x42}, {.addr=0x13e4, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x13e4, .value=0x46, .type=IO_READ},
        {.addr=0x13e5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ce, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00F5) {
    const struct CPU_State initial_cpu = {.pc=0xb714, .a=0xe4, .x=0xfd, .y=0x75, .sp=0x63, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x01fd, .value=0xd8}, {.addr=0xb714, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xb715, .a=0x3c, .x=0xfd, .y=0x75, .sp=0x63, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x01fd, .value=0xd8}, {.addr=0xb714, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xb714, .value=0x46, .type=IO_READ},
        {.addr=0xb715, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fd, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00F6) {
    const struct CPU_State initial_cpu = {.pc=0x8ee9, .a=0xae, .x=0x59, .y=0x8a, .sp=0xbf, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x0059, .value=0x62}, {.addr=0x8ee9, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x8eea, .a=0xcc, .x=0x59, .y=0x8a, .sp=0xbf, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x0059, .value=0x62}, {.addr=0x8ee9, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x8ee9, .value=0x46, .type=IO_READ},
        {.addr=0x8eea, .value=DUMMY, .type=IO_READ},
        {.addr=0x0059, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00F7) {
    const struct CPU_State initial_cpu = {.pc=0xa2cb, .a=0xf1, .x=0xd8, .y=0xba, .sp=0xba, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x01d8, .value=0x27}, {.addr=0xa2cb, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xa2cc, .a=0xd6, .x=0xd8, .y=0xba, .sp=0xba, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x01d8, .value=0x27}, {.addr=0xa2cb, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xa2cb, .value=0x46, .type=IO_READ},
        {.addr=0xa2cc, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d8, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00F8) {
    const struct CPU_State initial_cpu = {.pc=0x8580, .a=0xeb, .x=0x6a, .y=0x28, .sp=0xe6, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x016a, .value=0x67}, {.addr=0x8580, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x8581, .a=0x8c, .x=0x6a, .y=0x28, .sp=0xe6, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x016a, .value=0x67}, {.addr=0x8580, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x8580, .value=0x46, .type=IO_READ},
        {.addr=0x8581, .value=DUMMY, .type=IO_READ},
        {.addr=0x016a, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00F9) {
    const struct CPU_State initial_cpu = {.pc=0x28ad, .a=0x25, .x=0xc3, .y=0xaa, .sp=0xed, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x00c3, .value=0x9c}, {.addr=0x28ad, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x28ae, .a=0xb9, .x=0xc3, .y=0xaa, .sp=0xed, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x00c3, .value=0x9c}, {.addr=0x28ad, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x28ad, .value=0x46, .type=IO_READ},
        {.addr=0x28ae, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c3, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00FA) {
    const struct CPU_State initial_cpu = {.pc=0x9599, .a=0xdd, .x=0x1b, .y=0x9d, .sp=0xa2, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0x3d}, {.addr=0x9599, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x959a, .a=0xe0, .x=0x1b, .y=0x9d, .sp=0xa2, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0x3d}, {.addr=0x9599, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x9599, .value=0x46, .type=IO_READ},
        {.addr=0x959a, .value=DUMMY, .type=IO_READ},
        {.addr=0x011b, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00FB) {
    const struct CPU_State initial_cpu = {.pc=0x312d, .a=0xac, .x=0xab, .y=0xaf, .sp=0x32, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x00ab, .value=0x24}, {.addr=0x312d, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x312e, .a=0x88, .x=0xab, .y=0xaf, .sp=0x32, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x00ab, .value=0x24}, {.addr=0x312d, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x312d, .value=0x46, .type=IO_READ},
        {.addr=0x312e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ab, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00FC) {
    const struct CPU_State initial_cpu = {.pc=0x2fc9, .a=0xcf, .x=0x1b, .y=0x00, .sp=0x31, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x001b, .value=0xc7}, {.addr=0x2fc9, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x2fca, .a=0x08, .x=0x1b, .y=0x00, .sp=0x31, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x001b, .value=0xc7}, {.addr=0x2fc9, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x2fc9, .value=0x46, .type=IO_READ},
        {.addr=0x2fca, .value=DUMMY, .type=IO_READ},
        {.addr=0x001b, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00FD) {
    const struct CPU_State initial_cpu = {.pc=0x7980, .a=0xaf, .x=0x32, .y=0x0b, .sp=0x58, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x0032, .value=0x56}, {.addr=0x7980, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x7981, .a=0xf9, .x=0x32, .y=0x0b, .sp=0x58, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x0032, .value=0x56}, {.addr=0x7980, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x7980, .value=0x46, .type=IO_READ},
        {.addr=0x7981, .value=DUMMY, .type=IO_READ},
        {.addr=0x0032, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00FE) {
    const struct CPU_State initial_cpu = {.pc=0x880b, .a=0x56, .x=0x2b, .y=0xa6, .sp=0x20, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x002b, .value=0x66}, {.addr=0x880b, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x880c, .a=0x30, .x=0x2b, .y=0xa6, .sp=0x20, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x002b, .value=0x66}, {.addr=0x880b, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x880b, .value=0x46, .type=IO_READ},
        {.addr=0x880c, .value=DUMMY, .type=IO_READ},
        {.addr=0x002b, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_00FF) {
    const struct CPU_State initial_cpu = {.pc=0x73e8, .a=0xf0, .x=0xfa, .y=0xee, .sp=0x89, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x01fa, .value=0xdf}, {.addr=0x73e8, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x73e9, .a=0x2f, .x=0xfa, .y=0xee, .sp=0x89, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x01fa, .value=0xdf}, {.addr=0x73e8, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x73e8, .value=0x46, .type=IO_READ},
        {.addr=0x73e9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fa, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0100) {
    const struct CPU_State initial_cpu = {.pc=0xb5c3, .a=0x89, .x=0x8d, .y=0x1f, .sp=0x22, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x008d, .value=0x58}, {.addr=0xb5c3, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xb5c4, .a=0xd1, .x=0x8d, .y=0x1f, .sp=0x22, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x008d, .value=0x58}, {.addr=0xb5c3, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xb5c3, .value=0x46, .type=IO_READ},
        {.addr=0xb5c4, .value=DUMMY, .type=IO_READ},
        {.addr=0x008d, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0101) {
    const struct CPU_State initial_cpu = {.pc=0x77d2, .a=0xd9, .x=0xef, .y=0xb1, .sp=0xda, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0x2c}, {.addr=0x77d2, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x77d3, .a=0xf5, .x=0xef, .y=0xb1, .sp=0xda, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0x2c}, {.addr=0x77d2, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x77d2, .value=0x46, .type=IO_READ},
        {.addr=0x77d3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ef, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0103) {
    const struct CPU_State initial_cpu = {.pc=0x3df1, .a=0xe0, .x=0x7e, .y=0xff, .sp=0x82, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x007e, .value=0xac}, {.addr=0x3df1, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x3df2, .a=0x4c, .x=0x7e, .y=0xff, .sp=0x82, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x007e, .value=0xac}, {.addr=0x3df1, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x3df1, .value=0x46, .type=IO_READ},
        {.addr=0x3df2, .value=DUMMY, .type=IO_READ},
        {.addr=0x007e, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0104) {
    const struct CPU_State initial_cpu = {.pc=0x0b02, .a=0xf3, .x=0x68, .y=0x75, .sp=0xbf, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x0068, .value=0x17}, {.addr=0x0b02, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x0b03, .a=0xe4, .x=0x68, .y=0x75, .sp=0xbf, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x0068, .value=0x17}, {.addr=0x0b02, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x0b02, .value=0x46, .type=IO_READ},
        {.addr=0x0b03, .value=DUMMY, .type=IO_READ},
        {.addr=0x0068, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0105) {
    const struct CPU_State initial_cpu = {.pc=0x3f27, .a=0xf2, .x=0x0a, .y=0x88, .sp=0x4a, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x000a, .value=0xd0}, {.addr=0x3f27, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x3f28, .a=0x22, .x=0x0a, .y=0x88, .sp=0x4a, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x000a, .value=0xd0}, {.addr=0x3f27, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x3f27, .value=0x46, .type=IO_READ},
        {.addr=0x3f28, .value=DUMMY, .type=IO_READ},
        {.addr=0x000a, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0106) {
    const struct CPU_State initial_cpu = {.pc=0x780c, .a=0x14, .x=0x06, .y=0x15, .sp=0x33, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0xcb}, {.addr=0x780c, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x780d, .a=0xdf, .x=0x06, .y=0x15, .sp=0x33, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0xcb}, {.addr=0x780c, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x780c, .value=0x46, .type=IO_READ},
        {.addr=0x780d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0106, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0107) {
    const struct CPU_State initial_cpu = {.pc=0x4072, .a=0xea, .x=0xa2, .y=0x79, .sp=0x5e, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x01a2, .value=0x60}, {.addr=0x4072, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x4073, .a=0x8a, .x=0xa2, .y=0x79, .sp=0x5e, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x01a2, .value=0x60}, {.addr=0x4072, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x4072, .value=0x46, .type=IO_READ},
        {.addr=0x4073, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a2, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0108) {
    const struct CPU_State initial_cpu = {.pc=0x87cc, .a=0xc1, .x=0x7b, .y=0x36, .sp=0x40, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0xeb}, {.addr=0x87cc, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x87cd, .a=0x2a, .x=0x7b, .y=0x36, .sp=0x40, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0xeb}, {.addr=0x87cc, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x87cc, .value=0x46, .type=IO_READ},
        {.addr=0x87cd, .value=DUMMY, .type=IO_READ},
        {.addr=0x017b, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0109) {
    const struct CPU_State initial_cpu = {.pc=0x0821, .a=0xb7, .x=0xd9, .y=0xc4, .sp=0x5a, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x01d9, .value=0x97}, {.addr=0x0821, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x0822, .a=0x20, .x=0xd9, .y=0xc4, .sp=0x5a, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01d9, .value=0x97}, {.addr=0x0821, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x0821, .value=0x46, .type=IO_READ},
        {.addr=0x0822, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d9, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_010A) {
    const struct CPU_State initial_cpu = {.pc=0xa19b, .a=0x44, .x=0x32, .y=0x45, .sp=0xbb, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x0132, .value=0xe0}, {.addr=0xa19b, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xa19c, .a=0xa4, .x=0x32, .y=0x45, .sp=0xbb, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x0132, .value=0xe0}, {.addr=0xa19b, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xa19b, .value=0x46, .type=IO_READ},
        {.addr=0xa19c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0132, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_010B) {
    const struct CPU_State initial_cpu = {.pc=0xa96a, .a=0xe7, .x=0x4c, .y=0x2b, .sp=0x19, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x004c, .value=0x12}, {.addr=0xa96a, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xa96b, .a=0xf5, .x=0x4c, .y=0x2b, .sp=0x19, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x004c, .value=0x12}, {.addr=0xa96a, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xa96a, .value=0x46, .type=IO_READ},
        {.addr=0xa96b, .value=DUMMY, .type=IO_READ},
        {.addr=0x004c, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_010C) {
    const struct CPU_State initial_cpu = {.pc=0x3683, .a=0x4c, .x=0xc8, .y=0xb3, .sp=0x89, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x01c8, .value=0x9d}, {.addr=0x3683, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x3684, .a=0xd1, .x=0xc8, .y=0xb3, .sp=0x89, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x01c8, .value=0x9d}, {.addr=0x3683, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x3683, .value=0x46, .type=IO_READ},
        {.addr=0x3684, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c8, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_010D) {
    const struct CPU_State initial_cpu = {.pc=0xf4d5, .a=0x82, .x=0xdb, .y=0xfb, .sp=0x6e, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x00db, .value=0x2c}, {.addr=0xf4d5, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xf4d6, .a=0xae, .x=0xdb, .y=0xfb, .sp=0x6e, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x00db, .value=0x2c}, {.addr=0xf4d5, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xf4d5, .value=0x46, .type=IO_READ},
        {.addr=0xf4d6, .value=DUMMY, .type=IO_READ},
        {.addr=0x00db, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_010E) {
    const struct CPU_State initial_cpu = {.pc=0x60ab, .a=0x1a, .x=0x9e, .y=0x0b, .sp=0x98, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x009e, .value=0x81}, {.addr=0x60ab, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x60ac, .a=0x9b, .x=0x9e, .y=0x0b, .sp=0x98, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x009e, .value=0x81}, {.addr=0x60ab, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x60ab, .value=0x46, .type=IO_READ},
        {.addr=0x60ac, .value=DUMMY, .type=IO_READ},
        {.addr=0x009e, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_010F) {
    const struct CPU_State initial_cpu = {.pc=0x3542, .a=0x22, .x=0xa4, .y=0xf7, .sp=0x87, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x00a4, .value=0xc9}, {.addr=0x3542, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x3543, .a=0xeb, .x=0xa4, .y=0xf7, .sp=0x87, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x00a4, .value=0xc9}, {.addr=0x3542, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x3542, .value=0x46, .type=IO_READ},
        {.addr=0x3543, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a4, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0110) {
    const struct CPU_State initial_cpu = {.pc=0x0ba7, .a=0x97, .x=0x31, .y=0xa9, .sp=0xb5, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x0031, .value=0xa0}, {.addr=0x0ba7, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x0ba8, .a=0x37, .x=0x31, .y=0xa9, .sp=0xb5, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0031, .value=0xa0}, {.addr=0x0ba7, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x0ba7, .value=0x46, .type=IO_READ},
        {.addr=0x0ba8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0031, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0111) {
    const struct CPU_State initial_cpu = {.pc=0x1768, .a=0xc6, .x=0x38, .y=0x55, .sp=0x61, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x0138, .value=0xf0}, {.addr=0x1768, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x1769, .a=0x36, .x=0x38, .y=0x55, .sp=0x61, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x0138, .value=0xf0}, {.addr=0x1768, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x1768, .value=0x46, .type=IO_READ},
        {.addr=0x1769, .value=DUMMY, .type=IO_READ},
        {.addr=0x0138, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0112) {
    const struct CPU_State initial_cpu = {.pc=0xaf61, .a=0x9b, .x=0x5f, .y=0xf9, .sp=0x4c, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x005f, .value=0x33}, {.addr=0xaf61, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xaf62, .a=0xa8, .x=0x5f, .y=0xf9, .sp=0x4c, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x005f, .value=0x33}, {.addr=0xaf61, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xaf61, .value=0x46, .type=IO_READ},
        {.addr=0xaf62, .value=DUMMY, .type=IO_READ},
        {.addr=0x005f, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0113) {
    const struct CPU_State initial_cpu = {.pc=0x0514, .a=0x03, .x=0xce, .y=0x9e, .sp=0x81, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x01ce, .value=0x69}, {.addr=0x0514, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x0515, .a=0x6a, .x=0xce, .y=0x9e, .sp=0x81, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01ce, .value=0x69}, {.addr=0x0514, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x0514, .value=0x46, .type=IO_READ},
        {.addr=0x0515, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ce, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0114) {
    const struct CPU_State initial_cpu = {.pc=0x24d5, .a=0x06, .x=0x6d, .y=0x8d, .sp=0xaa, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x016d, .value=0x83}, {.addr=0x24d5, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x24d6, .a=0x85, .x=0x6d, .y=0x8d, .sp=0xaa, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x016d, .value=0x83}, {.addr=0x24d5, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x24d5, .value=0x46, .type=IO_READ},
        {.addr=0x24d6, .value=DUMMY, .type=IO_READ},
        {.addr=0x016d, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0115) {
    const struct CPU_State initial_cpu = {.pc=0x4430, .a=0x8c, .x=0xda, .y=0x49, .sp=0x1f, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x00da, .value=0xfe}, {.addr=0x4430, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x4431, .a=0x72, .x=0xda, .y=0x49, .sp=0x1f, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x00da, .value=0xfe}, {.addr=0x4430, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x4430, .value=0x46, .type=IO_READ},
        {.addr=0x4431, .value=DUMMY, .type=IO_READ},
        {.addr=0x00da, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0116) {
    const struct CPU_State initial_cpu = {.pc=0xf0ef, .a=0x87, .x=0xd1, .y=0x56, .sp=0x0d, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0xb5}, {.addr=0xf0ef, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xf0f0, .a=0x32, .x=0xd1, .y=0x56, .sp=0x0d, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0xb5}, {.addr=0xf0ef, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xf0ef, .value=0x46, .type=IO_READ},
        {.addr=0xf0f0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d1, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0117) {
    const struct CPU_State initial_cpu = {.pc=0x1aa4, .a=0x82, .x=0x61, .y=0xf1, .sp=0x08, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x0061, .value=0x19}, {.addr=0x1aa4, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x1aa5, .a=0x9b, .x=0x61, .y=0xf1, .sp=0x08, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x0061, .value=0x19}, {.addr=0x1aa4, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x1aa4, .value=0x46, .type=IO_READ},
        {.addr=0x1aa5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0061, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0118) {
    const struct CPU_State initial_cpu = {.pc=0x21a2, .a=0x1a, .x=0xe8, .y=0x0c, .sp=0x78, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x00e8, .value=0x20}, {.addr=0x21a2, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x21a3, .a=0x3a, .x=0xe8, .y=0x0c, .sp=0x78, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x00e8, .value=0x20}, {.addr=0x21a2, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x21a2, .value=0x46, .type=IO_READ},
        {.addr=0x21a3, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e8, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0119) {
    const struct CPU_State initial_cpu = {.pc=0x1a65, .a=0xa1, .x=0x63, .y=0x3c, .sp=0xb2, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x0063, .value=0xdc}, {.addr=0x1a65, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x1a66, .a=0x7d, .x=0x63, .y=0x3c, .sp=0xb2, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0063, .value=0xdc}, {.addr=0x1a65, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x1a65, .value=0x46, .type=IO_READ},
        {.addr=0x1a66, .value=DUMMY, .type=IO_READ},
        {.addr=0x0063, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_011A) {
    const struct CPU_State initial_cpu = {.pc=0xae8c, .a=0x59, .x=0xcc, .y=0x5f, .sp=0x43, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x01cc, .value=0xab}, {.addr=0xae8c, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xae8d, .a=0xf2, .x=0xcc, .y=0x5f, .sp=0x43, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x01cc, .value=0xab}, {.addr=0xae8c, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xae8c, .value=0x46, .type=IO_READ},
        {.addr=0xae8d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cc, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_011B) {
    const struct CPU_State initial_cpu = {.pc=0x0247, .a=0xed, .x=0x12, .y=0xda, .sp=0x3b, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0xfa}, {.addr=0x0247, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x0248, .a=0x17, .x=0x12, .y=0xda, .sp=0x3b, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0xfa}, {.addr=0x0247, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x0247, .value=0x46, .type=IO_READ},
        {.addr=0x0248, .value=DUMMY, .type=IO_READ},
        {.addr=0x0112, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_011C) {
    const struct CPU_State initial_cpu = {.pc=0x9a14, .a=0xef, .x=0x4b, .y=0xa6, .sp=0x95, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x004b, .value=0xc5}, {.addr=0x9a14, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x9a15, .a=0x2a, .x=0x4b, .y=0xa6, .sp=0x95, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x004b, .value=0xc5}, {.addr=0x9a14, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x9a14, .value=0x46, .type=IO_READ},
        {.addr=0x9a15, .value=DUMMY, .type=IO_READ},
        {.addr=0x004b, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_011D) {
    const struct CPU_State initial_cpu = {.pc=0x01ba, .a=0x3f, .x=0x68, .y=0xb8, .sp=0xb1, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x0168, .value=0x0e}, {.addr=0x01ba, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x01bb, .a=0x31, .x=0x68, .y=0xb8, .sp=0xb1, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x0168, .value=0x0e}, {.addr=0x01ba, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x01ba, .value=0x46, .type=IO_READ},
        {.addr=0x01bb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0168, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_011E) {
    const struct CPU_State initial_cpu = {.pc=0xa98d, .a=0x80, .x=0x4e, .y=0x4c, .sp=0x79, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0x3c}, {.addr=0xa98d, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xa98e, .a=0xbc, .x=0x4e, .y=0x4c, .sp=0x79, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0x3c}, {.addr=0xa98d, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xa98d, .value=0x46, .type=IO_READ},
        {.addr=0xa98e, .value=DUMMY, .type=IO_READ},
        {.addr=0x014e, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_011F) {
    const struct CPU_State initial_cpu = {.pc=0x687e, .a=0xbf, .x=0x85, .y=0xad, .sp=0x32, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x0185, .value=0xb8}, {.addr=0x687e, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x687f, .a=0x07, .x=0x85, .y=0xad, .sp=0x32, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x0185, .value=0xb8}, {.addr=0x687e, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x687e, .value=0x46, .type=IO_READ},
        {.addr=0x687f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0185, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0120) {
    const struct CPU_State initial_cpu = {.pc=0x0f96, .a=0x43, .x=0x17, .y=0x92, .sp=0x87, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x0117, .value=0x69}, {.addr=0x0f96, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x0f97, .a=0x2a, .x=0x17, .y=0x92, .sp=0x87, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x0117, .value=0x69}, {.addr=0x0f96, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x0f96, .value=0x46, .type=IO_READ},
        {.addr=0x0f97, .value=DUMMY, .type=IO_READ},
        {.addr=0x0117, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0121) {
    const struct CPU_State initial_cpu = {.pc=0xa01f, .a=0x23, .x=0x35, .y=0x8f, .sp=0x91, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x0135, .value=0xb3}, {.addr=0xa01f, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xa020, .a=0x90, .x=0x35, .y=0x8f, .sp=0x91, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x0135, .value=0xb3}, {.addr=0xa01f, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xa01f, .value=0x46, .type=IO_READ},
        {.addr=0xa020, .value=DUMMY, .type=IO_READ},
        {.addr=0x0135, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0122) {
    const struct CPU_State initial_cpu = {.pc=0x06c6, .a=0xe9, .x=0x8a, .y=0x06, .sp=0xf6, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x008a, .value=0x41}, {.addr=0x06c6, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x06c7, .a=0xa8, .x=0x8a, .y=0x06, .sp=0xf6, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x008a, .value=0x41}, {.addr=0x06c6, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x06c6, .value=0x46, .type=IO_READ},
        {.addr=0x06c7, .value=DUMMY, .type=IO_READ},
        {.addr=0x008a, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0123) {
    const struct CPU_State initial_cpu = {.pc=0x5768, .a=0xf7, .x=0xd3, .y=0x0f, .sp=0x2b, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x00d3, .value=0xd4}, {.addr=0x5768, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x5769, .a=0x23, .x=0xd3, .y=0x0f, .sp=0x2b, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x00d3, .value=0xd4}, {.addr=0x5768, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x5768, .value=0x46, .type=IO_READ},
        {.addr=0x5769, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d3, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0124) {
    const struct CPU_State initial_cpu = {.pc=0x6fe8, .a=0x5a, .x=0x60, .y=0xc1, .sp=0x72, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x0060, .value=0x65}, {.addr=0x6fe8, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x6fe9, .a=0x3f, .x=0x60, .y=0xc1, .sp=0x72, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x0060, .value=0x65}, {.addr=0x6fe8, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x6fe8, .value=0x46, .type=IO_READ},
        {.addr=0x6fe9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0060, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0125) {
    const struct CPU_State initial_cpu = {.pc=0xfdca, .a=0xe5, .x=0x97, .y=0x10, .sp=0x97, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x0097, .value=0x04}, {.addr=0xfdca, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xfdcb, .a=0xe1, .x=0x97, .y=0x10, .sp=0x97, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x0097, .value=0x04}, {.addr=0xfdca, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xfdca, .value=0x46, .type=IO_READ},
        {.addr=0xfdcb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0097, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0126) {
    const struct CPU_State initial_cpu = {.pc=0xdbe7, .a=0x30, .x=0x98, .y=0x07, .sp=0xd5, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x0198, .value=0x40}, {.addr=0xdbe7, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xdbe8, .a=0x70, .x=0x98, .y=0x07, .sp=0xd5, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x0198, .value=0x40}, {.addr=0xdbe7, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xdbe7, .value=0x46, .type=IO_READ},
        {.addr=0xdbe8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0198, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0127) {
    const struct CPU_State initial_cpu = {.pc=0x08d1, .a=0x71, .x=0xed, .y=0x77, .sp=0xd4, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x01ed, .value=0x6b}, {.addr=0x08d1, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x08d2, .a=0x1a, .x=0xed, .y=0x77, .sp=0xd4, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x01ed, .value=0x6b}, {.addr=0x08d1, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x08d1, .value=0x46, .type=IO_READ},
        {.addr=0x08d2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ed, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0128) {
    const struct CPU_State initial_cpu = {.pc=0x1035, .a=0x49, .x=0x92, .y=0x2d, .sp=0xe1, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x0092, .value=0xfe}, {.addr=0x1035, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x1036, .a=0xb7, .x=0x92, .y=0x2d, .sp=0xe1, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x0092, .value=0xfe}, {.addr=0x1035, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x1035, .value=0x46, .type=IO_READ},
        {.addr=0x1036, .value=DUMMY, .type=IO_READ},
        {.addr=0x0092, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0129) {
    const struct CPU_State initial_cpu = {.pc=0xa40b, .a=0x52, .x=0x9d, .y=0x62, .sp=0x7e, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x009d, .value=0xe7}, {.addr=0xa40b, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xa40c, .a=0xb5, .x=0x9d, .y=0x62, .sp=0x7e, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x009d, .value=0xe7}, {.addr=0xa40b, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xa40b, .value=0x46, .type=IO_READ},
        {.addr=0xa40c, .value=DUMMY, .type=IO_READ},
        {.addr=0x009d, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_012A) {
    const struct CPU_State initial_cpu = {.pc=0xa6f7, .a=0x0a, .x=0xe9, .y=0xdf, .sp=0xd6, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x01e9, .value=0x33}, {.addr=0xa6f7, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xa6f8, .a=0x39, .x=0xe9, .y=0xdf, .sp=0xd6, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x01e9, .value=0x33}, {.addr=0xa6f7, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xa6f7, .value=0x46, .type=IO_READ},
        {.addr=0xa6f8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e9, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_012B) {
    const struct CPU_State initial_cpu = {.pc=0x192c, .a=0x4e, .x=0x81, .y=0x0a, .sp=0x88, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x0081, .value=0x52}, {.addr=0x192c, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x192d, .a=0x1c, .x=0x81, .y=0x0a, .sp=0x88, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x0081, .value=0x52}, {.addr=0x192c, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x192c, .value=0x46, .type=IO_READ},
        {.addr=0x192d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0081, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_012C) {
    const struct CPU_State initial_cpu = {.pc=0xf7b9, .a=0xf9, .x=0x74, .y=0x26, .sp=0xdf, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x0074, .value=0x95}, {.addr=0xf7b9, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xf7ba, .a=0x6c, .x=0x74, .y=0x26, .sp=0xdf, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0074, .value=0x95}, {.addr=0xf7b9, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xf7b9, .value=0x46, .type=IO_READ},
        {.addr=0xf7ba, .value=DUMMY, .type=IO_READ},
        {.addr=0x0074, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_012D) {
    const struct CPU_State initial_cpu = {.pc=0x3c62, .a=0x94, .x=0x8c, .y=0x7c, .sp=0x67, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x008c, .value=0xda}, {.addr=0x3c62, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x3c63, .a=0x4e, .x=0x8c, .y=0x7c, .sp=0x67, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x008c, .value=0xda}, {.addr=0x3c62, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x3c62, .value=0x46, .type=IO_READ},
        {.addr=0x3c63, .value=DUMMY, .type=IO_READ},
        {.addr=0x008c, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_012E) {
    const struct CPU_State initial_cpu = {.pc=0x6c67, .a=0x9a, .x=0xb2, .y=0xb7, .sp=0x7a, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x01b2, .value=0xb2}, {.addr=0x6c67, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x6c68, .a=0x28, .x=0xb2, .y=0xb7, .sp=0x7a, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x01b2, .value=0xb2}, {.addr=0x6c67, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x6c67, .value=0x46, .type=IO_READ},
        {.addr=0x6c68, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b2, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_012F) {
    const struct CPU_State initial_cpu = {.pc=0xcce3, .a=0xca, .x=0x62, .y=0x0e, .sp=0x84, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0x3e}, {.addr=0xcce3, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xcce4, .a=0xf4, .x=0x62, .y=0x0e, .sp=0x84, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0x3e}, {.addr=0xcce3, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xcce3, .value=0x46, .type=IO_READ},
        {.addr=0xcce4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0162, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0130) {
    const struct CPU_State initial_cpu = {.pc=0x1523, .a=0xd0, .x=0x27, .y=0x5e, .sp=0x53, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x0127, .value=0xac}, {.addr=0x1523, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x1524, .a=0x7c, .x=0x27, .y=0x5e, .sp=0x53, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x0127, .value=0xac}, {.addr=0x1523, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x1523, .value=0x46, .type=IO_READ},
        {.addr=0x1524, .value=DUMMY, .type=IO_READ},
        {.addr=0x0127, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0131) {
    const struct CPU_State initial_cpu = {.pc=0x6bff, .a=0xe2, .x=0x17, .y=0xb6, .sp=0x21, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x0017, .value=0xf1}, {.addr=0x6bff, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x6c00, .a=0x13, .x=0x17, .y=0xb6, .sp=0x21, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x0017, .value=0xf1}, {.addr=0x6bff, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x6bff, .value=0x46, .type=IO_READ},
        {.addr=0x6c00, .value=DUMMY, .type=IO_READ},
        {.addr=0x0017, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0132) {
    const struct CPU_State initial_cpu = {.pc=0x4a08, .a=0x8e, .x=0x99, .y=0x9c, .sp=0xd1, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x0099, .value=0x02}, {.addr=0x4a08, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x4a09, .a=0x8c, .x=0x99, .y=0x9c, .sp=0xd1, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x0099, .value=0x02}, {.addr=0x4a08, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x4a08, .value=0x46, .type=IO_READ},
        {.addr=0x4a09, .value=DUMMY, .type=IO_READ},
        {.addr=0x0099, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0133) {
    const struct CPU_State initial_cpu = {.pc=0x1184, .a=0x28, .x=0xdf, .y=0xa5, .sp=0xc1, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0xba}, {.addr=0x1184, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x1185, .a=0x92, .x=0xdf, .y=0xa5, .sp=0xc1, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0xba}, {.addr=0x1184, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x1184, .value=0x46, .type=IO_READ},
        {.addr=0x1185, .value=DUMMY, .type=IO_READ},
        {.addr=0x01df, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0134) {
    const struct CPU_State initial_cpu = {.pc=0xf858, .a=0x49, .x=0x1e, .y=0xe9, .sp=0x44, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x011e, .value=0x6a}, {.addr=0xf858, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xf859, .a=0x23, .x=0x1e, .y=0xe9, .sp=0x44, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x011e, .value=0x6a}, {.addr=0xf858, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xf858, .value=0x46, .type=IO_READ},
        {.addr=0xf859, .value=DUMMY, .type=IO_READ},
        {.addr=0x011e, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0135) {
    const struct CPU_State initial_cpu = {.pc=0x5df3, .a=0x1b, .x=0x7e, .y=0x64, .sp=0x61, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x007e, .value=0xff}, {.addr=0x5df3, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x5df4, .a=0xe4, .x=0x7e, .y=0x64, .sp=0x61, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x007e, .value=0xff}, {.addr=0x5df3, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x5df3, .value=0x46, .type=IO_READ},
        {.addr=0x5df4, .value=DUMMY, .type=IO_READ},
        {.addr=0x007e, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0136) {
    const struct CPU_State initial_cpu = {.pc=0x5ca0, .a=0xa7, .x=0x31, .y=0x90, .sp=0x01, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x0031, .value=0x51}, {.addr=0x5ca0, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x5ca1, .a=0xf6, .x=0x31, .y=0x90, .sp=0x01, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x0031, .value=0x51}, {.addr=0x5ca0, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x5ca0, .value=0x46, .type=IO_READ},
        {.addr=0x5ca1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0031, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0137) {
    const struct CPU_State initial_cpu = {.pc=0xa715, .a=0xd6, .x=0xea, .y=0x5c, .sp=0xd3, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x01ea, .value=0xe3}, {.addr=0xa715, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xa716, .a=0x35, .x=0xea, .y=0x5c, .sp=0xd3, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x01ea, .value=0xe3}, {.addr=0xa715, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xa715, .value=0x46, .type=IO_READ},
        {.addr=0xa716, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ea, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0138) {
    const struct CPU_State initial_cpu = {.pc=0x7976, .a=0x4b, .x=0x7d, .y=0xb2, .sp=0xc5, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0xf3}, {.addr=0x7976, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x7977, .a=0xb8, .x=0x7d, .y=0xb2, .sp=0xc5, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0xf3}, {.addr=0x7976, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x7976, .value=0x46, .type=IO_READ},
        {.addr=0x7977, .value=DUMMY, .type=IO_READ},
        {.addr=0x017d, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0139) {
    const struct CPU_State initial_cpu = {.pc=0x928d, .a=0x1a, .x=0xc2, .y=0xf6, .sp=0x52, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x00c2, .value=0xde}, {.addr=0x928d, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x928e, .a=0xc4, .x=0xc2, .y=0xf6, .sp=0x52, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x00c2, .value=0xde}, {.addr=0x928d, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x928d, .value=0x46, .type=IO_READ},
        {.addr=0x928e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c2, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_013A) {
    const struct CPU_State initial_cpu = {.pc=0x2e0b, .a=0x13, .x=0xc5, .y=0x17, .sp=0xc4, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x01c5, .value=0x15}, {.addr=0x2e0b, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x2e0c, .a=0x06, .x=0xc5, .y=0x17, .sp=0xc4, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x01c5, .value=0x15}, {.addr=0x2e0b, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x2e0b, .value=0x46, .type=IO_READ},
        {.addr=0x2e0c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c5, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_013B) {
    const struct CPU_State initial_cpu = {.pc=0x2f51, .a=0x68, .x=0xa4, .y=0xa1, .sp=0x66, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x00a4, .value=0x49}, {.addr=0x2f51, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x2f52, .a=0x21, .x=0xa4, .y=0xa1, .sp=0x66, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x00a4, .value=0x49}, {.addr=0x2f51, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x2f51, .value=0x46, .type=IO_READ},
        {.addr=0x2f52, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a4, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_013C) {
    const struct CPU_State initial_cpu = {.pc=0xedc2, .a=0x27, .x=0x9f, .y=0xb8, .sp=0xb5, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x009f, .value=0xbb}, {.addr=0xedc2, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xedc3, .a=0x9c, .x=0x9f, .y=0xb8, .sp=0xb5, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x009f, .value=0xbb}, {.addr=0xedc2, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xedc2, .value=0x46, .type=IO_READ},
        {.addr=0xedc3, .value=DUMMY, .type=IO_READ},
        {.addr=0x009f, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_013D) {
    const struct CPU_State initial_cpu = {.pc=0x73ab, .a=0x8f, .x=0xd2, .y=0x1d, .sp=0x9c, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x01d2, .value=0xe6}, {.addr=0x73ab, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x73ac, .a=0x69, .x=0xd2, .y=0x1d, .sp=0x9c, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x01d2, .value=0xe6}, {.addr=0x73ab, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x73ab, .value=0x46, .type=IO_READ},
        {.addr=0x73ac, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d2, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_013E) {
    const struct CPU_State initial_cpu = {.pc=0xdba3, .a=0x33, .x=0x8e, .y=0xec, .sp=0xa1, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0xef}, {.addr=0xdba3, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xdba4, .a=0xdc, .x=0x8e, .y=0xec, .sp=0xa1, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0xef}, {.addr=0xdba3, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xdba3, .value=0x46, .type=IO_READ},
        {.addr=0xdba4, .value=DUMMY, .type=IO_READ},
        {.addr=0x018e, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_013F) {
    const struct CPU_State initial_cpu = {.pc=0xb820, .a=0xf0, .x=0x2c, .y=0x62, .sp=0x6d, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x012c, .value=0xf7}, {.addr=0xb820, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xb821, .a=0x07, .x=0x2c, .y=0x62, .sp=0x6d, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x012c, .value=0xf7}, {.addr=0xb820, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xb820, .value=0x46, .type=IO_READ},
        {.addr=0xb821, .value=DUMMY, .type=IO_READ},
        {.addr=0x012c, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0140) {
    const struct CPU_State initial_cpu = {.pc=0x4e07, .a=0x7a, .x=0xc1, .y=0x6e, .sp=0x9a, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x01c1, .value=0x5f}, {.addr=0x4e07, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x4e08, .a=0x25, .x=0xc1, .y=0x6e, .sp=0x9a, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x01c1, .value=0x5f}, {.addr=0x4e07, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x4e07, .value=0x46, .type=IO_READ},
        {.addr=0x4e08, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c1, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0142) {
    const struct CPU_State initial_cpu = {.pc=0x50ac, .a=0x2f, .x=0x99, .y=0xfa, .sp=0xe3, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x0099, .value=0xad}, {.addr=0x50ac, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x50ad, .a=0x82, .x=0x99, .y=0xfa, .sp=0xe3, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x0099, .value=0xad}, {.addr=0x50ac, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x50ac, .value=0x46, .type=IO_READ},
        {.addr=0x50ad, .value=DUMMY, .type=IO_READ},
        {.addr=0x0099, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0143) {
    const struct CPU_State initial_cpu = {.pc=0x89c7, .a=0x07, .x=0xb3, .y=0x63, .sp=0x69, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x00b3, .value=0xd2}, {.addr=0x89c7, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x89c8, .a=0xd5, .x=0xb3, .y=0x63, .sp=0x69, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x00b3, .value=0xd2}, {.addr=0x89c7, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x89c7, .value=0x46, .type=IO_READ},
        {.addr=0x89c8, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b3, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0144) {
    const struct CPU_State initial_cpu = {.pc=0xd9ec, .a=0x6d, .x=0x31, .y=0x52, .sp=0x27, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x0031, .value=0x14}, {.addr=0xd9ec, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xd9ed, .a=0x79, .x=0x31, .y=0x52, .sp=0x27, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x0031, .value=0x14}, {.addr=0xd9ec, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xd9ec, .value=0x46, .type=IO_READ},
        {.addr=0xd9ed, .value=DUMMY, .type=IO_READ},
        {.addr=0x0031, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0145) {
    const struct CPU_State initial_cpu = {.pc=0xe7f1, .a=0x69, .x=0x9f, .y=0xe3, .sp=0xab, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x009f, .value=0x06}, {.addr=0xe7f1, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xe7f2, .a=0x6f, .x=0x9f, .y=0xe3, .sp=0xab, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x009f, .value=0x06}, {.addr=0xe7f1, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xe7f1, .value=0x46, .type=IO_READ},
        {.addr=0xe7f2, .value=DUMMY, .type=IO_READ},
        {.addr=0x009f, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0146) {
    const struct CPU_State initial_cpu = {.pc=0xd64e, .a=0xb6, .x=0x80, .y=0xc9, .sp=0xea, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0x7b}, {.addr=0xd64e, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xd64f, .a=0xcd, .x=0x80, .y=0xc9, .sp=0xea, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0x7b}, {.addr=0xd64e, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xd64e, .value=0x46, .type=IO_READ},
        {.addr=0xd64f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0180, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0147) {
    const struct CPU_State initial_cpu = {.pc=0x6292, .a=0x91, .x=0x99, .y=0x27, .sp=0xef, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x0099, .value=0xb7}, {.addr=0x6292, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x6293, .a=0x26, .x=0x99, .y=0x27, .sp=0xef, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x0099, .value=0xb7}, {.addr=0x6292, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x6292, .value=0x46, .type=IO_READ},
        {.addr=0x6293, .value=DUMMY, .type=IO_READ},
        {.addr=0x0099, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0148) {
    const struct CPU_State initial_cpu = {.pc=0xe636, .a=0xa6, .x=0x50, .y=0x18, .sp=0x39, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x0150, .value=0x76}, {.addr=0xe636, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xe637, .a=0xd0, .x=0x50, .y=0x18, .sp=0x39, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x0150, .value=0x76}, {.addr=0xe636, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xe636, .value=0x46, .type=IO_READ},
        {.addr=0xe637, .value=DUMMY, .type=IO_READ},
        {.addr=0x0150, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0149) {
    const struct CPU_State initial_cpu = {.pc=0x41e1, .a=0x84, .x=0x05, .y=0x4a, .sp=0x8f, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x0005, .value=0x9d}, {.addr=0x41e1, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x41e2, .a=0x19, .x=0x05, .y=0x4a, .sp=0x8f, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x0005, .value=0x9d}, {.addr=0x41e1, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x41e1, .value=0x46, .type=IO_READ},
        {.addr=0x41e2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0005, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_014A) {
    const struct CPU_State initial_cpu = {.pc=0x4457, .a=0x83, .x=0x80, .y=0x7f, .sp=0xd8, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x0080, .value=0x59}, {.addr=0x4457, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x4458, .a=0xda, .x=0x80, .y=0x7f, .sp=0xd8, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x0080, .value=0x59}, {.addr=0x4457, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x4457, .value=0x46, .type=IO_READ},
        {.addr=0x4458, .value=DUMMY, .type=IO_READ},
        {.addr=0x0080, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_014B) {
    const struct CPU_State initial_cpu = {.pc=0x2b66, .a=0xa9, .x=0x8a, .y=0x69, .sp=0x64, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x008a, .value=0x70}, {.addr=0x2b66, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x2b67, .a=0xd9, .x=0x8a, .y=0x69, .sp=0x64, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x008a, .value=0x70}, {.addr=0x2b66, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x2b66, .value=0x46, .type=IO_READ},
        {.addr=0x2b67, .value=DUMMY, .type=IO_READ},
        {.addr=0x008a, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_014C) {
    const struct CPU_State initial_cpu = {.pc=0x9c8a, .a=0x6b, .x=0x57, .y=0x31, .sp=0xc7, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x0157, .value=0x30}, {.addr=0x9c8a, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x9c8b, .a=0x5b, .x=0x57, .y=0x31, .sp=0xc7, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x0157, .value=0x30}, {.addr=0x9c8a, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x9c8a, .value=0x46, .type=IO_READ},
        {.addr=0x9c8b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0157, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_014D) {
    const struct CPU_State initial_cpu = {.pc=0x1365, .a=0x5a, .x=0xb0, .y=0x97, .sp=0x63, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0xac}, {.addr=0x1365, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x1366, .a=0xf6, .x=0xb0, .y=0x97, .sp=0x63, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0xac}, {.addr=0x1365, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x1365, .value=0x46, .type=IO_READ},
        {.addr=0x1366, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b0, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_014E) {
    const struct CPU_State initial_cpu = {.pc=0x16a6, .a=0x2a, .x=0x5b, .y=0xa0, .sp=0x3f, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x015b, .value=0x05}, {.addr=0x16a6, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x16a7, .a=0x2f, .x=0x5b, .y=0xa0, .sp=0x3f, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x015b, .value=0x05}, {.addr=0x16a6, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x16a6, .value=0x46, .type=IO_READ},
        {.addr=0x16a7, .value=DUMMY, .type=IO_READ},
        {.addr=0x015b, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_014F) {
    const struct CPU_State initial_cpu = {.pc=0xe16c, .a=0xa6, .x=0xec, .y=0xb3, .sp=0x2b, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x01ec, .value=0xb0}, {.addr=0xe16c, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xe16d, .a=0x16, .x=0xec, .y=0xb3, .sp=0x2b, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x01ec, .value=0xb0}, {.addr=0xe16c, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xe16c, .value=0x46, .type=IO_READ},
        {.addr=0xe16d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ec, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0150) {
    const struct CPU_State initial_cpu = {.pc=0x1b91, .a=0x05, .x=0x24, .y=0x83, .sp=0x92, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x0024, .value=0xa8}, {.addr=0x1b91, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x1b92, .a=0xad, .x=0x24, .y=0x83, .sp=0x92, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x0024, .value=0xa8}, {.addr=0x1b91, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x1b91, .value=0x46, .type=IO_READ},
        {.addr=0x1b92, .value=DUMMY, .type=IO_READ},
        {.addr=0x0024, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0151) {
    const struct CPU_State initial_cpu = {.pc=0xc8d9, .a=0x56, .x=0x5a, .y=0x22, .sp=0x86, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x005a, .value=0xf7}, {.addr=0xc8d9, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xc8da, .a=0xa1, .x=0x5a, .y=0x22, .sp=0x86, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x005a, .value=0xf7}, {.addr=0xc8d9, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xc8d9, .value=0x46, .type=IO_READ},
        {.addr=0xc8da, .value=DUMMY, .type=IO_READ},
        {.addr=0x005a, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0152) {
    const struct CPU_State initial_cpu = {.pc=0x4a36, .a=0xdb, .x=0x8a, .y=0xf5, .sp=0x18, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x018a, .value=0x83}, {.addr=0x4a36, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x4a37, .a=0x58, .x=0x8a, .y=0xf5, .sp=0x18, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x018a, .value=0x83}, {.addr=0x4a36, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x4a36, .value=0x46, .type=IO_READ},
        {.addr=0x4a37, .value=DUMMY, .type=IO_READ},
        {.addr=0x018a, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0153) {
    const struct CPU_State initial_cpu = {.pc=0xf5d5, .a=0xf7, .x=0x17, .y=0xe1, .sp=0x8c, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x0017, .value=0x07}, {.addr=0xf5d5, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xf5d6, .a=0xf0, .x=0x17, .y=0xe1, .sp=0x8c, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0017, .value=0x07}, {.addr=0xf5d5, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xf5d5, .value=0x46, .type=IO_READ},
        {.addr=0xf5d6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0017, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0154) {
    const struct CPU_State initial_cpu = {.pc=0x1f1f, .a=0x5e, .x=0xa0, .y=0xde, .sp=0x22, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x01a0, .value=0x99}, {.addr=0x1f1f, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x1f20, .a=0xc7, .x=0xa0, .y=0xde, .sp=0x22, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x01a0, .value=0x99}, {.addr=0x1f1f, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x1f1f, .value=0x46, .type=IO_READ},
        {.addr=0x1f20, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a0, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0155) {
    const struct CPU_State initial_cpu = {.pc=0x9304, .a=0x52, .x=0x56, .y=0xa0, .sp=0xe9, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x0056, .value=0x51}, {.addr=0x9304, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x9305, .a=0x03, .x=0x56, .y=0xa0, .sp=0xe9, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x0056, .value=0x51}, {.addr=0x9304, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x9304, .value=0x46, .type=IO_READ},
        {.addr=0x9305, .value=DUMMY, .type=IO_READ},
        {.addr=0x0056, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0156) {
    const struct CPU_State initial_cpu = {.pc=0xf06b, .a=0x5a, .x=0x04, .y=0xf2, .sp=0x3c, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x0004, .value=0xe8}, {.addr=0xf06b, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xf06c, .a=0xb2, .x=0x04, .y=0xf2, .sp=0x3c, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0004, .value=0xe8}, {.addr=0xf06b, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xf06b, .value=0x46, .type=IO_READ},
        {.addr=0xf06c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0004, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0157) {
    const struct CPU_State initial_cpu = {.pc=0x4972, .a=0x0f, .x=0x2a, .y=0x9a, .sp=0x28, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x002a, .value=0x8c}, {.addr=0x4972, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x4973, .a=0x83, .x=0x2a, .y=0x9a, .sp=0x28, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x002a, .value=0x8c}, {.addr=0x4972, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x4972, .value=0x46, .type=IO_READ},
        {.addr=0x4973, .value=DUMMY, .type=IO_READ},
        {.addr=0x002a, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0159) {
    const struct CPU_State initial_cpu = {.pc=0xffb5, .a=0x0f, .x=0x18, .y=0x7c, .sp=0x3f, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x0018, .value=0xac}, {.addr=0xffb5, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xffb6, .a=0xa3, .x=0x18, .y=0x7c, .sp=0x3f, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x0018, .value=0xac}, {.addr=0xffb5, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xffb5, .value=0x46, .type=IO_READ},
        {.addr=0xffb6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0018, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_015A) {
    const struct CPU_State initial_cpu = {.pc=0xd551, .a=0xd9, .x=0x8d, .y=0xaa, .sp=0x9a, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x018d, .value=0x85}, {.addr=0xd551, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xd552, .a=0x5c, .x=0x8d, .y=0xaa, .sp=0x9a, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x018d, .value=0x85}, {.addr=0xd551, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xd551, .value=0x46, .type=IO_READ},
        {.addr=0xd552, .value=DUMMY, .type=IO_READ},
        {.addr=0x018d, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_015B) {
    const struct CPU_State initial_cpu = {.pc=0xf32b, .a=0x93, .x=0xb7, .y=0x3f, .sp=0x04, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x01b7, .value=0x32}, {.addr=0xf32b, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xf32c, .a=0xa1, .x=0xb7, .y=0x3f, .sp=0x04, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x01b7, .value=0x32}, {.addr=0xf32b, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xf32b, .value=0x46, .type=IO_READ},
        {.addr=0xf32c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b7, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_015C) {
    const struct CPU_State initial_cpu = {.pc=0xb5b4, .a=0x69, .x=0x67, .y=0x1f, .sp=0xa1, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x0067, .value=0x3a}, {.addr=0xb5b4, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xb5b5, .a=0x53, .x=0x67, .y=0x1f, .sp=0xa1, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0067, .value=0x3a}, {.addr=0xb5b4, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xb5b4, .value=0x46, .type=IO_READ},
        {.addr=0xb5b5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0067, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_015D) {
    const struct CPU_State initial_cpu = {.pc=0x0efb, .a=0xd3, .x=0x29, .y=0x00, .sp=0x0f, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x0129, .value=0xbc}, {.addr=0x0efb, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x0efc, .a=0x6f, .x=0x29, .y=0x00, .sp=0x0f, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x0129, .value=0xbc}, {.addr=0x0efb, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x0efb, .value=0x46, .type=IO_READ},
        {.addr=0x0efc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0129, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_015E) {
    const struct CPU_State initial_cpu = {.pc=0xb2d1, .a=0x4e, .x=0xe4, .y=0xb8, .sp=0x42, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x00e4, .value=0x94}, {.addr=0xb2d1, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xb2d2, .a=0xda, .x=0xe4, .y=0xb8, .sp=0x42, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x00e4, .value=0x94}, {.addr=0xb2d1, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xb2d1, .value=0x46, .type=IO_READ},
        {.addr=0xb2d2, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e4, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_015F) {
    const struct CPU_State initial_cpu = {.pc=0xb806, .a=0x14, .x=0xa9, .y=0x89, .sp=0x2e, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x00a9, .value=0x88}, {.addr=0xb806, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xb807, .a=0x9c, .x=0xa9, .y=0x89, .sp=0x2e, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x00a9, .value=0x88}, {.addr=0xb806, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xb806, .value=0x46, .type=IO_READ},
        {.addr=0xb807, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a9, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0160) {
    const struct CPU_State initial_cpu = {.pc=0xb30d, .a=0x39, .x=0x80, .y=0x99, .sp=0xaf, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0xa9}, {.addr=0xb30d, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xb30e, .a=0x90, .x=0x80, .y=0x99, .sp=0xaf, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0xa9}, {.addr=0xb30d, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xb30d, .value=0x46, .type=IO_READ},
        {.addr=0xb30e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0180, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0161) {
    const struct CPU_State initial_cpu = {.pc=0x2d4a, .a=0xe7, .x=0x59, .y=0xf3, .sp=0xc9, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x0059, .value=0x1a}, {.addr=0x2d4a, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x2d4b, .a=0xfd, .x=0x59, .y=0xf3, .sp=0xc9, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x0059, .value=0x1a}, {.addr=0x2d4a, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x2d4a, .value=0x46, .type=IO_READ},
        {.addr=0x2d4b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0059, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0162) {
    const struct CPU_State initial_cpu = {.pc=0xf05c, .a=0x12, .x=0x9b, .y=0x1f, .sp=0x89, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x019b, .value=0x91}, {.addr=0xf05c, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xf05d, .a=0x83, .x=0x9b, .y=0x1f, .sp=0x89, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x019b, .value=0x91}, {.addr=0xf05c, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xf05c, .value=0x46, .type=IO_READ},
        {.addr=0xf05d, .value=DUMMY, .type=IO_READ},
        {.addr=0x019b, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0163) {
    const struct CPU_State initial_cpu = {.pc=0x9925, .a=0xf0, .x=0x3b, .y=0x7b, .sp=0x2d, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x013b, .value=0x2a}, {.addr=0x9925, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x9926, .a=0xda, .x=0x3b, .y=0x7b, .sp=0x2d, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x013b, .value=0x2a}, {.addr=0x9925, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x9925, .value=0x46, .type=IO_READ},
        {.addr=0x9926, .value=DUMMY, .type=IO_READ},
        {.addr=0x013b, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0164) {
    const struct CPU_State initial_cpu = {.pc=0x855d, .a=0xf3, .x=0x7a, .y=0x92, .sp=0x13, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x017a, .value=0x7f}, {.addr=0x855d, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x855e, .a=0x8c, .x=0x7a, .y=0x92, .sp=0x13, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x017a, .value=0x7f}, {.addr=0x855d, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x855d, .value=0x46, .type=IO_READ},
        {.addr=0x855e, .value=DUMMY, .type=IO_READ},
        {.addr=0x017a, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0165) {
    const struct CPU_State initial_cpu = {.pc=0x8c87, .a=0xba, .x=0xef, .y=0xaa, .sp=0xfc, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x00ef, .value=0xf0}, {.addr=0x8c87, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x8c88, .a=0x4a, .x=0xef, .y=0xaa, .sp=0xfc, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x00ef, .value=0xf0}, {.addr=0x8c87, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x8c87, .value=0x46, .type=IO_READ},
        {.addr=0x8c88, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ef, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0166) {
    const struct CPU_State initial_cpu = {.pc=0x7a1e, .a=0xea, .x=0xc5, .y=0x6a, .sp=0xb5, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x01c5, .value=0xf3}, {.addr=0x7a1e, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x7a1f, .a=0x19, .x=0xc5, .y=0x6a, .sp=0xb5, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x01c5, .value=0xf3}, {.addr=0x7a1e, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x7a1e, .value=0x46, .type=IO_READ},
        {.addr=0x7a1f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c5, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0167) {
    const struct CPU_State initial_cpu = {.pc=0xbedc, .a=0xa7, .x=0x7c, .y=0x2e, .sp=0x68, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0x84}, {.addr=0xbedc, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xbedd, .a=0x23, .x=0x7c, .y=0x2e, .sp=0x68, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0x84}, {.addr=0xbedc, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xbedc, .value=0x46, .type=IO_READ},
        {.addr=0xbedd, .value=DUMMY, .type=IO_READ},
        {.addr=0x017c, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0168) {
    const struct CPU_State initial_cpu = {.pc=0x532d, .a=0x35, .x=0xeb, .y=0xe9, .sp=0xc8, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x00eb, .value=0x38}, {.addr=0x532d, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x532e, .a=0x0d, .x=0xeb, .y=0xe9, .sp=0xc8, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x00eb, .value=0x38}, {.addr=0x532d, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x532d, .value=0x46, .type=IO_READ},
        {.addr=0x532e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00eb, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0169) {
    const struct CPU_State initial_cpu = {.pc=0x6db4, .a=0x5e, .x=0xd0, .y=0x30, .sp=0x93, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x00d0, .value=0xb8}, {.addr=0x6db4, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x6db5, .a=0xe6, .x=0xd0, .y=0x30, .sp=0x93, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x00d0, .value=0xb8}, {.addr=0x6db4, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x6db4, .value=0x46, .type=IO_READ},
        {.addr=0x6db5, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d0, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_016A) {
    const struct CPU_State initial_cpu = {.pc=0x876e, .a=0x12, .x=0x6d, .y=0x5c, .sp=0xb4, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x016d, .value=0x66}, {.addr=0x876e, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x876f, .a=0x74, .x=0x6d, .y=0x5c, .sp=0xb4, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x016d, .value=0x66}, {.addr=0x876e, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x876e, .value=0x46, .type=IO_READ},
        {.addr=0x876f, .value=DUMMY, .type=IO_READ},
        {.addr=0x016d, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_016B) {
    const struct CPU_State initial_cpu = {.pc=0x66e9, .a=0xab, .x=0x90, .y=0x70, .sp=0x36, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x0090, .value=0x38}, {.addr=0x66e9, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x66ea, .a=0x93, .x=0x90, .y=0x70, .sp=0x36, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0090, .value=0x38}, {.addr=0x66e9, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x66e9, .value=0x46, .type=IO_READ},
        {.addr=0x66ea, .value=DUMMY, .type=IO_READ},
        {.addr=0x0090, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_016C) {
    const struct CPU_State initial_cpu = {.pc=0x4977, .a=0x92, .x=0x28, .y=0xd0, .sp=0xbf, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x0128, .value=0xdb}, {.addr=0x4977, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x4978, .a=0x49, .x=0x28, .y=0xd0, .sp=0xbf, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x0128, .value=0xdb}, {.addr=0x4977, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x4977, .value=0x46, .type=IO_READ},
        {.addr=0x4978, .value=DUMMY, .type=IO_READ},
        {.addr=0x0128, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_016D) {
    const struct CPU_State initial_cpu = {.pc=0x7976, .a=0xfb, .x=0x4d, .y=0xa5, .sp=0x2b, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x004d, .value=0xa3}, {.addr=0x7976, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x7977, .a=0x58, .x=0x4d, .y=0xa5, .sp=0x2b, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x004d, .value=0xa3}, {.addr=0x7976, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x7976, .value=0x46, .type=IO_READ},
        {.addr=0x7977, .value=DUMMY, .type=IO_READ},
        {.addr=0x004d, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_016E) {
    const struct CPU_State initial_cpu = {.pc=0x97be, .a=0xcd, .x=0x85, .y=0x44, .sp=0x0d, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x0185, .value=0xb2}, {.addr=0x97be, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x97bf, .a=0x7f, .x=0x85, .y=0x44, .sp=0x0d, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x0185, .value=0xb2}, {.addr=0x97be, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x97be, .value=0x46, .type=IO_READ},
        {.addr=0x97bf, .value=DUMMY, .type=IO_READ},
        {.addr=0x0185, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_016F) {
    const struct CPU_State initial_cpu = {.pc=0x178b, .a=0x8f, .x=0x07, .y=0x28, .sp=0x54, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0x78}, {.addr=0x178b, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x178c, .a=0xf7, .x=0x07, .y=0x28, .sp=0x54, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0x78}, {.addr=0x178b, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x178b, .value=0x46, .type=IO_READ},
        {.addr=0x178c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0107, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0170) {
    const struct CPU_State initial_cpu = {.pc=0x7dc3, .a=0xf6, .x=0xe2, .y=0x66, .sp=0x52, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0x82}, {.addr=0x7dc3, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x7dc4, .a=0x74, .x=0xe2, .y=0x66, .sp=0x52, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0x82}, {.addr=0x7dc3, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x7dc3, .value=0x46, .type=IO_READ},
        {.addr=0x7dc4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e2, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0171) {
    const struct CPU_State initial_cpu = {.pc=0x1b73, .a=0xcd, .x=0xab, .y=0x83, .sp=0x56, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x00ab, .value=0x6a}, {.addr=0x1b73, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x1b74, .a=0xa7, .x=0xab, .y=0x83, .sp=0x56, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x00ab, .value=0x6a}, {.addr=0x1b73, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x1b73, .value=0x46, .type=IO_READ},
        {.addr=0x1b74, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ab, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0172) {
    const struct CPU_State initial_cpu = {.pc=0x1552, .a=0x58, .x=0x95, .y=0xa5, .sp=0xe4, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x0195, .value=0xf9}, {.addr=0x1552, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x1553, .a=0xa1, .x=0x95, .y=0xa5, .sp=0xe4, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x0195, .value=0xf9}, {.addr=0x1552, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x1552, .value=0x46, .type=IO_READ},
        {.addr=0x1553, .value=DUMMY, .type=IO_READ},
        {.addr=0x0195, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0173) {
    const struct CPU_State initial_cpu = {.pc=0x7743, .a=0x44, .x=0xcd, .y=0xed, .sp=0x0c, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x01cd, .value=0x33}, {.addr=0x7743, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x7744, .a=0x77, .x=0xcd, .y=0xed, .sp=0x0c, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x01cd, .value=0x33}, {.addr=0x7743, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x7743, .value=0x46, .type=IO_READ},
        {.addr=0x7744, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cd, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0174) {
    const struct CPU_State initial_cpu = {.pc=0x1d37, .a=0xd5, .x=0x48, .y=0x00, .sp=0xb1, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x0048, .value=0x02}, {.addr=0x1d37, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x1d38, .a=0xd7, .x=0x48, .y=0x00, .sp=0xb1, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0048, .value=0x02}, {.addr=0x1d37, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x1d37, .value=0x46, .type=IO_READ},
        {.addr=0x1d38, .value=DUMMY, .type=IO_READ},
        {.addr=0x0048, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0175) {
    const struct CPU_State initial_cpu = {.pc=0x9c2c, .a=0x6f, .x=0xe2, .y=0xd8, .sp=0x51, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x00e2, .value=0x65}, {.addr=0x9c2c, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x9c2d, .a=0x0a, .x=0xe2, .y=0xd8, .sp=0x51, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x00e2, .value=0x65}, {.addr=0x9c2c, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x9c2c, .value=0x46, .type=IO_READ},
        {.addr=0x9c2d, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e2, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0177) {
    const struct CPU_State initial_cpu = {.pc=0x2520, .a=0xc7, .x=0x71, .y=0x8d, .sp=0xfc, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x0071, .value=0x9d}, {.addr=0x2520, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x2521, .a=0x5a, .x=0x71, .y=0x8d, .sp=0xfc, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0071, .value=0x9d}, {.addr=0x2520, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x2520, .value=0x46, .type=IO_READ},
        {.addr=0x2521, .value=DUMMY, .type=IO_READ},
        {.addr=0x0071, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0178) {
    const struct CPU_State initial_cpu = {.pc=0x9bef, .a=0x85, .x=0x2b, .y=0x28, .sp=0xd3, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0xd3}, {.addr=0x9bef, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x9bf0, .a=0x56, .x=0x2b, .y=0x28, .sp=0xd3, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0xd3}, {.addr=0x9bef, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x9bef, .value=0x46, .type=IO_READ},
        {.addr=0x9bf0, .value=DUMMY, .type=IO_READ},
        {.addr=0x012b, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0179) {
    const struct CPU_State initial_cpu = {.pc=0xc976, .a=0xc1, .x=0x85, .y=0x8b, .sp=0x71, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x0185, .value=0xf9}, {.addr=0xc976, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xc977, .a=0x38, .x=0x85, .y=0x8b, .sp=0x71, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x0185, .value=0xf9}, {.addr=0xc976, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xc976, .value=0x46, .type=IO_READ},
        {.addr=0xc977, .value=DUMMY, .type=IO_READ},
        {.addr=0x0185, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_017A) {
    const struct CPU_State initial_cpu = {.pc=0x2353, .a=0x1b, .x=0xed, .y=0x82, .sp=0x3c, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x00ed, .value=0x24}, {.addr=0x2353, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x2354, .a=0x3f, .x=0xed, .y=0x82, .sp=0x3c, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x00ed, .value=0x24}, {.addr=0x2353, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x2353, .value=0x46, .type=IO_READ},
        {.addr=0x2354, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ed, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_017B) {
    const struct CPU_State initial_cpu = {.pc=0xb28c, .a=0x96, .x=0xcc, .y=0xc5, .sp=0x39, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x01cc, .value=0xcf}, {.addr=0xb28c, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xb28d, .a=0x59, .x=0xcc, .y=0xc5, .sp=0x39, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x01cc, .value=0xcf}, {.addr=0xb28c, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xb28c, .value=0x46, .type=IO_READ},
        {.addr=0xb28d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cc, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_017C) {
    const struct CPU_State initial_cpu = {.pc=0x4a7b, .a=0x52, .x=0x3f, .y=0xef, .sp=0x92, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x013f, .value=0x1a}, {.addr=0x4a7b, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x4a7c, .a=0x48, .x=0x3f, .y=0xef, .sp=0x92, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x013f, .value=0x1a}, {.addr=0x4a7b, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x4a7b, .value=0x46, .type=IO_READ},
        {.addr=0x4a7c, .value=DUMMY, .type=IO_READ},
        {.addr=0x013f, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_017D) {
    const struct CPU_State initial_cpu = {.pc=0xee8c, .a=0x01, .x=0x2e, .y=0x34, .sp=0x9e, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x012e, .value=0x26}, {.addr=0xee8c, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xee8d, .a=0x27, .x=0x2e, .y=0x34, .sp=0x9e, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x012e, .value=0x26}, {.addr=0xee8c, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xee8c, .value=0x46, .type=IO_READ},
        {.addr=0xee8d, .value=DUMMY, .type=IO_READ},
        {.addr=0x012e, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_017E) {
    const struct CPU_State initial_cpu = {.pc=0xd6c4, .a=0x83, .x=0xe1, .y=0xbc, .sp=0xac, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x01e1, .value=0x06}, {.addr=0xd6c4, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xd6c5, .a=0x85, .x=0xe1, .y=0xbc, .sp=0xac, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x01e1, .value=0x06}, {.addr=0xd6c4, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xd6c4, .value=0x46, .type=IO_READ},
        {.addr=0xd6c5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e1, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_017F) {
    const struct CPU_State initial_cpu = {.pc=0x5791, .a=0x75, .x=0xe4, .y=0x1a, .sp=0x70, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x00e4, .value=0x62}, {.addr=0x5791, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x5792, .a=0x17, .x=0xe4, .y=0x1a, .sp=0x70, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x00e4, .value=0x62}, {.addr=0x5791, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x5791, .value=0x46, .type=IO_READ},
        {.addr=0x5792, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e4, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0180) {
    const struct CPU_State initial_cpu = {.pc=0x4cf1, .a=0x3d, .x=0x84, .y=0x93, .sp=0xfb, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x0084, .value=0xd3}, {.addr=0x4cf1, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x4cf2, .a=0xee, .x=0x84, .y=0x93, .sp=0xfb, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x0084, .value=0xd3}, {.addr=0x4cf1, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x4cf1, .value=0x46, .type=IO_READ},
        {.addr=0x4cf2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0084, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0181) {
    const struct CPU_State initial_cpu = {.pc=0xa44c, .a=0x72, .x=0x57, .y=0x67, .sp=0x9e, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x0057, .value=0x06}, {.addr=0xa44c, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xa44d, .a=0x74, .x=0x57, .y=0x67, .sp=0x9e, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x0057, .value=0x06}, {.addr=0xa44c, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xa44c, .value=0x46, .type=IO_READ},
        {.addr=0xa44d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0057, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0182) {
    const struct CPU_State initial_cpu = {.pc=0xdf6d, .a=0x6f, .x=0x55, .y=0xdc, .sp=0xd0, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0x88}, {.addr=0xdf6d, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xdf6e, .a=0xe7, .x=0x55, .y=0xdc, .sp=0xd0, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0x88}, {.addr=0xdf6d, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xdf6d, .value=0x46, .type=IO_READ},
        {.addr=0xdf6e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0155, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0183) {
    const struct CPU_State initial_cpu = {.pc=0xd0a9, .a=0x91, .x=0x77, .y=0xee, .sp=0xbf, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x0177, .value=0x62}, {.addr=0xd0a9, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xd0aa, .a=0xf3, .x=0x77, .y=0xee, .sp=0xbf, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x0177, .value=0x62}, {.addr=0xd0a9, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xd0a9, .value=0x46, .type=IO_READ},
        {.addr=0xd0aa, .value=DUMMY, .type=IO_READ},
        {.addr=0x0177, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0184) {
    const struct CPU_State initial_cpu = {.pc=0xc90e, .a=0xf3, .x=0x08, .y=0xc7, .sp=0x52, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x0008, .value=0x07}, {.addr=0xc90e, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xc90f, .a=0xf4, .x=0x08, .y=0xc7, .sp=0x52, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0008, .value=0x07}, {.addr=0xc90e, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xc90e, .value=0x46, .type=IO_READ},
        {.addr=0xc90f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0008, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0185) {
    const struct CPU_State initial_cpu = {.pc=0x0f52, .a=0x35, .x=0x3b, .y=0x10, .sp=0xe0, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x003b, .value=0x47}, {.addr=0x0f52, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x0f53, .a=0x72, .x=0x3b, .y=0x10, .sp=0xe0, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x003b, .value=0x47}, {.addr=0x0f52, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x0f52, .value=0x46, .type=IO_READ},
        {.addr=0x0f53, .value=DUMMY, .type=IO_READ},
        {.addr=0x003b, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0186) {
    const struct CPU_State initial_cpu = {.pc=0x6b88, .a=0xf5, .x=0xf1, .y=0xa2, .sp=0x80, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x01f1, .value=0xf9}, {.addr=0x6b88, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x6b89, .a=0x0c, .x=0xf1, .y=0xa2, .sp=0x80, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x01f1, .value=0xf9}, {.addr=0x6b88, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x6b88, .value=0x46, .type=IO_READ},
        {.addr=0x6b89, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f1, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0187) {
    const struct CPU_State initial_cpu = {.pc=0x7e5f, .a=0xbd, .x=0x6e, .y=0x10, .sp=0xf0, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x006e, .value=0x13}, {.addr=0x7e5f, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x7e60, .a=0xae, .x=0x6e, .y=0x10, .sp=0xf0, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x006e, .value=0x13}, {.addr=0x7e5f, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x7e5f, .value=0x46, .type=IO_READ},
        {.addr=0x7e60, .value=DUMMY, .type=IO_READ},
        {.addr=0x006e, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0188) {
    const struct CPU_State initial_cpu = {.pc=0xee39, .a=0xb6, .x=0x3f, .y=0x8e, .sp=0x0e, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x003f, .value=0xfb}, {.addr=0xee39, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xee3a, .a=0x4d, .x=0x3f, .y=0x8e, .sp=0x0e, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x003f, .value=0xfb}, {.addr=0xee39, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xee39, .value=0x46, .type=IO_READ},
        {.addr=0xee3a, .value=DUMMY, .type=IO_READ},
        {.addr=0x003f, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0189) {
    const struct CPU_State initial_cpu = {.pc=0x2916, .a=0x77, .x=0x88, .y=0x6c, .sp=0xd8, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x0188, .value=0x68}, {.addr=0x2916, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x2917, .a=0x1f, .x=0x88, .y=0x6c, .sp=0xd8, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x0188, .value=0x68}, {.addr=0x2916, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x2916, .value=0x46, .type=IO_READ},
        {.addr=0x2917, .value=DUMMY, .type=IO_READ},
        {.addr=0x0188, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_018A) {
    const struct CPU_State initial_cpu = {.pc=0x1bcf, .a=0xd0, .x=0x27, .y=0xaa, .sp=0x48, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x0027, .value=0x0f}, {.addr=0x1bcf, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x1bd0, .a=0xdf, .x=0x27, .y=0xaa, .sp=0x48, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x0027, .value=0x0f}, {.addr=0x1bcf, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x1bcf, .value=0x46, .type=IO_READ},
        {.addr=0x1bd0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0027, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_018B) {
    const struct CPU_State initial_cpu = {.pc=0xb10e, .a=0x95, .x=0x68, .y=0x5f, .sp=0xa7, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x0168, .value=0x76}, {.addr=0xb10e, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xb10f, .a=0xe3, .x=0x68, .y=0x5f, .sp=0xa7, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x0168, .value=0x76}, {.addr=0xb10e, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xb10e, .value=0x46, .type=IO_READ},
        {.addr=0xb10f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0168, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_018C) {
    const struct CPU_State initial_cpu = {.pc=0x5581, .a=0x6f, .x=0x0a, .y=0xce, .sp=0x3c, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0x24}, {.addr=0x5581, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x5582, .a=0x4b, .x=0x0a, .y=0xce, .sp=0x3c, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0x24}, {.addr=0x5581, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x5581, .value=0x46, .type=IO_READ},
        {.addr=0x5582, .value=DUMMY, .type=IO_READ},
        {.addr=0x010a, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_018D) {
    const struct CPU_State initial_cpu = {.pc=0xebba, .a=0xe4, .x=0x01, .y=0xf9, .sp=0x6e, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x0101, .value=0x18}, {.addr=0xebba, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xebbb, .a=0xfc, .x=0x01, .y=0xf9, .sp=0x6e, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x0101, .value=0x18}, {.addr=0xebba, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xebba, .value=0x46, .type=IO_READ},
        {.addr=0xebbb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0101, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_018E) {
    const struct CPU_State initial_cpu = {.pc=0x2e4a, .a=0x62, .x=0xaf, .y=0xf0, .sp=0xc4, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x01af, .value=0xff}, {.addr=0x2e4a, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x2e4b, .a=0x9d, .x=0xaf, .y=0xf0, .sp=0xc4, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x01af, .value=0xff}, {.addr=0x2e4a, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x2e4a, .value=0x46, .type=IO_READ},
        {.addr=0x2e4b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01af, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_018F) {
    const struct CPU_State initial_cpu = {.pc=0x4e5f, .a=0xa4, .x=0x46, .y=0x45, .sp=0xe3, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0x4a}, {.addr=0x4e5f, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x4e60, .a=0xee, .x=0x46, .y=0x45, .sp=0xe3, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0x4a}, {.addr=0x4e5f, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x4e5f, .value=0x46, .type=IO_READ},
        {.addr=0x4e60, .value=DUMMY, .type=IO_READ},
        {.addr=0x0146, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0191) {
    const struct CPU_State initial_cpu = {.pc=0x5314, .a=0xdc, .x=0xcb, .y=0x65, .sp=0xd6, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x00cb, .value=0x2c}, {.addr=0x5314, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x5315, .a=0xf0, .x=0xcb, .y=0x65, .sp=0xd6, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x00cb, .value=0x2c}, {.addr=0x5314, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x5314, .value=0x46, .type=IO_READ},
        {.addr=0x5315, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cb, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0192) {
    const struct CPU_State initial_cpu = {.pc=0x43b2, .a=0xa7, .x=0xd3, .y=0xb1, .sp=0x09, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x00d3, .value=0x33}, {.addr=0x43b2, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x43b3, .a=0x94, .x=0xd3, .y=0xb1, .sp=0x09, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x00d3, .value=0x33}, {.addr=0x43b2, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x43b2, .value=0x46, .type=IO_READ},
        {.addr=0x43b3, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d3, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0193) {
    const struct CPU_State initial_cpu = {.pc=0xfdae, .a=0x04, .x=0x3c, .y=0xe2, .sp=0xda, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x003c, .value=0x37}, {.addr=0xfdae, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xfdaf, .a=0x33, .x=0x3c, .y=0xe2, .sp=0xda, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x003c, .value=0x37}, {.addr=0xfdae, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xfdae, .value=0x46, .type=IO_READ},
        {.addr=0xfdaf, .value=DUMMY, .type=IO_READ},
        {.addr=0x003c, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0194) {
    const struct CPU_State initial_cpu = {.pc=0x630b, .a=0x3a, .x=0x46, .y=0xd0, .sp=0xc6, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0xcc}, {.addr=0x630b, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x630c, .a=0xf6, .x=0x46, .y=0xd0, .sp=0xc6, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0xcc}, {.addr=0x630b, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x630b, .value=0x46, .type=IO_READ},
        {.addr=0x630c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0146, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0195) {
    const struct CPU_State initial_cpu = {.pc=0x02af, .a=0x05, .x=0x79, .y=0x6d, .sp=0x3a, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x0079, .value=0xc8}, {.addr=0x02af, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x02b0, .a=0xcd, .x=0x79, .y=0x6d, .sp=0x3a, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0079, .value=0xc8}, {.addr=0x02af, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x02af, .value=0x46, .type=IO_READ},
        {.addr=0x02b0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0079, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0196) {
    const struct CPU_State initial_cpu = {.pc=0x78d6, .a=0x51, .x=0x51, .y=0x01, .sp=0x8d, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x0051, .value=0x5d}, {.addr=0x78d6, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x78d7, .a=0x0c, .x=0x51, .y=0x01, .sp=0x8d, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0051, .value=0x5d}, {.addr=0x78d6, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x78d6, .value=0x46, .type=IO_READ},
        {.addr=0x78d7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0051, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0197) {
    const struct CPU_State initial_cpu = {.pc=0xc6df, .a=0x5c, .x=0x76, .y=0xae, .sp=0x3a, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x0176, .value=0xeb}, {.addr=0xc6df, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xc6e0, .a=0xb7, .x=0x76, .y=0xae, .sp=0x3a, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x0176, .value=0xeb}, {.addr=0xc6df, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xc6df, .value=0x46, .type=IO_READ},
        {.addr=0xc6e0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0176, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0198) {
    const struct CPU_State initial_cpu = {.pc=0x9cf7, .a=0x60, .x=0xeb, .y=0xfc, .sp=0xd5, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x00eb, .value=0x2f}, {.addr=0x9cf7, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x9cf8, .a=0x4f, .x=0xeb, .y=0xfc, .sp=0xd5, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x00eb, .value=0x2f}, {.addr=0x9cf7, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x9cf7, .value=0x46, .type=IO_READ},
        {.addr=0x9cf8, .value=DUMMY, .type=IO_READ},
        {.addr=0x00eb, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0199) {
    const struct CPU_State initial_cpu = {.pc=0x8854, .a=0x5e, .x=0x18, .y=0x77, .sp=0x6e, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x0118, .value=0x26}, {.addr=0x8854, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x8855, .a=0x78, .x=0x18, .y=0x77, .sp=0x6e, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x0118, .value=0x26}, {.addr=0x8854, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x8854, .value=0x46, .type=IO_READ},
        {.addr=0x8855, .value=DUMMY, .type=IO_READ},
        {.addr=0x0118, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_019A) {
    const struct CPU_State initial_cpu = {.pc=0x52ca, .a=0x53, .x=0x5f, .y=0xe1, .sp=0x3f, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x015f, .value=0x0d}, {.addr=0x52ca, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x52cb, .a=0x5e, .x=0x5f, .y=0xe1, .sp=0x3f, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x015f, .value=0x0d}, {.addr=0x52ca, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x52ca, .value=0x46, .type=IO_READ},
        {.addr=0x52cb, .value=DUMMY, .type=IO_READ},
        {.addr=0x015f, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_019B) {
    const struct CPU_State initial_cpu = {.pc=0x8192, .a=0x29, .x=0x7c, .y=0x9a, .sp=0xe0, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x007c, .value=0xd9}, {.addr=0x8192, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x8193, .a=0xf0, .x=0x7c, .y=0x9a, .sp=0xe0, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x007c, .value=0xd9}, {.addr=0x8192, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x8192, .value=0x46, .type=IO_READ},
        {.addr=0x8193, .value=DUMMY, .type=IO_READ},
        {.addr=0x007c, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_019C) {
    const struct CPU_State initial_cpu = {.pc=0xfa18, .a=0xca, .x=0x36, .y=0x86, .sp=0xd9, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x0036, .value=0x91}, {.addr=0xfa18, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xfa19, .a=0x5b, .x=0x36, .y=0x86, .sp=0xd9, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x0036, .value=0x91}, {.addr=0xfa18, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xfa18, .value=0x46, .type=IO_READ},
        {.addr=0xfa19, .value=DUMMY, .type=IO_READ},
        {.addr=0x0036, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_019D) {
    const struct CPU_State initial_cpu = {.pc=0x5481, .a=0xa5, .x=0x3c, .y=0xb2, .sp=0x81, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x003c, .value=0xb5}, {.addr=0x5481, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x5482, .a=0x10, .x=0x3c, .y=0xb2, .sp=0x81, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x003c, .value=0xb5}, {.addr=0x5481, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x5481, .value=0x46, .type=IO_READ},
        {.addr=0x5482, .value=DUMMY, .type=IO_READ},
        {.addr=0x003c, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_019E) {
    const struct CPU_State initial_cpu = {.pc=0xe7a0, .a=0x6b, .x=0xb9, .y=0xd5, .sp=0x75, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x00b9, .value=0xe4}, {.addr=0xe7a0, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xe7a1, .a=0x8f, .x=0xb9, .y=0xd5, .sp=0x75, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x00b9, .value=0xe4}, {.addr=0xe7a0, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xe7a0, .value=0x46, .type=IO_READ},
        {.addr=0xe7a1, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b9, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_019F) {
    const struct CPU_State initial_cpu = {.pc=0xb55a, .a=0x06, .x=0xc1, .y=0xd9, .sp=0x6a, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x01c1, .value=0xb4}, {.addr=0xb55a, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xb55b, .a=0xb2, .x=0xc1, .y=0xd9, .sp=0x6a, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x01c1, .value=0xb4}, {.addr=0xb55a, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xb55a, .value=0x46, .type=IO_READ},
        {.addr=0xb55b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c1, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01A0) {
    const struct CPU_State initial_cpu = {.pc=0xc1ff, .a=0x55, .x=0xd8, .y=0xff, .sp=0x7e, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x01d8, .value=0x51}, {.addr=0xc1ff, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xc200, .a=0x04, .x=0xd8, .y=0xff, .sp=0x7e, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x01d8, .value=0x51}, {.addr=0xc1ff, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xc1ff, .value=0x46, .type=IO_READ},
        {.addr=0xc200, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d8, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01A1) {
    const struct CPU_State initial_cpu = {.pc=0xc0e9, .a=0x9b, .x=0xba, .y=0x6c, .sp=0xe8, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x00ba, .value=0xa5}, {.addr=0xc0e9, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xc0ea, .a=0x3e, .x=0xba, .y=0x6c, .sp=0xe8, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x00ba, .value=0xa5}, {.addr=0xc0e9, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xc0e9, .value=0x46, .type=IO_READ},
        {.addr=0xc0ea, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ba, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01A2) {
    const struct CPU_State initial_cpu = {.pc=0x21af, .a=0x5d, .x=0xa8, .y=0xac, .sp=0x75, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x01a8, .value=0xe0}, {.addr=0x21af, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x21b0, .a=0xbd, .x=0xa8, .y=0xac, .sp=0x75, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x01a8, .value=0xe0}, {.addr=0x21af, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x21af, .value=0x46, .type=IO_READ},
        {.addr=0x21b0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a8, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01A3) {
    const struct CPU_State initial_cpu = {.pc=0xe5f3, .a=0x21, .x=0x0d, .y=0x30, .sp=0x4b, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x000d, .value=0xa4}, {.addr=0xe5f3, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xe5f4, .a=0x85, .x=0x0d, .y=0x30, .sp=0x4b, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x000d, .value=0xa4}, {.addr=0xe5f3, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xe5f3, .value=0x46, .type=IO_READ},
        {.addr=0xe5f4, .value=DUMMY, .type=IO_READ},
        {.addr=0x000d, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01A4) {
    const struct CPU_State initial_cpu = {.pc=0xf750, .a=0xaf, .x=0x10, .y=0x21, .sp=0x68, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0x95}, {.addr=0xf750, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xf751, .a=0x3a, .x=0x10, .y=0x21, .sp=0x68, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0x95}, {.addr=0xf750, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xf750, .value=0x46, .type=IO_READ},
        {.addr=0xf751, .value=DUMMY, .type=IO_READ},
        {.addr=0x0110, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01A5) {
    const struct CPU_State initial_cpu = {.pc=0x3b2f, .a=0xb2, .x=0xee, .y=0xee, .sp=0x0a, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0xd0}, {.addr=0x3b2f, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x3b30, .a=0x62, .x=0xee, .y=0xee, .sp=0x0a, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0xd0}, {.addr=0x3b2f, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x3b2f, .value=0x46, .type=IO_READ},
        {.addr=0x3b30, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ee, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01A6) {
    const struct CPU_State initial_cpu = {.pc=0x9140, .a=0x38, .x=0x19, .y=0x03, .sp=0xd8, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x0119, .value=0x46}, {.addr=0x9140, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x9141, .a=0x7e, .x=0x19, .y=0x03, .sp=0xd8, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x0119, .value=0x46}, {.addr=0x9140, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x9140, .value=0x46, .type=IO_READ},
        {.addr=0x9141, .value=DUMMY, .type=IO_READ},
        {.addr=0x0119, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01A7) {
    const struct CPU_State initial_cpu = {.pc=0x8982, .a=0x56, .x=0x50, .y=0xa5, .sp=0x31, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x0150, .value=0x97}, {.addr=0x8982, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x8983, .a=0xc1, .x=0x50, .y=0xa5, .sp=0x31, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x0150, .value=0x97}, {.addr=0x8982, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x8982, .value=0x46, .type=IO_READ},
        {.addr=0x8983, .value=DUMMY, .type=IO_READ},
        {.addr=0x0150, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01A8) {
    const struct CPU_State initial_cpu = {.pc=0x2d24, .a=0xb4, .x=0x30, .y=0x69, .sp=0x93, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x0030, .value=0x97}, {.addr=0x2d24, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x2d25, .a=0x23, .x=0x30, .y=0x69, .sp=0x93, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0030, .value=0x97}, {.addr=0x2d24, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x2d24, .value=0x46, .type=IO_READ},
        {.addr=0x2d25, .value=DUMMY, .type=IO_READ},
        {.addr=0x0030, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01A9) {
    const struct CPU_State initial_cpu = {.pc=0x0038, .a=0x3b, .x=0xca, .y=0xbb, .sp=0xc9, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x0038, .value=0x46}, {.addr=0x01ca, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0x0039, .a=0x34, .x=0xca, .y=0xbb, .sp=0xc9, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x0038, .value=0x46}, {.addr=0x01ca, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0x0038, .value=0x46, .type=IO_READ},
        {.addr=0x0039, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ca, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01AA) {
    const struct CPU_State initial_cpu = {.pc=0x09e8, .a=0xe5, .x=0xb9, .y=0x42, .sp=0x8a, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x00b9, .value=0xa4}, {.addr=0x09e8, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x09e9, .a=0x41, .x=0xb9, .y=0x42, .sp=0x8a, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x00b9, .value=0xa4}, {.addr=0x09e8, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x09e8, .value=0x46, .type=IO_READ},
        {.addr=0x09e9, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b9, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01AB) {
    const struct CPU_State initial_cpu = {.pc=0x32e1, .a=0xb3, .x=0x51, .y=0x0c, .sp=0x83, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x0151, .value=0x7a}, {.addr=0x32e1, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x32e2, .a=0xc9, .x=0x51, .y=0x0c, .sp=0x83, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x0151, .value=0x7a}, {.addr=0x32e1, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x32e1, .value=0x46, .type=IO_READ},
        {.addr=0x32e2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0151, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01AC) {
    const struct CPU_State initial_cpu = {.pc=0x4798, .a=0xf9, .x=0xba, .y=0x74, .sp=0xde, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x00ba, .value=0x5e}, {.addr=0x4798, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x4799, .a=0xa7, .x=0xba, .y=0x74, .sp=0xde, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x00ba, .value=0x5e}, {.addr=0x4798, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x4798, .value=0x46, .type=IO_READ},
        {.addr=0x4799, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ba, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01AD) {
    const struct CPU_State initial_cpu = {.pc=0x9681, .a=0xa9, .x=0x56, .y=0x94, .sp=0x9e, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x0156, .value=0x7e}, {.addr=0x9681, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x9682, .a=0xd7, .x=0x56, .y=0x94, .sp=0x9e, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x0156, .value=0x7e}, {.addr=0x9681, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x9681, .value=0x46, .type=IO_READ},
        {.addr=0x9682, .value=DUMMY, .type=IO_READ},
        {.addr=0x0156, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01AE) {
    const struct CPU_State initial_cpu = {.pc=0xd276, .a=0xcd, .x=0xc5, .y=0x16, .sp=0x9e, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x00c5, .value=0xc2}, {.addr=0xd276, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xd277, .a=0x0f, .x=0xc5, .y=0x16, .sp=0x9e, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x00c5, .value=0xc2}, {.addr=0xd276, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xd276, .value=0x46, .type=IO_READ},
        {.addr=0xd277, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c5, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01AF) {
    const struct CPU_State initial_cpu = {.pc=0xd16b, .a=0x0f, .x=0xb5, .y=0x68, .sp=0x40, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x01b5, .value=0xa6}, {.addr=0xd16b, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xd16c, .a=0xa9, .x=0xb5, .y=0x68, .sp=0x40, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x01b5, .value=0xa6}, {.addr=0xd16b, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xd16b, .value=0x46, .type=IO_READ},
        {.addr=0xd16c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b5, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01B0) {
    const struct CPU_State initial_cpu = {.pc=0x230f, .a=0x1b, .x=0x98, .y=0x8f, .sp=0x6a, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x0198, .value=0x9e}, {.addr=0x230f, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x2310, .a=0x85, .x=0x98, .y=0x8f, .sp=0x6a, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x0198, .value=0x9e}, {.addr=0x230f, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x230f, .value=0x46, .type=IO_READ},
        {.addr=0x2310, .value=DUMMY, .type=IO_READ},
        {.addr=0x0198, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01B1) {
    const struct CPU_State initial_cpu = {.pc=0xb750, .a=0x85, .x=0xb3, .y=0x71, .sp=0xb3, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x00b3, .value=0x18}, {.addr=0xb750, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xb751, .a=0x9d, .x=0xb3, .y=0x71, .sp=0xb3, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x00b3, .value=0x18}, {.addr=0xb750, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xb750, .value=0x46, .type=IO_READ},
        {.addr=0xb751, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b3, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x68cb, .a=0xe9, .x=0x3c, .y=0x3e, .sp=0xba, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0xe6}, {.addr=0x68cb, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x68cc, .a=0x0f, .x=0x3c, .y=0x3e, .sp=0xba, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0xe6}, {.addr=0x68cb, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x68cb, .value=0x46, .type=IO_READ},
        {.addr=0x68cc, .value=DUMMY, .type=IO_READ},
        {.addr=0x013c, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01B3) {
    const struct CPU_State initial_cpu = {.pc=0x3517, .a=0x41, .x=0xed, .y=0x1e, .sp=0x04, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x00ed, .value=0x0a}, {.addr=0x3517, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x3518, .a=0x4b, .x=0xed, .y=0x1e, .sp=0x04, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x00ed, .value=0x0a}, {.addr=0x3517, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x3517, .value=0x46, .type=IO_READ},
        {.addr=0x3518, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ed, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01B4) {
    const struct CPU_State initial_cpu = {.pc=0x44a1, .a=0x0a, .x=0x66, .y=0x70, .sp=0x56, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0x94}, {.addr=0x44a1, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x44a2, .a=0x9e, .x=0x66, .y=0x70, .sp=0x56, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0x94}, {.addr=0x44a1, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x44a1, .value=0x46, .type=IO_READ},
        {.addr=0x44a2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0166, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01B5) {
    const struct CPU_State initial_cpu = {.pc=0xfce4, .a=0x67, .x=0xb4, .y=0xf7, .sp=0xfe, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x01b4, .value=0x44}, {.addr=0xfce4, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xfce5, .a=0x23, .x=0xb4, .y=0xf7, .sp=0xfe, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01b4, .value=0x44}, {.addr=0xfce4, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xfce4, .value=0x46, .type=IO_READ},
        {.addr=0xfce5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b4, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01B6) {
    const struct CPU_State initial_cpu = {.pc=0xa404, .a=0xee, .x=0x18, .y=0x75, .sp=0x6b, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x0118, .value=0xbc}, {.addr=0xa404, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xa405, .a=0x52, .x=0x18, .y=0x75, .sp=0x6b, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x0118, .value=0xbc}, {.addr=0xa404, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xa404, .value=0x46, .type=IO_READ},
        {.addr=0xa405, .value=DUMMY, .type=IO_READ},
        {.addr=0x0118, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01B7) {
    const struct CPU_State initial_cpu = {.pc=0x6183, .a=0x65, .x=0xb4, .y=0x7b, .sp=0x91, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x00b4, .value=0xa0}, {.addr=0x6183, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x6184, .a=0xc5, .x=0xb4, .y=0x7b, .sp=0x91, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x00b4, .value=0xa0}, {.addr=0x6183, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x6183, .value=0x46, .type=IO_READ},
        {.addr=0x6184, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b4, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01B8) {
    const struct CPU_State initial_cpu = {.pc=0xfd60, .a=0x9e, .x=0xe4, .y=0x61, .sp=0x8d, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x00e4, .value=0xb6}, {.addr=0xfd60, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xfd61, .a=0x28, .x=0xe4, .y=0x61, .sp=0x8d, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x00e4, .value=0xb6}, {.addr=0xfd60, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xfd60, .value=0x46, .type=IO_READ},
        {.addr=0xfd61, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e4, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01B9) {
    const struct CPU_State initial_cpu = {.pc=0xd1d9, .a=0xda, .x=0x67, .y=0x81, .sp=0x60, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x0067, .value=0x52}, {.addr=0xd1d9, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xd1da, .a=0x88, .x=0x67, .y=0x81, .sp=0x60, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x0067, .value=0x52}, {.addr=0xd1d9, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xd1d9, .value=0x46, .type=IO_READ},
        {.addr=0xd1da, .value=DUMMY, .type=IO_READ},
        {.addr=0x0067, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01BA) {
    const struct CPU_State initial_cpu = {.pc=0xfb73, .a=0x2d, .x=0x14, .y=0x3d, .sp=0x20, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x0114, .value=0xe7}, {.addr=0xfb73, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xfb74, .a=0xca, .x=0x14, .y=0x3d, .sp=0x20, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x0114, .value=0xe7}, {.addr=0xfb73, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xfb73, .value=0x46, .type=IO_READ},
        {.addr=0xfb74, .value=DUMMY, .type=IO_READ},
        {.addr=0x0114, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01BB) {
    const struct CPU_State initial_cpu = {.pc=0xe947, .a=0x29, .x=0x30, .y=0xb0, .sp=0xae, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x0130, .value=0xd4}, {.addr=0xe947, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xe948, .a=0xfd, .x=0x30, .y=0xb0, .sp=0xae, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x0130, .value=0xd4}, {.addr=0xe947, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xe947, .value=0x46, .type=IO_READ},
        {.addr=0xe948, .value=DUMMY, .type=IO_READ},
        {.addr=0x0130, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01BC) {
    const struct CPU_State initial_cpu = {.pc=0x6d96, .a=0x4e, .x=0x49, .y=0xe9, .sp=0x6f, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x0049, .value=0x07}, {.addr=0x6d96, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x6d97, .a=0x49, .x=0x49, .y=0xe9, .sp=0x6f, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x0049, .value=0x07}, {.addr=0x6d96, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x6d96, .value=0x46, .type=IO_READ},
        {.addr=0x6d97, .value=DUMMY, .type=IO_READ},
        {.addr=0x0049, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01BD) {
    const struct CPU_State initial_cpu = {.pc=0xa646, .a=0x03, .x=0xed, .y=0x45, .sp=0xbd, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x00ed, .value=0x29}, {.addr=0xa646, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xa647, .a=0x2a, .x=0xed, .y=0x45, .sp=0xbd, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x00ed, .value=0x29}, {.addr=0xa646, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xa646, .value=0x46, .type=IO_READ},
        {.addr=0xa647, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ed, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01BE) {
    const struct CPU_State initial_cpu = {.pc=0xaa55, .a=0xd3, .x=0x18, .y=0x77, .sp=0x53, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x0118, .value=0x0b}, {.addr=0xaa55, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xaa56, .a=0xd8, .x=0x18, .y=0x77, .sp=0x53, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x0118, .value=0x0b}, {.addr=0xaa55, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xaa55, .value=0x46, .type=IO_READ},
        {.addr=0xaa56, .value=DUMMY, .type=IO_READ},
        {.addr=0x0118, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01BF) {
    const struct CPU_State initial_cpu = {.pc=0x763a, .a=0x3e, .x=0x09, .y=0xb0, .sp=0x73, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x0109, .value=0x3e}, {.addr=0x763a, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x763b, .a=0x00, .x=0x09, .y=0xb0, .sp=0x73, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x0109, .value=0x3e}, {.addr=0x763a, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x763a, .value=0x46, .type=IO_READ},
        {.addr=0x763b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0109, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01C1) {
    const struct CPU_State initial_cpu = {.pc=0x2297, .a=0x8d, .x=0xa8, .y=0x6e, .sp=0xb7, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x01a8, .value=0xb6}, {.addr=0x2297, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x2298, .a=0x3b, .x=0xa8, .y=0x6e, .sp=0xb7, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x01a8, .value=0xb6}, {.addr=0x2297, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x2297, .value=0x46, .type=IO_READ},
        {.addr=0x2298, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a8, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01C2) {
    const struct CPU_State initial_cpu = {.pc=0xde91, .a=0xb4, .x=0x8b, .y=0x34, .sp=0xdf, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x018b, .value=0x24}, {.addr=0xde91, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xde92, .a=0x90, .x=0x8b, .y=0x34, .sp=0xdf, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x018b, .value=0x24}, {.addr=0xde91, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xde91, .value=0x46, .type=IO_READ},
        {.addr=0xde92, .value=DUMMY, .type=IO_READ},
        {.addr=0x018b, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01C3) {
    const struct CPU_State initial_cpu = {.pc=0xd3eb, .a=0x76, .x=0x30, .y=0xf3, .sp=0xc3, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x0130, .value=0x6c}, {.addr=0xd3eb, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xd3ec, .a=0x1a, .x=0x30, .y=0xf3, .sp=0xc3, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x0130, .value=0x6c}, {.addr=0xd3eb, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xd3eb, .value=0x46, .type=IO_READ},
        {.addr=0xd3ec, .value=DUMMY, .type=IO_READ},
        {.addr=0x0130, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01C4) {
    const struct CPU_State initial_cpu = {.pc=0x2d23, .a=0x13, .x=0xd5, .y=0xba, .sp=0xe3, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x01d5, .value=0x6b}, {.addr=0x2d23, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x2d24, .a=0x78, .x=0xd5, .y=0xba, .sp=0xe3, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x01d5, .value=0x6b}, {.addr=0x2d23, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x2d23, .value=0x46, .type=IO_READ},
        {.addr=0x2d24, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d5, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01C5) {
    const struct CPU_State initial_cpu = {.pc=0x82df, .a=0x2c, .x=0x31, .y=0x80, .sp=0xf6, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x0031, .value=0x4a}, {.addr=0x82df, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x82e0, .a=0x66, .x=0x31, .y=0x80, .sp=0xf6, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0031, .value=0x4a}, {.addr=0x82df, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x82df, .value=0x46, .type=IO_READ},
        {.addr=0x82e0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0031, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01C6) {
    const struct CPU_State initial_cpu = {.pc=0xaa2e, .a=0xb6, .x=0x1d, .y=0x39, .sp=0x5a, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x001d, .value=0x0e}, {.addr=0xaa2e, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xaa2f, .a=0xb8, .x=0x1d, .y=0x39, .sp=0x5a, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x001d, .value=0x0e}, {.addr=0xaa2e, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xaa2e, .value=0x46, .type=IO_READ},
        {.addr=0xaa2f, .value=DUMMY, .type=IO_READ},
        {.addr=0x001d, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01C7) {
    const struct CPU_State initial_cpu = {.pc=0xdd43, .a=0x93, .x=0x86, .y=0x2a, .sp=0x55, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x0186, .value=0x1b}, {.addr=0xdd43, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xdd44, .a=0x88, .x=0x86, .y=0x2a, .sp=0x55, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x0186, .value=0x1b}, {.addr=0xdd43, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xdd43, .value=0x46, .type=IO_READ},
        {.addr=0xdd44, .value=DUMMY, .type=IO_READ},
        {.addr=0x0186, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01C8) {
    const struct CPU_State initial_cpu = {.pc=0x9ab9, .a=0x87, .x=0x7b, .y=0xdb, .sp=0x41, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x007b, .value=0xa7}, {.addr=0x9ab9, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x9aba, .a=0x20, .x=0x7b, .y=0xdb, .sp=0x41, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x007b, .value=0xa7}, {.addr=0x9ab9, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x9ab9, .value=0x46, .type=IO_READ},
        {.addr=0x9aba, .value=DUMMY, .type=IO_READ},
        {.addr=0x007b, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01C9) {
    const struct CPU_State initial_cpu = {.pc=0x5772, .a=0xd2, .x=0xa4, .y=0xa7, .sp=0x5b, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x01a4, .value=0xd6}, {.addr=0x5772, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x5773, .a=0x04, .x=0xa4, .y=0xa7, .sp=0x5b, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01a4, .value=0xd6}, {.addr=0x5772, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x5772, .value=0x46, .type=IO_READ},
        {.addr=0x5773, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a4, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01CA) {
    const struct CPU_State initial_cpu = {.pc=0x192a, .a=0x43, .x=0xd2, .y=0xbd, .sp=0x43, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x01d2, .value=0x45}, {.addr=0x192a, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x192b, .a=0x06, .x=0xd2, .y=0xbd, .sp=0x43, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x01d2, .value=0x45}, {.addr=0x192a, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x192a, .value=0x46, .type=IO_READ},
        {.addr=0x192b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d2, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01CB) {
    const struct CPU_State initial_cpu = {.pc=0x812d, .a=0xf0, .x=0xea, .y=0xdb, .sp=0xce, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x00ea, .value=0x33}, {.addr=0x812d, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x812e, .a=0xc3, .x=0xea, .y=0xdb, .sp=0xce, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x00ea, .value=0x33}, {.addr=0x812d, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x812d, .value=0x46, .type=IO_READ},
        {.addr=0x812e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ea, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01CC) {
    const struct CPU_State initial_cpu = {.pc=0xef44, .a=0x1b, .x=0xde, .y=0xdc, .sp=0xea, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x01de, .value=0xec}, {.addr=0xef44, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xef45, .a=0xf7, .x=0xde, .y=0xdc, .sp=0xea, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x01de, .value=0xec}, {.addr=0xef44, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xef44, .value=0x46, .type=IO_READ},
        {.addr=0xef45, .value=DUMMY, .type=IO_READ},
        {.addr=0x01de, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01CD) {
    const struct CPU_State initial_cpu = {.pc=0x0b67, .a=0xec, .x=0xcb, .y=0x1d, .sp=0x1f, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x01cb, .value=0xb3}, {.addr=0x0b67, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x0b68, .a=0x5f, .x=0xcb, .y=0x1d, .sp=0x1f, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x01cb, .value=0xb3}, {.addr=0x0b67, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x0b67, .value=0x46, .type=IO_READ},
        {.addr=0x0b68, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cb, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01CE) {
    const struct CPU_State initial_cpu = {.pc=0x0c01, .a=0x4e, .x=0x51, .y=0x10, .sp=0x81, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x0151, .value=0x3d}, {.addr=0x0c01, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x0c02, .a=0x73, .x=0x51, .y=0x10, .sp=0x81, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x0151, .value=0x3d}, {.addr=0x0c01, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x0c01, .value=0x46, .type=IO_READ},
        {.addr=0x0c02, .value=DUMMY, .type=IO_READ},
        {.addr=0x0151, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01CF) {
    const struct CPU_State initial_cpu = {.pc=0x2e9e, .a=0x4f, .x=0x9d, .y=0x90, .sp=0xf8, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x019d, .value=0x64}, {.addr=0x2e9e, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x2e9f, .a=0x2b, .x=0x9d, .y=0x90, .sp=0xf8, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x019d, .value=0x64}, {.addr=0x2e9e, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x2e9e, .value=0x46, .type=IO_READ},
        {.addr=0x2e9f, .value=DUMMY, .type=IO_READ},
        {.addr=0x019d, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01D0) {
    const struct CPU_State initial_cpu = {.pc=0x4a18, .a=0x60, .x=0xe7, .y=0xca, .sp=0x8b, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x00e7, .value=0xb6}, {.addr=0x4a18, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x4a19, .a=0xd6, .x=0xe7, .y=0xca, .sp=0x8b, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x00e7, .value=0xb6}, {.addr=0x4a18, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x4a18, .value=0x46, .type=IO_READ},
        {.addr=0x4a19, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e7, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01D1) {
    const struct CPU_State initial_cpu = {.pc=0x58d0, .a=0x12, .x=0x3b, .y=0xb4, .sp=0x88, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x013b, .value=0xe0}, {.addr=0x58d0, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x58d1, .a=0xf2, .x=0x3b, .y=0xb4, .sp=0x88, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x013b, .value=0xe0}, {.addr=0x58d0, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x58d0, .value=0x46, .type=IO_READ},
        {.addr=0x58d1, .value=DUMMY, .type=IO_READ},
        {.addr=0x013b, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01D2) {
    const struct CPU_State initial_cpu = {.pc=0x018a, .a=0x94, .x=0x8f, .y=0xb5, .sp=0xf2, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x008f, .value=0xf2}, {.addr=0x018a, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x018b, .a=0x66, .x=0x8f, .y=0xb5, .sp=0xf2, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x008f, .value=0xf2}, {.addr=0x018a, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x018a, .value=0x46, .type=IO_READ},
        {.addr=0x018b, .value=DUMMY, .type=IO_READ},
        {.addr=0x008f, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01D3) {
    const struct CPU_State initial_cpu = {.pc=0xad8d, .a=0x46, .x=0x1c, .y=0xc3, .sp=0x1f, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x001c, .value=0xe7}, {.addr=0xad8d, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xad8e, .a=0xa1, .x=0x1c, .y=0xc3, .sp=0x1f, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x001c, .value=0xe7}, {.addr=0xad8d, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xad8d, .value=0x46, .type=IO_READ},
        {.addr=0xad8e, .value=DUMMY, .type=IO_READ},
        {.addr=0x001c, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01D4) {
    const struct CPU_State initial_cpu = {.pc=0x99c1, .a=0x0f, .x=0xa0, .y=0x18, .sp=0x1b, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x01a0, .value=0x54}, {.addr=0x99c1, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x99c2, .a=0x5b, .x=0xa0, .y=0x18, .sp=0x1b, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x01a0, .value=0x54}, {.addr=0x99c1, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x99c1, .value=0x46, .type=IO_READ},
        {.addr=0x99c2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a0, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01D5) {
    const struct CPU_State initial_cpu = {.pc=0xb559, .a=0xbb, .x=0x72, .y=0xc7, .sp=0x51, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0x7e}, {.addr=0xb559, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xb55a, .a=0xc5, .x=0x72, .y=0xc7, .sp=0x51, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0x7e}, {.addr=0xb559, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xb559, .value=0x46, .type=IO_READ},
        {.addr=0xb55a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0172, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01D6) {
    const struct CPU_State initial_cpu = {.pc=0x0273, .a=0x2e, .x=0x9e, .y=0xa1, .sp=0x5f, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0xd0}, {.addr=0x0273, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x0274, .a=0xfe, .x=0x9e, .y=0xa1, .sp=0x5f, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0xd0}, {.addr=0x0273, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x0273, .value=0x46, .type=IO_READ},
        {.addr=0x0274, .value=DUMMY, .type=IO_READ},
        {.addr=0x019e, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01D7) {
    const struct CPU_State initial_cpu = {.pc=0x9d55, .a=0xbc, .x=0x07, .y=0x01, .sp=0xd0, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0x1a}, {.addr=0x9d55, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x9d56, .a=0xa6, .x=0x07, .y=0x01, .sp=0xd0, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0x1a}, {.addr=0x9d55, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x9d55, .value=0x46, .type=IO_READ},
        {.addr=0x9d56, .value=DUMMY, .type=IO_READ},
        {.addr=0x0107, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01D8) {
    const struct CPU_State initial_cpu = {.pc=0xf56c, .a=0xca, .x=0x6e, .y=0x93, .sp=0x57, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x016e, .value=0x44}, {.addr=0xf56c, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xf56d, .a=0x8e, .x=0x6e, .y=0x93, .sp=0x57, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x016e, .value=0x44}, {.addr=0xf56c, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xf56c, .value=0x46, .type=IO_READ},
        {.addr=0xf56d, .value=DUMMY, .type=IO_READ},
        {.addr=0x016e, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01D9) {
    const struct CPU_State initial_cpu = {.pc=0xbd92, .a=0xbb, .x=0x80, .y=0xe4, .sp=0x5d, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0x1a}, {.addr=0xbd92, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xbd93, .a=0xa1, .x=0x80, .y=0xe4, .sp=0x5d, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0x1a}, {.addr=0xbd92, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xbd92, .value=0x46, .type=IO_READ},
        {.addr=0xbd93, .value=DUMMY, .type=IO_READ},
        {.addr=0x0180, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01DA) {
    const struct CPU_State initial_cpu = {.pc=0xa9f1, .a=0x34, .x=0x7b, .y=0x0f, .sp=0x0a, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0x0d}, {.addr=0xa9f1, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xa9f2, .a=0x39, .x=0x7b, .y=0x0f, .sp=0x0a, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0x0d}, {.addr=0xa9f1, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xa9f1, .value=0x46, .type=IO_READ},
        {.addr=0xa9f2, .value=DUMMY, .type=IO_READ},
        {.addr=0x017b, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01DB) {
    const struct CPU_State initial_cpu = {.pc=0x9810, .a=0x4d, .x=0x07, .y=0x19, .sp=0x31, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0x33}, {.addr=0x9810, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x9811, .a=0x7e, .x=0x07, .y=0x19, .sp=0x31, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0x33}, {.addr=0x9810, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x9810, .value=0x46, .type=IO_READ},
        {.addr=0x9811, .value=DUMMY, .type=IO_READ},
        {.addr=0x0107, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01DC) {
    const struct CPU_State initial_cpu = {.pc=0xae0e, .a=0x7c, .x=0x0c, .y=0x3c, .sp=0x43, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0x41}, {.addr=0xae0e, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xae0f, .a=0x3d, .x=0x0c, .y=0x3c, .sp=0x43, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0x41}, {.addr=0xae0e, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xae0e, .value=0x46, .type=IO_READ},
        {.addr=0xae0f, .value=DUMMY, .type=IO_READ},
        {.addr=0x010c, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01DD) {
    const struct CPU_State initial_cpu = {.pc=0xfc74, .a=0x26, .x=0x52, .y=0xe9, .sp=0x3b, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x0052, .value=0x54}, {.addr=0xfc74, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xfc75, .a=0x72, .x=0x52, .y=0xe9, .sp=0x3b, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0052, .value=0x54}, {.addr=0xfc74, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xfc74, .value=0x46, .type=IO_READ},
        {.addr=0xfc75, .value=DUMMY, .type=IO_READ},
        {.addr=0x0052, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01DF) {
    const struct CPU_State initial_cpu = {.pc=0x5f00, .a=0x73, .x=0x0d, .y=0x58, .sp=0x40, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x000d, .value=0x76}, {.addr=0x5f00, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x5f01, .a=0x05, .x=0x0d, .y=0x58, .sp=0x40, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x000d, .value=0x76}, {.addr=0x5f00, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x5f00, .value=0x46, .type=IO_READ},
        {.addr=0x5f01, .value=DUMMY, .type=IO_READ},
        {.addr=0x000d, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01E0) {
    const struct CPU_State initial_cpu = {.pc=0xa90d, .a=0x50, .x=0x98, .y=0xc7, .sp=0xea, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x0198, .value=0x6e}, {.addr=0xa90d, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xa90e, .a=0x3e, .x=0x98, .y=0xc7, .sp=0xea, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0198, .value=0x6e}, {.addr=0xa90d, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xa90d, .value=0x46, .type=IO_READ},
        {.addr=0xa90e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0198, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01E1) {
    const struct CPU_State initial_cpu = {.pc=0x0359, .a=0xe9, .x=0xe9, .y=0xcf, .sp=0xc4, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x01e9, .value=0xf6}, {.addr=0x0359, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x035a, .a=0x1f, .x=0xe9, .y=0xcf, .sp=0xc4, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x01e9, .value=0xf6}, {.addr=0x0359, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x0359, .value=0x46, .type=IO_READ},
        {.addr=0x035a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e9, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01E2) {
    const struct CPU_State initial_cpu = {.pc=0xfd51, .a=0xcc, .x=0x71, .y=0x51, .sp=0xa0, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x0071, .value=0xb7}, {.addr=0xfd51, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xfd52, .a=0x7b, .x=0x71, .y=0x51, .sp=0xa0, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0071, .value=0xb7}, {.addr=0xfd51, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xfd51, .value=0x46, .type=IO_READ},
        {.addr=0xfd52, .value=DUMMY, .type=IO_READ},
        {.addr=0x0071, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01E3) {
    const struct CPU_State initial_cpu = {.pc=0x3a88, .a=0xc0, .x=0xec, .y=0xcb, .sp=0x5d, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x01ec, .value=0xba}, {.addr=0x3a88, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x3a89, .a=0x7a, .x=0xec, .y=0xcb, .sp=0x5d, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x01ec, .value=0xba}, {.addr=0x3a88, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x3a88, .value=0x46, .type=IO_READ},
        {.addr=0x3a89, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ec, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01E4) {
    const struct CPU_State initial_cpu = {.pc=0x7442, .a=0x02, .x=0x78, .y=0x6e, .sp=0xa0, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x0078, .value=0x47}, {.addr=0x7442, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x7443, .a=0x45, .x=0x78, .y=0x6e, .sp=0xa0, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0078, .value=0x47}, {.addr=0x7442, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x7442, .value=0x46, .type=IO_READ},
        {.addr=0x7443, .value=DUMMY, .type=IO_READ},
        {.addr=0x0078, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01E5) {
    const struct CPU_State initial_cpu = {.pc=0x8155, .a=0x37, .x=0x6b, .y=0xa5, .sp=0x82, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x016b, .value=0x49}, {.addr=0x8155, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x8156, .a=0x7e, .x=0x6b, .y=0xa5, .sp=0x82, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x016b, .value=0x49}, {.addr=0x8155, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x8155, .value=0x46, .type=IO_READ},
        {.addr=0x8156, .value=DUMMY, .type=IO_READ},
        {.addr=0x016b, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01E6) {
    const struct CPU_State initial_cpu = {.pc=0xe3ae, .a=0x3a, .x=0x7b, .y=0x38, .sp=0xe3, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0xe0}, {.addr=0xe3ae, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xe3af, .a=0xda, .x=0x7b, .y=0x38, .sp=0xe3, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0xe0}, {.addr=0xe3ae, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xe3ae, .value=0x46, .type=IO_READ},
        {.addr=0xe3af, .value=DUMMY, .type=IO_READ},
        {.addr=0x017b, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01E7) {
    const struct CPU_State initial_cpu = {.pc=0x61cc, .a=0x23, .x=0x9d, .y=0x11, .sp=0x41, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x009d, .value=0x70}, {.addr=0x61cc, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x61cd, .a=0x53, .x=0x9d, .y=0x11, .sp=0x41, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x009d, .value=0x70}, {.addr=0x61cc, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x61cc, .value=0x46, .type=IO_READ},
        {.addr=0x61cd, .value=DUMMY, .type=IO_READ},
        {.addr=0x009d, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01E8) {
    const struct CPU_State initial_cpu = {.pc=0xf6e6, .a=0xba, .x=0x3d, .y=0x8e, .sp=0x1c, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x013d, .value=0xa2}, {.addr=0xf6e6, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xf6e7, .a=0x18, .x=0x3d, .y=0x8e, .sp=0x1c, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x013d, .value=0xa2}, {.addr=0xf6e6, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xf6e6, .value=0x46, .type=IO_READ},
        {.addr=0xf6e7, .value=DUMMY, .type=IO_READ},
        {.addr=0x013d, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01E9) {
    const struct CPU_State initial_cpu = {.pc=0xac05, .a=0x0d, .x=0x6a, .y=0x80, .sp=0x51, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x016a, .value=0x78}, {.addr=0xac05, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xac06, .a=0x75, .x=0x6a, .y=0x80, .sp=0x51, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x016a, .value=0x78}, {.addr=0xac05, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xac05, .value=0x46, .type=IO_READ},
        {.addr=0xac06, .value=DUMMY, .type=IO_READ},
        {.addr=0x016a, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01EA) {
    const struct CPU_State initial_cpu = {.pc=0x76a4, .a=0x5d, .x=0x01, .y=0xc1, .sp=0x0c, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x0001, .value=0xa8}, {.addr=0x76a4, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x76a5, .a=0xf5, .x=0x01, .y=0xc1, .sp=0x0c, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0001, .value=0xa8}, {.addr=0x76a4, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x76a4, .value=0x46, .type=IO_READ},
        {.addr=0x76a5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0001, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01EB) {
    const struct CPU_State initial_cpu = {.pc=0x2340, .a=0x83, .x=0xb5, .y=0xe3, .sp=0x9d, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x00b5, .value=0xcd}, {.addr=0x2340, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x2341, .a=0x4e, .x=0xb5, .y=0xe3, .sp=0x9d, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x00b5, .value=0xcd}, {.addr=0x2340, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x2340, .value=0x46, .type=IO_READ},
        {.addr=0x2341, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b5, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01EC) {
    const struct CPU_State initial_cpu = {.pc=0x03cd, .a=0x42, .x=0xb8, .y=0xf5, .sp=0xc9, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x00b8, .value=0xae}, {.addr=0x03cd, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x03ce, .a=0xec, .x=0xb8, .y=0xf5, .sp=0xc9, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x00b8, .value=0xae}, {.addr=0x03cd, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x03cd, .value=0x46, .type=IO_READ},
        {.addr=0x03ce, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b8, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01ED) {
    const struct CPU_State initial_cpu = {.pc=0x1d68, .a=0x46, .x=0xd1, .y=0x5d, .sp=0x75, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0xd6}, {.addr=0x1d68, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x1d69, .a=0x90, .x=0xd1, .y=0x5d, .sp=0x75, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0xd6}, {.addr=0x1d68, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x1d68, .value=0x46, .type=IO_READ},
        {.addr=0x1d69, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d1, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01EE) {
    const struct CPU_State initial_cpu = {.pc=0xecb7, .a=0x4c, .x=0x68, .y=0x1f, .sp=0x97, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x0068, .value=0x9f}, {.addr=0xecb7, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xecb8, .a=0xd3, .x=0x68, .y=0x1f, .sp=0x97, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x0068, .value=0x9f}, {.addr=0xecb7, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xecb7, .value=0x46, .type=IO_READ},
        {.addr=0xecb8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0068, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01EF) {
    const struct CPU_State initial_cpu = {.pc=0xa811, .a=0x14, .x=0xbf, .y=0x3e, .sp=0x66, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x00bf, .value=0x40}, {.addr=0xa811, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xa812, .a=0x54, .x=0xbf, .y=0x3e, .sp=0x66, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x00bf, .value=0x40}, {.addr=0xa811, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xa811, .value=0x46, .type=IO_READ},
        {.addr=0xa812, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bf, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01F0) {
    const struct CPU_State initial_cpu = {.pc=0xbf40, .a=0x18, .x=0x08, .y=0xac, .sp=0x7f, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x0008, .value=0xc6}, {.addr=0xbf40, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xbf41, .a=0xde, .x=0x08, .y=0xac, .sp=0x7f, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x0008, .value=0xc6}, {.addr=0xbf40, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xbf40, .value=0x46, .type=IO_READ},
        {.addr=0xbf41, .value=DUMMY, .type=IO_READ},
        {.addr=0x0008, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01F1) {
    const struct CPU_State initial_cpu = {.pc=0x00e4, .a=0x9c, .x=0x1f, .y=0x42, .sp=0xca, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x00e4, .value=0x46}, {.addr=0x011f, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0x00e5, .a=0x11, .x=0x1f, .y=0x42, .sp=0xca, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x00e4, .value=0x46}, {.addr=0x011f, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0x00e4, .value=0x46, .type=IO_READ},
        {.addr=0x00e5, .value=DUMMY, .type=IO_READ},
        {.addr=0x011f, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01F2) {
    const struct CPU_State initial_cpu = {.pc=0x9c81, .a=0x4a, .x=0xfd, .y=0x99, .sp=0xb3, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x01fd, .value=0x3f}, {.addr=0x9c81, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x9c82, .a=0x75, .x=0xfd, .y=0x99, .sp=0xb3, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x01fd, .value=0x3f}, {.addr=0x9c81, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x9c81, .value=0x46, .type=IO_READ},
        {.addr=0x9c82, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fd, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01F3) {
    const struct CPU_State initial_cpu = {.pc=0x2ed4, .a=0xfa, .x=0xcd, .y=0xcb, .sp=0xde, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x01cd, .value=0xa0}, {.addr=0x2ed4, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x2ed5, .a=0x5a, .x=0xcd, .y=0xcb, .sp=0xde, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x01cd, .value=0xa0}, {.addr=0x2ed4, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x2ed4, .value=0x46, .type=IO_READ},
        {.addr=0x2ed5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cd, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01F4) {
    const struct CPU_State initial_cpu = {.pc=0xc014, .a=0x02, .x=0xd3, .y=0x64, .sp=0xa3, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x00d3, .value=0x26}, {.addr=0xc014, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xc015, .a=0x24, .x=0xd3, .y=0x64, .sp=0xa3, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x00d3, .value=0x26}, {.addr=0xc014, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xc014, .value=0x46, .type=IO_READ},
        {.addr=0xc015, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d3, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01F5) {
    const struct CPU_State initial_cpu = {.pc=0x0280, .a=0x53, .x=0x68, .y=0xdf, .sp=0x67, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x0168, .value=0xea}, {.addr=0x0280, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x0281, .a=0xb9, .x=0x68, .y=0xdf, .sp=0x67, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0168, .value=0xea}, {.addr=0x0280, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x0280, .value=0x46, .type=IO_READ},
        {.addr=0x0281, .value=DUMMY, .type=IO_READ},
        {.addr=0x0168, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01F6) {
    const struct CPU_State initial_cpu = {.pc=0x9369, .a=0x55, .x=0x13, .y=0xd0, .sp=0x9b, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x0013, .value=0x6a}, {.addr=0x9369, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x936a, .a=0x3f, .x=0x13, .y=0xd0, .sp=0x9b, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x0013, .value=0x6a}, {.addr=0x9369, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x9369, .value=0x46, .type=IO_READ},
        {.addr=0x936a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0013, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01F7) {
    const struct CPU_State initial_cpu = {.pc=0xa8f3, .a=0x0e, .x=0x65, .y=0x95, .sp=0xf3, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x0165, .value=0x86}, {.addr=0xa8f3, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xa8f4, .a=0x88, .x=0x65, .y=0x95, .sp=0xf3, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x0165, .value=0x86}, {.addr=0xa8f3, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xa8f3, .value=0x46, .type=IO_READ},
        {.addr=0xa8f4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0165, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01F8) {
    const struct CPU_State initial_cpu = {.pc=0x0508, .a=0x32, .x=0x7d, .y=0x93, .sp=0x12, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x007d, .value=0x37}, {.addr=0x0508, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x0509, .a=0x05, .x=0x7d, .y=0x93, .sp=0x12, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x007d, .value=0x37}, {.addr=0x0508, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x0508, .value=0x46, .type=IO_READ},
        {.addr=0x0509, .value=DUMMY, .type=IO_READ},
        {.addr=0x007d, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x523f, .a=0x0f, .x=0x05, .y=0x76, .sp=0x6b, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x0105, .value=0xcf}, {.addr=0x523f, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x5240, .a=0xc0, .x=0x05, .y=0x76, .sp=0x6b, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x0105, .value=0xcf}, {.addr=0x523f, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x523f, .value=0x46, .type=IO_READ},
        {.addr=0x5240, .value=DUMMY, .type=IO_READ},
        {.addr=0x0105, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01FA) {
    const struct CPU_State initial_cpu = {.pc=0xe816, .a=0xf8, .x=0x86, .y=0x1c, .sp=0xdc, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x0186, .value=0xcd}, {.addr=0xe816, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xe817, .a=0x35, .x=0x86, .y=0x1c, .sp=0xdc, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x0186, .value=0xcd}, {.addr=0xe816, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xe816, .value=0x46, .type=IO_READ},
        {.addr=0xe817, .value=DUMMY, .type=IO_READ},
        {.addr=0x0186, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01FC) {
    const struct CPU_State initial_cpu = {.pc=0x89f2, .a=0xc8, .x=0x29, .y=0x58, .sp=0xe9, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x0129, .value=0x81}, {.addr=0x89f2, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x89f3, .a=0x49, .x=0x29, .y=0x58, .sp=0xe9, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x0129, .value=0x81}, {.addr=0x89f2, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x89f2, .value=0x46, .type=IO_READ},
        {.addr=0x89f3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0129, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01FD) {
    const struct CPU_State initial_cpu = {.pc=0x86b3, .a=0xab, .x=0x75, .y=0xfa, .sp=0x17, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x0175, .value=0xcd}, {.addr=0x86b3, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x86b4, .a=0x66, .x=0x75, .y=0xfa, .sp=0x17, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0175, .value=0xcd}, {.addr=0x86b3, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x86b3, .value=0x46, .type=IO_READ},
        {.addr=0x86b4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0175, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01FE) {
    const struct CPU_State initial_cpu = {.pc=0xb6b2, .a=0xc0, .x=0x3c, .y=0xf7, .sp=0xa6, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x003c, .value=0xd2}, {.addr=0xb6b2, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xb6b3, .a=0x12, .x=0x3c, .y=0xf7, .sp=0xa6, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x003c, .value=0xd2}, {.addr=0xb6b2, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xb6b2, .value=0x46, .type=IO_READ},
        {.addr=0xb6b3, .value=DUMMY, .type=IO_READ},
        {.addr=0x003c, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_01FF) {
    const struct CPU_State initial_cpu = {.pc=0x44ab, .a=0xfa, .x=0x48, .y=0xc8, .sp=0xd9, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x0048, .value=0xea}, {.addr=0x44ab, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x44ac, .a=0x10, .x=0x48, .y=0xc8, .sp=0xd9, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x0048, .value=0xea}, {.addr=0x44ab, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x44ab, .value=0x46, .type=IO_READ},
        {.addr=0x44ac, .value=DUMMY, .type=IO_READ},
        {.addr=0x0048, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0200) {
    const struct CPU_State initial_cpu = {.pc=0x00b6, .a=0x1e, .x=0xb5, .y=0x6f, .sp=0xea, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x00b5, .value=0x5b}, {.addr=0x00b6, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x00b7, .a=0x45, .x=0xb5, .y=0x6f, .sp=0xea, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x00b5, .value=0x5b}, {.addr=0x00b6, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x00b6, .value=0x46, .type=IO_READ},
        {.addr=0x00b7, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b5, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0201) {
    const struct CPU_State initial_cpu = {.pc=0x64ed, .a=0xf0, .x=0xbe, .y=0xbe, .sp=0x5b, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x01be, .value=0xd3}, {.addr=0x64ed, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x64ee, .a=0x23, .x=0xbe, .y=0xbe, .sp=0x5b, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x01be, .value=0xd3}, {.addr=0x64ed, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x64ed, .value=0x46, .type=IO_READ},
        {.addr=0x64ee, .value=DUMMY, .type=IO_READ},
        {.addr=0x01be, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0202) {
    const struct CPU_State initial_cpu = {.pc=0xbddd, .a=0x7f, .x=0x24, .y=0x38, .sp=0x4b, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0x5a}, {.addr=0xbddd, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xbdde, .a=0x25, .x=0x24, .y=0x38, .sp=0x4b, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0x5a}, {.addr=0xbddd, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xbddd, .value=0x46, .type=IO_READ},
        {.addr=0xbdde, .value=DUMMY, .type=IO_READ},
        {.addr=0x0124, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0203) {
    const struct CPU_State initial_cpu = {.pc=0x3c11, .a=0xfe, .x=0x73, .y=0x46, .sp=0xc7, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0x2c}, {.addr=0x3c11, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x3c12, .a=0xd2, .x=0x73, .y=0x46, .sp=0xc7, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0x2c}, {.addr=0x3c11, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x3c11, .value=0x46, .type=IO_READ},
        {.addr=0x3c12, .value=DUMMY, .type=IO_READ},
        {.addr=0x0173, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0204) {
    const struct CPU_State initial_cpu = {.pc=0x94f3, .a=0xd0, .x=0x2f, .y=0x26, .sp=0x6e, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x002f, .value=0xb5}, {.addr=0x94f3, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x94f4, .a=0x65, .x=0x2f, .y=0x26, .sp=0x6e, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x002f, .value=0xb5}, {.addr=0x94f3, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x94f3, .value=0x46, .type=IO_READ},
        {.addr=0x94f4, .value=DUMMY, .type=IO_READ},
        {.addr=0x002f, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0205) {
    const struct CPU_State initial_cpu = {.pc=0x684c, .a=0xbb, .x=0xe4, .y=0x27, .sp=0x5f, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x01e4, .value=0xb8}, {.addr=0x684c, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x684d, .a=0x03, .x=0xe4, .y=0x27, .sp=0x5f, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x01e4, .value=0xb8}, {.addr=0x684c, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x684c, .value=0x46, .type=IO_READ},
        {.addr=0x684d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e4, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0206) {
    const struct CPU_State initial_cpu = {.pc=0xd865, .a=0x03, .x=0x26, .y=0x39, .sp=0xed, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x0126, .value=0xa0}, {.addr=0xd865, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xd866, .a=0xa3, .x=0x26, .y=0x39, .sp=0xed, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x0126, .value=0xa0}, {.addr=0xd865, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xd865, .value=0x46, .type=IO_READ},
        {.addr=0xd866, .value=DUMMY, .type=IO_READ},
        {.addr=0x0126, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0207) {
    const struct CPU_State initial_cpu = {.pc=0x68d8, .a=0x7b, .x=0xd2, .y=0x1e, .sp=0x37, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x01d2, .value=0xc5}, {.addr=0x68d8, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x68d9, .a=0xbe, .x=0xd2, .y=0x1e, .sp=0x37, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x01d2, .value=0xc5}, {.addr=0x68d8, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x68d8, .value=0x46, .type=IO_READ},
        {.addr=0x68d9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d2, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0208) {
    const struct CPU_State initial_cpu = {.pc=0x798f, .a=0x27, .x=0x9a, .y=0xe8, .sp=0x79, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x019a, .value=0x2a}, {.addr=0x798f, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x7990, .a=0x0d, .x=0x9a, .y=0xe8, .sp=0x79, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x019a, .value=0x2a}, {.addr=0x798f, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x798f, .value=0x46, .type=IO_READ},
        {.addr=0x7990, .value=DUMMY, .type=IO_READ},
        {.addr=0x019a, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0209) {
    const struct CPU_State initial_cpu = {.pc=0x8c0d, .a=0xbc, .x=0x42, .y=0x5f, .sp=0x49, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x0042, .value=0xbd}, {.addr=0x8c0d, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x8c0e, .a=0x01, .x=0x42, .y=0x5f, .sp=0x49, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0042, .value=0xbd}, {.addr=0x8c0d, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x8c0d, .value=0x46, .type=IO_READ},
        {.addr=0x8c0e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0042, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_020B) {
    const struct CPU_State initial_cpu = {.pc=0x7032, .a=0x5c, .x=0xf5, .y=0x60, .sp=0xa2, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x01f5, .value=0x72}, {.addr=0x7032, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x7033, .a=0x2e, .x=0xf5, .y=0x60, .sp=0xa2, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x01f5, .value=0x72}, {.addr=0x7032, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x7032, .value=0x46, .type=IO_READ},
        {.addr=0x7033, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f5, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_020C) {
    const struct CPU_State initial_cpu = {.pc=0xd7c5, .a=0x01, .x=0xec, .y=0xb1, .sp=0xb3, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x00ec, .value=0x31}, {.addr=0xd7c5, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xd7c6, .a=0x30, .x=0xec, .y=0xb1, .sp=0xb3, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x00ec, .value=0x31}, {.addr=0xd7c5, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xd7c5, .value=0x46, .type=IO_READ},
        {.addr=0xd7c6, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ec, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_020D) {
    const struct CPU_State initial_cpu = {.pc=0x10a2, .a=0xc7, .x=0xec, .y=0xbd, .sp=0x8d, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x00ec, .value=0xb3}, {.addr=0x10a2, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x10a3, .a=0x74, .x=0xec, .y=0xbd, .sp=0x8d, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x00ec, .value=0xb3}, {.addr=0x10a2, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x10a2, .value=0x46, .type=IO_READ},
        {.addr=0x10a3, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ec, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_020E) {
    const struct CPU_State initial_cpu = {.pc=0xa22a, .a=0x14, .x=0x67, .y=0x53, .sp=0x37, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0xe0}, {.addr=0xa22a, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xa22b, .a=0xf4, .x=0x67, .y=0x53, .sp=0x37, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0xe0}, {.addr=0xa22a, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xa22a, .value=0x46, .type=IO_READ},
        {.addr=0xa22b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0167, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_020F) {
    const struct CPU_State initial_cpu = {.pc=0xfbf0, .a=0xa3, .x=0xae, .y=0x7e, .sp=0xef, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x01ae, .value=0xd0}, {.addr=0xfbf0, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xfbf1, .a=0x73, .x=0xae, .y=0x7e, .sp=0xef, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01ae, .value=0xd0}, {.addr=0xfbf0, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xfbf0, .value=0x46, .type=IO_READ},
        {.addr=0xfbf1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ae, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0210) {
    const struct CPU_State initial_cpu = {.pc=0x56b0, .a=0x79, .x=0x61, .y=0xea, .sp=0x70, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x0061, .value=0x93}, {.addr=0x56b0, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x56b1, .a=0xea, .x=0x61, .y=0xea, .sp=0x70, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x0061, .value=0x93}, {.addr=0x56b0, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x56b0, .value=0x46, .type=IO_READ},
        {.addr=0x56b1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0061, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0211) {
    const struct CPU_State initial_cpu = {.pc=0x38c7, .a=0x4a, .x=0xef, .y=0xda, .sp=0x8e, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x00ef, .value=0xbd}, {.addr=0x38c7, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x38c8, .a=0xf7, .x=0xef, .y=0xda, .sp=0x8e, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x00ef, .value=0xbd}, {.addr=0x38c7, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x38c7, .value=0x46, .type=IO_READ},
        {.addr=0x38c8, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ef, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0212) {
    const struct CPU_State initial_cpu = {.pc=0x38bb, .a=0xfd, .x=0x7c, .y=0x78, .sp=0x1d, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x007c, .value=0x30}, {.addr=0x38bb, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x38bc, .a=0xcd, .x=0x7c, .y=0x78, .sp=0x1d, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x007c, .value=0x30}, {.addr=0x38bb, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x38bb, .value=0x46, .type=IO_READ},
        {.addr=0x38bc, .value=DUMMY, .type=IO_READ},
        {.addr=0x007c, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0213) {
    const struct CPU_State initial_cpu = {.pc=0x79b6, .a=0x0d, .x=0xe6, .y=0xc8, .sp=0xff, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x00e6, .value=0xfc}, {.addr=0x79b6, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x79b7, .a=0xf1, .x=0xe6, .y=0xc8, .sp=0xff, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x00e6, .value=0xfc}, {.addr=0x79b6, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x79b6, .value=0x46, .type=IO_READ},
        {.addr=0x79b7, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e6, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0214) {
    const struct CPU_State initial_cpu = {.pc=0x05b8, .a=0x38, .x=0x03, .y=0xb7, .sp=0x54, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x0103, .value=0xed}, {.addr=0x05b8, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x05b9, .a=0xd5, .x=0x03, .y=0xb7, .sp=0x54, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0103, .value=0xed}, {.addr=0x05b8, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x05b8, .value=0x46, .type=IO_READ},
        {.addr=0x05b9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0103, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0215) {
    const struct CPU_State initial_cpu = {.pc=0x22f8, .a=0x40, .x=0xf9, .y=0xbd, .sp=0xfa, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x01f9, .value=0x6b}, {.addr=0x22f8, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x22f9, .a=0x2b, .x=0xf9, .y=0xbd, .sp=0xfa, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x01f9, .value=0x6b}, {.addr=0x22f8, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x22f8, .value=0x46, .type=IO_READ},
        {.addr=0x22f9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f9, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0216) {
    const struct CPU_State initial_cpu = {.pc=0x0583, .a=0xc2, .x=0x9e, .y=0xd6, .sp=0xb3, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0xb9}, {.addr=0x0583, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x0584, .a=0x7b, .x=0x9e, .y=0xd6, .sp=0xb3, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0xb9}, {.addr=0x0583, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x0583, .value=0x46, .type=IO_READ},
        {.addr=0x0584, .value=DUMMY, .type=IO_READ},
        {.addr=0x019e, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0217) {
    const struct CPU_State initial_cpu = {.pc=0xed8d, .a=0x35, .x=0x82, .y=0xbe, .sp=0x76, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x0082, .value=0x29}, {.addr=0xed8d, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xed8e, .a=0x1c, .x=0x82, .y=0xbe, .sp=0x76, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x0082, .value=0x29}, {.addr=0xed8d, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xed8d, .value=0x46, .type=IO_READ},
        {.addr=0xed8e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0082, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0218) {
    const struct CPU_State initial_cpu = {.pc=0x79c1, .a=0x47, .x=0x0a, .y=0x2d, .sp=0x98, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x000a, .value=0x6e}, {.addr=0x79c1, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x79c2, .a=0x29, .x=0x0a, .y=0x2d, .sp=0x98, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x000a, .value=0x6e}, {.addr=0x79c1, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x79c1, .value=0x46, .type=IO_READ},
        {.addr=0x79c2, .value=DUMMY, .type=IO_READ},
        {.addr=0x000a, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0219) {
    const struct CPU_State initial_cpu = {.pc=0x268c, .a=0x6d, .x=0xee, .y=0x1d, .sp=0xd2, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x00ee, .value=0xd7}, {.addr=0x268c, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x268d, .a=0xba, .x=0xee, .y=0x1d, .sp=0xd2, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x00ee, .value=0xd7}, {.addr=0x268c, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x268c, .value=0x46, .type=IO_READ},
        {.addr=0x268d, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ee, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_021A) {
    const struct CPU_State initial_cpu = {.pc=0x7143, .a=0x54, .x=0x5a, .y=0xfa, .sp=0xa0, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x015a, .value=0xd4}, {.addr=0x7143, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x7144, .a=0x80, .x=0x5a, .y=0xfa, .sp=0xa0, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x015a, .value=0xd4}, {.addr=0x7143, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x7143, .value=0x46, .type=IO_READ},
        {.addr=0x7144, .value=DUMMY, .type=IO_READ},
        {.addr=0x015a, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_021B) {
    const struct CPU_State initial_cpu = {.pc=0x9e6d, .a=0xe0, .x=0x2d, .y=0xd5, .sp=0xa5, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x002d, .value=0x8c}, {.addr=0x9e6d, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x9e6e, .a=0x6c, .x=0x2d, .y=0xd5, .sp=0xa5, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x002d, .value=0x8c}, {.addr=0x9e6d, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x9e6d, .value=0x46, .type=IO_READ},
        {.addr=0x9e6e, .value=DUMMY, .type=IO_READ},
        {.addr=0x002d, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_021C) {
    const struct CPU_State initial_cpu = {.pc=0x4b3c, .a=0x16, .x=0xd6, .y=0x5b, .sp=0xa1, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x01d6, .value=0x68}, {.addr=0x4b3c, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x4b3d, .a=0x7e, .x=0xd6, .y=0x5b, .sp=0xa1, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x01d6, .value=0x68}, {.addr=0x4b3c, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x4b3c, .value=0x46, .type=IO_READ},
        {.addr=0x4b3d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d6, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_021D) {
    const struct CPU_State initial_cpu = {.pc=0x362e, .a=0xd4, .x=0xa1, .y=0xa5, .sp=0xa2, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0x74}, {.addr=0x362e, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x362f, .a=0xa0, .x=0xa1, .y=0xa5, .sp=0xa2, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0x74}, {.addr=0x362e, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x362e, .value=0x46, .type=IO_READ},
        {.addr=0x362f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a1, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_021E) {
    const struct CPU_State initial_cpu = {.pc=0x3ded, .a=0x9a, .x=0x80, .y=0x28, .sp=0xfc, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x0080, .value=0xd2}, {.addr=0x3ded, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x3dee, .a=0x48, .x=0x80, .y=0x28, .sp=0xfc, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0080, .value=0xd2}, {.addr=0x3ded, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x3ded, .value=0x46, .type=IO_READ},
        {.addr=0x3dee, .value=DUMMY, .type=IO_READ},
        {.addr=0x0080, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_021F) {
    const struct CPU_State initial_cpu = {.pc=0xba0d, .a=0x34, .x=0xd1, .y=0xeb, .sp=0x3d, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x00d1, .value=0xa0}, {.addr=0xba0d, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xba0e, .a=0x94, .x=0xd1, .y=0xeb, .sp=0x3d, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x00d1, .value=0xa0}, {.addr=0xba0d, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xba0d, .value=0x46, .type=IO_READ},
        {.addr=0xba0e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d1, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0220) {
    const struct CPU_State initial_cpu = {.pc=0x49ef, .a=0x44, .x=0xf9, .y=0xcf, .sp=0x4f, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x01f9, .value=0x40}, {.addr=0x49ef, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x49f0, .a=0x04, .x=0xf9, .y=0xcf, .sp=0x4f, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x01f9, .value=0x40}, {.addr=0x49ef, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x49ef, .value=0x46, .type=IO_READ},
        {.addr=0x49f0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f9, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0221) {
    const struct CPU_State initial_cpu = {.pc=0xc33c, .a=0x49, .x=0xa9, .y=0x9a, .sp=0x20, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x00a9, .value=0x98}, {.addr=0xc33c, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xc33d, .a=0xd1, .x=0xa9, .y=0x9a, .sp=0x20, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x00a9, .value=0x98}, {.addr=0xc33c, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xc33c, .value=0x46, .type=IO_READ},
        {.addr=0xc33d, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a9, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0222) {
    const struct CPU_State initial_cpu = {.pc=0xc809, .a=0xf8, .x=0x85, .y=0xc0, .sp=0x40, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x0185, .value=0x94}, {.addr=0xc809, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xc80a, .a=0x6c, .x=0x85, .y=0xc0, .sp=0x40, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0185, .value=0x94}, {.addr=0xc809, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xc809, .value=0x46, .type=IO_READ},
        {.addr=0xc80a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0185, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0223) {
    const struct CPU_State initial_cpu = {.pc=0x84fd, .a=0x6a, .x=0x53, .y=0xbe, .sp=0xcc, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0x0d}, {.addr=0x84fd, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x84fe, .a=0x67, .x=0x53, .y=0xbe, .sp=0xcc, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0x0d}, {.addr=0x84fd, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x84fd, .value=0x46, .type=IO_READ},
        {.addr=0x84fe, .value=DUMMY, .type=IO_READ},
        {.addr=0x0153, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0224) {
    const struct CPU_State initial_cpu = {.pc=0x7938, .a=0xa2, .x=0xb3, .y=0xd3, .sp=0x45, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0x97}, {.addr=0x7938, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x7939, .a=0x35, .x=0xb3, .y=0xd3, .sp=0x45, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0x97}, {.addr=0x7938, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x7938, .value=0x46, .type=IO_READ},
        {.addr=0x7939, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b3, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0225) {
    const struct CPU_State initial_cpu = {.pc=0x6e14, .a=0x2d, .x=0x1e, .y=0x2a, .sp=0xd0, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x001e, .value=0xe9}, {.addr=0x6e14, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x6e15, .a=0xc4, .x=0x1e, .y=0x2a, .sp=0xd0, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x001e, .value=0xe9}, {.addr=0x6e14, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x6e14, .value=0x46, .type=IO_READ},
        {.addr=0x6e15, .value=DUMMY, .type=IO_READ},
        {.addr=0x001e, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0226) {
    const struct CPU_State initial_cpu = {.pc=0xf626, .a=0x60, .x=0x8f, .y=0xb6, .sp=0x14, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x008f, .value=0x48}, {.addr=0xf626, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xf627, .a=0x28, .x=0x8f, .y=0xb6, .sp=0x14, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x008f, .value=0x48}, {.addr=0xf626, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xf626, .value=0x46, .type=IO_READ},
        {.addr=0xf627, .value=DUMMY, .type=IO_READ},
        {.addr=0x008f, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0227) {
    const struct CPU_State initial_cpu = {.pc=0x0a3c, .a=0x50, .x=0xae, .y=0xf5, .sp=0x3b, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x00ae, .value=0x2e}, {.addr=0x0a3c, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x0a3d, .a=0x7e, .x=0xae, .y=0xf5, .sp=0x3b, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x00ae, .value=0x2e}, {.addr=0x0a3c, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x0a3c, .value=0x46, .type=IO_READ},
        {.addr=0x0a3d, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ae, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0228) {
    const struct CPU_State initial_cpu = {.pc=0x5d5e, .a=0xed, .x=0x67, .y=0xd9, .sp=0x1b, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0xe8}, {.addr=0x5d5e, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x5d5f, .a=0x05, .x=0x67, .y=0xd9, .sp=0x1b, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0xe8}, {.addr=0x5d5e, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x5d5e, .value=0x46, .type=IO_READ},
        {.addr=0x5d5f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0167, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0229) {
    const struct CPU_State initial_cpu = {.pc=0xcf31, .a=0xdc, .x=0x28, .y=0xc9, .sp=0x9b, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x0128, .value=0xaf}, {.addr=0xcf31, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xcf32, .a=0x73, .x=0x28, .y=0xc9, .sp=0x9b, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0128, .value=0xaf}, {.addr=0xcf31, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xcf31, .value=0x46, .type=IO_READ},
        {.addr=0xcf32, .value=DUMMY, .type=IO_READ},
        {.addr=0x0128, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_022A) {
    const struct CPU_State initial_cpu = {.pc=0xb43d, .a=0x0e, .x=0xd1, .y=0x7d, .sp=0x29, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x00d1, .value=0xc4}, {.addr=0xb43d, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xb43e, .a=0xca, .x=0xd1, .y=0x7d, .sp=0x29, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x00d1, .value=0xc4}, {.addr=0xb43d, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xb43d, .value=0x46, .type=IO_READ},
        {.addr=0xb43e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d1, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_022B) {
    const struct CPU_State initial_cpu = {.pc=0xb2dd, .a=0x8a, .x=0xa4, .y=0x0a, .sp=0xc8, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x00a4, .value=0xd0}, {.addr=0xb2dd, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xb2de, .a=0x5a, .x=0xa4, .y=0x0a, .sp=0xc8, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x00a4, .value=0xd0}, {.addr=0xb2dd, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xb2dd, .value=0x46, .type=IO_READ},
        {.addr=0xb2de, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a4, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_022C) {
    const struct CPU_State initial_cpu = {.pc=0xc8d0, .a=0xe4, .x=0x2c, .y=0x47, .sp=0x64, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x002c, .value=0x8a}, {.addr=0xc8d0, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xc8d1, .a=0x6e, .x=0x2c, .y=0x47, .sp=0x64, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x002c, .value=0x8a}, {.addr=0xc8d0, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xc8d0, .value=0x46, .type=IO_READ},
        {.addr=0xc8d1, .value=DUMMY, .type=IO_READ},
        {.addr=0x002c, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_022D) {
    const struct CPU_State initial_cpu = {.pc=0xe5a1, .a=0xaa, .x=0x25, .y=0x8b, .sp=0x05, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x0025, .value=0xa7}, {.addr=0xe5a1, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xe5a2, .a=0x0d, .x=0x25, .y=0x8b, .sp=0x05, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0025, .value=0xa7}, {.addr=0xe5a1, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xe5a1, .value=0x46, .type=IO_READ},
        {.addr=0xe5a2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0025, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_022E) {
    const struct CPU_State initial_cpu = {.pc=0x4bd1, .a=0xcf, .x=0xcc, .y=0x97, .sp=0x2b, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x01cc, .value=0x3e}, {.addr=0x4bd1, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x4bd2, .a=0xf1, .x=0xcc, .y=0x97, .sp=0x2b, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x01cc, .value=0x3e}, {.addr=0x4bd1, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x4bd1, .value=0x46, .type=IO_READ},
        {.addr=0x4bd2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cc, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_022F) {
    const struct CPU_State initial_cpu = {.pc=0x2867, .a=0x3a, .x=0xfc, .y=0xc6, .sp=0x21, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0xb8}, {.addr=0x2867, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x2868, .a=0x82, .x=0xfc, .y=0xc6, .sp=0x21, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0xb8}, {.addr=0x2867, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x2867, .value=0x46, .type=IO_READ},
        {.addr=0x2868, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fc, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0230) {
    const struct CPU_State initial_cpu = {.pc=0x89ec, .a=0xe3, .x=0x4a, .y=0x2f, .sp=0x76, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x004a, .value=0x9e}, {.addr=0x89ec, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x89ed, .a=0x7d, .x=0x4a, .y=0x2f, .sp=0x76, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x004a, .value=0x9e}, {.addr=0x89ec, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x89ec, .value=0x46, .type=IO_READ},
        {.addr=0x89ed, .value=DUMMY, .type=IO_READ},
        {.addr=0x004a, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0231) {
    const struct CPU_State initial_cpu = {.pc=0x9709, .a=0xf4, .x=0x4e, .y=0x0a, .sp=0xc4, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x004e, .value=0x1c}, {.addr=0x9709, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x970a, .a=0xe8, .x=0x4e, .y=0x0a, .sp=0xc4, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x004e, .value=0x1c}, {.addr=0x9709, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x9709, .value=0x46, .type=IO_READ},
        {.addr=0x970a, .value=DUMMY, .type=IO_READ},
        {.addr=0x004e, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0232) {
    const struct CPU_State initial_cpu = {.pc=0xa6fe, .a=0xaf, .x=0x17, .y=0xd4, .sp=0xe1, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x0117, .value=0x2b}, {.addr=0xa6fe, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xa6ff, .a=0x84, .x=0x17, .y=0xd4, .sp=0xe1, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x0117, .value=0x2b}, {.addr=0xa6fe, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xa6fe, .value=0x46, .type=IO_READ},
        {.addr=0xa6ff, .value=DUMMY, .type=IO_READ},
        {.addr=0x0117, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0233) {
    const struct CPU_State initial_cpu = {.pc=0x4c93, .a=0x52, .x=0x33, .y=0x7d, .sp=0x02, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0x1e}, {.addr=0x4c93, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x4c94, .a=0x4c, .x=0x33, .y=0x7d, .sp=0x02, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0x1e}, {.addr=0x4c93, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x4c93, .value=0x46, .type=IO_READ},
        {.addr=0x4c94, .value=DUMMY, .type=IO_READ},
        {.addr=0x0133, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0234) {
    const struct CPU_State initial_cpu = {.pc=0xd140, .a=0xde, .x=0xef, .y=0x29, .sp=0x2d, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x00ef, .value=0x07}, {.addr=0xd140, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xd141, .a=0xd9, .x=0xef, .y=0x29, .sp=0x2d, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x00ef, .value=0x07}, {.addr=0xd140, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xd140, .value=0x46, .type=IO_READ},
        {.addr=0xd141, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ef, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0235) {
    const struct CPU_State initial_cpu = {.pc=0x588f, .a=0x3e, .x=0xb1, .y=0x6e, .sp=0xa9, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x01b1, .value=0x40}, {.addr=0x588f, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x5890, .a=0x7e, .x=0xb1, .y=0x6e, .sp=0xa9, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x01b1, .value=0x40}, {.addr=0x588f, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x588f, .value=0x46, .type=IO_READ},
        {.addr=0x5890, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b1, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0236) {
    const struct CPU_State initial_cpu = {.pc=0x84e4, .a=0x2c, .x=0xbe, .y=0xcf, .sp=0x00, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x01be, .value=0x3d}, {.addr=0x84e4, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x84e5, .a=0x11, .x=0xbe, .y=0xcf, .sp=0x00, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x01be, .value=0x3d}, {.addr=0x84e4, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x84e4, .value=0x46, .type=IO_READ},
        {.addr=0x84e5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01be, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0237) {
    const struct CPU_State initial_cpu = {.pc=0xe7d3, .a=0x52, .x=0x1b, .y=0xac, .sp=0x9d, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0xd9}, {.addr=0xe7d3, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xe7d4, .a=0x8b, .x=0x1b, .y=0xac, .sp=0x9d, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0xd9}, {.addr=0xe7d3, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xe7d3, .value=0x46, .type=IO_READ},
        {.addr=0xe7d4, .value=DUMMY, .type=IO_READ},
        {.addr=0x011b, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0239) {
    const struct CPU_State initial_cpu = {.pc=0x679f, .a=0xee, .x=0x0b, .y=0xff, .sp=0x1e, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x010b, .value=0x7e}, {.addr=0x679f, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x67a0, .a=0x90, .x=0x0b, .y=0xff, .sp=0x1e, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x010b, .value=0x7e}, {.addr=0x679f, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x679f, .value=0x46, .type=IO_READ},
        {.addr=0x67a0, .value=DUMMY, .type=IO_READ},
        {.addr=0x010b, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_023A) {
    const struct CPU_State initial_cpu = {.pc=0x62ab, .a=0x0a, .x=0xd6, .y=0x6f, .sp=0x1c, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x00d6, .value=0x4f}, {.addr=0x62ab, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x62ac, .a=0x45, .x=0xd6, .y=0x6f, .sp=0x1c, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x00d6, .value=0x4f}, {.addr=0x62ab, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x62ab, .value=0x46, .type=IO_READ},
        {.addr=0x62ac, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d6, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_023B) {
    const struct CPU_State initial_cpu = {.pc=0xeaad, .a=0x37, .x=0xb9, .y=0x1b, .sp=0xb4, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0xa6}, {.addr=0xeaad, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xeaae, .a=0x91, .x=0xb9, .y=0x1b, .sp=0xb4, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0xa6}, {.addr=0xeaad, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xeaad, .value=0x46, .type=IO_READ},
        {.addr=0xeaae, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b9, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_023C) {
    const struct CPU_State initial_cpu = {.pc=0xb14e, .a=0xd6, .x=0x97, .y=0x1f, .sp=0xa9, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x0097, .value=0x96}, {.addr=0xb14e, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xb14f, .a=0x40, .x=0x97, .y=0x1f, .sp=0xa9, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x0097, .value=0x96}, {.addr=0xb14e, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xb14e, .value=0x46, .type=IO_READ},
        {.addr=0xb14f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0097, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_023D) {
    const struct CPU_State initial_cpu = {.pc=0x225f, .a=0x83, .x=0x5c, .y=0xfb, .sp=0x57, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x005c, .value=0x71}, {.addr=0x225f, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x2260, .a=0xf2, .x=0x5c, .y=0xfb, .sp=0x57, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x005c, .value=0x71}, {.addr=0x225f, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x225f, .value=0x46, .type=IO_READ},
        {.addr=0x2260, .value=DUMMY, .type=IO_READ},
        {.addr=0x005c, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_023E) {
    const struct CPU_State initial_cpu = {.pc=0x8dc4, .a=0xe8, .x=0xd6, .y=0x0c, .sp=0xdc, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x01d6, .value=0xba}, {.addr=0x8dc4, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x8dc5, .a=0x52, .x=0xd6, .y=0x0c, .sp=0xdc, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x01d6, .value=0xba}, {.addr=0x8dc4, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x8dc4, .value=0x46, .type=IO_READ},
        {.addr=0x8dc5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d6, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_023F) {
    const struct CPU_State initial_cpu = {.pc=0xe733, .a=0x89, .x=0xbb, .y=0x3f, .sp=0x1a, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x01bb, .value=0x20}, {.addr=0xe733, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xe734, .a=0xa9, .x=0xbb, .y=0x3f, .sp=0x1a, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x01bb, .value=0x20}, {.addr=0xe733, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xe733, .value=0x46, .type=IO_READ},
        {.addr=0xe734, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bb, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0240) {
    const struct CPU_State initial_cpu = {.pc=0x719e, .a=0x6a, .x=0x99, .y=0x34, .sp=0xba, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x0199, .value=0x59}, {.addr=0x719e, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x719f, .a=0x33, .x=0x99, .y=0x34, .sp=0xba, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x0199, .value=0x59}, {.addr=0x719e, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x719e, .value=0x46, .type=IO_READ},
        {.addr=0x719f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0199, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0241) {
    const struct CPU_State initial_cpu = {.pc=0x63f4, .a=0x7e, .x=0x41, .y=0xd3, .sp=0x12, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x0041, .value=0x48}, {.addr=0x63f4, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x63f5, .a=0x36, .x=0x41, .y=0xd3, .sp=0x12, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x0041, .value=0x48}, {.addr=0x63f4, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x63f4, .value=0x46, .type=IO_READ},
        {.addr=0x63f5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0041, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0242) {
    const struct CPU_State initial_cpu = {.pc=0x2389, .a=0x60, .x=0xf5, .y=0x53, .sp=0xc3, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x01f5, .value=0xfd}, {.addr=0x2389, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x238a, .a=0x9d, .x=0xf5, .y=0x53, .sp=0xc3, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x01f5, .value=0xfd}, {.addr=0x2389, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x2389, .value=0x46, .type=IO_READ},
        {.addr=0x238a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f5, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0243) {
    const struct CPU_State initial_cpu = {.pc=0x974e, .a=0xd6, .x=0x6e, .y=0xc8, .sp=0xdd, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x006e, .value=0x08}, {.addr=0x974e, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x974f, .a=0xde, .x=0x6e, .y=0xc8, .sp=0xdd, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x006e, .value=0x08}, {.addr=0x974e, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x974e, .value=0x46, .type=IO_READ},
        {.addr=0x974f, .value=DUMMY, .type=IO_READ},
        {.addr=0x006e, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0244) {
    const struct CPU_State initial_cpu = {.pc=0x9ff8, .a=0x54, .x=0xce, .y=0xd2, .sp=0x61, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x01ce, .value=0x0f}, {.addr=0x9ff8, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x9ff9, .a=0x5b, .x=0xce, .y=0xd2, .sp=0x61, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x01ce, .value=0x0f}, {.addr=0x9ff8, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x9ff8, .value=0x46, .type=IO_READ},
        {.addr=0x9ff9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ce, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0245) {
    const struct CPU_State initial_cpu = {.pc=0x67d7, .a=0xac, .x=0x3e, .y=0x90, .sp=0xb2, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x013e, .value=0xd3}, {.addr=0x67d7, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x67d8, .a=0x7f, .x=0x3e, .y=0x90, .sp=0xb2, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x013e, .value=0xd3}, {.addr=0x67d7, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x67d7, .value=0x46, .type=IO_READ},
        {.addr=0x67d8, .value=DUMMY, .type=IO_READ},
        {.addr=0x013e, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0246) {
    const struct CPU_State initial_cpu = {.pc=0xcae8, .a=0x54, .x=0x92, .y=0xaf, .sp=0x16, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x0092, .value=0x9c}, {.addr=0xcae8, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xcae9, .a=0xc8, .x=0x92, .y=0xaf, .sp=0x16, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x0092, .value=0x9c}, {.addr=0xcae8, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xcae8, .value=0x46, .type=IO_READ},
        {.addr=0xcae9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0092, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0247) {
    const struct CPU_State initial_cpu = {.pc=0x92c2, .a=0x99, .x=0xd4, .y=0xf0, .sp=0xf4, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x00d4, .value=0x1b}, {.addr=0x92c2, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x92c3, .a=0x82, .x=0xd4, .y=0xf0, .sp=0xf4, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x00d4, .value=0x1b}, {.addr=0x92c2, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x92c2, .value=0x46, .type=IO_READ},
        {.addr=0x92c3, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d4, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0248) {
    const struct CPU_State initial_cpu = {.pc=0x5765, .a=0xcb, .x=0x4a, .y=0x65, .sp=0xcf, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x004a, .value=0xd1}, {.addr=0x5765, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x5766, .a=0x1a, .x=0x4a, .y=0x65, .sp=0xcf, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x004a, .value=0xd1}, {.addr=0x5765, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x5765, .value=0x46, .type=IO_READ},
        {.addr=0x5766, .value=DUMMY, .type=IO_READ},
        {.addr=0x004a, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_024A) {
    const struct CPU_State initial_cpu = {.pc=0xcd30, .a=0x79, .x=0xcd, .y=0x7e, .sp=0x86, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x00cd, .value=0xd4}, {.addr=0xcd30, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xcd31, .a=0xad, .x=0xcd, .y=0x7e, .sp=0x86, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x00cd, .value=0xd4}, {.addr=0xcd30, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xcd30, .value=0x46, .type=IO_READ},
        {.addr=0xcd31, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cd, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_024B) {
    const struct CPU_State initial_cpu = {.pc=0xe2d7, .a=0xc4, .x=0x22, .y=0xee, .sp=0x3a, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x0122, .value=0x64}, {.addr=0xe2d7, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xe2d8, .a=0xa0, .x=0x22, .y=0xee, .sp=0x3a, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x0122, .value=0x64}, {.addr=0xe2d7, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xe2d7, .value=0x46, .type=IO_READ},
        {.addr=0xe2d8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0122, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_024C) {
    const struct CPU_State initial_cpu = {.pc=0x53b6, .a=0xc3, .x=0x0f, .y=0xe0, .sp=0x34, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x000f, .value=0x82}, {.addr=0x53b6, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x53b7, .a=0x41, .x=0x0f, .y=0xe0, .sp=0x34, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x000f, .value=0x82}, {.addr=0x53b6, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x53b6, .value=0x46, .type=IO_READ},
        {.addr=0x53b7, .value=DUMMY, .type=IO_READ},
        {.addr=0x000f, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_024D) {
    const struct CPU_State initial_cpu = {.pc=0x00a6, .a=0xdf, .x=0x0a, .y=0xc3, .sp=0x69, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x00a6, .value=0x46}, {.addr=0x010a, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0x00a7, .a=0x8c, .x=0x0a, .y=0xc3, .sp=0x69, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x00a6, .value=0x46}, {.addr=0x010a, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0x00a6, .value=0x46, .type=IO_READ},
        {.addr=0x00a7, .value=DUMMY, .type=IO_READ},
        {.addr=0x010a, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_024E) {
    const struct CPU_State initial_cpu = {.pc=0xedf0, .a=0x0f, .x=0xc2, .y=0x8b, .sp=0x18, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x00c2, .value=0x4c}, {.addr=0xedf0, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xedf1, .a=0x43, .x=0xc2, .y=0x8b, .sp=0x18, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x00c2, .value=0x4c}, {.addr=0xedf0, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xedf0, .value=0x46, .type=IO_READ},
        {.addr=0xedf1, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c2, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0250) {
    const struct CPU_State initial_cpu = {.pc=0x0fb9, .a=0x1d, .x=0x68, .y=0x24, .sp=0x72, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x0068, .value=0x66}, {.addr=0x0fb9, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x0fba, .a=0x7b, .x=0x68, .y=0x24, .sp=0x72, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x0068, .value=0x66}, {.addr=0x0fb9, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x0fb9, .value=0x46, .type=IO_READ},
        {.addr=0x0fba, .value=DUMMY, .type=IO_READ},
        {.addr=0x0068, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0251) {
    const struct CPU_State initial_cpu = {.pc=0x44b0, .a=0x3d, .x=0x46, .y=0x40, .sp=0x53, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x0046, .value=0xb8}, {.addr=0x44b0, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x44b1, .a=0x85, .x=0x46, .y=0x40, .sp=0x53, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x0046, .value=0xb8}, {.addr=0x44b0, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x44b0, .value=0x46, .type=IO_READ},
        {.addr=0x44b1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0046, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0252) {
    const struct CPU_State initial_cpu = {.pc=0x602e, .a=0x99, .x=0x92, .y=0x3b, .sp=0xac, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x0092, .value=0xa5}, {.addr=0x602e, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x602f, .a=0x3c, .x=0x92, .y=0x3b, .sp=0xac, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x0092, .value=0xa5}, {.addr=0x602e, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x602e, .value=0x46, .type=IO_READ},
        {.addr=0x602f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0092, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0253) {
    const struct CPU_State initial_cpu = {.pc=0x7b7d, .a=0xd4, .x=0x48, .y=0xd1, .sp=0x26, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x0148, .value=0xb4}, {.addr=0x7b7d, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x7b7e, .a=0x60, .x=0x48, .y=0xd1, .sp=0x26, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0148, .value=0xb4}, {.addr=0x7b7d, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x7b7d, .value=0x46, .type=IO_READ},
        {.addr=0x7b7e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0148, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0254) {
    const struct CPU_State initial_cpu = {.pc=0xb91d, .a=0x1d, .x=0x15, .y=0xcb, .sp=0x48, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x0115, .value=0xff}, {.addr=0xb91d, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xb91e, .a=0xe2, .x=0x15, .y=0xcb, .sp=0x48, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x0115, .value=0xff}, {.addr=0xb91d, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xb91d, .value=0x46, .type=IO_READ},
        {.addr=0xb91e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0115, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0255) {
    const struct CPU_State initial_cpu = {.pc=0xb8db, .a=0x83, .x=0xba, .y=0x6f, .sp=0xb8, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x00ba, .value=0xcb}, {.addr=0xb8db, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xb8dc, .a=0x48, .x=0xba, .y=0x6f, .sp=0xb8, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x00ba, .value=0xcb}, {.addr=0xb8db, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xb8db, .value=0x46, .type=IO_READ},
        {.addr=0xb8dc, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ba, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0256) {
    const struct CPU_State initial_cpu = {.pc=0xef63, .a=0xa6, .x=0x1d, .y=0x8a, .sp=0x7b, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0xbe}, {.addr=0xef63, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xef64, .a=0x18, .x=0x1d, .y=0x8a, .sp=0x7b, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0xbe}, {.addr=0xef63, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xef63, .value=0x46, .type=IO_READ},
        {.addr=0xef64, .value=DUMMY, .type=IO_READ},
        {.addr=0x011d, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0257) {
    const struct CPU_State initial_cpu = {.pc=0x6a35, .a=0x2d, .x=0x2d, .y=0xf0, .sp=0xb7, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x002d, .value=0x69}, {.addr=0x6a35, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x6a36, .a=0x44, .x=0x2d, .y=0xf0, .sp=0xb7, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x002d, .value=0x69}, {.addr=0x6a35, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x6a35, .value=0x46, .type=IO_READ},
        {.addr=0x6a36, .value=DUMMY, .type=IO_READ},
        {.addr=0x002d, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0258) {
    const struct CPU_State initial_cpu = {.pc=0x1997, .a=0x96, .x=0x02, .y=0xeb, .sp=0x6c, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x0102, .value=0xe8}, {.addr=0x1997, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x1998, .a=0x7e, .x=0x02, .y=0xeb, .sp=0x6c, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x0102, .value=0xe8}, {.addr=0x1997, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x1997, .value=0x46, .type=IO_READ},
        {.addr=0x1998, .value=DUMMY, .type=IO_READ},
        {.addr=0x0102, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0259) {
    const struct CPU_State initial_cpu = {.pc=0x596c, .a=0x00, .x=0x2c, .y=0x8e, .sp=0x6e, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x002c, .value=0xcb}, {.addr=0x596c, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x596d, .a=0xcb, .x=0x2c, .y=0x8e, .sp=0x6e, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x002c, .value=0xcb}, {.addr=0x596c, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x596c, .value=0x46, .type=IO_READ},
        {.addr=0x596d, .value=DUMMY, .type=IO_READ},
        {.addr=0x002c, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_025A) {
    const struct CPU_State initial_cpu = {.pc=0xed6d, .a=0xe2, .x=0x5b, .y=0xe5, .sp=0x5b, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x015b, .value=0xa3}, {.addr=0xed6d, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xed6e, .a=0x41, .x=0x5b, .y=0xe5, .sp=0x5b, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x015b, .value=0xa3}, {.addr=0xed6d, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xed6d, .value=0x46, .type=IO_READ},
        {.addr=0xed6e, .value=DUMMY, .type=IO_READ},
        {.addr=0x015b, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_025B) {
    const struct CPU_State initial_cpu = {.pc=0x2cfe, .a=0xa2, .x=0x61, .y=0xfd, .sp=0x50, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0x2f}, {.addr=0x2cfe, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x2cff, .a=0x8d, .x=0x61, .y=0xfd, .sp=0x50, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0x2f}, {.addr=0x2cfe, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x2cfe, .value=0x46, .type=IO_READ},
        {.addr=0x2cff, .value=DUMMY, .type=IO_READ},
        {.addr=0x0161, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_025C) {
    const struct CPU_State initial_cpu = {.pc=0x1788, .a=0x88, .x=0xd3, .y=0x6c, .sp=0xd8, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x00d3, .value=0xb5}, {.addr=0x1788, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x1789, .a=0x3d, .x=0xd3, .y=0x6c, .sp=0xd8, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x00d3, .value=0xb5}, {.addr=0x1788, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x1788, .value=0x46, .type=IO_READ},
        {.addr=0x1789, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d3, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_025D) {
    const struct CPU_State initial_cpu = {.pc=0x66c3, .a=0x14, .x=0x2f, .y=0xcd, .sp=0x80, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x012f, .value=0x57}, {.addr=0x66c3, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x66c4, .a=0x43, .x=0x2f, .y=0xcd, .sp=0x80, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x012f, .value=0x57}, {.addr=0x66c3, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x66c3, .value=0x46, .type=IO_READ},
        {.addr=0x66c4, .value=DUMMY, .type=IO_READ},
        {.addr=0x012f, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_025E) {
    const struct CPU_State initial_cpu = {.pc=0xe620, .a=0x51, .x=0xb8, .y=0x1e, .sp=0x4a, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0x12}, {.addr=0xe620, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xe621, .a=0x43, .x=0xb8, .y=0x1e, .sp=0x4a, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0x12}, {.addr=0xe620, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xe620, .value=0x46, .type=IO_READ},
        {.addr=0xe621, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b8, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_025F) {
    const struct CPU_State initial_cpu = {.pc=0x566f, .a=0x50, .x=0xbc, .y=0x04, .sp=0xfd, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x00bc, .value=0xe1}, {.addr=0x566f, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x5670, .a=0xb1, .x=0xbc, .y=0x04, .sp=0xfd, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x00bc, .value=0xe1}, {.addr=0x566f, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x566f, .value=0x46, .type=IO_READ},
        {.addr=0x5670, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bc, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0260) {
    const struct CPU_State initial_cpu = {.pc=0x9e51, .a=0x05, .x=0x0b, .y=0x2a, .sp=0xf8, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x010b, .value=0x76}, {.addr=0x9e51, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x9e52, .a=0x73, .x=0x0b, .y=0x2a, .sp=0xf8, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x010b, .value=0x76}, {.addr=0x9e51, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x9e51, .value=0x46, .type=IO_READ},
        {.addr=0x9e52, .value=DUMMY, .type=IO_READ},
        {.addr=0x010b, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0261) {
    const struct CPU_State initial_cpu = {.pc=0xd355, .a=0xb6, .x=0x2d, .y=0xa0, .sp=0x67, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x002d, .value=0x88}, {.addr=0xd355, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xd356, .a=0x3e, .x=0x2d, .y=0xa0, .sp=0x67, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x002d, .value=0x88}, {.addr=0xd355, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xd355, .value=0x46, .type=IO_READ},
        {.addr=0xd356, .value=DUMMY, .type=IO_READ},
        {.addr=0x002d, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0262) {
    const struct CPU_State initial_cpu = {.pc=0xa605, .a=0x08, .x=0x21, .y=0xdd, .sp=0x54, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x0121, .value=0xa5}, {.addr=0xa605, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xa606, .a=0xad, .x=0x21, .y=0xdd, .sp=0x54, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x0121, .value=0xa5}, {.addr=0xa605, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xa605, .value=0x46, .type=IO_READ},
        {.addr=0xa606, .value=DUMMY, .type=IO_READ},
        {.addr=0x0121, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0263) {
    const struct CPU_State initial_cpu = {.pc=0x85cc, .a=0xb2, .x=0x5b, .y=0x2c, .sp=0x9b, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x005b, .value=0x74}, {.addr=0x85cc, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x85cd, .a=0xc6, .x=0x5b, .y=0x2c, .sp=0x9b, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x005b, .value=0x74}, {.addr=0x85cc, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x85cc, .value=0x46, .type=IO_READ},
        {.addr=0x85cd, .value=DUMMY, .type=IO_READ},
        {.addr=0x005b, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0264) {
    const struct CPU_State initial_cpu = {.pc=0xc2ea, .a=0xda, .x=0xd8, .y=0x28, .sp=0xa2, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x01d8, .value=0xaa}, {.addr=0xc2ea, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xc2eb, .a=0x70, .x=0xd8, .y=0x28, .sp=0xa2, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x01d8, .value=0xaa}, {.addr=0xc2ea, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xc2ea, .value=0x46, .type=IO_READ},
        {.addr=0xc2eb, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d8, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0265) {
    const struct CPU_State initial_cpu = {.pc=0xecd0, .a=0xfc, .x=0x72, .y=0xb7, .sp=0x79, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0x3f}, {.addr=0xecd0, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xecd1, .a=0xc3, .x=0x72, .y=0xb7, .sp=0x79, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0x3f}, {.addr=0xecd0, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xecd0, .value=0x46, .type=IO_READ},
        {.addr=0xecd1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0172, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0266) {
    const struct CPU_State initial_cpu = {.pc=0x9bf7, .a=0x12, .x=0xdd, .y=0xc3, .sp=0x26, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x01dd, .value=0x75}, {.addr=0x9bf7, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x9bf8, .a=0x67, .x=0xdd, .y=0xc3, .sp=0x26, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x01dd, .value=0x75}, {.addr=0x9bf7, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x9bf7, .value=0x46, .type=IO_READ},
        {.addr=0x9bf8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dd, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0267) {
    const struct CPU_State initial_cpu = {.pc=0xe5af, .a=0x55, .x=0x7c, .y=0x2f, .sp=0xb0, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x007c, .value=0x40}, {.addr=0xe5af, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xe5b0, .a=0x15, .x=0x7c, .y=0x2f, .sp=0xb0, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x007c, .value=0x40}, {.addr=0xe5af, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xe5af, .value=0x46, .type=IO_READ},
        {.addr=0xe5b0, .value=DUMMY, .type=IO_READ},
        {.addr=0x007c, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0268) {
    const struct CPU_State initial_cpu = {.pc=0x07af, .a=0x96, .x=0x02, .y=0x8c, .sp=0x5d, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x0102, .value=0xe4}, {.addr=0x07af, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x07b0, .a=0x72, .x=0x02, .y=0x8c, .sp=0x5d, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x0102, .value=0xe4}, {.addr=0x07af, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x07af, .value=0x46, .type=IO_READ},
        {.addr=0x07b0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0102, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0269) {
    const struct CPU_State initial_cpu = {.pc=0x4953, .a=0xf2, .x=0x41, .y=0x86, .sp=0x10, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x0141, .value=0xfa}, {.addr=0x4953, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x4954, .a=0x08, .x=0x41, .y=0x86, .sp=0x10, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x0141, .value=0xfa}, {.addr=0x4953, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x4953, .value=0x46, .type=IO_READ},
        {.addr=0x4954, .value=DUMMY, .type=IO_READ},
        {.addr=0x0141, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_026A) {
    const struct CPU_State initial_cpu = {.pc=0xe604, .a=0x01, .x=0x9f, .y=0xff, .sp=0xea, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x009f, .value=0xe6}, {.addr=0xe604, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xe605, .a=0xe7, .x=0x9f, .y=0xff, .sp=0xea, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x009f, .value=0xe6}, {.addr=0xe604, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xe604, .value=0x46, .type=IO_READ},
        {.addr=0xe605, .value=DUMMY, .type=IO_READ},
        {.addr=0x009f, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_026B) {
    const struct CPU_State initial_cpu = {.pc=0xe474, .a=0xe0, .x=0x7a, .y=0xb9, .sp=0x85, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x017a, .value=0x2c}, {.addr=0xe474, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xe475, .a=0xcc, .x=0x7a, .y=0xb9, .sp=0x85, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x017a, .value=0x2c}, {.addr=0xe474, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xe474, .value=0x46, .type=IO_READ},
        {.addr=0xe475, .value=DUMMY, .type=IO_READ},
        {.addr=0x017a, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_026C) {
    const struct CPU_State initial_cpu = {.pc=0x6748, .a=0xe0, .x=0x9c, .y=0xa0, .sp=0xd7, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x019c, .value=0x35}, {.addr=0x6748, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x6749, .a=0xd5, .x=0x9c, .y=0xa0, .sp=0xd7, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x019c, .value=0x35}, {.addr=0x6748, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x6748, .value=0x46, .type=IO_READ},
        {.addr=0x6749, .value=DUMMY, .type=IO_READ},
        {.addr=0x019c, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_026D) {
    const struct CPU_State initial_cpu = {.pc=0x879f, .a=0x4f, .x=0x91, .y=0xb7, .sp=0x7d, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x0191, .value=0x51}, {.addr=0x879f, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x87a0, .a=0x1e, .x=0x91, .y=0xb7, .sp=0x7d, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x0191, .value=0x51}, {.addr=0x879f, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x879f, .value=0x46, .type=IO_READ},
        {.addr=0x87a0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0191, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_026E) {
    const struct CPU_State initial_cpu = {.pc=0x799d, .a=0xfe, .x=0xb1, .y=0x09, .sp=0xc8, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x01b1, .value=0xe3}, {.addr=0x799d, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x799e, .a=0x1d, .x=0xb1, .y=0x09, .sp=0xc8, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01b1, .value=0xe3}, {.addr=0x799d, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x799d, .value=0x46, .type=IO_READ},
        {.addr=0x799e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b1, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_026F) {
    const struct CPU_State initial_cpu = {.pc=0x6e1f, .a=0x59, .x=0xb9, .y=0xda, .sp=0x00, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x00b9, .value=0xca}, {.addr=0x6e1f, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x6e20, .a=0x93, .x=0xb9, .y=0xda, .sp=0x00, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x00b9, .value=0xca}, {.addr=0x6e1f, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x6e1f, .value=0x46, .type=IO_READ},
        {.addr=0x6e20, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b9, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0270) {
    const struct CPU_State initial_cpu = {.pc=0xfdc0, .a=0x24, .x=0x59, .y=0x3b, .sp=0x95, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x0059, .value=0x2b}, {.addr=0xfdc0, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xfdc1, .a=0x0f, .x=0x59, .y=0x3b, .sp=0x95, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x0059, .value=0x2b}, {.addr=0xfdc0, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xfdc0, .value=0x46, .type=IO_READ},
        {.addr=0xfdc1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0059, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0271) {
    const struct CPU_State initial_cpu = {.pc=0x6dff, .a=0xba, .x=0x31, .y=0xd8, .sp=0xd7, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x0131, .value=0x5e}, {.addr=0x6dff, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x6e00, .a=0xe4, .x=0x31, .y=0xd8, .sp=0xd7, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x0131, .value=0x5e}, {.addr=0x6dff, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x6dff, .value=0x46, .type=IO_READ},
        {.addr=0x6e00, .value=DUMMY, .type=IO_READ},
        {.addr=0x0131, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0272) {
    const struct CPU_State initial_cpu = {.pc=0x0fbb, .a=0x8b, .x=0x21, .y=0xa5, .sp=0xce, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x0021, .value=0x21}, {.addr=0x0fbb, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x0fbc, .a=0xaa, .x=0x21, .y=0xa5, .sp=0xce, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0021, .value=0x21}, {.addr=0x0fbb, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x0fbb, .value=0x46, .type=IO_READ},
        {.addr=0x0fbc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0021, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0273) {
    const struct CPU_State initial_cpu = {.pc=0x5e19, .a=0xc4, .x=0x5c, .y=0x66, .sp=0x6a, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x005c, .value=0x81}, {.addr=0x5e19, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x5e1a, .a=0x45, .x=0x5c, .y=0x66, .sp=0x6a, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x005c, .value=0x81}, {.addr=0x5e19, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x5e19, .value=0x46, .type=IO_READ},
        {.addr=0x5e1a, .value=DUMMY, .type=IO_READ},
        {.addr=0x005c, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0274) {
    const struct CPU_State initial_cpu = {.pc=0xf8eb, .a=0x6a, .x=0x02, .y=0x7c, .sp=0xdb, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x0102, .value=0x02}, {.addr=0xf8eb, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xf8ec, .a=0x68, .x=0x02, .y=0x7c, .sp=0xdb, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x0102, .value=0x02}, {.addr=0xf8eb, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xf8eb, .value=0x46, .type=IO_READ},
        {.addr=0xf8ec, .value=DUMMY, .type=IO_READ},
        {.addr=0x0102, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0275) {
    const struct CPU_State initial_cpu = {.pc=0xdc46, .a=0x0d, .x=0xef, .y=0x05, .sp=0xa9, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0x72}, {.addr=0xdc46, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xdc47, .a=0x7f, .x=0xef, .y=0x05, .sp=0xa9, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0x72}, {.addr=0xdc46, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xdc46, .value=0x46, .type=IO_READ},
        {.addr=0xdc47, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ef, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0276) {
    const struct CPU_State initial_cpu = {.pc=0xb555, .a=0x14, .x=0x3c, .y=0x6c, .sp=0x1a, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x003c, .value=0xe0}, {.addr=0xb555, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xb556, .a=0xf4, .x=0x3c, .y=0x6c, .sp=0x1a, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x003c, .value=0xe0}, {.addr=0xb555, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xb555, .value=0x46, .type=IO_READ},
        {.addr=0xb556, .value=DUMMY, .type=IO_READ},
        {.addr=0x003c, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0277) {
    const struct CPU_State initial_cpu = {.pc=0x264d, .a=0x6d, .x=0x9e, .y=0x03, .sp=0x32, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0x88}, {.addr=0x264d, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x264e, .a=0xe5, .x=0x9e, .y=0x03, .sp=0x32, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0x88}, {.addr=0x264d, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x264d, .value=0x46, .type=IO_READ},
        {.addr=0x264e, .value=DUMMY, .type=IO_READ},
        {.addr=0x019e, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0278) {
    const struct CPU_State initial_cpu = {.pc=0x5134, .a=0xd3, .x=0x1f, .y=0xa5, .sp=0xb4, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0xe1}, {.addr=0x5134, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x5135, .a=0x32, .x=0x1f, .y=0xa5, .sp=0xb4, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0xe1}, {.addr=0x5134, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x5134, .value=0x46, .type=IO_READ},
        {.addr=0x5135, .value=DUMMY, .type=IO_READ},
        {.addr=0x011f, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0279) {
    const struct CPU_State initial_cpu = {.pc=0x5026, .a=0x46, .x=0x88, .y=0x05, .sp=0x61, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x0088, .value=0xc1}, {.addr=0x5026, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x5027, .a=0x87, .x=0x88, .y=0x05, .sp=0x61, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x0088, .value=0xc1}, {.addr=0x5026, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x5026, .value=0x46, .type=IO_READ},
        {.addr=0x5027, .value=DUMMY, .type=IO_READ},
        {.addr=0x0088, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_027A) {
    const struct CPU_State initial_cpu = {.pc=0xdbc2, .a=0x6b, .x=0xf2, .y=0xb0, .sp=0x0a, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x01f2, .value=0x76}, {.addr=0xdbc2, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xdbc3, .a=0x1d, .x=0xf2, .y=0xb0, .sp=0x0a, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x01f2, .value=0x76}, {.addr=0xdbc2, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xdbc2, .value=0x46, .type=IO_READ},
        {.addr=0xdbc3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f2, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_027B) {
    const struct CPU_State initial_cpu = {.pc=0x5c8d, .a=0xb9, .x=0xaf, .y=0x70, .sp=0xe7, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x00af, .value=0x64}, {.addr=0x5c8d, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x5c8e, .a=0xdd, .x=0xaf, .y=0x70, .sp=0xe7, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x00af, .value=0x64}, {.addr=0x5c8d, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x5c8d, .value=0x46, .type=IO_READ},
        {.addr=0x5c8e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00af, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_027C) {
    const struct CPU_State initial_cpu = {.pc=0xc2be, .a=0xd3, .x=0xe4, .y=0x17, .sp=0x2f, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x01e4, .value=0xf3}, {.addr=0xc2be, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xc2bf, .a=0x20, .x=0xe4, .y=0x17, .sp=0x2f, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x01e4, .value=0xf3}, {.addr=0xc2be, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xc2be, .value=0x46, .type=IO_READ},
        {.addr=0xc2bf, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e4, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_027D) {
    const struct CPU_State initial_cpu = {.pc=0xed59, .a=0xf0, .x=0xa8, .y=0x8f, .sp=0xdc, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x00a8, .value=0xac}, {.addr=0xed59, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xed5a, .a=0x5c, .x=0xa8, .y=0x8f, .sp=0xdc, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x00a8, .value=0xac}, {.addr=0xed59, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xed59, .value=0x46, .type=IO_READ},
        {.addr=0xed5a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a8, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_027E) {
    const struct CPU_State initial_cpu = {.pc=0x3f4a, .a=0x6f, .x=0x75, .y=0x8c, .sp=0xfd, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x0175, .value=0xb3}, {.addr=0x3f4a, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x3f4b, .a=0xdc, .x=0x75, .y=0x8c, .sp=0xfd, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x0175, .value=0xb3}, {.addr=0x3f4a, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x3f4a, .value=0x46, .type=IO_READ},
        {.addr=0x3f4b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0175, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_027F) {
    const struct CPU_State initial_cpu = {.pc=0xf84d, .a=0xcb, .x=0x94, .y=0x20, .sp=0x79, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x0094, .value=0x88}, {.addr=0xf84d, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xf84e, .a=0x43, .x=0x94, .y=0x20, .sp=0x79, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0094, .value=0x88}, {.addr=0xf84d, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xf84d, .value=0x46, .type=IO_READ},
        {.addr=0xf84e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0094, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0280) {
    const struct CPU_State initial_cpu = {.pc=0x315d, .a=0x7a, .x=0xce, .y=0x52, .sp=0x0a, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x01ce, .value=0xa3}, {.addr=0x315d, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x315e, .a=0xd9, .x=0xce, .y=0x52, .sp=0x0a, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x01ce, .value=0xa3}, {.addr=0x315d, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x315d, .value=0x46, .type=IO_READ},
        {.addr=0x315e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ce, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0281) {
    const struct CPU_State initial_cpu = {.pc=0x0c4e, .a=0x34, .x=0x98, .y=0xdf, .sp=0x38, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x0198, .value=0x52}, {.addr=0x0c4e, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x0c4f, .a=0x66, .x=0x98, .y=0xdf, .sp=0x38, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0198, .value=0x52}, {.addr=0x0c4e, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x0c4e, .value=0x46, .type=IO_READ},
        {.addr=0x0c4f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0198, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0282) {
    const struct CPU_State initial_cpu = {.pc=0x68e8, .a=0x23, .x=0x79, .y=0xbb, .sp=0xce, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x0079, .value=0xbd}, {.addr=0x68e8, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x68e9, .a=0x9e, .x=0x79, .y=0xbb, .sp=0xce, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0079, .value=0xbd}, {.addr=0x68e8, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x68e8, .value=0x46, .type=IO_READ},
        {.addr=0x68e9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0079, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0283) {
    const struct CPU_State initial_cpu = {.pc=0xa639, .a=0xfe, .x=0xd9, .y=0x60, .sp=0xbd, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x00d9, .value=0x70}, {.addr=0xa639, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xa63a, .a=0x8e, .x=0xd9, .y=0x60, .sp=0xbd, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x00d9, .value=0x70}, {.addr=0xa639, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xa639, .value=0x46, .type=IO_READ},
        {.addr=0xa63a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d9, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0285) {
    const struct CPU_State initial_cpu = {.pc=0x7d58, .a=0x85, .x=0x4b, .y=0xe6, .sp=0xba, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x014b, .value=0xaf}, {.addr=0x7d58, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x7d59, .a=0x2a, .x=0x4b, .y=0xe6, .sp=0xba, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x014b, .value=0xaf}, {.addr=0x7d58, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x7d58, .value=0x46, .type=IO_READ},
        {.addr=0x7d59, .value=DUMMY, .type=IO_READ},
        {.addr=0x014b, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0286) {
    const struct CPU_State initial_cpu = {.pc=0x66de, .a=0xd7, .x=0xb7, .y=0x8f, .sp=0x2c, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x00b7, .value=0xf2}, {.addr=0x66de, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x66df, .a=0x25, .x=0xb7, .y=0x8f, .sp=0x2c, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x00b7, .value=0xf2}, {.addr=0x66de, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x66de, .value=0x46, .type=IO_READ},
        {.addr=0x66df, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b7, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0287) {
    const struct CPU_State initial_cpu = {.pc=0x248c, .a=0x95, .x=0x24, .y=0x59, .sp=0x43, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x0024, .value=0xdb}, {.addr=0x248c, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x248d, .a=0x4e, .x=0x24, .y=0x59, .sp=0x43, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x0024, .value=0xdb}, {.addr=0x248c, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x248c, .value=0x46, .type=IO_READ},
        {.addr=0x248d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0024, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0288) {
    const struct CPU_State initial_cpu = {.pc=0xfae4, .a=0xfc, .x=0xb7, .y=0x5a, .sp=0x52, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x01b7, .value=0x43}, {.addr=0xfae4, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xfae5, .a=0xbf, .x=0xb7, .y=0x5a, .sp=0x52, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x01b7, .value=0x43}, {.addr=0xfae4, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xfae4, .value=0x46, .type=IO_READ},
        {.addr=0xfae5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b7, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0289) {
    const struct CPU_State initial_cpu = {.pc=0xf910, .a=0x4a, .x=0x26, .y=0x3a, .sp=0xf1, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x0026, .value=0x62}, {.addr=0xf910, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xf911, .a=0x28, .x=0x26, .y=0x3a, .sp=0xf1, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0026, .value=0x62}, {.addr=0xf910, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xf910, .value=0x46, .type=IO_READ},
        {.addr=0xf911, .value=DUMMY, .type=IO_READ},
        {.addr=0x0026, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_028A) {
    const struct CPU_State initial_cpu = {.pc=0xa9a5, .a=0xa4, .x=0xe0, .y=0xc9, .sp=0xe8, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x01e0, .value=0xd7}, {.addr=0xa9a5, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xa9a6, .a=0x73, .x=0xe0, .y=0xc9, .sp=0xe8, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x01e0, .value=0xd7}, {.addr=0xa9a5, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xa9a5, .value=0x46, .type=IO_READ},
        {.addr=0xa9a6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e0, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_028B) {
    const struct CPU_State initial_cpu = {.pc=0x548f, .a=0xd4, .x=0xdc, .y=0xa8, .sp=0xb5, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x00dc, .value=0xa0}, {.addr=0x548f, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x5490, .a=0x74, .x=0xdc, .y=0xa8, .sp=0xb5, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x00dc, .value=0xa0}, {.addr=0x548f, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x548f, .value=0x46, .type=IO_READ},
        {.addr=0x5490, .value=DUMMY, .type=IO_READ},
        {.addr=0x00dc, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_028C) {
    const struct CPU_State initial_cpu = {.pc=0x24a4, .a=0x23, .x=0x47, .y=0xec, .sp=0x24, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x0147, .value=0x2c}, {.addr=0x24a4, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x24a5, .a=0x0f, .x=0x47, .y=0xec, .sp=0x24, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x0147, .value=0x2c}, {.addr=0x24a4, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x24a4, .value=0x46, .type=IO_READ},
        {.addr=0x24a5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0147, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_028D) {
    const struct CPU_State initial_cpu = {.pc=0x3de3, .a=0x42, .x=0x45, .y=0xf8, .sp=0xd0, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x0045, .value=0x7a}, {.addr=0x3de3, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x3de4, .a=0x38, .x=0x45, .y=0xf8, .sp=0xd0, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x0045, .value=0x7a}, {.addr=0x3de3, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x3de3, .value=0x46, .type=IO_READ},
        {.addr=0x3de4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0045, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_028E) {
    const struct CPU_State initial_cpu = {.pc=0x60d1, .a=0x63, .x=0x66, .y=0x6c, .sp=0xae, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0x22}, {.addr=0x60d1, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x60d2, .a=0x41, .x=0x66, .y=0x6c, .sp=0xae, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0x22}, {.addr=0x60d1, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x60d1, .value=0x46, .type=IO_READ},
        {.addr=0x60d2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0166, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_028F) {
    const struct CPU_State initial_cpu = {.pc=0xfb64, .a=0x9a, .x=0xf7, .y=0x1a, .sp=0x6d, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x01f7, .value=0x1e}, {.addr=0xfb64, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xfb65, .a=0x84, .x=0xf7, .y=0x1a, .sp=0x6d, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x01f7, .value=0x1e}, {.addr=0xfb64, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xfb64, .value=0x46, .type=IO_READ},
        {.addr=0xfb65, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f7, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0290) {
    const struct CPU_State initial_cpu = {.pc=0x556d, .a=0x2c, .x=0xb0, .y=0x63, .sp=0x51, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x00b0, .value=0x07}, {.addr=0x556d, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x556e, .a=0x2b, .x=0xb0, .y=0x63, .sp=0x51, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x00b0, .value=0x07}, {.addr=0x556d, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x556d, .value=0x46, .type=IO_READ},
        {.addr=0x556e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b0, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0291) {
    const struct CPU_State initial_cpu = {.pc=0x1eae, .a=0x1f, .x=0x9f, .y=0xd9, .sp=0x91, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x019f, .value=0x19}, {.addr=0x1eae, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x1eaf, .a=0x06, .x=0x9f, .y=0xd9, .sp=0x91, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x019f, .value=0x19}, {.addr=0x1eae, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x1eae, .value=0x46, .type=IO_READ},
        {.addr=0x1eaf, .value=DUMMY, .type=IO_READ},
        {.addr=0x019f, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0292) {
    const struct CPU_State initial_cpu = {.pc=0x988f, .a=0x4f, .x=0xe7, .y=0xb4, .sp=0x41, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x00e7, .value=0x3a}, {.addr=0x988f, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x9890, .a=0x75, .x=0xe7, .y=0xb4, .sp=0x41, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x00e7, .value=0x3a}, {.addr=0x988f, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x988f, .value=0x46, .type=IO_READ},
        {.addr=0x9890, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e7, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0293) {
    const struct CPU_State initial_cpu = {.pc=0x93ac, .a=0xe8, .x=0x7f, .y=0xcd, .sp=0x2f, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x007f, .value=0xa7}, {.addr=0x93ac, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x93ad, .a=0x4f, .x=0x7f, .y=0xcd, .sp=0x2f, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x007f, .value=0xa7}, {.addr=0x93ac, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x93ac, .value=0x46, .type=IO_READ},
        {.addr=0x93ad, .value=DUMMY, .type=IO_READ},
        {.addr=0x007f, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0294) {
    const struct CPU_State initial_cpu = {.pc=0xbda4, .a=0xf2, .x=0x45, .y=0x8c, .sp=0xa6, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x0045, .value=0x54}, {.addr=0xbda4, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xbda5, .a=0xa6, .x=0x45, .y=0x8c, .sp=0xa6, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x0045, .value=0x54}, {.addr=0xbda4, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xbda4, .value=0x46, .type=IO_READ},
        {.addr=0xbda5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0045, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0295) {
    const struct CPU_State initial_cpu = {.pc=0x867b, .a=0x1c, .x=0x9b, .y=0xc5, .sp=0x6a, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x009b, .value=0xed}, {.addr=0x867b, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x867c, .a=0xf1, .x=0x9b, .y=0xc5, .sp=0x6a, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x009b, .value=0xed}, {.addr=0x867b, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x867b, .value=0x46, .type=IO_READ},
        {.addr=0x867c, .value=DUMMY, .type=IO_READ},
        {.addr=0x009b, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0296) {
    const struct CPU_State initial_cpu = {.pc=0xc13d, .a=0xfd, .x=0x51, .y=0x57, .sp=0x31, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x0051, .value=0x00}, {.addr=0xc13d, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xc13e, .a=0xfd, .x=0x51, .y=0x57, .sp=0x31, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x0051, .value=0x00}, {.addr=0xc13d, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xc13d, .value=0x46, .type=IO_READ},
        {.addr=0xc13e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0051, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0297) {
    const struct CPU_State initial_cpu = {.pc=0xc1da, .a=0x25, .x=0xb3, .y=0x3f, .sp=0xd2, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x00b3, .value=0x87}, {.addr=0xc1da, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xc1db, .a=0xa2, .x=0xb3, .y=0x3f, .sp=0xd2, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x00b3, .value=0x87}, {.addr=0xc1da, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xc1da, .value=0x46, .type=IO_READ},
        {.addr=0xc1db, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b3, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0298) {
    const struct CPU_State initial_cpu = {.pc=0x1805, .a=0x1d, .x=0x9b, .y=0xab, .sp=0xc6, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x019b, .value=0xcd}, {.addr=0x1805, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x1806, .a=0xd0, .x=0x9b, .y=0xab, .sp=0xc6, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x019b, .value=0xcd}, {.addr=0x1805, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x1805, .value=0x46, .type=IO_READ},
        {.addr=0x1806, .value=DUMMY, .type=IO_READ},
        {.addr=0x019b, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0299) {
    const struct CPU_State initial_cpu = {.pc=0xc4ce, .a=0x04, .x=0xcf, .y=0x2b, .sp=0x2d, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x01cf, .value=0x9e}, {.addr=0xc4ce, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xc4cf, .a=0x9a, .x=0xcf, .y=0x2b, .sp=0x2d, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x01cf, .value=0x9e}, {.addr=0xc4ce, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xc4ce, .value=0x46, .type=IO_READ},
        {.addr=0xc4cf, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cf, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_029A) {
    const struct CPU_State initial_cpu = {.pc=0x407e, .a=0x50, .x=0xbd, .y=0x12, .sp=0x3f, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x00bd, .value=0xb9}, {.addr=0x407e, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x407f, .a=0xe9, .x=0xbd, .y=0x12, .sp=0x3f, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x00bd, .value=0xb9}, {.addr=0x407e, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x407e, .value=0x46, .type=IO_READ},
        {.addr=0x407f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bd, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_029B) {
    const struct CPU_State initial_cpu = {.pc=0x6038, .a=0xcc, .x=0x9e, .y=0x63, .sp=0xa4, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0xe8}, {.addr=0x6038, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x6039, .a=0x24, .x=0x9e, .y=0x63, .sp=0xa4, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0xe8}, {.addr=0x6038, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x6038, .value=0x46, .type=IO_READ},
        {.addr=0x6039, .value=DUMMY, .type=IO_READ},
        {.addr=0x019e, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_029C) {
    const struct CPU_State initial_cpu = {.pc=0xba50, .a=0x14, .x=0xc9, .y=0xc1, .sp=0x9d, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x01c9, .value=0x15}, {.addr=0xba50, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xba51, .a=0x01, .x=0xc9, .y=0xc1, .sp=0x9d, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x01c9, .value=0x15}, {.addr=0xba50, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xba50, .value=0x46, .type=IO_READ},
        {.addr=0xba51, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c9, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_029D) {
    const struct CPU_State initial_cpu = {.pc=0x556e, .a=0x98, .x=0x7b, .y=0x35, .sp=0x08, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x007b, .value=0xba}, {.addr=0x556e, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x556f, .a=0x22, .x=0x7b, .y=0x35, .sp=0x08, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x007b, .value=0xba}, {.addr=0x556e, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x556e, .value=0x46, .type=IO_READ},
        {.addr=0x556f, .value=DUMMY, .type=IO_READ},
        {.addr=0x007b, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_029E) {
    const struct CPU_State initial_cpu = {.pc=0x7ea5, .a=0x6e, .x=0x85, .y=0xff, .sp=0xd2, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x0085, .value=0xaa}, {.addr=0x7ea5, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x7ea6, .a=0xc4, .x=0x85, .y=0xff, .sp=0xd2, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x0085, .value=0xaa}, {.addr=0x7ea5, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x7ea5, .value=0x46, .type=IO_READ},
        {.addr=0x7ea6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0085, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_029F) {
    const struct CPU_State initial_cpu = {.pc=0x331d, .a=0xe5, .x=0x8e, .y=0x85, .sp=0xa8, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x008e, .value=0x85}, {.addr=0x331d, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x331e, .a=0x60, .x=0x8e, .y=0x85, .sp=0xa8, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x008e, .value=0x85}, {.addr=0x331d, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x331d, .value=0x46, .type=IO_READ},
        {.addr=0x331e, .value=DUMMY, .type=IO_READ},
        {.addr=0x008e, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02A0) {
    const struct CPU_State initial_cpu = {.pc=0x8702, .a=0x6b, .x=0x1a, .y=0x6e, .sp=0x31, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x001a, .value=0xa0}, {.addr=0x8702, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x8703, .a=0xcb, .x=0x1a, .y=0x6e, .sp=0x31, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x001a, .value=0xa0}, {.addr=0x8702, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x8702, .value=0x46, .type=IO_READ},
        {.addr=0x8703, .value=DUMMY, .type=IO_READ},
        {.addr=0x001a, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02A1) {
    const struct CPU_State initial_cpu = {.pc=0x1d57, .a=0x43, .x=0xbf, .y=0xf9, .sp=0x8a, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x00bf, .value=0xe4}, {.addr=0x1d57, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x1d58, .a=0xa7, .x=0xbf, .y=0xf9, .sp=0x8a, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x00bf, .value=0xe4}, {.addr=0x1d57, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x1d57, .value=0x46, .type=IO_READ},
        {.addr=0x1d58, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bf, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02A2) {
    const struct CPU_State initial_cpu = {.pc=0xa4a1, .a=0x07, .x=0x61, .y=0x85, .sp=0xdf, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x0061, .value=0x69}, {.addr=0xa4a1, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xa4a2, .a=0x6e, .x=0x61, .y=0x85, .sp=0xdf, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x0061, .value=0x69}, {.addr=0xa4a1, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xa4a1, .value=0x46, .type=IO_READ},
        {.addr=0xa4a2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0061, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02A3) {
    const struct CPU_State initial_cpu = {.pc=0x0602, .a=0x59, .x=0x62, .y=0xcb, .sp=0x73, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0x8c}, {.addr=0x0602, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x0603, .a=0xd5, .x=0x62, .y=0xcb, .sp=0x73, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0x8c}, {.addr=0x0602, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x0602, .value=0x46, .type=IO_READ},
        {.addr=0x0603, .value=DUMMY, .type=IO_READ},
        {.addr=0x0162, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02A4) {
    const struct CPU_State initial_cpu = {.pc=0x7e5a, .a=0xa0, .x=0x07, .y=0x9a, .sp=0x24, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0xcb}, {.addr=0x7e5a, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x7e5b, .a=0x6b, .x=0x07, .y=0x9a, .sp=0x24, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0xcb}, {.addr=0x7e5a, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x7e5a, .value=0x46, .type=IO_READ},
        {.addr=0x7e5b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0107, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x1621, .a=0xff, .x=0x7b, .y=0x0c, .sp=0xa8, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x007b, .value=0x15}, {.addr=0x1621, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x1622, .a=0xea, .x=0x7b, .y=0x0c, .sp=0xa8, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x007b, .value=0x15}, {.addr=0x1621, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x1621, .value=0x46, .type=IO_READ},
        {.addr=0x1622, .value=DUMMY, .type=IO_READ},
        {.addr=0x007b, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02A6) {
    const struct CPU_State initial_cpu = {.pc=0x6264, .a=0x23, .x=0x34, .y=0x15, .sp=0xcf, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x0134, .value=0xf9}, {.addr=0x6264, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x6265, .a=0xda, .x=0x34, .y=0x15, .sp=0xcf, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0134, .value=0xf9}, {.addr=0x6264, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x6264, .value=0x46, .type=IO_READ},
        {.addr=0x6265, .value=DUMMY, .type=IO_READ},
        {.addr=0x0134, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02A7) {
    const struct CPU_State initial_cpu = {.pc=0x45fa, .a=0xc2, .x=0x3b, .y=0x1e, .sp=0x67, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x003b, .value=0x10}, {.addr=0x45fa, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x45fb, .a=0xd2, .x=0x3b, .y=0x1e, .sp=0x67, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x003b, .value=0x10}, {.addr=0x45fa, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x45fa, .value=0x46, .type=IO_READ},
        {.addr=0x45fb, .value=DUMMY, .type=IO_READ},
        {.addr=0x003b, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02A8) {
    const struct CPU_State initial_cpu = {.pc=0x0d11, .a=0xd0, .x=0x2d, .y=0x72, .sp=0x5b, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x012d, .value=0x79}, {.addr=0x0d11, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x0d12, .a=0xa9, .x=0x2d, .y=0x72, .sp=0x5b, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x012d, .value=0x79}, {.addr=0x0d11, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x0d11, .value=0x46, .type=IO_READ},
        {.addr=0x0d12, .value=DUMMY, .type=IO_READ},
        {.addr=0x012d, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02A9) {
    const struct CPU_State initial_cpu = {.pc=0xe3db, .a=0x04, .x=0x15, .y=0x5e, .sp=0x71, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x0115, .value=0x75}, {.addr=0xe3db, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xe3dc, .a=0x71, .x=0x15, .y=0x5e, .sp=0x71, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x0115, .value=0x75}, {.addr=0xe3db, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xe3db, .value=0x46, .type=IO_READ},
        {.addr=0xe3dc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0115, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02AA) {
    const struct CPU_State initial_cpu = {.pc=0xadc8, .a=0x3c, .x=0x27, .y=0xad, .sp=0x6a, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x0127, .value=0x9d}, {.addr=0xadc8, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xadc9, .a=0xa1, .x=0x27, .y=0xad, .sp=0x6a, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0127, .value=0x9d}, {.addr=0xadc8, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xadc8, .value=0x46, .type=IO_READ},
        {.addr=0xadc9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0127, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02AB) {
    const struct CPU_State initial_cpu = {.pc=0x2873, .a=0x6c, .x=0x22, .y=0xd4, .sp=0xa0, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x0022, .value=0x30}, {.addr=0x2873, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x2874, .a=0x5c, .x=0x22, .y=0xd4, .sp=0xa0, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x0022, .value=0x30}, {.addr=0x2873, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x2873, .value=0x46, .type=IO_READ},
        {.addr=0x2874, .value=DUMMY, .type=IO_READ},
        {.addr=0x0022, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02AD) {
    const struct CPU_State initial_cpu = {.pc=0x0646, .a=0x85, .x=0x7b, .y=0x8b, .sp=0x86, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0xa7}, {.addr=0x0646, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x0647, .a=0x22, .x=0x7b, .y=0x8b, .sp=0x86, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0xa7}, {.addr=0x0646, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x0646, .value=0x46, .type=IO_READ},
        {.addr=0x0647, .value=DUMMY, .type=IO_READ},
        {.addr=0x017b, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02AE) {
    const struct CPU_State initial_cpu = {.pc=0x301a, .a=0xbe, .x=0xee, .y=0xca, .sp=0x6b, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x00ee, .value=0x6c}, {.addr=0x301a, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x301b, .a=0xd2, .x=0xee, .y=0xca, .sp=0x6b, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x00ee, .value=0x6c}, {.addr=0x301a, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x301a, .value=0x46, .type=IO_READ},
        {.addr=0x301b, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ee, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02AF) {
    const struct CPU_State initial_cpu = {.pc=0x5cea, .a=0xa6, .x=0x67, .y=0x7b, .sp=0xaf, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0x2f}, {.addr=0x5cea, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x5ceb, .a=0x89, .x=0x67, .y=0x7b, .sp=0xaf, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0x2f}, {.addr=0x5cea, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x5cea, .value=0x46, .type=IO_READ},
        {.addr=0x5ceb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0167, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02B0) {
    const struct CPU_State initial_cpu = {.pc=0xb584, .a=0xf0, .x=0xba, .y=0x8b, .sp=0xce, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x00ba, .value=0xd0}, {.addr=0xb584, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xb585, .a=0x20, .x=0xba, .y=0x8b, .sp=0xce, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x00ba, .value=0xd0}, {.addr=0xb584, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xb584, .value=0x46, .type=IO_READ},
        {.addr=0xb585, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ba, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02B1) {
    const struct CPU_State initial_cpu = {.pc=0x1a51, .a=0xe2, .x=0x17, .y=0x4f, .sp=0xe7, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x0017, .value=0x02}, {.addr=0x1a51, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x1a52, .a=0xe0, .x=0x17, .y=0x4f, .sp=0xe7, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x0017, .value=0x02}, {.addr=0x1a51, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x1a51, .value=0x46, .type=IO_READ},
        {.addr=0x1a52, .value=DUMMY, .type=IO_READ},
        {.addr=0x0017, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02B2) {
    const struct CPU_State initial_cpu = {.pc=0x65c8, .a=0x28, .x=0xeb, .y=0x45, .sp=0xc7, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x00eb, .value=0x49}, {.addr=0x65c8, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x65c9, .a=0x61, .x=0xeb, .y=0x45, .sp=0xc7, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x00eb, .value=0x49}, {.addr=0x65c8, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x65c8, .value=0x46, .type=IO_READ},
        {.addr=0x65c9, .value=DUMMY, .type=IO_READ},
        {.addr=0x00eb, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02B3) {
    const struct CPU_State initial_cpu = {.pc=0x7917, .a=0xbb, .x=0x7c, .y=0xb7, .sp=0x46, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0x94}, {.addr=0x7917, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x7918, .a=0x2f, .x=0x7c, .y=0xb7, .sp=0x46, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0x94}, {.addr=0x7917, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x7917, .value=0x46, .type=IO_READ},
        {.addr=0x7918, .value=DUMMY, .type=IO_READ},
        {.addr=0x017c, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02B4) {
    const struct CPU_State initial_cpu = {.pc=0xc88c, .a=0xf7, .x=0x14, .y=0xa0, .sp=0xc7, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x0014, .value=0x6e}, {.addr=0xc88c, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xc88d, .a=0x99, .x=0x14, .y=0xa0, .sp=0xc7, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x0014, .value=0x6e}, {.addr=0xc88c, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xc88c, .value=0x46, .type=IO_READ},
        {.addr=0xc88d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0014, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02B5) {
    const struct CPU_State initial_cpu = {.pc=0xe0c3, .a=0x0a, .x=0x9d, .y=0xa7, .sp=0xf9, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x009d, .value=0x9e}, {.addr=0xe0c3, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xe0c4, .a=0x94, .x=0x9d, .y=0xa7, .sp=0xf9, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x009d, .value=0x9e}, {.addr=0xe0c3, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xe0c3, .value=0x46, .type=IO_READ},
        {.addr=0xe0c4, .value=DUMMY, .type=IO_READ},
        {.addr=0x009d, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02B6) {
    const struct CPU_State initial_cpu = {.pc=0x076f, .a=0x69, .x=0x0f, .y=0x7d, .sp=0xb7, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x010f, .value=0xc8}, {.addr=0x076f, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x0770, .a=0xa1, .x=0x0f, .y=0x7d, .sp=0xb7, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x010f, .value=0xc8}, {.addr=0x076f, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x076f, .value=0x46, .type=IO_READ},
        {.addr=0x0770, .value=DUMMY, .type=IO_READ},
        {.addr=0x010f, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02B7) {
    const struct CPU_State initial_cpu = {.pc=0x3d47, .a=0x23, .x=0x95, .y=0x63, .sp=0x81, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x0195, .value=0xfc}, {.addr=0x3d47, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x3d48, .a=0xdf, .x=0x95, .y=0x63, .sp=0x81, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x0195, .value=0xfc}, {.addr=0x3d47, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x3d47, .value=0x46, .type=IO_READ},
        {.addr=0x3d48, .value=DUMMY, .type=IO_READ},
        {.addr=0x0195, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02B8) {
    const struct CPU_State initial_cpu = {.pc=0x58ab, .a=0x1f, .x=0x66, .y=0x5d, .sp=0x60, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x0066, .value=0x7f}, {.addr=0x58ab, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x58ac, .a=0x60, .x=0x66, .y=0x5d, .sp=0x60, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x0066, .value=0x7f}, {.addr=0x58ab, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x58ab, .value=0x46, .type=IO_READ},
        {.addr=0x58ac, .value=DUMMY, .type=IO_READ},
        {.addr=0x0066, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02B9) {
    const struct CPU_State initial_cpu = {.pc=0xf326, .a=0xf9, .x=0x48, .y=0xf5, .sp=0x21, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x0048, .value=0x59}, {.addr=0xf326, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xf327, .a=0xa0, .x=0x48, .y=0xf5, .sp=0x21, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x0048, .value=0x59}, {.addr=0xf326, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xf326, .value=0x46, .type=IO_READ},
        {.addr=0xf327, .value=DUMMY, .type=IO_READ},
        {.addr=0x0048, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02BA) {
    const struct CPU_State initial_cpu = {.pc=0xe063, .a=0x79, .x=0x3d, .y=0xc6, .sp=0x8f, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x003d, .value=0x52}, {.addr=0xe063, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xe064, .a=0x2b, .x=0x3d, .y=0xc6, .sp=0x8f, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x003d, .value=0x52}, {.addr=0xe063, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xe063, .value=0x46, .type=IO_READ},
        {.addr=0xe064, .value=DUMMY, .type=IO_READ},
        {.addr=0x003d, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02BB) {
    const struct CPU_State initial_cpu = {.pc=0xe6e5, .a=0x0b, .x=0x29, .y=0x9a, .sp=0x06, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x0129, .value=0xdf}, {.addr=0xe6e5, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xe6e6, .a=0xd4, .x=0x29, .y=0x9a, .sp=0x06, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x0129, .value=0xdf}, {.addr=0xe6e5, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xe6e5, .value=0x46, .type=IO_READ},
        {.addr=0xe6e6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0129, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02BC) {
    const struct CPU_State initial_cpu = {.pc=0x32b5, .a=0x29, .x=0x10, .y=0xdd, .sp=0x6e, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x0010, .value=0x77}, {.addr=0x32b5, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x32b6, .a=0x5e, .x=0x10, .y=0xdd, .sp=0x6e, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x0010, .value=0x77}, {.addr=0x32b5, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x32b5, .value=0x46, .type=IO_READ},
        {.addr=0x32b6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0010, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02BD) {
    const struct CPU_State initial_cpu = {.pc=0x1ec8, .a=0x5f, .x=0xfb, .y=0x9f, .sp=0x75, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x01fb, .value=0xd4}, {.addr=0x1ec8, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x1ec9, .a=0x8b, .x=0xfb, .y=0x9f, .sp=0x75, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x01fb, .value=0xd4}, {.addr=0x1ec8, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x1ec8, .value=0x46, .type=IO_READ},
        {.addr=0x1ec9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fb, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02BE) {
    const struct CPU_State initial_cpu = {.pc=0x3146, .a=0xb8, .x=0x60, .y=0xda, .sp=0xb3, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x0160, .value=0xcc}, {.addr=0x3146, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x3147, .a=0x74, .x=0x60, .y=0xda, .sp=0xb3, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x0160, .value=0xcc}, {.addr=0x3146, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x3146, .value=0x46, .type=IO_READ},
        {.addr=0x3147, .value=DUMMY, .type=IO_READ},
        {.addr=0x0160, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02BF) {
    const struct CPU_State initial_cpu = {.pc=0x6822, .a=0x62, .x=0x40, .y=0xd9, .sp=0x05, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x0140, .value=0xfd}, {.addr=0x6822, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x6823, .a=0x9f, .x=0x40, .y=0xd9, .sp=0x05, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x0140, .value=0xfd}, {.addr=0x6822, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x6822, .value=0x46, .type=IO_READ},
        {.addr=0x6823, .value=DUMMY, .type=IO_READ},
        {.addr=0x0140, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02C0) {
    const struct CPU_State initial_cpu = {.pc=0xfdf2, .a=0x2d, .x=0x97, .y=0x0c, .sp=0x65, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x0197, .value=0x1a}, {.addr=0xfdf2, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xfdf3, .a=0x37, .x=0x97, .y=0x0c, .sp=0x65, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x0197, .value=0x1a}, {.addr=0xfdf2, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xfdf2, .value=0x46, .type=IO_READ},
        {.addr=0xfdf3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0197, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02C1) {
    const struct CPU_State initial_cpu = {.pc=0xb879, .a=0xfd, .x=0x5b, .y=0x3b, .sp=0x64, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x005b, .value=0x9b}, {.addr=0xb879, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xb87a, .a=0x66, .x=0x5b, .y=0x3b, .sp=0x64, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x005b, .value=0x9b}, {.addr=0xb879, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xb879, .value=0x46, .type=IO_READ},
        {.addr=0xb87a, .value=DUMMY, .type=IO_READ},
        {.addr=0x005b, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02C2) {
    const struct CPU_State initial_cpu = {.pc=0xf97d, .a=0x6c, .x=0x83, .y=0x68, .sp=0x59, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x0183, .value=0xa0}, {.addr=0xf97d, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xf97e, .a=0xcc, .x=0x83, .y=0x68, .sp=0x59, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x0183, .value=0xa0}, {.addr=0xf97d, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xf97d, .value=0x46, .type=IO_READ},
        {.addr=0xf97e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0183, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02C3) {
    const struct CPU_State initial_cpu = {.pc=0xb7f0, .a=0x43, .x=0x7a, .y=0xb8, .sp=0x28, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x007a, .value=0x90}, {.addr=0xb7f0, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xb7f1, .a=0xd3, .x=0x7a, .y=0xb8, .sp=0x28, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x007a, .value=0x90}, {.addr=0xb7f0, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xb7f0, .value=0x46, .type=IO_READ},
        {.addr=0xb7f1, .value=DUMMY, .type=IO_READ},
        {.addr=0x007a, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02C4) {
    const struct CPU_State initial_cpu = {.pc=0x0750, .a=0xa2, .x=0x6e, .y=0x25, .sp=0x5a, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x016e, .value=0xb9}, {.addr=0x0750, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x0751, .a=0x1b, .x=0x6e, .y=0x25, .sp=0x5a, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x016e, .value=0xb9}, {.addr=0x0750, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x0750, .value=0x46, .type=IO_READ},
        {.addr=0x0751, .value=DUMMY, .type=IO_READ},
        {.addr=0x016e, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02C5) {
    const struct CPU_State initial_cpu = {.pc=0xd7d7, .a=0xab, .x=0x13, .y=0xc3, .sp=0x03, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0x57}, {.addr=0xd7d7, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xd7d8, .a=0xfc, .x=0x13, .y=0xc3, .sp=0x03, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0x57}, {.addr=0xd7d7, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xd7d7, .value=0x46, .type=IO_READ},
        {.addr=0xd7d8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0113, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02C7) {
    const struct CPU_State initial_cpu = {.pc=0xd48d, .a=0x14, .x=0xa2, .y=0xa6, .sp=0xe5, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x01a2, .value=0x65}, {.addr=0xd48d, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xd48e, .a=0x71, .x=0xa2, .y=0xa6, .sp=0xe5, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x01a2, .value=0x65}, {.addr=0xd48d, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xd48d, .value=0x46, .type=IO_READ},
        {.addr=0xd48e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a2, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02C8) {
    const struct CPU_State initial_cpu = {.pc=0x3521, .a=0x9c, .x=0xdd, .y=0x6f, .sp=0x8a, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x01dd, .value=0x27}, {.addr=0x3521, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x3522, .a=0xbb, .x=0xdd, .y=0x6f, .sp=0x8a, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x01dd, .value=0x27}, {.addr=0x3521, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x3521, .value=0x46, .type=IO_READ},
        {.addr=0x3522, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dd, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02C9) {
    const struct CPU_State initial_cpu = {.pc=0x6351, .a=0xb2, .x=0x7b, .y=0xc7, .sp=0x87, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x007b, .value=0x11}, {.addr=0x6351, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x6352, .a=0xa3, .x=0x7b, .y=0xc7, .sp=0x87, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x007b, .value=0x11}, {.addr=0x6351, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x6351, .value=0x46, .type=IO_READ},
        {.addr=0x6352, .value=DUMMY, .type=IO_READ},
        {.addr=0x007b, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02CA) {
    const struct CPU_State initial_cpu = {.pc=0x69f6, .a=0x40, .x=0x50, .y=0x2d, .sp=0x2e, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x0050, .value=0x3d}, {.addr=0x69f6, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x69f7, .a=0x7d, .x=0x50, .y=0x2d, .sp=0x2e, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x0050, .value=0x3d}, {.addr=0x69f6, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x69f6, .value=0x46, .type=IO_READ},
        {.addr=0x69f7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0050, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02CB) {
    const struct CPU_State initial_cpu = {.pc=0xd539, .a=0xe7, .x=0xdc, .y=0x73, .sp=0x1e, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x01dc, .value=0x93}, {.addr=0xd539, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xd53a, .a=0x74, .x=0xdc, .y=0x73, .sp=0x1e, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x01dc, .value=0x93}, {.addr=0xd539, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xd539, .value=0x46, .type=IO_READ},
        {.addr=0xd53a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dc, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02CD) {
    const struct CPU_State initial_cpu = {.pc=0x869e, .a=0x03, .x=0x1e, .y=0x34, .sp=0x50, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x001e, .value=0xe0}, {.addr=0x869e, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x869f, .a=0xe3, .x=0x1e, .y=0x34, .sp=0x50, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x001e, .value=0xe0}, {.addr=0x869e, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x869e, .value=0x46, .type=IO_READ},
        {.addr=0x869f, .value=DUMMY, .type=IO_READ},
        {.addr=0x001e, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02CE) {
    const struct CPU_State initial_cpu = {.pc=0x71e3, .a=0x68, .x=0xf2, .y=0x6a, .sp=0xef, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x01f2, .value=0x8f}, {.addr=0x71e3, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x71e4, .a=0xe7, .x=0xf2, .y=0x6a, .sp=0xef, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x01f2, .value=0x8f}, {.addr=0x71e3, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x71e3, .value=0x46, .type=IO_READ},
        {.addr=0x71e4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f2, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02CF) {
    const struct CPU_State initial_cpu = {.pc=0xe33d, .a=0xe7, .x=0x63, .y=0xaf, .sp=0xa4, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x0163, .value=0xcb}, {.addr=0xe33d, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xe33e, .a=0x2c, .x=0x63, .y=0xaf, .sp=0xa4, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x0163, .value=0xcb}, {.addr=0xe33d, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xe33d, .value=0x46, .type=IO_READ},
        {.addr=0xe33e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0163, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02D0) {
    const struct CPU_State initial_cpu = {.pc=0x697a, .a=0xfd, .x=0x8d, .y=0x16, .sp=0x06, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x008d, .value=0x48}, {.addr=0x697a, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x697b, .a=0xb5, .x=0x8d, .y=0x16, .sp=0x06, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x008d, .value=0x48}, {.addr=0x697a, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x697a, .value=0x46, .type=IO_READ},
        {.addr=0x697b, .value=DUMMY, .type=IO_READ},
        {.addr=0x008d, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02D1) {
    const struct CPU_State initial_cpu = {.pc=0x6f2d, .a=0x40, .x=0x4e, .y=0x65, .sp=0x57, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x004e, .value=0x48}, {.addr=0x6f2d, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x6f2e, .a=0x08, .x=0x4e, .y=0x65, .sp=0x57, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x004e, .value=0x48}, {.addr=0x6f2d, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x6f2d, .value=0x46, .type=IO_READ},
        {.addr=0x6f2e, .value=DUMMY, .type=IO_READ},
        {.addr=0x004e, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x3e5e, .a=0xa5, .x=0xab, .y=0x0a, .sp=0x61, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x01ab, .value=0x5b}, {.addr=0x3e5e, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x3e5f, .a=0xfe, .x=0xab, .y=0x0a, .sp=0x61, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x01ab, .value=0x5b}, {.addr=0x3e5e, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x3e5e, .value=0x46, .type=IO_READ},
        {.addr=0x3e5f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ab, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02D3) {
    const struct CPU_State initial_cpu = {.pc=0x63d3, .a=0x8c, .x=0x08, .y=0x98, .sp=0x53, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x0008, .value=0x82}, {.addr=0x63d3, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x63d4, .a=0x0e, .x=0x08, .y=0x98, .sp=0x53, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0008, .value=0x82}, {.addr=0x63d3, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x63d3, .value=0x46, .type=IO_READ},
        {.addr=0x63d4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0008, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02D4) {
    const struct CPU_State initial_cpu = {.pc=0xdb7d, .a=0x0c, .x=0x7d, .y=0x0c, .sp=0x79, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x007d, .value=0xc5}, {.addr=0xdb7d, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xdb7e, .a=0xc9, .x=0x7d, .y=0x0c, .sp=0x79, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x007d, .value=0xc5}, {.addr=0xdb7d, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xdb7d, .value=0x46, .type=IO_READ},
        {.addr=0xdb7e, .value=DUMMY, .type=IO_READ},
        {.addr=0x007d, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02D5) {
    const struct CPU_State initial_cpu = {.pc=0x1341, .a=0x89, .x=0x91, .y=0x92, .sp=0xe6, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x0091, .value=0x87}, {.addr=0x1341, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x1342, .a=0x0e, .x=0x91, .y=0x92, .sp=0xe6, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0091, .value=0x87}, {.addr=0x1341, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x1341, .value=0x46, .type=IO_READ},
        {.addr=0x1342, .value=DUMMY, .type=IO_READ},
        {.addr=0x0091, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02D6) {
    const struct CPU_State initial_cpu = {.pc=0xf598, .a=0x35, .x=0xcd, .y=0x62, .sp=0x72, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x01cd, .value=0x69}, {.addr=0xf598, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xf599, .a=0x5c, .x=0xcd, .y=0x62, .sp=0x72, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x01cd, .value=0x69}, {.addr=0xf598, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xf598, .value=0x46, .type=IO_READ},
        {.addr=0xf599, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cd, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02D7) {
    const struct CPU_State initial_cpu = {.pc=0xfbd1, .a=0x1e, .x=0x8c, .y=0xc9, .sp=0x3e, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x008c, .value=0x02}, {.addr=0xfbd1, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xfbd2, .a=0x1c, .x=0x8c, .y=0xc9, .sp=0x3e, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x008c, .value=0x02}, {.addr=0xfbd1, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xfbd1, .value=0x46, .type=IO_READ},
        {.addr=0xfbd2, .value=DUMMY, .type=IO_READ},
        {.addr=0x008c, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02D8) {
    const struct CPU_State initial_cpu = {.pc=0x9281, .a=0xd5, .x=0x34, .y=0x3d, .sp=0x1e, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x0134, .value=0xd3}, {.addr=0x9281, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x9282, .a=0x06, .x=0x34, .y=0x3d, .sp=0x1e, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0134, .value=0xd3}, {.addr=0x9281, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x9281, .value=0x46, .type=IO_READ},
        {.addr=0x9282, .value=DUMMY, .type=IO_READ},
        {.addr=0x0134, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02D9) {
    const struct CPU_State initial_cpu = {.pc=0xbff0, .a=0x9a, .x=0xdd, .y=0x40, .sp=0x8e, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x01dd, .value=0x3c}, {.addr=0xbff0, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xbff1, .a=0xa6, .x=0xdd, .y=0x40, .sp=0x8e, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x01dd, .value=0x3c}, {.addr=0xbff0, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xbff0, .value=0x46, .type=IO_READ},
        {.addr=0xbff1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dd, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02DA) {
    const struct CPU_State initial_cpu = {.pc=0xae5c, .a=0x11, .x=0x4e, .y=0xed, .sp=0x0f, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0x03}, {.addr=0xae5c, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xae5d, .a=0x12, .x=0x4e, .y=0xed, .sp=0x0f, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0x03}, {.addr=0xae5c, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xae5c, .value=0x46, .type=IO_READ},
        {.addr=0xae5d, .value=DUMMY, .type=IO_READ},
        {.addr=0x014e, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02DB) {
    const struct CPU_State initial_cpu = {.pc=0xed1c, .a=0x0a, .x=0x56, .y=0x38, .sp=0xd2, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x0056, .value=0x3a}, {.addr=0xed1c, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xed1d, .a=0x30, .x=0x56, .y=0x38, .sp=0xd2, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x0056, .value=0x3a}, {.addr=0xed1c, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xed1c, .value=0x46, .type=IO_READ},
        {.addr=0xed1d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0056, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02DC) {
    const struct CPU_State initial_cpu = {.pc=0xddaf, .a=0xa5, .x=0x56, .y=0xee, .sp=0xad, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x0056, .value=0x83}, {.addr=0xddaf, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xddb0, .a=0x26, .x=0x56, .y=0xee, .sp=0xad, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x0056, .value=0x83}, {.addr=0xddaf, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xddaf, .value=0x46, .type=IO_READ},
        {.addr=0xddb0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0056, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02DD) {
    const struct CPU_State initial_cpu = {.pc=0x3756, .a=0xc3, .x=0x79, .y=0x75, .sp=0x1b, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x0179, .value=0x0e}, {.addr=0x3756, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x3757, .a=0xcd, .x=0x79, .y=0x75, .sp=0x1b, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x0179, .value=0x0e}, {.addr=0x3756, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x3756, .value=0x46, .type=IO_READ},
        {.addr=0x3757, .value=DUMMY, .type=IO_READ},
        {.addr=0x0179, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02DE) {
    const struct CPU_State initial_cpu = {.pc=0xe119, .a=0x0d, .x=0x9e, .y=0x1a, .sp=0xb2, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x009e, .value=0x83}, {.addr=0xe119, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xe11a, .a=0x8e, .x=0x9e, .y=0x1a, .sp=0xb2, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x009e, .value=0x83}, {.addr=0xe119, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xe119, .value=0x46, .type=IO_READ},
        {.addr=0xe11a, .value=DUMMY, .type=IO_READ},
        {.addr=0x009e, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02DF) {
    const struct CPU_State initial_cpu = {.pc=0xf5a4, .a=0x96, .x=0x1c, .y=0xdc, .sp=0x72, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x011c, .value=0x77}, {.addr=0xf5a4, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xf5a5, .a=0xe1, .x=0x1c, .y=0xdc, .sp=0x72, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x011c, .value=0x77}, {.addr=0xf5a4, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xf5a4, .value=0x46, .type=IO_READ},
        {.addr=0xf5a5, .value=DUMMY, .type=IO_READ},
        {.addr=0x011c, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02E0) {
    const struct CPU_State initial_cpu = {.pc=0x7b45, .a=0x7d, .x=0x79, .y=0x23, .sp=0x6b, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x0079, .value=0xc4}, {.addr=0x7b45, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x7b46, .a=0xb9, .x=0x79, .y=0x23, .sp=0x6b, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x0079, .value=0xc4}, {.addr=0x7b45, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x7b45, .value=0x46, .type=IO_READ},
        {.addr=0x7b46, .value=DUMMY, .type=IO_READ},
        {.addr=0x0079, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02E1) {
    const struct CPU_State initial_cpu = {.pc=0x1097, .a=0x59, .x=0x05, .y=0xb1, .sp=0x95, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x0105, .value=0x29}, {.addr=0x1097, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x1098, .a=0x70, .x=0x05, .y=0xb1, .sp=0x95, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x0105, .value=0x29}, {.addr=0x1097, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x1097, .value=0x46, .type=IO_READ},
        {.addr=0x1098, .value=DUMMY, .type=IO_READ},
        {.addr=0x0105, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02E2) {
    const struct CPU_State initial_cpu = {.pc=0x655c, .a=0x59, .x=0xdd, .y=0x34, .sp=0x60, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x00dd, .value=0xee}, {.addr=0x655c, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x655d, .a=0xb7, .x=0xdd, .y=0x34, .sp=0x60, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x00dd, .value=0xee}, {.addr=0x655c, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x655c, .value=0x46, .type=IO_READ},
        {.addr=0x655d, .value=DUMMY, .type=IO_READ},
        {.addr=0x00dd, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02E3) {
    const struct CPU_State initial_cpu = {.pc=0x5d89, .a=0x4d, .x=0xc9, .y=0xeb, .sp=0x29, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x00c9, .value=0x87}, {.addr=0x5d89, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x5d8a, .a=0xca, .x=0xc9, .y=0xeb, .sp=0x29, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x00c9, .value=0x87}, {.addr=0x5d89, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x5d89, .value=0x46, .type=IO_READ},
        {.addr=0x5d8a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c9, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02E4) {
    const struct CPU_State initial_cpu = {.pc=0xc292, .a=0x5a, .x=0x81, .y=0x28, .sp=0x05, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0x43}, {.addr=0xc292, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xc293, .a=0x19, .x=0x81, .y=0x28, .sp=0x05, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0x43}, {.addr=0xc292, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xc292, .value=0x46, .type=IO_READ},
        {.addr=0xc293, .value=DUMMY, .type=IO_READ},
        {.addr=0x0181, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02E5) {
    const struct CPU_State initial_cpu = {.pc=0xce22, .a=0x85, .x=0x02, .y=0xe1, .sp=0xf7, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x0102, .value=0xe3}, {.addr=0xce22, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xce23, .a=0x66, .x=0x02, .y=0xe1, .sp=0xf7, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x0102, .value=0xe3}, {.addr=0xce22, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xce22, .value=0x46, .type=IO_READ},
        {.addr=0xce23, .value=DUMMY, .type=IO_READ},
        {.addr=0x0102, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02E6) {
    const struct CPU_State initial_cpu = {.pc=0xb634, .a=0x8d, .x=0xc3, .y=0x48, .sp=0x4b, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x00c3, .value=0x5f}, {.addr=0xb634, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xb635, .a=0xd2, .x=0xc3, .y=0x48, .sp=0x4b, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x00c3, .value=0x5f}, {.addr=0xb634, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xb634, .value=0x46, .type=IO_READ},
        {.addr=0xb635, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c3, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02E7) {
    const struct CPU_State initial_cpu = {.pc=0x8392, .a=0x69, .x=0xe0, .y=0xe8, .sp=0xa9, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x01e0, .value=0xe0}, {.addr=0x8392, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x8393, .a=0x89, .x=0xe0, .y=0xe8, .sp=0xa9, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x01e0, .value=0xe0}, {.addr=0x8392, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x8392, .value=0x46, .type=IO_READ},
        {.addr=0x8393, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e0, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02E8) {
    const struct CPU_State initial_cpu = {.pc=0x4f10, .a=0x4e, .x=0x31, .y=0xa6, .sp=0x5f, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x0131, .value=0xd4}, {.addr=0x4f10, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x4f11, .a=0x9a, .x=0x31, .y=0xa6, .sp=0x5f, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x0131, .value=0xd4}, {.addr=0x4f10, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x4f10, .value=0x46, .type=IO_READ},
        {.addr=0x4f11, .value=DUMMY, .type=IO_READ},
        {.addr=0x0131, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02E9) {
    const struct CPU_State initial_cpu = {.pc=0xa48d, .a=0x9b, .x=0x8f, .y=0xbb, .sp=0xb6, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x018f, .value=0x32}, {.addr=0xa48d, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xa48e, .a=0xa9, .x=0x8f, .y=0xbb, .sp=0xb6, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x018f, .value=0x32}, {.addr=0xa48d, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xa48d, .value=0x46, .type=IO_READ},
        {.addr=0xa48e, .value=DUMMY, .type=IO_READ},
        {.addr=0x018f, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02EB) {
    const struct CPU_State initial_cpu = {.pc=0x9203, .a=0xe1, .x=0x9e, .y=0x9e, .sp=0x0a, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0x2a}, {.addr=0x9203, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x9204, .a=0xcb, .x=0x9e, .y=0x9e, .sp=0x0a, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0x2a}, {.addr=0x9203, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x9203, .value=0x46, .type=IO_READ},
        {.addr=0x9204, .value=DUMMY, .type=IO_READ},
        {.addr=0x019e, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02EC) {
    const struct CPU_State initial_cpu = {.pc=0xcdf5, .a=0x64, .x=0xc8, .y=0x1a, .sp=0x12, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x01c8, .value=0xbf}, {.addr=0xcdf5, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xcdf6, .a=0xdb, .x=0xc8, .y=0x1a, .sp=0x12, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x01c8, .value=0xbf}, {.addr=0xcdf5, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xcdf5, .value=0x46, .type=IO_READ},
        {.addr=0xcdf6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c8, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02ED) {
    const struct CPU_State initial_cpu = {.pc=0x51fc, .a=0x73, .x=0x92, .y=0xd1, .sp=0x34, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x0192, .value=0x1e}, {.addr=0x51fc, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x51fd, .a=0x6d, .x=0x92, .y=0xd1, .sp=0x34, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0192, .value=0x1e}, {.addr=0x51fc, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x51fc, .value=0x46, .type=IO_READ},
        {.addr=0x51fd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0192, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02EE) {
    const struct CPU_State initial_cpu = {.pc=0x8eca, .a=0xfb, .x=0xad, .y=0xba, .sp=0xbb, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x00ad, .value=0x6d}, {.addr=0x8eca, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x8ecb, .a=0x96, .x=0xad, .y=0xba, .sp=0xbb, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x00ad, .value=0x6d}, {.addr=0x8eca, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x8eca, .value=0x46, .type=IO_READ},
        {.addr=0x8ecb, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ad, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02EF) {
    const struct CPU_State initial_cpu = {.pc=0xd2e3, .a=0xb9, .x=0x43, .y=0xdb, .sp=0x2f, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0x74}, {.addr=0xd2e3, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xd2e4, .a=0xcd, .x=0x43, .y=0xdb, .sp=0x2f, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0x74}, {.addr=0xd2e3, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xd2e3, .value=0x46, .type=IO_READ},
        {.addr=0xd2e4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0143, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02F0) {
    const struct CPU_State initial_cpu = {.pc=0x79df, .a=0xac, .x=0x32, .y=0x19, .sp=0x11, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x0132, .value=0xa1}, {.addr=0x79df, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x79e0, .a=0x0d, .x=0x32, .y=0x19, .sp=0x11, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x0132, .value=0xa1}, {.addr=0x79df, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x79df, .value=0x46, .type=IO_READ},
        {.addr=0x79e0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0132, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02F1) {
    const struct CPU_State initial_cpu = {.pc=0x8182, .a=0xf2, .x=0x0a, .y=0x94, .sp=0x29, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0xb7}, {.addr=0x8182, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x8183, .a=0x45, .x=0x0a, .y=0x94, .sp=0x29, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0xb7}, {.addr=0x8182, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x8182, .value=0x46, .type=IO_READ},
        {.addr=0x8183, .value=DUMMY, .type=IO_READ},
        {.addr=0x010a, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02F2) {
    const struct CPU_State initial_cpu = {.pc=0xb8ac, .a=0x5b, .x=0xe8, .y=0x8a, .sp=0x46, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x00e8, .value=0xa5}, {.addr=0xb8ac, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xb8ad, .a=0xfe, .x=0xe8, .y=0x8a, .sp=0x46, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x00e8, .value=0xa5}, {.addr=0xb8ac, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xb8ac, .value=0x46, .type=IO_READ},
        {.addr=0xb8ad, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e8, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02F3) {
    const struct CPU_State initial_cpu = {.pc=0x66b5, .a=0x13, .x=0xc2, .y=0xbe, .sp=0x35, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x01c2, .value=0xb9}, {.addr=0x66b5, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x66b6, .a=0xaa, .x=0xc2, .y=0xbe, .sp=0x35, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x01c2, .value=0xb9}, {.addr=0x66b5, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x66b5, .value=0x46, .type=IO_READ},
        {.addr=0x66b6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c2, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02F4) {
    const struct CPU_State initial_cpu = {.pc=0xc896, .a=0xaf, .x=0xd2, .y=0xcf, .sp=0x99, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x00d2, .value=0x5d}, {.addr=0xc896, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xc897, .a=0xf2, .x=0xd2, .y=0xcf, .sp=0x99, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x00d2, .value=0x5d}, {.addr=0xc896, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xc896, .value=0x46, .type=IO_READ},
        {.addr=0xc897, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d2, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02F5) {
    const struct CPU_State initial_cpu = {.pc=0xc5a0, .a=0xe4, .x=0x25, .y=0x8b, .sp=0xac, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x0025, .value=0xeb}, {.addr=0xc5a0, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xc5a1, .a=0x0f, .x=0x25, .y=0x8b, .sp=0xac, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0025, .value=0xeb}, {.addr=0xc5a0, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xc5a0, .value=0x46, .type=IO_READ},
        {.addr=0xc5a1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0025, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02F6) {
    const struct CPU_State initial_cpu = {.pc=0x44c5, .a=0x8d, .x=0x68, .y=0x73, .sp=0x56, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x0068, .value=0xfb}, {.addr=0x44c5, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x44c6, .a=0x76, .x=0x68, .y=0x73, .sp=0x56, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x0068, .value=0xfb}, {.addr=0x44c5, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x44c5, .value=0x46, .type=IO_READ},
        {.addr=0x44c6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0068, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02F7) {
    const struct CPU_State initial_cpu = {.pc=0xfb25, .a=0x48, .x=0x41, .y=0x4d, .sp=0x74, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x0141, .value=0x9a}, {.addr=0xfb25, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xfb26, .a=0xd2, .x=0x41, .y=0x4d, .sp=0x74, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0141, .value=0x9a}, {.addr=0xfb25, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xfb25, .value=0x46, .type=IO_READ},
        {.addr=0xfb26, .value=DUMMY, .type=IO_READ},
        {.addr=0x0141, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02F8) {
    const struct CPU_State initial_cpu = {.pc=0xe366, .a=0x45, .x=0xab, .y=0x53, .sp=0xf5, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x00ab, .value=0xa9}, {.addr=0xe366, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xe367, .a=0xec, .x=0xab, .y=0x53, .sp=0xf5, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x00ab, .value=0xa9}, {.addr=0xe366, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xe366, .value=0x46, .type=IO_READ},
        {.addr=0xe367, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ab, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02F9) {
    const struct CPU_State initial_cpu = {.pc=0x476a, .a=0x19, .x=0x20, .y=0xc0, .sp=0x6f, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x0120, .value=0x33}, {.addr=0x476a, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x476b, .a=0x2a, .x=0x20, .y=0xc0, .sp=0x6f, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0120, .value=0x33}, {.addr=0x476a, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x476a, .value=0x46, .type=IO_READ},
        {.addr=0x476b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0120, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02FA) {
    const struct CPU_State initial_cpu = {.pc=0xf4bf, .a=0x13, .x=0x0d, .y=0x4f, .sp=0x74, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x000d, .value=0xde}, {.addr=0xf4bf, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xf4c0, .a=0xcd, .x=0x0d, .y=0x4f, .sp=0x74, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x000d, .value=0xde}, {.addr=0xf4bf, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xf4bf, .value=0x46, .type=IO_READ},
        {.addr=0xf4c0, .value=DUMMY, .type=IO_READ},
        {.addr=0x000d, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02FB) {
    const struct CPU_State initial_cpu = {.pc=0xe382, .a=0x7a, .x=0x1f, .y=0xa4, .sp=0x51, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0x05}, {.addr=0xe382, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xe383, .a=0x7f, .x=0x1f, .y=0xa4, .sp=0x51, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0x05}, {.addr=0xe382, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xe382, .value=0x46, .type=IO_READ},
        {.addr=0xe383, .value=DUMMY, .type=IO_READ},
        {.addr=0x011f, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02FC) {
    const struct CPU_State initial_cpu = {.pc=0xfdad, .a=0x71, .x=0x7d, .y=0x19, .sp=0xd5, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0x90}, {.addr=0xfdad, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xfdae, .a=0xe1, .x=0x7d, .y=0x19, .sp=0xd5, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0x90}, {.addr=0xfdad, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xfdad, .value=0x46, .type=IO_READ},
        {.addr=0xfdae, .value=DUMMY, .type=IO_READ},
        {.addr=0x017d, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02FD) {
    const struct CPU_State initial_cpu = {.pc=0x0fca, .a=0xe2, .x=0xec, .y=0x0e, .sp=0x76, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x00ec, .value=0x9c}, {.addr=0x0fca, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x0fcb, .a=0x7e, .x=0xec, .y=0x0e, .sp=0x76, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x00ec, .value=0x9c}, {.addr=0x0fca, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x0fca, .value=0x46, .type=IO_READ},
        {.addr=0x0fcb, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ec, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02FE) {
    const struct CPU_State initial_cpu = {.pc=0xadd4, .a=0xb5, .x=0x06, .y=0xc4, .sp=0xf7, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0xf0}, {.addr=0xadd4, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xadd5, .a=0x45, .x=0x06, .y=0xc4, .sp=0xf7, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0xf0}, {.addr=0xadd4, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xadd4, .value=0x46, .type=IO_READ},
        {.addr=0xadd5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0106, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x7059, .a=0xa0, .x=0xf0, .y=0xa5, .sp=0x0f, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x01f0, .value=0x35}, {.addr=0x7059, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x705a, .a=0x95, .x=0xf0, .y=0xa5, .sp=0x0f, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x01f0, .value=0x35}, {.addr=0x7059, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x7059, .value=0x46, .type=IO_READ},
        {.addr=0x705a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f0, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0300) {
    const struct CPU_State initial_cpu = {.pc=0x45d4, .a=0x67, .x=0x07, .y=0x18, .sp=0x3f, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x0007, .value=0x2c}, {.addr=0x45d4, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x45d5, .a=0x4b, .x=0x07, .y=0x18, .sp=0x3f, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x0007, .value=0x2c}, {.addr=0x45d4, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x45d4, .value=0x46, .type=IO_READ},
        {.addr=0x45d5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0007, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0301) {
    const struct CPU_State initial_cpu = {.pc=0xd84c, .a=0xc9, .x=0xa6, .y=0x94, .sp=0xfc, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x00a6, .value=0xf5}, {.addr=0xd84c, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xd84d, .a=0x3c, .x=0xa6, .y=0x94, .sp=0xfc, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x00a6, .value=0xf5}, {.addr=0xd84c, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xd84c, .value=0x46, .type=IO_READ},
        {.addr=0xd84d, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a6, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0302) {
    const struct CPU_State initial_cpu = {.pc=0x22ae, .a=0xfb, .x=0xfe, .y=0xfb, .sp=0x70, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x01fe, .value=0x4f}, {.addr=0x22ae, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x22af, .a=0xb4, .x=0xfe, .y=0xfb, .sp=0x70, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x01fe, .value=0x4f}, {.addr=0x22ae, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x22ae, .value=0x46, .type=IO_READ},
        {.addr=0x22af, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fe, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0303) {
    const struct CPU_State initial_cpu = {.pc=0xd001, .a=0xe5, .x=0x0b, .y=0xb2, .sp=0xe8, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x000b, .value=0xb0}, {.addr=0xd001, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xd002, .a=0x55, .x=0x0b, .y=0xb2, .sp=0xe8, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x000b, .value=0xb0}, {.addr=0xd001, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xd001, .value=0x46, .type=IO_READ},
        {.addr=0xd002, .value=DUMMY, .type=IO_READ},
        {.addr=0x000b, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0304) {
    const struct CPU_State initial_cpu = {.pc=0x3610, .a=0x4b, .x=0x81, .y=0x55, .sp=0xcb, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0x69}, {.addr=0x3610, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x3611, .a=0x22, .x=0x81, .y=0x55, .sp=0xcb, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0x69}, {.addr=0x3610, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x3610, .value=0x46, .type=IO_READ},
        {.addr=0x3611, .value=DUMMY, .type=IO_READ},
        {.addr=0x0181, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0305) {
    const struct CPU_State initial_cpu = {.pc=0x4850, .a=0x11, .x=0x5b, .y=0x2d, .sp=0x28, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x005b, .value=0x2f}, {.addr=0x4850, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x4851, .a=0x3e, .x=0x5b, .y=0x2d, .sp=0x28, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x005b, .value=0x2f}, {.addr=0x4850, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x4850, .value=0x46, .type=IO_READ},
        {.addr=0x4851, .value=DUMMY, .type=IO_READ},
        {.addr=0x005b, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0306) {
    const struct CPU_State initial_cpu = {.pc=0x576d, .a=0xf8, .x=0x56, .y=0x29, .sp=0x63, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x0056, .value=0x65}, {.addr=0x576d, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x576e, .a=0x9d, .x=0x56, .y=0x29, .sp=0x63, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x0056, .value=0x65}, {.addr=0x576d, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x576d, .value=0x46, .type=IO_READ},
        {.addr=0x576e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0056, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0307) {
    const struct CPU_State initial_cpu = {.pc=0x40b4, .a=0x87, .x=0x98, .y=0x6c, .sp=0x96, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x0098, .value=0x3e}, {.addr=0x40b4, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x40b5, .a=0xb9, .x=0x98, .y=0x6c, .sp=0x96, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x0098, .value=0x3e}, {.addr=0x40b4, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x40b4, .value=0x46, .type=IO_READ},
        {.addr=0x40b5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0098, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0308) {
    const struct CPU_State initial_cpu = {.pc=0xfc3b, .a=0xa1, .x=0x80, .y=0x7a, .sp=0x9d, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0x2c}, {.addr=0xfc3b, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xfc3c, .a=0x8d, .x=0x80, .y=0x7a, .sp=0x9d, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0x2c}, {.addr=0xfc3b, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xfc3b, .value=0x46, .type=IO_READ},
        {.addr=0xfc3c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0180, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0309) {
    const struct CPU_State initial_cpu = {.pc=0x0153, .a=0xaf, .x=0x7e, .y=0xf6, .sp=0x59, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0x46}, {.addr=0x017e, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0x0154, .a=0xe0, .x=0x7e, .y=0xf6, .sp=0x59, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0x46}, {.addr=0x017e, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0x0153, .value=0x46, .type=IO_READ},
        {.addr=0x0154, .value=DUMMY, .type=IO_READ},
        {.addr=0x017e, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_030A) {
    const struct CPU_State initial_cpu = {.pc=0x4296, .a=0xfa, .x=0xcf, .y=0xcc, .sp=0x20, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x00cf, .value=0x62}, {.addr=0x4296, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x4297, .a=0x98, .x=0xcf, .y=0xcc, .sp=0x20, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x00cf, .value=0x62}, {.addr=0x4296, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x4296, .value=0x46, .type=IO_READ},
        {.addr=0x4297, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cf, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_030B) {
    const struct CPU_State initial_cpu = {.pc=0xc19d, .a=0xf7, .x=0xb6, .y=0x72, .sp=0xed, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x00b6, .value=0x3a}, {.addr=0xc19d, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xc19e, .a=0xcd, .x=0xb6, .y=0x72, .sp=0xed, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x00b6, .value=0x3a}, {.addr=0xc19d, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xc19d, .value=0x46, .type=IO_READ},
        {.addr=0xc19e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b6, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_030C) {
    const struct CPU_State initial_cpu = {.pc=0x8668, .a=0x8c, .x=0x3d, .y=0xce, .sp=0x2e, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x013d, .value=0x27}, {.addr=0x8668, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x8669, .a=0xab, .x=0x3d, .y=0xce, .sp=0x2e, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x013d, .value=0x27}, {.addr=0x8668, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x8668, .value=0x46, .type=IO_READ},
        {.addr=0x8669, .value=DUMMY, .type=IO_READ},
        {.addr=0x013d, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_030D) {
    const struct CPU_State initial_cpu = {.pc=0xe4c0, .a=0x5e, .x=0x0b, .y=0x8c, .sp=0x31, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x000b, .value=0x97}, {.addr=0xe4c0, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xe4c1, .a=0xc9, .x=0x0b, .y=0x8c, .sp=0x31, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x000b, .value=0x97}, {.addr=0xe4c0, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xe4c0, .value=0x46, .type=IO_READ},
        {.addr=0xe4c1, .value=DUMMY, .type=IO_READ},
        {.addr=0x000b, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_030E) {
    const struct CPU_State initial_cpu = {.pc=0x81ba, .a=0x12, .x=0xe6, .y=0x0a, .sp=0xc2, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0x23}, {.addr=0x81ba, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x81bb, .a=0x31, .x=0xe6, .y=0x0a, .sp=0xc2, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0x23}, {.addr=0x81ba, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x81ba, .value=0x46, .type=IO_READ},
        {.addr=0x81bb, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e6, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_030F) {
    const struct CPU_State initial_cpu = {.pc=0x8b5f, .a=0x04, .x=0x55, .y=0xed, .sp=0xce, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x0055, .value=0xd9}, {.addr=0x8b5f, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x8b60, .a=0xdd, .x=0x55, .y=0xed, .sp=0xce, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x0055, .value=0xd9}, {.addr=0x8b5f, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x8b5f, .value=0x46, .type=IO_READ},
        {.addr=0x8b60, .value=DUMMY, .type=IO_READ},
        {.addr=0x0055, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0310) {
    const struct CPU_State initial_cpu = {.pc=0x173a, .a=0x51, .x=0xe4, .y=0x64, .sp=0x3f, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x00e4, .value=0x56}, {.addr=0x173a, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x173b, .a=0x07, .x=0xe4, .y=0x64, .sp=0x3f, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x00e4, .value=0x56}, {.addr=0x173a, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x173a, .value=0x46, .type=IO_READ},
        {.addr=0x173b, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e4, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0311) {
    const struct CPU_State initial_cpu = {.pc=0x8b31, .a=0xc0, .x=0xe1, .y=0x5d, .sp=0x54, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x00e1, .value=0xb5}, {.addr=0x8b31, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x8b32, .a=0x75, .x=0xe1, .y=0x5d, .sp=0x54, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x00e1, .value=0xb5}, {.addr=0x8b31, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x8b31, .value=0x46, .type=IO_READ},
        {.addr=0x8b32, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e1, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0312) {
    const struct CPU_State initial_cpu = {.pc=0x0c65, .a=0xd2, .x=0x98, .y=0x65, .sp=0x11, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x0098, .value=0x79}, {.addr=0x0c65, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x0c66, .a=0xab, .x=0x98, .y=0x65, .sp=0x11, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x0098, .value=0x79}, {.addr=0x0c65, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x0c65, .value=0x46, .type=IO_READ},
        {.addr=0x0c66, .value=DUMMY, .type=IO_READ},
        {.addr=0x0098, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0313) {
    const struct CPU_State initial_cpu = {.pc=0x0af8, .a=0x49, .x=0xcf, .y=0xb2, .sp=0x50, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x00cf, .value=0x77}, {.addr=0x0af8, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x0af9, .a=0x3e, .x=0xcf, .y=0xb2, .sp=0x50, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x00cf, .value=0x77}, {.addr=0x0af8, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x0af8, .value=0x46, .type=IO_READ},
        {.addr=0x0af9, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cf, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0314) {
    const struct CPU_State initial_cpu = {.pc=0x70ea, .a=0x8e, .x=0x14, .y=0x38, .sp=0x7d, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x0014, .value=0x7f}, {.addr=0x70ea, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x70eb, .a=0xf1, .x=0x14, .y=0x38, .sp=0x7d, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0014, .value=0x7f}, {.addr=0x70ea, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x70ea, .value=0x46, .type=IO_READ},
        {.addr=0x70eb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0014, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0315) {
    const struct CPU_State initial_cpu = {.pc=0x7f9f, .a=0x0c, .x=0x14, .y=0x42, .sp=0xe1, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x0114, .value=0xa1}, {.addr=0x7f9f, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x7fa0, .a=0xad, .x=0x14, .y=0x42, .sp=0xe1, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x0114, .value=0xa1}, {.addr=0x7f9f, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x7f9f, .value=0x46, .type=IO_READ},
        {.addr=0x7fa0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0114, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0316) {
    const struct CPU_State initial_cpu = {.pc=0xdbe3, .a=0x3b, .x=0x81, .y=0x91, .sp=0xc8, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0x69}, {.addr=0xdbe3, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xdbe4, .a=0x52, .x=0x81, .y=0x91, .sp=0xc8, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0x69}, {.addr=0xdbe3, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xdbe3, .value=0x46, .type=IO_READ},
        {.addr=0xdbe4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0181, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0317) {
    const struct CPU_State initial_cpu = {.pc=0xc381, .a=0xc7, .x=0xcf, .y=0xd1, .sp=0x65, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x01cf, .value=0xe8}, {.addr=0xc381, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xc382, .a=0x2f, .x=0xcf, .y=0xd1, .sp=0x65, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x01cf, .value=0xe8}, {.addr=0xc381, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xc381, .value=0x46, .type=IO_READ},
        {.addr=0xc382, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cf, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0318) {
    const struct CPU_State initial_cpu = {.pc=0x259c, .a=0x8c, .x=0xc5, .y=0xd7, .sp=0xe8, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x00c5, .value=0xc7}, {.addr=0x259c, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x259d, .a=0x4b, .x=0xc5, .y=0xd7, .sp=0xe8, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x00c5, .value=0xc7}, {.addr=0x259c, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x259c, .value=0x46, .type=IO_READ},
        {.addr=0x259d, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c5, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0319) {
    const struct CPU_State initial_cpu = {.pc=0x6ff1, .a=0x91, .x=0x8f, .y=0x65, .sp=0x97, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x018f, .value=0x02}, {.addr=0x6ff1, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x6ff2, .a=0x93, .x=0x8f, .y=0x65, .sp=0x97, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x018f, .value=0x02}, {.addr=0x6ff1, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x6ff1, .value=0x46, .type=IO_READ},
        {.addr=0x6ff2, .value=DUMMY, .type=IO_READ},
        {.addr=0x018f, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_031A) {
    const struct CPU_State initial_cpu = {.pc=0x2551, .a=0xfa, .x=0xb7, .y=0xd0, .sp=0x0b, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x01b7, .value=0x26}, {.addr=0x2551, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x2552, .a=0xdc, .x=0xb7, .y=0xd0, .sp=0x0b, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x01b7, .value=0x26}, {.addr=0x2551, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x2551, .value=0x46, .type=IO_READ},
        {.addr=0x2552, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b7, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_031B) {
    const struct CPU_State initial_cpu = {.pc=0x53ee, .a=0x9a, .x=0x73, .y=0x50, .sp=0x0b, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0x58}, {.addr=0x53ee, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x53ef, .a=0xc2, .x=0x73, .y=0x50, .sp=0x0b, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0x58}, {.addr=0x53ee, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x53ee, .value=0x46, .type=IO_READ},
        {.addr=0x53ef, .value=DUMMY, .type=IO_READ},
        {.addr=0x0173, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_031C) {
    const struct CPU_State initial_cpu = {.pc=0xbaea, .a=0x36, .x=0x40, .y=0xd2, .sp=0x78, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x0040, .value=0x24}, {.addr=0xbaea, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xbaeb, .a=0x12, .x=0x40, .y=0xd2, .sp=0x78, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0040, .value=0x24}, {.addr=0xbaea, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xbaea, .value=0x46, .type=IO_READ},
        {.addr=0xbaeb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0040, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_031D) {
    const struct CPU_State initial_cpu = {.pc=0x3b0c, .a=0xdc, .x=0x28, .y=0x9d, .sp=0x77, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x0128, .value=0x82}, {.addr=0x3b0c, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x3b0d, .a=0x5e, .x=0x28, .y=0x9d, .sp=0x77, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x0128, .value=0x82}, {.addr=0x3b0c, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x3b0c, .value=0x46, .type=IO_READ},
        {.addr=0x3b0d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0128, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_031E) {
    const struct CPU_State initial_cpu = {.pc=0x2fa7, .a=0xad, .x=0xac, .y=0xe3, .sp=0xdc, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x01ac, .value=0xdc}, {.addr=0x2fa7, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x2fa8, .a=0x71, .x=0xac, .y=0xe3, .sp=0xdc, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x01ac, .value=0xdc}, {.addr=0x2fa7, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x2fa7, .value=0x46, .type=IO_READ},
        {.addr=0x2fa8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ac, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_031F) {
    const struct CPU_State initial_cpu = {.pc=0x77b0, .a=0x3c, .x=0x0f, .y=0x3d, .sp=0x3b, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x010f, .value=0x86}, {.addr=0x77b0, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x77b1, .a=0xba, .x=0x0f, .y=0x3d, .sp=0x3b, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x010f, .value=0x86}, {.addr=0x77b0, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x77b0, .value=0x46, .type=IO_READ},
        {.addr=0x77b1, .value=DUMMY, .type=IO_READ},
        {.addr=0x010f, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0320) {
    const struct CPU_State initial_cpu = {.pc=0x4363, .a=0x77, .x=0x3c, .y=0xde, .sp=0x83, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x003c, .value=0xa3}, {.addr=0x4363, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x4364, .a=0xd4, .x=0x3c, .y=0xde, .sp=0x83, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x003c, .value=0xa3}, {.addr=0x4363, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x4363, .value=0x46, .type=IO_READ},
        {.addr=0x4364, .value=DUMMY, .type=IO_READ},
        {.addr=0x003c, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0321) {
    const struct CPU_State initial_cpu = {.pc=0x4058, .a=0xaa, .x=0x1a, .y=0x0b, .sp=0xcc, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x011a, .value=0xb6}, {.addr=0x4058, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x4059, .a=0x1c, .x=0x1a, .y=0x0b, .sp=0xcc, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x011a, .value=0xb6}, {.addr=0x4058, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x4058, .value=0x46, .type=IO_READ},
        {.addr=0x4059, .value=DUMMY, .type=IO_READ},
        {.addr=0x011a, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0322) {
    const struct CPU_State initial_cpu = {.pc=0xe6f9, .a=0xde, .x=0x48, .y=0x93, .sp=0x90, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x0048, .value=0xc9}, {.addr=0xe6f9, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xe6fa, .a=0x17, .x=0x48, .y=0x93, .sp=0x90, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0048, .value=0xc9}, {.addr=0xe6f9, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xe6f9, .value=0x46, .type=IO_READ},
        {.addr=0xe6fa, .value=DUMMY, .type=IO_READ},
        {.addr=0x0048, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0323) {
    const struct CPU_State initial_cpu = {.pc=0x559e, .a=0x23, .x=0x11, .y=0x46, .sp=0x76, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x0011, .value=0x24}, {.addr=0x559e, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x559f, .a=0x07, .x=0x11, .y=0x46, .sp=0x76, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x0011, .value=0x24}, {.addr=0x559e, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x559e, .value=0x46, .type=IO_READ},
        {.addr=0x559f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0011, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0324) {
    const struct CPU_State initial_cpu = {.pc=0xa1eb, .a=0xa3, .x=0x7c, .y=0x46, .sp=0xbd, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x007c, .value=0x2b}, {.addr=0xa1eb, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xa1ec, .a=0x88, .x=0x7c, .y=0x46, .sp=0xbd, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x007c, .value=0x2b}, {.addr=0xa1eb, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xa1eb, .value=0x46, .type=IO_READ},
        {.addr=0xa1ec, .value=DUMMY, .type=IO_READ},
        {.addr=0x007c, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0325) {
    const struct CPU_State initial_cpu = {.pc=0x37c3, .a=0x09, .x=0x6d, .y=0x93, .sp=0x2c, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x006d, .value=0x8f}, {.addr=0x37c3, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x37c4, .a=0x86, .x=0x6d, .y=0x93, .sp=0x2c, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x006d, .value=0x8f}, {.addr=0x37c3, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x37c3, .value=0x46, .type=IO_READ},
        {.addr=0x37c4, .value=DUMMY, .type=IO_READ},
        {.addr=0x006d, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0326) {
    const struct CPU_State initial_cpu = {.pc=0x0fdf, .a=0x06, .x=0x95, .y=0x0c, .sp=0xe6, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x0195, .value=0xef}, {.addr=0x0fdf, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x0fe0, .a=0xe9, .x=0x95, .y=0x0c, .sp=0xe6, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x0195, .value=0xef}, {.addr=0x0fdf, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x0fdf, .value=0x46, .type=IO_READ},
        {.addr=0x0fe0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0195, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0327) {
    const struct CPU_State initial_cpu = {.pc=0xfd50, .a=0xc0, .x=0x64, .y=0xd6, .sp=0xc1, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x0064, .value=0x10}, {.addr=0xfd50, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xfd51, .a=0xd0, .x=0x64, .y=0xd6, .sp=0xc1, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x0064, .value=0x10}, {.addr=0xfd50, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xfd50, .value=0x46, .type=IO_READ},
        {.addr=0xfd51, .value=DUMMY, .type=IO_READ},
        {.addr=0x0064, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0328) {
    const struct CPU_State initial_cpu = {.pc=0x99e5, .a=0xb8, .x=0x23, .y=0x42, .sp=0x19, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x0123, .value=0x6d}, {.addr=0x99e5, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x99e6, .a=0xd5, .x=0x23, .y=0x42, .sp=0x19, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x0123, .value=0x6d}, {.addr=0x99e5, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x99e5, .value=0x46, .type=IO_READ},
        {.addr=0x99e6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0123, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0329) {
    const struct CPU_State initial_cpu = {.pc=0x9800, .a=0xf4, .x=0x39, .y=0xd1, .sp=0x8a, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x0039, .value=0x87}, {.addr=0x9800, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x9801, .a=0x73, .x=0x39, .y=0xd1, .sp=0x8a, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x0039, .value=0x87}, {.addr=0x9800, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x9800, .value=0x46, .type=IO_READ},
        {.addr=0x9801, .value=DUMMY, .type=IO_READ},
        {.addr=0x0039, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_032A) {
    const struct CPU_State initial_cpu = {.pc=0x65d9, .a=0x5e, .x=0x2b, .y=0x7a, .sp=0x88, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0xd6}, {.addr=0x65d9, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x65da, .a=0x88, .x=0x2b, .y=0x7a, .sp=0x88, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0xd6}, {.addr=0x65d9, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x65d9, .value=0x46, .type=IO_READ},
        {.addr=0x65da, .value=DUMMY, .type=IO_READ},
        {.addr=0x012b, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_032B) {
    const struct CPU_State initial_cpu = {.pc=0xe92e, .a=0x4a, .x=0x9f, .y=0x61, .sp=0x58, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x009f, .value=0xbb}, {.addr=0xe92e, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xe92f, .a=0xf1, .x=0x9f, .y=0x61, .sp=0x58, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x009f, .value=0xbb}, {.addr=0xe92e, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xe92e, .value=0x46, .type=IO_READ},
        {.addr=0xe92f, .value=DUMMY, .type=IO_READ},
        {.addr=0x009f, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_032C) {
    const struct CPU_State initial_cpu = {.pc=0x276f, .a=0xc2, .x=0x1c, .y=0x5c, .sp=0x35, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x011c, .value=0xf5}, {.addr=0x276f, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x2770, .a=0x37, .x=0x1c, .y=0x5c, .sp=0x35, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x011c, .value=0xf5}, {.addr=0x276f, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x276f, .value=0x46, .type=IO_READ},
        {.addr=0x2770, .value=DUMMY, .type=IO_READ},
        {.addr=0x011c, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_032D) {
    const struct CPU_State initial_cpu = {.pc=0xb083, .a=0x21, .x=0x58, .y=0x9e, .sp=0x74, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x0058, .value=0x20}, {.addr=0xb083, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xb084, .a=0x01, .x=0x58, .y=0x9e, .sp=0x74, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0058, .value=0x20}, {.addr=0xb083, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xb083, .value=0x46, .type=IO_READ},
        {.addr=0xb084, .value=DUMMY, .type=IO_READ},
        {.addr=0x0058, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_032E) {
    const struct CPU_State initial_cpu = {.pc=0x8c20, .a=0x2f, .x=0x0f, .y=0x5c, .sp=0x1a, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x010f, .value=0x4c}, {.addr=0x8c20, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x8c21, .a=0x63, .x=0x0f, .y=0x5c, .sp=0x1a, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x010f, .value=0x4c}, {.addr=0x8c20, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x8c20, .value=0x46, .type=IO_READ},
        {.addr=0x8c21, .value=DUMMY, .type=IO_READ},
        {.addr=0x010f, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_032F) {
    const struct CPU_State initial_cpu = {.pc=0xefe2, .a=0xb0, .x=0x06, .y=0x88, .sp=0xb8, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x0006, .value=0x0b}, {.addr=0xefe2, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xefe3, .a=0xbb, .x=0x06, .y=0x88, .sp=0xb8, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x0006, .value=0x0b}, {.addr=0xefe2, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xefe2, .value=0x46, .type=IO_READ},
        {.addr=0xefe3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0006, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0330) {
    const struct CPU_State initial_cpu = {.pc=0x84a1, .a=0xf0, .x=0x5f, .y=0xd6, .sp=0x13, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x005f, .value=0x24}, {.addr=0x84a1, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x84a2, .a=0xd4, .x=0x5f, .y=0xd6, .sp=0x13, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x005f, .value=0x24}, {.addr=0x84a1, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x84a1, .value=0x46, .type=IO_READ},
        {.addr=0x84a2, .value=DUMMY, .type=IO_READ},
        {.addr=0x005f, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0331) {
    const struct CPU_State initial_cpu = {.pc=0x5485, .a=0x58, .x=0x77, .y=0xaa, .sp=0xe7, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x0077, .value=0x0e}, {.addr=0x5485, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x5486, .a=0x56, .x=0x77, .y=0xaa, .sp=0xe7, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x0077, .value=0x0e}, {.addr=0x5485, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x5485, .value=0x46, .type=IO_READ},
        {.addr=0x5486, .value=DUMMY, .type=IO_READ},
        {.addr=0x0077, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0333) {
    const struct CPU_State initial_cpu = {.pc=0xd7e1, .a=0xe8, .x=0x04, .y=0x1d, .sp=0x03, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0x5d}, {.addr=0xd7e1, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xd7e2, .a=0xb5, .x=0x04, .y=0x1d, .sp=0x03, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0x5d}, {.addr=0xd7e1, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xd7e1, .value=0x46, .type=IO_READ},
        {.addr=0xd7e2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0104, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0334) {
    const struct CPU_State initial_cpu = {.pc=0x19a4, .a=0x93, .x=0x6d, .y=0x66, .sp=0x15, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x016d, .value=0x43}, {.addr=0x19a4, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x19a5, .a=0xd0, .x=0x6d, .y=0x66, .sp=0x15, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x016d, .value=0x43}, {.addr=0x19a4, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x19a4, .value=0x46, .type=IO_READ},
        {.addr=0x19a5, .value=DUMMY, .type=IO_READ},
        {.addr=0x016d, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0335) {
    const struct CPU_State initial_cpu = {.pc=0x097a, .a=0x79, .x=0xd7, .y=0x68, .sp=0x57, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x00d7, .value=0x19}, {.addr=0x097a, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x097b, .a=0x60, .x=0xd7, .y=0x68, .sp=0x57, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x00d7, .value=0x19}, {.addr=0x097a, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x097a, .value=0x46, .type=IO_READ},
        {.addr=0x097b, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d7, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0336) {
    const struct CPU_State initial_cpu = {.pc=0x7f1e, .a=0x5d, .x=0xd5, .y=0xea, .sp=0x93, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x00d5, .value=0x86}, {.addr=0x7f1e, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x7f1f, .a=0xdb, .x=0xd5, .y=0xea, .sp=0x93, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x00d5, .value=0x86}, {.addr=0x7f1e, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x7f1e, .value=0x46, .type=IO_READ},
        {.addr=0x7f1f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d5, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0337) {
    const struct CPU_State initial_cpu = {.pc=0xb1fc, .a=0x52, .x=0x7e, .y=0x37, .sp=0x79, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x017e, .value=0x12}, {.addr=0xb1fc, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xb1fd, .a=0x40, .x=0x7e, .y=0x37, .sp=0x79, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x017e, .value=0x12}, {.addr=0xb1fc, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xb1fc, .value=0x46, .type=IO_READ},
        {.addr=0xb1fd, .value=DUMMY, .type=IO_READ},
        {.addr=0x017e, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0338) {
    const struct CPU_State initial_cpu = {.pc=0x14cf, .a=0x42, .x=0x93, .y=0x4f, .sp=0x1e, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x0093, .value=0x02}, {.addr=0x14cf, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x14d0, .a=0x40, .x=0x93, .y=0x4f, .sp=0x1e, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0093, .value=0x02}, {.addr=0x14cf, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x14cf, .value=0x46, .type=IO_READ},
        {.addr=0x14d0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0093, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0339) {
    const struct CPU_State initial_cpu = {.pc=0x96cf, .a=0xa8, .x=0x9e, .y=0xa5, .sp=0x8f, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0x02}, {.addr=0x96cf, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x96d0, .a=0xaa, .x=0x9e, .y=0xa5, .sp=0x8f, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0x02}, {.addr=0x96cf, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x96cf, .value=0x46, .type=IO_READ},
        {.addr=0x96d0, .value=DUMMY, .type=IO_READ},
        {.addr=0x019e, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_033A) {
    const struct CPU_State initial_cpu = {.pc=0x1f0e, .a=0x0f, .x=0x76, .y=0x20, .sp=0x03, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x0076, .value=0x8e}, {.addr=0x1f0e, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x1f0f, .a=0x81, .x=0x76, .y=0x20, .sp=0x03, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x0076, .value=0x8e}, {.addr=0x1f0e, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x1f0e, .value=0x46, .type=IO_READ},
        {.addr=0x1f0f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0076, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_033B) {
    const struct CPU_State initial_cpu = {.pc=0x39f3, .a=0xc2, .x=0x70, .y=0x69, .sp=0xa9, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x0070, .value=0xe8}, {.addr=0x39f3, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x39f4, .a=0x2a, .x=0x70, .y=0x69, .sp=0xa9, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0070, .value=0xe8}, {.addr=0x39f3, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x39f3, .value=0x46, .type=IO_READ},
        {.addr=0x39f4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0070, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_033C) {
    const struct CPU_State initial_cpu = {.pc=0x3ac8, .a=0xcb, .x=0x98, .y=0xa1, .sp=0x4a, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x0198, .value=0x8e}, {.addr=0x3ac8, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x3ac9, .a=0x45, .x=0x98, .y=0xa1, .sp=0x4a, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x0198, .value=0x8e}, {.addr=0x3ac8, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x3ac8, .value=0x46, .type=IO_READ},
        {.addr=0x3ac9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0198, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_033D) {
    const struct CPU_State initial_cpu = {.pc=0xc004, .a=0x75, .x=0x5a, .y=0xaf, .sp=0xe8, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x015a, .value=0x29}, {.addr=0xc004, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xc005, .a=0x5c, .x=0x5a, .y=0xaf, .sp=0xe8, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x015a, .value=0x29}, {.addr=0xc004, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xc004, .value=0x46, .type=IO_READ},
        {.addr=0xc005, .value=DUMMY, .type=IO_READ},
        {.addr=0x015a, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_033E) {
    const struct CPU_State initial_cpu = {.pc=0xaac8, .a=0xbd, .x=0x73, .y=0x16, .sp=0x10, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x0073, .value=0x66}, {.addr=0xaac8, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xaac9, .a=0xdb, .x=0x73, .y=0x16, .sp=0x10, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x0073, .value=0x66}, {.addr=0xaac8, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xaac8, .value=0x46, .type=IO_READ},
        {.addr=0xaac9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0073, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_033F) {
    const struct CPU_State initial_cpu = {.pc=0x4148, .a=0xe9, .x=0x7b, .y=0x3b, .sp=0x2c, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x007b, .value=0xcd}, {.addr=0x4148, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x4149, .a=0x24, .x=0x7b, .y=0x3b, .sp=0x2c, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x007b, .value=0xcd}, {.addr=0x4148, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x4148, .value=0x46, .type=IO_READ},
        {.addr=0x4149, .value=DUMMY, .type=IO_READ},
        {.addr=0x007b, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0340) {
    const struct CPU_State initial_cpu = {.pc=0x9a2a, .a=0x70, .x=0xe3, .y=0xe1, .sp=0x87, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x00e3, .value=0x4f}, {.addr=0x9a2a, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x9a2b, .a=0x3f, .x=0xe3, .y=0xe1, .sp=0x87, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x00e3, .value=0x4f}, {.addr=0x9a2a, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x9a2a, .value=0x46, .type=IO_READ},
        {.addr=0x9a2b, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e3, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0341) {
    const struct CPU_State initial_cpu = {.pc=0x6d50, .a=0xfc, .x=0xf7, .y=0xc2, .sp=0x74, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x01f7, .value=0x58}, {.addr=0x6d50, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x6d51, .a=0xa4, .x=0xf7, .y=0xc2, .sp=0x74, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x01f7, .value=0x58}, {.addr=0x6d50, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x6d50, .value=0x46, .type=IO_READ},
        {.addr=0x6d51, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f7, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0342) {
    const struct CPU_State initial_cpu = {.pc=0xddcc, .a=0x74, .x=0x25, .y=0x38, .sp=0x43, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x0125, .value=0xac}, {.addr=0xddcc, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xddcd, .a=0xd8, .x=0x25, .y=0x38, .sp=0x43, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x0125, .value=0xac}, {.addr=0xddcc, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xddcc, .value=0x46, .type=IO_READ},
        {.addr=0xddcd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0125, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0343) {
    const struct CPU_State initial_cpu = {.pc=0xf22d, .a=0x4a, .x=0xe9, .y=0x4c, .sp=0xc3, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x01e9, .value=0xad}, {.addr=0xf22d, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xf22e, .a=0xe7, .x=0xe9, .y=0x4c, .sp=0xc3, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x01e9, .value=0xad}, {.addr=0xf22d, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xf22d, .value=0x46, .type=IO_READ},
        {.addr=0xf22e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e9, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0344) {
    const struct CPU_State initial_cpu = {.pc=0xbc70, .a=0x41, .x=0xa5, .y=0x16, .sp=0x1b, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0x70}, {.addr=0xbc70, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xbc71, .a=0x31, .x=0xa5, .y=0x16, .sp=0x1b, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0x70}, {.addr=0xbc70, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xbc70, .value=0x46, .type=IO_READ},
        {.addr=0xbc71, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a5, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0345) {
    const struct CPU_State initial_cpu = {.pc=0x4c29, .a=0x88, .x=0xcc, .y=0x96, .sp=0xe6, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x00cc, .value=0xf2}, {.addr=0x4c29, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x4c2a, .a=0x7a, .x=0xcc, .y=0x96, .sp=0xe6, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x00cc, .value=0xf2}, {.addr=0x4c29, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x4c29, .value=0x46, .type=IO_READ},
        {.addr=0x4c2a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cc, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0346) {
    const struct CPU_State initial_cpu = {.pc=0x0ed1, .a=0x15, .x=0x7e, .y=0x87, .sp=0x0c, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x007e, .value=0x29}, {.addr=0x0ed1, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x0ed2, .a=0x3c, .x=0x7e, .y=0x87, .sp=0x0c, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x007e, .value=0x29}, {.addr=0x0ed1, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x0ed1, .value=0x46, .type=IO_READ},
        {.addr=0x0ed2, .value=DUMMY, .type=IO_READ},
        {.addr=0x007e, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0347) {
    const struct CPU_State initial_cpu = {.pc=0xb468, .a=0x7f, .x=0xef, .y=0xf1, .sp=0x81, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x00ef, .value=0xa0}, {.addr=0xb468, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xb469, .a=0xdf, .x=0xef, .y=0xf1, .sp=0x81, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x00ef, .value=0xa0}, {.addr=0xb468, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xb468, .value=0x46, .type=IO_READ},
        {.addr=0xb469, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ef, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0348) {
    const struct CPU_State initial_cpu = {.pc=0xb0aa, .a=0x3f, .x=0xce, .y=0xc5, .sp=0xf9, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x00ce, .value=0x24}, {.addr=0xb0aa, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xb0ab, .a=0x1b, .x=0xce, .y=0xc5, .sp=0xf9, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x00ce, .value=0x24}, {.addr=0xb0aa, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xb0aa, .value=0x46, .type=IO_READ},
        {.addr=0xb0ab, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ce, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0349) {
    const struct CPU_State initial_cpu = {.pc=0xf8cf, .a=0x21, .x=0x60, .y=0x69, .sp=0xb0, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x0160, .value=0x73}, {.addr=0xf8cf, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xf8d0, .a=0x52, .x=0x60, .y=0x69, .sp=0xb0, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x0160, .value=0x73}, {.addr=0xf8cf, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xf8cf, .value=0x46, .type=IO_READ},
        {.addr=0xf8d0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0160, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_034A) {
    const struct CPU_State initial_cpu = {.pc=0x165b, .a=0x78, .x=0x46, .y=0x7b, .sp=0xc6, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x0046, .value=0x3b}, {.addr=0x165b, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x165c, .a=0x43, .x=0x46, .y=0x7b, .sp=0xc6, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x0046, .value=0x3b}, {.addr=0x165b, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x165b, .value=0x46, .type=IO_READ},
        {.addr=0x165c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0046, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_034B) {
    const struct CPU_State initial_cpu = {.pc=0xb5de, .a=0x9f, .x=0x00, .y=0x68, .sp=0x25, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x0100, .value=0xea}, {.addr=0xb5de, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xb5df, .a=0x75, .x=0x00, .y=0x68, .sp=0x25, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x0100, .value=0xea}, {.addr=0xb5de, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xb5de, .value=0x46, .type=IO_READ},
        {.addr=0xb5df, .value=DUMMY, .type=IO_READ},
        {.addr=0x0100, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_034C) {
    const struct CPU_State initial_cpu = {.pc=0x0d4b, .a=0xfa, .x=0xbd, .y=0x5c, .sp=0x10, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x00bd, .value=0x4c}, {.addr=0x0d4b, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x0d4c, .a=0xb6, .x=0xbd, .y=0x5c, .sp=0x10, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x00bd, .value=0x4c}, {.addr=0x0d4b, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x0d4b, .value=0x46, .type=IO_READ},
        {.addr=0x0d4c, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bd, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_034D) {
    const struct CPU_State initial_cpu = {.pc=0x00de, .a=0xba, .x=0xe8, .y=0xd6, .sp=0x60, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x00de, .value=0x46}, {.addr=0x00e8, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0x00df, .a=0x4a, .x=0xe8, .y=0xd6, .sp=0x60, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x00de, .value=0x46}, {.addr=0x00e8, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0x00de, .value=0x46, .type=IO_READ},
        {.addr=0x00df, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e8, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_034E) {
    const struct CPU_State initial_cpu = {.pc=0x3b79, .a=0xd3, .x=0x35, .y=0xd7, .sp=0xfb, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x0135, .value=0x6b}, {.addr=0x3b79, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x3b7a, .a=0xb8, .x=0x35, .y=0xd7, .sp=0xfb, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x0135, .value=0x6b}, {.addr=0x3b79, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x3b79, .value=0x46, .type=IO_READ},
        {.addr=0x3b7a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0135, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_034F) {
    const struct CPU_State initial_cpu = {.pc=0xdf71, .a=0xca, .x=0x69, .y=0x56, .sp=0x13, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x0069, .value=0xd2}, {.addr=0xdf71, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xdf72, .a=0x18, .x=0x69, .y=0x56, .sp=0x13, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0069, .value=0xd2}, {.addr=0xdf71, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xdf71, .value=0x46, .type=IO_READ},
        {.addr=0xdf72, .value=DUMMY, .type=IO_READ},
        {.addr=0x0069, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0350) {
    const struct CPU_State initial_cpu = {.pc=0xcf63, .a=0xd2, .x=0x10, .y=0x82, .sp=0x44, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x0010, .value=0x8d}, {.addr=0xcf63, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xcf64, .a=0x5f, .x=0x10, .y=0x82, .sp=0x44, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x0010, .value=0x8d}, {.addr=0xcf63, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xcf63, .value=0x46, .type=IO_READ},
        {.addr=0xcf64, .value=DUMMY, .type=IO_READ},
        {.addr=0x0010, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0351) {
    const struct CPU_State initial_cpu = {.pc=0x35b9, .a=0x11, .x=0x68, .y=0x05, .sp=0xa8, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x0168, .value=0xde}, {.addr=0x35b9, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x35ba, .a=0xcf, .x=0x68, .y=0x05, .sp=0xa8, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x0168, .value=0xde}, {.addr=0x35b9, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x35b9, .value=0x46, .type=IO_READ},
        {.addr=0x35ba, .value=DUMMY, .type=IO_READ},
        {.addr=0x0168, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0352) {
    const struct CPU_State initial_cpu = {.pc=0x9281, .a=0x4b, .x=0xab, .y=0x66, .sp=0xf3, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x00ab, .value=0xd2}, {.addr=0x9281, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x9282, .a=0x99, .x=0xab, .y=0x66, .sp=0xf3, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x00ab, .value=0xd2}, {.addr=0x9281, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x9281, .value=0x46, .type=IO_READ},
        {.addr=0x9282, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ab, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0353) {
    const struct CPU_State initial_cpu = {.pc=0x939b, .a=0xc9, .x=0x97, .y=0xdf, .sp=0xdd, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x0097, .value=0xdc}, {.addr=0x939b, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x939c, .a=0x15, .x=0x97, .y=0xdf, .sp=0xdd, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x0097, .value=0xdc}, {.addr=0x939b, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x939b, .value=0x46, .type=IO_READ},
        {.addr=0x939c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0097, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0355) {
    const struct CPU_State initial_cpu = {.pc=0x15b2, .a=0x77, .x=0xc0, .y=0x73, .sp=0x1d, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x00c0, .value=0xc5}, {.addr=0x15b2, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x15b3, .a=0xb2, .x=0xc0, .y=0x73, .sp=0x1d, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x00c0, .value=0xc5}, {.addr=0x15b2, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x15b2, .value=0x46, .type=IO_READ},
        {.addr=0x15b3, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c0, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0356) {
    const struct CPU_State initial_cpu = {.pc=0x72c3, .a=0x64, .x=0x0b, .y=0xbd, .sp=0x20, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x010b, .value=0x95}, {.addr=0x72c3, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x72c4, .a=0xf1, .x=0x0b, .y=0xbd, .sp=0x20, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x010b, .value=0x95}, {.addr=0x72c3, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x72c3, .value=0x46, .type=IO_READ},
        {.addr=0x72c4, .value=DUMMY, .type=IO_READ},
        {.addr=0x010b, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0357) {
    const struct CPU_State initial_cpu = {.pc=0x6646, .a=0x05, .x=0xd9, .y=0xc8, .sp=0xa2, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x01d9, .value=0xae}, {.addr=0x6646, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x6647, .a=0xab, .x=0xd9, .y=0xc8, .sp=0xa2, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x01d9, .value=0xae}, {.addr=0x6646, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x6646, .value=0x46, .type=IO_READ},
        {.addr=0x6647, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d9, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0358) {
    const struct CPU_State initial_cpu = {.pc=0xc3bd, .a=0x87, .x=0x33, .y=0xc4, .sp=0x85, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x0033, .value=0x9f}, {.addr=0xc3bd, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xc3be, .a=0x18, .x=0x33, .y=0xc4, .sp=0x85, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x0033, .value=0x9f}, {.addr=0xc3bd, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xc3bd, .value=0x46, .type=IO_READ},
        {.addr=0xc3be, .value=DUMMY, .type=IO_READ},
        {.addr=0x0033, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0359) {
    const struct CPU_State initial_cpu = {.pc=0x3ba4, .a=0xb8, .x=0x62, .y=0xe1, .sp=0x15, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0xfc}, {.addr=0x3ba4, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x3ba5, .a=0x44, .x=0x62, .y=0xe1, .sp=0x15, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0xfc}, {.addr=0x3ba4, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x3ba4, .value=0x46, .type=IO_READ},
        {.addr=0x3ba5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0162, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_035A) {
    const struct CPU_State initial_cpu = {.pc=0xc00c, .a=0x15, .x=0xe8, .y=0x1c, .sp=0xc2, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x01e8, .value=0x3b}, {.addr=0xc00c, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xc00d, .a=0x2e, .x=0xe8, .y=0x1c, .sp=0xc2, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x01e8, .value=0x3b}, {.addr=0xc00c, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xc00c, .value=0x46, .type=IO_READ},
        {.addr=0xc00d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e8, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_035B) {
    const struct CPU_State initial_cpu = {.pc=0xa602, .a=0x45, .x=0xc8, .y=0x43, .sp=0x62, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x01c8, .value=0xa9}, {.addr=0xa602, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xa603, .a=0xec, .x=0xc8, .y=0x43, .sp=0x62, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x01c8, .value=0xa9}, {.addr=0xa602, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xa602, .value=0x46, .type=IO_READ},
        {.addr=0xa603, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c8, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_035C) {
    const struct CPU_State initial_cpu = {.pc=0x58d5, .a=0x85, .x=0xda, .y=0x1b, .sp=0x7a, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x01da, .value=0x6d}, {.addr=0x58d5, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x58d6, .a=0xe8, .x=0xda, .y=0x1b, .sp=0x7a, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x01da, .value=0x6d}, {.addr=0x58d5, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x58d5, .value=0x46, .type=IO_READ},
        {.addr=0x58d6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01da, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_035D) {
    const struct CPU_State initial_cpu = {.pc=0x53ee, .a=0xe3, .x=0xce, .y=0x1d, .sp=0x69, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x00ce, .value=0xb3}, {.addr=0x53ee, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x53ef, .a=0x50, .x=0xce, .y=0x1d, .sp=0x69, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x00ce, .value=0xb3}, {.addr=0x53ee, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x53ee, .value=0x46, .type=IO_READ},
        {.addr=0x53ef, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ce, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_035E) {
    const struct CPU_State initial_cpu = {.pc=0xe08f, .a=0x4b, .x=0x47, .y=0x9c, .sp=0xed, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x0047, .value=0xcf}, {.addr=0xe08f, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xe090, .a=0x84, .x=0x47, .y=0x9c, .sp=0xed, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x0047, .value=0xcf}, {.addr=0xe08f, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xe08f, .value=0x46, .type=IO_READ},
        {.addr=0xe090, .value=DUMMY, .type=IO_READ},
        {.addr=0x0047, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_035F) {
    const struct CPU_State initial_cpu = {.pc=0xc58c, .a=0xb3, .x=0xb7, .y=0x6d, .sp=0xa4, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x00b7, .value=0x7d}, {.addr=0xc58c, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xc58d, .a=0xce, .x=0xb7, .y=0x6d, .sp=0xa4, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x00b7, .value=0x7d}, {.addr=0xc58c, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xc58c, .value=0x46, .type=IO_READ},
        {.addr=0xc58d, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b7, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0360) {
    const struct CPU_State initial_cpu = {.pc=0xc79d, .a=0xad, .x=0x76, .y=0x77, .sp=0xaf, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x0076, .value=0x9f}, {.addr=0xc79d, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xc79e, .a=0x32, .x=0x76, .y=0x77, .sp=0xaf, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x0076, .value=0x9f}, {.addr=0xc79d, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xc79d, .value=0x46, .type=IO_READ},
        {.addr=0xc79e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0076, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0361) {
    const struct CPU_State initial_cpu = {.pc=0x9ba7, .a=0x7e, .x=0x29, .y=0x2c, .sp=0x67, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x0029, .value=0x76}, {.addr=0x9ba7, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x9ba8, .a=0x08, .x=0x29, .y=0x2c, .sp=0x67, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0029, .value=0x76}, {.addr=0x9ba7, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x9ba7, .value=0x46, .type=IO_READ},
        {.addr=0x9ba8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0029, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0362) {
    const struct CPU_State initial_cpu = {.pc=0xd728, .a=0xba, .x=0xa1, .y=0x84, .sp=0x50, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x00a1, .value=0x8d}, {.addr=0xd728, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xd729, .a=0x37, .x=0xa1, .y=0x84, .sp=0x50, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x00a1, .value=0x8d}, {.addr=0xd728, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xd728, .value=0x46, .type=IO_READ},
        {.addr=0xd729, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a1, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0363) {
    const struct CPU_State initial_cpu = {.pc=0xbf95, .a=0x2e, .x=0xd6, .y=0xc3, .sp=0xae, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x01d6, .value=0x6d}, {.addr=0xbf95, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xbf96, .a=0x43, .x=0xd6, .y=0xc3, .sp=0xae, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x01d6, .value=0x6d}, {.addr=0xbf95, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xbf95, .value=0x46, .type=IO_READ},
        {.addr=0xbf96, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d6, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0364) {
    const struct CPU_State initial_cpu = {.pc=0x3b34, .a=0x5b, .x=0xc3, .y=0xfa, .sp=0x78, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0xec}, {.addr=0x3b34, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x3b35, .a=0xb7, .x=0xc3, .y=0xfa, .sp=0x78, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0xec}, {.addr=0x3b34, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x3b34, .value=0x46, .type=IO_READ},
        {.addr=0x3b35, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c3, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0365) {
    const struct CPU_State initial_cpu = {.pc=0xfee5, .a=0xb6, .x=0x18, .y=0xa9, .sp=0x64, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x0018, .value=0x5a}, {.addr=0xfee5, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xfee6, .a=0xec, .x=0x18, .y=0xa9, .sp=0x64, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x0018, .value=0x5a}, {.addr=0xfee5, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xfee5, .value=0x46, .type=IO_READ},
        {.addr=0xfee6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0018, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0366) {
    const struct CPU_State initial_cpu = {.pc=0xf695, .a=0xbe, .x=0x67, .y=0xc7, .sp=0x40, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x0067, .value=0x3c}, {.addr=0xf695, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xf696, .a=0x82, .x=0x67, .y=0xc7, .sp=0x40, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0067, .value=0x3c}, {.addr=0xf695, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xf695, .value=0x46, .type=IO_READ},
        {.addr=0xf696, .value=DUMMY, .type=IO_READ},
        {.addr=0x0067, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0367) {
    const struct CPU_State initial_cpu = {.pc=0xa83d, .a=0xd2, .x=0x72, .y=0x49, .sp=0x55, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0x8a}, {.addr=0xa83d, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xa83e, .a=0x58, .x=0x72, .y=0x49, .sp=0x55, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0x8a}, {.addr=0xa83d, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xa83d, .value=0x46, .type=IO_READ},
        {.addr=0xa83e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0172, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0368) {
    const struct CPU_State initial_cpu = {.pc=0xb71b, .a=0xee, .x=0x9c, .y=0x94, .sp=0xee, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x019c, .value=0x5d}, {.addr=0xb71b, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xb71c, .a=0xb3, .x=0x9c, .y=0x94, .sp=0xee, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x019c, .value=0x5d}, {.addr=0xb71b, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xb71b, .value=0x46, .type=IO_READ},
        {.addr=0xb71c, .value=DUMMY, .type=IO_READ},
        {.addr=0x019c, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0369) {
    const struct CPU_State initial_cpu = {.pc=0xfcee, .a=0x17, .x=0x6c, .y=0xaa, .sp=0x7a, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x016c, .value=0x72}, {.addr=0xfcee, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xfcef, .a=0x65, .x=0x6c, .y=0xaa, .sp=0x7a, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x016c, .value=0x72}, {.addr=0xfcee, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xfcee, .value=0x46, .type=IO_READ},
        {.addr=0xfcef, .value=DUMMY, .type=IO_READ},
        {.addr=0x016c, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_036A) {
    const struct CPU_State initial_cpu = {.pc=0xbd7b, .a=0x70, .x=0xcf, .y=0x8e, .sp=0x66, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x00cf, .value=0xe7}, {.addr=0xbd7b, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xbd7c, .a=0x97, .x=0xcf, .y=0x8e, .sp=0x66, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x00cf, .value=0xe7}, {.addr=0xbd7b, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xbd7b, .value=0x46, .type=IO_READ},
        {.addr=0xbd7c, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cf, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_036B) {
    const struct CPU_State initial_cpu = {.pc=0xe3d8, .a=0xe0, .x=0x72, .y=0x25, .sp=0x9c, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0xba}, {.addr=0xe3d8, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xe3d9, .a=0x5a, .x=0x72, .y=0x25, .sp=0x9c, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0xba}, {.addr=0xe3d8, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xe3d8, .value=0x46, .type=IO_READ},
        {.addr=0xe3d9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0172, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_036C) {
    const struct CPU_State initial_cpu = {.pc=0xdfb1, .a=0x56, .x=0x9c, .y=0xb9, .sp=0x82, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x009c, .value=0x0b}, {.addr=0xdfb1, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xdfb2, .a=0x5d, .x=0x9c, .y=0xb9, .sp=0x82, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x009c, .value=0x0b}, {.addr=0xdfb1, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xdfb1, .value=0x46, .type=IO_READ},
        {.addr=0xdfb2, .value=DUMMY, .type=IO_READ},
        {.addr=0x009c, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_036E) {
    const struct CPU_State initial_cpu = {.pc=0x91b4, .a=0x22, .x=0xbf, .y=0xeb, .sp=0x35, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x00bf, .value=0xcf}, {.addr=0x91b4, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x91b5, .a=0xed, .x=0xbf, .y=0xeb, .sp=0x35, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x00bf, .value=0xcf}, {.addr=0x91b4, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x91b4, .value=0x46, .type=IO_READ},
        {.addr=0x91b5, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bf, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_036F) {
    const struct CPU_State initial_cpu = {.pc=0x0e0c, .a=0xf3, .x=0x80, .y=0x21, .sp=0xae, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0x62}, {.addr=0x0e0c, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x0e0d, .a=0x91, .x=0x80, .y=0x21, .sp=0xae, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0x62}, {.addr=0x0e0c, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x0e0c, .value=0x46, .type=IO_READ},
        {.addr=0x0e0d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0180, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0370) {
    const struct CPU_State initial_cpu = {.pc=0x959d, .a=0x5e, .x=0xe1, .y=0x21, .sp=0x0e, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x01e1, .value=0x8e}, {.addr=0x959d, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x959e, .a=0xd0, .x=0xe1, .y=0x21, .sp=0x0e, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x01e1, .value=0x8e}, {.addr=0x959d, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x959d, .value=0x46, .type=IO_READ},
        {.addr=0x959e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e1, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0371) {
    const struct CPU_State initial_cpu = {.pc=0x4000, .a=0x4d, .x=0xcf, .y=0x56, .sp=0xb5, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x01cf, .value=0x75}, {.addr=0x4000, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x4001, .a=0x38, .x=0xcf, .y=0x56, .sp=0xb5, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x01cf, .value=0x75}, {.addr=0x4000, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x4000, .value=0x46, .type=IO_READ},
        {.addr=0x4001, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cf, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0372) {
    const struct CPU_State initial_cpu = {.pc=0xadcc, .a=0x36, .x=0xe8, .y=0xa0, .sp=0x01, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x00e8, .value=0xe0}, {.addr=0xadcc, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xadcd, .a=0xd6, .x=0xe8, .y=0xa0, .sp=0x01, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x00e8, .value=0xe0}, {.addr=0xadcc, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xadcc, .value=0x46, .type=IO_READ},
        {.addr=0xadcd, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e8, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0373) {
    const struct CPU_State initial_cpu = {.pc=0x0584, .a=0x5d, .x=0xe7, .y=0xeb, .sp=0xfe, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x00e7, .value=0xf1}, {.addr=0x0584, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x0585, .a=0xac, .x=0xe7, .y=0xeb, .sp=0xfe, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x00e7, .value=0xf1}, {.addr=0x0584, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x0584, .value=0x46, .type=IO_READ},
        {.addr=0x0585, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e7, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0374) {
    const struct CPU_State initial_cpu = {.pc=0xa6dc, .a=0x5c, .x=0x40, .y=0x5a, .sp=0x36, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x0040, .value=0x96}, {.addr=0xa6dc, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xa6dd, .a=0xca, .x=0x40, .y=0x5a, .sp=0x36, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0040, .value=0x96}, {.addr=0xa6dc, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xa6dc, .value=0x46, .type=IO_READ},
        {.addr=0xa6dd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0040, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0375) {
    const struct CPU_State initial_cpu = {.pc=0xf4dd, .a=0x6c, .x=0x4d, .y=0x7b, .sp=0x9e, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x014d, .value=0xa2}, {.addr=0xf4dd, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xf4de, .a=0xce, .x=0x4d, .y=0x7b, .sp=0x9e, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x014d, .value=0xa2}, {.addr=0xf4dd, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xf4dd, .value=0x46, .type=IO_READ},
        {.addr=0xf4de, .value=DUMMY, .type=IO_READ},
        {.addr=0x014d, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0376) {
    const struct CPU_State initial_cpu = {.pc=0xb05d, .a=0x2f, .x=0x9c, .y=0xe0, .sp=0x58, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x009c, .value=0x8e}, {.addr=0xb05d, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xb05e, .a=0xa1, .x=0x9c, .y=0xe0, .sp=0x58, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x009c, .value=0x8e}, {.addr=0xb05d, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xb05d, .value=0x46, .type=IO_READ},
        {.addr=0xb05e, .value=DUMMY, .type=IO_READ},
        {.addr=0x009c, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0377) {
    const struct CPU_State initial_cpu = {.pc=0x1556, .a=0xec, .x=0xc3, .y=0xb4, .sp=0x1e, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x00c3, .value=0x30}, {.addr=0x1556, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x1557, .a=0xdc, .x=0xc3, .y=0xb4, .sp=0x1e, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x00c3, .value=0x30}, {.addr=0x1556, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x1556, .value=0x46, .type=IO_READ},
        {.addr=0x1557, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c3, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0378) {
    const struct CPU_State initial_cpu = {.pc=0x6c69, .a=0x69, .x=0xde, .y=0x44, .sp=0x2b, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x01de, .value=0xa3}, {.addr=0x6c69, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x6c6a, .a=0xca, .x=0xde, .y=0x44, .sp=0x2b, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x01de, .value=0xa3}, {.addr=0x6c69, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x6c69, .value=0x46, .type=IO_READ},
        {.addr=0x6c6a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01de, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0379) {
    const struct CPU_State initial_cpu = {.pc=0x9cd1, .a=0xc9, .x=0x3c, .y=0x60, .sp=0xe7, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0xf2}, {.addr=0x9cd1, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x9cd2, .a=0x3b, .x=0x3c, .y=0x60, .sp=0xe7, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0xf2}, {.addr=0x9cd1, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x9cd1, .value=0x46, .type=IO_READ},
        {.addr=0x9cd2, .value=DUMMY, .type=IO_READ},
        {.addr=0x013c, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_037A) {
    const struct CPU_State initial_cpu = {.pc=0xc517, .a=0x43, .x=0x06, .y=0x14, .sp=0x12, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0x35}, {.addr=0xc517, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xc518, .a=0x76, .x=0x06, .y=0x14, .sp=0x12, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0x35}, {.addr=0xc517, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xc517, .value=0x46, .type=IO_READ},
        {.addr=0xc518, .value=DUMMY, .type=IO_READ},
        {.addr=0x0106, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_037B) {
    const struct CPU_State initial_cpu = {.pc=0x5f75, .a=0x20, .x=0x51, .y=0xf7, .sp=0xd2, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x0051, .value=0x50}, {.addr=0x5f75, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x5f76, .a=0x70, .x=0x51, .y=0xf7, .sp=0xd2, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x0051, .value=0x50}, {.addr=0x5f75, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x5f75, .value=0x46, .type=IO_READ},
        {.addr=0x5f76, .value=DUMMY, .type=IO_READ},
        {.addr=0x0051, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_037C) {
    const struct CPU_State initial_cpu = {.pc=0xcca0, .a=0x0c, .x=0x07, .y=0xeb, .sp=0xb1, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x0007, .value=0x8a}, {.addr=0xcca0, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xcca1, .a=0x86, .x=0x07, .y=0xeb, .sp=0xb1, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x0007, .value=0x8a}, {.addr=0xcca0, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xcca0, .value=0x46, .type=IO_READ},
        {.addr=0xcca1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0007, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_037D) {
    const struct CPU_State initial_cpu = {.pc=0xf51b, .a=0x2a, .x=0xc5, .y=0x69, .sp=0x44, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x00c5, .value=0x19}, {.addr=0xf51b, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xf51c, .a=0x33, .x=0xc5, .y=0x69, .sp=0x44, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x00c5, .value=0x19}, {.addr=0xf51b, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xf51b, .value=0x46, .type=IO_READ},
        {.addr=0xf51c, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c5, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_037E) {
    const struct CPU_State initial_cpu = {.pc=0xb740, .a=0xd0, .x=0xdf, .y=0x22, .sp=0x98, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x00df, .value=0x4d}, {.addr=0xb740, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xb741, .a=0x9d, .x=0xdf, .y=0x22, .sp=0x98, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x00df, .value=0x4d}, {.addr=0xb740, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xb740, .value=0x46, .type=IO_READ},
        {.addr=0xb741, .value=DUMMY, .type=IO_READ},
        {.addr=0x00df, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_037F) {
    const struct CPU_State initial_cpu = {.pc=0xa51e, .a=0x65, .x=0x94, .y=0x32, .sp=0x83, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x0094, .value=0x3c}, {.addr=0xa51e, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xa51f, .a=0x59, .x=0x94, .y=0x32, .sp=0x83, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x0094, .value=0x3c}, {.addr=0xa51e, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xa51e, .value=0x46, .type=IO_READ},
        {.addr=0xa51f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0094, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0380) {
    const struct CPU_State initial_cpu = {.pc=0x5066, .a=0xca, .x=0xee, .y=0x27, .sp=0xe1, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x00ee, .value=0x01}, {.addr=0x5066, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x5067, .a=0xcb, .x=0xee, .y=0x27, .sp=0xe1, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x00ee, .value=0x01}, {.addr=0x5066, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x5066, .value=0x46, .type=IO_READ},
        {.addr=0x5067, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ee, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0381) {
    const struct CPU_State initial_cpu = {.pc=0xf33d, .a=0x80, .x=0xaf, .y=0x8d, .sp=0xe6, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x01af, .value=0x0a}, {.addr=0xf33d, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xf33e, .a=0x8a, .x=0xaf, .y=0x8d, .sp=0xe6, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x01af, .value=0x0a}, {.addr=0xf33d, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xf33d, .value=0x46, .type=IO_READ},
        {.addr=0xf33e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01af, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0382) {
    const struct CPU_State initial_cpu = {.pc=0xadd3, .a=0x33, .x=0x03, .y=0x1b, .sp=0x9b, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x0103, .value=0x7f}, {.addr=0xadd3, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xadd4, .a=0x4c, .x=0x03, .y=0x1b, .sp=0x9b, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x0103, .value=0x7f}, {.addr=0xadd3, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xadd3, .value=0x46, .type=IO_READ},
        {.addr=0xadd4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0103, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0383) {
    const struct CPU_State initial_cpu = {.pc=0x8a91, .a=0xa7, .x=0x20, .y=0x86, .sp=0xaf, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x0120, .value=0x1d}, {.addr=0x8a91, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x8a92, .a=0xba, .x=0x20, .y=0x86, .sp=0xaf, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x0120, .value=0x1d}, {.addr=0x8a91, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x8a91, .value=0x46, .type=IO_READ},
        {.addr=0x8a92, .value=DUMMY, .type=IO_READ},
        {.addr=0x0120, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0384) {
    const struct CPU_State initial_cpu = {.pc=0x1b88, .a=0x30, .x=0x6e, .y=0x8e, .sp=0xbe, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x016e, .value=0x84}, {.addr=0x1b88, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x1b89, .a=0xb4, .x=0x6e, .y=0x8e, .sp=0xbe, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x016e, .value=0x84}, {.addr=0x1b88, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x1b88, .value=0x46, .type=IO_READ},
        {.addr=0x1b89, .value=DUMMY, .type=IO_READ},
        {.addr=0x016e, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0385) {
    const struct CPU_State initial_cpu = {.pc=0xb5e3, .a=0x18, .x=0x00, .y=0x63, .sp=0x18, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x0100, .value=0xd6}, {.addr=0xb5e3, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xb5e4, .a=0xce, .x=0x00, .y=0x63, .sp=0x18, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x0100, .value=0xd6}, {.addr=0xb5e3, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xb5e3, .value=0x46, .type=IO_READ},
        {.addr=0xb5e4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0100, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0387) {
    const struct CPU_State initial_cpu = {.pc=0xe6c4, .a=0xac, .x=0x89, .y=0xcc, .sp=0x80, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x0189, .value=0xd7}, {.addr=0xe6c4, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xe6c5, .a=0x7b, .x=0x89, .y=0xcc, .sp=0x80, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x0189, .value=0xd7}, {.addr=0xe6c4, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xe6c4, .value=0x46, .type=IO_READ},
        {.addr=0xe6c5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0189, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0388) {
    const struct CPU_State initial_cpu = {.pc=0x3370, .a=0xa5, .x=0x4f, .y=0x19, .sp=0x73, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x004f, .value=0xe1}, {.addr=0x3370, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x3371, .a=0x44, .x=0x4f, .y=0x19, .sp=0x73, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x004f, .value=0xe1}, {.addr=0x3370, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x3370, .value=0x46, .type=IO_READ},
        {.addr=0x3371, .value=DUMMY, .type=IO_READ},
        {.addr=0x004f, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0389) {
    const struct CPU_State initial_cpu = {.pc=0x941f, .a=0xef, .x=0x27, .y=0x12, .sp=0x14, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x0027, .value=0x8b}, {.addr=0x941f, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x9420, .a=0x64, .x=0x27, .y=0x12, .sp=0x14, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x0027, .value=0x8b}, {.addr=0x941f, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x941f, .value=0x46, .type=IO_READ},
        {.addr=0x9420, .value=DUMMY, .type=IO_READ},
        {.addr=0x0027, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_038A) {
    const struct CPU_State initial_cpu = {.pc=0x104e, .a=0x91, .x=0x87, .y=0x9e, .sp=0x80, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x0187, .value=0xca}, {.addr=0x104e, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x104f, .a=0x5b, .x=0x87, .y=0x9e, .sp=0x80, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x0187, .value=0xca}, {.addr=0x104e, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x104e, .value=0x46, .type=IO_READ},
        {.addr=0x104f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0187, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_038B) {
    const struct CPU_State initial_cpu = {.pc=0x7e95, .a=0x0a, .x=0x54, .y=0x0d, .sp=0xd8, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x0054, .value=0x53}, {.addr=0x7e95, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x7e96, .a=0x59, .x=0x54, .y=0x0d, .sp=0xd8, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x0054, .value=0x53}, {.addr=0x7e95, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x7e95, .value=0x46, .type=IO_READ},
        {.addr=0x7e96, .value=DUMMY, .type=IO_READ},
        {.addr=0x0054, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_038C) {
    const struct CPU_State initial_cpu = {.pc=0x123e, .a=0x60, .x=0x2d, .y=0x70, .sp=0xfc, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x012d, .value=0xac}, {.addr=0x123e, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x123f, .a=0xcc, .x=0x2d, .y=0x70, .sp=0xfc, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x012d, .value=0xac}, {.addr=0x123e, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x123e, .value=0x46, .type=IO_READ},
        {.addr=0x123f, .value=DUMMY, .type=IO_READ},
        {.addr=0x012d, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_038D) {
    const struct CPU_State initial_cpu = {.pc=0x615b, .a=0x9d, .x=0xc2, .y=0x99, .sp=0xc9, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x00c2, .value=0x0c}, {.addr=0x615b, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x615c, .a=0x91, .x=0xc2, .y=0x99, .sp=0xc9, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x00c2, .value=0x0c}, {.addr=0x615b, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x615b, .value=0x46, .type=IO_READ},
        {.addr=0x615c, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c2, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_038E) {
    const struct CPU_State initial_cpu = {.pc=0xef21, .a=0x2f, .x=0x18, .y=0x8f, .sp=0x48, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x0018, .value=0x93}, {.addr=0xef21, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xef22, .a=0xbc, .x=0x18, .y=0x8f, .sp=0x48, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0018, .value=0x93}, {.addr=0xef21, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xef21, .value=0x46, .type=IO_READ},
        {.addr=0xef22, .value=DUMMY, .type=IO_READ},
        {.addr=0x0018, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0390) {
    const struct CPU_State initial_cpu = {.pc=0xcfc0, .a=0xd7, .x=0x4c, .y=0xcc, .sp=0x63, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x004c, .value=0x66}, {.addr=0xcfc0, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xcfc1, .a=0xb1, .x=0x4c, .y=0xcc, .sp=0x63, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x004c, .value=0x66}, {.addr=0xcfc0, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xcfc0, .value=0x46, .type=IO_READ},
        {.addr=0xcfc1, .value=DUMMY, .type=IO_READ},
        {.addr=0x004c, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0391) {
    const struct CPU_State initial_cpu = {.pc=0xcbfb, .a=0x5d, .x=0xb0, .y=0xc0, .sp=0x82, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0x75}, {.addr=0xcbfb, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xcbfc, .a=0x28, .x=0xb0, .y=0xc0, .sp=0x82, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0x75}, {.addr=0xcbfb, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xcbfb, .value=0x46, .type=IO_READ},
        {.addr=0xcbfc, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b0, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0392) {
    const struct CPU_State initial_cpu = {.pc=0x2398, .a=0xaa, .x=0xa6, .y=0xb2, .sp=0xac, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x00a6, .value=0x5d}, {.addr=0x2398, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x2399, .a=0xf7, .x=0xa6, .y=0xb2, .sp=0xac, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x00a6, .value=0x5d}, {.addr=0x2398, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x2398, .value=0x46, .type=IO_READ},
        {.addr=0x2399, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a6, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0393) {
    const struct CPU_State initial_cpu = {.pc=0x65f5, .a=0xef, .x=0x49, .y=0xf4, .sp=0x63, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x0049, .value=0x61}, {.addr=0x65f5, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x65f6, .a=0x8e, .x=0x49, .y=0xf4, .sp=0x63, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x0049, .value=0x61}, {.addr=0x65f5, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x65f5, .value=0x46, .type=IO_READ},
        {.addr=0x65f6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0049, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0394) {
    const struct CPU_State initial_cpu = {.pc=0x724d, .a=0xa7, .x=0xa7, .y=0xd0, .sp=0xb4, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x00a7, .value=0xc9}, {.addr=0x724d, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x724e, .a=0x6e, .x=0xa7, .y=0xd0, .sp=0xb4, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x00a7, .value=0xc9}, {.addr=0x724d, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x724d, .value=0x46, .type=IO_READ},
        {.addr=0x724e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a7, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0395) {
    const struct CPU_State initial_cpu = {.pc=0xe3b4, .a=0x31, .x=0x13, .y=0x90, .sp=0x28, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0x8b}, {.addr=0xe3b4, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xe3b5, .a=0xba, .x=0x13, .y=0x90, .sp=0x28, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0x8b}, {.addr=0xe3b4, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xe3b4, .value=0x46, .type=IO_READ},
        {.addr=0xe3b5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0113, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0396) {
    const struct CPU_State initial_cpu = {.pc=0x7134, .a=0x6c, .x=0xcf, .y=0xd9, .sp=0x33, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x01cf, .value=0xa6}, {.addr=0x7134, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x7135, .a=0xca, .x=0xcf, .y=0xd9, .sp=0x33, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x01cf, .value=0xa6}, {.addr=0x7134, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x7134, .value=0x46, .type=IO_READ},
        {.addr=0x7135, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cf, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0397) {
    const struct CPU_State initial_cpu = {.pc=0x5e51, .a=0x7a, .x=0x30, .y=0x5d, .sp=0x3a, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x0030, .value=0x82}, {.addr=0x5e51, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x5e52, .a=0xf8, .x=0x30, .y=0x5d, .sp=0x3a, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x0030, .value=0x82}, {.addr=0x5e51, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x5e51, .value=0x46, .type=IO_READ},
        {.addr=0x5e52, .value=DUMMY, .type=IO_READ},
        {.addr=0x0030, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0398) {
    const struct CPU_State initial_cpu = {.pc=0xda3f, .a=0x97, .x=0x6e, .y=0x7b, .sp=0x9d, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x006e, .value=0x02}, {.addr=0xda3f, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xda40, .a=0x95, .x=0x6e, .y=0x7b, .sp=0x9d, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x006e, .value=0x02}, {.addr=0xda3f, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xda3f, .value=0x46, .type=IO_READ},
        {.addr=0xda40, .value=DUMMY, .type=IO_READ},
        {.addr=0x006e, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_0399) {
    const struct CPU_State initial_cpu = {.pc=0x7d8f, .a=0xf4, .x=0x0f, .y=0xb7, .sp=0xfa, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x010f, .value=0x2c}, {.addr=0x7d8f, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x7d90, .a=0xd8, .x=0x0f, .y=0xb7, .sp=0xfa, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x010f, .value=0x2c}, {.addr=0x7d8f, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x7d8f, .value=0x46, .type=IO_READ},
        {.addr=0x7d90, .value=DUMMY, .type=IO_READ},
        {.addr=0x010f, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_039A) {
    const struct CPU_State initial_cpu = {.pc=0x25dd, .a=0x12, .x=0xd3, .y=0xf4, .sp=0x4a, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x00d3, .value=0x29}, {.addr=0x25dd, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x25de, .a=0x3b, .x=0xd3, .y=0xf4, .sp=0x4a, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x00d3, .value=0x29}, {.addr=0x25dd, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x25dd, .value=0x46, .type=IO_READ},
        {.addr=0x25de, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d3, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_039B) {
    const struct CPU_State initial_cpu = {.pc=0xf254, .a=0x89, .x=0x3b, .y=0x67, .sp=0x00, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x013b, .value=0xc2}, {.addr=0xf254, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xf255, .a=0x4b, .x=0x3b, .y=0x67, .sp=0x00, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x013b, .value=0xc2}, {.addr=0xf254, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xf254, .value=0x46, .type=IO_READ},
        {.addr=0xf255, .value=DUMMY, .type=IO_READ},
        {.addr=0x013b, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_039C) {
    const struct CPU_State initial_cpu = {.pc=0x0401, .a=0xbe, .x=0x94, .y=0x99, .sp=0xca, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x0094, .value=0x88}, {.addr=0x0401, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x0402, .a=0x36, .x=0x94, .y=0x99, .sp=0xca, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0094, .value=0x88}, {.addr=0x0401, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x0401, .value=0x46, .type=IO_READ},
        {.addr=0x0402, .value=DUMMY, .type=IO_READ},
        {.addr=0x0094, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_039D) {
    const struct CPU_State initial_cpu = {.pc=0x6314, .a=0x47, .x=0xe1, .y=0x72, .sp=0x98, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x00e1, .value=0x85}, {.addr=0x6314, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x6315, .a=0xc2, .x=0xe1, .y=0x72, .sp=0x98, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x00e1, .value=0x85}, {.addr=0x6314, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x6314, .value=0x46, .type=IO_READ},
        {.addr=0x6315, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e1, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_039E) {
    const struct CPU_State initial_cpu = {.pc=0xbf2c, .a=0x12, .x=0x29, .y=0x7f, .sp=0x6c, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x0129, .value=0xc1}, {.addr=0xbf2c, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xbf2d, .a=0xd3, .x=0x29, .y=0x7f, .sp=0x6c, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x0129, .value=0xc1}, {.addr=0xbf2c, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xbf2c, .value=0x46, .type=IO_READ},
        {.addr=0xbf2d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0129, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_039F) {
    const struct CPU_State initial_cpu = {.pc=0xddb6, .a=0xce, .x=0x4f, .y=0x70, .sp=0x65, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x004f, .value=0xa3}, {.addr=0xddb6, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xddb7, .a=0x6d, .x=0x4f, .y=0x70, .sp=0x65, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x004f, .value=0xa3}, {.addr=0xddb6, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xddb6, .value=0x46, .type=IO_READ},
        {.addr=0xddb7, .value=DUMMY, .type=IO_READ},
        {.addr=0x004f, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03A0) {
    const struct CPU_State initial_cpu = {.pc=0xf0ea, .a=0xf3, .x=0x36, .y=0x0d, .sp=0x0d, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x0036, .value=0x9e}, {.addr=0xf0ea, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xf0eb, .a=0x6d, .x=0x36, .y=0x0d, .sp=0x0d, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x0036, .value=0x9e}, {.addr=0xf0ea, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xf0ea, .value=0x46, .type=IO_READ},
        {.addr=0xf0eb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0036, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03A1) {
    const struct CPU_State initial_cpu = {.pc=0x2467, .a=0xd3, .x=0x83, .y=0x7a, .sp=0x24, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x0083, .value=0xfe}, {.addr=0x2467, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x2468, .a=0x2d, .x=0x83, .y=0x7a, .sp=0x24, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x0083, .value=0xfe}, {.addr=0x2467, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x2467, .value=0x46, .type=IO_READ},
        {.addr=0x2468, .value=DUMMY, .type=IO_READ},
        {.addr=0x0083, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03A2) {
    const struct CPU_State initial_cpu = {.pc=0x1346, .a=0x6e, .x=0x18, .y=0x93, .sp=0xc3, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x0018, .value=0xf2}, {.addr=0x1346, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x1347, .a=0x9c, .x=0x18, .y=0x93, .sp=0xc3, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x0018, .value=0xf2}, {.addr=0x1346, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x1346, .value=0x46, .type=IO_READ},
        {.addr=0x1347, .value=DUMMY, .type=IO_READ},
        {.addr=0x0018, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03A3) {
    const struct CPU_State initial_cpu = {.pc=0xdcf1, .a=0x2e, .x=0xe3, .y=0x8f, .sp=0xba, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0x98}, {.addr=0xdcf1, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xdcf2, .a=0xb6, .x=0xe3, .y=0x8f, .sp=0xba, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0x98}, {.addr=0xdcf1, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xdcf1, .value=0x46, .type=IO_READ},
        {.addr=0xdcf2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e3, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03A4) {
    const struct CPU_State initial_cpu = {.pc=0x2f4f, .a=0xde, .x=0x0d, .y=0x98, .sp=0xc0, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x000d, .value=0x84}, {.addr=0x2f4f, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x2f50, .a=0x5a, .x=0x0d, .y=0x98, .sp=0xc0, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x000d, .value=0x84}, {.addr=0x2f4f, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x2f4f, .value=0x46, .type=IO_READ},
        {.addr=0x2f50, .value=DUMMY, .type=IO_READ},
        {.addr=0x000d, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03A5) {
    const struct CPU_State initial_cpu = {.pc=0x8faf, .a=0x49, .x=0x13, .y=0xab, .sp=0x78, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x0013, .value=0xac}, {.addr=0x8faf, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x8fb0, .a=0xe5, .x=0x13, .y=0xab, .sp=0x78, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0013, .value=0xac}, {.addr=0x8faf, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x8faf, .value=0x46, .type=IO_READ},
        {.addr=0x8fb0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0013, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x017e, .a=0x7b, .x=0x4e, .y=0x15, .sp=0x87, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0x81}, {.addr=0x017e, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x017f, .a=0xfa, .x=0x4e, .y=0x15, .sp=0x87, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0x81}, {.addr=0x017e, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x017e, .value=0x46, .type=IO_READ},
        {.addr=0x017f, .value=DUMMY, .type=IO_READ},
        {.addr=0x014e, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03A7) {
    const struct CPU_State initial_cpu = {.pc=0x53f8, .a=0xb4, .x=0xe6, .y=0xd4, .sp=0x2f, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x00e6, .value=0xe5}, {.addr=0x53f8, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x53f9, .a=0x51, .x=0xe6, .y=0xd4, .sp=0x2f, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x00e6, .value=0xe5}, {.addr=0x53f8, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x53f8, .value=0x46, .type=IO_READ},
        {.addr=0x53f9, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e6, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03A8) {
    const struct CPU_State initial_cpu = {.pc=0x4184, .a=0x00, .x=0x10, .y=0x51, .sp=0x08, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0x2a}, {.addr=0x4184, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x4185, .a=0x2a, .x=0x10, .y=0x51, .sp=0x08, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0x2a}, {.addr=0x4184, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x4184, .value=0x46, .type=IO_READ},
        {.addr=0x4185, .value=DUMMY, .type=IO_READ},
        {.addr=0x0110, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03A9) {
    const struct CPU_State initial_cpu = {.pc=0x94ca, .a=0xb8, .x=0x15, .y=0xba, .sp=0xc6, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x0115, .value=0x32}, {.addr=0x94ca, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x94cb, .a=0x8a, .x=0x15, .y=0xba, .sp=0xc6, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x0115, .value=0x32}, {.addr=0x94ca, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x94ca, .value=0x46, .type=IO_READ},
        {.addr=0x94cb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0115, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03AA) {
    const struct CPU_State initial_cpu = {.pc=0xec53, .a=0xf1, .x=0x84, .y=0x70, .sp=0xa4, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0xee}, {.addr=0xec53, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xec54, .a=0x1f, .x=0x84, .y=0x70, .sp=0xa4, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0xee}, {.addr=0xec53, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xec53, .value=0x46, .type=IO_READ},
        {.addr=0xec54, .value=DUMMY, .type=IO_READ},
        {.addr=0x0184, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03AB) {
    const struct CPU_State initial_cpu = {.pc=0x325a, .a=0x95, .x=0x89, .y=0xb2, .sp=0x27, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x0089, .value=0xf6}, {.addr=0x325a, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x325b, .a=0x63, .x=0x89, .y=0xb2, .sp=0x27, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x0089, .value=0xf6}, {.addr=0x325a, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x325a, .value=0x46, .type=IO_READ},
        {.addr=0x325b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0089, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03AC) {
    const struct CPU_State initial_cpu = {.pc=0x8f7c, .a=0xcd, .x=0xcb, .y=0x60, .sp=0x20, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x00cb, .value=0x91}, {.addr=0x8f7c, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x8f7d, .a=0x5c, .x=0xcb, .y=0x60, .sp=0x20, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x00cb, .value=0x91}, {.addr=0x8f7c, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x8f7c, .value=0x46, .type=IO_READ},
        {.addr=0x8f7d, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cb, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03AD) {
    const struct CPU_State initial_cpu = {.pc=0x6023, .a=0xce, .x=0x98, .y=0xd7, .sp=0x8d, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x0098, .value=0xa7}, {.addr=0x6023, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x6024, .a=0x69, .x=0x98, .y=0xd7, .sp=0x8d, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x0098, .value=0xa7}, {.addr=0x6023, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x6023, .value=0x46, .type=IO_READ},
        {.addr=0x6024, .value=DUMMY, .type=IO_READ},
        {.addr=0x0098, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03AE) {
    const struct CPU_State initial_cpu = {.pc=0xf15c, .a=0x76, .x=0xd4, .y=0xce, .sp=0x8f, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x01d4, .value=0x07}, {.addr=0xf15c, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xf15d, .a=0x71, .x=0xd4, .y=0xce, .sp=0x8f, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x01d4, .value=0x07}, {.addr=0xf15c, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xf15c, .value=0x46, .type=IO_READ},
        {.addr=0xf15d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d4, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03AF) {
    const struct CPU_State initial_cpu = {.pc=0x9008, .a=0x31, .x=0x45, .y=0xb9, .sp=0xef, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0xfd}, {.addr=0x9008, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x9009, .a=0xcc, .x=0x45, .y=0xb9, .sp=0xef, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0xfd}, {.addr=0x9008, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x9008, .value=0x46, .type=IO_READ},
        {.addr=0x9009, .value=DUMMY, .type=IO_READ},
        {.addr=0x0145, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03B0) {
    const struct CPU_State initial_cpu = {.pc=0xe003, .a=0xba, .x=0xc4, .y=0xc6, .sp=0x56, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x01c4, .value=0x9e}, {.addr=0xe003, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xe004, .a=0x24, .x=0xc4, .y=0xc6, .sp=0x56, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x01c4, .value=0x9e}, {.addr=0xe003, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xe003, .value=0x46, .type=IO_READ},
        {.addr=0xe004, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c4, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03B1) {
    const struct CPU_State initial_cpu = {.pc=0x8061, .a=0xc5, .x=0xe1, .y=0x01, .sp=0x24, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x00e1, .value=0x1c}, {.addr=0x8061, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x8062, .a=0xd9, .x=0xe1, .y=0x01, .sp=0x24, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x00e1, .value=0x1c}, {.addr=0x8061, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x8061, .value=0x46, .type=IO_READ},
        {.addr=0x8062, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e1, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03B2) {
    const struct CPU_State initial_cpu = {.pc=0x9e22, .a=0x02, .x=0x00, .y=0x2e, .sp=0x7a, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x0000, .value=0x69}, {.addr=0x9e22, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x9e23, .a=0x6b, .x=0x00, .y=0x2e, .sp=0x7a, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x0000, .value=0x69}, {.addr=0x9e22, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x9e22, .value=0x46, .type=IO_READ},
        {.addr=0x9e23, .value=DUMMY, .type=IO_READ},
        {.addr=0x0000, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03B3) {
    const struct CPU_State initial_cpu = {.pc=0xf1cf, .a=0x3b, .x=0xaf, .y=0x15, .sp=0xd5, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x01af, .value=0x3e}, {.addr=0xf1cf, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xf1d0, .a=0x05, .x=0xaf, .y=0x15, .sp=0xd5, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x01af, .value=0x3e}, {.addr=0xf1cf, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xf1cf, .value=0x46, .type=IO_READ},
        {.addr=0xf1d0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01af, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03B4) {
    const struct CPU_State initial_cpu = {.pc=0xb3eb, .a=0xec, .x=0x67, .y=0xf4, .sp=0xd9, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x0067, .value=0xeb}, {.addr=0xb3eb, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xb3ec, .a=0x07, .x=0x67, .y=0xf4, .sp=0xd9, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x0067, .value=0xeb}, {.addr=0xb3eb, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xb3eb, .value=0x46, .type=IO_READ},
        {.addr=0xb3ec, .value=DUMMY, .type=IO_READ},
        {.addr=0x0067, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03B5) {
    const struct CPU_State initial_cpu = {.pc=0x8ccd, .a=0x7a, .x=0x4a, .y=0x03, .sp=0x9c, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x014a, .value=0x04}, {.addr=0x8ccd, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x8cce, .a=0x7e, .x=0x4a, .y=0x03, .sp=0x9c, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x014a, .value=0x04}, {.addr=0x8ccd, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x8ccd, .value=0x46, .type=IO_READ},
        {.addr=0x8cce, .value=DUMMY, .type=IO_READ},
        {.addr=0x014a, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03B7) {
    const struct CPU_State initial_cpu = {.pc=0xe55e, .a=0x93, .x=0xfd, .y=0x02, .sp=0xdc, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x01fd, .value=0x6c}, {.addr=0xe55e, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xe55f, .a=0xff, .x=0xfd, .y=0x02, .sp=0xdc, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x01fd, .value=0x6c}, {.addr=0xe55e, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xe55e, .value=0x46, .type=IO_READ},
        {.addr=0xe55f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fd, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03B8) {
    const struct CPU_State initial_cpu = {.pc=0x242c, .a=0xfb, .x=0x5a, .y=0x67, .sp=0x5f, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x005a, .value=0xba}, {.addr=0x242c, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x242d, .a=0x41, .x=0x5a, .y=0x67, .sp=0x5f, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x005a, .value=0xba}, {.addr=0x242c, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x242c, .value=0x46, .type=IO_READ},
        {.addr=0x242d, .value=DUMMY, .type=IO_READ},
        {.addr=0x005a, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03B9) {
    const struct CPU_State initial_cpu = {.pc=0x8bb6, .a=0xb9, .x=0xc8, .y=0xb7, .sp=0x06, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x00c8, .value=0x71}, {.addr=0x8bb6, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x8bb7, .a=0xc8, .x=0xc8, .y=0xb7, .sp=0x06, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x00c8, .value=0x71}, {.addr=0x8bb6, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x8bb6, .value=0x46, .type=IO_READ},
        {.addr=0x8bb7, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c8, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03BA) {
    const struct CPU_State initial_cpu = {.pc=0x082c, .a=0x6b, .x=0xb0, .y=0xeb, .sp=0x86, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x00b0, .value=0xc3}, {.addr=0x082c, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x082d, .a=0xa8, .x=0xb0, .y=0xeb, .sp=0x86, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x00b0, .value=0xc3}, {.addr=0x082c, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x082c, .value=0x46, .type=IO_READ},
        {.addr=0x082d, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b0, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03BB) {
    const struct CPU_State initial_cpu = {.pc=0x214a, .a=0xc4, .x=0x32, .y=0x27, .sp=0x07, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x0032, .value=0x48}, {.addr=0x214a, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x214b, .a=0x8c, .x=0x32, .y=0x27, .sp=0x07, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x0032, .value=0x48}, {.addr=0x214a, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x214a, .value=0x46, .type=IO_READ},
        {.addr=0x214b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0032, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03BC) {
    const struct CPU_State initial_cpu = {.pc=0x30a3, .a=0x8f, .x=0xde, .y=0x4f, .sp=0xde, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x01de, .value=0x04}, {.addr=0x30a3, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x30a4, .a=0x8b, .x=0xde, .y=0x4f, .sp=0xde, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x01de, .value=0x04}, {.addr=0x30a3, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x30a3, .value=0x46, .type=IO_READ},
        {.addr=0x30a4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01de, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03BD) {
    const struct CPU_State initial_cpu = {.pc=0xbf1f, .a=0x5f, .x=0xb9, .y=0xd1, .sp=0xbb, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0xdc}, {.addr=0xbf1f, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xbf20, .a=0x83, .x=0xb9, .y=0xd1, .sp=0xbb, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0xdc}, {.addr=0xbf1f, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xbf1f, .value=0x46, .type=IO_READ},
        {.addr=0xbf20, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b9, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03BE) {
    const struct CPU_State initial_cpu = {.pc=0x7e21, .a=0x9d, .x=0x01, .y=0x6d, .sp=0x6b, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x0101, .value=0x8d}, {.addr=0x7e21, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x7e22, .a=0x10, .x=0x01, .y=0x6d, .sp=0x6b, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x0101, .value=0x8d}, {.addr=0x7e21, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x7e21, .value=0x46, .type=IO_READ},
        {.addr=0x7e22, .value=DUMMY, .type=IO_READ},
        {.addr=0x0101, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03BF) {
    const struct CPU_State initial_cpu = {.pc=0x4a7c, .a=0xe8, .x=0x77, .y=0xc7, .sp=0xe4, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x0177, .value=0x11}, {.addr=0x4a7c, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x4a7d, .a=0xf9, .x=0x77, .y=0xc7, .sp=0xe4, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x0177, .value=0x11}, {.addr=0x4a7c, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x4a7c, .value=0x46, .type=IO_READ},
        {.addr=0x4a7d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0177, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03C0) {
    const struct CPU_State initial_cpu = {.pc=0xb51f, .a=0x11, .x=0xbf, .y=0x31, .sp=0x16, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x00bf, .value=0x1d}, {.addr=0xb51f, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xb520, .a=0x0c, .x=0xbf, .y=0x31, .sp=0x16, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x00bf, .value=0x1d}, {.addr=0xb51f, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xb51f, .value=0x46, .type=IO_READ},
        {.addr=0xb520, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bf, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03C1) {
    const struct CPU_State initial_cpu = {.pc=0xb126, .a=0x9f, .x=0x86, .y=0x31, .sp=0x05, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x0086, .value=0x7d}, {.addr=0xb126, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xb127, .a=0xe2, .x=0x86, .y=0x31, .sp=0x05, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x0086, .value=0x7d}, {.addr=0xb126, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xb126, .value=0x46, .type=IO_READ},
        {.addr=0xb127, .value=DUMMY, .type=IO_READ},
        {.addr=0x0086, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03C2) {
    const struct CPU_State initial_cpu = {.pc=0x87f1, .a=0x2d, .x=0x1d, .y=0xbd, .sp=0x03, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x001d, .value=0x2d}, {.addr=0x87f1, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x87f2, .a=0x00, .x=0x1d, .y=0xbd, .sp=0x03, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x001d, .value=0x2d}, {.addr=0x87f1, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x87f1, .value=0x46, .type=IO_READ},
        {.addr=0x87f2, .value=DUMMY, .type=IO_READ},
        {.addr=0x001d, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03C3) {
    const struct CPU_State initial_cpu = {.pc=0x4a96, .a=0x3a, .x=0x29, .y=0x4b, .sp=0xb1, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x0029, .value=0xc6}, {.addr=0x4a96, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x4a97, .a=0xfc, .x=0x29, .y=0x4b, .sp=0xb1, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x0029, .value=0xc6}, {.addr=0x4a96, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x4a96, .value=0x46, .type=IO_READ},
        {.addr=0x4a97, .value=DUMMY, .type=IO_READ},
        {.addr=0x0029, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03C4) {
    const struct CPU_State initial_cpu = {.pc=0x6349, .a=0x3e, .x=0x16, .y=0xc6, .sp=0x14, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x0116, .value=0xf9}, {.addr=0x6349, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x634a, .a=0xc7, .x=0x16, .y=0xc6, .sp=0x14, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x0116, .value=0xf9}, {.addr=0x6349, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x6349, .value=0x46, .type=IO_READ},
        {.addr=0x634a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0116, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03C5) {
    const struct CPU_State initial_cpu = {.pc=0xce1e, .a=0x57, .x=0x08, .y=0xf2, .sp=0x52, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x0008, .value=0x7e}, {.addr=0xce1e, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xce1f, .a=0x29, .x=0x08, .y=0xf2, .sp=0x52, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x0008, .value=0x7e}, {.addr=0xce1e, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xce1e, .value=0x46, .type=IO_READ},
        {.addr=0xce1f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0008, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03C6) {
    const struct CPU_State initial_cpu = {.pc=0x4973, .a=0x78, .x=0xec, .y=0x54, .sp=0xce, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x00ec, .value=0xd2}, {.addr=0x4973, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x4974, .a=0xaa, .x=0xec, .y=0x54, .sp=0xce, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x00ec, .value=0xd2}, {.addr=0x4973, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x4973, .value=0x46, .type=IO_READ},
        {.addr=0x4974, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ec, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03C7) {
    const struct CPU_State initial_cpu = {.pc=0x0553, .a=0xe3, .x=0xeb, .y=0xde, .sp=0xbb, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x00eb, .value=0x66}, {.addr=0x0553, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x0554, .a=0x85, .x=0xeb, .y=0xde, .sp=0xbb, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x00eb, .value=0x66}, {.addr=0x0553, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x0553, .value=0x46, .type=IO_READ},
        {.addr=0x0554, .value=DUMMY, .type=IO_READ},
        {.addr=0x00eb, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03C8) {
    const struct CPU_State initial_cpu = {.pc=0xf15d, .a=0xb2, .x=0x26, .y=0x71, .sp=0x03, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x0026, .value=0x99}, {.addr=0xf15d, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xf15e, .a=0x2b, .x=0x26, .y=0x71, .sp=0x03, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x0026, .value=0x99}, {.addr=0xf15d, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xf15d, .value=0x46, .type=IO_READ},
        {.addr=0xf15e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0026, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03C9) {
    const struct CPU_State initial_cpu = {.pc=0x4188, .a=0xeb, .x=0xdb, .y=0x64, .sp=0xc3, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x00db, .value=0x18}, {.addr=0x4188, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x4189, .a=0xf3, .x=0xdb, .y=0x64, .sp=0xc3, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x00db, .value=0x18}, {.addr=0x4188, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x4188, .value=0x46, .type=IO_READ},
        {.addr=0x4189, .value=DUMMY, .type=IO_READ},
        {.addr=0x00db, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03CA) {
    const struct CPU_State initial_cpu = {.pc=0x6129, .a=0x64, .x=0xc8, .y=0x6f, .sp=0xea, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x00c8, .value=0x3e}, {.addr=0x6129, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x612a, .a=0x5a, .x=0xc8, .y=0x6f, .sp=0xea, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x00c8, .value=0x3e}, {.addr=0x6129, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x6129, .value=0x46, .type=IO_READ},
        {.addr=0x612a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c8, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03CB) {
    const struct CPU_State initial_cpu = {.pc=0x2500, .a=0x6d, .x=0x71, .y=0x13, .sp=0xc7, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x0071, .value=0x2d}, {.addr=0x2500, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x2501, .a=0x40, .x=0x71, .y=0x13, .sp=0xc7, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x0071, .value=0x2d}, {.addr=0x2500, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x2500, .value=0x46, .type=IO_READ},
        {.addr=0x2501, .value=DUMMY, .type=IO_READ},
        {.addr=0x0071, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03CC) {
    const struct CPU_State initial_cpu = {.pc=0xa062, .a=0x83, .x=0x20, .y=0x3f, .sp=0xb3, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x0120, .value=0xfc}, {.addr=0xa062, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xa063, .a=0x7f, .x=0x20, .y=0x3f, .sp=0xb3, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x0120, .value=0xfc}, {.addr=0xa062, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xa062, .value=0x46, .type=IO_READ},
        {.addr=0xa063, .value=DUMMY, .type=IO_READ},
        {.addr=0x0120, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03CD) {
    const struct CPU_State initial_cpu = {.pc=0x3cd1, .a=0xfb, .x=0x60, .y=0x4c, .sp=0x94, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x0160, .value=0xa6}, {.addr=0x3cd1, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x3cd2, .a=0x5d, .x=0x60, .y=0x4c, .sp=0x94, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x0160, .value=0xa6}, {.addr=0x3cd1, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x3cd1, .value=0x46, .type=IO_READ},
        {.addr=0x3cd2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0160, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03CE) {
    const struct CPU_State initial_cpu = {.pc=0x1204, .a=0xfb, .x=0x49, .y=0xb3, .sp=0xd7, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x0149, .value=0xd1}, {.addr=0x1204, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x1205, .a=0x2a, .x=0x49, .y=0xb3, .sp=0xd7, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x0149, .value=0xd1}, {.addr=0x1204, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x1204, .value=0x46, .type=IO_READ},
        {.addr=0x1205, .value=DUMMY, .type=IO_READ},
        {.addr=0x0149, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03CF) {
    const struct CPU_State initial_cpu = {.pc=0xf3d1, .a=0x59, .x=0xc7, .y=0x9d, .sp=0x87, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x00c7, .value=0x5d}, {.addr=0xf3d1, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xf3d2, .a=0x04, .x=0xc7, .y=0x9d, .sp=0x87, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x00c7, .value=0x5d}, {.addr=0xf3d1, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xf3d1, .value=0x46, .type=IO_READ},
        {.addr=0xf3d2, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c7, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03D0) {
    const struct CPU_State initial_cpu = {.pc=0xa19b, .a=0xf3, .x=0x17, .y=0xa8, .sp=0x98, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x0117, .value=0x7a}, {.addr=0xa19b, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xa19c, .a=0x89, .x=0x17, .y=0xa8, .sp=0x98, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x0117, .value=0x7a}, {.addr=0xa19b, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xa19b, .value=0x46, .type=IO_READ},
        {.addr=0xa19c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0117, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03D1) {
    const struct CPU_State initial_cpu = {.pc=0x0d9d, .a=0x00, .x=0x3b, .y=0x19, .sp=0xfa, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x013b, .value=0x68}, {.addr=0x0d9d, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x0d9e, .a=0x68, .x=0x3b, .y=0x19, .sp=0xfa, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x013b, .value=0x68}, {.addr=0x0d9d, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x0d9d, .value=0x46, .type=IO_READ},
        {.addr=0x0d9e, .value=DUMMY, .type=IO_READ},
        {.addr=0x013b, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03D2) {
    const struct CPU_State initial_cpu = {.pc=0x6c09, .a=0x04, .x=0xed, .y=0x4c, .sp=0x6d, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x00ed, .value=0x8e}, {.addr=0x6c09, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x6c0a, .a=0x8a, .x=0xed, .y=0x4c, .sp=0x6d, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x00ed, .value=0x8e}, {.addr=0x6c09, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x6c09, .value=0x46, .type=IO_READ},
        {.addr=0x6c0a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ed, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03D3) {
    const struct CPU_State initial_cpu = {.pc=0xc184, .a=0xb3, .x=0xd3, .y=0x2c, .sp=0xa6, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x00d3, .value=0x58}, {.addr=0xc184, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xc185, .a=0xeb, .x=0xd3, .y=0x2c, .sp=0xa6, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x00d3, .value=0x58}, {.addr=0xc184, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xc184, .value=0x46, .type=IO_READ},
        {.addr=0xc185, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d3, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03D4) {
    const struct CPU_State initial_cpu = {.pc=0x1ea8, .a=0x37, .x=0x87, .y=0x75, .sp=0x6b, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x0087, .value=0xa9}, {.addr=0x1ea8, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x1ea9, .a=0x9e, .x=0x87, .y=0x75, .sp=0x6b, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x0087, .value=0xa9}, {.addr=0x1ea8, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x1ea8, .value=0x46, .type=IO_READ},
        {.addr=0x1ea9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0087, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03D5) {
    const struct CPU_State initial_cpu = {.pc=0xf7b9, .a=0x65, .x=0xd0, .y=0x75, .sp=0x0b, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x00d0, .value=0xdc}, {.addr=0xf7b9, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xf7ba, .a=0xb9, .x=0xd0, .y=0x75, .sp=0x0b, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x00d0, .value=0xdc}, {.addr=0xf7b9, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xf7b9, .value=0x46, .type=IO_READ},
        {.addr=0xf7ba, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d0, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03D6) {
    const struct CPU_State initial_cpu = {.pc=0x1132, .a=0x50, .x=0x80, .y=0x5c, .sp=0x7f, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x0080, .value=0x04}, {.addr=0x1132, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x1133, .a=0x54, .x=0x80, .y=0x5c, .sp=0x7f, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0080, .value=0x04}, {.addr=0x1132, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x1132, .value=0x46, .type=IO_READ},
        {.addr=0x1133, .value=DUMMY, .type=IO_READ},
        {.addr=0x0080, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03D7) {
    const struct CPU_State initial_cpu = {.pc=0x4b30, .a=0x1b, .x=0x3d, .y=0x9e, .sp=0x87, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x013d, .value=0xdb}, {.addr=0x4b30, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x4b31, .a=0xc0, .x=0x3d, .y=0x9e, .sp=0x87, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x013d, .value=0xdb}, {.addr=0x4b30, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x4b30, .value=0x46, .type=IO_READ},
        {.addr=0x4b31, .value=DUMMY, .type=IO_READ},
        {.addr=0x013d, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03D8) {
    const struct CPU_State initial_cpu = {.pc=0xcda3, .a=0x9a, .x=0xbb, .y=0x59, .sp=0xeb, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x01bb, .value=0x0b}, {.addr=0xcda3, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xcda4, .a=0x91, .x=0xbb, .y=0x59, .sp=0xeb, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x01bb, .value=0x0b}, {.addr=0xcda3, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xcda3, .value=0x46, .type=IO_READ},
        {.addr=0xcda4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bb, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03D9) {
    const struct CPU_State initial_cpu = {.pc=0x735c, .a=0x99, .x=0x28, .y=0x82, .sp=0x84, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x0128, .value=0xb0}, {.addr=0x735c, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x735d, .a=0x29, .x=0x28, .y=0x82, .sp=0x84, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x0128, .value=0xb0}, {.addr=0x735c, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x735c, .value=0x46, .type=IO_READ},
        {.addr=0x735d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0128, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03DA) {
    const struct CPU_State initial_cpu = {.pc=0x32b7, .a=0xe7, .x=0x0c, .y=0xd1, .sp=0x1c, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0x1f}, {.addr=0x32b7, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x32b8, .a=0xf8, .x=0x0c, .y=0xd1, .sp=0x1c, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0x1f}, {.addr=0x32b7, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x32b7, .value=0x46, .type=IO_READ},
        {.addr=0x32b8, .value=DUMMY, .type=IO_READ},
        {.addr=0x010c, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03DB) {
    const struct CPU_State initial_cpu = {.pc=0x8b56, .a=0x20, .x=0x11, .y=0x69, .sp=0x16, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x0111, .value=0x36}, {.addr=0x8b56, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x8b57, .a=0x16, .x=0x11, .y=0x69, .sp=0x16, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x0111, .value=0x36}, {.addr=0x8b56, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x8b56, .value=0x46, .type=IO_READ},
        {.addr=0x8b57, .value=DUMMY, .type=IO_READ},
        {.addr=0x0111, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03DC) {
    const struct CPU_State initial_cpu = {.pc=0x1fcf, .a=0x32, .x=0x12, .y=0x2e, .sp=0xbb, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x0012, .value=0xd2}, {.addr=0x1fcf, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x1fd0, .a=0xe0, .x=0x12, .y=0x2e, .sp=0xbb, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0012, .value=0xd2}, {.addr=0x1fcf, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x1fcf, .value=0x46, .type=IO_READ},
        {.addr=0x1fd0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0012, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03DD) {
    const struct CPU_State initial_cpu = {.pc=0x3ab1, .a=0x1f, .x=0xf1, .y=0x06, .sp=0x0c, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x01f1, .value=0xab}, {.addr=0x3ab1, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x3ab2, .a=0xb4, .x=0xf1, .y=0x06, .sp=0x0c, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x01f1, .value=0xab}, {.addr=0x3ab1, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x3ab1, .value=0x46, .type=IO_READ},
        {.addr=0x3ab2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f1, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03DE) {
    const struct CPU_State initial_cpu = {.pc=0x6a74, .a=0x21, .x=0xeb, .y=0xab, .sp=0xc7, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0x5c}, {.addr=0x6a74, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x6a75, .a=0x7d, .x=0xeb, .y=0xab, .sp=0xc7, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0x5c}, {.addr=0x6a74, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x6a74, .value=0x46, .type=IO_READ},
        {.addr=0x6a75, .value=DUMMY, .type=IO_READ},
        {.addr=0x01eb, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03DF) {
    const struct CPU_State initial_cpu = {.pc=0xcef2, .a=0x0a, .x=0xcd, .y=0x6a, .sp=0xc5, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x00cd, .value=0x10}, {.addr=0xcef2, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xcef3, .a=0x1a, .x=0xcd, .y=0x6a, .sp=0xc5, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x00cd, .value=0x10}, {.addr=0xcef2, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xcef2, .value=0x46, .type=IO_READ},
        {.addr=0xcef3, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cd, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03E0) {
    const struct CPU_State initial_cpu = {.pc=0x0cbe, .a=0x49, .x=0x47, .y=0x8d, .sp=0x5a, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x0047, .value=0x68}, {.addr=0x0cbe, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x0cbf, .a=0x21, .x=0x47, .y=0x8d, .sp=0x5a, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0047, .value=0x68}, {.addr=0x0cbe, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x0cbe, .value=0x46, .type=IO_READ},
        {.addr=0x0cbf, .value=DUMMY, .type=IO_READ},
        {.addr=0x0047, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03E1) {
    const struct CPU_State initial_cpu = {.pc=0x1e5c, .a=0xb7, .x=0x3c, .y=0xaf, .sp=0x52, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x003c, .value=0xc7}, {.addr=0x1e5c, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x1e5d, .a=0x70, .x=0x3c, .y=0xaf, .sp=0x52, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x003c, .value=0xc7}, {.addr=0x1e5c, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x1e5c, .value=0x46, .type=IO_READ},
        {.addr=0x1e5d, .value=DUMMY, .type=IO_READ},
        {.addr=0x003c, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03E2) {
    const struct CPU_State initial_cpu = {.pc=0x4d37, .a=0x00, .x=0x0f, .y=0xd9, .sp=0xff, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x010f, .value=0x00}, {.addr=0x4d37, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x4d38, .a=0x00, .x=0x0f, .y=0xd9, .sp=0xff, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x010f, .value=0x00}, {.addr=0x4d37, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x4d37, .value=0x46, .type=IO_READ},
        {.addr=0x4d38, .value=DUMMY, .type=IO_READ},
        {.addr=0x010f, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03E3) {
    const struct CPU_State initial_cpu = {.pc=0x7dd1, .a=0xf0, .x=0x8a, .y=0x8d, .sp=0xb2, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x008a, .value=0x8d}, {.addr=0x7dd1, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x7dd2, .a=0x7d, .x=0x8a, .y=0x8d, .sp=0xb2, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x008a, .value=0x8d}, {.addr=0x7dd1, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x7dd1, .value=0x46, .type=IO_READ},
        {.addr=0x7dd2, .value=DUMMY, .type=IO_READ},
        {.addr=0x008a, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03E4) {
    const struct CPU_State initial_cpu = {.pc=0x6ff1, .a=0x87, .x=0x64, .y=0x00, .sp=0xeb, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0xcd}, {.addr=0x6ff1, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x6ff2, .a=0x4a, .x=0x64, .y=0x00, .sp=0xeb, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0xcd}, {.addr=0x6ff1, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x6ff1, .value=0x46, .type=IO_READ},
        {.addr=0x6ff2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0164, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03E5) {
    const struct CPU_State initial_cpu = {.pc=0xb5d3, .a=0xd6, .x=0x2c, .y=0xb8, .sp=0x4d, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x012c, .value=0x76}, {.addr=0xb5d3, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xb5d4, .a=0xa0, .x=0x2c, .y=0xb8, .sp=0x4d, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x012c, .value=0x76}, {.addr=0xb5d3, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xb5d3, .value=0x46, .type=IO_READ},
        {.addr=0xb5d4, .value=DUMMY, .type=IO_READ},
        {.addr=0x012c, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03E6) {
    const struct CPU_State initial_cpu = {.pc=0x8f9e, .a=0x4f, .x=0x33, .y=0x7c, .sp=0x6e, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0x61}, {.addr=0x8f9e, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x8f9f, .a=0x2e, .x=0x33, .y=0x7c, .sp=0x6e, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0x61}, {.addr=0x8f9e, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x8f9e, .value=0x46, .type=IO_READ},
        {.addr=0x8f9f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0133, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_46, _46_03E7) {
    const struct CPU_State initial_cpu = {.pc=0xd7a5, .a=0x50, .x=0x7d, .y=0xf4, .sp=0x38, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x007d, .value=0xce}, {.addr=0xd7a5, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xd7a6, .a=0x9e, .x=0x7d, .y=0xf4, .sp=0x38, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x007d, .value=0xce}, {.addr=0xd7a5, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xd7a5, .value=0x46, .type=IO_READ},
        {.addr=0xd7a6, .value=DUMMY, .type=IO_READ},
        {.addr=0x007d, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("46 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
