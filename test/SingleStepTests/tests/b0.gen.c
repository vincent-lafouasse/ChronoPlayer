#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_B0, _B0_0000) {
    const struct CPU_State initial_cpu = {.pc=0x5cbd, .a=0x82, .x=0xa0, .y=0x92, .sp=0x62, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x5cbd, .value=0xb0}, {.addr=0x5cbe, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0x5cbf, .a=0x82, .x=0xa0, .y=0x92, .sp=0x62, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x5cbd, .value=0xb0}, {.addr=0x5cbe, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0x5cbd, .value=0xb0, .type=IO_READ},
        {.addr=0x5cbe, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0001) {
    const struct CPU_State initial_cpu = {.pc=0xe861, .a=0x30, .x=0x2c, .y=0x34, .sp=0xf3, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xe861, .value=0xb0}, {.addr=0xe862, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xe863, .a=0x30, .x=0x2c, .y=0x34, .sp=0xf3, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0xe861, .value=0xb0}, {.addr=0xe862, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xe861, .value=0xb0, .type=IO_READ},
        {.addr=0xe862, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0002) {
    const struct CPU_State initial_cpu = {.pc=0x5a8b, .a=0xf7, .x=0x62, .y=0x89, .sp=0xbc, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x5a8b, .value=0xb0}, {.addr=0x5a8c, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x5a9a, .a=0xf7, .x=0x62, .y=0x89, .sp=0xbc, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x5a8b, .value=0xb0}, {.addr=0x5a8c, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x5a8b, .value=0xb0, .type=IO_READ},
        {.addr=0x5a8c, .value=0x0d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0003) {
    const struct CPU_State initial_cpu = {.pc=0x0ead, .a=0xc0, .x=0x17, .y=0x21, .sp=0x9b, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x0ead, .value=0xb0}, {.addr=0x0eae, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0x0eaf, .a=0xc0, .x=0x17, .y=0x21, .sp=0x9b, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x0ead, .value=0xb0}, {.addr=0x0eae, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0x0ead, .value=0xb0, .type=IO_READ},
        {.addr=0x0eae, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0004) {
    const struct CPU_State initial_cpu = {.pc=0x3920, .a=0x08, .x=0x55, .y=0x4c, .sp=0xfe, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x3920, .value=0xb0}, {.addr=0x3921, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x3922, .a=0x08, .x=0x55, .y=0x4c, .sp=0xfe, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x3920, .value=0xb0}, {.addr=0x3921, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x3920, .value=0xb0, .type=IO_READ},
        {.addr=0x3921, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0005) {
    const struct CPU_State initial_cpu = {.pc=0x2ec5, .a=0x19, .x=0x6b, .y=0x8d, .sp=0xf9, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x2ec5, .value=0xb0}, {.addr=0x2ec6, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x2ec7, .a=0x19, .x=0x6b, .y=0x8d, .sp=0xf9, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x2ec5, .value=0xb0}, {.addr=0x2ec6, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x2ec5, .value=0xb0, .type=IO_READ},
        {.addr=0x2ec6, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0006) {
    const struct CPU_State initial_cpu = {.pc=0x691d, .a=0x5b, .x=0x4a, .y=0xdb, .sp=0x33, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x691d, .value=0xb0}, {.addr=0x691e, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0x691f, .a=0x5b, .x=0x4a, .y=0xdb, .sp=0x33, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x691d, .value=0xb0}, {.addr=0x691e, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0x691d, .value=0xb0, .type=IO_READ},
        {.addr=0x691e, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0007) {
    const struct CPU_State initial_cpu = {.pc=0x3dd5, .a=0xcd, .x=0x58, .y=0xb0, .sp=0xd7, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x3dd5, .value=0xb0}, {.addr=0x3dd6, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0x3dd7, .a=0xcd, .x=0x58, .y=0xb0, .sp=0xd7, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x3dd5, .value=0xb0}, {.addr=0x3dd6, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0x3dd5, .value=0xb0, .type=IO_READ},
        {.addr=0x3dd6, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0008) {
    const struct CPU_State initial_cpu = {.pc=0x896e, .a=0xdd, .x=0x16, .y=0x30, .sp=0xdf, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x896e, .value=0xb0}, {.addr=0x896f, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0x89b5, .a=0xdd, .x=0x16, .y=0x30, .sp=0xdf, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x896e, .value=0xb0}, {.addr=0x896f, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0x896e, .value=0xb0, .type=IO_READ},
        {.addr=0x896f, .value=0x45, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0009) {
    const struct CPU_State initial_cpu = {.pc=0x9acc, .a=0x83, .x=0x88, .y=0x40, .sp=0x7f, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x9acc, .value=0xb0}, {.addr=0x9acd, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0x9ace, .a=0x83, .x=0x88, .y=0x40, .sp=0x7f, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x9acc, .value=0xb0}, {.addr=0x9acd, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0x9acc, .value=0xb0, .type=IO_READ},
        {.addr=0x9acd, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_000A) {
    const struct CPU_State initial_cpu = {.pc=0xdd82, .a=0xd4, .x=0x71, .y=0x8e, .sp=0xfe, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xdd82, .value=0xb0}, {.addr=0xdd83, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0xdda9, .a=0xd4, .x=0x71, .y=0x8e, .sp=0xfe, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xdd82, .value=0xb0}, {.addr=0xdd83, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0xdd82, .value=0xb0, .type=IO_READ},
        {.addr=0xdd83, .value=0x25, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_000B) {
    const struct CPU_State initial_cpu = {.pc=0xbbfe, .a=0x2e, .x=0xea, .y=0x83, .sp=0x48, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xbbfe, .value=0xb0}, {.addr=0xbbff, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0xbb94, .a=0x2e, .x=0xea, .y=0x83, .sp=0x48, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0xbbfe, .value=0xb0}, {.addr=0xbbff, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0xbbfe, .value=0xb0, .type=IO_READ},
        {.addr=0xbbff, .value=0x94, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_000C) {
    const struct CPU_State initial_cpu = {.pc=0x6dc3, .a=0x00, .x=0x33, .y=0x23, .sp=0x98, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x6dc3, .value=0xb0}, {.addr=0x6dc4, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x6d81, .a=0x00, .x=0x33, .y=0x23, .sp=0x98, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x6dc3, .value=0xb0}, {.addr=0x6dc4, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x6dc3, .value=0xb0, .type=IO_READ},
        {.addr=0x6dc4, .value=0xbc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_000D) {
    const struct CPU_State initial_cpu = {.pc=0x3fe0, .a=0x74, .x=0x43, .y=0x92, .sp=0x5f, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x3fe0, .value=0xb0}, {.addr=0x3fe1, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0x3fe2, .a=0x74, .x=0x43, .y=0x92, .sp=0x5f, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x3fe0, .value=0xb0}, {.addr=0x3fe1, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0x3fe0, .value=0xb0, .type=IO_READ},
        {.addr=0x3fe1, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_000E) {
    const struct CPU_State initial_cpu = {.pc=0x0e92, .a=0x92, .x=0xac, .y=0x01, .sp=0x68, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x0e92, .value=0xb0}, {.addr=0x0e93, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0x0e19, .a=0x92, .x=0xac, .y=0x01, .sp=0x68, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x0e92, .value=0xb0}, {.addr=0x0e93, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0x0e92, .value=0xb0, .type=IO_READ},
        {.addr=0x0e93, .value=0x85, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_000F) {
    const struct CPU_State initial_cpu = {.pc=0x6661, .a=0x4d, .x=0x0f, .y=0xf6, .sp=0x7b, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x6661, .value=0xb0}, {.addr=0x6662, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0x6663, .a=0x4d, .x=0x0f, .y=0xf6, .sp=0x7b, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x6661, .value=0xb0}, {.addr=0x6662, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0x6661, .value=0xb0, .type=IO_READ},
        {.addr=0x6662, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0010) {
    const struct CPU_State initial_cpu = {.pc=0xb409, .a=0xc1, .x=0xb7, .y=0x81, .sp=0x56, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xb409, .value=0xb0}, {.addr=0xb40a, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0xb40b, .a=0xc1, .x=0xb7, .y=0x81, .sp=0x56, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0xb409, .value=0xb0}, {.addr=0xb40a, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0xb409, .value=0xb0, .type=IO_READ},
        {.addr=0xb40a, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0011) {
    const struct CPU_State initial_cpu = {.pc=0x093d, .a=0x3b, .x=0x63, .y=0x8d, .sp=0x2d, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x093d, .value=0xb0}, {.addr=0x093e, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0x093f, .a=0x3b, .x=0x63, .y=0x8d, .sp=0x2d, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x093d, .value=0xb0}, {.addr=0x093e, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0x093d, .value=0xb0, .type=IO_READ},
        {.addr=0x093e, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0012) {
    const struct CPU_State initial_cpu = {.pc=0xed27, .a=0xcd, .x=0xc2, .y=0xf0, .sp=0x93, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xed27, .value=0xb0}, {.addr=0xed28, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0xecb9, .a=0xcd, .x=0xc2, .y=0xf0, .sp=0x93, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0xed27, .value=0xb0}, {.addr=0xed28, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0xed27, .value=0xb0, .type=IO_READ},
        {.addr=0xed28, .value=0x90, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0013) {
    const struct CPU_State initial_cpu = {.pc=0x58d5, .a=0x31, .x=0x26, .y=0xeb, .sp=0x50, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x58d5, .value=0xb0}, {.addr=0x58d6, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0x58d7, .a=0x31, .x=0x26, .y=0xeb, .sp=0x50, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x58d5, .value=0xb0}, {.addr=0x58d6, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0x58d5, .value=0xb0, .type=IO_READ},
        {.addr=0x58d6, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0014) {
    const struct CPU_State initial_cpu = {.pc=0x6111, .a=0x33, .x=0x54, .y=0xb1, .sp=0x22, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x6111, .value=0xb0}, {.addr=0x6112, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x6113, .a=0x33, .x=0x54, .y=0xb1, .sp=0x22, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x6111, .value=0xb0}, {.addr=0x6112, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x6111, .value=0xb0, .type=IO_READ},
        {.addr=0x6112, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0015) {
    const struct CPU_State initial_cpu = {.pc=0x90d5, .a=0x40, .x=0xd9, .y=0x2a, .sp=0x6f, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x90d5, .value=0xb0}, {.addr=0x90d6, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0x90f9, .a=0x40, .x=0xd9, .y=0x2a, .sp=0x6f, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x90d5, .value=0xb0}, {.addr=0x90d6, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0x90d5, .value=0xb0, .type=IO_READ},
        {.addr=0x90d6, .value=0x22, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0016) {
    const struct CPU_State initial_cpu = {.pc=0xe8f0, .a=0xe9, .x=0xdf, .y=0x6e, .sp=0x2f, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xe8f0, .value=0xb0}, {.addr=0xe8f1, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0xe933, .a=0xe9, .x=0xdf, .y=0x6e, .sp=0x2f, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xe8f0, .value=0xb0}, {.addr=0xe8f1, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0xe8f0, .value=0xb0, .type=IO_READ},
        {.addr=0xe8f1, .value=0x41, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0017) {
    const struct CPU_State initial_cpu = {.pc=0xc41b, .a=0x5a, .x=0x4b, .y=0x17, .sp=0x56, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xc41b, .value=0xb0}, {.addr=0xc41c, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0xc41d, .a=0x5a, .x=0x4b, .y=0x17, .sp=0x56, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xc41b, .value=0xb0}, {.addr=0xc41c, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0xc41b, .value=0xb0, .type=IO_READ},
        {.addr=0xc41c, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0018) {
    const struct CPU_State initial_cpu = {.pc=0x2e79, .a=0x75, .x=0xf8, .y=0x8c, .sp=0x2b, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x2e79, .value=0xb0}, {.addr=0x2e7a, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x2e7b, .a=0x75, .x=0xf8, .y=0x8c, .sp=0x2b, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x2e79, .value=0xb0}, {.addr=0x2e7a, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x2e79, .value=0xb0, .type=IO_READ},
        {.addr=0x2e7a, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0019) {
    const struct CPU_State initial_cpu = {.pc=0xa323, .a=0x50, .x=0xbb, .y=0xf7, .sp=0x12, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xa323, .value=0xb0}, {.addr=0xa324, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xa325, .a=0x50, .x=0xbb, .y=0xf7, .sp=0x12, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xa323, .value=0xb0}, {.addr=0xa324, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xa323, .value=0xb0, .type=IO_READ},
        {.addr=0xa324, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_001A) {
    const struct CPU_State initial_cpu = {.pc=0x0de3, .a=0x1e, .x=0xd5, .y=0x62, .sp=0x1c, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x0de3, .value=0xb0}, {.addr=0x0de4, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0x0e38, .a=0x1e, .x=0xd5, .y=0x62, .sp=0x1c, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x0de3, .value=0xb0}, {.addr=0x0de4, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0x0de3, .value=0xb0, .type=IO_READ},
        {.addr=0x0de4, .value=0x53, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_001B) {
    const struct CPU_State initial_cpu = {.pc=0xe80a, .a=0x7b, .x=0x0e, .y=0xd7, .sp=0x21, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xe80a, .value=0xb0}, {.addr=0xe80b, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0xe80c, .a=0x7b, .x=0x0e, .y=0xd7, .sp=0x21, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0xe80a, .value=0xb0}, {.addr=0xe80b, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0xe80a, .value=0xb0, .type=IO_READ},
        {.addr=0xe80b, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_001C) {
    const struct CPU_State initial_cpu = {.pc=0xd9af, .a=0x12, .x=0x9f, .y=0x05, .sp=0x64, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xd9af, .value=0xb0}, {.addr=0xd9b0, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0xda27, .a=0x12, .x=0x9f, .y=0x05, .sp=0x64, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0xd9af, .value=0xb0}, {.addr=0xd9b0, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0xd9af, .value=0xb0, .type=IO_READ},
        {.addr=0xd9b0, .value=0x76, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_001D) {
    const struct CPU_State initial_cpu = {.pc=0x61cb, .a=0xe4, .x=0x95, .y=0x8b, .sp=0xc5, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x61cb, .value=0xb0}, {.addr=0x61cc, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0x61cd, .a=0xe4, .x=0x95, .y=0x8b, .sp=0xc5, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x61cb, .value=0xb0}, {.addr=0x61cc, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0x61cb, .value=0xb0, .type=IO_READ},
        {.addr=0x61cc, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_001E) {
    const struct CPU_State initial_cpu = {.pc=0xa476, .a=0xf8, .x=0x04, .y=0xfb, .sp=0xde, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xa476, .value=0xb0}, {.addr=0xa477, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0xa478, .a=0xf8, .x=0x04, .y=0xfb, .sp=0xde, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xa476, .value=0xb0}, {.addr=0xa477, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0xa476, .value=0xb0, .type=IO_READ},
        {.addr=0xa477, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_001F) {
    const struct CPU_State initial_cpu = {.pc=0x40de, .a=0x28, .x=0xc4, .y=0x2a, .sp=0xaa, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x40de, .value=0xb0}, {.addr=0x40df, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0x40e0, .a=0x28, .x=0xc4, .y=0x2a, .sp=0xaa, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x40de, .value=0xb0}, {.addr=0x40df, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0x40de, .value=0xb0, .type=IO_READ},
        {.addr=0x40df, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0020) {
    const struct CPU_State initial_cpu = {.pc=0xac4e, .a=0xda, .x=0xea, .y=0x24, .sp=0x80, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xac4e, .value=0xb0}, {.addr=0xac4f, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0xac17, .a=0xda, .x=0xea, .y=0x24, .sp=0x80, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xac4e, .value=0xb0}, {.addr=0xac4f, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0xac4e, .value=0xb0, .type=IO_READ},
        {.addr=0xac4f, .value=0xc7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0021) {
    const struct CPU_State initial_cpu = {.pc=0xeafa, .a=0x84, .x=0xf7, .y=0xcd, .sp=0x23, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xeafa, .value=0xb0}, {.addr=0xeafb, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0xeb35, .a=0x84, .x=0xf7, .y=0xcd, .sp=0x23, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0xeafa, .value=0xb0}, {.addr=0xeafb, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0xeafa, .value=0xb0, .type=IO_READ},
        {.addr=0xeafb, .value=0x39, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0022) {
    const struct CPU_State initial_cpu = {.pc=0x356d, .a=0xeb, .x=0x32, .y=0x0e, .sp=0x2a, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x356d, .value=0xb0}, {.addr=0x356e, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0x35b1, .a=0xeb, .x=0x32, .y=0x0e, .sp=0x2a, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x356d, .value=0xb0}, {.addr=0x356e, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0x356d, .value=0xb0, .type=IO_READ},
        {.addr=0x356e, .value=0x42, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0023) {
    const struct CPU_State initial_cpu = {.pc=0x231c, .a=0xb8, .x=0x80, .y=0xdc, .sp=0xb0, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x231c, .value=0xb0}, {.addr=0x231d, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x231e, .a=0xb8, .x=0x80, .y=0xdc, .sp=0xb0, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x231c, .value=0xb0}, {.addr=0x231d, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x231c, .value=0xb0, .type=IO_READ},
        {.addr=0x231d, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0024) {
    const struct CPU_State initial_cpu = {.pc=0x893c, .a=0x2f, .x=0x80, .y=0x65, .sp=0x1c, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x893c, .value=0xb0}, {.addr=0x893d, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x893e, .a=0x2f, .x=0x80, .y=0x65, .sp=0x1c, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x893c, .value=0xb0}, {.addr=0x893d, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x893c, .value=0xb0, .type=IO_READ},
        {.addr=0x893d, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0025) {
    const struct CPU_State initial_cpu = {.pc=0x071b, .a=0xe7, .x=0x5a, .y=0xe3, .sp=0x13, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x071b, .value=0xb0}, {.addr=0x071c, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0x071d, .a=0xe7, .x=0x5a, .y=0xe3, .sp=0x13, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x071b, .value=0xb0}, {.addr=0x071c, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0x071b, .value=0xb0, .type=IO_READ},
        {.addr=0x071c, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0026) {
    const struct CPU_State initial_cpu = {.pc=0x9f48, .a=0x53, .x=0x93, .y=0xf5, .sp=0xcf, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x9f48, .value=0xb0}, {.addr=0x9f49, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0x9f6e, .a=0x53, .x=0x93, .y=0xf5, .sp=0xcf, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x9f48, .value=0xb0}, {.addr=0x9f49, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0x9f48, .value=0xb0, .type=IO_READ},
        {.addr=0x9f49, .value=0x24, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0027) {
    const struct CPU_State initial_cpu = {.pc=0x7aa5, .a=0xd4, .x=0xdf, .y=0x70, .sp=0x6c, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x7aa5, .value=0xb0}, {.addr=0x7aa6, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0x7a3a, .a=0xd4, .x=0xdf, .y=0x70, .sp=0x6c, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x7aa5, .value=0xb0}, {.addr=0x7aa6, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0x7aa5, .value=0xb0, .type=IO_READ},
        {.addr=0x7aa6, .value=0x93, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0029) {
    const struct CPU_State initial_cpu = {.pc=0x4ad8, .a=0x69, .x=0x91, .y=0xf2, .sp=0x5d, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x4ad8, .value=0xb0}, {.addr=0x4ad9, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0x4ada, .a=0x69, .x=0x91, .y=0xf2, .sp=0x5d, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x4ad8, .value=0xb0}, {.addr=0x4ad9, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0x4ad8, .value=0xb0, .type=IO_READ},
        {.addr=0x4ad9, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_002A) {
    const struct CPU_State initial_cpu = {.pc=0xd330, .a=0xce, .x=0x16, .y=0xcd, .sp=0xf8, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xd330, .value=0xb0}, {.addr=0xd331, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0xd332, .a=0xce, .x=0x16, .y=0xcd, .sp=0xf8, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xd330, .value=0xb0}, {.addr=0xd331, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0xd330, .value=0xb0, .type=IO_READ},
        {.addr=0xd331, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_002B) {
    const struct CPU_State initial_cpu = {.pc=0xdccd, .a=0xed, .x=0xa8, .y=0xbb, .sp=0xea, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xdccd, .value=0xb0}, {.addr=0xdcce, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0xdccd, .a=0xed, .x=0xa8, .y=0xbb, .sp=0xea, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xdccd, .value=0xb0}, {.addr=0xdcce, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0xdccd, .value=0xb0, .type=IO_READ},
        {.addr=0xdcce, .value=0xfe, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_002C) {
    const struct CPU_State initial_cpu = {.pc=0x4d2c, .a=0xe7, .x=0x69, .y=0x15, .sp=0x1e, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x4d2c, .value=0xb0}, {.addr=0x4d2d, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0x4cf3, .a=0xe7, .x=0x69, .y=0x15, .sp=0x1e, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x4d2c, .value=0xb0}, {.addr=0x4d2d, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0x4d2c, .value=0xb0, .type=IO_READ},
        {.addr=0x4d2d, .value=0xc5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_002D) {
    const struct CPU_State initial_cpu = {.pc=0x695a, .a=0x1c, .x=0x51, .y=0xd5, .sp=0x43, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x695a, .value=0xb0}, {.addr=0x695b, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0x695c, .a=0x1c, .x=0x51, .y=0xd5, .sp=0x43, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x695a, .value=0xb0}, {.addr=0x695b, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0x695a, .value=0xb0, .type=IO_READ},
        {.addr=0x695b, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_002E) {
    const struct CPU_State initial_cpu = {.pc=0xd279, .a=0x8f, .x=0x6d, .y=0x9c, .sp=0x0e, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xd279, .value=0xb0}, {.addr=0xd27a, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0xd20b, .a=0x8f, .x=0x6d, .y=0x9c, .sp=0x0e, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0xd279, .value=0xb0}, {.addr=0xd27a, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0xd279, .value=0xb0, .type=IO_READ},
        {.addr=0xd27a, .value=0x90, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_002F) {
    const struct CPU_State initial_cpu = {.pc=0xb6d6, .a=0xd2, .x=0x3a, .y=0x25, .sp=0xd1, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xb6d6, .value=0xb0}, {.addr=0xb6d7, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xb6f5, .a=0xd2, .x=0x3a, .y=0x25, .sp=0xd1, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0xb6d6, .value=0xb0}, {.addr=0xb6d7, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xb6d6, .value=0xb0, .type=IO_READ},
        {.addr=0xb6d7, .value=0x1d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0030) {
    const struct CPU_State initial_cpu = {.pc=0x4e62, .a=0xe4, .x=0x8a, .y=0xf5, .sp=0x72, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x4e62, .value=0xb0}, {.addr=0x4e63, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0x4e64, .a=0xe4, .x=0x8a, .y=0xf5, .sp=0x72, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x4e62, .value=0xb0}, {.addr=0x4e63, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0x4e62, .value=0xb0, .type=IO_READ},
        {.addr=0x4e63, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0031) {
    const struct CPU_State initial_cpu = {.pc=0x4414, .a=0x05, .x=0x1c, .y=0xe3, .sp=0x17, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x4414, .value=0xb0}, {.addr=0x4415, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x43d2, .a=0x05, .x=0x1c, .y=0xe3, .sp=0x17, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x4414, .value=0xb0}, {.addr=0x4415, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x4414, .value=0xb0, .type=IO_READ},
        {.addr=0x4415, .value=0xbc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0032) {
    const struct CPU_State initial_cpu = {.pc=0x2d72, .a=0x39, .x=0xc0, .y=0x40, .sp=0x51, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x2d72, .value=0xb0}, {.addr=0x2d73, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0x2d74, .a=0x39, .x=0xc0, .y=0x40, .sp=0x51, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x2d72, .value=0xb0}, {.addr=0x2d73, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0x2d72, .value=0xb0, .type=IO_READ},
        {.addr=0x2d73, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0033) {
    const struct CPU_State initial_cpu = {.pc=0xc1f7, .a=0x2a, .x=0x77, .y=0xf8, .sp=0xbf, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xc1f7, .value=0xb0}, {.addr=0xc1f8, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0xc1f9, .a=0x2a, .x=0x77, .y=0xf8, .sp=0xbf, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xc1f7, .value=0xb0}, {.addr=0xc1f8, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0xc1f7, .value=0xb0, .type=IO_READ},
        {.addr=0xc1f8, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0034) {
    const struct CPU_State initial_cpu = {.pc=0xa096, .a=0xca, .x=0xbb, .y=0xa4, .sp=0x9a, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xa096, .value=0xb0}, {.addr=0xa097, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xa0d4, .a=0xca, .x=0xbb, .y=0xa4, .sp=0x9a, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0xa096, .value=0xb0}, {.addr=0xa097, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xa096, .value=0xb0, .type=IO_READ},
        {.addr=0xa097, .value=0x3c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0035) {
    const struct CPU_State initial_cpu = {.pc=0xb5f2, .a=0xbb, .x=0x64, .y=0xf0, .sp=0x9a, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xb5f2, .value=0xb0}, {.addr=0xb5f3, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0xb57b, .a=0xbb, .x=0x64, .y=0xf0, .sp=0x9a, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xb5f2, .value=0xb0}, {.addr=0xb5f3, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0xb5f2, .value=0xb0, .type=IO_READ},
        {.addr=0xb5f3, .value=0x87, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0036) {
    const struct CPU_State initial_cpu = {.pc=0x6ee1, .a=0x22, .x=0x22, .y=0x63, .sp=0xcb, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x6ee1, .value=0xb0}, {.addr=0x6ee2, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0x6ee3, .a=0x22, .x=0x22, .y=0x63, .sp=0xcb, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x6ee1, .value=0xb0}, {.addr=0x6ee2, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0x6ee1, .value=0xb0, .type=IO_READ},
        {.addr=0x6ee2, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0037) {
    const struct CPU_State initial_cpu = {.pc=0x698f, .a=0xd4, .x=0x63, .y=0x3d, .sp=0x08, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x698f, .value=0xb0}, {.addr=0x6990, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x69c1, .a=0xd4, .x=0x63, .y=0x3d, .sp=0x08, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x698f, .value=0xb0}, {.addr=0x6990, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x698f, .value=0xb0, .type=IO_READ},
        {.addr=0x6990, .value=0x30, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0038) {
    const struct CPU_State initial_cpu = {.pc=0xc1cb, .a=0x7a, .x=0xe4, .y=0xee, .sp=0x3d, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xc1cb, .value=0xb0}, {.addr=0xc1cc, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0xc1cd, .a=0x7a, .x=0xe4, .y=0xee, .sp=0x3d, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xc1cb, .value=0xb0}, {.addr=0xc1cc, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0xc1cb, .value=0xb0, .type=IO_READ},
        {.addr=0xc1cc, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0039) {
    const struct CPU_State initial_cpu = {.pc=0x8822, .a=0xaa, .x=0x92, .y=0xa2, .sp=0xbe, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x8822, .value=0xb0}, {.addr=0x8823, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0x8824, .a=0xaa, .x=0x92, .y=0xa2, .sp=0xbe, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x8822, .value=0xb0}, {.addr=0x8823, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0x8822, .value=0xb0, .type=IO_READ},
        {.addr=0x8823, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_003A) {
    const struct CPU_State initial_cpu = {.pc=0x77ef, .a=0x8e, .x=0x5f, .y=0xba, .sp=0xe1, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x77ef, .value=0xb0}, {.addr=0x77f0, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0x7814, .a=0x8e, .x=0x5f, .y=0xba, .sp=0xe1, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x77ef, .value=0xb0}, {.addr=0x77f0, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0x77ef, .value=0xb0, .type=IO_READ},
        {.addr=0x77f0, .value=0x23, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_003B) {
    const struct CPU_State initial_cpu = {.pc=0x0e79, .a=0x10, .x=0x59, .y=0xf7, .sp=0xa2, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x0e79, .value=0xb0}, {.addr=0x0e7a, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x0e3a, .a=0x10, .x=0x59, .y=0xf7, .sp=0xa2, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x0e79, .value=0xb0}, {.addr=0x0e7a, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x0e79, .value=0xb0, .type=IO_READ},
        {.addr=0x0e7a, .value=0xbf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_003C) {
    const struct CPU_State initial_cpu = {.pc=0xa7c8, .a=0xe5, .x=0x72, .y=0x4a, .sp=0x6d, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xa7c8, .value=0xb0}, {.addr=0xa7c9, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0xa7ca, .a=0xe5, .x=0x72, .y=0x4a, .sp=0x6d, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xa7c8, .value=0xb0}, {.addr=0xa7c9, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0xa7c8, .value=0xb0, .type=IO_READ},
        {.addr=0xa7c9, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_003D) {
    const struct CPU_State initial_cpu = {.pc=0x1088, .a=0xdb, .x=0x50, .y=0xbf, .sp=0x6d, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x1088, .value=0xb0}, {.addr=0x1089, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0x108a, .a=0xdb, .x=0x50, .y=0xbf, .sp=0x6d, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x1088, .value=0xb0}, {.addr=0x1089, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0x1088, .value=0xb0, .type=IO_READ},
        {.addr=0x1089, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_003E) {
    const struct CPU_State initial_cpu = {.pc=0x90ff, .a=0xc5, .x=0xe4, .y=0xf4, .sp=0x7c, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x90ff, .value=0xb0}, {.addr=0x9100, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x9101, .a=0xc5, .x=0xe4, .y=0xf4, .sp=0x7c, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x90ff, .value=0xb0}, {.addr=0x9100, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x90ff, .value=0xb0, .type=IO_READ},
        {.addr=0x9100, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_003F) {
    const struct CPU_State initial_cpu = {.pc=0x95a8, .a=0x8f, .x=0x06, .y=0x4d, .sp=0xc9, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x95a8, .value=0xb0}, {.addr=0x95a9, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0x95aa, .a=0x8f, .x=0x06, .y=0x4d, .sp=0xc9, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x95a8, .value=0xb0}, {.addr=0x95a9, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0x95a8, .value=0xb0, .type=IO_READ},
        {.addr=0x95a9, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0040) {
    const struct CPU_State initial_cpu = {.pc=0xe553, .a=0xce, .x=0xf4, .y=0x2d, .sp=0xbd, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xe553, .value=0xb0}, {.addr=0xe554, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xe4f1, .a=0xce, .x=0xf4, .y=0x2d, .sp=0xbd, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0xe553, .value=0xb0}, {.addr=0xe554, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xe553, .value=0xb0, .type=IO_READ},
        {.addr=0xe554, .value=0x9c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0041) {
    const struct CPU_State initial_cpu = {.pc=0x7533, .a=0x5a, .x=0x94, .y=0x30, .sp=0x98, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x7533, .value=0xb0}, {.addr=0x7534, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x74e9, .a=0x5a, .x=0x94, .y=0x30, .sp=0x98, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x7533, .value=0xb0}, {.addr=0x7534, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x7533, .value=0xb0, .type=IO_READ},
        {.addr=0x7534, .value=0xb4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0042) {
    const struct CPU_State initial_cpu = {.pc=0xd0b9, .a=0xf6, .x=0xd1, .y=0x18, .sp=0x8d, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xd0b9, .value=0xb0}, {.addr=0xd0ba, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0xd0bb, .a=0xf6, .x=0xd1, .y=0x18, .sp=0x8d, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0xd0b9, .value=0xb0}, {.addr=0xd0ba, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0xd0b9, .value=0xb0, .type=IO_READ},
        {.addr=0xd0ba, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0043) {
    const struct CPU_State initial_cpu = {.pc=0x551e, .a=0x6c, .x=0xe4, .y=0x91, .sp=0x91, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x551e, .value=0xb0}, {.addr=0x551f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x5520, .a=0x6c, .x=0xe4, .y=0x91, .sp=0x91, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x551e, .value=0xb0}, {.addr=0x551f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x551e, .value=0xb0, .type=IO_READ},
        {.addr=0x551f, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0044) {
    const struct CPU_State initial_cpu = {.pc=0xbdef, .a=0xa8, .x=0x46, .y=0x35, .sp=0x85, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0xbdef, .value=0xb0}, {.addr=0xbdf0, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0xbde2, .a=0xa8, .x=0x46, .y=0x35, .sp=0x85, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0xbdef, .value=0xb0}, {.addr=0xbdf0, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0xbdef, .value=0xb0, .type=IO_READ},
        {.addr=0xbdf0, .value=0xf1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0045) {
    const struct CPU_State initial_cpu = {.pc=0xbcb7, .a=0x1c, .x=0xf7, .y=0x24, .sp=0xe1, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xbcb7, .value=0xb0}, {.addr=0xbcb8, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0xbca9, .a=0x1c, .x=0xf7, .y=0x24, .sp=0xe1, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0xbcb7, .value=0xb0}, {.addr=0xbcb8, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0xbcb7, .value=0xb0, .type=IO_READ},
        {.addr=0xbcb8, .value=0xf0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0046) {
    const struct CPU_State initial_cpu = {.pc=0xf9df, .a=0x16, .x=0xf0, .y=0xbc, .sp=0x96, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xf9df, .value=0xb0}, {.addr=0xf9e0, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0xf9e1, .a=0x16, .x=0xf0, .y=0xbc, .sp=0x96, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0xf9df, .value=0xb0}, {.addr=0xf9e0, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0xf9df, .value=0xb0, .type=IO_READ},
        {.addr=0xf9e0, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0047) {
    const struct CPU_State initial_cpu = {.pc=0x4c03, .a=0xb4, .x=0xbe, .y=0xe2, .sp=0x36, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x4c03, .value=0xb0}, {.addr=0x4c04, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x4c12, .a=0xb4, .x=0xbe, .y=0xe2, .sp=0x36, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x4c03, .value=0xb0}, {.addr=0x4c04, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x4c03, .value=0xb0, .type=IO_READ},
        {.addr=0x4c04, .value=0x0d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0048) {
    const struct CPU_State initial_cpu = {.pc=0xcb37, .a=0xda, .x=0x5f, .y=0xe8, .sp=0xd7, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xcb37, .value=0xb0}, {.addr=0xcb38, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0xcb39, .a=0xda, .x=0x5f, .y=0xe8, .sp=0xd7, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xcb37, .value=0xb0}, {.addr=0xcb38, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0xcb37, .value=0xb0, .type=IO_READ},
        {.addr=0xcb38, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0049) {
    const struct CPU_State initial_cpu = {.pc=0x7d68, .a=0x57, .x=0x4c, .y=0x6a, .sp=0xa1, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x7d68, .value=0xb0}, {.addr=0x7d69, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x7cea, .a=0x57, .x=0x4c, .y=0x6a, .sp=0xa1, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x7d68, .value=0xb0}, {.addr=0x7d69, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x7d68, .value=0xb0, .type=IO_READ},
        {.addr=0x7d69, .value=0x80, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_004A) {
    const struct CPU_State initial_cpu = {.pc=0x2aee, .a=0x07, .x=0xfd, .y=0x12, .sp=0x5a, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x2aee, .value=0xb0}, {.addr=0x2aef, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0x2af0, .a=0x07, .x=0xfd, .y=0x12, .sp=0x5a, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x2aee, .value=0xb0}, {.addr=0x2aef, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0x2aee, .value=0xb0, .type=IO_READ},
        {.addr=0x2aef, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_004B) {
    const struct CPU_State initial_cpu = {.pc=0x0b5f, .a=0x51, .x=0x67, .y=0x15, .sp=0xc9, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x0b5f, .value=0xb0}, {.addr=0x0b60, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0x0b61, .a=0x51, .x=0x67, .y=0x15, .sp=0xc9, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x0b5f, .value=0xb0}, {.addr=0x0b60, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0x0b5f, .value=0xb0, .type=IO_READ},
        {.addr=0x0b60, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_004C) {
    const struct CPU_State initial_cpu = {.pc=0x09e0, .a=0x6f, .x=0xfa, .y=0x1f, .sp=0x17, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x09e0, .value=0xb0}, {.addr=0x09e1, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0x09e2, .a=0x6f, .x=0xfa, .y=0x1f, .sp=0x17, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x09e0, .value=0xb0}, {.addr=0x09e1, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0x09e0, .value=0xb0, .type=IO_READ},
        {.addr=0x09e1, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_004D) {
    const struct CPU_State initial_cpu = {.pc=0xccbe, .a=0x01, .x=0x95, .y=0xaf, .sp=0x58, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xccbe, .value=0xb0}, {.addr=0xccbf, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0xcc51, .a=0x01, .x=0x95, .y=0xaf, .sp=0x58, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xccbe, .value=0xb0}, {.addr=0xccbf, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0xccbe, .value=0xb0, .type=IO_READ},
        {.addr=0xccbf, .value=0x91, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_004E) {
    const struct CPU_State initial_cpu = {.pc=0x4f9f, .a=0xff, .x=0xdb, .y=0xff, .sp=0xff, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x4f9f, .value=0xb0}, {.addr=0x4fa0, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x4f87, .a=0xff, .x=0xdb, .y=0xff, .sp=0xff, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x4f9f, .value=0xb0}, {.addr=0x4fa0, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x4f9f, .value=0xb0, .type=IO_READ},
        {.addr=0x4fa0, .value=0xe6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_004F) {
    const struct CPU_State initial_cpu = {.pc=0x1c00, .a=0x33, .x=0x0e, .y=0xb1, .sp=0xfa, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x1c00, .value=0xb0}, {.addr=0x1c01, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0x1c02, .a=0x33, .x=0x0e, .y=0xb1, .sp=0xfa, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x1c00, .value=0xb0}, {.addr=0x1c01, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0x1c00, .value=0xb0, .type=IO_READ},
        {.addr=0x1c01, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0050) {
    const struct CPU_State initial_cpu = {.pc=0x4958, .a=0xe4, .x=0x90, .y=0xa0, .sp=0xc9, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x4958, .value=0xb0}, {.addr=0x4959, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x495a, .a=0xe4, .x=0x90, .y=0xa0, .sp=0xc9, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x4958, .value=0xb0}, {.addr=0x4959, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x4958, .value=0xb0, .type=IO_READ},
        {.addr=0x4959, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0051) {
    const struct CPU_State initial_cpu = {.pc=0x148a, .a=0x29, .x=0x7b, .y=0x58, .sp=0xfc, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x148a, .value=0xb0}, {.addr=0x148b, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x148c, .a=0x29, .x=0x7b, .y=0x58, .sp=0xfc, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x148a, .value=0xb0}, {.addr=0x148b, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x148a, .value=0xb0, .type=IO_READ},
        {.addr=0x148b, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0052) {
    const struct CPU_State initial_cpu = {.pc=0xad8d, .a=0x89, .x=0x5e, .y=0x7b, .sp=0x13, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xad8d, .value=0xb0}, {.addr=0xad8e, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xad8f, .a=0x89, .x=0x5e, .y=0x7b, .sp=0x13, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xad8d, .value=0xb0}, {.addr=0xad8e, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xad8d, .value=0xb0, .type=IO_READ},
        {.addr=0xad8e, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0053) {
    const struct CPU_State initial_cpu = {.pc=0xc33b, .a=0x7e, .x=0xf4, .y=0xde, .sp=0xd0, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xc33b, .value=0xb0}, {.addr=0xc33c, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0xc32c, .a=0x7e, .x=0xf4, .y=0xde, .sp=0xd0, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xc33b, .value=0xb0}, {.addr=0xc33c, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0xc33b, .value=0xb0, .type=IO_READ},
        {.addr=0xc33c, .value=0xef, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0054) {
    const struct CPU_State initial_cpu = {.pc=0x7156, .a=0x9f, .x=0xdc, .y=0x6c, .sp=0x6d, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x7156, .value=0xb0}, {.addr=0x7157, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0x7158, .a=0x9f, .x=0xdc, .y=0x6c, .sp=0x6d, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x7156, .value=0xb0}, {.addr=0x7157, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0x7156, .value=0xb0, .type=IO_READ},
        {.addr=0x7157, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0055) {
    const struct CPU_State initial_cpu = {.pc=0x2c6a, .a=0xa5, .x=0xca, .y=0xf5, .sp=0xed, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x2c6a, .value=0xb0}, {.addr=0x2c6b, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x2c6c, .a=0xa5, .x=0xca, .y=0xf5, .sp=0xed, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x2c6a, .value=0xb0}, {.addr=0x2c6b, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x2c6a, .value=0xb0, .type=IO_READ},
        {.addr=0x2c6b, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0056) {
    const struct CPU_State initial_cpu = {.pc=0x45f9, .a=0xfc, .x=0x5a, .y=0x74, .sp=0x03, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x45f9, .value=0xb0}, {.addr=0x45fa, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0x45fb, .a=0xfc, .x=0x5a, .y=0x74, .sp=0x03, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x45f9, .value=0xb0}, {.addr=0x45fa, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0x45f9, .value=0xb0, .type=IO_READ},
        {.addr=0x45fa, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0057) {
    const struct CPU_State initial_cpu = {.pc=0x2fe9, .a=0xbe, .x=0xb0, .y=0xe2, .sp=0xea, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x2fe9, .value=0xb0}, {.addr=0x2fea, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0x305e, .a=0xbe, .x=0xb0, .y=0xe2, .sp=0xea, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x2fe9, .value=0xb0}, {.addr=0x2fea, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0x2fe9, .value=0xb0, .type=IO_READ},
        {.addr=0x2fea, .value=0x73, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0058) {
    const struct CPU_State initial_cpu = {.pc=0x9018, .a=0x40, .x=0x6f, .y=0xf6, .sp=0xd6, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x9018, .value=0xb0}, {.addr=0x9019, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0x901a, .a=0x40, .x=0x6f, .y=0xf6, .sp=0xd6, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x9018, .value=0xb0}, {.addr=0x9019, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0x9018, .value=0xb0, .type=IO_READ},
        {.addr=0x9019, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0059) {
    const struct CPU_State initial_cpu = {.pc=0x8f00, .a=0x6c, .x=0x90, .y=0x6e, .sp=0x68, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x8f00, .value=0xb0}, {.addr=0x8f01, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0x8f02, .a=0x6c, .x=0x90, .y=0x6e, .sp=0x68, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x8f00, .value=0xb0}, {.addr=0x8f01, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0x8f00, .value=0xb0, .type=IO_READ},
        {.addr=0x8f01, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_005A) {
    const struct CPU_State initial_cpu = {.pc=0x207b, .a=0xb3, .x=0xec, .y=0x2c, .sp=0xe1, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x207b, .value=0xb0}, {.addr=0x207c, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0x202a, .a=0xb3, .x=0xec, .y=0x2c, .sp=0xe1, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x207b, .value=0xb0}, {.addr=0x207c, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0x207b, .value=0xb0, .type=IO_READ},
        {.addr=0x207c, .value=0xad, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_005B) {
    const struct CPU_State initial_cpu = {.pc=0x2ef1, .a=0xb8, .x=0xa0, .y=0xdc, .sp=0x6c, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x2ef1, .value=0xb0}, {.addr=0x2ef2, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0x2f4d, .a=0xb8, .x=0xa0, .y=0xdc, .sp=0x6c, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x2ef1, .value=0xb0}, {.addr=0x2ef2, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0x2ef1, .value=0xb0, .type=IO_READ},
        {.addr=0x2ef2, .value=0x5a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_005C) {
    const struct CPU_State initial_cpu = {.pc=0xc662, .a=0x3d, .x=0xcb, .y=0x97, .sp=0x81, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xc662, .value=0xb0}, {.addr=0xc663, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0xc664, .a=0x3d, .x=0xcb, .y=0x97, .sp=0x81, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0xc662, .value=0xb0}, {.addr=0xc663, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0xc662, .value=0xb0, .type=IO_READ},
        {.addr=0xc663, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_005D) {
    const struct CPU_State initial_cpu = {.pc=0x0d12, .a=0xd3, .x=0x68, .y=0x23, .sp=0xc1, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x0d12, .value=0xb0}, {.addr=0x0d13, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0x0cdc, .a=0xd3, .x=0x68, .y=0x23, .sp=0xc1, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x0d12, .value=0xb0}, {.addr=0x0d13, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0x0d12, .value=0xb0, .type=IO_READ},
        {.addr=0x0d13, .value=0xc8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_005E) {
    const struct CPU_State initial_cpu = {.pc=0xcbfd, .a=0xd1, .x=0x4e, .y=0x5f, .sp=0xb4, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xcbfd, .value=0xb0}, {.addr=0xcbfe, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0xcbff, .a=0xd1, .x=0x4e, .y=0x5f, .sp=0xb4, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xcbfd, .value=0xb0}, {.addr=0xcbfe, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0xcbfd, .value=0xb0, .type=IO_READ},
        {.addr=0xcbfe, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_005F) {
    const struct CPU_State initial_cpu = {.pc=0x043a, .a=0xdb, .x=0x37, .y=0xa1, .sp=0x02, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x043a, .value=0xb0}, {.addr=0x043b, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x0427, .a=0xdb, .x=0x37, .y=0xa1, .sp=0x02, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x043a, .value=0xb0}, {.addr=0x043b, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x043a, .value=0xb0, .type=IO_READ},
        {.addr=0x043b, .value=0xeb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0060) {
    const struct CPU_State initial_cpu = {.pc=0x3404, .a=0x4b, .x=0xad, .y=0xe3, .sp=0x2c, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x3404, .value=0xb0}, {.addr=0x3405, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0x344e, .a=0x4b, .x=0xad, .y=0xe3, .sp=0x2c, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x3404, .value=0xb0}, {.addr=0x3405, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0x3404, .value=0xb0, .type=IO_READ},
        {.addr=0x3405, .value=0x48, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0061) {
    const struct CPU_State initial_cpu = {.pc=0x8cf8, .a=0xd0, .x=0x52, .y=0x8a, .sp=0x73, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x8cf8, .value=0xb0}, {.addr=0x8cf9, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0x8cfa, .a=0xd0, .x=0x52, .y=0x8a, .sp=0x73, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x8cf8, .value=0xb0}, {.addr=0x8cf9, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0x8cf8, .value=0xb0, .type=IO_READ},
        {.addr=0x8cf9, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0062) {
    const struct CPU_State initial_cpu = {.pc=0x57eb, .a=0xcc, .x=0x38, .y=0x6f, .sp=0x03, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x57eb, .value=0xb0}, {.addr=0x57ec, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x584a, .a=0xcc, .x=0x38, .y=0x6f, .sp=0x03, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x57eb, .value=0xb0}, {.addr=0x57ec, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x57eb, .value=0xb0, .type=IO_READ},
        {.addr=0x57ec, .value=0x5d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0063) {
    const struct CPU_State initial_cpu = {.pc=0x681e, .a=0x97, .x=0xae, .y=0xd7, .sp=0xb8, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x681e, .value=0xb0}, {.addr=0x681f, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0x6820, .a=0x97, .x=0xae, .y=0xd7, .sp=0xb8, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x681e, .value=0xb0}, {.addr=0x681f, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0x681e, .value=0xb0, .type=IO_READ},
        {.addr=0x681f, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0064) {
    const struct CPU_State initial_cpu = {.pc=0xa96b, .a=0xe9, .x=0x2a, .y=0x0b, .sp=0xea, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xa96b, .value=0xb0}, {.addr=0xa96c, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0xa972, .a=0xe9, .x=0x2a, .y=0x0b, .sp=0xea, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xa96b, .value=0xb0}, {.addr=0xa96c, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0xa96b, .value=0xb0, .type=IO_READ},
        {.addr=0xa96c, .value=0x05, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0065) {
    const struct CPU_State initial_cpu = {.pc=0x821b, .a=0xdc, .x=0x2a, .y=0x7f, .sp=0x7c, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x821b, .value=0xb0}, {.addr=0x821c, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0x828b, .a=0xdc, .x=0x2a, .y=0x7f, .sp=0x7c, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x821b, .value=0xb0}, {.addr=0x821c, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0x821b, .value=0xb0, .type=IO_READ},
        {.addr=0x821c, .value=0x6e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0066) {
    const struct CPU_State initial_cpu = {.pc=0x4da0, .a=0xfa, .x=0xce, .y=0x67, .sp=0x5b, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x4da0, .value=0xb0}, {.addr=0x4da1, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x4da2, .a=0xfa, .x=0xce, .y=0x67, .sp=0x5b, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x4da0, .value=0xb0}, {.addr=0x4da1, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x4da0, .value=0xb0, .type=IO_READ},
        {.addr=0x4da1, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0067) {
    const struct CPU_State initial_cpu = {.pc=0xa27f, .a=0x8f, .x=0x40, .y=0x01, .sp=0xd8, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xa27f, .value=0xb0}, {.addr=0xa280, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0xa281, .a=0x8f, .x=0x40, .y=0x01, .sp=0xd8, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xa27f, .value=0xb0}, {.addr=0xa280, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0xa27f, .value=0xb0, .type=IO_READ},
        {.addr=0xa280, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0068) {
    const struct CPU_State initial_cpu = {.pc=0xddc6, .a=0x74, .x=0x88, .y=0xbf, .sp=0x78, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xddc6, .value=0xb0}, {.addr=0xddc7, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0xddc0, .a=0x74, .x=0x88, .y=0xbf, .sp=0x78, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0xddc6, .value=0xb0}, {.addr=0xddc7, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0xddc6, .value=0xb0, .type=IO_READ},
        {.addr=0xddc7, .value=0xf8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0069) {
    const struct CPU_State initial_cpu = {.pc=0xb5df, .a=0x0f, .x=0x77, .y=0x47, .sp=0x68, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xb5df, .value=0xb0}, {.addr=0xb5e0, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0xb5e1, .a=0x0f, .x=0x77, .y=0x47, .sp=0x68, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0xb5df, .value=0xb0}, {.addr=0xb5e0, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0xb5df, .value=0xb0, .type=IO_READ},
        {.addr=0xb5e0, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_006A) {
    const struct CPU_State initial_cpu = {.pc=0x0b3f, .a=0xe0, .x=0xd6, .y=0x58, .sp=0xb6, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x0b3f, .value=0xb0}, {.addr=0x0b40, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x0b41, .a=0xe0, .x=0xd6, .y=0x58, .sp=0xb6, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x0b3f, .value=0xb0}, {.addr=0x0b40, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x0b3f, .value=0xb0, .type=IO_READ},
        {.addr=0x0b40, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_006B) {
    const struct CPU_State initial_cpu = {.pc=0x64f7, .a=0xc4, .x=0x98, .y=0xc6, .sp=0x08, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x64f7, .value=0xb0}, {.addr=0x64f8, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x64f9, .a=0xc4, .x=0x98, .y=0xc6, .sp=0x08, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x64f7, .value=0xb0}, {.addr=0x64f8, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x64f7, .value=0xb0, .type=IO_READ},
        {.addr=0x64f8, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_006C) {
    const struct CPU_State initial_cpu = {.pc=0x43cd, .a=0xb9, .x=0x24, .y=0xcc, .sp=0x46, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x43cd, .value=0xb0}, {.addr=0x43ce, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0x43cf, .a=0xb9, .x=0x24, .y=0xcc, .sp=0x46, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x43cd, .value=0xb0}, {.addr=0x43ce, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0x43cd, .value=0xb0, .type=IO_READ},
        {.addr=0x43ce, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_006D) {
    const struct CPU_State initial_cpu = {.pc=0x751a, .a=0x91, .x=0x34, .y=0x12, .sp=0x0b, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x751a, .value=0xb0}, {.addr=0x751b, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x7515, .a=0x91, .x=0x34, .y=0x12, .sp=0x0b, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x751a, .value=0xb0}, {.addr=0x751b, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x751a, .value=0xb0, .type=IO_READ},
        {.addr=0x751b, .value=0xf9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_006E) {
    const struct CPU_State initial_cpu = {.pc=0x2a88, .a=0xd4, .x=0x1e, .y=0xab, .sp=0x8a, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x2a88, .value=0xb0}, {.addr=0x2a89, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0x2a16, .a=0xd4, .x=0x1e, .y=0xab, .sp=0x8a, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x2a88, .value=0xb0}, {.addr=0x2a89, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0x2a88, .value=0xb0, .type=IO_READ},
        {.addr=0x2a89, .value=0x8c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_006F) {
    const struct CPU_State initial_cpu = {.pc=0x4e56, .a=0xc8, .x=0x33, .y=0x81, .sp=0x43, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x4e56, .value=0xb0}, {.addr=0x4e57, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0x4e59, .a=0xc8, .x=0x33, .y=0x81, .sp=0x43, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x4e56, .value=0xb0}, {.addr=0x4e57, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0x4e56, .value=0xb0, .type=IO_READ},
        {.addr=0x4e57, .value=0x01, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0070) {
    const struct CPU_State initial_cpu = {.pc=0xef67, .a=0x18, .x=0x04, .y=0x1e, .sp=0x1d, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0xef67, .value=0xb0}, {.addr=0xef68, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xef89, .a=0x18, .x=0x04, .y=0x1e, .sp=0x1d, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xef67, .value=0xb0}, {.addr=0xef68, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xef67, .value=0xb0, .type=IO_READ},
        {.addr=0xef68, .value=0x20, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0071) {
    const struct CPU_State initial_cpu = {.pc=0x61b2, .a=0x81, .x=0xde, .y=0xcb, .sp=0xaf, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x61b2, .value=0xb0}, {.addr=0x61b3, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0x61bb, .a=0x81, .x=0xde, .y=0xcb, .sp=0xaf, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x61b2, .value=0xb0}, {.addr=0x61b3, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0x61b2, .value=0xb0, .type=IO_READ},
        {.addr=0x61b3, .value=0x07, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0072) {
    const struct CPU_State initial_cpu = {.pc=0x379c, .a=0xa6, .x=0x9d, .y=0xdf, .sp=0xc1, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x379c, .value=0xb0}, {.addr=0x379d, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0x37cf, .a=0xa6, .x=0x9d, .y=0xdf, .sp=0xc1, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x379c, .value=0xb0}, {.addr=0x379d, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0x379c, .value=0xb0, .type=IO_READ},
        {.addr=0x379d, .value=0x31, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0073) {
    const struct CPU_State initial_cpu = {.pc=0x1378, .a=0xd7, .x=0xdc, .y=0xdb, .sp=0xbe, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x1378, .value=0xb0}, {.addr=0x1379, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0x137a, .a=0xd7, .x=0xdc, .y=0xdb, .sp=0xbe, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x1378, .value=0xb0}, {.addr=0x1379, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0x1378, .value=0xb0, .type=IO_READ},
        {.addr=0x1379, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0074) {
    const struct CPU_State initial_cpu = {.pc=0x8a8f, .a=0xfd, .x=0xec, .y=0x88, .sp=0x8a, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x8a8f, .value=0xb0}, {.addr=0x8a90, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x8a91, .a=0xfd, .x=0xec, .y=0x88, .sp=0x8a, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0x8a8f, .value=0xb0}, {.addr=0x8a90, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x8a8f, .value=0xb0, .type=IO_READ},
        {.addr=0x8a90, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0075) {
    const struct CPU_State initial_cpu = {.pc=0xf66b, .a=0x5f, .x=0x78, .y=0xdb, .sp=0x4b, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xf66b, .value=0xb0}, {.addr=0xf66c, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0xf6d2, .a=0x5f, .x=0x78, .y=0xdb, .sp=0x4b, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xf66b, .value=0xb0}, {.addr=0xf66c, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0xf66b, .value=0xb0, .type=IO_READ},
        {.addr=0xf66c, .value=0x65, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0076) {
    const struct CPU_State initial_cpu = {.pc=0x6980, .a=0xec, .x=0xb3, .y=0x5a, .sp=0x39, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x6980, .value=0xb0}, {.addr=0x6981, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x6982, .a=0xec, .x=0xb3, .y=0x5a, .sp=0x39, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x6980, .value=0xb0}, {.addr=0x6981, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x6980, .value=0xb0, .type=IO_READ},
        {.addr=0x6981, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0077) {
    const struct CPU_State initial_cpu = {.pc=0x02eb, .a=0x1b, .x=0x99, .y=0x07, .sp=0xdc, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x02eb, .value=0xb0}, {.addr=0x02ec, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0x0303, .a=0x1b, .x=0x99, .y=0x07, .sp=0xdc, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x02eb, .value=0xb0}, {.addr=0x02ec, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0x02eb, .value=0xb0, .type=IO_READ},
        {.addr=0x02ec, .value=0x16, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0078) {
    const struct CPU_State initial_cpu = {.pc=0xa73b, .a=0xea, .x=0x9c, .y=0x3e, .sp=0xee, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xa73b, .value=0xb0}, {.addr=0xa73c, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0xa6ed, .a=0xea, .x=0x9c, .y=0x3e, .sp=0xee, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0xa73b, .value=0xb0}, {.addr=0xa73c, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0xa73b, .value=0xb0, .type=IO_READ},
        {.addr=0xa73c, .value=0xb0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0079) {
    const struct CPU_State initial_cpu = {.pc=0x29a9, .a=0x08, .x=0xfe, .y=0x92, .sp=0x98, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x29a9, .value=0xb0}, {.addr=0x29aa, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0x297f, .a=0x08, .x=0xfe, .y=0x92, .sp=0x98, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x29a9, .value=0xb0}, {.addr=0x29aa, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0x29a9, .value=0xb0, .type=IO_READ},
        {.addr=0x29aa, .value=0xd4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_007A) {
    const struct CPU_State initial_cpu = {.pc=0x0081, .a=0x30, .x=0xe4, .y=0x7c, .sp=0xda, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x0081, .value=0xb0}, {.addr=0x0082, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0x0083, .a=0x30, .x=0xe4, .y=0x7c, .sp=0xda, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x0081, .value=0xb0}, {.addr=0x0082, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0x0081, .value=0xb0, .type=IO_READ},
        {.addr=0x0082, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_007B) {
    const struct CPU_State initial_cpu = {.pc=0x842e, .a=0xb2, .x=0x47, .y=0xef, .sp=0x17, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x842e, .value=0xb0}, {.addr=0x842f, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0x8430, .a=0xb2, .x=0x47, .y=0xef, .sp=0x17, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x842e, .value=0xb0}, {.addr=0x842f, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0x842e, .value=0xb0, .type=IO_READ},
        {.addr=0x842f, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_007C) {
    const struct CPU_State initial_cpu = {.pc=0x185f, .a=0xd1, .x=0x25, .y=0x0c, .sp=0x55, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x185f, .value=0xb0}, {.addr=0x1860, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0x1861, .a=0xd1, .x=0x25, .y=0x0c, .sp=0x55, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x185f, .value=0xb0}, {.addr=0x1860, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0x185f, .value=0xb0, .type=IO_READ},
        {.addr=0x1860, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_007D) {
    const struct CPU_State initial_cpu = {.pc=0x2974, .a=0x36, .x=0xf3, .y=0x08, .sp=0x4c, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x2974, .value=0xb0}, {.addr=0x2975, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0x2976, .a=0x36, .x=0xf3, .y=0x08, .sp=0x4c, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x2974, .value=0xb0}, {.addr=0x2975, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0x2974, .value=0xb0, .type=IO_READ},
        {.addr=0x2975, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_007E) {
    const struct CPU_State initial_cpu = {.pc=0xf983, .a=0xbf, .x=0x19, .y=0xf8, .sp=0xda, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xf983, .value=0xb0}, {.addr=0xf984, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0xf98e, .a=0xbf, .x=0x19, .y=0xf8, .sp=0xda, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xf983, .value=0xb0}, {.addr=0xf984, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0xf983, .value=0xb0, .type=IO_READ},
        {.addr=0xf984, .value=0x09, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_007F) {
    const struct CPU_State initial_cpu = {.pc=0x5429, .a=0x42, .x=0xad, .y=0x01, .sp=0x1f, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x5429, .value=0xb0}, {.addr=0x542a, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0x542b, .a=0x42, .x=0xad, .y=0x01, .sp=0x1f, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x5429, .value=0xb0}, {.addr=0x542a, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0x5429, .value=0xb0, .type=IO_READ},
        {.addr=0x542a, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0080) {
    const struct CPU_State initial_cpu = {.pc=0x39b0, .a=0x3f, .x=0xbb, .y=0x39, .sp=0xa0, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x39b0, .value=0xb0}, {.addr=0x39b1, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0x3a2b, .a=0x3f, .x=0xbb, .y=0x39, .sp=0xa0, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x39b0, .value=0xb0}, {.addr=0x39b1, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0x39b0, .value=0xb0, .type=IO_READ},
        {.addr=0x39b1, .value=0x79, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0081) {
    const struct CPU_State initial_cpu = {.pc=0x3177, .a=0xfc, .x=0xaa, .y=0x0d, .sp=0x1c, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x3177, .value=0xb0}, {.addr=0x3178, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0x310e, .a=0xfc, .x=0xaa, .y=0x0d, .sp=0x1c, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x3177, .value=0xb0}, {.addr=0x3178, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0x3177, .value=0xb0, .type=IO_READ},
        {.addr=0x3178, .value=0x95, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0082) {
    const struct CPU_State initial_cpu = {.pc=0x48cb, .a=0x5c, .x=0x01, .y=0x3c, .sp=0xd1, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x48cb, .value=0xb0}, {.addr=0x48cc, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0x491b, .a=0x5c, .x=0x01, .y=0x3c, .sp=0xd1, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x48cb, .value=0xb0}, {.addr=0x48cc, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0x48cb, .value=0xb0, .type=IO_READ},
        {.addr=0x48cc, .value=0x4e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0083) {
    const struct CPU_State initial_cpu = {.pc=0x3f62, .a=0xb0, .x=0x33, .y=0x90, .sp=0xad, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x3f62, .value=0xb0}, {.addr=0x3f63, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x3f41, .a=0xb0, .x=0x33, .y=0x90, .sp=0xad, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x3f62, .value=0xb0}, {.addr=0x3f63, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x3f62, .value=0xb0, .type=IO_READ},
        {.addr=0x3f63, .value=0xdd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0084) {
    const struct CPU_State initial_cpu = {.pc=0xa00b, .a=0x35, .x=0x9d, .y=0xa0, .sp=0x9b, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xa00b, .value=0xb0}, {.addr=0xa00c, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0x9ff7, .a=0x35, .x=0x9d, .y=0xa0, .sp=0x9b, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0xa00b, .value=0xb0}, {.addr=0xa00c, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0xa00b, .value=0xb0, .type=IO_READ},
        {.addr=0xa00c, .value=0xea, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0085) {
    const struct CPU_State initial_cpu = {.pc=0x1cdc, .a=0x1d, .x=0x67, .y=0xa3, .sp=0x05, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x1cdc, .value=0xb0}, {.addr=0x1cdd, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x1cde, .a=0x1d, .x=0x67, .y=0xa3, .sp=0x05, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x1cdc, .value=0xb0}, {.addr=0x1cdd, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x1cdc, .value=0xb0, .type=IO_READ},
        {.addr=0x1cdd, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0086) {
    const struct CPU_State initial_cpu = {.pc=0xe702, .a=0xa9, .x=0x3e, .y=0xee, .sp=0x55, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xe702, .value=0xb0}, {.addr=0xe703, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xe692, .a=0xa9, .x=0x3e, .y=0xee, .sp=0x55, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0xe702, .value=0xb0}, {.addr=0xe703, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xe702, .value=0xb0, .type=IO_READ},
        {.addr=0xe703, .value=0x8e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0087) {
    const struct CPU_State initial_cpu = {.pc=0xc0ba, .a=0x14, .x=0x77, .y=0x7f, .sp=0x06, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0xc0ba, .value=0xb0}, {.addr=0xc0bb, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0xc11d, .a=0x14, .x=0x77, .y=0x7f, .sp=0x06, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xc0ba, .value=0xb0}, {.addr=0xc0bb, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0xc0ba, .value=0xb0, .type=IO_READ},
        {.addr=0xc0bb, .value=0x61, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0088) {
    const struct CPU_State initial_cpu = {.pc=0xd71b, .a=0xc1, .x=0x96, .y=0xc2, .sp=0xac, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xd71b, .value=0xb0}, {.addr=0xd71c, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0xd758, .a=0xc1, .x=0x96, .y=0xc2, .sp=0xac, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0xd71b, .value=0xb0}, {.addr=0xd71c, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0xd71b, .value=0xb0, .type=IO_READ},
        {.addr=0xd71c, .value=0x3b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0089) {
    const struct CPU_State initial_cpu = {.pc=0xb64f, .a=0xbf, .x=0xa7, .y=0x19, .sp=0xac, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0xb64f, .value=0xb0}, {.addr=0xb650, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xb651, .a=0xbf, .x=0xa7, .y=0x19, .sp=0xac, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xb64f, .value=0xb0}, {.addr=0xb650, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xb64f, .value=0xb0, .type=IO_READ},
        {.addr=0xb650, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_008A) {
    const struct CPU_State initial_cpu = {.pc=0xa965, .a=0xd2, .x=0x4e, .y=0x20, .sp=0x62, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xa965, .value=0xb0}, {.addr=0xa966, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0xa989, .a=0xd2, .x=0x4e, .y=0x20, .sp=0x62, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xa965, .value=0xb0}, {.addr=0xa966, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0xa965, .value=0xb0, .type=IO_READ},
        {.addr=0xa966, .value=0x22, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_008B) {
    const struct CPU_State initial_cpu = {.pc=0x0ca6, .a=0xb2, .x=0xbd, .y=0x19, .sp=0xcb, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x0ca6, .value=0xb0}, {.addr=0x0ca7, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x0ce8, .a=0xb2, .x=0xbd, .y=0x19, .sp=0xcb, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x0ca6, .value=0xb0}, {.addr=0x0ca7, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x0ca6, .value=0xb0, .type=IO_READ},
        {.addr=0x0ca7, .value=0x40, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_008C) {
    const struct CPU_State initial_cpu = {.pc=0x84fa, .a=0x76, .x=0x18, .y=0xe1, .sp=0x60, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x84fa, .value=0xb0}, {.addr=0x84fb, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x8496, .a=0x76, .x=0x18, .y=0xe1, .sp=0x60, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x84fa, .value=0xb0}, {.addr=0x84fb, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x84fa, .value=0xb0, .type=IO_READ},
        {.addr=0x84fb, .value=0x9a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_008D) {
    const struct CPU_State initial_cpu = {.pc=0x50c5, .a=0x66, .x=0x67, .y=0xe1, .sp=0xbe, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x50c5, .value=0xb0}, {.addr=0x50c6, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0x5118, .a=0x66, .x=0x67, .y=0xe1, .sp=0xbe, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x50c5, .value=0xb0}, {.addr=0x50c6, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0x50c5, .value=0xb0, .type=IO_READ},
        {.addr=0x50c6, .value=0x51, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_008E) {
    const struct CPU_State initial_cpu = {.pc=0xcff1, .a=0x15, .x=0xee, .y=0xf3, .sp=0xba, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xcff1, .value=0xb0}, {.addr=0xcff2, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0xcff3, .a=0x15, .x=0xee, .y=0xf3, .sp=0xba, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xcff1, .value=0xb0}, {.addr=0xcff2, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0xcff1, .value=0xb0, .type=IO_READ},
        {.addr=0xcff2, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_008F) {
    const struct CPU_State initial_cpu = {.pc=0xdc7f, .a=0x55, .x=0x34, .y=0x43, .sp=0xe7, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xdc7f, .value=0xb0}, {.addr=0xdc80, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xdc5e, .a=0x55, .x=0x34, .y=0x43, .sp=0xe7, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xdc7f, .value=0xb0}, {.addr=0xdc80, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xdc7f, .value=0xb0, .type=IO_READ},
        {.addr=0xdc80, .value=0xdd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0090) {
    const struct CPU_State initial_cpu = {.pc=0x68e4, .a=0xcc, .x=0x4d, .y=0x6e, .sp=0xd7, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x68e4, .value=0xb0}, {.addr=0x68e5, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0x6945, .a=0xcc, .x=0x4d, .y=0x6e, .sp=0xd7, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x68e4, .value=0xb0}, {.addr=0x68e5, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0x68e4, .value=0xb0, .type=IO_READ},
        {.addr=0x68e5, .value=0x5f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0091) {
    const struct CPU_State initial_cpu = {.pc=0x1f3d, .a=0x06, .x=0x2c, .y=0xc9, .sp=0x35, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x1f3d, .value=0xb0}, {.addr=0x1f3e, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x1f85, .a=0x06, .x=0x2c, .y=0xc9, .sp=0x35, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x1f3d, .value=0xb0}, {.addr=0x1f3e, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x1f3d, .value=0xb0, .type=IO_READ},
        {.addr=0x1f3e, .value=0x46, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0092) {
    const struct CPU_State initial_cpu = {.pc=0xe8e6, .a=0xf7, .x=0x44, .y=0x84, .sp=0x7a, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xe8e6, .value=0xb0}, {.addr=0xe8e7, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0xe8ed, .a=0xf7, .x=0x44, .y=0x84, .sp=0x7a, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xe8e6, .value=0xb0}, {.addr=0xe8e7, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0xe8e6, .value=0xb0, .type=IO_READ},
        {.addr=0xe8e7, .value=0x05, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0093) {
    const struct CPU_State initial_cpu = {.pc=0x33a7, .a=0x6f, .x=0xb7, .y=0x56, .sp=0xd4, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x33a7, .value=0xb0}, {.addr=0x33a8, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x33a9, .a=0x6f, .x=0xb7, .y=0x56, .sp=0xd4, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x33a7, .value=0xb0}, {.addr=0x33a8, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x33a7, .value=0xb0, .type=IO_READ},
        {.addr=0x33a8, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0094) {
    const struct CPU_State initial_cpu = {.pc=0xb439, .a=0x8d, .x=0x26, .y=0x97, .sp=0xbb, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xb439, .value=0xb0}, {.addr=0xb43a, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0xb43b, .a=0x8d, .x=0x26, .y=0x97, .sp=0xbb, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xb439, .value=0xb0}, {.addr=0xb43a, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0xb439, .value=0xb0, .type=IO_READ},
        {.addr=0xb43a, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0095) {
    const struct CPU_State initial_cpu = {.pc=0xc34b, .a=0xab, .x=0x41, .y=0x62, .sp=0x2b, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xc34b, .value=0xb0}, {.addr=0xc34c, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xc34d, .a=0xab, .x=0x41, .y=0x62, .sp=0x2b, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xc34b, .value=0xb0}, {.addr=0xc34c, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xc34b, .value=0xb0, .type=IO_READ},
        {.addr=0xc34c, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0096) {
    const struct CPU_State initial_cpu = {.pc=0x4531, .a=0xe3, .x=0x43, .y=0xbb, .sp=0x23, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x4531, .value=0xb0}, {.addr=0x4532, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0x4503, .a=0xe3, .x=0x43, .y=0xbb, .sp=0x23, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x4531, .value=0xb0}, {.addr=0x4532, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0x4531, .value=0xb0, .type=IO_READ},
        {.addr=0x4532, .value=0xd0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0097) {
    const struct CPU_State initial_cpu = {.pc=0x35f3, .a=0xb8, .x=0x30, .y=0xad, .sp=0x74, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x35f3, .value=0xb0}, {.addr=0x35f4, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0x35f5, .a=0xb8, .x=0x30, .y=0xad, .sp=0x74, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x35f3, .value=0xb0}, {.addr=0x35f4, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0x35f3, .value=0xb0, .type=IO_READ},
        {.addr=0x35f4, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0098) {
    const struct CPU_State initial_cpu = {.pc=0x5fa0, .a=0x56, .x=0x02, .y=0xe3, .sp=0x4c, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x5fa0, .value=0xb0}, {.addr=0x5fa1, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0x5fba, .a=0x56, .x=0x02, .y=0xe3, .sp=0x4c, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x5fa0, .value=0xb0}, {.addr=0x5fa1, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0x5fa0, .value=0xb0, .type=IO_READ},
        {.addr=0x5fa1, .value=0x18, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0099) {
    const struct CPU_State initial_cpu = {.pc=0x8fe6, .a=0xa6, .x=0x0e, .y=0x33, .sp=0x4a, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x8fe6, .value=0xb0}, {.addr=0x8fe7, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x8fe8, .a=0xa6, .x=0x0e, .y=0x33, .sp=0x4a, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x8fe6, .value=0xb0}, {.addr=0x8fe7, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x8fe6, .value=0xb0, .type=IO_READ},
        {.addr=0x8fe7, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_009A) {
    const struct CPU_State initial_cpu = {.pc=0x0350, .a=0x43, .x=0xba, .y=0x8e, .sp=0x26, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x0350, .value=0xb0}, {.addr=0x0351, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0x0319, .a=0x43, .x=0xba, .y=0x8e, .sp=0x26, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x0350, .value=0xb0}, {.addr=0x0351, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0x0350, .value=0xb0, .type=IO_READ},
        {.addr=0x0351, .value=0xc7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_009B) {
    const struct CPU_State initial_cpu = {.pc=0xb329, .a=0xe0, .x=0x6c, .y=0x9f, .sp=0x01, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xb329, .value=0xb0}, {.addr=0xb32a, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0xb32b, .a=0xe0, .x=0x6c, .y=0x9f, .sp=0x01, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xb329, .value=0xb0}, {.addr=0xb32a, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0xb329, .value=0xb0, .type=IO_READ},
        {.addr=0xb32a, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_009C) {
    const struct CPU_State initial_cpu = {.pc=0xda76, .a=0x47, .x=0xdd, .y=0x0a, .sp=0x50, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xda76, .value=0xb0}, {.addr=0xda77, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0xdab2, .a=0x47, .x=0xdd, .y=0x0a, .sp=0x50, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xda76, .value=0xb0}, {.addr=0xda77, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0xda76, .value=0xb0, .type=IO_READ},
        {.addr=0xda77, .value=0x3a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_009D) {
    const struct CPU_State initial_cpu = {.pc=0xf3a7, .a=0x94, .x=0xc4, .y=0x4c, .sp=0x90, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xf3a7, .value=0xb0}, {.addr=0xf3a8, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0xf3a9, .a=0x94, .x=0xc4, .y=0x4c, .sp=0x90, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0xf3a7, .value=0xb0}, {.addr=0xf3a8, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0xf3a7, .value=0xb0, .type=IO_READ},
        {.addr=0xf3a8, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_009E) {
    const struct CPU_State initial_cpu = {.pc=0x557d, .a=0x51, .x=0xb3, .y=0x1d, .sp=0xd9, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x557d, .value=0xb0}, {.addr=0x557e, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0x55ba, .a=0x51, .x=0xb3, .y=0x1d, .sp=0xd9, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x557d, .value=0xb0}, {.addr=0x557e, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0x557d, .value=0xb0, .type=IO_READ},
        {.addr=0x557e, .value=0x3b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_009F) {
    const struct CPU_State initial_cpu = {.pc=0x5d34, .a=0xbf, .x=0xc4, .y=0x9d, .sp=0xf8, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x5d34, .value=0xb0}, {.addr=0x5d35, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0x5cf7, .a=0xbf, .x=0xc4, .y=0x9d, .sp=0xf8, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x5d34, .value=0xb0}, {.addr=0x5d35, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0x5d34, .value=0xb0, .type=IO_READ},
        {.addr=0x5d35, .value=0xc1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00A0) {
    const struct CPU_State initial_cpu = {.pc=0x4a1d, .a=0xab, .x=0x7c, .y=0xdb, .sp=0xc3, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x4a1d, .value=0xb0}, {.addr=0x4a1e, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x4a65, .a=0xab, .x=0x7c, .y=0xdb, .sp=0xc3, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x4a1d, .value=0xb0}, {.addr=0x4a1e, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x4a1d, .value=0xb0, .type=IO_READ},
        {.addr=0x4a1e, .value=0x46, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00A1) {
    const struct CPU_State initial_cpu = {.pc=0x4655, .a=0x82, .x=0x53, .y=0x0d, .sp=0xdf, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x4655, .value=0xb0}, {.addr=0x4656, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x4657, .a=0x82, .x=0x53, .y=0x0d, .sp=0xdf, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x4655, .value=0xb0}, {.addr=0x4656, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x4655, .value=0xb0, .type=IO_READ},
        {.addr=0x4656, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00A2) {
    const struct CPU_State initial_cpu = {.pc=0x7ca3, .a=0x2f, .x=0x70, .y=0x8c, .sp=0x8b, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x7ca3, .value=0xb0}, {.addr=0x7ca4, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x7ca5, .a=0x2f, .x=0x70, .y=0x8c, .sp=0x8b, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x7ca3, .value=0xb0}, {.addr=0x7ca4, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x7ca3, .value=0xb0, .type=IO_READ},
        {.addr=0x7ca4, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00A3) {
    const struct CPU_State initial_cpu = {.pc=0xc2b4, .a=0xa8, .x=0xe2, .y=0x0c, .sp=0xee, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xc2b4, .value=0xb0}, {.addr=0xc2b5, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0xc2b6, .a=0xa8, .x=0xe2, .y=0x0c, .sp=0xee, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0xc2b4, .value=0xb0}, {.addr=0xc2b5, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0xc2b4, .value=0xb0, .type=IO_READ},
        {.addr=0xc2b5, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00A4) {
    const struct CPU_State initial_cpu = {.pc=0x21d6, .a=0xc7, .x=0x0c, .y=0x7d, .sp=0xc9, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x21d6, .value=0xb0}, {.addr=0x21d7, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0x21bc, .a=0xc7, .x=0x0c, .y=0x7d, .sp=0xc9, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x21d6, .value=0xb0}, {.addr=0x21d7, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0x21d6, .value=0xb0, .type=IO_READ},
        {.addr=0x21d7, .value=0xe4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00A5) {
    const struct CPU_State initial_cpu = {.pc=0x4dd4, .a=0x68, .x=0x6a, .y=0x09, .sp=0x90, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x4dd4, .value=0xb0}, {.addr=0x4dd5, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0x4d6f, .a=0x68, .x=0x6a, .y=0x09, .sp=0x90, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x4dd4, .value=0xb0}, {.addr=0x4dd5, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0x4dd4, .value=0xb0, .type=IO_READ},
        {.addr=0x4dd5, .value=0x99, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00A6) {
    const struct CPU_State initial_cpu = {.pc=0x44f3, .a=0x4d, .x=0xb4, .y=0x6c, .sp=0x8c, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x44f3, .value=0xb0}, {.addr=0x44f4, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0x44f5, .a=0x4d, .x=0xb4, .y=0x6c, .sp=0x8c, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x44f3, .value=0xb0}, {.addr=0x44f4, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0x44f3, .value=0xb0, .type=IO_READ},
        {.addr=0x44f4, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00A7) {
    const struct CPU_State initial_cpu = {.pc=0x71f6, .a=0x79, .x=0xbf, .y=0xab, .sp=0xcd, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x71f6, .value=0xb0}, {.addr=0x71f7, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0x71f8, .a=0x79, .x=0xbf, .y=0xab, .sp=0xcd, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x71f6, .value=0xb0}, {.addr=0x71f7, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0x71f6, .value=0xb0, .type=IO_READ},
        {.addr=0x71f7, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00A8) {
    const struct CPU_State initial_cpu = {.pc=0x8f38, .a=0xf2, .x=0x66, .y=0x01, .sp=0x2e, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x8f38, .value=0xb0}, {.addr=0x8f39, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x8f3a, .a=0xf2, .x=0x66, .y=0x01, .sp=0x2e, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x8f38, .value=0xb0}, {.addr=0x8f39, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x8f38, .value=0xb0, .type=IO_READ},
        {.addr=0x8f39, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00A9) {
    const struct CPU_State initial_cpu = {.pc=0x76a3, .a=0xdf, .x=0xc5, .y=0xf5, .sp=0x0d, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x76a3, .value=0xb0}, {.addr=0x76a4, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0x76a5, .a=0xdf, .x=0xc5, .y=0xf5, .sp=0x0d, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x76a3, .value=0xb0}, {.addr=0x76a4, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0x76a3, .value=0xb0, .type=IO_READ},
        {.addr=0x76a4, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00AA) {
    const struct CPU_State initial_cpu = {.pc=0x10a6, .a=0xc0, .x=0x27, .y=0xf7, .sp=0x10, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x10a6, .value=0xb0}, {.addr=0x10a7, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x10a8, .a=0xc0, .x=0x27, .y=0xf7, .sp=0x10, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x10a6, .value=0xb0}, {.addr=0x10a7, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x10a6, .value=0xb0, .type=IO_READ},
        {.addr=0x10a7, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00AB) {
    const struct CPU_State initial_cpu = {.pc=0xbd54, .a=0xcc, .x=0xcb, .y=0xaa, .sp=0x39, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xbd54, .value=0xb0}, {.addr=0xbd55, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0xbd20, .a=0xcc, .x=0xcb, .y=0xaa, .sp=0x39, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0xbd54, .value=0xb0}, {.addr=0xbd55, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0xbd54, .value=0xb0, .type=IO_READ},
        {.addr=0xbd55, .value=0xca, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00AC) {
    const struct CPU_State initial_cpu = {.pc=0x52ad, .a=0x49, .x=0x92, .y=0xf2, .sp=0xa7, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x52ad, .value=0xb0}, {.addr=0x52ae, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0x5299, .a=0x49, .x=0x92, .y=0xf2, .sp=0xa7, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x52ad, .value=0xb0}, {.addr=0x52ae, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0x52ad, .value=0xb0, .type=IO_READ},
        {.addr=0x52ae, .value=0xea, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00AD) {
    const struct CPU_State initial_cpu = {.pc=0x7a99, .a=0xd7, .x=0x68, .y=0xd0, .sp=0x7a, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x7a99, .value=0xb0}, {.addr=0x7a9a, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0x7a9b, .a=0xd7, .x=0x68, .y=0xd0, .sp=0x7a, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x7a99, .value=0xb0}, {.addr=0x7a9a, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0x7a99, .value=0xb0, .type=IO_READ},
        {.addr=0x7a9a, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00AE) {
    const struct CPU_State initial_cpu = {.pc=0x3a2a, .a=0x99, .x=0x03, .y=0x52, .sp=0xd3, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x3a2a, .value=0xb0}, {.addr=0x3a2b, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0x3a05, .a=0x99, .x=0x03, .y=0x52, .sp=0xd3, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x3a2a, .value=0xb0}, {.addr=0x3a2b, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0x3a2a, .value=0xb0, .type=IO_READ},
        {.addr=0x3a2b, .value=0xd9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00AF) {
    const struct CPU_State initial_cpu = {.pc=0x5ba9, .a=0x3b, .x=0xd0, .y=0xf9, .sp=0xd5, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x5ba9, .value=0xb0}, {.addr=0x5baa, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0x5c06, .a=0x3b, .x=0xd0, .y=0xf9, .sp=0xd5, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x5ba9, .value=0xb0}, {.addr=0x5baa, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0x5ba9, .value=0xb0, .type=IO_READ},
        {.addr=0x5baa, .value=0x5b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00B0) {
    const struct CPU_State initial_cpu = {.pc=0x5342, .a=0x84, .x=0xbc, .y=0x19, .sp=0x95, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x5342, .value=0xb0}, {.addr=0x5343, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0x52db, .a=0x84, .x=0xbc, .y=0x19, .sp=0x95, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x5342, .value=0xb0}, {.addr=0x5343, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0x5342, .value=0xb0, .type=IO_READ},
        {.addr=0x5343, .value=0x97, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00B1) {
    const struct CPU_State initial_cpu = {.pc=0xbfbd, .a=0x5b, .x=0xb4, .y=0x47, .sp=0xd2, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xbfbd, .value=0xb0}, {.addr=0xbfbe, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0xbfc7, .a=0x5b, .x=0xb4, .y=0x47, .sp=0xd2, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xbfbd, .value=0xb0}, {.addr=0xbfbe, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0xbfbd, .value=0xb0, .type=IO_READ},
        {.addr=0xbfbe, .value=0x08, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00B2) {
    const struct CPU_State initial_cpu = {.pc=0x0693, .a=0xd7, .x=0xe4, .y=0xec, .sp=0x4a, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x0693, .value=0xb0}, {.addr=0x0694, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x0695, .a=0xd7, .x=0xe4, .y=0xec, .sp=0x4a, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x0693, .value=0xb0}, {.addr=0x0694, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x0693, .value=0xb0, .type=IO_READ},
        {.addr=0x0694, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00B3) {
    const struct CPU_State initial_cpu = {.pc=0xfbaa, .a=0xa6, .x=0x59, .y=0x46, .sp=0x75, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xfbaa, .value=0xb0}, {.addr=0xfbab, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xfbac, .a=0xa6, .x=0x59, .y=0x46, .sp=0x75, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0xfbaa, .value=0xb0}, {.addr=0xfbab, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xfbaa, .value=0xb0, .type=IO_READ},
        {.addr=0xfbab, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00B4) {
    const struct CPU_State initial_cpu = {.pc=0xba41, .a=0x47, .x=0x04, .y=0xcf, .sp=0x01, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xba41, .value=0xb0}, {.addr=0xba42, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xba43, .a=0x47, .x=0x04, .y=0xcf, .sp=0x01, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0xba41, .value=0xb0}, {.addr=0xba42, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xba41, .value=0xb0, .type=IO_READ},
        {.addr=0xba42, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00B5) {
    const struct CPU_State initial_cpu = {.pc=0x6876, .a=0x69, .x=0x27, .y=0x0e, .sp=0x4f, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x6876, .value=0xb0}, {.addr=0x6877, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0x6878, .a=0x69, .x=0x27, .y=0x0e, .sp=0x4f, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x6876, .value=0xb0}, {.addr=0x6877, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0x6876, .value=0xb0, .type=IO_READ},
        {.addr=0x6877, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00B6) {
    const struct CPU_State initial_cpu = {.pc=0xf6cb, .a=0x2d, .x=0x9d, .y=0xa7, .sp=0x80, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xf6cb, .value=0xb0}, {.addr=0xf6cc, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0xf6cd, .a=0x2d, .x=0x9d, .y=0xa7, .sp=0x80, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xf6cb, .value=0xb0}, {.addr=0xf6cc, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0xf6cb, .value=0xb0, .type=IO_READ},
        {.addr=0xf6cc, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00B7) {
    const struct CPU_State initial_cpu = {.pc=0x467a, .a=0x89, .x=0xea, .y=0x1d, .sp=0x2f, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x467a, .value=0xb0}, {.addr=0x467b, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0x4692, .a=0x89, .x=0xea, .y=0x1d, .sp=0x2f, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x467a, .value=0xb0}, {.addr=0x467b, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0x467a, .value=0xb0, .type=IO_READ},
        {.addr=0x467b, .value=0x16, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00B8) {
    const struct CPU_State initial_cpu = {.pc=0x85ef, .a=0xca, .x=0x83, .y=0x5d, .sp=0xdf, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x85ef, .value=0xb0}, {.addr=0x85f0, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x858b, .a=0xca, .x=0x83, .y=0x5d, .sp=0xdf, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x85ef, .value=0xb0}, {.addr=0x85f0, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x85ef, .value=0xb0, .type=IO_READ},
        {.addr=0x85f0, .value=0x9a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00B9) {
    const struct CPU_State initial_cpu = {.pc=0x03c3, .a=0x3a, .x=0x6f, .y=0xa6, .sp=0xba, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x03c3, .value=0xb0}, {.addr=0x03c4, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x03c5, .a=0x3a, .x=0x6f, .y=0xa6, .sp=0xba, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x03c3, .value=0xb0}, {.addr=0x03c4, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x03c3, .value=0xb0, .type=IO_READ},
        {.addr=0x03c4, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00BA) {
    const struct CPU_State initial_cpu = {.pc=0x57a5, .a=0x67, .x=0x24, .y=0x16, .sp=0x60, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x57a5, .value=0xb0}, {.addr=0x57a6, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x57a7, .a=0x67, .x=0x24, .y=0x16, .sp=0x60, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x57a5, .value=0xb0}, {.addr=0x57a6, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x57a5, .value=0xb0, .type=IO_READ},
        {.addr=0x57a6, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00BB) {
    const struct CPU_State initial_cpu = {.pc=0x5e08, .a=0x73, .x=0x77, .y=0xa2, .sp=0xa7, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x5e08, .value=0xb0}, {.addr=0x5e09, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0x5e72, .a=0x73, .x=0x77, .y=0xa2, .sp=0xa7, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x5e08, .value=0xb0}, {.addr=0x5e09, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0x5e08, .value=0xb0, .type=IO_READ},
        {.addr=0x5e09, .value=0x68, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00BC) {
    const struct CPU_State initial_cpu = {.pc=0x9c15, .a=0xb2, .x=0xa7, .y=0xb5, .sp=0xa1, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x9c15, .value=0xb0}, {.addr=0x9c16, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0x9c17, .a=0xb2, .x=0xa7, .y=0xb5, .sp=0xa1, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x9c15, .value=0xb0}, {.addr=0x9c16, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0x9c15, .value=0xb0, .type=IO_READ},
        {.addr=0x9c16, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00BD) {
    const struct CPU_State initial_cpu = {.pc=0x9f5c, .a=0xce, .x=0x40, .y=0xe6, .sp=0x2e, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x9f5c, .value=0xb0}, {.addr=0x9f5d, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0x9f5e, .a=0xce, .x=0x40, .y=0xe6, .sp=0x2e, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x9f5c, .value=0xb0}, {.addr=0x9f5d, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0x9f5c, .value=0xb0, .type=IO_READ},
        {.addr=0x9f5d, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00BE) {
    const struct CPU_State initial_cpu = {.pc=0x1d86, .a=0x54, .x=0x92, .y=0xcd, .sp=0x56, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x1d86, .value=0xb0}, {.addr=0x1d87, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0x1d88, .a=0x54, .x=0x92, .y=0xcd, .sp=0x56, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x1d86, .value=0xb0}, {.addr=0x1d87, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0x1d86, .value=0xb0, .type=IO_READ},
        {.addr=0x1d87, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00BF) {
    const struct CPU_State initial_cpu = {.pc=0x686a, .a=0xa9, .x=0x02, .y=0xb5, .sp=0xb2, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x686a, .value=0xb0}, {.addr=0x686b, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x686c, .a=0xa9, .x=0x02, .y=0xb5, .sp=0xb2, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x686a, .value=0xb0}, {.addr=0x686b, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x686a, .value=0xb0, .type=IO_READ},
        {.addr=0x686b, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00C0) {
    const struct CPU_State initial_cpu = {.pc=0x1625, .a=0xa6, .x=0xb0, .y=0x24, .sp=0xf6, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x1625, .value=0xb0}, {.addr=0x1626, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0x1627, .a=0xa6, .x=0xb0, .y=0x24, .sp=0xf6, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x1625, .value=0xb0}, {.addr=0x1626, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0x1625, .value=0xb0, .type=IO_READ},
        {.addr=0x1626, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00C1) {
    const struct CPU_State initial_cpu = {.pc=0x0c9a, .a=0x40, .x=0xd5, .y=0x84, .sp=0xc1, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x0c9a, .value=0xb0}, {.addr=0x0c9b, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0x0c9c, .a=0x40, .x=0xd5, .y=0x84, .sp=0xc1, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x0c9a, .value=0xb0}, {.addr=0x0c9b, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0x0c9a, .value=0xb0, .type=IO_READ},
        {.addr=0x0c9b, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00C2) {
    const struct CPU_State initial_cpu = {.pc=0xffe8, .a=0xff, .x=0xc3, .y=0xd9, .sp=0x05, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xffe8, .value=0xb0}, {.addr=0xffe9, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0xffea, .a=0xff, .x=0xc3, .y=0xd9, .sp=0x05, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0xffe8, .value=0xb0}, {.addr=0xffe9, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0xffe8, .value=0xb0, .type=IO_READ},
        {.addr=0xffe9, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00C3) {
    const struct CPU_State initial_cpu = {.pc=0x0801, .a=0xb6, .x=0x6b, .y=0x33, .sp=0x7b, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x0801, .value=0xb0}, {.addr=0x0802, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0x081a, .a=0xb6, .x=0x6b, .y=0x33, .sp=0x7b, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x0801, .value=0xb0}, {.addr=0x0802, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0x0801, .value=0xb0, .type=IO_READ},
        {.addr=0x0802, .value=0x17, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00C4) {
    const struct CPU_State initial_cpu = {.pc=0x33da, .a=0x79, .x=0x7e, .y=0xcb, .sp=0xc6, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x33da, .value=0xb0}, {.addr=0x33db, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x33dc, .a=0x79, .x=0x7e, .y=0xcb, .sp=0xc6, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x33da, .value=0xb0}, {.addr=0x33db, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x33da, .value=0xb0, .type=IO_READ},
        {.addr=0x33db, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00C5) {
    const struct CPU_State initial_cpu = {.pc=0xb063, .a=0x43, .x=0xd3, .y=0x57, .sp=0xd9, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xb063, .value=0xb0}, {.addr=0xb064, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0xaff5, .a=0x43, .x=0xd3, .y=0x57, .sp=0xd9, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0xb063, .value=0xb0}, {.addr=0xb064, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0xb063, .value=0xb0, .type=IO_READ},
        {.addr=0xb064, .value=0x90, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00C6) {
    const struct CPU_State initial_cpu = {.pc=0x4aef, .a=0x63, .x=0xf3, .y=0xa0, .sp=0x37, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x4aef, .value=0xb0}, {.addr=0x4af0, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0x4af1, .a=0x63, .x=0xf3, .y=0xa0, .sp=0x37, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x4aef, .value=0xb0}, {.addr=0x4af0, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0x4aef, .value=0xb0, .type=IO_READ},
        {.addr=0x4af0, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00C7) {
    const struct CPU_State initial_cpu = {.pc=0xb202, .a=0xf4, .x=0x28, .y=0x90, .sp=0xbc, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xb202, .value=0xb0}, {.addr=0xb203, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0xb1a6, .a=0xf4, .x=0x28, .y=0x90, .sp=0xbc, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0xb202, .value=0xb0}, {.addr=0xb203, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0xb202, .value=0xb0, .type=IO_READ},
        {.addr=0xb203, .value=0xa2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00C8) {
    const struct CPU_State initial_cpu = {.pc=0x7bd8, .a=0x10, .x=0x76, .y=0x5c, .sp=0xf5, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x7bd8, .value=0xb0}, {.addr=0x7bd9, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0x7bda, .a=0x10, .x=0x76, .y=0x5c, .sp=0xf5, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x7bd8, .value=0xb0}, {.addr=0x7bd9, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0x7bd8, .value=0xb0, .type=IO_READ},
        {.addr=0x7bd9, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00C9) {
    const struct CPU_State initial_cpu = {.pc=0x0dde, .a=0x00, .x=0x4c, .y=0xc3, .sp=0x82, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x0dde, .value=0xb0}, {.addr=0x0ddf, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0x0de0, .a=0x00, .x=0x4c, .y=0xc3, .sp=0x82, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x0dde, .value=0xb0}, {.addr=0x0ddf, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0x0dde, .value=0xb0, .type=IO_READ},
        {.addr=0x0ddf, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00CA) {
    const struct CPU_State initial_cpu = {.pc=0x2437, .a=0xd7, .x=0x33, .y=0xd9, .sp=0xc0, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x2437, .value=0xb0}, {.addr=0x2438, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x2439, .a=0xd7, .x=0x33, .y=0xd9, .sp=0xc0, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x2437, .value=0xb0}, {.addr=0x2438, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x2437, .value=0xb0, .type=IO_READ},
        {.addr=0x2438, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00CB) {
    const struct CPU_State initial_cpu = {.pc=0x2d9b, .a=0x34, .x=0x64, .y=0x6a, .sp=0x2b, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x2d9b, .value=0xb0}, {.addr=0x2d9c, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0x2d9d, .a=0x34, .x=0x64, .y=0x6a, .sp=0x2b, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x2d9b, .value=0xb0}, {.addr=0x2d9c, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0x2d9b, .value=0xb0, .type=IO_READ},
        {.addr=0x2d9c, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00CC) {
    const struct CPU_State initial_cpu = {.pc=0x80fb, .a=0x77, .x=0xeb, .y=0x23, .sp=0x5e, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x80fb, .value=0xb0}, {.addr=0x80fc, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x80fd, .a=0x77, .x=0xeb, .y=0x23, .sp=0x5e, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x80fb, .value=0xb0}, {.addr=0x80fc, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x80fb, .value=0xb0, .type=IO_READ},
        {.addr=0x80fc, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00CD) {
    const struct CPU_State initial_cpu = {.pc=0x1bd6, .a=0x3b, .x=0xfc, .y=0x4a, .sp=0x64, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x1bd6, .value=0xb0}, {.addr=0x1bd7, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0x1c02, .a=0x3b, .x=0xfc, .y=0x4a, .sp=0x64, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x1bd6, .value=0xb0}, {.addr=0x1bd7, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0x1bd6, .value=0xb0, .type=IO_READ},
        {.addr=0x1bd7, .value=0x2a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00CE) {
    const struct CPU_State initial_cpu = {.pc=0xd6fe, .a=0x56, .x=0x04, .y=0xf1, .sp=0x01, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xd6fe, .value=0xb0}, {.addr=0xd6ff, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0xd6a1, .a=0x56, .x=0x04, .y=0xf1, .sp=0x01, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0xd6fe, .value=0xb0}, {.addr=0xd6ff, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0xd6fe, .value=0xb0, .type=IO_READ},
        {.addr=0xd6ff, .value=0xa1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00CF) {
    const struct CPU_State initial_cpu = {.pc=0x43e5, .a=0x1d, .x=0x45, .y=0x0a, .sp=0x04, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x43e5, .value=0xb0}, {.addr=0x43e6, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0x43b8, .a=0x1d, .x=0x45, .y=0x0a, .sp=0x04, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x43e5, .value=0xb0}, {.addr=0x43e6, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0x43e5, .value=0xb0, .type=IO_READ},
        {.addr=0x43e6, .value=0xd1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00D0) {
    const struct CPU_State initial_cpu = {.pc=0x1b75, .a=0x78, .x=0xfe, .y=0xdd, .sp=0xf5, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x1b75, .value=0xb0}, {.addr=0x1b76, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0x1b88, .a=0x78, .x=0xfe, .y=0xdd, .sp=0xf5, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x1b75, .value=0xb0}, {.addr=0x1b76, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0x1b75, .value=0xb0, .type=IO_READ},
        {.addr=0x1b76, .value=0x11, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00D1) {
    const struct CPU_State initial_cpu = {.pc=0xeaa4, .a=0x66, .x=0xec, .y=0x10, .sp=0x93, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xeaa4, .value=0xb0}, {.addr=0xeaa5, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0xeaa6, .a=0x66, .x=0xec, .y=0x10, .sp=0x93, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xeaa4, .value=0xb0}, {.addr=0xeaa5, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0xeaa4, .value=0xb0, .type=IO_READ},
        {.addr=0xeaa5, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00D2) {
    const struct CPU_State initial_cpu = {.pc=0xca7c, .a=0xd1, .x=0x03, .y=0xc8, .sp=0xe1, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0xca7c, .value=0xb0}, {.addr=0xca7d, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0xca48, .a=0xd1, .x=0x03, .y=0xc8, .sp=0xe1, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xca7c, .value=0xb0}, {.addr=0xca7d, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0xca7c, .value=0xb0, .type=IO_READ},
        {.addr=0xca7d, .value=0xca, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00D3) {
    const struct CPU_State initial_cpu = {.pc=0x2570, .a=0x16, .x=0x89, .y=0x04, .sp=0x26, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x2570, .value=0xb0}, {.addr=0x2571, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0x2572, .a=0x16, .x=0x89, .y=0x04, .sp=0x26, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x2570, .value=0xb0}, {.addr=0x2571, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0x2570, .value=0xb0, .type=IO_READ},
        {.addr=0x2571, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00D4) {
    const struct CPU_State initial_cpu = {.pc=0xa8fc, .a=0x5b, .x=0xf2, .y=0x9f, .sp=0xb1, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xa8fc, .value=0xb0}, {.addr=0xa8fd, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0xa8fe, .a=0x5b, .x=0xf2, .y=0x9f, .sp=0xb1, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xa8fc, .value=0xb0}, {.addr=0xa8fd, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0xa8fc, .value=0xb0, .type=IO_READ},
        {.addr=0xa8fd, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00D5) {
    const struct CPU_State initial_cpu = {.pc=0x029c, .a=0xcb, .x=0xd8, .y=0x52, .sp=0xdb, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x029c, .value=0xb0}, {.addr=0x029d, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x029e, .a=0xcb, .x=0xd8, .y=0x52, .sp=0xdb, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x029c, .value=0xb0}, {.addr=0x029d, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x029c, .value=0xb0, .type=IO_READ},
        {.addr=0x029d, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00D6) {
    const struct CPU_State initial_cpu = {.pc=0x7579, .a=0xbe, .x=0x86, .y=0x15, .sp=0xe5, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x7579, .value=0xb0}, {.addr=0x757a, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0x757b, .a=0xbe, .x=0x86, .y=0x15, .sp=0xe5, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x7579, .value=0xb0}, {.addr=0x757a, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0x7579, .value=0xb0, .type=IO_READ},
        {.addr=0x757a, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00D7) {
    const struct CPU_State initial_cpu = {.pc=0xe0b8, .a=0x7d, .x=0x5e, .y=0x4f, .sp=0xc5, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xe0b8, .value=0xb0}, {.addr=0xe0b9, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0xe0eb, .a=0x7d, .x=0x5e, .y=0x4f, .sp=0xc5, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xe0b8, .value=0xb0}, {.addr=0xe0b9, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0xe0b8, .value=0xb0, .type=IO_READ},
        {.addr=0xe0b9, .value=0x31, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00D8) {
    const struct CPU_State initial_cpu = {.pc=0xc3f6, .a=0x5a, .x=0xa6, .y=0x3d, .sp=0x0b, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xc3f6, .value=0xb0}, {.addr=0xc3f7, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0xc3f8, .a=0x5a, .x=0xa6, .y=0x3d, .sp=0x0b, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xc3f6, .value=0xb0}, {.addr=0xc3f7, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0xc3f6, .value=0xb0, .type=IO_READ},
        {.addr=0xc3f7, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00D9) {
    const struct CPU_State initial_cpu = {.pc=0xe2d8, .a=0x72, .x=0xf1, .y=0xb2, .sp=0xb6, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xe2d8, .value=0xb0}, {.addr=0xe2d9, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0xe28b, .a=0x72, .x=0xf1, .y=0xb2, .sp=0xb6, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xe2d8, .value=0xb0}, {.addr=0xe2d9, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0xe2d8, .value=0xb0, .type=IO_READ},
        {.addr=0xe2d9, .value=0xb1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00DA) {
    const struct CPU_State initial_cpu = {.pc=0xd011, .a=0xab, .x=0x4a, .y=0x05, .sp=0x75, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xd011, .value=0xb0}, {.addr=0xd012, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0xcfad, .a=0xab, .x=0x4a, .y=0x05, .sp=0x75, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xd011, .value=0xb0}, {.addr=0xd012, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0xd011, .value=0xb0, .type=IO_READ},
        {.addr=0xd012, .value=0x9a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00DB) {
    const struct CPU_State initial_cpu = {.pc=0x96af, .a=0x3b, .x=0xe5, .y=0x6a, .sp=0x7a, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x96af, .value=0xb0}, {.addr=0x96b0, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x96b1, .a=0x3b, .x=0xe5, .y=0x6a, .sp=0x7a, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x96af, .value=0xb0}, {.addr=0x96b0, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x96af, .value=0xb0, .type=IO_READ},
        {.addr=0x96b0, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00DC) {
    const struct CPU_State initial_cpu = {.pc=0x73bf, .a=0xbc, .x=0x33, .y=0x0c, .sp=0x46, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x73bf, .value=0xb0}, {.addr=0x73c0, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x73c1, .a=0xbc, .x=0x33, .y=0x0c, .sp=0x46, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x73bf, .value=0xb0}, {.addr=0x73c0, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x73bf, .value=0xb0, .type=IO_READ},
        {.addr=0x73c0, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00DD) {
    const struct CPU_State initial_cpu = {.pc=0x9913, .a=0xa7, .x=0x76, .y=0x94, .sp=0x6e, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x9913, .value=0xb0}, {.addr=0x9914, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0x9921, .a=0xa7, .x=0x76, .y=0x94, .sp=0x6e, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x9913, .value=0xb0}, {.addr=0x9914, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0x9913, .value=0xb0, .type=IO_READ},
        {.addr=0x9914, .value=0x0c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00DE) {
    const struct CPU_State initial_cpu = {.pc=0x6a6b, .a=0x45, .x=0xab, .y=0xb9, .sp=0x3c, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x6a6b, .value=0xb0}, {.addr=0x6a6c, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x6a6d, .a=0x45, .x=0xab, .y=0xb9, .sp=0x3c, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x6a6b, .value=0xb0}, {.addr=0x6a6c, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x6a6b, .value=0xb0, .type=IO_READ},
        {.addr=0x6a6c, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00DF) {
    const struct CPU_State initial_cpu = {.pc=0x65dc, .a=0x9e, .x=0x01, .y=0xab, .sp=0xad, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x65dc, .value=0xb0}, {.addr=0x65dd, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0x665d, .a=0x9e, .x=0x01, .y=0xab, .sp=0xad, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x65dc, .value=0xb0}, {.addr=0x65dd, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0x65dc, .value=0xb0, .type=IO_READ},
        {.addr=0x65dd, .value=0x7f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00E0) {
    const struct CPU_State initial_cpu = {.pc=0x06c2, .a=0x08, .x=0x0c, .y=0xec, .sp=0x68, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x06c2, .value=0xb0}, {.addr=0x06c3, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x0721, .a=0x08, .x=0x0c, .y=0xec, .sp=0x68, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x06c2, .value=0xb0}, {.addr=0x06c3, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x06c2, .value=0xb0, .type=IO_READ},
        {.addr=0x06c3, .value=0x5d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00E1) {
    const struct CPU_State initial_cpu = {.pc=0x6e40, .a=0xcc, .x=0x42, .y=0x6f, .sp=0x75, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x6e40, .value=0xb0}, {.addr=0x6e41, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0x6e39, .a=0xcc, .x=0x42, .y=0x6f, .sp=0x75, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x6e40, .value=0xb0}, {.addr=0x6e41, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0x6e40, .value=0xb0, .type=IO_READ},
        {.addr=0x6e41, .value=0xf7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x54c9, .a=0x94, .x=0xaf, .y=0x78, .sp=0xd5, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x54c9, .value=0xb0}, {.addr=0x54ca, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0x54cb, .a=0x94, .x=0xaf, .y=0x78, .sp=0xd5, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x54c9, .value=0xb0}, {.addr=0x54ca, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0x54c9, .value=0xb0, .type=IO_READ},
        {.addr=0x54ca, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00E3) {
    const struct CPU_State initial_cpu = {.pc=0xa951, .a=0xf6, .x=0xa4, .y=0x1f, .sp=0x4d, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xa951, .value=0xb0}, {.addr=0xa952, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0xa985, .a=0xf6, .x=0xa4, .y=0x1f, .sp=0x4d, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0xa951, .value=0xb0}, {.addr=0xa952, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0xa951, .value=0xb0, .type=IO_READ},
        {.addr=0xa952, .value=0x32, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00E4) {
    const struct CPU_State initial_cpu = {.pc=0x5f23, .a=0x28, .x=0x6e, .y=0x66, .sp=0x12, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x5f23, .value=0xb0}, {.addr=0x5f24, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x5f54, .a=0x28, .x=0x6e, .y=0x66, .sp=0x12, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x5f23, .value=0xb0}, {.addr=0x5f24, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x5f23, .value=0xb0, .type=IO_READ},
        {.addr=0x5f24, .value=0x2f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00E5) {
    const struct CPU_State initial_cpu = {.pc=0x02f6, .a=0x01, .x=0x26, .y=0xa9, .sp=0x06, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x02f6, .value=0xb0}, {.addr=0x02f7, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0x0324, .a=0x01, .x=0x26, .y=0xa9, .sp=0x06, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x02f6, .value=0xb0}, {.addr=0x02f7, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0x02f6, .value=0xb0, .type=IO_READ},
        {.addr=0x02f7, .value=0x2c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00E6) {
    const struct CPU_State initial_cpu = {.pc=0x7a65, .a=0xd1, .x=0x04, .y=0x48, .sp=0x2b, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x7a65, .value=0xb0}, {.addr=0x7a66, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0x7aa6, .a=0xd1, .x=0x04, .y=0x48, .sp=0x2b, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x7a65, .value=0xb0}, {.addr=0x7a66, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0x7a65, .value=0xb0, .type=IO_READ},
        {.addr=0x7a66, .value=0x3f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00E7) {
    const struct CPU_State initial_cpu = {.pc=0x53c1, .a=0x26, .x=0xf3, .y=0xf8, .sp=0xb4, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x53c1, .value=0xb0}, {.addr=0x53c2, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0x53c3, .a=0x26, .x=0xf3, .y=0xf8, .sp=0xb4, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x53c1, .value=0xb0}, {.addr=0x53c2, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0x53c1, .value=0xb0, .type=IO_READ},
        {.addr=0x53c2, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00E8) {
    const struct CPU_State initial_cpu = {.pc=0x8369, .a=0x69, .x=0x5b, .y=0xc6, .sp=0x59, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x8369, .value=0xb0}, {.addr=0x836a, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x836b, .a=0x69, .x=0x5b, .y=0xc6, .sp=0x59, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x8369, .value=0xb0}, {.addr=0x836a, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x8369, .value=0xb0, .type=IO_READ},
        {.addr=0x836a, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00E9) {
    const struct CPU_State initial_cpu = {.pc=0x0376, .a=0xfd, .x=0x8b, .y=0xd6, .sp=0xef, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x0376, .value=0xb0}, {.addr=0x0377, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x0327, .a=0xfd, .x=0x8b, .y=0xd6, .sp=0xef, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x0376, .value=0xb0}, {.addr=0x0377, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x0376, .value=0xb0, .type=IO_READ},
        {.addr=0x0377, .value=0xaf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00EA) {
    const struct CPU_State initial_cpu = {.pc=0x955c, .a=0x17, .x=0xfb, .y=0xda, .sp=0x67, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x955c, .value=0xb0}, {.addr=0x955d, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x9553, .a=0x17, .x=0xfb, .y=0xda, .sp=0x67, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x955c, .value=0xb0}, {.addr=0x955d, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x955c, .value=0xb0, .type=IO_READ},
        {.addr=0x955d, .value=0xf5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00EB) {
    const struct CPU_State initial_cpu = {.pc=0x56d5, .a=0x00, .x=0x67, .y=0x7b, .sp=0xb6, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x56d5, .value=0xb0}, {.addr=0x56d6, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0x56d7, .a=0x00, .x=0x67, .y=0x7b, .sp=0xb6, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x56d5, .value=0xb0}, {.addr=0x56d6, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0x56d5, .value=0xb0, .type=IO_READ},
        {.addr=0x56d6, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00EC) {
    const struct CPU_State initial_cpu = {.pc=0x3ffb, .a=0x40, .x=0x6c, .y=0x40, .sp=0x9e, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x3ffb, .value=0xb0}, {.addr=0x3ffc, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0x3ffd, .a=0x40, .x=0x6c, .y=0x40, .sp=0x9e, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x3ffb, .value=0xb0}, {.addr=0x3ffc, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0x3ffb, .value=0xb0, .type=IO_READ},
        {.addr=0x3ffc, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00ED) {
    const struct CPU_State initial_cpu = {.pc=0x35d6, .a=0x21, .x=0x0c, .y=0xa6, .sp=0x72, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x35d6, .value=0xb0}, {.addr=0x35d7, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0x35f2, .a=0x21, .x=0x0c, .y=0xa6, .sp=0x72, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x35d6, .value=0xb0}, {.addr=0x35d7, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0x35d6, .value=0xb0, .type=IO_READ},
        {.addr=0x35d7, .value=0x1a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00EE) {
    const struct CPU_State initial_cpu = {.pc=0x1cbf, .a=0x10, .x=0x15, .y=0xd4, .sp=0x72, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x1cbf, .value=0xb0}, {.addr=0x1cc0, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x1cc1, .a=0x10, .x=0x15, .y=0xd4, .sp=0x72, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x1cbf, .value=0xb0}, {.addr=0x1cc0, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x1cbf, .value=0xb0, .type=IO_READ},
        {.addr=0x1cc0, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00EF) {
    const struct CPU_State initial_cpu = {.pc=0x540f, .a=0xab, .x=0x73, .y=0xe1, .sp=0x5b, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x540f, .value=0xb0}, {.addr=0x5410, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0x5411, .a=0xab, .x=0x73, .y=0xe1, .sp=0x5b, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x540f, .value=0xb0}, {.addr=0x5410, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0x540f, .value=0xb0, .type=IO_READ},
        {.addr=0x5410, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00F0) {
    const struct CPU_State initial_cpu = {.pc=0x3e6c, .a=0xe5, .x=0xb9, .y=0xfb, .sp=0x28, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x3e6c, .value=0xb0}, {.addr=0x3e6d, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x3ee6, .a=0xe5, .x=0xb9, .y=0xfb, .sp=0x28, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x3e6c, .value=0xb0}, {.addr=0x3e6d, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x3e6c, .value=0xb0, .type=IO_READ},
        {.addr=0x3e6d, .value=0x78, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00F1) {
    const struct CPU_State initial_cpu = {.pc=0x2290, .a=0x71, .x=0x69, .y=0xc3, .sp=0x78, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x2290, .value=0xb0}, {.addr=0x2291, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0x2292, .a=0x71, .x=0x69, .y=0xc3, .sp=0x78, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x2290, .value=0xb0}, {.addr=0x2291, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0x2290, .value=0xb0, .type=IO_READ},
        {.addr=0x2291, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00F2) {
    const struct CPU_State initial_cpu = {.pc=0xe601, .a=0x79, .x=0xf5, .y=0x39, .sp=0xe1, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xe601, .value=0xb0}, {.addr=0xe602, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0xe5a6, .a=0x79, .x=0xf5, .y=0x39, .sp=0xe1, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0xe601, .value=0xb0}, {.addr=0xe602, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0xe601, .value=0xb0, .type=IO_READ},
        {.addr=0xe602, .value=0xa3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00F3) {
    const struct CPU_State initial_cpu = {.pc=0xac40, .a=0x20, .x=0x45, .y=0x58, .sp=0xa3, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xac40, .value=0xb0}, {.addr=0xac41, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0xac42, .a=0x20, .x=0x45, .y=0x58, .sp=0xa3, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0xac40, .value=0xb0}, {.addr=0xac41, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0xac40, .value=0xb0, .type=IO_READ},
        {.addr=0xac41, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00F4) {
    const struct CPU_State initial_cpu = {.pc=0x5845, .a=0x04, .x=0x9d, .y=0xe7, .sp=0xdc, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x5845, .value=0xb0}, {.addr=0x5846, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0x5825, .a=0x04, .x=0x9d, .y=0xe7, .sp=0xdc, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x5845, .value=0xb0}, {.addr=0x5846, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0x5845, .value=0xb0, .type=IO_READ},
        {.addr=0x5846, .value=0xde, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00F5) {
    const struct CPU_State initial_cpu = {.pc=0xd74b, .a=0xb9, .x=0xa1, .y=0xc2, .sp=0xc6, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xd74b, .value=0xb0}, {.addr=0xd74c, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0xd74d, .a=0xb9, .x=0xa1, .y=0xc2, .sp=0xc6, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0xd74b, .value=0xb0}, {.addr=0xd74c, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0xd74b, .value=0xb0, .type=IO_READ},
        {.addr=0xd74c, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00F6) {
    const struct CPU_State initial_cpu = {.pc=0x6d9d, .a=0x53, .x=0x4a, .y=0x5a, .sp=0x6a, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x6d9d, .value=0xb0}, {.addr=0x6d9e, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0x6e19, .a=0x53, .x=0x4a, .y=0x5a, .sp=0x6a, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x6d9d, .value=0xb0}, {.addr=0x6d9e, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0x6d9d, .value=0xb0, .type=IO_READ},
        {.addr=0x6d9e, .value=0x7a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00F7) {
    const struct CPU_State initial_cpu = {.pc=0x672b, .a=0xae, .x=0x11, .y=0x1a, .sp=0x24, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x672b, .value=0xb0}, {.addr=0x672c, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0x672d, .a=0xae, .x=0x11, .y=0x1a, .sp=0x24, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x672b, .value=0xb0}, {.addr=0x672c, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0x672b, .value=0xb0, .type=IO_READ},
        {.addr=0x672c, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00F8) {
    const struct CPU_State initial_cpu = {.pc=0xe7ee, .a=0xd9, .x=0x9c, .y=0x09, .sp=0xbd, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0xe7ee, .value=0xb0}, {.addr=0xe7ef, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xe7f0, .a=0xd9, .x=0x9c, .y=0x09, .sp=0xbd, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xe7ee, .value=0xb0}, {.addr=0xe7ef, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xe7ee, .value=0xb0, .type=IO_READ},
        {.addr=0xe7ef, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00F9) {
    const struct CPU_State initial_cpu = {.pc=0xe952, .a=0x62, .x=0xda, .y=0xd1, .sp=0xaf, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xe952, .value=0xb0}, {.addr=0xe953, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xe8e2, .a=0x62, .x=0xda, .y=0xd1, .sp=0xaf, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xe952, .value=0xb0}, {.addr=0xe953, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xe952, .value=0xb0, .type=IO_READ},
        {.addr=0xe953, .value=0x8e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00FA) {
    const struct CPU_State initial_cpu = {.pc=0x6b23, .a=0xfc, .x=0xbf, .y=0xb1, .sp=0x55, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x6b23, .value=0xb0}, {.addr=0x6b24, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x6b25, .a=0xfc, .x=0xbf, .y=0xb1, .sp=0x55, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x6b23, .value=0xb0}, {.addr=0x6b24, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x6b23, .value=0xb0, .type=IO_READ},
        {.addr=0x6b24, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00FB) {
    const struct CPU_State initial_cpu = {.pc=0x8a1b, .a=0xf1, .x=0x76, .y=0x43, .sp=0x89, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x8a1b, .value=0xb0}, {.addr=0x8a1c, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0x8a8c, .a=0xf1, .x=0x76, .y=0x43, .sp=0x89, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x8a1b, .value=0xb0}, {.addr=0x8a1c, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0x8a1b, .value=0xb0, .type=IO_READ},
        {.addr=0x8a1c, .value=0x6f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00FC) {
    const struct CPU_State initial_cpu = {.pc=0x0247, .a=0xd0, .x=0x44, .y=0x98, .sp=0x35, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x0247, .value=0xb0}, {.addr=0x0248, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x02a6, .a=0xd0, .x=0x44, .y=0x98, .sp=0x35, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x0247, .value=0xb0}, {.addr=0x0248, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x0247, .value=0xb0, .type=IO_READ},
        {.addr=0x0248, .value=0x5d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00FD) {
    const struct CPU_State initial_cpu = {.pc=0xd901, .a=0x0e, .x=0x63, .y=0x94, .sp=0x9e, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xd901, .value=0xb0}, {.addr=0xd902, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0xd903, .a=0x0e, .x=0x63, .y=0x94, .sp=0x9e, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xd901, .value=0xb0}, {.addr=0xd902, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0xd901, .value=0xb0, .type=IO_READ},
        {.addr=0xd902, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00FE) {
    const struct CPU_State initial_cpu = {.pc=0x572f, .a=0x2a, .x=0x1a, .y=0xe7, .sp=0xca, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x572f, .value=0xb0}, {.addr=0x5730, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0x56cf, .a=0x2a, .x=0x1a, .y=0xe7, .sp=0xca, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x572f, .value=0xb0}, {.addr=0x5730, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0x572f, .value=0xb0, .type=IO_READ},
        {.addr=0x5730, .value=0x9e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_00FF) {
    const struct CPU_State initial_cpu = {.pc=0x33fe, .a=0xf7, .x=0x57, .y=0x13, .sp=0x86, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x33fe, .value=0xb0}, {.addr=0x33ff, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0x3432, .a=0xf7, .x=0x57, .y=0x13, .sp=0x86, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x33fe, .value=0xb0}, {.addr=0x33ff, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0x33fe, .value=0xb0, .type=IO_READ},
        {.addr=0x33ff, .value=0x32, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0100) {
    const struct CPU_State initial_cpu = {.pc=0x51b9, .a=0xbb, .x=0x0e, .y=0xa9, .sp=0x32, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x51b9, .value=0xb0}, {.addr=0x51ba, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0x51bb, .a=0xbb, .x=0x0e, .y=0xa9, .sp=0x32, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x51b9, .value=0xb0}, {.addr=0x51ba, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0x51b9, .value=0xb0, .type=IO_READ},
        {.addr=0x51ba, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0101) {
    const struct CPU_State initial_cpu = {.pc=0xc45b, .a=0xa3, .x=0x58, .y=0xf6, .sp=0x7d, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xc45b, .value=0xb0}, {.addr=0xc45c, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0xc45d, .a=0xa3, .x=0x58, .y=0xf6, .sp=0x7d, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xc45b, .value=0xb0}, {.addr=0xc45c, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0xc45b, .value=0xb0, .type=IO_READ},
        {.addr=0xc45c, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0102) {
    const struct CPU_State initial_cpu = {.pc=0x5d8c, .a=0xed, .x=0x67, .y=0x7f, .sp=0x18, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x5d8c, .value=0xb0}, {.addr=0x5d8d, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0x5da8, .a=0xed, .x=0x67, .y=0x7f, .sp=0x18, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x5d8c, .value=0xb0}, {.addr=0x5d8d, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0x5d8c, .value=0xb0, .type=IO_READ},
        {.addr=0x5d8d, .value=0x1a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0103) {
    const struct CPU_State initial_cpu = {.pc=0x6bd5, .a=0xb4, .x=0x7b, .y=0x27, .sp=0x2f, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x6bd5, .value=0xb0}, {.addr=0x6bd6, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0x6bd7, .a=0xb4, .x=0x7b, .y=0x27, .sp=0x2f, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x6bd5, .value=0xb0}, {.addr=0x6bd6, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0x6bd5, .value=0xb0, .type=IO_READ},
        {.addr=0x6bd6, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0104) {
    const struct CPU_State initial_cpu = {.pc=0x38f2, .a=0xb5, .x=0xdd, .y=0x93, .sp=0xf4, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x38f2, .value=0xb0}, {.addr=0x38f3, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0x38f4, .a=0xb5, .x=0xdd, .y=0x93, .sp=0xf4, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x38f2, .value=0xb0}, {.addr=0x38f3, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0x38f2, .value=0xb0, .type=IO_READ},
        {.addr=0x38f3, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0105) {
    const struct CPU_State initial_cpu = {.pc=0x047e, .a=0x0d, .x=0xcf, .y=0x5e, .sp=0x5f, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x047e, .value=0xb0}, {.addr=0x047f, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0x0480, .a=0x0d, .x=0xcf, .y=0x5e, .sp=0x5f, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x047e, .value=0xb0}, {.addr=0x047f, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0x047e, .value=0xb0, .type=IO_READ},
        {.addr=0x047f, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0106) {
    const struct CPU_State initial_cpu = {.pc=0x6a0b, .a=0xfd, .x=0xe2, .y=0xf4, .sp=0x81, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x6a0b, .value=0xb0}, {.addr=0x6a0c, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x6a0d, .a=0xfd, .x=0xe2, .y=0xf4, .sp=0x81, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x6a0b, .value=0xb0}, {.addr=0x6a0c, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x6a0b, .value=0xb0, .type=IO_READ},
        {.addr=0x6a0c, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0107) {
    const struct CPU_State initial_cpu = {.pc=0x4e74, .a=0x6b, .x=0xf7, .y=0xfc, .sp=0x23, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x4e74, .value=0xb0}, {.addr=0x4e75, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x4e61, .a=0x6b, .x=0xf7, .y=0xfc, .sp=0x23, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x4e74, .value=0xb0}, {.addr=0x4e75, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x4e74, .value=0xb0, .type=IO_READ},
        {.addr=0x4e75, .value=0xeb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0108) {
    const struct CPU_State initial_cpu = {.pc=0xa07e, .a=0x23, .x=0xf2, .y=0xf0, .sp=0x19, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xa07e, .value=0xb0}, {.addr=0xa07f, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xa080, .a=0x23, .x=0xf2, .y=0xf0, .sp=0x19, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xa07e, .value=0xb0}, {.addr=0xa07f, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xa07e, .value=0xb0, .type=IO_READ},
        {.addr=0xa07f, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0109) {
    const struct CPU_State initial_cpu = {.pc=0xff89, .a=0x54, .x=0x81, .y=0x13, .sp=0x28, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xff89, .value=0xb0}, {.addr=0xff8a, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0xff2c, .a=0x54, .x=0x81, .y=0x13, .sp=0x28, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xff89, .value=0xb0}, {.addr=0xff8a, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0xff89, .value=0xb0, .type=IO_READ},
        {.addr=0xff8a, .value=0xa1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_010A) {
    const struct CPU_State initial_cpu = {.pc=0xe0cf, .a=0x85, .x=0x13, .y=0xfb, .sp=0x13, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0xe0cf, .value=0xb0}, {.addr=0xe0d0, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0xe0bd, .a=0x85, .x=0x13, .y=0xfb, .sp=0x13, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0xe0cf, .value=0xb0}, {.addr=0xe0d0, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0xe0cf, .value=0xb0, .type=IO_READ},
        {.addr=0xe0d0, .value=0xec, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_010B) {
    const struct CPU_State initial_cpu = {.pc=0x39c0, .a=0xfc, .x=0x41, .y=0xe7, .sp=0x53, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x39c0, .value=0xb0}, {.addr=0x39c1, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x39c2, .a=0xfc, .x=0x41, .y=0xe7, .sp=0x53, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x39c0, .value=0xb0}, {.addr=0x39c1, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x39c0, .value=0xb0, .type=IO_READ},
        {.addr=0x39c1, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_010C) {
    const struct CPU_State initial_cpu = {.pc=0x27da, .a=0xad, .x=0x39, .y=0xb7, .sp=0xa3, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x27da, .value=0xb0}, {.addr=0x27db, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0x283f, .a=0xad, .x=0x39, .y=0xb7, .sp=0xa3, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x27da, .value=0xb0}, {.addr=0x27db, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0x27da, .value=0xb0, .type=IO_READ},
        {.addr=0x27db, .value=0x63, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_010D) {
    const struct CPU_State initial_cpu = {.pc=0x0391, .a=0xa8, .x=0xac, .y=0xad, .sp=0x86, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x0391, .value=0xb0}, {.addr=0x0392, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x038c, .a=0xa8, .x=0xac, .y=0xad, .sp=0x86, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x0391, .value=0xb0}, {.addr=0x0392, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x0391, .value=0xb0, .type=IO_READ},
        {.addr=0x0392, .value=0xf9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_010E) {
    const struct CPU_State initial_cpu = {.pc=0xb11d, .a=0x9f, .x=0x46, .y=0xf5, .sp=0x8e, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0xb11d, .value=0xb0}, {.addr=0xb11e, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0xb11f, .a=0x9f, .x=0x46, .y=0xf5, .sp=0x8e, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xb11d, .value=0xb0}, {.addr=0xb11e, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0xb11d, .value=0xb0, .type=IO_READ},
        {.addr=0xb11e, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_010F) {
    const struct CPU_State initial_cpu = {.pc=0x5ca4, .a=0xe7, .x=0xb3, .y=0xb5, .sp=0x51, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x5ca4, .value=0xb0}, {.addr=0x5ca5, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x5cf2, .a=0xe7, .x=0xb3, .y=0xb5, .sp=0x51, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x5ca4, .value=0xb0}, {.addr=0x5ca5, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x5ca4, .value=0xb0, .type=IO_READ},
        {.addr=0x5ca5, .value=0x4c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0110) {
    const struct CPU_State initial_cpu = {.pc=0xd46b, .a=0x16, .x=0xdf, .y=0x83, .sp=0xac, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xd46b, .value=0xb0}, {.addr=0xd46c, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0xd47b, .a=0x16, .x=0xdf, .y=0x83, .sp=0xac, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0xd46b, .value=0xb0}, {.addr=0xd46c, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0xd46b, .value=0xb0, .type=IO_READ},
        {.addr=0xd46c, .value=0x0e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0111) {
    const struct CPU_State initial_cpu = {.pc=0x52e6, .a=0x56, .x=0xf2, .y=0x33, .sp=0x3b, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x52e6, .value=0xb0}, {.addr=0x52e7, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0x5298, .a=0x56, .x=0xf2, .y=0x33, .sp=0x3b, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x52e6, .value=0xb0}, {.addr=0x52e7, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0x52e6, .value=0xb0, .type=IO_READ},
        {.addr=0x52e7, .value=0xb0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0112) {
    const struct CPU_State initial_cpu = {.pc=0x65c6, .a=0x3f, .x=0x34, .y=0x51, .sp=0x25, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x65c6, .value=0xb0}, {.addr=0x65c7, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x65b3, .a=0x3f, .x=0x34, .y=0x51, .sp=0x25, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x65c6, .value=0xb0}, {.addr=0x65c7, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x65c6, .value=0xb0, .type=IO_READ},
        {.addr=0x65c7, .value=0xeb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0113) {
    const struct CPU_State initial_cpu = {.pc=0x8e3c, .a=0x56, .x=0x97, .y=0xd6, .sp=0x59, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x8e3c, .value=0xb0}, {.addr=0x8e3d, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0x8e3e, .a=0x56, .x=0x97, .y=0xd6, .sp=0x59, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x8e3c, .value=0xb0}, {.addr=0x8e3d, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0x8e3c, .value=0xb0, .type=IO_READ},
        {.addr=0x8e3d, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0114) {
    const struct CPU_State initial_cpu = {.pc=0xaf68, .a=0x1d, .x=0x66, .y=0x89, .sp=0x15, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xaf68, .value=0xb0}, {.addr=0xaf69, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0xaf4b, .a=0x1d, .x=0x66, .y=0x89, .sp=0x15, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0xaf68, .value=0xb0}, {.addr=0xaf69, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0xaf68, .value=0xb0, .type=IO_READ},
        {.addr=0xaf69, .value=0xe1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0115) {
    const struct CPU_State initial_cpu = {.pc=0x9292, .a=0x6e, .x=0x63, .y=0x92, .sp=0x92, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x9292, .value=0xb0}, {.addr=0x9293, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x9294, .a=0x6e, .x=0x63, .y=0x92, .sp=0x92, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x9292, .value=0xb0}, {.addr=0x9293, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x9292, .value=0xb0, .type=IO_READ},
        {.addr=0x9293, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0116) {
    const struct CPU_State initial_cpu = {.pc=0x80e5, .a=0x22, .x=0xf2, .y=0x11, .sp=0x6a, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x80e5, .value=0xb0}, {.addr=0x80e6, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x80e7, .a=0x22, .x=0xf2, .y=0x11, .sp=0x6a, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x80e5, .value=0xb0}, {.addr=0x80e6, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x80e5, .value=0xb0, .type=IO_READ},
        {.addr=0x80e6, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0117) {
    const struct CPU_State initial_cpu = {.pc=0x6e40, .a=0xf7, .x=0x08, .y=0x5a, .sp=0x9f, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x6e40, .value=0xb0}, {.addr=0x6e41, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0x6e42, .a=0xf7, .x=0x08, .y=0x5a, .sp=0x9f, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x6e40, .value=0xb0}, {.addr=0x6e41, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0x6e40, .value=0xb0, .type=IO_READ},
        {.addr=0x6e41, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0118) {
    const struct CPU_State initial_cpu = {.pc=0x111e, .a=0x12, .x=0x8c, .y=0xde, .sp=0xb3, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x111e, .value=0xb0}, {.addr=0x111f, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0x1120, .a=0x12, .x=0x8c, .y=0xde, .sp=0xb3, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x111e, .value=0xb0}, {.addr=0x111f, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0x111e, .value=0xb0, .type=IO_READ},
        {.addr=0x111f, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0119) {
    const struct CPU_State initial_cpu = {.pc=0x74a8, .a=0x6e, .x=0xe7, .y=0xf1, .sp=0x7c, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x74a8, .value=0xb0}, {.addr=0x74a9, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0x74aa, .a=0x6e, .x=0xe7, .y=0xf1, .sp=0x7c, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x74a8, .value=0xb0}, {.addr=0x74a9, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0x74a8, .value=0xb0, .type=IO_READ},
        {.addr=0x74a9, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_011A) {
    const struct CPU_State initial_cpu = {.pc=0x9d39, .a=0xb7, .x=0x68, .y=0xbb, .sp=0x61, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x9d39, .value=0xb0}, {.addr=0x9d3a, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x9d86, .a=0xb7, .x=0x68, .y=0xbb, .sp=0x61, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x9d39, .value=0xb0}, {.addr=0x9d3a, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x9d39, .value=0xb0, .type=IO_READ},
        {.addr=0x9d3a, .value=0x4b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_011B) {
    const struct CPU_State initial_cpu = {.pc=0xd5aa, .a=0xe8, .x=0x42, .y=0x31, .sp=0x28, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xd5aa, .value=0xb0}, {.addr=0xd5ab, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0xd5ac, .a=0xe8, .x=0x42, .y=0x31, .sp=0x28, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xd5aa, .value=0xb0}, {.addr=0xd5ab, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0xd5aa, .value=0xb0, .type=IO_READ},
        {.addr=0xd5ab, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_011C) {
    const struct CPU_State initial_cpu = {.pc=0x91aa, .a=0xa1, .x=0x37, .y=0xdd, .sp=0x70, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x91aa, .value=0xb0}, {.addr=0x91ab, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0x9218, .a=0xa1, .x=0x37, .y=0xdd, .sp=0x70, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x91aa, .value=0xb0}, {.addr=0x91ab, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0x91aa, .value=0xb0, .type=IO_READ},
        {.addr=0x91ab, .value=0x6c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_011D) {
    const struct CPU_State initial_cpu = {.pc=0x5a34, .a=0xda, .x=0x52, .y=0x34, .sp=0x85, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x5a34, .value=0xb0}, {.addr=0x5a35, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x5a36, .a=0xda, .x=0x52, .y=0x34, .sp=0x85, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x5a34, .value=0xb0}, {.addr=0x5a35, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x5a34, .value=0xb0, .type=IO_READ},
        {.addr=0x5a35, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_011E) {
    const struct CPU_State initial_cpu = {.pc=0x52a8, .a=0xf2, .x=0xf5, .y=0x07, .sp=0x35, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x52a8, .value=0xb0}, {.addr=0x52a9, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x52aa, .a=0xf2, .x=0xf5, .y=0x07, .sp=0x35, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x52a8, .value=0xb0}, {.addr=0x52a9, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x52a8, .value=0xb0, .type=IO_READ},
        {.addr=0x52a9, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_011F) {
    const struct CPU_State initial_cpu = {.pc=0xdf6b, .a=0x13, .x=0x5a, .y=0x8b, .sp=0xd7, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xdf6b, .value=0xb0}, {.addr=0xdf6c, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0xdf6d, .a=0x13, .x=0x5a, .y=0x8b, .sp=0xd7, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xdf6b, .value=0xb0}, {.addr=0xdf6c, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0xdf6b, .value=0xb0, .type=IO_READ},
        {.addr=0xdf6c, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0120) {
    const struct CPU_State initial_cpu = {.pc=0x5a65, .a=0xa3, .x=0x95, .y=0x06, .sp=0x37, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x5a65, .value=0xb0}, {.addr=0x5a66, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x5a67, .a=0xa3, .x=0x95, .y=0x06, .sp=0x37, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x5a65, .value=0xb0}, {.addr=0x5a66, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x5a65, .value=0xb0, .type=IO_READ},
        {.addr=0x5a66, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0121) {
    const struct CPU_State initial_cpu = {.pc=0xfc12, .a=0x1e, .x=0xe2, .y=0xc8, .sp=0xec, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xfc12, .value=0xb0}, {.addr=0xfc13, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0xfc14, .a=0x1e, .x=0xe2, .y=0xc8, .sp=0xec, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xfc12, .value=0xb0}, {.addr=0xfc13, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0xfc12, .value=0xb0, .type=IO_READ},
        {.addr=0xfc13, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0122) {
    const struct CPU_State initial_cpu = {.pc=0x5039, .a=0xeb, .x=0x73, .y=0x63, .sp=0x22, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x5039, .value=0xb0}, {.addr=0x503a, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x503b, .a=0xeb, .x=0x73, .y=0x63, .sp=0x22, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x5039, .value=0xb0}, {.addr=0x503a, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x5039, .value=0xb0, .type=IO_READ},
        {.addr=0x503a, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0123) {
    const struct CPU_State initial_cpu = {.pc=0x6a83, .a=0xd0, .x=0x59, .y=0x90, .sp=0x13, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x6a83, .value=0xb0}, {.addr=0x6a84, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0x6a6d, .a=0xd0, .x=0x59, .y=0x90, .sp=0x13, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x6a83, .value=0xb0}, {.addr=0x6a84, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0x6a83, .value=0xb0, .type=IO_READ},
        {.addr=0x6a84, .value=0xe8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0124) {
    const struct CPU_State initial_cpu = {.pc=0xcf52, .a=0x60, .x=0x67, .y=0x52, .sp=0x21, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xcf52, .value=0xb0}, {.addr=0xcf53, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0xcf54, .a=0x60, .x=0x67, .y=0x52, .sp=0x21, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xcf52, .value=0xb0}, {.addr=0xcf53, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0xcf52, .value=0xb0, .type=IO_READ},
        {.addr=0xcf53, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0125) {
    const struct CPU_State initial_cpu = {.pc=0x61cb, .a=0x6b, .x=0xfb, .y=0x78, .sp=0x47, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x61cb, .value=0xb0}, {.addr=0x61cc, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x614d, .a=0x6b, .x=0xfb, .y=0x78, .sp=0x47, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x61cb, .value=0xb0}, {.addr=0x61cc, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x61cb, .value=0xb0, .type=IO_READ},
        {.addr=0x61cc, .value=0x80, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0126) {
    const struct CPU_State initial_cpu = {.pc=0xf006, .a=0xe7, .x=0x62, .y=0x51, .sp=0xe5, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xf006, .value=0xb0}, {.addr=0xf007, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0xf008, .a=0xe7, .x=0x62, .y=0x51, .sp=0xe5, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0xf006, .value=0xb0}, {.addr=0xf007, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0xf006, .value=0xb0, .type=IO_READ},
        {.addr=0xf007, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0127) {
    const struct CPU_State initial_cpu = {.pc=0x111d, .a=0xf8, .x=0x16, .y=0x29, .sp=0x7d, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x111d, .value=0xb0}, {.addr=0x111e, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x114e, .a=0xf8, .x=0x16, .y=0x29, .sp=0x7d, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x111d, .value=0xb0}, {.addr=0x111e, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x111d, .value=0xb0, .type=IO_READ},
        {.addr=0x111e, .value=0x2f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0128) {
    const struct CPU_State initial_cpu = {.pc=0x11cf, .a=0x72, .x=0x47, .y=0x0e, .sp=0x8b, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x11cf, .value=0xb0}, {.addr=0x11d0, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0x11d4, .a=0x72, .x=0x47, .y=0x0e, .sp=0x8b, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x11cf, .value=0xb0}, {.addr=0x11d0, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0x11cf, .value=0xb0, .type=IO_READ},
        {.addr=0x11d0, .value=0x03, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0129) {
    const struct CPU_State initial_cpu = {.pc=0x8fbf, .a=0x17, .x=0x67, .y=0x78, .sp=0x6f, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x8fbf, .value=0xb0}, {.addr=0x8fc0, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0x8f96, .a=0x17, .x=0x67, .y=0x78, .sp=0x6f, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x8fbf, .value=0xb0}, {.addr=0x8fc0, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0x8fbf, .value=0xb0, .type=IO_READ},
        {.addr=0x8fc0, .value=0xd5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_012A) {
    const struct CPU_State initial_cpu = {.pc=0x52f6, .a=0xfa, .x=0x87, .y=0xb3, .sp=0x7f, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x52f6, .value=0xb0}, {.addr=0x52f7, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0x52f8, .a=0xfa, .x=0x87, .y=0xb3, .sp=0x7f, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x52f6, .value=0xb0}, {.addr=0x52f7, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0x52f6, .value=0xb0, .type=IO_READ},
        {.addr=0x52f7, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_012B) {
    const struct CPU_State initial_cpu = {.pc=0x9c82, .a=0xe2, .x=0x46, .y=0x68, .sp=0xe9, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x9c82, .value=0xb0}, {.addr=0x9c83, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0x9cb2, .a=0xe2, .x=0x46, .y=0x68, .sp=0xe9, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x9c82, .value=0xb0}, {.addr=0x9c83, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0x9c82, .value=0xb0, .type=IO_READ},
        {.addr=0x9c83, .value=0x2e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_012C) {
    const struct CPU_State initial_cpu = {.pc=0x9338, .a=0xb2, .x=0x25, .y=0x43, .sp=0xae, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x9338, .value=0xb0}, {.addr=0x9339, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0x9311, .a=0xb2, .x=0x25, .y=0x43, .sp=0xae, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x9338, .value=0xb0}, {.addr=0x9339, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0x9338, .value=0xb0, .type=IO_READ},
        {.addr=0x9339, .value=0xd7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_012D) {
    const struct CPU_State initial_cpu = {.pc=0xcd80, .a=0xd8, .x=0x55, .y=0xdc, .sp=0x0c, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xcd80, .value=0xb0}, {.addr=0xcd81, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xcd82, .a=0xd8, .x=0x55, .y=0xdc, .sp=0x0c, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0xcd80, .value=0xb0}, {.addr=0xcd81, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xcd80, .value=0xb0, .type=IO_READ},
        {.addr=0xcd81, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_012E) {
    const struct CPU_State initial_cpu = {.pc=0xaeac, .a=0x20, .x=0x39, .y=0x54, .sp=0x89, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xaeac, .value=0xb0}, {.addr=0xaead, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0xaeae, .a=0x20, .x=0x39, .y=0x54, .sp=0x89, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0xaeac, .value=0xb0}, {.addr=0xaead, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0xaeac, .value=0xb0, .type=IO_READ},
        {.addr=0xaead, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_012F) {
    const struct CPU_State initial_cpu = {.pc=0x7ee2, .a=0xa3, .x=0x13, .y=0x03, .sp=0x99, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x7ee2, .value=0xb0}, {.addr=0x7ee3, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0x7ee4, .a=0xa3, .x=0x13, .y=0x03, .sp=0x99, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x7ee2, .value=0xb0}, {.addr=0x7ee3, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0x7ee2, .value=0xb0, .type=IO_READ},
        {.addr=0x7ee3, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0130) {
    const struct CPU_State initial_cpu = {.pc=0xe477, .a=0xa6, .x=0xb5, .y=0x2e, .sp=0xd0, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xe477, .value=0xb0}, {.addr=0xe478, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xe479, .a=0xa6, .x=0xb5, .y=0x2e, .sp=0xd0, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xe477, .value=0xb0}, {.addr=0xe478, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xe477, .value=0xb0, .type=IO_READ},
        {.addr=0xe478, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0131) {
    const struct CPU_State initial_cpu = {.pc=0x35ea, .a=0xed, .x=0x84, .y=0x66, .sp=0x89, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x35ea, .value=0xb0}, {.addr=0x35eb, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0x35ec, .a=0xed, .x=0x84, .y=0x66, .sp=0x89, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x35ea, .value=0xb0}, {.addr=0x35eb, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0x35ea, .value=0xb0, .type=IO_READ},
        {.addr=0x35eb, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0132) {
    const struct CPU_State initial_cpu = {.pc=0xaaa5, .a=0x7a, .x=0x89, .y=0xb4, .sp=0x66, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xaaa5, .value=0xb0}, {.addr=0xaaa6, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xaaa7, .a=0x7a, .x=0x89, .y=0xb4, .sp=0x66, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xaaa5, .value=0xb0}, {.addr=0xaaa6, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xaaa5, .value=0xb0, .type=IO_READ},
        {.addr=0xaaa6, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0133) {
    const struct CPU_State initial_cpu = {.pc=0xf1a6, .a=0x1b, .x=0x5d, .y=0x93, .sp=0xbc, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xf1a6, .value=0xb0}, {.addr=0xf1a7, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0xf1a8, .a=0x1b, .x=0x5d, .y=0x93, .sp=0xbc, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0xf1a6, .value=0xb0}, {.addr=0xf1a7, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0xf1a6, .value=0xb0, .type=IO_READ},
        {.addr=0xf1a7, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0134) {
    const struct CPU_State initial_cpu = {.pc=0x2186, .a=0xf6, .x=0xfb, .y=0xa0, .sp=0x09, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x2186, .value=0xb0}, {.addr=0x2187, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x21d4, .a=0xf6, .x=0xfb, .y=0xa0, .sp=0x09, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x2186, .value=0xb0}, {.addr=0x2187, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x2186, .value=0xb0, .type=IO_READ},
        {.addr=0x2187, .value=0x4c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0135) {
    const struct CPU_State initial_cpu = {.pc=0xb690, .a=0x22, .x=0x14, .y=0xe2, .sp=0x74, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xb690, .value=0xb0}, {.addr=0xb691, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0xb692, .a=0x22, .x=0x14, .y=0xe2, .sp=0x74, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0xb690, .value=0xb0}, {.addr=0xb691, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0xb690, .value=0xb0, .type=IO_READ},
        {.addr=0xb691, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0136) {
    const struct CPU_State initial_cpu = {.pc=0x54fe, .a=0xa9, .x=0x68, .y=0xbd, .sp=0x0b, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x54fe, .value=0xb0}, {.addr=0x54ff, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x54bf, .a=0xa9, .x=0x68, .y=0xbd, .sp=0x0b, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x54fe, .value=0xb0}, {.addr=0x54ff, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x54fe, .value=0xb0, .type=IO_READ},
        {.addr=0x54ff, .value=0xbf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0137) {
    const struct CPU_State initial_cpu = {.pc=0x1fae, .a=0x61, .x=0xc3, .y=0xcb, .sp=0x0b, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x1fae, .value=0xb0}, {.addr=0x1faf, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0x1fb0, .a=0x61, .x=0xc3, .y=0xcb, .sp=0x0b, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x1fae, .value=0xb0}, {.addr=0x1faf, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0x1fae, .value=0xb0, .type=IO_READ},
        {.addr=0x1faf, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0138) {
    const struct CPU_State initial_cpu = {.pc=0xba7b, .a=0x2e, .x=0xbb, .y=0xec, .sp=0x48, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xba7b, .value=0xb0}, {.addr=0xba7c, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0xba7d, .a=0x2e, .x=0xbb, .y=0xec, .sp=0x48, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xba7b, .value=0xb0}, {.addr=0xba7c, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0xba7b, .value=0xb0, .type=IO_READ},
        {.addr=0xba7c, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0139) {
    const struct CPU_State initial_cpu = {.pc=0xfd99, .a=0x79, .x=0x78, .y=0xba, .sp=0x51, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xfd99, .value=0xb0}, {.addr=0xfd9a, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0xfd7e, .a=0x79, .x=0x78, .y=0xba, .sp=0x51, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0xfd99, .value=0xb0}, {.addr=0xfd9a, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0xfd99, .value=0xb0, .type=IO_READ},
        {.addr=0xfd9a, .value=0xe3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_013A) {
    const struct CPU_State initial_cpu = {.pc=0xe878, .a=0x84, .x=0x94, .y=0x73, .sp=0x65, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xe878, .value=0xb0}, {.addr=0xe879, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0xe84d, .a=0x84, .x=0x94, .y=0x73, .sp=0x65, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0xe878, .value=0xb0}, {.addr=0xe879, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0xe878, .value=0xb0, .type=IO_READ},
        {.addr=0xe879, .value=0xd3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_013B) {
    const struct CPU_State initial_cpu = {.pc=0x6363, .a=0xc2, .x=0x9d, .y=0x35, .sp=0x1f, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x6363, .value=0xb0}, {.addr=0x6364, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0x6365, .a=0xc2, .x=0x9d, .y=0x35, .sp=0x1f, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x6363, .value=0xb0}, {.addr=0x6364, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0x6363, .value=0xb0, .type=IO_READ},
        {.addr=0x6364, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_013C) {
    const struct CPU_State initial_cpu = {.pc=0x7acf, .a=0x6e, .x=0xa0, .y=0xd7, .sp=0x49, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x7acf, .value=0xb0}, {.addr=0x7ad0, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0x7ad1, .a=0x6e, .x=0xa0, .y=0xd7, .sp=0x49, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x7acf, .value=0xb0}, {.addr=0x7ad0, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0x7acf, .value=0xb0, .type=IO_READ},
        {.addr=0x7ad0, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_013D) {
    const struct CPU_State initial_cpu = {.pc=0x31aa, .a=0x43, .x=0xeb, .y=0x33, .sp=0xec, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x31aa, .value=0xb0}, {.addr=0x31ab, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0x3227, .a=0x43, .x=0xeb, .y=0x33, .sp=0xec, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x31aa, .value=0xb0}, {.addr=0x31ab, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0x31aa, .value=0xb0, .type=IO_READ},
        {.addr=0x31ab, .value=0x7b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_013E) {
    const struct CPU_State initial_cpu = {.pc=0x786f, .a=0x1b, .x=0x44, .y=0xc4, .sp=0x63, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x786f, .value=0xb0}, {.addr=0x7870, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x7871, .a=0x1b, .x=0x44, .y=0xc4, .sp=0x63, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x786f, .value=0xb0}, {.addr=0x7870, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x786f, .value=0xb0, .type=IO_READ},
        {.addr=0x7870, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_013F) {
    const struct CPU_State initial_cpu = {.pc=0xf00c, .a=0x47, .x=0x16, .y=0xfc, .sp=0x04, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xf00c, .value=0xb0}, {.addr=0xf00d, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0xf00e, .a=0x47, .x=0x16, .y=0xfc, .sp=0x04, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0xf00c, .value=0xb0}, {.addr=0xf00d, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0xf00c, .value=0xb0, .type=IO_READ},
        {.addr=0xf00d, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0140) {
    const struct CPU_State initial_cpu = {.pc=0x0e3c, .a=0x66, .x=0xad, .y=0x1d, .sp=0xb4, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x0e3c, .value=0xb0}, {.addr=0x0e3d, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x0e3e, .a=0x66, .x=0xad, .y=0x1d, .sp=0xb4, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x0e3c, .value=0xb0}, {.addr=0x0e3d, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x0e3c, .value=0xb0, .type=IO_READ},
        {.addr=0x0e3d, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0141) {
    const struct CPU_State initial_cpu = {.pc=0xc286, .a=0xe5, .x=0x8e, .y=0x95, .sp=0x00, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xc286, .value=0xb0}, {.addr=0xc287, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0xc28f, .a=0xe5, .x=0x8e, .y=0x95, .sp=0x00, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xc286, .value=0xb0}, {.addr=0xc287, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0xc286, .value=0xb0, .type=IO_READ},
        {.addr=0xc287, .value=0x07, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0142) {
    const struct CPU_State initial_cpu = {.pc=0x10e4, .a=0x15, .x=0xcb, .y=0x3c, .sp=0xe8, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x10e4, .value=0xb0}, {.addr=0x10e5, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0x10fc, .a=0x15, .x=0xcb, .y=0x3c, .sp=0xe8, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x10e4, .value=0xb0}, {.addr=0x10e5, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0x10e4, .value=0xb0, .type=IO_READ},
        {.addr=0x10e5, .value=0x16, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0143) {
    const struct CPU_State initial_cpu = {.pc=0x9d69, .a=0xdc, .x=0xbc, .y=0x7e, .sp=0xa4, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x9d69, .value=0xb0}, {.addr=0x9d6a, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0x9d6b, .a=0xdc, .x=0xbc, .y=0x7e, .sp=0xa4, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x9d69, .value=0xb0}, {.addr=0x9d6a, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0x9d69, .value=0xb0, .type=IO_READ},
        {.addr=0x9d6a, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0144) {
    const struct CPU_State initial_cpu = {.pc=0x36dd, .a=0xfc, .x=0xb4, .y=0x83, .sp=0x5d, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x36dd, .value=0xb0}, {.addr=0x36de, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0x3675, .a=0xfc, .x=0xb4, .y=0x83, .sp=0x5d, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x36dd, .value=0xb0}, {.addr=0x36de, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0x36dd, .value=0xb0, .type=IO_READ},
        {.addr=0x36de, .value=0x96, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0145) {
    const struct CPU_State initial_cpu = {.pc=0x6bcb, .a=0xf4, .x=0x0e, .y=0xf1, .sp=0xbb, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x6bcb, .value=0xb0}, {.addr=0x6bcc, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x6c29, .a=0xf4, .x=0x0e, .y=0xf1, .sp=0xbb, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x6bcb, .value=0xb0}, {.addr=0x6bcc, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x6bcb, .value=0xb0, .type=IO_READ},
        {.addr=0x6bcc, .value=0x5c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0146) {
    const struct CPU_State initial_cpu = {.pc=0x8a47, .a=0xf4, .x=0xaf, .y=0x63, .sp=0x49, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x8a47, .value=0xb0}, {.addr=0x8a48, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x8a49, .a=0xf4, .x=0xaf, .y=0x63, .sp=0x49, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x8a47, .value=0xb0}, {.addr=0x8a48, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x8a47, .value=0xb0, .type=IO_READ},
        {.addr=0x8a48, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0147) {
    const struct CPU_State initial_cpu = {.pc=0x54a2, .a=0x81, .x=0xfb, .y=0x86, .sp=0x6c, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x54a2, .value=0xb0}, {.addr=0x54a3, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x5445, .a=0x81, .x=0xfb, .y=0x86, .sp=0x6c, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x54a2, .value=0xb0}, {.addr=0x54a3, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x54a2, .value=0xb0, .type=IO_READ},
        {.addr=0x54a3, .value=0xa1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0148) {
    const struct CPU_State initial_cpu = {.pc=0xf5c0, .a=0xe4, .x=0xa6, .y=0x3f, .sp=0xfa, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xf5c0, .value=0xb0}, {.addr=0xf5c1, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0xf57d, .a=0xe4, .x=0xa6, .y=0x3f, .sp=0xfa, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xf5c0, .value=0xb0}, {.addr=0xf5c1, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0xf5c0, .value=0xb0, .type=IO_READ},
        {.addr=0xf5c1, .value=0xbb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0149) {
    const struct CPU_State initial_cpu = {.pc=0x5680, .a=0x22, .x=0x33, .y=0x8a, .sp=0x0a, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x5680, .value=0xb0}, {.addr=0x5681, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0x5678, .a=0x22, .x=0x33, .y=0x8a, .sp=0x0a, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x5680, .value=0xb0}, {.addr=0x5681, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0x5680, .value=0xb0, .type=IO_READ},
        {.addr=0x5681, .value=0xf6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_014A) {
    const struct CPU_State initial_cpu = {.pc=0xb442, .a=0xd4, .x=0xbe, .y=0xde, .sp=0x03, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xb442, .value=0xb0}, {.addr=0xb443, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0xb444, .a=0xd4, .x=0xbe, .y=0xde, .sp=0x03, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xb442, .value=0xb0}, {.addr=0xb443, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0xb442, .value=0xb0, .type=IO_READ},
        {.addr=0xb443, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_014B) {
    const struct CPU_State initial_cpu = {.pc=0x0612, .a=0x6d, .x=0xd1, .y=0x9f, .sp=0x81, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x0612, .value=0xb0}, {.addr=0x0613, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0x064f, .a=0x6d, .x=0xd1, .y=0x9f, .sp=0x81, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x0612, .value=0xb0}, {.addr=0x0613, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0x0612, .value=0xb0, .type=IO_READ},
        {.addr=0x0613, .value=0x3b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_014C) {
    const struct CPU_State initial_cpu = {.pc=0x223c, .a=0x1f, .x=0x51, .y=0xa2, .sp=0x00, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x223c, .value=0xb0}, {.addr=0x223d, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x22ba, .a=0x1f, .x=0x51, .y=0xa2, .sp=0x00, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x223c, .value=0xb0}, {.addr=0x223d, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x223c, .value=0xb0, .type=IO_READ},
        {.addr=0x223d, .value=0x7c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_014D) {
    const struct CPU_State initial_cpu = {.pc=0x8d78, .a=0x3e, .x=0x64, .y=0xb5, .sp=0x61, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x8d78, .value=0xb0}, {.addr=0x8d79, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0x8d7b, .a=0x3e, .x=0x64, .y=0xb5, .sp=0x61, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x8d78, .value=0xb0}, {.addr=0x8d79, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0x8d78, .value=0xb0, .type=IO_READ},
        {.addr=0x8d79, .value=0x01, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_014E) {
    const struct CPU_State initial_cpu = {.pc=0x9e26, .a=0x50, .x=0xe4, .y=0xf4, .sp=0x14, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x9e26, .value=0xb0}, {.addr=0x9e27, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0x9e7e, .a=0x50, .x=0xe4, .y=0xf4, .sp=0x14, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x9e26, .value=0xb0}, {.addr=0x9e27, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0x9e26, .value=0xb0, .type=IO_READ},
        {.addr=0x9e27, .value=0x56, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_014F) {
    const struct CPU_State initial_cpu = {.pc=0x7cf1, .a=0xe1, .x=0x55, .y=0x5b, .sp=0xb0, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x7cf1, .value=0xb0}, {.addr=0x7cf2, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0x7cfb, .a=0xe1, .x=0x55, .y=0x5b, .sp=0xb0, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x7cf1, .value=0xb0}, {.addr=0x7cf2, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0x7cf1, .value=0xb0, .type=IO_READ},
        {.addr=0x7cf2, .value=0x08, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0150) {
    const struct CPU_State initial_cpu = {.pc=0x5dc2, .a=0x00, .x=0xf8, .y=0xf6, .sp=0x65, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x5dc2, .value=0xb0}, {.addr=0x5dc3, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0x5d55, .a=0x00, .x=0xf8, .y=0xf6, .sp=0x65, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x5dc2, .value=0xb0}, {.addr=0x5dc3, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0x5dc2, .value=0xb0, .type=IO_READ},
        {.addr=0x5dc3, .value=0x91, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0151) {
    const struct CPU_State initial_cpu = {.pc=0x454a, .a=0x45, .x=0x97, .y=0xb2, .sp=0x11, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x454a, .value=0xb0}, {.addr=0x454b, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0x44ef, .a=0x45, .x=0x97, .y=0xb2, .sp=0x11, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x454a, .value=0xb0}, {.addr=0x454b, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0x454a, .value=0xb0, .type=IO_READ},
        {.addr=0x454b, .value=0xa3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0152) {
    const struct CPU_State initial_cpu = {.pc=0xfba0, .a=0xf9, .x=0x26, .y=0x93, .sp=0x89, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xfba0, .value=0xb0}, {.addr=0xfba1, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xfba2, .a=0xf9, .x=0x26, .y=0x93, .sp=0x89, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xfba0, .value=0xb0}, {.addr=0xfba1, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xfba0, .value=0xb0, .type=IO_READ},
        {.addr=0xfba1, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0153) {
    const struct CPU_State initial_cpu = {.pc=0x0054, .a=0x95, .x=0x09, .y=0x8b, .sp=0xe8, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x0054, .value=0xb0}, {.addr=0x0055, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0xffeb, .a=0x95, .x=0x09, .y=0x8b, .sp=0xe8, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0054, .value=0xb0}, {.addr=0x0055, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0x0054, .value=0xb0, .type=IO_READ},
        {.addr=0x0055, .value=0x95, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0154) {
    const struct CPU_State initial_cpu = {.pc=0xff23, .a=0xad, .x=0xd4, .y=0x31, .sp=0x77, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0xff23, .value=0xb0}, {.addr=0xff24, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xff61, .a=0xad, .x=0xd4, .y=0x31, .sp=0x77, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xff23, .value=0xb0}, {.addr=0xff24, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xff23, .value=0xb0, .type=IO_READ},
        {.addr=0xff24, .value=0x3c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0155) {
    const struct CPU_State initial_cpu = {.pc=0x67b8, .a=0xde, .x=0xa1, .y=0x54, .sp=0xa9, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x67b8, .value=0xb0}, {.addr=0x67b9, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x67ba, .a=0xde, .x=0xa1, .y=0x54, .sp=0xa9, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x67b8, .value=0xb0}, {.addr=0x67b9, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x67b8, .value=0xb0, .type=IO_READ},
        {.addr=0x67b9, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0156) {
    const struct CPU_State initial_cpu = {.pc=0x639e, .a=0x00, .x=0x54, .y=0x14, .sp=0x8d, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x639e, .value=0xb0}, {.addr=0x639f, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x6415, .a=0x00, .x=0x54, .y=0x14, .sp=0x8d, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x639e, .value=0xb0}, {.addr=0x639f, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x639e, .value=0xb0, .type=IO_READ},
        {.addr=0x639f, .value=0x75, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0157) {
    const struct CPU_State initial_cpu = {.pc=0x35a0, .a=0x90, .x=0x6b, .y=0xfa, .sp=0xa7, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x35a0, .value=0xb0}, {.addr=0x35a1, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0x360e, .a=0x90, .x=0x6b, .y=0xfa, .sp=0xa7, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x35a0, .value=0xb0}, {.addr=0x35a1, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0x35a0, .value=0xb0, .type=IO_READ},
        {.addr=0x35a1, .value=0x6c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0158) {
    const struct CPU_State initial_cpu = {.pc=0xab54, .a=0xbf, .x=0x26, .y=0x52, .sp=0xbb, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xab54, .value=0xb0}, {.addr=0xab55, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0xaae2, .a=0xbf, .x=0x26, .y=0x52, .sp=0xbb, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0xab54, .value=0xb0}, {.addr=0xab55, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0xab54, .value=0xb0, .type=IO_READ},
        {.addr=0xab55, .value=0x8c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0159) {
    const struct CPU_State initial_cpu = {.pc=0xcc7a, .a=0x9f, .x=0xbd, .y=0x7b, .sp=0xf9, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xcc7a, .value=0xb0}, {.addr=0xcc7b, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0xcccf, .a=0x9f, .x=0xbd, .y=0x7b, .sp=0xf9, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0xcc7a, .value=0xb0}, {.addr=0xcc7b, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0xcc7a, .value=0xb0, .type=IO_READ},
        {.addr=0xcc7b, .value=0x53, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_015A) {
    const struct CPU_State initial_cpu = {.pc=0xa434, .a=0x0c, .x=0x6e, .y=0xb8, .sp=0xec, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xa434, .value=0xb0}, {.addr=0xa435, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xa473, .a=0x0c, .x=0x6e, .y=0xb8, .sp=0xec, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0xa434, .value=0xb0}, {.addr=0xa435, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xa434, .value=0xb0, .type=IO_READ},
        {.addr=0xa435, .value=0x3d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_015B) {
    const struct CPU_State initial_cpu = {.pc=0x93d8, .a=0x16, .x=0x1e, .y=0x26, .sp=0x85, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x93d8, .value=0xb0}, {.addr=0x93d9, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x93da, .a=0x16, .x=0x1e, .y=0x26, .sp=0x85, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x93d8, .value=0xb0}, {.addr=0x93d9, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x93d8, .value=0xb0, .type=IO_READ},
        {.addr=0x93d9, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_015C) {
    const struct CPU_State initial_cpu = {.pc=0x67b9, .a=0x51, .x=0xf8, .y=0x03, .sp=0x44, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x67b9, .value=0xb0}, {.addr=0x67ba, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0x67fa, .a=0x51, .x=0xf8, .y=0x03, .sp=0x44, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x67b9, .value=0xb0}, {.addr=0x67ba, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0x67b9, .value=0xb0, .type=IO_READ},
        {.addr=0x67ba, .value=0x3f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_015D) {
    const struct CPU_State initial_cpu = {.pc=0x56bc, .a=0x3d, .x=0x1e, .y=0xe3, .sp=0xd2, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x56bc, .value=0xb0}, {.addr=0x56bd, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0x56be, .a=0x3d, .x=0x1e, .y=0xe3, .sp=0xd2, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x56bc, .value=0xb0}, {.addr=0x56bd, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0x56bc, .value=0xb0, .type=IO_READ},
        {.addr=0x56bd, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_015E) {
    const struct CPU_State initial_cpu = {.pc=0x739b, .a=0xb9, .x=0xcb, .y=0x48, .sp=0x31, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x739b, .value=0xb0}, {.addr=0x739c, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0x73d5, .a=0xb9, .x=0xcb, .y=0x48, .sp=0x31, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x739b, .value=0xb0}, {.addr=0x739c, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0x739b, .value=0xb0, .type=IO_READ},
        {.addr=0x739c, .value=0x38, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_015F) {
    const struct CPU_State initial_cpu = {.pc=0x16d1, .a=0x82, .x=0xa6, .y=0xf8, .sp=0xc3, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x16d1, .value=0xb0}, {.addr=0x16d2, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0x16d3, .a=0x82, .x=0xa6, .y=0xf8, .sp=0xc3, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x16d1, .value=0xb0}, {.addr=0x16d2, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0x16d1, .value=0xb0, .type=IO_READ},
        {.addr=0x16d2, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0160) {
    const struct CPU_State initial_cpu = {.pc=0x92fd, .a=0xbd, .x=0x77, .y=0xc1, .sp=0xb4, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x92fd, .value=0xb0}, {.addr=0x92fe, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0x92ff, .a=0xbd, .x=0x77, .y=0xc1, .sp=0xb4, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x92fd, .value=0xb0}, {.addr=0x92fe, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0x92fd, .value=0xb0, .type=IO_READ},
        {.addr=0x92fe, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0161) {
    const struct CPU_State initial_cpu = {.pc=0x5454, .a=0x31, .x=0x43, .y=0x49, .sp=0x32, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x5454, .value=0xb0}, {.addr=0x5455, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0x5456, .a=0x31, .x=0x43, .y=0x49, .sp=0x32, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x5454, .value=0xb0}, {.addr=0x5455, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0x5454, .value=0xb0, .type=IO_READ},
        {.addr=0x5455, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0162) {
    const struct CPU_State initial_cpu = {.pc=0xd79f, .a=0xe0, .x=0x7a, .y=0x10, .sp=0x49, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xd79f, .value=0xb0}, {.addr=0xd7a0, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0xd7f3, .a=0xe0, .x=0x7a, .y=0x10, .sp=0x49, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xd79f, .value=0xb0}, {.addr=0xd7a0, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0xd79f, .value=0xb0, .type=IO_READ},
        {.addr=0xd7a0, .value=0x52, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0163) {
    const struct CPU_State initial_cpu = {.pc=0x2f4a, .a=0xbc, .x=0x5f, .y=0xd4, .sp=0x0c, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x2f4a, .value=0xb0}, {.addr=0x2f4b, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x2f4c, .a=0xbc, .x=0x5f, .y=0xd4, .sp=0x0c, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x2f4a, .value=0xb0}, {.addr=0x2f4b, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x2f4a, .value=0xb0, .type=IO_READ},
        {.addr=0x2f4b, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0164) {
    const struct CPU_State initial_cpu = {.pc=0x5754, .a=0xc9, .x=0x15, .y=0xbf, .sp=0x93, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x5754, .value=0xb0}, {.addr=0x5755, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0x5756, .a=0xc9, .x=0x15, .y=0xbf, .sp=0x93, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x5754, .value=0xb0}, {.addr=0x5755, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0x5754, .value=0xb0, .type=IO_READ},
        {.addr=0x5755, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0165) {
    const struct CPU_State initial_cpu = {.pc=0xfc9a, .a=0xdc, .x=0x28, .y=0x11, .sp=0x2d, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xfc9a, .value=0xb0}, {.addr=0xfc9b, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0xfc9c, .a=0xdc, .x=0x28, .y=0x11, .sp=0x2d, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0xfc9a, .value=0xb0}, {.addr=0xfc9b, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0xfc9a, .value=0xb0, .type=IO_READ},
        {.addr=0xfc9b, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0166) {
    const struct CPU_State initial_cpu = {.pc=0x7ef0, .a=0x2b, .x=0xd7, .y=0x60, .sp=0xce, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x7ef0, .value=0xb0}, {.addr=0x7ef1, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0x7ee9, .a=0x2b, .x=0xd7, .y=0x60, .sp=0xce, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x7ef0, .value=0xb0}, {.addr=0x7ef1, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0x7ef0, .value=0xb0, .type=IO_READ},
        {.addr=0x7ef1, .value=0xf7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0167) {
    const struct CPU_State initial_cpu = {.pc=0x61bd, .a=0xb2, .x=0x8a, .y=0xb5, .sp=0x24, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x61bd, .value=0xb0}, {.addr=0x61be, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0x61d6, .a=0xb2, .x=0x8a, .y=0xb5, .sp=0x24, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x61bd, .value=0xb0}, {.addr=0x61be, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0x61bd, .value=0xb0, .type=IO_READ},
        {.addr=0x61be, .value=0x17, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0168) {
    const struct CPU_State initial_cpu = {.pc=0x79db, .a=0x7f, .x=0x20, .y=0xe9, .sp=0xe0, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x79db, .value=0xb0}, {.addr=0x79dc, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0x7a1b, .a=0x7f, .x=0x20, .y=0xe9, .sp=0xe0, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x79db, .value=0xb0}, {.addr=0x79dc, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0x79db, .value=0xb0, .type=IO_READ},
        {.addr=0x79dc, .value=0x3e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0169) {
    const struct CPU_State initial_cpu = {.pc=0x514a, .a=0xf4, .x=0xe5, .y=0x10, .sp=0x52, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x514a, .value=0xb0}, {.addr=0x514b, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0x514c, .a=0xf4, .x=0xe5, .y=0x10, .sp=0x52, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x514a, .value=0xb0}, {.addr=0x514b, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0x514a, .value=0xb0, .type=IO_READ},
        {.addr=0x514b, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_016A) {
    const struct CPU_State initial_cpu = {.pc=0x6750, .a=0x03, .x=0x1e, .y=0xa6, .sp=0x37, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x6750, .value=0xb0}, {.addr=0x6751, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0x6737, .a=0x03, .x=0x1e, .y=0xa6, .sp=0x37, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x6750, .value=0xb0}, {.addr=0x6751, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0x6750, .value=0xb0, .type=IO_READ},
        {.addr=0x6751, .value=0xe5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_016B) {
    const struct CPU_State initial_cpu = {.pc=0x1a54, .a=0xef, .x=0xba, .y=0xe3, .sp=0x74, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x1a54, .value=0xb0}, {.addr=0x1a55, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0x1a56, .a=0xef, .x=0xba, .y=0xe3, .sp=0x74, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x1a54, .value=0xb0}, {.addr=0x1a55, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0x1a54, .value=0xb0, .type=IO_READ},
        {.addr=0x1a55, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_016C) {
    const struct CPU_State initial_cpu = {.pc=0xe9a5, .a=0xd1, .x=0xd4, .y=0xd8, .sp=0x03, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xe9a5, .value=0xb0}, {.addr=0xe9a6, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0xe9a7, .a=0xd1, .x=0xd4, .y=0xd8, .sp=0x03, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0xe9a5, .value=0xb0}, {.addr=0xe9a6, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0xe9a5, .value=0xb0, .type=IO_READ},
        {.addr=0xe9a6, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_016D) {
    const struct CPU_State initial_cpu = {.pc=0x176c, .a=0xe8, .x=0x33, .y=0xcb, .sp=0x45, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x176c, .value=0xb0}, {.addr=0x176d, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0x1710, .a=0xe8, .x=0x33, .y=0xcb, .sp=0x45, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x176c, .value=0xb0}, {.addr=0x176d, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0x176c, .value=0xb0, .type=IO_READ},
        {.addr=0x176d, .value=0xa2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_016E) {
    const struct CPU_State initial_cpu = {.pc=0x684b, .a=0x37, .x=0x6a, .y=0xfe, .sp=0xea, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x684b, .value=0xb0}, {.addr=0x684c, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x684d, .a=0x37, .x=0x6a, .y=0xfe, .sp=0xea, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x684b, .value=0xb0}, {.addr=0x684c, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x684b, .value=0xb0, .type=IO_READ},
        {.addr=0x684c, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_016F) {
    const struct CPU_State initial_cpu = {.pc=0xec61, .a=0x05, .x=0x53, .y=0x6b, .sp=0x88, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xec61, .value=0xb0}, {.addr=0xec62, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0xec63, .a=0x05, .x=0x53, .y=0x6b, .sp=0x88, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0xec61, .value=0xb0}, {.addr=0xec62, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0xec61, .value=0xb0, .type=IO_READ},
        {.addr=0xec62, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0170) {
    const struct CPU_State initial_cpu = {.pc=0xd51a, .a=0x14, .x=0x74, .y=0x05, .sp=0xdf, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xd51a, .value=0xb0}, {.addr=0xd51b, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xd599, .a=0x14, .x=0x74, .y=0x05, .sp=0xdf, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0xd51a, .value=0xb0}, {.addr=0xd51b, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xd51a, .value=0xb0, .type=IO_READ},
        {.addr=0xd51b, .value=0x7d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0171) {
    const struct CPU_State initial_cpu = {.pc=0x34ec, .a=0xd7, .x=0xa2, .y=0x80, .sp=0x93, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x34ec, .value=0xb0}, {.addr=0x34ed, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0x34c5, .a=0xd7, .x=0xa2, .y=0x80, .sp=0x93, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x34ec, .value=0xb0}, {.addr=0x34ed, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0x34ec, .value=0xb0, .type=IO_READ},
        {.addr=0x34ed, .value=0xd7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0172) {
    const struct CPU_State initial_cpu = {.pc=0x754a, .a=0x43, .x=0xf8, .y=0x82, .sp=0x54, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x754a, .value=0xb0}, {.addr=0x754b, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0x75b1, .a=0x43, .x=0xf8, .y=0x82, .sp=0x54, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x754a, .value=0xb0}, {.addr=0x754b, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0x754a, .value=0xb0, .type=IO_READ},
        {.addr=0x754b, .value=0x65, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0173) {
    const struct CPU_State initial_cpu = {.pc=0xd09f, .a=0x3a, .x=0x78, .y=0x1c, .sp=0xdf, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xd09f, .value=0xb0}, {.addr=0xd0a0, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0xd049, .a=0x3a, .x=0x78, .y=0x1c, .sp=0xdf, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0xd09f, .value=0xb0}, {.addr=0xd0a0, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0xd09f, .value=0xb0, .type=IO_READ},
        {.addr=0xd0a0, .value=0xa8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0174) {
    const struct CPU_State initial_cpu = {.pc=0x7ec1, .a=0x4c, .x=0xc1, .y=0x76, .sp=0x68, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x7ec1, .value=0xb0}, {.addr=0x7ec2, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0x7efd, .a=0x4c, .x=0xc1, .y=0x76, .sp=0x68, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x7ec1, .value=0xb0}, {.addr=0x7ec2, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0x7ec1, .value=0xb0, .type=IO_READ},
        {.addr=0x7ec2, .value=0x3a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0175) {
    const struct CPU_State initial_cpu = {.pc=0x8ca4, .a=0x91, .x=0xbc, .y=0x1f, .sp=0x88, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x8ca4, .value=0xb0}, {.addr=0x8ca5, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0x8ca6, .a=0x91, .x=0xbc, .y=0x1f, .sp=0x88, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x8ca4, .value=0xb0}, {.addr=0x8ca5, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0x8ca4, .value=0xb0, .type=IO_READ},
        {.addr=0x8ca5, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0176) {
    const struct CPU_State initial_cpu = {.pc=0x629a, .a=0x85, .x=0x58, .y=0xc2, .sp=0xa5, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x629a, .value=0xb0}, {.addr=0x629b, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0x62f1, .a=0x85, .x=0x58, .y=0xc2, .sp=0xa5, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x629a, .value=0xb0}, {.addr=0x629b, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0x629a, .value=0xb0, .type=IO_READ},
        {.addr=0x629b, .value=0x55, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0177) {
    const struct CPU_State initial_cpu = {.pc=0x6574, .a=0xdf, .x=0xe7, .y=0xd6, .sp=0x73, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x6574, .value=0xb0}, {.addr=0x6575, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0x6551, .a=0xdf, .x=0xe7, .y=0xd6, .sp=0x73, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x6574, .value=0xb0}, {.addr=0x6575, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0x6574, .value=0xb0, .type=IO_READ},
        {.addr=0x6575, .value=0xdb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0178) {
    const struct CPU_State initial_cpu = {.pc=0x446f, .a=0x4e, .x=0x00, .y=0x74, .sp=0xe0, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x446f, .value=0xb0}, {.addr=0x4470, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0x44a2, .a=0x4e, .x=0x00, .y=0x74, .sp=0xe0, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x446f, .value=0xb0}, {.addr=0x4470, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0x446f, .value=0xb0, .type=IO_READ},
        {.addr=0x4470, .value=0x31, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0179) {
    const struct CPU_State initial_cpu = {.pc=0x1f29, .a=0xc8, .x=0x2a, .y=0xf0, .sp=0x38, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x1f29, .value=0xb0}, {.addr=0x1f2a, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x1ec8, .a=0xc8, .x=0x2a, .y=0xf0, .sp=0x38, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x1f29, .value=0xb0}, {.addr=0x1f2a, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x1f29, .value=0xb0, .type=IO_READ},
        {.addr=0x1f2a, .value=0x9d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_017A) {
    const struct CPU_State initial_cpu = {.pc=0x2c6e, .a=0xe9, .x=0x89, .y=0x6a, .sp=0x4f, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x2c6e, .value=0xb0}, {.addr=0x2c6f, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0x2c70, .a=0xe9, .x=0x89, .y=0x6a, .sp=0x4f, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x2c6e, .value=0xb0}, {.addr=0x2c6f, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0x2c6e, .value=0xb0, .type=IO_READ},
        {.addr=0x2c6f, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_017B) {
    const struct CPU_State initial_cpu = {.pc=0x5c86, .a=0x68, .x=0x48, .y=0x53, .sp=0x40, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x5c86, .value=0xb0}, {.addr=0x5c87, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0x5c88, .a=0x68, .x=0x48, .y=0x53, .sp=0x40, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x5c86, .value=0xb0}, {.addr=0x5c87, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0x5c86, .value=0xb0, .type=IO_READ},
        {.addr=0x5c87, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_017C) {
    const struct CPU_State initial_cpu = {.pc=0x5f81, .a=0x35, .x=0x1e, .y=0x85, .sp=0xc0, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x5f81, .value=0xb0}, {.addr=0x5f82, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0x5fef, .a=0x35, .x=0x1e, .y=0x85, .sp=0xc0, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x5f81, .value=0xb0}, {.addr=0x5f82, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0x5f81, .value=0xb0, .type=IO_READ},
        {.addr=0x5f82, .value=0x6c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_017D) {
    const struct CPU_State initial_cpu = {.pc=0xf1c6, .a=0xda, .x=0xb3, .y=0x4b, .sp=0x12, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xf1c6, .value=0xb0}, {.addr=0xf1c7, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0xf231, .a=0xda, .x=0xb3, .y=0x4b, .sp=0x12, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0xf1c6, .value=0xb0}, {.addr=0xf1c7, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0xf1c6, .value=0xb0, .type=IO_READ},
        {.addr=0xf1c7, .value=0x69, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_017E) {
    const struct CPU_State initial_cpu = {.pc=0x6d75, .a=0x40, .x=0x90, .y=0x0b, .sp=0x2c, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x6d75, .value=0xb0}, {.addr=0x6d76, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0x6dd6, .a=0x40, .x=0x90, .y=0x0b, .sp=0x2c, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x6d75, .value=0xb0}, {.addr=0x6d76, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0x6d75, .value=0xb0, .type=IO_READ},
        {.addr=0x6d76, .value=0x5f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_017F) {
    const struct CPU_State initial_cpu = {.pc=0x491f, .a=0x1e, .x=0xca, .y=0xbb, .sp=0x26, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x491f, .value=0xb0}, {.addr=0x4920, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0x4908, .a=0x1e, .x=0xca, .y=0xbb, .sp=0x26, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x491f, .value=0xb0}, {.addr=0x4920, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0x491f, .value=0xb0, .type=IO_READ},
        {.addr=0x4920, .value=0xe7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0180) {
    const struct CPU_State initial_cpu = {.pc=0x052b, .a=0x81, .x=0xfb, .y=0x89, .sp=0xec, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x052b, .value=0xb0}, {.addr=0x052c, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0x052d, .a=0x81, .x=0xfb, .y=0x89, .sp=0xec, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x052b, .value=0xb0}, {.addr=0x052c, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0x052b, .value=0xb0, .type=IO_READ},
        {.addr=0x052c, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0181) {
    const struct CPU_State initial_cpu = {.pc=0xcf9a, .a=0x16, .x=0x5d, .y=0x6a, .sp=0xb5, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xcf9a, .value=0xb0}, {.addr=0xcf9b, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0xcf2d, .a=0x16, .x=0x5d, .y=0x6a, .sp=0xb5, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0xcf9a, .value=0xb0}, {.addr=0xcf9b, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0xcf9a, .value=0xb0, .type=IO_READ},
        {.addr=0xcf9b, .value=0x91, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0182) {
    const struct CPU_State initial_cpu = {.pc=0x7f99, .a=0x4e, .x=0x8b, .y=0xfc, .sp=0x97, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x7f99, .value=0xb0}, {.addr=0x7f9a, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0x8014, .a=0x4e, .x=0x8b, .y=0xfc, .sp=0x97, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x7f99, .value=0xb0}, {.addr=0x7f9a, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0x7f99, .value=0xb0, .type=IO_READ},
        {.addr=0x7f9a, .value=0x79, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0183) {
    const struct CPU_State initial_cpu = {.pc=0x2b5f, .a=0x88, .x=0x22, .y=0x6f, .sp=0xc9, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x2b5f, .value=0xb0}, {.addr=0x2b60, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0x2b61, .a=0x88, .x=0x22, .y=0x6f, .sp=0xc9, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x2b5f, .value=0xb0}, {.addr=0x2b60, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0x2b5f, .value=0xb0, .type=IO_READ},
        {.addr=0x2b60, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0184) {
    const struct CPU_State initial_cpu = {.pc=0x2469, .a=0x83, .x=0x91, .y=0xd8, .sp=0x18, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x2469, .value=0xb0}, {.addr=0x246a, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0x246b, .a=0x83, .x=0x91, .y=0xd8, .sp=0x18, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x2469, .value=0xb0}, {.addr=0x246a, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0x2469, .value=0xb0, .type=IO_READ},
        {.addr=0x246a, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0185) {
    const struct CPU_State initial_cpu = {.pc=0xb469, .a=0xc1, .x=0xe9, .y=0xbb, .sp=0x32, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xb469, .value=0xb0}, {.addr=0xb46a, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0xb46b, .a=0xc1, .x=0xe9, .y=0xbb, .sp=0x32, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0xb469, .value=0xb0}, {.addr=0xb46a, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0xb469, .value=0xb0, .type=IO_READ},
        {.addr=0xb46a, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0186) {
    const struct CPU_State initial_cpu = {.pc=0x48b8, .a=0xfe, .x=0xb5, .y=0x6b, .sp=0x7b, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x48b8, .value=0xb0}, {.addr=0x48b9, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0x4893, .a=0xfe, .x=0xb5, .y=0x6b, .sp=0x7b, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x48b8, .value=0xb0}, {.addr=0x48b9, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0x48b8, .value=0xb0, .type=IO_READ},
        {.addr=0x48b9, .value=0xd9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0187) {
    const struct CPU_State initial_cpu = {.pc=0x4718, .a=0x59, .x=0xf2, .y=0x64, .sp=0x32, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x4718, .value=0xb0}, {.addr=0x4719, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0x471a, .a=0x59, .x=0xf2, .y=0x64, .sp=0x32, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x4718, .value=0xb0}, {.addr=0x4719, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0x4718, .value=0xb0, .type=IO_READ},
        {.addr=0x4719, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0188) {
    const struct CPU_State initial_cpu = {.pc=0xeef6, .a=0x08, .x=0x61, .y=0x30, .sp=0xec, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xeef6, .value=0xb0}, {.addr=0xeef7, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0xeef8, .a=0x08, .x=0x61, .y=0x30, .sp=0xec, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0xeef6, .value=0xb0}, {.addr=0xeef7, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0xeef6, .value=0xb0, .type=IO_READ},
        {.addr=0xeef7, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0189) {
    const struct CPU_State initial_cpu = {.pc=0xd703, .a=0x00, .x=0xa9, .y=0x29, .sp=0x38, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xd703, .value=0xb0}, {.addr=0xd704, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0xd68e, .a=0x00, .x=0xa9, .y=0x29, .sp=0x38, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0xd703, .value=0xb0}, {.addr=0xd704, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0xd703, .value=0xb0, .type=IO_READ},
        {.addr=0xd704, .value=0x89, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_018A) {
    const struct CPU_State initial_cpu = {.pc=0x1585, .a=0x35, .x=0x87, .y=0xf8, .sp=0x26, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x1585, .value=0xb0}, {.addr=0x1586, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0x15a6, .a=0x35, .x=0x87, .y=0xf8, .sp=0x26, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x1585, .value=0xb0}, {.addr=0x1586, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0x1585, .value=0xb0, .type=IO_READ},
        {.addr=0x1586, .value=0x1f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_018B) {
    const struct CPU_State initial_cpu = {.pc=0x4b4d, .a=0x04, .x=0x8f, .y=0xd6, .sp=0x06, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x4b4d, .value=0xb0}, {.addr=0x4b4e, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0x4aff, .a=0x04, .x=0x8f, .y=0xd6, .sp=0x06, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x4b4d, .value=0xb0}, {.addr=0x4b4e, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0x4b4d, .value=0xb0, .type=IO_READ},
        {.addr=0x4b4e, .value=0xb0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_018C) {
    const struct CPU_State initial_cpu = {.pc=0x702e, .a=0x09, .x=0x9a, .y=0x07, .sp=0x1a, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x702e, .value=0xb0}, {.addr=0x702f, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0x6fd4, .a=0x09, .x=0x9a, .y=0x07, .sp=0x1a, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x702e, .value=0xb0}, {.addr=0x702f, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0x702e, .value=0xb0, .type=IO_READ},
        {.addr=0x702f, .value=0xa4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_018D) {
    const struct CPU_State initial_cpu = {.pc=0x0571, .a=0x7a, .x=0x1c, .y=0x3f, .sp=0xb1, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x0571, .value=0xb0}, {.addr=0x0572, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0x0573, .a=0x7a, .x=0x1c, .y=0x3f, .sp=0xb1, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0571, .value=0xb0}, {.addr=0x0572, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0x0571, .value=0xb0, .type=IO_READ},
        {.addr=0x0572, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_018E) {
    const struct CPU_State initial_cpu = {.pc=0x3359, .a=0x76, .x=0x01, .y=0x0a, .sp=0xb3, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x3359, .value=0xb0}, {.addr=0x335a, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0x335b, .a=0x76, .x=0x01, .y=0x0a, .sp=0xb3, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x3359, .value=0xb0}, {.addr=0x335a, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0x3359, .value=0xb0, .type=IO_READ},
        {.addr=0x335a, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_018F) {
    const struct CPU_State initial_cpu = {.pc=0x4cea, .a=0x1b, .x=0xed, .y=0x76, .sp=0xc4, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x4cea, .value=0xb0}, {.addr=0x4ceb, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0x4cd3, .a=0x1b, .x=0xed, .y=0x76, .sp=0xc4, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x4cea, .value=0xb0}, {.addr=0x4ceb, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0x4cea, .value=0xb0, .type=IO_READ},
        {.addr=0x4ceb, .value=0xe7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0190) {
    const struct CPU_State initial_cpu = {.pc=0xa0ab, .a=0xe5, .x=0x7c, .y=0xaf, .sp=0x2e, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xa0ab, .value=0xb0}, {.addr=0xa0ac, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xa0ad, .a=0xe5, .x=0x7c, .y=0xaf, .sp=0x2e, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0xa0ab, .value=0xb0}, {.addr=0xa0ac, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xa0ab, .value=0xb0, .type=IO_READ},
        {.addr=0xa0ac, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0191) {
    const struct CPU_State initial_cpu = {.pc=0xe457, .a=0x36, .x=0x9c, .y=0x95, .sp=0xc2, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xe457, .value=0xb0}, {.addr=0xe458, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xe459, .a=0x36, .x=0x9c, .y=0x95, .sp=0xc2, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0xe457, .value=0xb0}, {.addr=0xe458, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xe457, .value=0xb0, .type=IO_READ},
        {.addr=0xe458, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0192) {
    const struct CPU_State initial_cpu = {.pc=0x236b, .a=0x56, .x=0x4d, .y=0x28, .sp=0x8c, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x236b, .value=0xb0}, {.addr=0x236c, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x236d, .a=0x56, .x=0x4d, .y=0x28, .sp=0x8c, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x236b, .value=0xb0}, {.addr=0x236c, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x236b, .value=0xb0, .type=IO_READ},
        {.addr=0x236c, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0193) {
    const struct CPU_State initial_cpu = {.pc=0x518b, .a=0xe6, .x=0x76, .y=0xde, .sp=0xe9, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x518b, .value=0xb0}, {.addr=0x518c, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x518d, .a=0xe6, .x=0x76, .y=0xde, .sp=0xe9, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x518b, .value=0xb0}, {.addr=0x518c, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x518b, .value=0xb0, .type=IO_READ},
        {.addr=0x518c, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0194) {
    const struct CPU_State initial_cpu = {.pc=0x2363, .a=0x76, .x=0xbd, .y=0x37, .sp=0x76, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x2363, .value=0xb0}, {.addr=0x2364, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0x2365, .a=0x76, .x=0xbd, .y=0x37, .sp=0x76, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x2363, .value=0xb0}, {.addr=0x2364, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0x2363, .value=0xb0, .type=IO_READ},
        {.addr=0x2364, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0195) {
    const struct CPU_State initial_cpu = {.pc=0xe7d2, .a=0x5d, .x=0x4b, .y=0x4e, .sp=0xbb, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xe7d2, .value=0xb0}, {.addr=0xe7d3, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0xe7d4, .a=0x5d, .x=0x4b, .y=0x4e, .sp=0xbb, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0xe7d2, .value=0xb0}, {.addr=0xe7d3, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0xe7d2, .value=0xb0, .type=IO_READ},
        {.addr=0xe7d3, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0196) {
    const struct CPU_State initial_cpu = {.pc=0x29ee, .a=0x55, .x=0x97, .y=0x8a, .sp=0xda, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x29ee, .value=0xb0}, {.addr=0x29ef, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x29f0, .a=0x55, .x=0x97, .y=0x8a, .sp=0xda, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x29ee, .value=0xb0}, {.addr=0x29ef, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x29ee, .value=0xb0, .type=IO_READ},
        {.addr=0x29ef, .value=0x00, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0197) {
    const struct CPU_State initial_cpu = {.pc=0xa660, .a=0xc3, .x=0x2a, .y=0x8b, .sp=0xc2, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xa660, .value=0xb0}, {.addr=0xa661, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0xa662, .a=0xc3, .x=0x2a, .y=0x8b, .sp=0xc2, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xa660, .value=0xb0}, {.addr=0xa661, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0xa660, .value=0xb0, .type=IO_READ},
        {.addr=0xa661, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0198) {
    const struct CPU_State initial_cpu = {.pc=0x7e6c, .a=0x07, .x=0x97, .y=0x9b, .sp=0x27, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x7e6c, .value=0xb0}, {.addr=0x7e6d, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x7e6e, .a=0x07, .x=0x97, .y=0x9b, .sp=0x27, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x7e6c, .value=0xb0}, {.addr=0x7e6d, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x7e6c, .value=0xb0, .type=IO_READ},
        {.addr=0x7e6d, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0199) {
    const struct CPU_State initial_cpu = {.pc=0x3d01, .a=0xf6, .x=0x4e, .y=0x5f, .sp=0x61, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x3d01, .value=0xb0}, {.addr=0x3d02, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0x3d03, .a=0xf6, .x=0x4e, .y=0x5f, .sp=0x61, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x3d01, .value=0xb0}, {.addr=0x3d02, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0x3d01, .value=0xb0, .type=IO_READ},
        {.addr=0x3d02, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_019A) {
    const struct CPU_State initial_cpu = {.pc=0x06cc, .a=0x24, .x=0xd2, .y=0xee, .sp=0x05, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x06cc, .value=0xb0}, {.addr=0x06cd, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0x06ce, .a=0x24, .x=0xd2, .y=0xee, .sp=0x05, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x06cc, .value=0xb0}, {.addr=0x06cd, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0x06cc, .value=0xb0, .type=IO_READ},
        {.addr=0x06cd, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_019B) {
    const struct CPU_State initial_cpu = {.pc=0xf2bc, .a=0xd9, .x=0x6c, .y=0xdc, .sp=0x0f, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xf2bc, .value=0xb0}, {.addr=0xf2bd, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0xf2be, .a=0xd9, .x=0x6c, .y=0xdc, .sp=0x0f, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xf2bc, .value=0xb0}, {.addr=0xf2bd, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0xf2bc, .value=0xb0, .type=IO_READ},
        {.addr=0xf2bd, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_019C) {
    const struct CPU_State initial_cpu = {.pc=0xf5a6, .a=0xe9, .x=0xb7, .y=0x65, .sp=0xcb, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xf5a6, .value=0xb0}, {.addr=0xf5a7, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0xf5a8, .a=0xe9, .x=0xb7, .y=0x65, .sp=0xcb, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xf5a6, .value=0xb0}, {.addr=0xf5a7, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0xf5a6, .value=0xb0, .type=IO_READ},
        {.addr=0xf5a7, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_019D) {
    const struct CPU_State initial_cpu = {.pc=0x0057, .a=0xe1, .x=0x4a, .y=0x86, .sp=0xde, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x0057, .value=0xb0}, {.addr=0x0058, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0x0059, .a=0xe1, .x=0x4a, .y=0x86, .sp=0xde, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x0057, .value=0xb0}, {.addr=0x0058, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0x0057, .value=0xb0, .type=IO_READ},
        {.addr=0x0058, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_019E) {
    const struct CPU_State initial_cpu = {.pc=0x84b5, .a=0xc6, .x=0x1b, .y=0x03, .sp=0x46, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x84b5, .value=0xb0}, {.addr=0x84b6, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x84cb, .a=0xc6, .x=0x1b, .y=0x03, .sp=0x46, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x84b5, .value=0xb0}, {.addr=0x84b6, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x84b5, .value=0xb0, .type=IO_READ},
        {.addr=0x84b6, .value=0x14, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_019F) {
    const struct CPU_State initial_cpu = {.pc=0x55ba, .a=0x06, .x=0x45, .y=0xe1, .sp=0x73, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x55ba, .value=0xb0}, {.addr=0x55bb, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0x5628, .a=0x06, .x=0x45, .y=0xe1, .sp=0x73, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x55ba, .value=0xb0}, {.addr=0x55bb, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0x55ba, .value=0xb0, .type=IO_READ},
        {.addr=0x55bb, .value=0x6c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01A0) {
    const struct CPU_State initial_cpu = {.pc=0x266d, .a=0x34, .x=0x23, .y=0x6c, .sp=0x83, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x266d, .value=0xb0}, {.addr=0x266e, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0x266f, .a=0x34, .x=0x23, .y=0x6c, .sp=0x83, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x266d, .value=0xb0}, {.addr=0x266e, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0x266d, .value=0xb0, .type=IO_READ},
        {.addr=0x266e, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01A1) {
    const struct CPU_State initial_cpu = {.pc=0x5fe1, .a=0xa1, .x=0x3e, .y=0x20, .sp=0xb2, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x5fe1, .value=0xb0}, {.addr=0x5fe2, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0x5fe3, .a=0xa1, .x=0x3e, .y=0x20, .sp=0xb2, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x5fe1, .value=0xb0}, {.addr=0x5fe2, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0x5fe1, .value=0xb0, .type=IO_READ},
        {.addr=0x5fe2, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01A2) {
    const struct CPU_State initial_cpu = {.pc=0x154c, .a=0xf0, .x=0x48, .y=0xed, .sp=0x32, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x154c, .value=0xb0}, {.addr=0x154d, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x154e, .a=0xf0, .x=0x48, .y=0xed, .sp=0x32, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x154c, .value=0xb0}, {.addr=0x154d, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x154c, .value=0xb0, .type=IO_READ},
        {.addr=0x154d, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01A3) {
    const struct CPU_State initial_cpu = {.pc=0x094a, .a=0xcf, .x=0x8e, .y=0x38, .sp=0x6d, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x094a, .value=0xb0}, {.addr=0x094b, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0x094c, .a=0xcf, .x=0x8e, .y=0x38, .sp=0x6d, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x094a, .value=0xb0}, {.addr=0x094b, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0x094a, .value=0xb0, .type=IO_READ},
        {.addr=0x094b, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01A4) {
    const struct CPU_State initial_cpu = {.pc=0x3fdf, .a=0x86, .x=0xaf, .y=0x4f, .sp=0xf7, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x3fdf, .value=0xb0}, {.addr=0x3fe0, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0x3fe1, .a=0x86, .x=0xaf, .y=0x4f, .sp=0xf7, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x3fdf, .value=0xb0}, {.addr=0x3fe0, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0x3fdf, .value=0xb0, .type=IO_READ},
        {.addr=0x3fe0, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01A5) {
    const struct CPU_State initial_cpu = {.pc=0x7f29, .a=0x71, .x=0x11, .y=0xae, .sp=0x04, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x7f29, .value=0xb0}, {.addr=0x7f2a, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x7f27, .a=0x71, .x=0x11, .y=0xae, .sp=0x04, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x7f29, .value=0xb0}, {.addr=0x7f2a, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x7f29, .value=0xb0, .type=IO_READ},
        {.addr=0x7f2a, .value=0xfc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01A6) {
    const struct CPU_State initial_cpu = {.pc=0xf522, .a=0xc1, .x=0x67, .y=0x0a, .sp=0x3a, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xf522, .value=0xb0}, {.addr=0xf523, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0xf4d0, .a=0xc1, .x=0x67, .y=0x0a, .sp=0x3a, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xf522, .value=0xb0}, {.addr=0xf523, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0xf522, .value=0xb0, .type=IO_READ},
        {.addr=0xf523, .value=0xac, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01A7) {
    const struct CPU_State initial_cpu = {.pc=0x2d1f, .a=0x10, .x=0x79, .y=0xbd, .sp=0xe9, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x2d1f, .value=0xb0}, {.addr=0x2d20, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x2d21, .a=0x10, .x=0x79, .y=0xbd, .sp=0xe9, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x2d1f, .value=0xb0}, {.addr=0x2d20, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x2d1f, .value=0xb0, .type=IO_READ},
        {.addr=0x2d20, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01A8) {
    const struct CPU_State initial_cpu = {.pc=0x1b40, .a=0x61, .x=0x60, .y=0x3d, .sp=0xba, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x1b40, .value=0xb0}, {.addr=0x1b41, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x1b42, .a=0x61, .x=0x60, .y=0x3d, .sp=0xba, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x1b40, .value=0xb0}, {.addr=0x1b41, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x1b40, .value=0xb0, .type=IO_READ},
        {.addr=0x1b41, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01A9) {
    const struct CPU_State initial_cpu = {.pc=0xcbf3, .a=0x70, .x=0x82, .y=0x92, .sp=0x21, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xcbf3, .value=0xb0}, {.addr=0xcbf4, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xcbf5, .a=0x70, .x=0x82, .y=0x92, .sp=0x21, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0xcbf3, .value=0xb0}, {.addr=0xcbf4, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xcbf3, .value=0xb0, .type=IO_READ},
        {.addr=0xcbf4, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01AA) {
    const struct CPU_State initial_cpu = {.pc=0xce32, .a=0x6f, .x=0x1a, .y=0x1a, .sp=0x50, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xce32, .value=0xb0}, {.addr=0xce33, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0xce52, .a=0x6f, .x=0x1a, .y=0x1a, .sp=0x50, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0xce32, .value=0xb0}, {.addr=0xce33, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0xce32, .value=0xb0, .type=IO_READ},
        {.addr=0xce33, .value=0x1e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01AB) {
    const struct CPU_State initial_cpu = {.pc=0xa393, .a=0xf4, .x=0x13, .y=0xe1, .sp=0xf2, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0xa393, .value=0xb0}, {.addr=0xa394, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0xa3ca, .a=0xf4, .x=0x13, .y=0xe1, .sp=0xf2, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xa393, .value=0xb0}, {.addr=0xa394, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0xa393, .value=0xb0, .type=IO_READ},
        {.addr=0xa394, .value=0x35, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01AC) {
    const struct CPU_State initial_cpu = {.pc=0xb5a6, .a=0x89, .x=0x58, .y=0x3c, .sp=0x69, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xb5a6, .value=0xb0}, {.addr=0xb5a7, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0xb570, .a=0x89, .x=0x58, .y=0x3c, .sp=0x69, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xb5a6, .value=0xb0}, {.addr=0xb5a7, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0xb5a6, .value=0xb0, .type=IO_READ},
        {.addr=0xb5a7, .value=0xc8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01AD) {
    const struct CPU_State initial_cpu = {.pc=0x0a16, .a=0xd2, .x=0x78, .y=0x26, .sp=0x7e, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x0a16, .value=0xb0}, {.addr=0x0a17, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0x09f1, .a=0xd2, .x=0x78, .y=0x26, .sp=0x7e, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x0a16, .value=0xb0}, {.addr=0x0a17, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0x0a16, .value=0xb0, .type=IO_READ},
        {.addr=0x0a17, .value=0xd9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01AE) {
    const struct CPU_State initial_cpu = {.pc=0xb0f3, .a=0xf0, .x=0x52, .y=0x5f, .sp=0x26, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xb0f3, .value=0xb0}, {.addr=0xb0f4, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xb0f5, .a=0xf0, .x=0x52, .y=0x5f, .sp=0x26, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0xb0f3, .value=0xb0}, {.addr=0xb0f4, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xb0f3, .value=0xb0, .type=IO_READ},
        {.addr=0xb0f4, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01AF) {
    const struct CPU_State initial_cpu = {.pc=0x09a4, .a=0x0e, .x=0x25, .y=0xca, .sp=0xd8, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x09a4, .value=0xb0}, {.addr=0x09a5, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0x09a6, .a=0x0e, .x=0x25, .y=0xca, .sp=0xd8, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x09a4, .value=0xb0}, {.addr=0x09a5, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0x09a4, .value=0xb0, .type=IO_READ},
        {.addr=0x09a5, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01B0) {
    const struct CPU_State initial_cpu = {.pc=0xd09b, .a=0xf6, .x=0x2c, .y=0xc4, .sp=0x0d, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xd09b, .value=0xb0}, {.addr=0xd09c, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0xd09d, .a=0xf6, .x=0x2c, .y=0xc4, .sp=0x0d, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0xd09b, .value=0xb0}, {.addr=0xd09c, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0xd09b, .value=0xb0, .type=IO_READ},
        {.addr=0xd09c, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01B1) {
    const struct CPU_State initial_cpu = {.pc=0x04aa, .a=0x2a, .x=0x81, .y=0x8c, .sp=0x04, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x04aa, .value=0xb0}, {.addr=0x04ab, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0x04ac, .a=0x2a, .x=0x81, .y=0x8c, .sp=0x04, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x04aa, .value=0xb0}, {.addr=0x04ab, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0x04aa, .value=0xb0, .type=IO_READ},
        {.addr=0x04ab, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01B2) {
    const struct CPU_State initial_cpu = {.pc=0xcc60, .a=0x38, .x=0x5e, .y=0xd6, .sp=0x51, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xcc60, .value=0xb0}, {.addr=0xcc61, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0xcc62, .a=0x38, .x=0x5e, .y=0xd6, .sp=0x51, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0xcc60, .value=0xb0}, {.addr=0xcc61, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0xcc60, .value=0xb0, .type=IO_READ},
        {.addr=0xcc61, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01B3) {
    const struct CPU_State initial_cpu = {.pc=0xe644, .a=0x08, .x=0x13, .y=0x3d, .sp=0x01, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xe644, .value=0xb0}, {.addr=0xe645, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0xe646, .a=0x08, .x=0x13, .y=0x3d, .sp=0x01, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0xe644, .value=0xb0}, {.addr=0xe645, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0xe644, .value=0xb0, .type=IO_READ},
        {.addr=0xe645, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01B4) {
    const struct CPU_State initial_cpu = {.pc=0xbad9, .a=0x97, .x=0x85, .y=0x4b, .sp=0x37, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0xbad9, .value=0xb0}, {.addr=0xbada, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0xbb56, .a=0x97, .x=0x85, .y=0x4b, .sp=0x37, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0xbad9, .value=0xb0}, {.addr=0xbada, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0xbad9, .value=0xb0, .type=IO_READ},
        {.addr=0xbada, .value=0x7b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01B5) {
    const struct CPU_State initial_cpu = {.pc=0x91b0, .a=0x31, .x=0x4a, .y=0xbc, .sp=0xfe, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x91b0, .value=0xb0}, {.addr=0x91b1, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x91af, .a=0x31, .x=0x4a, .y=0xbc, .sp=0xfe, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x91b0, .value=0xb0}, {.addr=0x91b1, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x91b0, .value=0xb0, .type=IO_READ},
        {.addr=0x91b1, .value=0xfd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01B6) {
    const struct CPU_State initial_cpu = {.pc=0xd0b9, .a=0x2a, .x=0xee, .y=0x0a, .sp=0x3f, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xd0b9, .value=0xb0}, {.addr=0xd0ba, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xd0bb, .a=0x2a, .x=0xee, .y=0x0a, .sp=0x3f, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xd0b9, .value=0xb0}, {.addr=0xd0ba, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xd0b9, .value=0xb0, .type=IO_READ},
        {.addr=0xd0ba, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01B7) {
    const struct CPU_State initial_cpu = {.pc=0xe5c7, .a=0x1d, .x=0xba, .y=0x1a, .sp=0xc4, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xe5c7, .value=0xb0}, {.addr=0xe5c8, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0xe59b, .a=0x1d, .x=0xba, .y=0x1a, .sp=0xc4, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xe5c7, .value=0xb0}, {.addr=0xe5c8, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0xe5c7, .value=0xb0, .type=IO_READ},
        {.addr=0xe5c8, .value=0xd2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01B8) {
    const struct CPU_State initial_cpu = {.pc=0x628f, .a=0xc0, .x=0xb4, .y=0x50, .sp=0xaa, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x628f, .value=0xb0}, {.addr=0x6290, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0x6280, .a=0xc0, .x=0xb4, .y=0x50, .sp=0xaa, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x628f, .value=0xb0}, {.addr=0x6290, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0x628f, .value=0xb0, .type=IO_READ},
        {.addr=0x6290, .value=0xef, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01B9) {
    const struct CPU_State initial_cpu = {.pc=0x8490, .a=0x35, .x=0x72, .y=0x49, .sp=0x48, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x8490, .value=0xb0}, {.addr=0x8491, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0x845e, .a=0x35, .x=0x72, .y=0x49, .sp=0x48, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x8490, .value=0xb0}, {.addr=0x8491, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0x8490, .value=0xb0, .type=IO_READ},
        {.addr=0x8491, .value=0xcc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01BA) {
    const struct CPU_State initial_cpu = {.pc=0xbbd3, .a=0xe0, .x=0x13, .y=0x34, .sp=0x1f, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xbbd3, .value=0xb0}, {.addr=0xbbd4, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0xbbd5, .a=0xe0, .x=0x13, .y=0x34, .sp=0x1f, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xbbd3, .value=0xb0}, {.addr=0xbbd4, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0xbbd3, .value=0xb0, .type=IO_READ},
        {.addr=0xbbd4, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01BB) {
    const struct CPU_State initial_cpu = {.pc=0xf9d5, .a=0xe5, .x=0xcf, .y=0x88, .sp=0xaa, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xf9d5, .value=0xb0}, {.addr=0xf9d6, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0xf9d7, .a=0xe5, .x=0xcf, .y=0x88, .sp=0xaa, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xf9d5, .value=0xb0}, {.addr=0xf9d6, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0xf9d5, .value=0xb0, .type=IO_READ},
        {.addr=0xf9d6, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01BC) {
    const struct CPU_State initial_cpu = {.pc=0xf92e, .a=0xee, .x=0xa0, .y=0x7d, .sp=0x6b, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0xf92e, .value=0xb0}, {.addr=0xf92f, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0xf98b, .a=0xee, .x=0xa0, .y=0x7d, .sp=0x6b, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0xf92e, .value=0xb0}, {.addr=0xf92f, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0xf92e, .value=0xb0, .type=IO_READ},
        {.addr=0xf92f, .value=0x5b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01BD) {
    const struct CPU_State initial_cpu = {.pc=0xda76, .a=0x96, .x=0xc4, .y=0x50, .sp=0x66, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0xda76, .value=0xb0}, {.addr=0xda77, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0xda6f, .a=0x96, .x=0xc4, .y=0x50, .sp=0x66, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xda76, .value=0xb0}, {.addr=0xda77, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0xda76, .value=0xb0, .type=IO_READ},
        {.addr=0xda77, .value=0xf7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01BE) {
    const struct CPU_State initial_cpu = {.pc=0x2a0e, .a=0xf9, .x=0x22, .y=0x9e, .sp=0x4d, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x2a0e, .value=0xb0}, {.addr=0x2a0f, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0x29e4, .a=0xf9, .x=0x22, .y=0x9e, .sp=0x4d, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x2a0e, .value=0xb0}, {.addr=0x2a0f, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0x2a0e, .value=0xb0, .type=IO_READ},
        {.addr=0x2a0f, .value=0xd4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01BF) {
    const struct CPU_State initial_cpu = {.pc=0xfd18, .a=0x9f, .x=0x08, .y=0x33, .sp=0x75, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xfd18, .value=0xb0}, {.addr=0xfd19, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0xfd6c, .a=0x9f, .x=0x08, .y=0x33, .sp=0x75, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0xfd18, .value=0xb0}, {.addr=0xfd19, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0xfd18, .value=0xb0, .type=IO_READ},
        {.addr=0xfd19, .value=0x52, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01C0) {
    const struct CPU_State initial_cpu = {.pc=0xe690, .a=0xad, .x=0xde, .y=0xe0, .sp=0x2e, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xe690, .value=0xb0}, {.addr=0xe691, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0xe692, .a=0xad, .x=0xde, .y=0xe0, .sp=0x2e, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xe690, .value=0xb0}, {.addr=0xe691, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0xe690, .value=0xb0, .type=IO_READ},
        {.addr=0xe691, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01C1) {
    const struct CPU_State initial_cpu = {.pc=0x0aaa, .a=0xd6, .x=0x4a, .y=0x4c, .sp=0x3d, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x0aaa, .value=0xb0}, {.addr=0x0aab, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0x0b2b, .a=0xd6, .x=0x4a, .y=0x4c, .sp=0x3d, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x0aaa, .value=0xb0}, {.addr=0x0aab, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0x0aaa, .value=0xb0, .type=IO_READ},
        {.addr=0x0aab, .value=0x7f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01C2) {
    const struct CPU_State initial_cpu = {.pc=0x1501, .a=0x86, .x=0xe4, .y=0xc8, .sp=0x9e, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x1501, .value=0xb0}, {.addr=0x1502, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0x148b, .a=0x86, .x=0xe4, .y=0xc8, .sp=0x9e, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x1501, .value=0xb0}, {.addr=0x1502, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0x1501, .value=0xb0, .type=IO_READ},
        {.addr=0x1502, .value=0x88, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01C3) {
    const struct CPU_State initial_cpu = {.pc=0x345c, .a=0x8e, .x=0xc7, .y=0x14, .sp=0x95, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x345c, .value=0xb0}, {.addr=0x345d, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0x345e, .a=0x8e, .x=0xc7, .y=0x14, .sp=0x95, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x345c, .value=0xb0}, {.addr=0x345d, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0x345c, .value=0xb0, .type=IO_READ},
        {.addr=0x345d, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01C4) {
    const struct CPU_State initial_cpu = {.pc=0x494d, .a=0x5e, .x=0x35, .y=0x26, .sp=0xea, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x494d, .value=0xb0}, {.addr=0x494e, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x494f, .a=0x5e, .x=0x35, .y=0x26, .sp=0xea, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x494d, .value=0xb0}, {.addr=0x494e, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x494d, .value=0xb0, .type=IO_READ},
        {.addr=0x494e, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01C5) {
    const struct CPU_State initial_cpu = {.pc=0x910e, .a=0x12, .x=0xfd, .y=0xc1, .sp=0xb0, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x910e, .value=0xb0}, {.addr=0x910f, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0x9162, .a=0x12, .x=0xfd, .y=0xc1, .sp=0xb0, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x910e, .value=0xb0}, {.addr=0x910f, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0x910e, .value=0xb0, .type=IO_READ},
        {.addr=0x910f, .value=0x52, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01C6) {
    const struct CPU_State initial_cpu = {.pc=0xbbdb, .a=0xf5, .x=0x16, .y=0x78, .sp=0xb5, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xbbdb, .value=0xb0}, {.addr=0xbbdc, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xbbdd, .a=0xf5, .x=0x16, .y=0x78, .sp=0xb5, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0xbbdb, .value=0xb0}, {.addr=0xbbdc, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xbbdb, .value=0xb0, .type=IO_READ},
        {.addr=0xbbdc, .value=0x00, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01C7) {
    const struct CPU_State initial_cpu = {.pc=0xf8bc, .a=0xc8, .x=0x16, .y=0x4d, .sp=0xc3, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xf8bc, .value=0xb0}, {.addr=0xf8bd, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0xf8ee, .a=0xc8, .x=0x16, .y=0x4d, .sp=0xc3, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xf8bc, .value=0xb0}, {.addr=0xf8bd, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0xf8bc, .value=0xb0, .type=IO_READ},
        {.addr=0xf8bd, .value=0x30, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01C8) {
    const struct CPU_State initial_cpu = {.pc=0xf280, .a=0xfd, .x=0x22, .y=0x2b, .sp=0x63, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xf280, .value=0xb0}, {.addr=0xf281, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0xf2d5, .a=0xfd, .x=0x22, .y=0x2b, .sp=0x63, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xf280, .value=0xb0}, {.addr=0xf281, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0xf280, .value=0xb0, .type=IO_READ},
        {.addr=0xf281, .value=0x53, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01C9) {
    const struct CPU_State initial_cpu = {.pc=0x1d45, .a=0xfd, .x=0x3e, .y=0xa2, .sp=0x1b, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x1d45, .value=0xb0}, {.addr=0x1d46, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0x1d47, .a=0xfd, .x=0x3e, .y=0xa2, .sp=0x1b, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x1d45, .value=0xb0}, {.addr=0x1d46, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0x1d45, .value=0xb0, .type=IO_READ},
        {.addr=0x1d46, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01CA) {
    const struct CPU_State initial_cpu = {.pc=0x59a0, .a=0x43, .x=0x3e, .y=0xd6, .sp=0x83, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x59a0, .value=0xb0}, {.addr=0x59a1, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0x5a21, .a=0x43, .x=0x3e, .y=0xd6, .sp=0x83, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x59a0, .value=0xb0}, {.addr=0x59a1, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0x59a0, .value=0xb0, .type=IO_READ},
        {.addr=0x59a1, .value=0x7f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01CB) {
    const struct CPU_State initial_cpu = {.pc=0xa5a0, .a=0x25, .x=0xe9, .y=0x9a, .sp=0x11, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xa5a0, .value=0xb0}, {.addr=0xa5a1, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0xa546, .a=0x25, .x=0xe9, .y=0x9a, .sp=0x11, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xa5a0, .value=0xb0}, {.addr=0xa5a1, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0xa5a0, .value=0xb0, .type=IO_READ},
        {.addr=0xa5a1, .value=0xa4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01CC) {
    const struct CPU_State initial_cpu = {.pc=0x6825, .a=0x09, .x=0x2e, .y=0xe5, .sp=0x32, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x6825, .value=0xb0}, {.addr=0x6826, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0x67cb, .a=0x09, .x=0x2e, .y=0xe5, .sp=0x32, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x6825, .value=0xb0}, {.addr=0x6826, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0x6825, .value=0xb0, .type=IO_READ},
        {.addr=0x6826, .value=0xa4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01CD) {
    const struct CPU_State initial_cpu = {.pc=0xa8bd, .a=0xc7, .x=0x9a, .y=0x5c, .sp=0x43, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xa8bd, .value=0xb0}, {.addr=0xa8be, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0xa8f1, .a=0xc7, .x=0x9a, .y=0x5c, .sp=0x43, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xa8bd, .value=0xb0}, {.addr=0xa8be, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0xa8bd, .value=0xb0, .type=IO_READ},
        {.addr=0xa8be, .value=0x32, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01CE) {
    const struct CPU_State initial_cpu = {.pc=0x220b, .a=0x53, .x=0x49, .y=0x3c, .sp=0x72, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x220b, .value=0xb0}, {.addr=0x220c, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0x21bd, .a=0x53, .x=0x49, .y=0x3c, .sp=0x72, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x220b, .value=0xb0}, {.addr=0x220c, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0x220b, .value=0xb0, .type=IO_READ},
        {.addr=0x220c, .value=0xb0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01CF) {
    const struct CPU_State initial_cpu = {.pc=0x6d49, .a=0xc7, .x=0x67, .y=0x4d, .sp=0xc8, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x6d49, .value=0xb0}, {.addr=0x6d4a, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0x6dc1, .a=0xc7, .x=0x67, .y=0x4d, .sp=0xc8, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x6d49, .value=0xb0}, {.addr=0x6d4a, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0x6d49, .value=0xb0, .type=IO_READ},
        {.addr=0x6d4a, .value=0x76, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01D0) {
    const struct CPU_State initial_cpu = {.pc=0x8fef, .a=0xf9, .x=0x1b, .y=0xca, .sp=0xba, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x8fef, .value=0xb0}, {.addr=0x8ff0, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0x8fe7, .a=0xf9, .x=0x1b, .y=0xca, .sp=0xba, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x8fef, .value=0xb0}, {.addr=0x8ff0, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0x8fef, .value=0xb0, .type=IO_READ},
        {.addr=0x8ff0, .value=0xf6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01D1) {
    const struct CPU_State initial_cpu = {.pc=0x0e77, .a=0xe8, .x=0xb2, .y=0xe7, .sp=0x82, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x0e77, .value=0xb0}, {.addr=0x0e78, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0x0e5d, .a=0xe8, .x=0xb2, .y=0xe7, .sp=0x82, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x0e77, .value=0xb0}, {.addr=0x0e78, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0x0e77, .value=0xb0, .type=IO_READ},
        {.addr=0x0e78, .value=0xe4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01D2) {
    const struct CPU_State initial_cpu = {.pc=0xc4ce, .a=0xf3, .x=0xb6, .y=0x2e, .sp=0xd0, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xc4ce, .value=0xb0}, {.addr=0xc4cf, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0xc54f, .a=0xf3, .x=0xb6, .y=0x2e, .sp=0xd0, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xc4ce, .value=0xb0}, {.addr=0xc4cf, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0xc4ce, .value=0xb0, .type=IO_READ},
        {.addr=0xc4cf, .value=0x7f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01D3) {
    const struct CPU_State initial_cpu = {.pc=0x2653, .a=0xed, .x=0x32, .y=0xe2, .sp=0x3e, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x2653, .value=0xb0}, {.addr=0x2654, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0x2655, .a=0xed, .x=0x32, .y=0xe2, .sp=0x3e, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x2653, .value=0xb0}, {.addr=0x2654, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0x2653, .value=0xb0, .type=IO_READ},
        {.addr=0x2654, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01D4) {
    const struct CPU_State initial_cpu = {.pc=0xdfd7, .a=0xb2, .x=0x84, .y=0x3f, .sp=0x98, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xdfd7, .value=0xb0}, {.addr=0xdfd8, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0xdfd9, .a=0xb2, .x=0x84, .y=0x3f, .sp=0x98, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xdfd7, .value=0xb0}, {.addr=0xdfd8, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0xdfd7, .value=0xb0, .type=IO_READ},
        {.addr=0xdfd8, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01D5) {
    const struct CPU_State initial_cpu = {.pc=0x37c3, .a=0xc2, .x=0x6b, .y=0x2b, .sp=0x90, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x37c3, .value=0xb0}, {.addr=0x37c4, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0x37c5, .a=0xc2, .x=0x6b, .y=0x2b, .sp=0x90, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x37c3, .value=0xb0}, {.addr=0x37c4, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0x37c3, .value=0xb0, .type=IO_READ},
        {.addr=0x37c4, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01D6) {
    const struct CPU_State initial_cpu = {.pc=0xb9e0, .a=0xc6, .x=0x80, .y=0x4a, .sp=0xea, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xb9e0, .value=0xb0}, {.addr=0xb9e1, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0xb9e2, .a=0xc6, .x=0x80, .y=0x4a, .sp=0xea, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xb9e0, .value=0xb0}, {.addr=0xb9e1, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0xb9e0, .value=0xb0, .type=IO_READ},
        {.addr=0xb9e1, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01D7) {
    const struct CPU_State initial_cpu = {.pc=0x81f4, .a=0x45, .x=0x6b, .y=0x1b, .sp=0x71, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x81f4, .value=0xb0}, {.addr=0x81f5, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0x81cc, .a=0x45, .x=0x6b, .y=0x1b, .sp=0x71, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x81f4, .value=0xb0}, {.addr=0x81f5, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0x81f4, .value=0xb0, .type=IO_READ},
        {.addr=0x81f5, .value=0xd6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01D8) {
    const struct CPU_State initial_cpu = {.pc=0x3b8e, .a=0xb7, .x=0x51, .y=0x35, .sp=0x79, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x3b8e, .value=0xb0}, {.addr=0x3b8f, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x3b90, .a=0xb7, .x=0x51, .y=0x35, .sp=0x79, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x3b8e, .value=0xb0}, {.addr=0x3b8f, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x3b8e, .value=0xb0, .type=IO_READ},
        {.addr=0x3b8f, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01D9) {
    const struct CPU_State initial_cpu = {.pc=0xeaf6, .a=0x47, .x=0x38, .y=0x96, .sp=0x0f, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xeaf6, .value=0xb0}, {.addr=0xeaf7, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0xeb00, .a=0x47, .x=0x38, .y=0x96, .sp=0x0f, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0xeaf6, .value=0xb0}, {.addr=0xeaf7, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0xeaf6, .value=0xb0, .type=IO_READ},
        {.addr=0xeaf7, .value=0x08, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01DA) {
    const struct CPU_State initial_cpu = {.pc=0x342a, .a=0x1e, .x=0x0c, .y=0x3f, .sp=0xdc, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x342a, .value=0xb0}, {.addr=0x342b, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0x342c, .a=0x1e, .x=0x0c, .y=0x3f, .sp=0xdc, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x342a, .value=0xb0}, {.addr=0x342b, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0x342a, .value=0xb0, .type=IO_READ},
        {.addr=0x342b, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01DB) {
    const struct CPU_State initial_cpu = {.pc=0x3c1d, .a=0x7c, .x=0xf6, .y=0x40, .sp=0xf6, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x3c1d, .value=0xb0}, {.addr=0x3c1e, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0x3c30, .a=0x7c, .x=0xf6, .y=0x40, .sp=0xf6, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x3c1d, .value=0xb0}, {.addr=0x3c1e, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0x3c1d, .value=0xb0, .type=IO_READ},
        {.addr=0x3c1e, .value=0x11, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01DC) {
    const struct CPU_State initial_cpu = {.pc=0x0c28, .a=0x37, .x=0xc7, .y=0x17, .sp=0x80, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x0c28, .value=0xb0}, {.addr=0x0c29, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x0c2a, .a=0x37, .x=0xc7, .y=0x17, .sp=0x80, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x0c28, .value=0xb0}, {.addr=0x0c29, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x0c28, .value=0xb0, .type=IO_READ},
        {.addr=0x0c29, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01DD) {
    const struct CPU_State initial_cpu = {.pc=0xe8b9, .a=0x5c, .x=0xc7, .y=0x8d, .sp=0x05, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xe8b9, .value=0xb0}, {.addr=0xe8ba, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xe8bb, .a=0x5c, .x=0xc7, .y=0x8d, .sp=0x05, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xe8b9, .value=0xb0}, {.addr=0xe8ba, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xe8b9, .value=0xb0, .type=IO_READ},
        {.addr=0xe8ba, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01DE) {
    const struct CPU_State initial_cpu = {.pc=0x455b, .a=0x1b, .x=0xdd, .y=0xac, .sp=0xff, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x455b, .value=0xb0}, {.addr=0x455c, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x455d, .a=0x1b, .x=0xdd, .y=0xac, .sp=0xff, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x455b, .value=0xb0}, {.addr=0x455c, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x455b, .value=0xb0, .type=IO_READ},
        {.addr=0x455c, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01DF) {
    const struct CPU_State initial_cpu = {.pc=0x42b4, .a=0x7d, .x=0x06, .y=0xb3, .sp=0xe2, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x42b4, .value=0xb0}, {.addr=0x42b5, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0x42bf, .a=0x7d, .x=0x06, .y=0xb3, .sp=0xe2, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x42b4, .value=0xb0}, {.addr=0x42b5, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0x42b4, .value=0xb0, .type=IO_READ},
        {.addr=0x42b5, .value=0x09, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01E0) {
    const struct CPU_State initial_cpu = {.pc=0x4cee, .a=0x06, .x=0xc8, .y=0x81, .sp=0x6e, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x4cee, .value=0xb0}, {.addr=0x4cef, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0x4cf0, .a=0x06, .x=0xc8, .y=0x81, .sp=0x6e, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x4cee, .value=0xb0}, {.addr=0x4cef, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0x4cee, .value=0xb0, .type=IO_READ},
        {.addr=0x4cef, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01E1) {
    const struct CPU_State initial_cpu = {.pc=0xa658, .a=0x47, .x=0x75, .y=0x71, .sp=0x56, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xa658, .value=0xb0}, {.addr=0xa659, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0xa634, .a=0x47, .x=0x75, .y=0x71, .sp=0x56, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0xa658, .value=0xb0}, {.addr=0xa659, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0xa658, .value=0xb0, .type=IO_READ},
        {.addr=0xa659, .value=0xda, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01E2) {
    const struct CPU_State initial_cpu = {.pc=0xb33e, .a=0xfa, .x=0xb8, .y=0x35, .sp=0xdd, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xb33e, .value=0xb0}, {.addr=0xb33f, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0xb322, .a=0xfa, .x=0xb8, .y=0x35, .sp=0xdd, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xb33e, .value=0xb0}, {.addr=0xb33f, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0xb33e, .value=0xb0, .type=IO_READ},
        {.addr=0xb33f, .value=0xe2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01E3) {
    const struct CPU_State initial_cpu = {.pc=0x5b03, .a=0xde, .x=0x8f, .y=0x97, .sp=0xed, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x5b03, .value=0xb0}, {.addr=0x5b04, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0x5b05, .a=0xde, .x=0x8f, .y=0x97, .sp=0xed, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x5b03, .value=0xb0}, {.addr=0x5b04, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0x5b03, .value=0xb0, .type=IO_READ},
        {.addr=0x5b04, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01E4) {
    const struct CPU_State initial_cpu = {.pc=0xaa2e, .a=0x67, .x=0xa8, .y=0xa8, .sp=0xf3, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xaa2e, .value=0xb0}, {.addr=0xaa2f, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xaa30, .a=0x67, .x=0xa8, .y=0xa8, .sp=0xf3, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0xaa2e, .value=0xb0}, {.addr=0xaa2f, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xaa2e, .value=0xb0, .type=IO_READ},
        {.addr=0xaa2f, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01E5) {
    const struct CPU_State initial_cpu = {.pc=0xe512, .a=0x42, .x=0xa9, .y=0x48, .sp=0x03, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xe512, .value=0xb0}, {.addr=0xe513, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0xe514, .a=0x42, .x=0xa9, .y=0x48, .sp=0x03, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xe512, .value=0xb0}, {.addr=0xe513, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0xe512, .value=0xb0, .type=IO_READ},
        {.addr=0xe513, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01E6) {
    const struct CPU_State initial_cpu = {.pc=0x37c4, .a=0x31, .x=0x55, .y=0xc0, .sp=0xa5, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x37c4, .value=0xb0}, {.addr=0x37c5, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0x37c6, .a=0x31, .x=0x55, .y=0xc0, .sp=0xa5, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x37c4, .value=0xb0}, {.addr=0x37c5, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0x37c4, .value=0xb0, .type=IO_READ},
        {.addr=0x37c5, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01E7) {
    const struct CPU_State initial_cpu = {.pc=0x3169, .a=0x8e, .x=0x3e, .y=0x4f, .sp=0x95, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x3169, .value=0xb0}, {.addr=0x316a, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0x311e, .a=0x8e, .x=0x3e, .y=0x4f, .sp=0x95, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x3169, .value=0xb0}, {.addr=0x316a, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0x3169, .value=0xb0, .type=IO_READ},
        {.addr=0x316a, .value=0xb3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01E8) {
    const struct CPU_State initial_cpu = {.pc=0x86ba, .a=0x61, .x=0x3a, .y=0xa4, .sp=0x1e, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x86ba, .value=0xb0}, {.addr=0x86bb, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x86bc, .a=0x61, .x=0x3a, .y=0xa4, .sp=0x1e, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x86ba, .value=0xb0}, {.addr=0x86bb, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x86ba, .value=0xb0, .type=IO_READ},
        {.addr=0x86bb, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01E9) {
    const struct CPU_State initial_cpu = {.pc=0xe280, .a=0xf9, .x=0x0d, .y=0xf7, .sp=0xc6, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xe280, .value=0xb0}, {.addr=0xe281, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0xe282, .a=0xf9, .x=0x0d, .y=0xf7, .sp=0xc6, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xe280, .value=0xb0}, {.addr=0xe281, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0xe280, .value=0xb0, .type=IO_READ},
        {.addr=0xe281, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01EA) {
    const struct CPU_State initial_cpu = {.pc=0xd68b, .a=0x7c, .x=0x1e, .y=0x6e, .sp=0xd1, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xd68b, .value=0xb0}, {.addr=0xd68c, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0xd68d, .a=0x7c, .x=0x1e, .y=0x6e, .sp=0xd1, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xd68b, .value=0xb0}, {.addr=0xd68c, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0xd68b, .value=0xb0, .type=IO_READ},
        {.addr=0xd68c, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01EB) {
    const struct CPU_State initial_cpu = {.pc=0xa53a, .a=0x2d, .x=0x7c, .y=0x85, .sp=0x44, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xa53a, .value=0xb0}, {.addr=0xa53b, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0xa500, .a=0x2d, .x=0x7c, .y=0x85, .sp=0x44, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0xa53a, .value=0xb0}, {.addr=0xa53b, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0xa53a, .value=0xb0, .type=IO_READ},
        {.addr=0xa53b, .value=0xc4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01EC) {
    const struct CPU_State initial_cpu = {.pc=0x78d8, .a=0xc8, .x=0x4c, .y=0x4b, .sp=0x28, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x78d8, .value=0xb0}, {.addr=0x78d9, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0x78da, .a=0xc8, .x=0x4c, .y=0x4b, .sp=0x28, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x78d8, .value=0xb0}, {.addr=0x78d9, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0x78d8, .value=0xb0, .type=IO_READ},
        {.addr=0x78d9, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01ED) {
    const struct CPU_State initial_cpu = {.pc=0x54c4, .a=0x75, .x=0x23, .y=0xf9, .sp=0x62, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x54c4, .value=0xb0}, {.addr=0x54c5, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0x54c6, .a=0x75, .x=0x23, .y=0xf9, .sp=0x62, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x54c4, .value=0xb0}, {.addr=0x54c5, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0x54c4, .value=0xb0, .type=IO_READ},
        {.addr=0x54c5, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01EE) {
    const struct CPU_State initial_cpu = {.pc=0x5f74, .a=0x8f, .x=0xfb, .y=0x31, .sp=0x82, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x5f74, .value=0xb0}, {.addr=0x5f75, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0x5f1d, .a=0x8f, .x=0xfb, .y=0x31, .sp=0x82, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x5f74, .value=0xb0}, {.addr=0x5f75, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0x5f74, .value=0xb0, .type=IO_READ},
        {.addr=0x5f75, .value=0xa7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01EF) {
    const struct CPU_State initial_cpu = {.pc=0xe1e3, .a=0x4d, .x=0xdb, .y=0x95, .sp=0x35, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xe1e3, .value=0xb0}, {.addr=0xe1e4, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xe1e2, .a=0x4d, .x=0xdb, .y=0x95, .sp=0x35, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0xe1e3, .value=0xb0}, {.addr=0xe1e4, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xe1e3, .value=0xb0, .type=IO_READ},
        {.addr=0xe1e4, .value=0xfd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01F0) {
    const struct CPU_State initial_cpu = {.pc=0x0714, .a=0x04, .x=0x9c, .y=0x82, .sp=0xe6, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x0714, .value=0xb0}, {.addr=0x0715, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0x06c2, .a=0x04, .x=0x9c, .y=0x82, .sp=0xe6, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x0714, .value=0xb0}, {.addr=0x0715, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0x0714, .value=0xb0, .type=IO_READ},
        {.addr=0x0715, .value=0xac, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01F1) {
    const struct CPU_State initial_cpu = {.pc=0x628a, .a=0xc8, .x=0x4a, .y=0x50, .sp=0x34, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x628a, .value=0xb0}, {.addr=0x628b, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0x628c, .a=0xc8, .x=0x4a, .y=0x50, .sp=0x34, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x628a, .value=0xb0}, {.addr=0x628b, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0x628a, .value=0xb0, .type=IO_READ},
        {.addr=0x628b, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01F2) {
    const struct CPU_State initial_cpu = {.pc=0xcf02, .a=0xd4, .x=0x82, .y=0x0c, .sp=0x17, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xcf02, .value=0xb0}, {.addr=0xcf03, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0xcf04, .a=0xd4, .x=0x82, .y=0x0c, .sp=0x17, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0xcf02, .value=0xb0}, {.addr=0xcf03, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0xcf02, .value=0xb0, .type=IO_READ},
        {.addr=0xcf03, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01F3) {
    const struct CPU_State initial_cpu = {.pc=0xa7df, .a=0x79, .x=0x06, .y=0x42, .sp=0xcc, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xa7df, .value=0xb0}, {.addr=0xa7e0, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0xa7e1, .a=0x79, .x=0x06, .y=0x42, .sp=0xcc, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xa7df, .value=0xb0}, {.addr=0xa7e0, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0xa7df, .value=0xb0, .type=IO_READ},
        {.addr=0xa7e0, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01F4) {
    const struct CPU_State initial_cpu = {.pc=0x10bb, .a=0xd4, .x=0x04, .y=0xe8, .sp=0xba, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x10bb, .value=0xb0}, {.addr=0x10bc, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x10ed, .a=0xd4, .x=0x04, .y=0xe8, .sp=0xba, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x10bb, .value=0xb0}, {.addr=0x10bc, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x10bb, .value=0xb0, .type=IO_READ},
        {.addr=0x10bc, .value=0x30, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01F5) {
    const struct CPU_State initial_cpu = {.pc=0x6c45, .a=0x62, .x=0x7c, .y=0x35, .sp=0x18, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x6c45, .value=0xb0}, {.addr=0x6c46, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x6c47, .a=0x62, .x=0x7c, .y=0x35, .sp=0x18, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x6c45, .value=0xb0}, {.addr=0x6c46, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x6c45, .value=0xb0, .type=IO_READ},
        {.addr=0x6c46, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01F6) {
    const struct CPU_State initial_cpu = {.pc=0x510c, .a=0x84, .x=0x14, .y=0xe2, .sp=0xc7, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x510c, .value=0xb0}, {.addr=0x510d, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0x510e, .a=0x84, .x=0x14, .y=0xe2, .sp=0xc7, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x510c, .value=0xb0}, {.addr=0x510d, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0x510c, .value=0xb0, .type=IO_READ},
        {.addr=0x510d, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01F7) {
    const struct CPU_State initial_cpu = {.pc=0xf52f, .a=0xae, .x=0x1f, .y=0x39, .sp=0x2f, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xf52f, .value=0xb0}, {.addr=0xf530, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0xf530, .a=0xae, .x=0x1f, .y=0x39, .sp=0x2f, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xf52f, .value=0xb0}, {.addr=0xf530, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0xf52f, .value=0xb0, .type=IO_READ},
        {.addr=0xf530, .value=0xff, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01F8) {
    const struct CPU_State initial_cpu = {.pc=0xd769, .a=0xe8, .x=0x4c, .y=0x42, .sp=0xfb, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xd769, .value=0xb0}, {.addr=0xd76a, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0xd76b, .a=0xe8, .x=0x4c, .y=0x42, .sp=0xfb, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0xd769, .value=0xb0}, {.addr=0xd76a, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0xd769, .value=0xb0, .type=IO_READ},
        {.addr=0xd76a, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01F9) {
    const struct CPU_State initial_cpu = {.pc=0xfebf, .a=0x9d, .x=0x7e, .y=0xff, .sp=0xfe, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xfebf, .value=0xb0}, {.addr=0xfec0, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xfec1, .a=0x9d, .x=0x7e, .y=0xff, .sp=0xfe, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0xfebf, .value=0xb0}, {.addr=0xfec0, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xfebf, .value=0xb0, .type=IO_READ},
        {.addr=0xfec0, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01FA) {
    const struct CPU_State initial_cpu = {.pc=0x66da, .a=0x16, .x=0x3d, .y=0x64, .sp=0xa4, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x66da, .value=0xb0}, {.addr=0x66db, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0x66dc, .a=0x16, .x=0x3d, .y=0x64, .sp=0xa4, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x66da, .value=0xb0}, {.addr=0x66db, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0x66da, .value=0xb0, .type=IO_READ},
        {.addr=0x66db, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01FB) {
    const struct CPU_State initial_cpu = {.pc=0x5b49, .a=0x30, .x=0x81, .y=0x3f, .sp=0x4d, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x5b49, .value=0xb0}, {.addr=0x5b4a, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x5b4b, .a=0x30, .x=0x81, .y=0x3f, .sp=0x4d, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x5b49, .value=0xb0}, {.addr=0x5b4a, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x5b49, .value=0xb0, .type=IO_READ},
        {.addr=0x5b4a, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01FC) {
    const struct CPU_State initial_cpu = {.pc=0xed5b, .a=0x26, .x=0xf9, .y=0x47, .sp=0x0b, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xed5b, .value=0xb0}, {.addr=0xed5c, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0xed80, .a=0x26, .x=0xf9, .y=0x47, .sp=0x0b, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0xed5b, .value=0xb0}, {.addr=0xed5c, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0xed5b, .value=0xb0, .type=IO_READ},
        {.addr=0xed5c, .value=0x23, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01FD) {
    const struct CPU_State initial_cpu = {.pc=0x3765, .a=0x6d, .x=0xfd, .y=0x20, .sp=0x94, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x3765, .value=0xb0}, {.addr=0x3766, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x3724, .a=0x6d, .x=0xfd, .y=0x20, .sp=0x94, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x3765, .value=0xb0}, {.addr=0x3766, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x3765, .value=0xb0, .type=IO_READ},
        {.addr=0x3766, .value=0xbd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01FE) {
    const struct CPU_State initial_cpu = {.pc=0x7124, .a=0x6d, .x=0xc0, .y=0x50, .sp=0xbd, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x7124, .value=0xb0}, {.addr=0x7125, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0x7126, .a=0x6d, .x=0xc0, .y=0x50, .sp=0xbd, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x7124, .value=0xb0}, {.addr=0x7125, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0x7124, .value=0xb0, .type=IO_READ},
        {.addr=0x7125, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_01FF) {
    const struct CPU_State initial_cpu = {.pc=0x7aae, .a=0x67, .x=0xe9, .y=0x21, .sp=0xf9, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x7aae, .value=0xb0}, {.addr=0x7aaf, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0x7b22, .a=0x67, .x=0xe9, .y=0x21, .sp=0xf9, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x7aae, .value=0xb0}, {.addr=0x7aaf, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0x7aae, .value=0xb0, .type=IO_READ},
        {.addr=0x7aaf, .value=0x72, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0200) {
    const struct CPU_State initial_cpu = {.pc=0xcc0c, .a=0x83, .x=0xa7, .y=0x4c, .sp=0xd8, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xcc0c, .value=0xb0}, {.addr=0xcc0d, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0xcc44, .a=0x83, .x=0xa7, .y=0x4c, .sp=0xd8, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0xcc0c, .value=0xb0}, {.addr=0xcc0d, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0xcc0c, .value=0xb0, .type=IO_READ},
        {.addr=0xcc0d, .value=0x36, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0201) {
    const struct CPU_State initial_cpu = {.pc=0xb27d, .a=0xbc, .x=0x9b, .y=0x66, .sp=0x1f, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xb27d, .value=0xb0}, {.addr=0xb27e, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0xb2b1, .a=0xbc, .x=0x9b, .y=0x66, .sp=0x1f, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xb27d, .value=0xb0}, {.addr=0xb27e, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0xb27d, .value=0xb0, .type=IO_READ},
        {.addr=0xb27e, .value=0x32, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0202) {
    const struct CPU_State initial_cpu = {.pc=0x07d8, .a=0x87, .x=0x8b, .y=0x28, .sp=0x24, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x07d8, .value=0xb0}, {.addr=0x07d9, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x077a, .a=0x87, .x=0x8b, .y=0x28, .sp=0x24, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x07d8, .value=0xb0}, {.addr=0x07d9, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x07d8, .value=0xb0, .type=IO_READ},
        {.addr=0x07d9, .value=0xa0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0203) {
    const struct CPU_State initial_cpu = {.pc=0x6e7d, .a=0x17, .x=0xeb, .y=0xd2, .sp=0x14, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x6e7d, .value=0xb0}, {.addr=0x6e7e, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x6e6a, .a=0x17, .x=0xeb, .y=0xd2, .sp=0x14, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x6e7d, .value=0xb0}, {.addr=0x6e7e, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x6e7d, .value=0xb0, .type=IO_READ},
        {.addr=0x6e7e, .value=0xeb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0204) {
    const struct CPU_State initial_cpu = {.pc=0xfce8, .a=0x83, .x=0x16, .y=0x5a, .sp=0xa9, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xfce8, .value=0xb0}, {.addr=0xfce9, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xfcea, .a=0x83, .x=0x16, .y=0x5a, .sp=0xa9, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xfce8, .value=0xb0}, {.addr=0xfce9, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xfce8, .value=0xb0, .type=IO_READ},
        {.addr=0xfce9, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0205) {
    const struct CPU_State initial_cpu = {.pc=0x072e, .a=0xc2, .x=0x2a, .y=0xc5, .sp=0xa5, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x072e, .value=0xb0}, {.addr=0x072f, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x0721, .a=0xc2, .x=0x2a, .y=0xc5, .sp=0xa5, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x072e, .value=0xb0}, {.addr=0x072f, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x072e, .value=0xb0, .type=IO_READ},
        {.addr=0x072f, .value=0xf1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0206) {
    const struct CPU_State initial_cpu = {.pc=0x1ff2, .a=0x54, .x=0xfc, .y=0xd3, .sp=0x2c, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x1ff2, .value=0xb0}, {.addr=0x1ff3, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x1ff4, .a=0x54, .x=0xfc, .y=0xd3, .sp=0x2c, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x1ff2, .value=0xb0}, {.addr=0x1ff3, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x1ff2, .value=0xb0, .type=IO_READ},
        {.addr=0x1ff3, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0207) {
    const struct CPU_State initial_cpu = {.pc=0xb5bb, .a=0xf0, .x=0x5e, .y=0x38, .sp=0xbf, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xb5bb, .value=0xb0}, {.addr=0xb5bc, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0xb5bd, .a=0xf0, .x=0x5e, .y=0x38, .sp=0xbf, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xb5bb, .value=0xb0}, {.addr=0xb5bc, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0xb5bb, .value=0xb0, .type=IO_READ},
        {.addr=0xb5bc, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0208) {
    const struct CPU_State initial_cpu = {.pc=0x6a53, .a=0x32, .x=0x11, .y=0xc8, .sp=0x13, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x6a53, .value=0xb0}, {.addr=0x6a54, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0x6a55, .a=0x32, .x=0x11, .y=0xc8, .sp=0x13, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x6a53, .value=0xb0}, {.addr=0x6a54, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0x6a53, .value=0xb0, .type=IO_READ},
        {.addr=0x6a54, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0209) {
    const struct CPU_State initial_cpu = {.pc=0x8de0, .a=0x06, .x=0x42, .y=0x0d, .sp=0xf7, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x8de0, .value=0xb0}, {.addr=0x8de1, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x8de2, .a=0x06, .x=0x42, .y=0x0d, .sp=0xf7, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x8de0, .value=0xb0}, {.addr=0x8de1, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x8de0, .value=0xb0, .type=IO_READ},
        {.addr=0x8de1, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_020A) {
    const struct CPU_State initial_cpu = {.pc=0xaad2, .a=0x66, .x=0x3d, .y=0x2f, .sp=0x7f, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xaad2, .value=0xb0}, {.addr=0xaad3, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0xaad4, .a=0x66, .x=0x3d, .y=0x2f, .sp=0x7f, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0xaad2, .value=0xb0}, {.addr=0xaad3, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0xaad2, .value=0xb0, .type=IO_READ},
        {.addr=0xaad3, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_020B) {
    const struct CPU_State initial_cpu = {.pc=0x4aec, .a=0x72, .x=0x9e, .y=0x67, .sp=0xda, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x4aec, .value=0xb0}, {.addr=0x4aed, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x4b5b, .a=0x72, .x=0x9e, .y=0x67, .sp=0xda, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x4aec, .value=0xb0}, {.addr=0x4aed, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x4aec, .value=0xb0, .type=IO_READ},
        {.addr=0x4aed, .value=0x6d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_020C) {
    const struct CPU_State initial_cpu = {.pc=0x844c, .a=0x5a, .x=0xf8, .y=0xc8, .sp=0x4a, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x844c, .value=0xb0}, {.addr=0x844d, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x844e, .a=0x5a, .x=0xf8, .y=0xc8, .sp=0x4a, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x844c, .value=0xb0}, {.addr=0x844d, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x844c, .value=0xb0, .type=IO_READ},
        {.addr=0x844d, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_020D) {
    const struct CPU_State initial_cpu = {.pc=0x6c9d, .a=0xf2, .x=0x97, .y=0x80, .sp=0x4a, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x6c9d, .value=0xb0}, {.addr=0x6c9e, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0x6c9f, .a=0xf2, .x=0x97, .y=0x80, .sp=0x4a, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x6c9d, .value=0xb0}, {.addr=0x6c9e, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0x6c9d, .value=0xb0, .type=IO_READ},
        {.addr=0x6c9e, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_020E) {
    const struct CPU_State initial_cpu = {.pc=0xdcec, .a=0x1e, .x=0xcd, .y=0x56, .sp=0x41, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xdcec, .value=0xb0}, {.addr=0xdced, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0xdcee, .a=0x1e, .x=0xcd, .y=0x56, .sp=0x41, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0xdcec, .value=0xb0}, {.addr=0xdced, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0xdcec, .value=0xb0, .type=IO_READ},
        {.addr=0xdced, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_020F) {
    const struct CPU_State initial_cpu = {.pc=0x9a2a, .a=0xb0, .x=0xf4, .y=0x58, .sp=0xfa, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x9a2a, .value=0xb0}, {.addr=0x9a2b, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0x9a2c, .a=0xb0, .x=0xf4, .y=0x58, .sp=0xfa, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x9a2a, .value=0xb0}, {.addr=0x9a2b, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0x9a2a, .value=0xb0, .type=IO_READ},
        {.addr=0x9a2b, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0210) {
    const struct CPU_State initial_cpu = {.pc=0x8aa0, .a=0xa7, .x=0x64, .y=0x32, .sp=0xd0, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x8aa0, .value=0xb0}, {.addr=0x8aa1, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0x8aa2, .a=0xa7, .x=0x64, .y=0x32, .sp=0xd0, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x8aa0, .value=0xb0}, {.addr=0x8aa1, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0x8aa0, .value=0xb0, .type=IO_READ},
        {.addr=0x8aa1, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0211) {
    const struct CPU_State initial_cpu = {.pc=0xf8e4, .a=0x98, .x=0x72, .y=0x2f, .sp=0x25, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xf8e4, .value=0xb0}, {.addr=0xf8e5, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0xf8ad, .a=0x98, .x=0x72, .y=0x2f, .sp=0x25, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xf8e4, .value=0xb0}, {.addr=0xf8e5, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0xf8e4, .value=0xb0, .type=IO_READ},
        {.addr=0xf8e5, .value=0xc7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0212) {
    const struct CPU_State initial_cpu = {.pc=0xb57a, .a=0xd8, .x=0x9f, .y=0x09, .sp=0xa8, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xb57a, .value=0xb0}, {.addr=0xb57b, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0xb57c, .a=0xd8, .x=0x9f, .y=0x09, .sp=0xa8, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0xb57a, .value=0xb0}, {.addr=0xb57b, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0xb57a, .value=0xb0, .type=IO_READ},
        {.addr=0xb57b, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0213) {
    const struct CPU_State initial_cpu = {.pc=0xf633, .a=0x29, .x=0x48, .y=0xec, .sp=0x74, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xf633, .value=0xb0}, {.addr=0xf634, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0xf635, .a=0x29, .x=0x48, .y=0xec, .sp=0x74, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xf633, .value=0xb0}, {.addr=0xf634, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0xf633, .value=0xb0, .type=IO_READ},
        {.addr=0xf634, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0214) {
    const struct CPU_State initial_cpu = {.pc=0x42f9, .a=0x39, .x=0xbc, .y=0x0b, .sp=0x55, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x42f9, .value=0xb0}, {.addr=0x42fa, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0x42fb, .a=0x39, .x=0xbc, .y=0x0b, .sp=0x55, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x42f9, .value=0xb0}, {.addr=0x42fa, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0x42f9, .value=0xb0, .type=IO_READ},
        {.addr=0x42fa, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0215) {
    const struct CPU_State initial_cpu = {.pc=0x9970, .a=0xba, .x=0x8f, .y=0xeb, .sp=0x97, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x9970, .value=0xb0}, {.addr=0x9971, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x9940, .a=0xba, .x=0x8f, .y=0xeb, .sp=0x97, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x9970, .value=0xb0}, {.addr=0x9971, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x9970, .value=0xb0, .type=IO_READ},
        {.addr=0x9971, .value=0xce, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0216) {
    const struct CPU_State initial_cpu = {.pc=0xec1d, .a=0xa1, .x=0xc3, .y=0x9d, .sp=0x77, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xec1d, .value=0xb0}, {.addr=0xec1e, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0xec1f, .a=0xa1, .x=0xc3, .y=0x9d, .sp=0x77, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xec1d, .value=0xb0}, {.addr=0xec1e, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0xec1d, .value=0xb0, .type=IO_READ},
        {.addr=0xec1e, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0217) {
    const struct CPU_State initial_cpu = {.pc=0x5119, .a=0x09, .x=0x12, .y=0xe1, .sp=0xa6, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x5119, .value=0xb0}, {.addr=0x511a, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0x5107, .a=0x09, .x=0x12, .y=0xe1, .sp=0xa6, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x5119, .value=0xb0}, {.addr=0x511a, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0x5119, .value=0xb0, .type=IO_READ},
        {.addr=0x511a, .value=0xec, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0218) {
    const struct CPU_State initial_cpu = {.pc=0x4ecf, .a=0x16, .x=0x11, .y=0x47, .sp=0xfa, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x4ecf, .value=0xb0}, {.addr=0x4ed0, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x4ed1, .a=0x16, .x=0x11, .y=0x47, .sp=0xfa, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x4ecf, .value=0xb0}, {.addr=0x4ed0, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x4ecf, .value=0xb0, .type=IO_READ},
        {.addr=0x4ed0, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0219) {
    const struct CPU_State initial_cpu = {.pc=0x09a8, .a=0x11, .x=0xe3, .y=0xe8, .sp=0x21, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x09a8, .value=0xb0}, {.addr=0x09a9, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0x09aa, .a=0x11, .x=0xe3, .y=0xe8, .sp=0x21, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x09a8, .value=0xb0}, {.addr=0x09a9, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0x09a8, .value=0xb0, .type=IO_READ},
        {.addr=0x09a9, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_021A) {
    const struct CPU_State initial_cpu = {.pc=0x2f82, .a=0x57, .x=0x19, .y=0x7b, .sp=0xbc, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x2f82, .value=0xb0}, {.addr=0x2f83, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0x2f84, .a=0x57, .x=0x19, .y=0x7b, .sp=0xbc, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x2f82, .value=0xb0}, {.addr=0x2f83, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0x2f82, .value=0xb0, .type=IO_READ},
        {.addr=0x2f83, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_021B) {
    const struct CPU_State initial_cpu = {.pc=0xf51f, .a=0xd2, .x=0xc6, .y=0x66, .sp=0x1d, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xf51f, .value=0xb0}, {.addr=0xf520, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0xf521, .a=0xd2, .x=0xc6, .y=0x66, .sp=0x1d, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xf51f, .value=0xb0}, {.addr=0xf520, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0xf51f, .value=0xb0, .type=IO_READ},
        {.addr=0xf520, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_021C) {
    const struct CPU_State initial_cpu = {.pc=0xc6f0, .a=0x50, .x=0xd3, .y=0x08, .sp=0x24, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xc6f0, .value=0xb0}, {.addr=0xc6f1, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0xc6f2, .a=0x50, .x=0xd3, .y=0x08, .sp=0x24, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0xc6f0, .value=0xb0}, {.addr=0xc6f1, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0xc6f0, .value=0xb0, .type=IO_READ},
        {.addr=0xc6f1, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_021D) {
    const struct CPU_State initial_cpu = {.pc=0x4cd5, .a=0x7e, .x=0xe3, .y=0x10, .sp=0xbe, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x4cd5, .value=0xb0}, {.addr=0x4cd6, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0x4cd7, .a=0x7e, .x=0xe3, .y=0x10, .sp=0xbe, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x4cd5, .value=0xb0}, {.addr=0x4cd6, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0x4cd5, .value=0xb0, .type=IO_READ},
        {.addr=0x4cd6, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_021E) {
    const struct CPU_State initial_cpu = {.pc=0x6721, .a=0x7d, .x=0x6b, .y=0x82, .sp=0x78, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x6721, .value=0xb0}, {.addr=0x6722, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x6723, .a=0x7d, .x=0x6b, .y=0x82, .sp=0x78, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x6721, .value=0xb0}, {.addr=0x6722, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x6721, .value=0xb0, .type=IO_READ},
        {.addr=0x6722, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_021F) {
    const struct CPU_State initial_cpu = {.pc=0x8dd7, .a=0x6b, .x=0xde, .y=0x79, .sp=0x90, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x8dd7, .value=0xb0}, {.addr=0x8dd8, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0x8dd9, .a=0x6b, .x=0xde, .y=0x79, .sp=0x90, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x8dd7, .value=0xb0}, {.addr=0x8dd8, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0x8dd7, .value=0xb0, .type=IO_READ},
        {.addr=0x8dd8, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0220) {
    const struct CPU_State initial_cpu = {.pc=0xfc55, .a=0xbb, .x=0x6a, .y=0xfd, .sp=0xfa, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xfc55, .value=0xb0}, {.addr=0xfc56, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0xfc57, .a=0xbb, .x=0x6a, .y=0xfd, .sp=0xfa, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0xfc55, .value=0xb0}, {.addr=0xfc56, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0xfc55, .value=0xb0, .type=IO_READ},
        {.addr=0xfc56, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0221) {
    const struct CPU_State initial_cpu = {.pc=0x27f1, .a=0xd2, .x=0x7f, .y=0x89, .sp=0x17, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x27f1, .value=0xb0}, {.addr=0x27f2, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x281b, .a=0xd2, .x=0x7f, .y=0x89, .sp=0x17, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x27f1, .value=0xb0}, {.addr=0x27f2, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x27f1, .value=0xb0, .type=IO_READ},
        {.addr=0x27f2, .value=0x28, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0222) {
    const struct CPU_State initial_cpu = {.pc=0xb2a2, .a=0x11, .x=0x20, .y=0x39, .sp=0xc9, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xb2a2, .value=0xb0}, {.addr=0xb2a3, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0xb2a4, .a=0x11, .x=0x20, .y=0x39, .sp=0xc9, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0xb2a2, .value=0xb0}, {.addr=0xb2a3, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0xb2a2, .value=0xb0, .type=IO_READ},
        {.addr=0xb2a3, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0223) {
    const struct CPU_State initial_cpu = {.pc=0x2b24, .a=0xf6, .x=0xa6, .y=0x48, .sp=0xea, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x2b24, .value=0xb0}, {.addr=0x2b25, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0x2b98, .a=0xf6, .x=0xa6, .y=0x48, .sp=0xea, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x2b24, .value=0xb0}, {.addr=0x2b25, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0x2b24, .value=0xb0, .type=IO_READ},
        {.addr=0x2b25, .value=0x72, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0224) {
    const struct CPU_State initial_cpu = {.pc=0xf4fe, .a=0x14, .x=0x5e, .y=0x26, .sp=0xc6, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xf4fe, .value=0xb0}, {.addr=0xf4ff, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0xf500, .a=0x14, .x=0x5e, .y=0x26, .sp=0xc6, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0xf4fe, .value=0xb0}, {.addr=0xf4ff, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0xf4fe, .value=0xb0, .type=IO_READ},
        {.addr=0xf4ff, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0225) {
    const struct CPU_State initial_cpu = {.pc=0x2b88, .a=0x64, .x=0x54, .y=0xc2, .sp=0x6c, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x2b88, .value=0xb0}, {.addr=0x2b89, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0x2b5d, .a=0x64, .x=0x54, .y=0xc2, .sp=0x6c, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x2b88, .value=0xb0}, {.addr=0x2b89, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0x2b88, .value=0xb0, .type=IO_READ},
        {.addr=0x2b89, .value=0xd3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0226) {
    const struct CPU_State initial_cpu = {.pc=0xdf06, .a=0xa2, .x=0x4f, .y=0xda, .sp=0xa3, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xdf06, .value=0xb0}, {.addr=0xdf07, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0xdf02, .a=0xa2, .x=0x4f, .y=0xda, .sp=0xa3, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xdf06, .value=0xb0}, {.addr=0xdf07, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0xdf06, .value=0xb0, .type=IO_READ},
        {.addr=0xdf07, .value=0xfa, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0227) {
    const struct CPU_State initial_cpu = {.pc=0xe886, .a=0x9d, .x=0xcf, .y=0xa4, .sp=0x84, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xe886, .value=0xb0}, {.addr=0xe887, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0xe8dc, .a=0x9d, .x=0xcf, .y=0xa4, .sp=0x84, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0xe886, .value=0xb0}, {.addr=0xe887, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0xe886, .value=0xb0, .type=IO_READ},
        {.addr=0xe887, .value=0x54, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0228) {
    const struct CPU_State initial_cpu = {.pc=0xaf8f, .a=0x95, .x=0x8e, .y=0x6d, .sp=0x48, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xaf8f, .value=0xb0}, {.addr=0xaf90, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0xaf38, .a=0x95, .x=0x8e, .y=0x6d, .sp=0x48, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0xaf8f, .value=0xb0}, {.addr=0xaf90, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0xaf8f, .value=0xb0, .type=IO_READ},
        {.addr=0xaf90, .value=0xa7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0229) {
    const struct CPU_State initial_cpu = {.pc=0x8d10, .a=0x3d, .x=0xac, .y=0x05, .sp=0x90, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x8d10, .value=0xb0}, {.addr=0x8d11, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0x8ccc, .a=0x3d, .x=0xac, .y=0x05, .sp=0x90, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x8d10, .value=0xb0}, {.addr=0x8d11, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0x8d10, .value=0xb0, .type=IO_READ},
        {.addr=0x8d11, .value=0xba, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_022A) {
    const struct CPU_State initial_cpu = {.pc=0xe86f, .a=0xa0, .x=0xe0, .y=0x44, .sp=0xe4, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xe86f, .value=0xb0}, {.addr=0xe870, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0xe871, .a=0xa0, .x=0xe0, .y=0x44, .sp=0xe4, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xe86f, .value=0xb0}, {.addr=0xe870, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0xe86f, .value=0xb0, .type=IO_READ},
        {.addr=0xe870, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_022B) {
    const struct CPU_State initial_cpu = {.pc=0xbc6e, .a=0x1c, .x=0x0a, .y=0x68, .sp=0xde, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xbc6e, .value=0xb0}, {.addr=0xbc6f, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0xbce5, .a=0x1c, .x=0x0a, .y=0x68, .sp=0xde, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0xbc6e, .value=0xb0}, {.addr=0xbc6f, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0xbc6e, .value=0xb0, .type=IO_READ},
        {.addr=0xbc6f, .value=0x75, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_022C) {
    const struct CPU_State initial_cpu = {.pc=0xed85, .a=0xa9, .x=0xbd, .y=0x62, .sp=0xf2, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xed85, .value=0xb0}, {.addr=0xed86, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0xedc8, .a=0xa9, .x=0xbd, .y=0x62, .sp=0xf2, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xed85, .value=0xb0}, {.addr=0xed86, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0xed85, .value=0xb0, .type=IO_READ},
        {.addr=0xed86, .value=0x41, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_022D) {
    const struct CPU_State initial_cpu = {.pc=0x4a54, .a=0xf6, .x=0x46, .y=0x00, .sp=0x71, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x4a54, .value=0xb0}, {.addr=0x4a55, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0x4a9e, .a=0xf6, .x=0x46, .y=0x00, .sp=0x71, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x4a54, .value=0xb0}, {.addr=0x4a55, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0x4a54, .value=0xb0, .type=IO_READ},
        {.addr=0x4a55, .value=0x48, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_022E) {
    const struct CPU_State initial_cpu = {.pc=0xabf2, .a=0x03, .x=0x7d, .y=0xb6, .sp=0x30, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xabf2, .value=0xb0}, {.addr=0xabf3, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0xabbc, .a=0x03, .x=0x7d, .y=0xb6, .sp=0x30, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xabf2, .value=0xb0}, {.addr=0xabf3, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0xabf2, .value=0xb0, .type=IO_READ},
        {.addr=0xabf3, .value=0xc8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_022F) {
    const struct CPU_State initial_cpu = {.pc=0x7905, .a=0x5d, .x=0xbc, .y=0x80, .sp=0x32, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x7905, .value=0xb0}, {.addr=0x7906, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0x7968, .a=0x5d, .x=0xbc, .y=0x80, .sp=0x32, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x7905, .value=0xb0}, {.addr=0x7906, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0x7905, .value=0xb0, .type=IO_READ},
        {.addr=0x7906, .value=0x61, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0230) {
    const struct CPU_State initial_cpu = {.pc=0xd372, .a=0x3c, .x=0x56, .y=0x96, .sp=0x88, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xd372, .value=0xb0}, {.addr=0xd373, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0xd374, .a=0x3c, .x=0x56, .y=0x96, .sp=0x88, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0xd372, .value=0xb0}, {.addr=0xd373, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0xd372, .value=0xb0, .type=IO_READ},
        {.addr=0xd373, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0231) {
    const struct CPU_State initial_cpu = {.pc=0x833f, .a=0x54, .x=0xfa, .y=0x8c, .sp=0xed, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x833f, .value=0xb0}, {.addr=0x8340, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x82fe, .a=0x54, .x=0xfa, .y=0x8c, .sp=0xed, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x833f, .value=0xb0}, {.addr=0x8340, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x833f, .value=0xb0, .type=IO_READ},
        {.addr=0x8340, .value=0xbd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0232) {
    const struct CPU_State initial_cpu = {.pc=0xe529, .a=0xb9, .x=0x3a, .y=0x67, .sp=0x44, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xe529, .value=0xb0}, {.addr=0xe52a, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0xe513, .a=0xb9, .x=0x3a, .y=0x67, .sp=0x44, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0xe529, .value=0xb0}, {.addr=0xe52a, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0xe529, .value=0xb0, .type=IO_READ},
        {.addr=0xe52a, .value=0xe8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0233) {
    const struct CPU_State initial_cpu = {.pc=0x76c1, .a=0x9f, .x=0xfe, .y=0x19, .sp=0x35, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x76c1, .value=0xb0}, {.addr=0x76c2, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x76c3, .a=0x9f, .x=0xfe, .y=0x19, .sp=0x35, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x76c1, .value=0xb0}, {.addr=0x76c2, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x76c1, .value=0xb0, .type=IO_READ},
        {.addr=0x76c2, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0234) {
    const struct CPU_State initial_cpu = {.pc=0x5323, .a=0xc3, .x=0xa2, .y=0xf4, .sp=0xe6, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x5323, .value=0xb0}, {.addr=0x5324, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0x5325, .a=0xc3, .x=0xa2, .y=0xf4, .sp=0xe6, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x5323, .value=0xb0}, {.addr=0x5324, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0x5323, .value=0xb0, .type=IO_READ},
        {.addr=0x5324, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0235) {
    const struct CPU_State initial_cpu = {.pc=0x1a06, .a=0x60, .x=0xb8, .y=0x6c, .sp=0xf2, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x1a06, .value=0xb0}, {.addr=0x1a07, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0x1a08, .a=0x60, .x=0xb8, .y=0x6c, .sp=0xf2, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x1a06, .value=0xb0}, {.addr=0x1a07, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0x1a06, .value=0xb0, .type=IO_READ},
        {.addr=0x1a07, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0236) {
    const struct CPU_State initial_cpu = {.pc=0x4867, .a=0xe3, .x=0x37, .y=0x35, .sp=0x53, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x4867, .value=0xb0}, {.addr=0x4868, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0x4869, .a=0xe3, .x=0x37, .y=0x35, .sp=0x53, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x4867, .value=0xb0}, {.addr=0x4868, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0x4867, .value=0xb0, .type=IO_READ},
        {.addr=0x4868, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0237) {
    const struct CPU_State initial_cpu = {.pc=0x3b3c, .a=0xb3, .x=0x29, .y=0x30, .sp=0x6e, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x3b3c, .value=0xb0}, {.addr=0x3b3d, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0x3b2e, .a=0xb3, .x=0x29, .y=0x30, .sp=0x6e, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x3b3c, .value=0xb0}, {.addr=0x3b3d, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0x3b3c, .value=0xb0, .type=IO_READ},
        {.addr=0x3b3d, .value=0xf0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0238) {
    const struct CPU_State initial_cpu = {.pc=0xd395, .a=0x35, .x=0x51, .y=0x6c, .sp=0xde, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xd395, .value=0xb0}, {.addr=0xd396, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0xd3cd, .a=0x35, .x=0x51, .y=0x6c, .sp=0xde, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xd395, .value=0xb0}, {.addr=0xd396, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0xd395, .value=0xb0, .type=IO_READ},
        {.addr=0xd396, .value=0x36, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0239) {
    const struct CPU_State initial_cpu = {.pc=0x5e89, .a=0x6b, .x=0x27, .y=0x70, .sp=0xa7, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x5e89, .value=0xb0}, {.addr=0x5e8a, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0x5e8b, .a=0x6b, .x=0x27, .y=0x70, .sp=0xa7, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x5e89, .value=0xb0}, {.addr=0x5e8a, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0x5e89, .value=0xb0, .type=IO_READ},
        {.addr=0x5e8a, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_023A) {
    const struct CPU_State initial_cpu = {.pc=0xbf54, .a=0xd4, .x=0xdd, .y=0xf0, .sp=0x49, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xbf54, .value=0xb0}, {.addr=0xbf55, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0xbf56, .a=0xd4, .x=0xdd, .y=0xf0, .sp=0x49, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xbf54, .value=0xb0}, {.addr=0xbf55, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0xbf54, .value=0xb0, .type=IO_READ},
        {.addr=0xbf55, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_023B) {
    const struct CPU_State initial_cpu = {.pc=0xb22b, .a=0xb9, .x=0x33, .y=0x66, .sp=0xcf, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xb22b, .value=0xb0}, {.addr=0xb22c, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0xb1ee, .a=0xb9, .x=0x33, .y=0x66, .sp=0xcf, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xb22b, .value=0xb0}, {.addr=0xb22c, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0xb22b, .value=0xb0, .type=IO_READ},
        {.addr=0xb22c, .value=0xc1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_023C) {
    const struct CPU_State initial_cpu = {.pc=0x29cf, .a=0x6a, .x=0x2e, .y=0x8b, .sp=0x44, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x29cf, .value=0xb0}, {.addr=0x29d0, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0x29d1, .a=0x6a, .x=0x2e, .y=0x8b, .sp=0x44, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x29cf, .value=0xb0}, {.addr=0x29d0, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0x29cf, .value=0xb0, .type=IO_READ},
        {.addr=0x29d0, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_023D) {
    const struct CPU_State initial_cpu = {.pc=0x4b36, .a=0x32, .x=0x81, .y=0x3f, .sp=0x6d, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x4b36, .value=0xb0}, {.addr=0x4b37, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x4b38, .a=0x32, .x=0x81, .y=0x3f, .sp=0x6d, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x4b36, .value=0xb0}, {.addr=0x4b37, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x4b36, .value=0xb0, .type=IO_READ},
        {.addr=0x4b37, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_023E) {
    const struct CPU_State initial_cpu = {.pc=0x555c, .a=0xfe, .x=0x5b, .y=0x72, .sp=0xb2, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x555c, .value=0xb0}, {.addr=0x555d, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x555e, .a=0xfe, .x=0x5b, .y=0x72, .sp=0xb2, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x555c, .value=0xb0}, {.addr=0x555d, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x555c, .value=0xb0, .type=IO_READ},
        {.addr=0x555d, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_023F) {
    const struct CPU_State initial_cpu = {.pc=0xab33, .a=0x0a, .x=0xe4, .y=0xc7, .sp=0x72, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xab33, .value=0xb0}, {.addr=0xab34, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0xab3f, .a=0x0a, .x=0xe4, .y=0xc7, .sp=0x72, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xab33, .value=0xb0}, {.addr=0xab34, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0xab33, .value=0xb0, .type=IO_READ},
        {.addr=0xab34, .value=0x0a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0240) {
    const struct CPU_State initial_cpu = {.pc=0x80f3, .a=0x3c, .x=0x8b, .y=0x75, .sp=0x08, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x80f3, .value=0xb0}, {.addr=0x80f4, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0x80f5, .a=0x3c, .x=0x8b, .y=0x75, .sp=0x08, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x80f3, .value=0xb0}, {.addr=0x80f4, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0x80f3, .value=0xb0, .type=IO_READ},
        {.addr=0x80f4, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0241) {
    const struct CPU_State initial_cpu = {.pc=0x9c5e, .a=0x1a, .x=0x7e, .y=0x79, .sp=0x5c, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x9c5e, .value=0xb0}, {.addr=0x9c5f, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0x9cb3, .a=0x1a, .x=0x7e, .y=0x79, .sp=0x5c, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x9c5e, .value=0xb0}, {.addr=0x9c5f, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0x9c5e, .value=0xb0, .type=IO_READ},
        {.addr=0x9c5f, .value=0x53, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0242) {
    const struct CPU_State initial_cpu = {.pc=0x03f0, .a=0x0e, .x=0xba, .y=0xdc, .sp=0x3c, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x03f0, .value=0xb0}, {.addr=0x03f1, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x03f2, .a=0x0e, .x=0xba, .y=0xdc, .sp=0x3c, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x03f0, .value=0xb0}, {.addr=0x03f1, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x03f0, .value=0xb0, .type=IO_READ},
        {.addr=0x03f1, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0243) {
    const struct CPU_State initial_cpu = {.pc=0x467c, .a=0x4a, .x=0xc2, .y=0xe0, .sp=0x98, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x467c, .value=0xb0}, {.addr=0x467d, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0x467e, .a=0x4a, .x=0xc2, .y=0xe0, .sp=0x98, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x467c, .value=0xb0}, {.addr=0x467d, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0x467c, .value=0xb0, .type=IO_READ},
        {.addr=0x467d, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0244) {
    const struct CPU_State initial_cpu = {.pc=0xc362, .a=0xcb, .x=0x5a, .y=0xdf, .sp=0xad, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xc362, .value=0xb0}, {.addr=0xc363, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0xc364, .a=0xcb, .x=0x5a, .y=0xdf, .sp=0xad, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xc362, .value=0xb0}, {.addr=0xc363, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0xc362, .value=0xb0, .type=IO_READ},
        {.addr=0xc363, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0245) {
    const struct CPU_State initial_cpu = {.pc=0x66bb, .a=0x63, .x=0xe9, .y=0x6c, .sp=0xae, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x66bb, .value=0xb0}, {.addr=0x66bc, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0x66e1, .a=0x63, .x=0xe9, .y=0x6c, .sp=0xae, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x66bb, .value=0xb0}, {.addr=0x66bc, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0x66bb, .value=0xb0, .type=IO_READ},
        {.addr=0x66bc, .value=0x24, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0246) {
    const struct CPU_State initial_cpu = {.pc=0xc999, .a=0xeb, .x=0x3c, .y=0x31, .sp=0x31, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xc999, .value=0xb0}, {.addr=0xc99a, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0xc9f4, .a=0xeb, .x=0x3c, .y=0x31, .sp=0x31, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0xc999, .value=0xb0}, {.addr=0xc99a, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0xc999, .value=0xb0, .type=IO_READ},
        {.addr=0xc99a, .value=0x59, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0247) {
    const struct CPU_State initial_cpu = {.pc=0x9ff5, .a=0x69, .x=0x1e, .y=0x10, .sp=0x27, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x9ff5, .value=0xb0}, {.addr=0x9ff6, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x9fd4, .a=0x69, .x=0x1e, .y=0x10, .sp=0x27, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x9ff5, .value=0xb0}, {.addr=0x9ff6, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x9ff5, .value=0xb0, .type=IO_READ},
        {.addr=0x9ff6, .value=0xdd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0248) {
    const struct CPU_State initial_cpu = {.pc=0x8174, .a=0xb9, .x=0x98, .y=0x13, .sp=0x4b, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x8174, .value=0xb0}, {.addr=0x8175, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x8176, .a=0xb9, .x=0x98, .y=0x13, .sp=0x4b, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x8174, .value=0xb0}, {.addr=0x8175, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x8174, .value=0xb0, .type=IO_READ},
        {.addr=0x8175, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0249) {
    const struct CPU_State initial_cpu = {.pc=0xba87, .a=0x01, .x=0x83, .y=0x60, .sp=0x11, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xba87, .value=0xb0}, {.addr=0xba88, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0xba31, .a=0x01, .x=0x83, .y=0x60, .sp=0x11, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xba87, .value=0xb0}, {.addr=0xba88, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0xba87, .value=0xb0, .type=IO_READ},
        {.addr=0xba88, .value=0xa8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_024A) {
    const struct CPU_State initial_cpu = {.pc=0x38fc, .a=0x66, .x=0xf4, .y=0xfa, .sp=0xf4, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x38fc, .value=0xb0}, {.addr=0x38fd, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x3926, .a=0x66, .x=0xf4, .y=0xfa, .sp=0xf4, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x38fc, .value=0xb0}, {.addr=0x38fd, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x38fc, .value=0xb0, .type=IO_READ},
        {.addr=0x38fd, .value=0x28, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_024B) {
    const struct CPU_State initial_cpu = {.pc=0x1860, .a=0xb2, .x=0x3f, .y=0xdc, .sp=0x4e, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x1860, .value=0xb0}, {.addr=0x1861, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0x1895, .a=0xb2, .x=0x3f, .y=0xdc, .sp=0x4e, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x1860, .value=0xb0}, {.addr=0x1861, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0x1860, .value=0xb0, .type=IO_READ},
        {.addr=0x1861, .value=0x33, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_024C) {
    const struct CPU_State initial_cpu = {.pc=0x3ef1, .a=0x57, .x=0x5c, .y=0xf7, .sp=0x0d, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x3ef1, .value=0xb0}, {.addr=0x3ef2, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0x3ef3, .a=0x57, .x=0x5c, .y=0xf7, .sp=0x0d, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x3ef1, .value=0xb0}, {.addr=0x3ef2, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0x3ef1, .value=0xb0, .type=IO_READ},
        {.addr=0x3ef2, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_024D) {
    const struct CPU_State initial_cpu = {.pc=0xe2f9, .a=0x9b, .x=0x96, .y=0x7a, .sp=0x77, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xe2f9, .value=0xb0}, {.addr=0xe2fa, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0xe30c, .a=0x9b, .x=0x96, .y=0x7a, .sp=0x77, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xe2f9, .value=0xb0}, {.addr=0xe2fa, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0xe2f9, .value=0xb0, .type=IO_READ},
        {.addr=0xe2fa, .value=0x11, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_024E) {
    const struct CPU_State initial_cpu = {.pc=0xcbe1, .a=0xa5, .x=0x46, .y=0xf4, .sp=0x5c, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xcbe1, .value=0xb0}, {.addr=0xcbe2, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0xcbe3, .a=0xa5, .x=0x46, .y=0xf4, .sp=0x5c, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0xcbe1, .value=0xb0}, {.addr=0xcbe2, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0xcbe1, .value=0xb0, .type=IO_READ},
        {.addr=0xcbe2, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_024F) {
    const struct CPU_State initial_cpu = {.pc=0x46e0, .a=0x76, .x=0xcc, .y=0x4d, .sp=0xfa, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x46e0, .value=0xb0}, {.addr=0x46e1, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0x471d, .a=0x76, .x=0xcc, .y=0x4d, .sp=0xfa, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x46e0, .value=0xb0}, {.addr=0x46e1, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0x46e0, .value=0xb0, .type=IO_READ},
        {.addr=0x46e1, .value=0x3b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0250) {
    const struct CPU_State initial_cpu = {.pc=0xff9e, .a=0x19, .x=0x88, .y=0xe2, .sp=0x64, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xff9e, .value=0xb0}, {.addr=0xff9f, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0xff6f, .a=0x19, .x=0x88, .y=0xe2, .sp=0x64, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xff9e, .value=0xb0}, {.addr=0xff9f, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0xff9e, .value=0xb0, .type=IO_READ},
        {.addr=0xff9f, .value=0xcf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0251) {
    const struct CPU_State initial_cpu = {.pc=0x9d81, .a=0x94, .x=0x40, .y=0xd7, .sp=0x0b, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x9d81, .value=0xb0}, {.addr=0x9d82, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0x9d83, .a=0x94, .x=0x40, .y=0xd7, .sp=0x0b, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x9d81, .value=0xb0}, {.addr=0x9d82, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0x9d81, .value=0xb0, .type=IO_READ},
        {.addr=0x9d82, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0252) {
    const struct CPU_State initial_cpu = {.pc=0x5c04, .a=0xfe, .x=0x39, .y=0xda, .sp=0x91, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x5c04, .value=0xb0}, {.addr=0x5c05, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x5b88, .a=0xfe, .x=0x39, .y=0xda, .sp=0x91, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x5c04, .value=0xb0}, {.addr=0x5c05, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x5c04, .value=0xb0, .type=IO_READ},
        {.addr=0x5c05, .value=0x82, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0253) {
    const struct CPU_State initial_cpu = {.pc=0xe36e, .a=0xd3, .x=0xd2, .y=0xc5, .sp=0x00, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xe36e, .value=0xb0}, {.addr=0xe36f, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0xe3d5, .a=0xd3, .x=0xd2, .y=0xc5, .sp=0x00, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xe36e, .value=0xb0}, {.addr=0xe36f, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0xe36e, .value=0xb0, .type=IO_READ},
        {.addr=0xe36f, .value=0x65, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0254) {
    const struct CPU_State initial_cpu = {.pc=0xff58, .a=0x53, .x=0x1e, .y=0xae, .sp=0xe2, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xff58, .value=0xb0}, {.addr=0xff59, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0xff5a, .a=0x53, .x=0x1e, .y=0xae, .sp=0xe2, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0xff58, .value=0xb0}, {.addr=0xff59, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0xff58, .value=0xb0, .type=IO_READ},
        {.addr=0xff59, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0255) {
    const struct CPU_State initial_cpu = {.pc=0xc9cf, .a=0x41, .x=0xb7, .y=0xd8, .sp=0xdc, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xc9cf, .value=0xb0}, {.addr=0xc9d0, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0xc9d1, .a=0x41, .x=0xb7, .y=0xd8, .sp=0xdc, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0xc9cf, .value=0xb0}, {.addr=0xc9d0, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0xc9cf, .value=0xb0, .type=IO_READ},
        {.addr=0xc9d0, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0256) {
    const struct CPU_State initial_cpu = {.pc=0x67a7, .a=0x94, .x=0x2f, .y=0xfe, .sp=0x9b, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x67a7, .value=0xb0}, {.addr=0x67a8, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0x6781, .a=0x94, .x=0x2f, .y=0xfe, .sp=0x9b, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x67a7, .value=0xb0}, {.addr=0x67a8, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0x67a7, .value=0xb0, .type=IO_READ},
        {.addr=0x67a8, .value=0xd8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0257) {
    const struct CPU_State initial_cpu = {.pc=0xe1ef, .a=0xb6, .x=0x1b, .y=0xd8, .sp=0xf7, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xe1ef, .value=0xb0}, {.addr=0xe1f0, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0xe1f1, .a=0xb6, .x=0x1b, .y=0xd8, .sp=0xf7, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xe1ef, .value=0xb0}, {.addr=0xe1f0, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0xe1ef, .value=0xb0, .type=IO_READ},
        {.addr=0xe1f0, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0258) {
    const struct CPU_State initial_cpu = {.pc=0x93bf, .a=0x59, .x=0x51, .y=0xb0, .sp=0x6f, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x93bf, .value=0xb0}, {.addr=0x93c0, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0x93c1, .a=0x59, .x=0x51, .y=0xb0, .sp=0x6f, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x93bf, .value=0xb0}, {.addr=0x93c0, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0x93bf, .value=0xb0, .type=IO_READ},
        {.addr=0x93c0, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0259) {
    const struct CPU_State initial_cpu = {.pc=0x8e38, .a=0xbb, .x=0x3b, .y=0xae, .sp=0x7c, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x8e38, .value=0xb0}, {.addr=0x8e39, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0x8e66, .a=0xbb, .x=0x3b, .y=0xae, .sp=0x7c, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x8e38, .value=0xb0}, {.addr=0x8e39, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0x8e38, .value=0xb0, .type=IO_READ},
        {.addr=0x8e39, .value=0x2c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_025A) {
    const struct CPU_State initial_cpu = {.pc=0x77e7, .a=0x68, .x=0x8a, .y=0x51, .sp=0x9c, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x77e7, .value=0xb0}, {.addr=0x77e8, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0x77e9, .a=0x68, .x=0x8a, .y=0x51, .sp=0x9c, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x77e7, .value=0xb0}, {.addr=0x77e8, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0x77e7, .value=0xb0, .type=IO_READ},
        {.addr=0x77e8, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_025B) {
    const struct CPU_State initial_cpu = {.pc=0xf424, .a=0xd8, .x=0x51, .y=0x1e, .sp=0x36, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xf424, .value=0xb0}, {.addr=0xf425, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0xf45b, .a=0xd8, .x=0x51, .y=0x1e, .sp=0x36, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xf424, .value=0xb0}, {.addr=0xf425, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0xf424, .value=0xb0, .type=IO_READ},
        {.addr=0xf425, .value=0x35, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_025C) {
    const struct CPU_State initial_cpu = {.pc=0x83b0, .a=0x9b, .x=0x38, .y=0xde, .sp=0xa3, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x83b0, .value=0xb0}, {.addr=0x83b1, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0x83b2, .a=0x9b, .x=0x38, .y=0xde, .sp=0xa3, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x83b0, .value=0xb0}, {.addr=0x83b1, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0x83b0, .value=0xb0, .type=IO_READ},
        {.addr=0x83b1, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_025D) {
    const struct CPU_State initial_cpu = {.pc=0xe790, .a=0x51, .x=0xd7, .y=0x9f, .sp=0x86, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xe790, .value=0xb0}, {.addr=0xe791, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0xe792, .a=0x51, .x=0xd7, .y=0x9f, .sp=0x86, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0xe790, .value=0xb0}, {.addr=0xe791, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0xe790, .value=0xb0, .type=IO_READ},
        {.addr=0xe791, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_025E) {
    const struct CPU_State initial_cpu = {.pc=0x8ccc, .a=0x4f, .x=0x8a, .y=0xa0, .sp=0x83, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x8ccc, .value=0xb0}, {.addr=0x8ccd, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0x8c52, .a=0x4f, .x=0x8a, .y=0xa0, .sp=0x83, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x8ccc, .value=0xb0}, {.addr=0x8ccd, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0x8ccc, .value=0xb0, .type=IO_READ},
        {.addr=0x8ccd, .value=0x84, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_025F) {
    const struct CPU_State initial_cpu = {.pc=0xea4d, .a=0x01, .x=0x19, .y=0x74, .sp=0x61, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xea4d, .value=0xb0}, {.addr=0xea4e, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0xea9a, .a=0x01, .x=0x19, .y=0x74, .sp=0x61, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0xea4d, .value=0xb0}, {.addr=0xea4e, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0xea4d, .value=0xb0, .type=IO_READ},
        {.addr=0xea4e, .value=0x4b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0260) {
    const struct CPU_State initial_cpu = {.pc=0x7416, .a=0x54, .x=0xb7, .y=0x3e, .sp=0x29, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x7416, .value=0xb0}, {.addr=0x7417, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x748d, .a=0x54, .x=0xb7, .y=0x3e, .sp=0x29, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x7416, .value=0xb0}, {.addr=0x7417, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x7416, .value=0xb0, .type=IO_READ},
        {.addr=0x7417, .value=0x75, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0261) {
    const struct CPU_State initial_cpu = {.pc=0x93a8, .a=0x10, .x=0x77, .y=0xef, .sp=0x99, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x93a8, .value=0xb0}, {.addr=0x93a9, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0x9345, .a=0x10, .x=0x77, .y=0xef, .sp=0x99, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x93a8, .value=0xb0}, {.addr=0x93a9, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0x93a8, .value=0xb0, .type=IO_READ},
        {.addr=0x93a9, .value=0x9b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0262) {
    const struct CPU_State initial_cpu = {.pc=0x7839, .a=0x22, .x=0xd5, .y=0x96, .sp=0x33, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x7839, .value=0xb0}, {.addr=0x783a, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x77d5, .a=0x22, .x=0xd5, .y=0x96, .sp=0x33, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x7839, .value=0xb0}, {.addr=0x783a, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x7839, .value=0xb0, .type=IO_READ},
        {.addr=0x783a, .value=0x9a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0263) {
    const struct CPU_State initial_cpu = {.pc=0x3ba1, .a=0x87, .x=0x3f, .y=0x56, .sp=0x08, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x3ba1, .value=0xb0}, {.addr=0x3ba2, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0x3ba3, .a=0x87, .x=0x3f, .y=0x56, .sp=0x08, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x3ba1, .value=0xb0}, {.addr=0x3ba2, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0x3ba1, .value=0xb0, .type=IO_READ},
        {.addr=0x3ba2, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0264) {
    const struct CPU_State initial_cpu = {.pc=0x94fd, .a=0xe0, .x=0x7c, .y=0x79, .sp=0x72, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x94fd, .value=0xb0}, {.addr=0x94fe, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0x9539, .a=0xe0, .x=0x7c, .y=0x79, .sp=0x72, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x94fd, .value=0xb0}, {.addr=0x94fe, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0x94fd, .value=0xb0, .type=IO_READ},
        {.addr=0x94fe, .value=0x3a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0265) {
    const struct CPU_State initial_cpu = {.pc=0xbcf6, .a=0xaf, .x=0x7f, .y=0xc3, .sp=0x3d, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0xbcf6, .value=0xb0}, {.addr=0xbcf7, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0xbd66, .a=0xaf, .x=0x7f, .y=0xc3, .sp=0x3d, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0xbcf6, .value=0xb0}, {.addr=0xbcf7, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0xbcf6, .value=0xb0, .type=IO_READ},
        {.addr=0xbcf7, .value=0x6e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0266) {
    const struct CPU_State initial_cpu = {.pc=0x1f19, .a=0xc7, .x=0x83, .y=0xf8, .sp=0x05, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x1f19, .value=0xb0}, {.addr=0x1f1a, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x1eca, .a=0xc7, .x=0x83, .y=0xf8, .sp=0x05, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x1f19, .value=0xb0}, {.addr=0x1f1a, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x1f19, .value=0xb0, .type=IO_READ},
        {.addr=0x1f1a, .value=0xaf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0267) {
    const struct CPU_State initial_cpu = {.pc=0x4ddb, .a=0x1f, .x=0x2a, .y=0xbc, .sp=0x2e, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x4ddb, .value=0xb0}, {.addr=0x4ddc, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0x4e1b, .a=0x1f, .x=0x2a, .y=0xbc, .sp=0x2e, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x4ddb, .value=0xb0}, {.addr=0x4ddc, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0x4ddb, .value=0xb0, .type=IO_READ},
        {.addr=0x4ddc, .value=0x3e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0268) {
    const struct CPU_State initial_cpu = {.pc=0xf677, .a=0xb5, .x=0x8d, .y=0xf4, .sp=0x84, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xf677, .value=0xb0}, {.addr=0xf678, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0xf679, .a=0xb5, .x=0x8d, .y=0xf4, .sp=0x84, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xf677, .value=0xb0}, {.addr=0xf678, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0xf677, .value=0xb0, .type=IO_READ},
        {.addr=0xf678, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0269) {
    const struct CPU_State initial_cpu = {.pc=0x80a8, .a=0xa9, .x=0x51, .y=0xa9, .sp=0x06, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x80a8, .value=0xb0}, {.addr=0x80a9, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0x80aa, .a=0xa9, .x=0x51, .y=0xa9, .sp=0x06, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x80a8, .value=0xb0}, {.addr=0x80a9, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0x80a8, .value=0xb0, .type=IO_READ},
        {.addr=0x80a9, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_026A) {
    const struct CPU_State initial_cpu = {.pc=0xe49e, .a=0x90, .x=0x90, .y=0xd4, .sp=0x9a, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xe49e, .value=0xb0}, {.addr=0xe49f, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xe43f, .a=0x90, .x=0x90, .y=0xd4, .sp=0x9a, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0xe49e, .value=0xb0}, {.addr=0xe49f, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xe49e, .value=0xb0, .type=IO_READ},
        {.addr=0xe49f, .value=0x9f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_026B) {
    const struct CPU_State initial_cpu = {.pc=0x8a3d, .a=0xea, .x=0x2d, .y=0x7b, .sp=0xe7, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x8a3d, .value=0xb0}, {.addr=0x8a3e, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x8a6c, .a=0xea, .x=0x2d, .y=0x7b, .sp=0xe7, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x8a3d, .value=0xb0}, {.addr=0x8a3e, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x8a3d, .value=0xb0, .type=IO_READ},
        {.addr=0x8a3e, .value=0x2d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_026C) {
    const struct CPU_State initial_cpu = {.pc=0xfae7, .a=0xe6, .x=0x2f, .y=0xf6, .sp=0xf4, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xfae7, .value=0xb0}, {.addr=0xfae8, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0xfae9, .a=0xe6, .x=0x2f, .y=0xf6, .sp=0xf4, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0xfae7, .value=0xb0}, {.addr=0xfae8, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0xfae7, .value=0xb0, .type=IO_READ},
        {.addr=0xfae8, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_026D) {
    const struct CPU_State initial_cpu = {.pc=0x205e, .a=0x63, .x=0x2b, .y=0x7e, .sp=0x23, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x205e, .value=0xb0}, {.addr=0x205f, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0x2060, .a=0x63, .x=0x2b, .y=0x7e, .sp=0x23, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x205e, .value=0xb0}, {.addr=0x205f, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0x205e, .value=0xb0, .type=IO_READ},
        {.addr=0x205f, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_026E) {
    const struct CPU_State initial_cpu = {.pc=0xecdb, .a=0x10, .x=0x6c, .y=0xca, .sp=0xf9, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0xecdb, .value=0xb0}, {.addr=0xecdc, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0xecdd, .a=0x10, .x=0x6c, .y=0xca, .sp=0xf9, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xecdb, .value=0xb0}, {.addr=0xecdc, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0xecdb, .value=0xb0, .type=IO_READ},
        {.addr=0xecdc, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_026F) {
    const struct CPU_State initial_cpu = {.pc=0xc90b, .a=0x73, .x=0x8d, .y=0xdc, .sp=0xfd, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xc90b, .value=0xb0}, {.addr=0xc90c, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0xc90d, .a=0x73, .x=0x8d, .y=0xdc, .sp=0xfd, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xc90b, .value=0xb0}, {.addr=0xc90c, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0xc90b, .value=0xb0, .type=IO_READ},
        {.addr=0xc90c, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0270) {
    const struct CPU_State initial_cpu = {.pc=0xd629, .a=0x57, .x=0x1a, .y=0x16, .sp=0xe6, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xd629, .value=0xb0}, {.addr=0xd62a, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0xd5be, .a=0x57, .x=0x1a, .y=0x16, .sp=0xe6, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xd629, .value=0xb0}, {.addr=0xd62a, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0xd629, .value=0xb0, .type=IO_READ},
        {.addr=0xd62a, .value=0x93, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0271) {
    const struct CPU_State initial_cpu = {.pc=0x4de6, .a=0x0e, .x=0x92, .y=0x24, .sp=0x19, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x4de6, .value=0xb0}, {.addr=0x4de7, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0x4da9, .a=0x0e, .x=0x92, .y=0x24, .sp=0x19, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x4de6, .value=0xb0}, {.addr=0x4de7, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0x4de6, .value=0xb0, .type=IO_READ},
        {.addr=0x4de7, .value=0xc1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0272) {
    const struct CPU_State initial_cpu = {.pc=0xde0f, .a=0x40, .x=0xb0, .y=0x90, .sp=0x4d, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xde0f, .value=0xb0}, {.addr=0xde10, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xde71, .a=0x40, .x=0xb0, .y=0x90, .sp=0x4d, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xde0f, .value=0xb0}, {.addr=0xde10, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xde0f, .value=0xb0, .type=IO_READ},
        {.addr=0xde10, .value=0x60, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0273) {
    const struct CPU_State initial_cpu = {.pc=0x55aa, .a=0x6b, .x=0xff, .y=0xa9, .sp=0x4f, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x55aa, .value=0xb0}, {.addr=0x55ab, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0x55cd, .a=0x6b, .x=0xff, .y=0xa9, .sp=0x4f, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x55aa, .value=0xb0}, {.addr=0x55ab, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0x55aa, .value=0xb0, .type=IO_READ},
        {.addr=0x55ab, .value=0x21, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0274) {
    const struct CPU_State initial_cpu = {.pc=0xae28, .a=0x89, .x=0x8a, .y=0x63, .sp=0x3c, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xae28, .value=0xb0}, {.addr=0xae29, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0xae2a, .a=0x89, .x=0x8a, .y=0x63, .sp=0x3c, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0xae28, .value=0xb0}, {.addr=0xae29, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0xae28, .value=0xb0, .type=IO_READ},
        {.addr=0xae29, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0275) {
    const struct CPU_State initial_cpu = {.pc=0xf924, .a=0x46, .x=0x42, .y=0xe1, .sp=0xd5, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xf924, .value=0xb0}, {.addr=0xf925, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xf926, .a=0x46, .x=0x42, .y=0xe1, .sp=0xd5, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0xf924, .value=0xb0}, {.addr=0xf925, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xf924, .value=0xb0, .type=IO_READ},
        {.addr=0xf925, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0276) {
    const struct CPU_State initial_cpu = {.pc=0x7d65, .a=0x15, .x=0x55, .y=0x18, .sp=0x45, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x7d65, .value=0xb0}, {.addr=0x7d66, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0x7d67, .a=0x15, .x=0x55, .y=0x18, .sp=0x45, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x7d65, .value=0xb0}, {.addr=0x7d66, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0x7d65, .value=0xb0, .type=IO_READ},
        {.addr=0x7d66, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0277) {
    const struct CPU_State initial_cpu = {.pc=0x8cad, .a=0xdc, .x=0xfb, .y=0x9a, .sp=0xd1, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x8cad, .value=0xb0}, {.addr=0x8cae, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0x8cdb, .a=0xdc, .x=0xfb, .y=0x9a, .sp=0xd1, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x8cad, .value=0xb0}, {.addr=0x8cae, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0x8cad, .value=0xb0, .type=IO_READ},
        {.addr=0x8cae, .value=0x2c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0278) {
    const struct CPU_State initial_cpu = {.pc=0x6f55, .a=0x06, .x=0xaa, .y=0x06, .sp=0x0f, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x6f55, .value=0xb0}, {.addr=0x6f56, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0x6fad, .a=0x06, .x=0xaa, .y=0x06, .sp=0x0f, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x6f55, .value=0xb0}, {.addr=0x6f56, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0x6f55, .value=0xb0, .type=IO_READ},
        {.addr=0x6f56, .value=0x56, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0279) {
    const struct CPU_State initial_cpu = {.pc=0x2f79, .a=0x7d, .x=0x56, .y=0xd6, .sp=0x0c, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x2f79, .value=0xb0}, {.addr=0x2f7a, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x2f7b, .a=0x7d, .x=0x56, .y=0xd6, .sp=0x0c, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x2f79, .value=0xb0}, {.addr=0x2f7a, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x2f79, .value=0xb0, .type=IO_READ},
        {.addr=0x2f7a, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_027A) {
    const struct CPU_State initial_cpu = {.pc=0x6711, .a=0xdd, .x=0xa1, .y=0xf4, .sp=0xd7, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x6711, .value=0xb0}, {.addr=0x6712, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x6713, .a=0xdd, .x=0xa1, .y=0xf4, .sp=0xd7, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x6711, .value=0xb0}, {.addr=0x6712, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x6711, .value=0xb0, .type=IO_READ},
        {.addr=0x6712, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_027B) {
    const struct CPU_State initial_cpu = {.pc=0x4d27, .a=0x26, .x=0x72, .y=0x84, .sp=0x94, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x4d27, .value=0xb0}, {.addr=0x4d28, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0x4cd0, .a=0x26, .x=0x72, .y=0x84, .sp=0x94, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x4d27, .value=0xb0}, {.addr=0x4d28, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0x4d27, .value=0xb0, .type=IO_READ},
        {.addr=0x4d28, .value=0xa7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_027C) {
    const struct CPU_State initial_cpu = {.pc=0x5571, .a=0x18, .x=0xbd, .y=0xb6, .sp=0xad, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x5571, .value=0xb0}, {.addr=0x5572, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0x55f1, .a=0x18, .x=0xbd, .y=0xb6, .sp=0xad, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x5571, .value=0xb0}, {.addr=0x5572, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0x5571, .value=0xb0, .type=IO_READ},
        {.addr=0x5572, .value=0x7e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_027D) {
    const struct CPU_State initial_cpu = {.pc=0xb192, .a=0x87, .x=0xd9, .y=0x0b, .sp=0x03, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xb192, .value=0xb0}, {.addr=0xb193, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0xb194, .a=0x87, .x=0xd9, .y=0x0b, .sp=0x03, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xb192, .value=0xb0}, {.addr=0xb193, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0xb192, .value=0xb0, .type=IO_READ},
        {.addr=0xb193, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_027E) {
    const struct CPU_State initial_cpu = {.pc=0xa56b, .a=0x78, .x=0xd2, .y=0x60, .sp=0x64, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xa56b, .value=0xb0}, {.addr=0xa56c, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0xa566, .a=0x78, .x=0xd2, .y=0x60, .sp=0x64, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0xa56b, .value=0xb0}, {.addr=0xa56c, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0xa56b, .value=0xb0, .type=IO_READ},
        {.addr=0xa56c, .value=0xf9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_027F) {
    const struct CPU_State initial_cpu = {.pc=0x3e8c, .a=0xb1, .x=0xff, .y=0xa4, .sp=0xea, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x3e8c, .value=0xb0}, {.addr=0x3e8d, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0x3e8e, .a=0xb1, .x=0xff, .y=0xa4, .sp=0xea, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x3e8c, .value=0xb0}, {.addr=0x3e8d, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0x3e8c, .value=0xb0, .type=IO_READ},
        {.addr=0x3e8d, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0280) {
    const struct CPU_State initial_cpu = {.pc=0xb1cd, .a=0x09, .x=0xcf, .y=0x0b, .sp=0xf1, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xb1cd, .value=0xb0}, {.addr=0xb1ce, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0xb189, .a=0x09, .x=0xcf, .y=0x0b, .sp=0xf1, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0xb1cd, .value=0xb0}, {.addr=0xb1ce, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0xb1cd, .value=0xb0, .type=IO_READ},
        {.addr=0xb1ce, .value=0xba, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0281) {
    const struct CPU_State initial_cpu = {.pc=0xa1e1, .a=0x40, .x=0x59, .y=0xb9, .sp=0xec, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xa1e1, .value=0xb0}, {.addr=0xa1e2, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0xa1a4, .a=0x40, .x=0x59, .y=0xb9, .sp=0xec, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0xa1e1, .value=0xb0}, {.addr=0xa1e2, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0xa1e1, .value=0xb0, .type=IO_READ},
        {.addr=0xa1e2, .value=0xc1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0282) {
    const struct CPU_State initial_cpu = {.pc=0x99a9, .a=0xa8, .x=0xcf, .y=0xf3, .sp=0xca, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x99a9, .value=0xb0}, {.addr=0x99aa, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0x99cd, .a=0xa8, .x=0xcf, .y=0xf3, .sp=0xca, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x99a9, .value=0xb0}, {.addr=0x99aa, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0x99a9, .value=0xb0, .type=IO_READ},
        {.addr=0x99aa, .value=0x22, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0283) {
    const struct CPU_State initial_cpu = {.pc=0x5d08, .a=0x57, .x=0xd8, .y=0xb2, .sp=0xc8, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x5d08, .value=0xb0}, {.addr=0x5d09, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x5c9a, .a=0x57, .x=0xd8, .y=0xb2, .sp=0xc8, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x5d08, .value=0xb0}, {.addr=0x5d09, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0x5d08, .value=0xb0, .type=IO_READ},
        {.addr=0x5d09, .value=0x90, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0284) {
    const struct CPU_State initial_cpu = {.pc=0xed76, .a=0x5b, .x=0xec, .y=0x96, .sp=0xd5, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xed76, .value=0xb0}, {.addr=0xed77, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0xedcb, .a=0x5b, .x=0xec, .y=0x96, .sp=0xd5, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xed76, .value=0xb0}, {.addr=0xed77, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0xed76, .value=0xb0, .type=IO_READ},
        {.addr=0xed77, .value=0x53, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0285) {
    const struct CPU_State initial_cpu = {.pc=0x8b6d, .a=0x40, .x=0x74, .y=0x41, .sp=0x76, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x8b6d, .value=0xb0}, {.addr=0x8b6e, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x8b6f, .a=0x40, .x=0x74, .y=0x41, .sp=0x76, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x8b6d, .value=0xb0}, {.addr=0x8b6e, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x8b6d, .value=0xb0, .type=IO_READ},
        {.addr=0x8b6e, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0286) {
    const struct CPU_State initial_cpu = {.pc=0x04a6, .a=0x31, .x=0x9e, .y=0x34, .sp=0x7b, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x04a6, .value=0xb0}, {.addr=0x04a7, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0x04e2, .a=0x31, .x=0x9e, .y=0x34, .sp=0x7b, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x04a6, .value=0xb0}, {.addr=0x04a7, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0x04a6, .value=0xb0, .type=IO_READ},
        {.addr=0x04a7, .value=0x3a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0287) {
    const struct CPU_State initial_cpu = {.pc=0xbe2e, .a=0xac, .x=0x5b, .y=0xba, .sp=0x69, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xbe2e, .value=0xb0}, {.addr=0xbe2f, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0xbe89, .a=0xac, .x=0x5b, .y=0xba, .sp=0x69, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0xbe2e, .value=0xb0}, {.addr=0xbe2f, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0xbe2e, .value=0xb0, .type=IO_READ},
        {.addr=0xbe2f, .value=0x59, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0288) {
    const struct CPU_State initial_cpu = {.pc=0x8aac, .a=0x69, .x=0x0a, .y=0x7c, .sp=0x90, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x8aac, .value=0xb0}, {.addr=0x8aad, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0x8a75, .a=0x69, .x=0x0a, .y=0x7c, .sp=0x90, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x8aac, .value=0xb0}, {.addr=0x8aad, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0x8aac, .value=0xb0, .type=IO_READ},
        {.addr=0x8aad, .value=0xc7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0289) {
    const struct CPU_State initial_cpu = {.pc=0x319f, .a=0x54, .x=0x3e, .y=0x9f, .sp=0x1c, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x319f, .value=0xb0}, {.addr=0x31a0, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0x31a1, .a=0x54, .x=0x3e, .y=0x9f, .sp=0x1c, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x319f, .value=0xb0}, {.addr=0x31a0, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0x319f, .value=0xb0, .type=IO_READ},
        {.addr=0x31a0, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_028A) {
    const struct CPU_State initial_cpu = {.pc=0xf4b0, .a=0x3f, .x=0x17, .y=0x78, .sp=0x47, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xf4b0, .value=0xb0}, {.addr=0xf4b1, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0xf4b2, .a=0x3f, .x=0x17, .y=0x78, .sp=0x47, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xf4b0, .value=0xb0}, {.addr=0xf4b1, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0xf4b0, .value=0xb0, .type=IO_READ},
        {.addr=0xf4b1, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_028B) {
    const struct CPU_State initial_cpu = {.pc=0xfad8, .a=0x4a, .x=0x7f, .y=0x96, .sp=0x77, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xfad8, .value=0xb0}, {.addr=0xfad9, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0xfada, .a=0x4a, .x=0x7f, .y=0x96, .sp=0x77, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0xfad8, .value=0xb0}, {.addr=0xfad9, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0xfad8, .value=0xb0, .type=IO_READ},
        {.addr=0xfad9, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_028C) {
    const struct CPU_State initial_cpu = {.pc=0x87a7, .a=0x85, .x=0xed, .y=0xa2, .sp=0xde, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x87a7, .value=0xb0}, {.addr=0x87a8, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0x8782, .a=0x85, .x=0xed, .y=0xa2, .sp=0xde, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x87a7, .value=0xb0}, {.addr=0x87a8, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0x87a7, .value=0xb0, .type=IO_READ},
        {.addr=0x87a8, .value=0xd9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_028D) {
    const struct CPU_State initial_cpu = {.pc=0x53c4, .a=0x2b, .x=0xe4, .y=0xe4, .sp=0x7e, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x53c4, .value=0xb0}, {.addr=0x53c5, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0x542e, .a=0x2b, .x=0xe4, .y=0xe4, .sp=0x7e, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x53c4, .value=0xb0}, {.addr=0x53c5, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0x53c4, .value=0xb0, .type=IO_READ},
        {.addr=0x53c5, .value=0x68, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_028E) {
    const struct CPU_State initial_cpu = {.pc=0xa372, .a=0x03, .x=0xbd, .y=0xe6, .sp=0xa1, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xa372, .value=0xb0}, {.addr=0xa373, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0xa374, .a=0x03, .x=0xbd, .y=0xe6, .sp=0xa1, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0xa372, .value=0xb0}, {.addr=0xa373, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0xa372, .value=0xb0, .type=IO_READ},
        {.addr=0xa373, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_028F) {
    const struct CPU_State initial_cpu = {.pc=0xec3e, .a=0x15, .x=0x96, .y=0xda, .sp=0xbd, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xec3e, .value=0xb0}, {.addr=0xec3f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xec40, .a=0x15, .x=0x96, .y=0xda, .sp=0xbd, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0xec3e, .value=0xb0}, {.addr=0xec3f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xec3e, .value=0xb0, .type=IO_READ},
        {.addr=0xec3f, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0290) {
    const struct CPU_State initial_cpu = {.pc=0x940f, .a=0x88, .x=0x7f, .y=0x3d, .sp=0x13, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x940f, .value=0xb0}, {.addr=0x9410, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0x9438, .a=0x88, .x=0x7f, .y=0x3d, .sp=0x13, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x940f, .value=0xb0}, {.addr=0x9410, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0x940f, .value=0xb0, .type=IO_READ},
        {.addr=0x9410, .value=0x27, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0291) {
    const struct CPU_State initial_cpu = {.pc=0x6219, .a=0x4c, .x=0xe2, .y=0xf9, .sp=0x6e, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x6219, .value=0xb0}, {.addr=0x621a, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x621b, .a=0x4c, .x=0xe2, .y=0xf9, .sp=0x6e, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x6219, .value=0xb0}, {.addr=0x621a, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x6219, .value=0xb0, .type=IO_READ},
        {.addr=0x621a, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0292) {
    const struct CPU_State initial_cpu = {.pc=0x3332, .a=0x8c, .x=0x1d, .y=0xe0, .sp=0x93, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x3332, .value=0xb0}, {.addr=0x3333, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0x3334, .a=0x8c, .x=0x1d, .y=0xe0, .sp=0x93, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x3332, .value=0xb0}, {.addr=0x3333, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0x3332, .value=0xb0, .type=IO_READ},
        {.addr=0x3333, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0293) {
    const struct CPU_State initial_cpu = {.pc=0x05b7, .a=0x05, .x=0x9a, .y=0xa7, .sp=0x2a, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x05b7, .value=0xb0}, {.addr=0x05b8, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x05b9, .a=0x05, .x=0x9a, .y=0xa7, .sp=0x2a, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x05b7, .value=0xb0}, {.addr=0x05b8, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x05b7, .value=0xb0, .type=IO_READ},
        {.addr=0x05b8, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0294) {
    const struct CPU_State initial_cpu = {.pc=0x8505, .a=0xa0, .x=0x32, .y=0x86, .sp=0x1a, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x8505, .value=0xb0}, {.addr=0x8506, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x851c, .a=0xa0, .x=0x32, .y=0x86, .sp=0x1a, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x8505, .value=0xb0}, {.addr=0x8506, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x8505, .value=0xb0, .type=IO_READ},
        {.addr=0x8506, .value=0x15, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0295) {
    const struct CPU_State initial_cpu = {.pc=0xbff9, .a=0x2a, .x=0xfa, .y=0x01, .sp=0xec, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xbff9, .value=0xb0}, {.addr=0xbffa, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0xc06e, .a=0x2a, .x=0xfa, .y=0x01, .sp=0xec, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0xbff9, .value=0xb0}, {.addr=0xbffa, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0xbff9, .value=0xb0, .type=IO_READ},
        {.addr=0xbffa, .value=0x73, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0296) {
    const struct CPU_State initial_cpu = {.pc=0x0eb0, .a=0x53, .x=0x45, .y=0x77, .sp=0xf1, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x0eb0, .value=0xb0}, {.addr=0x0eb1, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0x0eb2, .a=0x53, .x=0x45, .y=0x77, .sp=0xf1, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x0eb0, .value=0xb0}, {.addr=0x0eb1, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0x0eb0, .value=0xb0, .type=IO_READ},
        {.addr=0x0eb1, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0297) {
    const struct CPU_State initial_cpu = {.pc=0xead8, .a=0x13, .x=0xcf, .y=0x89, .sp=0x7d, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xead8, .value=0xb0}, {.addr=0xead9, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xeada, .a=0x13, .x=0xcf, .y=0x89, .sp=0x7d, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xead8, .value=0xb0}, {.addr=0xead9, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xead8, .value=0xb0, .type=IO_READ},
        {.addr=0xead9, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0298) {
    const struct CPU_State initial_cpu = {.pc=0x0075, .a=0x55, .x=0xd8, .y=0x81, .sp=0x9b, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x0075, .value=0xb0}, {.addr=0x0076, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x0077, .a=0x55, .x=0xd8, .y=0x81, .sp=0x9b, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x0075, .value=0xb0}, {.addr=0x0076, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x0075, .value=0xb0, .type=IO_READ},
        {.addr=0x0076, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0299) {
    const struct CPU_State initial_cpu = {.pc=0xda94, .a=0x3d, .x=0x76, .y=0xc7, .sp=0x87, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xda94, .value=0xb0}, {.addr=0xda95, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xda73, .a=0x3d, .x=0x76, .y=0xc7, .sp=0x87, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0xda94, .value=0xb0}, {.addr=0xda95, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xda94, .value=0xb0, .type=IO_READ},
        {.addr=0xda95, .value=0xdd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_029A) {
    const struct CPU_State initial_cpu = {.pc=0x2ddc, .a=0x43, .x=0xe2, .y=0x65, .sp=0xf7, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x2ddc, .value=0xb0}, {.addr=0x2ddd, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x2d7a, .a=0x43, .x=0xe2, .y=0x65, .sp=0xf7, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x2ddc, .value=0xb0}, {.addr=0x2ddd, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x2ddc, .value=0xb0, .type=IO_READ},
        {.addr=0x2ddd, .value=0x9c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_029B) {
    const struct CPU_State initial_cpu = {.pc=0x2898, .a=0x49, .x=0x8b, .y=0x38, .sp=0x42, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x2898, .value=0xb0}, {.addr=0x2899, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x28ca, .a=0x49, .x=0x8b, .y=0x38, .sp=0x42, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x2898, .value=0xb0}, {.addr=0x2899, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x2898, .value=0xb0, .type=IO_READ},
        {.addr=0x2899, .value=0x30, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_029C) {
    const struct CPU_State initial_cpu = {.pc=0xc66e, .a=0x5b, .x=0xc2, .y=0xc4, .sp=0x96, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xc66e, .value=0xb0}, {.addr=0xc66f, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0xc65b, .a=0x5b, .x=0xc2, .y=0xc4, .sp=0x96, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xc66e, .value=0xb0}, {.addr=0xc66f, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0xc66e, .value=0xb0, .type=IO_READ},
        {.addr=0xc66f, .value=0xeb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_029D) {
    const struct CPU_State initial_cpu = {.pc=0xf4b2, .a=0x9e, .x=0x6f, .y=0xe4, .sp=0x15, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xf4b2, .value=0xb0}, {.addr=0xf4b3, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0xf4b4, .a=0x9e, .x=0x6f, .y=0xe4, .sp=0x15, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xf4b2, .value=0xb0}, {.addr=0xf4b3, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0xf4b2, .value=0xb0, .type=IO_READ},
        {.addr=0xf4b3, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_029E) {
    const struct CPU_State initial_cpu = {.pc=0x1c0f, .a=0xeb, .x=0xdb, .y=0x61, .sp=0xc3, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x1c0f, .value=0xb0}, {.addr=0x1c10, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0x1c14, .a=0xeb, .x=0xdb, .y=0x61, .sp=0xc3, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x1c0f, .value=0xb0}, {.addr=0x1c10, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0x1c0f, .value=0xb0, .type=IO_READ},
        {.addr=0x1c10, .value=0x03, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_029F) {
    const struct CPU_State initial_cpu = {.pc=0xef48, .a=0x8c, .x=0x5b, .y=0xe7, .sp=0x97, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xef48, .value=0xb0}, {.addr=0xef49, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0xef36, .a=0x8c, .x=0x5b, .y=0xe7, .sp=0x97, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0xef48, .value=0xb0}, {.addr=0xef49, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0xef48, .value=0xb0, .type=IO_READ},
        {.addr=0xef49, .value=0xec, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02A0) {
    const struct CPU_State initial_cpu = {.pc=0x35a6, .a=0xf7, .x=0xf0, .y=0xca, .sp=0x0d, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x35a6, .value=0xb0}, {.addr=0x35a7, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0x35a8, .a=0xf7, .x=0xf0, .y=0xca, .sp=0x0d, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x35a6, .value=0xb0}, {.addr=0x35a7, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0x35a6, .value=0xb0, .type=IO_READ},
        {.addr=0x35a7, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02A1) {
    const struct CPU_State initial_cpu = {.pc=0x4953, .a=0xf0, .x=0x3b, .y=0x57, .sp=0x5a, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x4953, .value=0xb0}, {.addr=0x4954, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0x4955, .a=0xf0, .x=0x3b, .y=0x57, .sp=0x5a, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x4953, .value=0xb0}, {.addr=0x4954, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0x4953, .value=0xb0, .type=IO_READ},
        {.addr=0x4954, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02A2) {
    const struct CPU_State initial_cpu = {.pc=0xb1be, .a=0xd3, .x=0x39, .y=0x68, .sp=0xc7, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xb1be, .value=0xb0}, {.addr=0xb1bf, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0xb1c0, .a=0xd3, .x=0x39, .y=0x68, .sp=0xc7, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0xb1be, .value=0xb0}, {.addr=0xb1bf, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0xb1be, .value=0xb0, .type=IO_READ},
        {.addr=0xb1bf, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02A3) {
    const struct CPU_State initial_cpu = {.pc=0xd722, .a=0xbc, .x=0x91, .y=0x20, .sp=0xca, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xd722, .value=0xb0}, {.addr=0xd723, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0xd724, .a=0xbc, .x=0x91, .y=0x20, .sp=0xca, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0xd722, .value=0xb0}, {.addr=0xd723, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0xd722, .value=0xb0, .type=IO_READ},
        {.addr=0xd723, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02A4) {
    const struct CPU_State initial_cpu = {.pc=0x95f7, .a=0x78, .x=0x99, .y=0x87, .sp=0xc0, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x95f7, .value=0xb0}, {.addr=0x95f8, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0x962b, .a=0x78, .x=0x99, .y=0x87, .sp=0xc0, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x95f7, .value=0xb0}, {.addr=0x95f8, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0x95f7, .value=0xb0, .type=IO_READ},
        {.addr=0x95f8, .value=0x32, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x14c4, .a=0x6e, .x=0xf5, .y=0xa9, .sp=0x12, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x14c4, .value=0xb0}, {.addr=0x14c5, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x1474, .a=0x6e, .x=0xf5, .y=0xa9, .sp=0x12, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x14c4, .value=0xb0}, {.addr=0x14c5, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x14c4, .value=0xb0, .type=IO_READ},
        {.addr=0x14c5, .value=0xae, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02A6) {
    const struct CPU_State initial_cpu = {.pc=0xd2fb, .a=0x82, .x=0x8f, .y=0xa8, .sp=0x93, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xd2fb, .value=0xb0}, {.addr=0xd2fc, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0xd2fd, .a=0x82, .x=0x8f, .y=0xa8, .sp=0x93, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xd2fb, .value=0xb0}, {.addr=0xd2fc, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0xd2fb, .value=0xb0, .type=IO_READ},
        {.addr=0xd2fc, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02A7) {
    const struct CPU_State initial_cpu = {.pc=0x1468, .a=0x3a, .x=0xbf, .y=0xd6, .sp=0xbb, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x1468, .value=0xb0}, {.addr=0x1469, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0x146a, .a=0x3a, .x=0xbf, .y=0xd6, .sp=0xbb, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x1468, .value=0xb0}, {.addr=0x1469, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0x1468, .value=0xb0, .type=IO_READ},
        {.addr=0x1469, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02A8) {
    const struct CPU_State initial_cpu = {.pc=0x4a3e, .a=0xe1, .x=0x3a, .y=0xaa, .sp=0x09, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x4a3e, .value=0xb0}, {.addr=0x4a3f, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x4a40, .a=0xe1, .x=0x3a, .y=0xaa, .sp=0x09, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x4a3e, .value=0xb0}, {.addr=0x4a3f, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x4a3e, .value=0xb0, .type=IO_READ},
        {.addr=0x4a3f, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02A9) {
    const struct CPU_State initial_cpu = {.pc=0xc5f4, .a=0xfc, .x=0xc5, .y=0xf5, .sp=0xb0, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xc5f4, .value=0xb0}, {.addr=0xc5f5, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0xc5f6, .a=0xfc, .x=0xc5, .y=0xf5, .sp=0xb0, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0xc5f4, .value=0xb0}, {.addr=0xc5f5, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0xc5f4, .value=0xb0, .type=IO_READ},
        {.addr=0xc5f5, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02AA) {
    const struct CPU_State initial_cpu = {.pc=0xfff1, .a=0xc2, .x=0x03, .y=0x74, .sp=0x28, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xfff1, .value=0xb0}, {.addr=0xfff2, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0xfff3, .a=0xc2, .x=0x03, .y=0x74, .sp=0x28, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0xfff1, .value=0xb0}, {.addr=0xfff2, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0xfff1, .value=0xb0, .type=IO_READ},
        {.addr=0xfff2, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02AB) {
    const struct CPU_State initial_cpu = {.pc=0x5584, .a=0x82, .x=0xb4, .y=0x16, .sp=0x10, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x5584, .value=0xb0}, {.addr=0x5585, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0x5537, .a=0x82, .x=0xb4, .y=0x16, .sp=0x10, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x5584, .value=0xb0}, {.addr=0x5585, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0x5584, .value=0xb0, .type=IO_READ},
        {.addr=0x5585, .value=0xb1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02AC) {
    const struct CPU_State initial_cpu = {.pc=0x6f84, .a=0xff, .x=0xda, .y=0x52, .sp=0x58, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x6f84, .value=0xb0}, {.addr=0x6f85, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6f66, .a=0xff, .x=0xda, .y=0x52, .sp=0x58, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x6f84, .value=0xb0}, {.addr=0x6f85, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6f84, .value=0xb0, .type=IO_READ},
        {.addr=0x6f85, .value=0xe0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02AD) {
    const struct CPU_State initial_cpu = {.pc=0xf50b, .a=0xdd, .x=0x27, .y=0xf4, .sp=0xcd, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xf50b, .value=0xb0}, {.addr=0xf50c, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0xf50d, .a=0xdd, .x=0x27, .y=0xf4, .sp=0xcd, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xf50b, .value=0xb0}, {.addr=0xf50c, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0xf50b, .value=0xb0, .type=IO_READ},
        {.addr=0xf50c, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02AE) {
    const struct CPU_State initial_cpu = {.pc=0x48bd, .a=0x5d, .x=0x3a, .y=0xa0, .sp=0x45, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x48bd, .value=0xb0}, {.addr=0x48be, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x48bf, .a=0x5d, .x=0x3a, .y=0xa0, .sp=0x45, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x48bd, .value=0xb0}, {.addr=0x48be, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x48bd, .value=0xb0, .type=IO_READ},
        {.addr=0x48be, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02AF) {
    const struct CPU_State initial_cpu = {.pc=0x1ab4, .a=0x34, .x=0x6b, .y=0xc2, .sp=0xda, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x1ab4, .value=0xb0}, {.addr=0x1ab5, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0x1ab6, .a=0x34, .x=0x6b, .y=0xc2, .sp=0xda, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x1ab4, .value=0xb0}, {.addr=0x1ab5, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0x1ab4, .value=0xb0, .type=IO_READ},
        {.addr=0x1ab5, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02B0) {
    const struct CPU_State initial_cpu = {.pc=0x276e, .a=0x75, .x=0xa8, .y=0xe9, .sp=0x95, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x276e, .value=0xb0}, {.addr=0x276f, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0x2770, .a=0x75, .x=0xa8, .y=0xe9, .sp=0x95, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x276e, .value=0xb0}, {.addr=0x276f, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0x276e, .value=0xb0, .type=IO_READ},
        {.addr=0x276f, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02B1) {
    const struct CPU_State initial_cpu = {.pc=0xf791, .a=0xe2, .x=0x32, .y=0x52, .sp=0x84, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xf791, .value=0xb0}, {.addr=0xf792, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xf752, .a=0xe2, .x=0x32, .y=0x52, .sp=0x84, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xf791, .value=0xb0}, {.addr=0xf792, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xf791, .value=0xb0, .type=IO_READ},
        {.addr=0xf792, .value=0xbf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02B2) {
    const struct CPU_State initial_cpu = {.pc=0xb8f7, .a=0x38, .x=0x34, .y=0x98, .sp=0x17, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xb8f7, .value=0xb0}, {.addr=0xb8f8, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0xb8f9, .a=0x38, .x=0x34, .y=0x98, .sp=0x17, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xb8f7, .value=0xb0}, {.addr=0xb8f8, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0xb8f7, .value=0xb0, .type=IO_READ},
        {.addr=0xb8f8, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02B3) {
    const struct CPU_State initial_cpu = {.pc=0xecf3, .a=0x15, .x=0x37, .y=0x51, .sp=0xe2, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xecf3, .value=0xb0}, {.addr=0xecf4, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0xec98, .a=0x15, .x=0x37, .y=0x51, .sp=0xe2, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0xecf3, .value=0xb0}, {.addr=0xecf4, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0xecf3, .value=0xb0, .type=IO_READ},
        {.addr=0xecf4, .value=0xa3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02B4) {
    const struct CPU_State initial_cpu = {.pc=0xb6c0, .a=0x37, .x=0x04, .y=0x23, .sp=0x43, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xb6c0, .value=0xb0}, {.addr=0xb6c1, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0xb6c2, .a=0x37, .x=0x04, .y=0x23, .sp=0x43, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xb6c0, .value=0xb0}, {.addr=0xb6c1, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0xb6c0, .value=0xb0, .type=IO_READ},
        {.addr=0xb6c1, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02B5) {
    const struct CPU_State initial_cpu = {.pc=0x6596, .a=0x96, .x=0x59, .y=0xe6, .sp=0x12, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x6596, .value=0xb0}, {.addr=0x6597, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x6598, .a=0x96, .x=0x59, .y=0xe6, .sp=0x12, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x6596, .value=0xb0}, {.addr=0x6597, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x6596, .value=0xb0, .type=IO_READ},
        {.addr=0x6597, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02B6) {
    const struct CPU_State initial_cpu = {.pc=0xbe59, .a=0xef, .x=0x05, .y=0xe2, .sp=0x75, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xbe59, .value=0xb0}, {.addr=0xbe5a, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0xbe31, .a=0xef, .x=0x05, .y=0xe2, .sp=0x75, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0xbe59, .value=0xb0}, {.addr=0xbe5a, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0xbe59, .value=0xb0, .type=IO_READ},
        {.addr=0xbe5a, .value=0xd6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02B7) {
    const struct CPU_State initial_cpu = {.pc=0xdd56, .a=0xd3, .x=0xf7, .y=0x53, .sp=0xb4, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0xdd56, .value=0xb0}, {.addr=0xdd57, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0xdd58, .a=0xd3, .x=0xf7, .y=0x53, .sp=0xb4, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xdd56, .value=0xb0}, {.addr=0xdd57, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0xdd56, .value=0xb0, .type=IO_READ},
        {.addr=0xdd57, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02B8) {
    const struct CPU_State initial_cpu = {.pc=0x11f5, .a=0x5f, .x=0xa3, .y=0x0e, .sp=0xf8, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x11f5, .value=0xb0}, {.addr=0x11f6, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0x1229, .a=0x5f, .x=0xa3, .y=0x0e, .sp=0xf8, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x11f5, .value=0xb0}, {.addr=0x11f6, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0x11f5, .value=0xb0, .type=IO_READ},
        {.addr=0x11f6, .value=0x32, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02B9) {
    const struct CPU_State initial_cpu = {.pc=0x4ed7, .a=0x44, .x=0x4b, .y=0x1a, .sp=0xb4, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x4ed7, .value=0xb0}, {.addr=0x4ed8, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0x4e7d, .a=0x44, .x=0x4b, .y=0x1a, .sp=0xb4, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x4ed7, .value=0xb0}, {.addr=0x4ed8, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0x4ed7, .value=0xb0, .type=IO_READ},
        {.addr=0x4ed8, .value=0xa4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02BA) {
    const struct CPU_State initial_cpu = {.pc=0x2585, .a=0xcd, .x=0x98, .y=0xeb, .sp=0x5d, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x2585, .value=0xb0}, {.addr=0x2586, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x2587, .a=0xcd, .x=0x98, .y=0xeb, .sp=0x5d, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x2585, .value=0xb0}, {.addr=0x2586, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x2585, .value=0xb0, .type=IO_READ},
        {.addr=0x2586, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02BB) {
    const struct CPU_State initial_cpu = {.pc=0x2bb2, .a=0xa3, .x=0x94, .y=0x2b, .sp=0x7b, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x2bb2, .value=0xb0}, {.addr=0x2bb3, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0x2bd7, .a=0xa3, .x=0x94, .y=0x2b, .sp=0x7b, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x2bb2, .value=0xb0}, {.addr=0x2bb3, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0x2bb2, .value=0xb0, .type=IO_READ},
        {.addr=0x2bb3, .value=0x23, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02BC) {
    const struct CPU_State initial_cpu = {.pc=0x088a, .a=0x48, .x=0x15, .y=0x23, .sp=0x8d, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x088a, .value=0xb0}, {.addr=0x088b, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0x088c, .a=0x48, .x=0x15, .y=0x23, .sp=0x8d, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x088a, .value=0xb0}, {.addr=0x088b, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0x088a, .value=0xb0, .type=IO_READ},
        {.addr=0x088b, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02BD) {
    const struct CPU_State initial_cpu = {.pc=0x602a, .a=0xe7, .x=0x66, .y=0x19, .sp=0x22, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x602a, .value=0xb0}, {.addr=0x602b, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0x602c, .a=0xe7, .x=0x66, .y=0x19, .sp=0x22, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x602a, .value=0xb0}, {.addr=0x602b, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0x602a, .value=0xb0, .type=IO_READ},
        {.addr=0x602b, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02BE) {
    const struct CPU_State initial_cpu = {.pc=0xafbe, .a=0x5f, .x=0x3b, .y=0x90, .sp=0x99, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0xafbe, .value=0xb0}, {.addr=0xafbf, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xafc0, .a=0x5f, .x=0x3b, .y=0x90, .sp=0x99, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xafbe, .value=0xb0}, {.addr=0xafbf, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xafbe, .value=0xb0, .type=IO_READ},
        {.addr=0xafbf, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02BF) {
    const struct CPU_State initial_cpu = {.pc=0x5b33, .a=0xc4, .x=0x4c, .y=0xd5, .sp=0x10, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x5b33, .value=0xb0}, {.addr=0x5b34, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0x5b35, .a=0xc4, .x=0x4c, .y=0xd5, .sp=0x10, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x5b33, .value=0xb0}, {.addr=0x5b34, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0x5b33, .value=0xb0, .type=IO_READ},
        {.addr=0x5b34, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02C0) {
    const struct CPU_State initial_cpu = {.pc=0x036c, .a=0xed, .x=0x9e, .y=0x43, .sp=0xe1, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x036c, .value=0xb0}, {.addr=0x036d, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x036e, .a=0xed, .x=0x9e, .y=0x43, .sp=0xe1, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x036c, .value=0xb0}, {.addr=0x036d, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x036c, .value=0xb0, .type=IO_READ},
        {.addr=0x036d, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02C1) {
    const struct CPU_State initial_cpu = {.pc=0x0ae3, .a=0x1a, .x=0x95, .y=0x31, .sp=0xed, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x0ae3, .value=0xb0}, {.addr=0x0ae4, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0x0ae5, .a=0x1a, .x=0x95, .y=0x31, .sp=0xed, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x0ae3, .value=0xb0}, {.addr=0x0ae4, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0x0ae3, .value=0xb0, .type=IO_READ},
        {.addr=0x0ae4, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02C2) {
    const struct CPU_State initial_cpu = {.pc=0x9ccc, .a=0x9e, .x=0x88, .y=0xd5, .sp=0x98, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x9ccc, .value=0xb0}, {.addr=0x9ccd, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0x9cce, .a=0x9e, .x=0x88, .y=0xd5, .sp=0x98, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x9ccc, .value=0xb0}, {.addr=0x9ccd, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0x9ccc, .value=0xb0, .type=IO_READ},
        {.addr=0x9ccd, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02C3) {
    const struct CPU_State initial_cpu = {.pc=0xd2e5, .a=0x67, .x=0x48, .y=0xbf, .sp=0x8d, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xd2e5, .value=0xb0}, {.addr=0xd2e6, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0xd2e7, .a=0x67, .x=0x48, .y=0xbf, .sp=0x8d, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0xd2e5, .value=0xb0}, {.addr=0xd2e6, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0xd2e5, .value=0xb0, .type=IO_READ},
        {.addr=0xd2e6, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02C4) {
    const struct CPU_State initial_cpu = {.pc=0xa817, .a=0xfd, .x=0x7b, .y=0xb3, .sp=0xe5, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xa817, .value=0xb0}, {.addr=0xa818, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0xa7ce, .a=0xfd, .x=0x7b, .y=0xb3, .sp=0xe5, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xa817, .value=0xb0}, {.addr=0xa818, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0xa817, .value=0xb0, .type=IO_READ},
        {.addr=0xa818, .value=0xb5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x56cf, .a=0x1a, .x=0xcc, .y=0x0a, .sp=0x67, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x56cf, .value=0xb0}, {.addr=0x56d0, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0x5695, .a=0x1a, .x=0xcc, .y=0x0a, .sp=0x67, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x56cf, .value=0xb0}, {.addr=0x56d0, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0x56cf, .value=0xb0, .type=IO_READ},
        {.addr=0x56d0, .value=0xc4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02C6) {
    const struct CPU_State initial_cpu = {.pc=0x4a5c, .a=0x84, .x=0xe7, .y=0x6c, .sp=0x4e, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x4a5c, .value=0xb0}, {.addr=0x4a5d, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x4aba, .a=0x84, .x=0xe7, .y=0x6c, .sp=0x4e, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x4a5c, .value=0xb0}, {.addr=0x4a5d, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x4a5c, .value=0xb0, .type=IO_READ},
        {.addr=0x4a5d, .value=0x5c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02C7) {
    const struct CPU_State initial_cpu = {.pc=0x7ff2, .a=0x5d, .x=0xad, .y=0xb6, .sp=0x37, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x7ff2, .value=0xb0}, {.addr=0x7ff3, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x7ff4, .a=0x5d, .x=0xad, .y=0xb6, .sp=0x37, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x7ff2, .value=0xb0}, {.addr=0x7ff3, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x7ff2, .value=0xb0, .type=IO_READ},
        {.addr=0x7ff3, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02C8) {
    const struct CPU_State initial_cpu = {.pc=0xe0a3, .a=0x96, .x=0x24, .y=0xef, .sp=0xff, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xe0a3, .value=0xb0}, {.addr=0xe0a4, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0xe0a5, .a=0x96, .x=0x24, .y=0xef, .sp=0xff, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0xe0a3, .value=0xb0}, {.addr=0xe0a4, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0xe0a3, .value=0xb0, .type=IO_READ},
        {.addr=0xe0a4, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02C9) {
    const struct CPU_State initial_cpu = {.pc=0x748b, .a=0xfc, .x=0x33, .y=0x69, .sp=0x72, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x748b, .value=0xb0}, {.addr=0x748c, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0x748d, .a=0xfc, .x=0x33, .y=0x69, .sp=0x72, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x748b, .value=0xb0}, {.addr=0x748c, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0x748b, .value=0xb0, .type=IO_READ},
        {.addr=0x748c, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02CA) {
    const struct CPU_State initial_cpu = {.pc=0xf391, .a=0x37, .x=0x52, .y=0xd6, .sp=0xe5, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xf391, .value=0xb0}, {.addr=0xf392, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0xf346, .a=0x37, .x=0x52, .y=0xd6, .sp=0xe5, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xf391, .value=0xb0}, {.addr=0xf392, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0xf391, .value=0xb0, .type=IO_READ},
        {.addr=0xf392, .value=0xb3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02CB) {
    const struct CPU_State initial_cpu = {.pc=0x1307, .a=0x6f, .x=0xcd, .y=0x78, .sp=0xc7, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x1307, .value=0xb0}, {.addr=0x1308, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0x1309, .a=0x6f, .x=0xcd, .y=0x78, .sp=0xc7, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x1307, .value=0xb0}, {.addr=0x1308, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0x1307, .value=0xb0, .type=IO_READ},
        {.addr=0x1308, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02CC) {
    const struct CPU_State initial_cpu = {.pc=0x959f, .a=0xb3, .x=0x24, .y=0xae, .sp=0x27, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x959f, .value=0xb0}, {.addr=0x95a0, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x95e5, .a=0xb3, .x=0x24, .y=0xae, .sp=0x27, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x959f, .value=0xb0}, {.addr=0x95a0, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x959f, .value=0xb0, .type=IO_READ},
        {.addr=0x95a0, .value=0x44, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02CD) {
    const struct CPU_State initial_cpu = {.pc=0x256d, .a=0x57, .x=0x4d, .y=0xb3, .sp=0xec, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x256d, .value=0xb0}, {.addr=0x256e, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0x256f, .a=0x57, .x=0x4d, .y=0xb3, .sp=0xec, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x256d, .value=0xb0}, {.addr=0x256e, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0x256d, .value=0xb0, .type=IO_READ},
        {.addr=0x256e, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02CE) {
    const struct CPU_State initial_cpu = {.pc=0xb1aa, .a=0x32, .x=0xef, .y=0x2d, .sp=0x22, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xb1aa, .value=0xb0}, {.addr=0xb1ab, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0xb1ac, .a=0x32, .x=0xef, .y=0x2d, .sp=0x22, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0xb1aa, .value=0xb0}, {.addr=0xb1ab, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0xb1aa, .value=0xb0, .type=IO_READ},
        {.addr=0xb1ab, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02CF) {
    const struct CPU_State initial_cpu = {.pc=0x5830, .a=0x28, .x=0xe3, .y=0xfa, .sp=0x0d, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x5830, .value=0xb0}, {.addr=0x5831, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0x5832, .a=0x28, .x=0xe3, .y=0xfa, .sp=0x0d, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x5830, .value=0xb0}, {.addr=0x5831, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0x5830, .value=0xb0, .type=IO_READ},
        {.addr=0x5831, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02D0) {
    const struct CPU_State initial_cpu = {.pc=0xcb8a, .a=0xae, .x=0x08, .y=0x44, .sp=0xd0, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0xcb8a, .value=0xb0}, {.addr=0xcb8b, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0xcbed, .a=0xae, .x=0x08, .y=0x44, .sp=0xd0, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0xcb8a, .value=0xb0}, {.addr=0xcb8b, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0xcb8a, .value=0xb0, .type=IO_READ},
        {.addr=0xcb8b, .value=0x61, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02D1) {
    const struct CPU_State initial_cpu = {.pc=0xedc1, .a=0x44, .x=0xd7, .y=0x13, .sp=0xa4, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xedc1, .value=0xb0}, {.addr=0xedc2, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0xedc3, .a=0x44, .x=0xd7, .y=0x13, .sp=0xa4, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0xedc1, .value=0xb0}, {.addr=0xedc2, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0xedc1, .value=0xb0, .type=IO_READ},
        {.addr=0xedc2, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x80d4, .a=0x8d, .x=0x11, .y=0x87, .sp=0xcd, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x80d4, .value=0xb0}, {.addr=0x80d5, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x80d6, .a=0x8d, .x=0x11, .y=0x87, .sp=0xcd, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x80d4, .value=0xb0}, {.addr=0x80d5, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x80d4, .value=0xb0, .type=IO_READ},
        {.addr=0x80d5, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02D3) {
    const struct CPU_State initial_cpu = {.pc=0x6341, .a=0x50, .x=0x00, .y=0x07, .sp=0xcf, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x6341, .value=0xb0}, {.addr=0x6342, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x636e, .a=0x50, .x=0x00, .y=0x07, .sp=0xcf, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x6341, .value=0xb0}, {.addr=0x6342, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x6341, .value=0xb0, .type=IO_READ},
        {.addr=0x6342, .value=0x2b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02D4) {
    const struct CPU_State initial_cpu = {.pc=0xff03, .a=0x8a, .x=0x4e, .y=0x70, .sp=0x09, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xff03, .value=0xb0}, {.addr=0xff04, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0xff05, .a=0x8a, .x=0x4e, .y=0x70, .sp=0x09, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0xff03, .value=0xb0}, {.addr=0xff04, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0xff03, .value=0xb0, .type=IO_READ},
        {.addr=0xff04, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02D5) {
    const struct CPU_State initial_cpu = {.pc=0x6770, .a=0x83, .x=0x05, .y=0x12, .sp=0x4f, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x6770, .value=0xb0}, {.addr=0x6771, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0x6772, .a=0x83, .x=0x05, .y=0x12, .sp=0x4f, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x6770, .value=0xb0}, {.addr=0x6771, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0x6770, .value=0xb0, .type=IO_READ},
        {.addr=0x6771, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02D6) {
    const struct CPU_State initial_cpu = {.pc=0xad27, .a=0xe7, .x=0xde, .y=0x86, .sp=0x54, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0xad27, .value=0xb0}, {.addr=0xad28, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0xad52, .a=0xe7, .x=0xde, .y=0x86, .sp=0x54, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0xad27, .value=0xb0}, {.addr=0xad28, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0xad27, .value=0xb0, .type=IO_READ},
        {.addr=0xad28, .value=0x29, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02D7) {
    const struct CPU_State initial_cpu = {.pc=0x9528, .a=0x6a, .x=0x56, .y=0x4a, .sp=0xae, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x9528, .value=0xb0}, {.addr=0x9529, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0x954d, .a=0x6a, .x=0x56, .y=0x4a, .sp=0xae, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x9528, .value=0xb0}, {.addr=0x9529, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0x9528, .value=0xb0, .type=IO_READ},
        {.addr=0x9529, .value=0x23, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02D8) {
    const struct CPU_State initial_cpu = {.pc=0x5513, .a=0x50, .x=0xe8, .y=0x61, .sp=0xe0, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x5513, .value=0xb0}, {.addr=0x5514, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0x5515, .a=0x50, .x=0xe8, .y=0x61, .sp=0xe0, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x5513, .value=0xb0}, {.addr=0x5514, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0x5513, .value=0xb0, .type=IO_READ},
        {.addr=0x5514, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02D9) {
    const struct CPU_State initial_cpu = {.pc=0x6ced, .a=0x8d, .x=0x22, .y=0xde, .sp=0xe9, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x6ced, .value=0xb0}, {.addr=0x6cee, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x6d2f, .a=0x8d, .x=0x22, .y=0xde, .sp=0xe9, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x6ced, .value=0xb0}, {.addr=0x6cee, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x6ced, .value=0xb0, .type=IO_READ},
        {.addr=0x6cee, .value=0x40, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02DA) {
    const struct CPU_State initial_cpu = {.pc=0xaf5a, .a=0xf1, .x=0xd7, .y=0x92, .sp=0x95, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xaf5a, .value=0xb0}, {.addr=0xaf5b, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0xaf5c, .a=0xf1, .x=0xd7, .y=0x92, .sp=0x95, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xaf5a, .value=0xb0}, {.addr=0xaf5b, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0xaf5a, .value=0xb0, .type=IO_READ},
        {.addr=0xaf5b, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02DB) {
    const struct CPU_State initial_cpu = {.pc=0x5a25, .a=0x0a, .x=0xa4, .y=0xed, .sp=0xdc, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x5a25, .value=0xb0}, {.addr=0x5a26, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x5a57, .a=0x0a, .x=0xa4, .y=0xed, .sp=0xdc, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x5a25, .value=0xb0}, {.addr=0x5a26, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x5a25, .value=0xb0, .type=IO_READ},
        {.addr=0x5a26, .value=0x30, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02DC) {
    const struct CPU_State initial_cpu = {.pc=0xa20a, .a=0x6a, .x=0x4f, .y=0x06, .sp=0xf4, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0xa20a, .value=0xb0}, {.addr=0xa20b, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0xa20c, .a=0x6a, .x=0x4f, .y=0x06, .sp=0xf4, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0xa20a, .value=0xb0}, {.addr=0xa20b, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0xa20a, .value=0xb0, .type=IO_READ},
        {.addr=0xa20b, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02DD) {
    const struct CPU_State initial_cpu = {.pc=0xc390, .a=0x60, .x=0x78, .y=0x35, .sp=0xd4, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xc390, .value=0xb0}, {.addr=0xc391, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0xc392, .a=0x60, .x=0x78, .y=0x35, .sp=0xd4, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xc390, .value=0xb0}, {.addr=0xc391, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0xc390, .value=0xb0, .type=IO_READ},
        {.addr=0xc391, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02DE) {
    const struct CPU_State initial_cpu = {.pc=0x054d, .a=0x9b, .x=0x16, .y=0x8c, .sp=0xa2, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x054d, .value=0xb0}, {.addr=0x054e, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0x04f9, .a=0x9b, .x=0x16, .y=0x8c, .sp=0xa2, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x054d, .value=0xb0}, {.addr=0x054e, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0x054d, .value=0xb0, .type=IO_READ},
        {.addr=0x054e, .value=0xaa, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02DF) {
    const struct CPU_State initial_cpu = {.pc=0x1463, .a=0x6f, .x=0x67, .y=0xff, .sp=0xa0, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x1463, .value=0xb0}, {.addr=0x1464, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0x1467, .a=0x6f, .x=0x67, .y=0xff, .sp=0xa0, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x1463, .value=0xb0}, {.addr=0x1464, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0x1463, .value=0xb0, .type=IO_READ},
        {.addr=0x1464, .value=0x02, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02E0) {
    const struct CPU_State initial_cpu = {.pc=0x0a36, .a=0x2f, .x=0xdf, .y=0xb8, .sp=0x2d, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x0a36, .value=0xb0}, {.addr=0x0a37, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0x09ea, .a=0x2f, .x=0xdf, .y=0xb8, .sp=0x2d, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x0a36, .value=0xb0}, {.addr=0x0a37, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0x0a36, .value=0xb0, .type=IO_READ},
        {.addr=0x0a37, .value=0xb2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02E1) {
    const struct CPU_State initial_cpu = {.pc=0x3f51, .a=0x90, .x=0x54, .y=0x17, .sp=0x0c, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x3f51, .value=0xb0}, {.addr=0x3f52, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0x3eea, .a=0x90, .x=0x54, .y=0x17, .sp=0x0c, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x3f51, .value=0xb0}, {.addr=0x3f52, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0x3f51, .value=0xb0, .type=IO_READ},
        {.addr=0x3f52, .value=0x97, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02E2) {
    const struct CPU_State initial_cpu = {.pc=0x3e14, .a=0x5a, .x=0x36, .y=0x19, .sp=0x22, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x3e14, .value=0xb0}, {.addr=0x3e15, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0x3e50, .a=0x5a, .x=0x36, .y=0x19, .sp=0x22, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x3e14, .value=0xb0}, {.addr=0x3e15, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0x3e14, .value=0xb0, .type=IO_READ},
        {.addr=0x3e15, .value=0x3a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02E3) {
    const struct CPU_State initial_cpu = {.pc=0xffd6, .a=0x1b, .x=0x4a, .y=0x7a, .sp=0x43, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xffd6, .value=0xb0}, {.addr=0xffd7, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0x002b, .a=0x1b, .x=0x4a, .y=0x7a, .sp=0x43, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0xffd6, .value=0xb0}, {.addr=0xffd7, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0xffd6, .value=0xb0, .type=IO_READ},
        {.addr=0xffd7, .value=0x53, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02E4) {
    const struct CPU_State initial_cpu = {.pc=0xa959, .a=0xce, .x=0x87, .y=0xe9, .sp=0x7d, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xa959, .value=0xb0}, {.addr=0xa95a, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0xa8dc, .a=0xce, .x=0x87, .y=0xe9, .sp=0x7d, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xa959, .value=0xb0}, {.addr=0xa95a, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0xa959, .value=0xb0, .type=IO_READ},
        {.addr=0xa95a, .value=0x81, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02E5) {
    const struct CPU_State initial_cpu = {.pc=0xb5cd, .a=0xcc, .x=0x22, .y=0x59, .sp=0x02, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xb5cd, .value=0xb0}, {.addr=0xb5ce, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xb5cf, .a=0xcc, .x=0x22, .y=0x59, .sp=0x02, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0xb5cd, .value=0xb0}, {.addr=0xb5ce, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xb5cd, .value=0xb0, .type=IO_READ},
        {.addr=0xb5ce, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02E6) {
    const struct CPU_State initial_cpu = {.pc=0x1a9e, .a=0x32, .x=0xb6, .y=0xf0, .sp=0x8a, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x1a9e, .value=0xb0}, {.addr=0x1a9f, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0x1a70, .a=0x32, .x=0xb6, .y=0xf0, .sp=0x8a, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x1a9e, .value=0xb0}, {.addr=0x1a9f, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0x1a9e, .value=0xb0, .type=IO_READ},
        {.addr=0x1a9f, .value=0xd0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02E7) {
    const struct CPU_State initial_cpu = {.pc=0x2680, .a=0x60, .x=0xa8, .y=0xbc, .sp=0xa4, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x2680, .value=0xb0}, {.addr=0x2681, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x2661, .a=0x60, .x=0xa8, .y=0xbc, .sp=0xa4, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x2680, .value=0xb0}, {.addr=0x2681, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x2680, .value=0xb0, .type=IO_READ},
        {.addr=0x2681, .value=0xdf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02E8) {
    const struct CPU_State initial_cpu = {.pc=0x720c, .a=0xbb, .x=0xdb, .y=0x6c, .sp=0x03, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x720c, .value=0xb0}, {.addr=0x720d, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x71fc, .a=0xbb, .x=0xdb, .y=0x6c, .sp=0x03, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x720c, .value=0xb0}, {.addr=0x720d, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x720c, .value=0xb0, .type=IO_READ},
        {.addr=0x720d, .value=0xee, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02E9) {
    const struct CPU_State initial_cpu = {.pc=0x15ac, .a=0x2f, .x=0x11, .y=0x64, .sp=0x35, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x15ac, .value=0xb0}, {.addr=0x15ad, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0x15ae, .a=0x2f, .x=0x11, .y=0x64, .sp=0x35, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x15ac, .value=0xb0}, {.addr=0x15ad, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0x15ac, .value=0xb0, .type=IO_READ},
        {.addr=0x15ad, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02EA) {
    const struct CPU_State initial_cpu = {.pc=0xd1a5, .a=0x41, .x=0xc7, .y=0x76, .sp=0x72, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xd1a5, .value=0xb0}, {.addr=0xd1a6, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0xd1ca, .a=0x41, .x=0xc7, .y=0x76, .sp=0x72, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0xd1a5, .value=0xb0}, {.addr=0xd1a6, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0xd1a5, .value=0xb0, .type=IO_READ},
        {.addr=0xd1a6, .value=0x23, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02EB) {
    const struct CPU_State initial_cpu = {.pc=0x2a5f, .a=0x2c, .x=0xc4, .y=0xac, .sp=0x52, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x2a5f, .value=0xb0}, {.addr=0x2a60, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0x2a2b, .a=0x2c, .x=0xc4, .y=0xac, .sp=0x52, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x2a5f, .value=0xb0}, {.addr=0x2a60, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0x2a5f, .value=0xb0, .type=IO_READ},
        {.addr=0x2a60, .value=0xca, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02EC) {
    const struct CPU_State initial_cpu = {.pc=0xbda1, .a=0x78, .x=0x81, .y=0x2d, .sp=0x00, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xbda1, .value=0xb0}, {.addr=0xbda2, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0xbda3, .a=0x78, .x=0x81, .y=0x2d, .sp=0x00, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xbda1, .value=0xb0}, {.addr=0xbda2, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0xbda1, .value=0xb0, .type=IO_READ},
        {.addr=0xbda2, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02ED) {
    const struct CPU_State initial_cpu = {.pc=0xaec5, .a=0x89, .x=0x6d, .y=0x21, .sp=0x3b, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xaec5, .value=0xb0}, {.addr=0xaec6, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xaea6, .a=0x89, .x=0x6d, .y=0x21, .sp=0x3b, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0xaec5, .value=0xb0}, {.addr=0xaec6, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xaec5, .value=0xb0, .type=IO_READ},
        {.addr=0xaec6, .value=0xdf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02EE) {
    const struct CPU_State initial_cpu = {.pc=0x9e9b, .a=0xb5, .x=0x72, .y=0x9d, .sp=0xd8, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x9e9b, .value=0xb0}, {.addr=0x9e9c, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x9ef5, .a=0xb5, .x=0x72, .y=0x9d, .sp=0xd8, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x9e9b, .value=0xb0}, {.addr=0x9e9c, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x9e9b, .value=0xb0, .type=IO_READ},
        {.addr=0x9e9c, .value=0x58, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02EF) {
    const struct CPU_State initial_cpu = {.pc=0x5256, .a=0xdb, .x=0x3f, .y=0x5e, .sp=0x08, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x5256, .value=0xb0}, {.addr=0x5257, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0x5241, .a=0xdb, .x=0x3f, .y=0x5e, .sp=0x08, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x5256, .value=0xb0}, {.addr=0x5257, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0x5256, .value=0xb0, .type=IO_READ},
        {.addr=0x5257, .value=0xe9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02F0) {
    const struct CPU_State initial_cpu = {.pc=0x130e, .a=0xfa, .x=0x85, .y=0xe0, .sp=0x81, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x130e, .value=0xb0}, {.addr=0x130f, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x130c, .a=0xfa, .x=0x85, .y=0xe0, .sp=0x81, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x130e, .value=0xb0}, {.addr=0x130f, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x130e, .value=0xb0, .type=IO_READ},
        {.addr=0x130f, .value=0xfc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02F1) {
    const struct CPU_State initial_cpu = {.pc=0xb347, .a=0x88, .x=0xa5, .y=0xed, .sp=0xcc, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xb347, .value=0xb0}, {.addr=0xb348, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0xb2d1, .a=0x88, .x=0xa5, .y=0xed, .sp=0xcc, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xb347, .value=0xb0}, {.addr=0xb348, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0xb347, .value=0xb0, .type=IO_READ},
        {.addr=0xb348, .value=0x88, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02F2) {
    const struct CPU_State initial_cpu = {.pc=0x1c4c, .a=0xda, .x=0x53, .y=0xb4, .sp=0x7d, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x1c4c, .value=0xb0}, {.addr=0x1c4d, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0x1c75, .a=0xda, .x=0x53, .y=0xb4, .sp=0x7d, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x1c4c, .value=0xb0}, {.addr=0x1c4d, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0x1c4c, .value=0xb0, .type=IO_READ},
        {.addr=0x1c4d, .value=0x27, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02F3) {
    const struct CPU_State initial_cpu = {.pc=0x9898, .a=0xd3, .x=0x72, .y=0xda, .sp=0x07, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x9898, .value=0xb0}, {.addr=0x9899, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0x98d3, .a=0xd3, .x=0x72, .y=0xda, .sp=0x07, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x9898, .value=0xb0}, {.addr=0x9899, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0x9898, .value=0xb0, .type=IO_READ},
        {.addr=0x9899, .value=0x39, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02F4) {
    const struct CPU_State initial_cpu = {.pc=0x9ee4, .a=0xf2, .x=0xaa, .y=0xff, .sp=0xaa, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x9ee4, .value=0xb0}, {.addr=0x9ee5, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0x9ecb, .a=0xf2, .x=0xaa, .y=0xff, .sp=0xaa, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x9ee4, .value=0xb0}, {.addr=0x9ee5, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0x9ee4, .value=0xb0, .type=IO_READ},
        {.addr=0x9ee5, .value=0xe5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02F5) {
    const struct CPU_State initial_cpu = {.pc=0x4380, .a=0xdf, .x=0x2c, .y=0xa4, .sp=0x4c, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x4380, .value=0xb0}, {.addr=0x4381, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0x43a9, .a=0xdf, .x=0x2c, .y=0xa4, .sp=0x4c, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x4380, .value=0xb0}, {.addr=0x4381, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0x4380, .value=0xb0, .type=IO_READ},
        {.addr=0x4381, .value=0x27, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02F6) {
    const struct CPU_State initial_cpu = {.pc=0xffb0, .a=0xb2, .x=0x80, .y=0x01, .sp=0x5e, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xffb0, .value=0xb0}, {.addr=0xffb1, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0xffd4, .a=0xb2, .x=0x80, .y=0x01, .sp=0x5e, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0xffb0, .value=0xb0}, {.addr=0xffb1, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0xffb0, .value=0xb0, .type=IO_READ},
        {.addr=0xffb1, .value=0x22, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02F7) {
    const struct CPU_State initial_cpu = {.pc=0x3d05, .a=0x18, .x=0x52, .y=0xa2, .sp=0x22, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x3d05, .value=0xb0}, {.addr=0x3d06, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x3d07, .a=0x18, .x=0x52, .y=0xa2, .sp=0x22, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x3d05, .value=0xb0}, {.addr=0x3d06, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x3d05, .value=0xb0, .type=IO_READ},
        {.addr=0x3d06, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02F8) {
    const struct CPU_State initial_cpu = {.pc=0xbefd, .a=0x39, .x=0xee, .y=0xe9, .sp=0x13, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xbefd, .value=0xb0}, {.addr=0xbefe, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xbeff, .a=0x39, .x=0xee, .y=0xe9, .sp=0x13, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xbefd, .value=0xb0}, {.addr=0xbefe, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xbefd, .value=0xb0, .type=IO_READ},
        {.addr=0xbefe, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02F9) {
    const struct CPU_State initial_cpu = {.pc=0xbc79, .a=0x36, .x=0xd2, .y=0xfa, .sp=0xc3, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xbc79, .value=0xb0}, {.addr=0xbc7a, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0xbc66, .a=0x36, .x=0xd2, .y=0xfa, .sp=0xc3, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0xbc79, .value=0xb0}, {.addr=0xbc7a, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0xbc79, .value=0xb0, .type=IO_READ},
        {.addr=0xbc7a, .value=0xeb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02FA) {
    const struct CPU_State initial_cpu = {.pc=0x70d5, .a=0xb9, .x=0x53, .y=0xc3, .sp=0xb7, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x70d5, .value=0xb0}, {.addr=0x70d6, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0x70d7, .a=0xb9, .x=0x53, .y=0xc3, .sp=0xb7, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x70d5, .value=0xb0}, {.addr=0x70d6, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0x70d5, .value=0xb0, .type=IO_READ},
        {.addr=0x70d6, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02FB) {
    const struct CPU_State initial_cpu = {.pc=0xc329, .a=0x3b, .x=0x59, .y=0x8a, .sp=0xbe, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xc329, .value=0xb0}, {.addr=0xc32a, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0xc32b, .a=0x3b, .x=0x59, .y=0x8a, .sp=0xbe, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xc329, .value=0xb0}, {.addr=0xc32a, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0xc329, .value=0xb0, .type=IO_READ},
        {.addr=0xc32a, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02FC) {
    const struct CPU_State initial_cpu = {.pc=0x0716, .a=0xbc, .x=0x0b, .y=0x92, .sp=0x8e, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x0716, .value=0xb0}, {.addr=0x0717, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0x0772, .a=0xbc, .x=0x0b, .y=0x92, .sp=0x8e, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x0716, .value=0xb0}, {.addr=0x0717, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0x0716, .value=0xb0, .type=IO_READ},
        {.addr=0x0717, .value=0x5a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02FD) {
    const struct CPU_State initial_cpu = {.pc=0x9b20, .a=0x7b, .x=0x83, .y=0xb7, .sp=0xba, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x9b20, .value=0xb0}, {.addr=0x9b21, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0x9b22, .a=0x7b, .x=0x83, .y=0xb7, .sp=0xba, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x9b20, .value=0xb0}, {.addr=0x9b21, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0x9b20, .value=0xb0, .type=IO_READ},
        {.addr=0x9b21, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02FE) {
    const struct CPU_State initial_cpu = {.pc=0x0c87, .a=0x07, .x=0xec, .y=0x9b, .sp=0xb0, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x0c87, .value=0xb0}, {.addr=0x0c88, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x0cd5, .a=0x07, .x=0xec, .y=0x9b, .sp=0xb0, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0c87, .value=0xb0}, {.addr=0x0c88, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x0c87, .value=0xb0, .type=IO_READ},
        {.addr=0x0c88, .value=0x4c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x7c5b, .a=0xc7, .x=0x4b, .y=0xc6, .sp=0x5a, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x7c5b, .value=0xb0}, {.addr=0x7c5c, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0x7caf, .a=0xc7, .x=0x4b, .y=0xc6, .sp=0x5a, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x7c5b, .value=0xb0}, {.addr=0x7c5c, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0x7c5b, .value=0xb0, .type=IO_READ},
        {.addr=0x7c5c, .value=0x52, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0300) {
    const struct CPU_State initial_cpu = {.pc=0xc3bf, .a=0xb4, .x=0x39, .y=0x77, .sp=0xd5, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xc3bf, .value=0xb0}, {.addr=0xc3c0, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0xc3c3, .a=0xb4, .x=0x39, .y=0x77, .sp=0xd5, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xc3bf, .value=0xb0}, {.addr=0xc3c0, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0xc3bf, .value=0xb0, .type=IO_READ},
        {.addr=0xc3c0, .value=0x02, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0301) {
    const struct CPU_State initial_cpu = {.pc=0x9372, .a=0xae, .x=0x9a, .y=0xd6, .sp=0xcb, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x9372, .value=0xb0}, {.addr=0x9373, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0x931f, .a=0xae, .x=0x9a, .y=0xd6, .sp=0xcb, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x9372, .value=0xb0}, {.addr=0x9373, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0x9372, .value=0xb0, .type=IO_READ},
        {.addr=0x9373, .value=0xab, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0302) {
    const struct CPU_State initial_cpu = {.pc=0x0951, .a=0x17, .x=0xd4, .y=0x59, .sp=0xc5, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x0951, .value=0xb0}, {.addr=0x0952, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x0941, .a=0x17, .x=0xd4, .y=0x59, .sp=0xc5, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x0951, .value=0xb0}, {.addr=0x0952, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x0951, .value=0xb0, .type=IO_READ},
        {.addr=0x0952, .value=0xee, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0303) {
    const struct CPU_State initial_cpu = {.pc=0xbd69, .a=0xf0, .x=0xff, .y=0xe0, .sp=0x03, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xbd69, .value=0xb0}, {.addr=0xbd6a, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0xbdbf, .a=0xf0, .x=0xff, .y=0xe0, .sp=0x03, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0xbd69, .value=0xb0}, {.addr=0xbd6a, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0xbd69, .value=0xb0, .type=IO_READ},
        {.addr=0xbd6a, .value=0x54, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0304) {
    const struct CPU_State initial_cpu = {.pc=0x6fd9, .a=0x2c, .x=0x3c, .y=0x4b, .sp=0xa1, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x6fd9, .value=0xb0}, {.addr=0x6fda, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0x6fdb, .a=0x2c, .x=0x3c, .y=0x4b, .sp=0xa1, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x6fd9, .value=0xb0}, {.addr=0x6fda, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0x6fd9, .value=0xb0, .type=IO_READ},
        {.addr=0x6fda, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0305) {
    const struct CPU_State initial_cpu = {.pc=0xa788, .a=0x0c, .x=0x8c, .y=0x43, .sp=0xe8, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xa788, .value=0xb0}, {.addr=0xa789, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xa78a, .a=0x0c, .x=0x8c, .y=0x43, .sp=0xe8, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xa788, .value=0xb0}, {.addr=0xa789, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xa788, .value=0xb0, .type=IO_READ},
        {.addr=0xa789, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0306) {
    const struct CPU_State initial_cpu = {.pc=0x51f5, .a=0x67, .x=0x24, .y=0xc1, .sp=0x22, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x51f5, .value=0xb0}, {.addr=0x51f6, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0x5230, .a=0x67, .x=0x24, .y=0xc1, .sp=0x22, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x51f5, .value=0xb0}, {.addr=0x51f6, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0x51f5, .value=0xb0, .type=IO_READ},
        {.addr=0x51f6, .value=0x39, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0307) {
    const struct CPU_State initial_cpu = {.pc=0x80a3, .a=0x07, .x=0x78, .y=0x3c, .sp=0xfd, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x80a3, .value=0xb0}, {.addr=0x80a4, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x811d, .a=0x07, .x=0x78, .y=0x3c, .sp=0xfd, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x80a3, .value=0xb0}, {.addr=0x80a4, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x80a3, .value=0xb0, .type=IO_READ},
        {.addr=0x80a4, .value=0x78, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0308) {
    const struct CPU_State initial_cpu = {.pc=0x4303, .a=0x84, .x=0xf5, .y=0xcc, .sp=0xac, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x4303, .value=0xb0}, {.addr=0x4304, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0x42de, .a=0x84, .x=0xf5, .y=0xcc, .sp=0xac, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x4303, .value=0xb0}, {.addr=0x4304, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0x4303, .value=0xb0, .type=IO_READ},
        {.addr=0x4304, .value=0xd9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0309) {
    const struct CPU_State initial_cpu = {.pc=0x1ab8, .a=0xf9, .x=0x3c, .y=0xa8, .sp=0x4f, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x1ab8, .value=0xb0}, {.addr=0x1ab9, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0x1aca, .a=0xf9, .x=0x3c, .y=0xa8, .sp=0x4f, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x1ab8, .value=0xb0}, {.addr=0x1ab9, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0x1ab8, .value=0xb0, .type=IO_READ},
        {.addr=0x1ab9, .value=0x10, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_030A) {
    const struct CPU_State initial_cpu = {.pc=0x0ae2, .a=0x49, .x=0x10, .y=0x0d, .sp=0x31, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x0ae2, .value=0xb0}, {.addr=0x0ae3, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x0ae4, .a=0x49, .x=0x10, .y=0x0d, .sp=0x31, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x0ae2, .value=0xb0}, {.addr=0x0ae3, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x0ae2, .value=0xb0, .type=IO_READ},
        {.addr=0x0ae3, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_030B) {
    const struct CPU_State initial_cpu = {.pc=0xbc26, .a=0x3a, .x=0x59, .y=0x56, .sp=0x94, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xbc26, .value=0xb0}, {.addr=0xbc27, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xbc28, .a=0x3a, .x=0x59, .y=0x56, .sp=0x94, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0xbc26, .value=0xb0}, {.addr=0xbc27, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xbc26, .value=0xb0, .type=IO_READ},
        {.addr=0xbc27, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_030C) {
    const struct CPU_State initial_cpu = {.pc=0x8acc, .a=0xf0, .x=0x7a, .y=0x97, .sp=0xc5, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x8acc, .value=0xb0}, {.addr=0x8acd, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0x8af2, .a=0xf0, .x=0x7a, .y=0x97, .sp=0xc5, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x8acc, .value=0xb0}, {.addr=0x8acd, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0x8acc, .value=0xb0, .type=IO_READ},
        {.addr=0x8acd, .value=0x24, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_030D) {
    const struct CPU_State initial_cpu = {.pc=0x5227, .a=0x74, .x=0x0e, .y=0xef, .sp=0x03, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x5227, .value=0xb0}, {.addr=0x5228, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0x51f9, .a=0x74, .x=0x0e, .y=0xef, .sp=0x03, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x5227, .value=0xb0}, {.addr=0x5228, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0x5227, .value=0xb0, .type=IO_READ},
        {.addr=0x5228, .value=0xd0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_030E) {
    const struct CPU_State initial_cpu = {.pc=0xa7fe, .a=0x0a, .x=0xbe, .y=0x06, .sp=0x7b, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xa7fe, .value=0xb0}, {.addr=0xa7ff, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0xa800, .a=0x0a, .x=0xbe, .y=0x06, .sp=0x7b, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0xa7fe, .value=0xb0}, {.addr=0xa7ff, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0xa7fe, .value=0xb0, .type=IO_READ},
        {.addr=0xa7ff, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_030F) {
    const struct CPU_State initial_cpu = {.pc=0x65a5, .a=0x75, .x=0xf2, .y=0xd9, .sp=0x04, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x65a5, .value=0xb0}, {.addr=0x65a6, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0x65a7, .a=0x75, .x=0xf2, .y=0xd9, .sp=0x04, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x65a5, .value=0xb0}, {.addr=0x65a6, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0x65a5, .value=0xb0, .type=IO_READ},
        {.addr=0x65a6, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0310) {
    const struct CPU_State initial_cpu = {.pc=0x0f7d, .a=0x75, .x=0x5d, .y=0x7f, .sp=0xef, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x0f7d, .value=0xb0}, {.addr=0x0f7e, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x0f7f, .a=0x75, .x=0x5d, .y=0x7f, .sp=0xef, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x0f7d, .value=0xb0}, {.addr=0x0f7e, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x0f7d, .value=0xb0, .type=IO_READ},
        {.addr=0x0f7e, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0311) {
    const struct CPU_State initial_cpu = {.pc=0x1f72, .a=0xc1, .x=0x7f, .y=0x85, .sp=0x98, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x1f72, .value=0xb0}, {.addr=0x1f73, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x1fa3, .a=0xc1, .x=0x7f, .y=0x85, .sp=0x98, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x1f72, .value=0xb0}, {.addr=0x1f73, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x1f72, .value=0xb0, .type=IO_READ},
        {.addr=0x1f73, .value=0x2f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0312) {
    const struct CPU_State initial_cpu = {.pc=0xd6df, .a=0x27, .x=0x96, .y=0x41, .sp=0xd2, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xd6df, .value=0xb0}, {.addr=0xd6e0, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0xd6f9, .a=0x27, .x=0x96, .y=0x41, .sp=0xd2, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xd6df, .value=0xb0}, {.addr=0xd6e0, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0xd6df, .value=0xb0, .type=IO_READ},
        {.addr=0xd6e0, .value=0x18, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0313) {
    const struct CPU_State initial_cpu = {.pc=0x1748, .a=0x13, .x=0x29, .y=0xfd, .sp=0x7f, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x1748, .value=0xb0}, {.addr=0x1749, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0x174a, .a=0x13, .x=0x29, .y=0xfd, .sp=0x7f, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x1748, .value=0xb0}, {.addr=0x1749, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0x1748, .value=0xb0, .type=IO_READ},
        {.addr=0x1749, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0314) {
    const struct CPU_State initial_cpu = {.pc=0xd975, .a=0x5c, .x=0x7f, .y=0x04, .sp=0x0e, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xd975, .value=0xb0}, {.addr=0xd976, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0xd951, .a=0x5c, .x=0x7f, .y=0x04, .sp=0x0e, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xd975, .value=0xb0}, {.addr=0xd976, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0xd975, .value=0xb0, .type=IO_READ},
        {.addr=0xd976, .value=0xda, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0315) {
    const struct CPU_State initial_cpu = {.pc=0x93d0, .a=0xc2, .x=0x92, .y=0x30, .sp=0x63, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x93d0, .value=0xb0}, {.addr=0x93d1, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x9362, .a=0xc2, .x=0x92, .y=0x30, .sp=0x63, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x93d0, .value=0xb0}, {.addr=0x93d1, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0x93d0, .value=0xb0, .type=IO_READ},
        {.addr=0x93d1, .value=0x90, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0316) {
    const struct CPU_State initial_cpu = {.pc=0xc2cf, .a=0xfd, .x=0x09, .y=0x92, .sp=0xb2, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xc2cf, .value=0xb0}, {.addr=0xc2d0, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0xc328, .a=0xfd, .x=0x09, .y=0x92, .sp=0xb2, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xc2cf, .value=0xb0}, {.addr=0xc2d0, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0xc2cf, .value=0xb0, .type=IO_READ},
        {.addr=0xc2d0, .value=0x57, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0317) {
    const struct CPU_State initial_cpu = {.pc=0x1897, .a=0xd1, .x=0x62, .y=0x29, .sp=0xc5, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x1897, .value=0xb0}, {.addr=0x1898, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0x1899, .a=0xd1, .x=0x62, .y=0x29, .sp=0xc5, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x1897, .value=0xb0}, {.addr=0x1898, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0x1897, .value=0xb0, .type=IO_READ},
        {.addr=0x1898, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0318) {
    const struct CPU_State initial_cpu = {.pc=0x82db, .a=0x29, .x=0x7a, .y=0x74, .sp=0x99, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x82db, .value=0xb0}, {.addr=0x82dc, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0x8301, .a=0x29, .x=0x7a, .y=0x74, .sp=0x99, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x82db, .value=0xb0}, {.addr=0x82dc, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0x82db, .value=0xb0, .type=IO_READ},
        {.addr=0x82dc, .value=0x24, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0319) {
    const struct CPU_State initial_cpu = {.pc=0x3f54, .a=0x1b, .x=0x3a, .y=0x23, .sp=0x5f, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x3f54, .value=0xb0}, {.addr=0x3f55, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0x3f56, .a=0x1b, .x=0x3a, .y=0x23, .sp=0x5f, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x3f54, .value=0xb0}, {.addr=0x3f55, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0x3f54, .value=0xb0, .type=IO_READ},
        {.addr=0x3f55, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_031A) {
    const struct CPU_State initial_cpu = {.pc=0xccad, .a=0x9f, .x=0x9a, .y=0x06, .sp=0x87, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xccad, .value=0xb0}, {.addr=0xccae, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0xccaf, .a=0x9f, .x=0x9a, .y=0x06, .sp=0x87, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0xccad, .value=0xb0}, {.addr=0xccae, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0xccad, .value=0xb0, .type=IO_READ},
        {.addr=0xccae, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_031B) {
    const struct CPU_State initial_cpu = {.pc=0x5472, .a=0x51, .x=0x8d, .y=0xa2, .sp=0x52, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x5472, .value=0xb0}, {.addr=0x5473, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x53f4, .a=0x51, .x=0x8d, .y=0xa2, .sp=0x52, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x5472, .value=0xb0}, {.addr=0x5473, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x5472, .value=0xb0, .type=IO_READ},
        {.addr=0x5473, .value=0x80, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_031C) {
    const struct CPU_State initial_cpu = {.pc=0xf5da, .a=0x71, .x=0xbd, .y=0x1a, .sp=0xe3, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xf5da, .value=0xb0}, {.addr=0xf5db, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0xf65a, .a=0x71, .x=0xbd, .y=0x1a, .sp=0xe3, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xf5da, .value=0xb0}, {.addr=0xf5db, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0xf5da, .value=0xb0, .type=IO_READ},
        {.addr=0xf5db, .value=0x7e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_031D) {
    const struct CPU_State initial_cpu = {.pc=0x3905, .a=0xe6, .x=0xd1, .y=0x97, .sp=0xa4, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x3905, .value=0xb0}, {.addr=0x3906, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x3907, .a=0xe6, .x=0xd1, .y=0x97, .sp=0xa4, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x3905, .value=0xb0}, {.addr=0x3906, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x3905, .value=0xb0, .type=IO_READ},
        {.addr=0x3906, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_031E) {
    const struct CPU_State initial_cpu = {.pc=0xcf89, .a=0xb5, .x=0x89, .y=0xeb, .sp=0xaf, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xcf89, .value=0xb0}, {.addr=0xcf8a, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0xcf8b, .a=0xb5, .x=0x89, .y=0xeb, .sp=0xaf, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xcf89, .value=0xb0}, {.addr=0xcf8a, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0xcf89, .value=0xb0, .type=IO_READ},
        {.addr=0xcf8a, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_031F) {
    const struct CPU_State initial_cpu = {.pc=0xcc6d, .a=0x90, .x=0xaf, .y=0x87, .sp=0xcd, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xcc6d, .value=0xb0}, {.addr=0xcc6e, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xcc6c, .a=0x90, .x=0xaf, .y=0x87, .sp=0xcd, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0xcc6d, .value=0xb0}, {.addr=0xcc6e, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xcc6d, .value=0xb0, .type=IO_READ},
        {.addr=0xcc6e, .value=0xfd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0320) {
    const struct CPU_State initial_cpu = {.pc=0x2c0e, .a=0xdf, .x=0x94, .y=0xd3, .sp=0xf7, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x2c0e, .value=0xb0}, {.addr=0x2c0f, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0x2b9c, .a=0xdf, .x=0x94, .y=0xd3, .sp=0xf7, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x2c0e, .value=0xb0}, {.addr=0x2c0f, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0x2c0e, .value=0xb0, .type=IO_READ},
        {.addr=0x2c0f, .value=0x8c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0321) {
    const struct CPU_State initial_cpu = {.pc=0x1ee6, .a=0x82, .x=0x82, .y=0x10, .sp=0xd8, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x1ee6, .value=0xb0}, {.addr=0x1ee7, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0x1f3b, .a=0x82, .x=0x82, .y=0x10, .sp=0xd8, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x1ee6, .value=0xb0}, {.addr=0x1ee7, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0x1ee6, .value=0xb0, .type=IO_READ},
        {.addr=0x1ee7, .value=0x53, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0322) {
    const struct CPU_State initial_cpu = {.pc=0xe7a5, .a=0xe8, .x=0xea, .y=0xe1, .sp=0xe9, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0xe7a5, .value=0xb0}, {.addr=0xe7a6, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0xe7dc, .a=0xe8, .x=0xea, .y=0xe1, .sp=0xe9, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xe7a5, .value=0xb0}, {.addr=0xe7a6, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0xe7a5, .value=0xb0, .type=IO_READ},
        {.addr=0xe7a6, .value=0x35, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0323) {
    const struct CPU_State initial_cpu = {.pc=0x044a, .a=0x9d, .x=0xf1, .y=0x54, .sp=0x85, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x044a, .value=0xb0}, {.addr=0x044b, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x0404, .a=0x9d, .x=0xf1, .y=0x54, .sp=0x85, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x044a, .value=0xb0}, {.addr=0x044b, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x044a, .value=0xb0, .type=IO_READ},
        {.addr=0x044b, .value=0xb8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0324) {
    const struct CPU_State initial_cpu = {.pc=0x1640, .a=0x48, .x=0xf7, .y=0xd2, .sp=0x36, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x1640, .value=0xb0}, {.addr=0x1641, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x1642, .a=0x48, .x=0xf7, .y=0xd2, .sp=0x36, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x1640, .value=0xb0}, {.addr=0x1641, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x1640, .value=0xb0, .type=IO_READ},
        {.addr=0x1641, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0325) {
    const struct CPU_State initial_cpu = {.pc=0x1ffa, .a=0x54, .x=0xbb, .y=0xf4, .sp=0x23, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x1ffa, .value=0xb0}, {.addr=0x1ffb, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0x1ffc, .a=0x54, .x=0xbb, .y=0xf4, .sp=0x23, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x1ffa, .value=0xb0}, {.addr=0x1ffb, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0x1ffa, .value=0xb0, .type=IO_READ},
        {.addr=0x1ffb, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0326) {
    const struct CPU_State initial_cpu = {.pc=0x3691, .a=0x5a, .x=0xee, .y=0x98, .sp=0xaa, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x3691, .value=0xb0}, {.addr=0x3692, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0x3701, .a=0x5a, .x=0xee, .y=0x98, .sp=0xaa, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x3691, .value=0xb0}, {.addr=0x3692, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0x3691, .value=0xb0, .type=IO_READ},
        {.addr=0x3692, .value=0x6e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0327) {
    const struct CPU_State initial_cpu = {.pc=0xb9ef, .a=0x43, .x=0xd3, .y=0x88, .sp=0x11, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xb9ef, .value=0xb0}, {.addr=0xb9f0, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0xb9f1, .a=0x43, .x=0xd3, .y=0x88, .sp=0x11, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0xb9ef, .value=0xb0}, {.addr=0xb9f0, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0xb9ef, .value=0xb0, .type=IO_READ},
        {.addr=0xb9f0, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0328) {
    const struct CPU_State initial_cpu = {.pc=0xfa2c, .a=0xac, .x=0x0a, .y=0x7c, .sp=0x3f, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xfa2c, .value=0xb0}, {.addr=0xfa2d, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0xfa2e, .a=0xac, .x=0x0a, .y=0x7c, .sp=0x3f, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0xfa2c, .value=0xb0}, {.addr=0xfa2d, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0xfa2c, .value=0xb0, .type=IO_READ},
        {.addr=0xfa2d, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0329) {
    const struct CPU_State initial_cpu = {.pc=0x207f, .a=0x28, .x=0x4f, .y=0x1a, .sp=0x42, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x207f, .value=0xb0}, {.addr=0x2080, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x2081, .a=0x28, .x=0x4f, .y=0x1a, .sp=0x42, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x207f, .value=0xb0}, {.addr=0x2080, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0x207f, .value=0xb0, .type=IO_READ},
        {.addr=0x2080, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_032A) {
    const struct CPU_State initial_cpu = {.pc=0x171e, .a=0xe6, .x=0x8e, .y=0x55, .sp=0xba, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x171e, .value=0xb0}, {.addr=0x171f, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x1720, .a=0xe6, .x=0x8e, .y=0x55, .sp=0xba, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x171e, .value=0xb0}, {.addr=0x171f, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x171e, .value=0xb0, .type=IO_READ},
        {.addr=0x171f, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_032B) {
    const struct CPU_State initial_cpu = {.pc=0x16ce, .a=0x2d, .x=0x89, .y=0x43, .sp=0x95, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x16ce, .value=0xb0}, {.addr=0x16cf, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0x16d0, .a=0x2d, .x=0x89, .y=0x43, .sp=0x95, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x16ce, .value=0xb0}, {.addr=0x16cf, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0x16ce, .value=0xb0, .type=IO_READ},
        {.addr=0x16cf, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_032C) {
    const struct CPU_State initial_cpu = {.pc=0x9326, .a=0x1c, .x=0xa0, .y=0x2d, .sp=0xde, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x9326, .value=0xb0}, {.addr=0x9327, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0x939b, .a=0x1c, .x=0xa0, .y=0x2d, .sp=0xde, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x9326, .value=0xb0}, {.addr=0x9327, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0x9326, .value=0xb0, .type=IO_READ},
        {.addr=0x9327, .value=0x73, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_032D) {
    const struct CPU_State initial_cpu = {.pc=0xf2b5, .a=0x7e, .x=0x65, .y=0x00, .sp=0x3c, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xf2b5, .value=0xb0}, {.addr=0xf2b6, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xf2b7, .a=0x7e, .x=0x65, .y=0x00, .sp=0x3c, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0xf2b5, .value=0xb0}, {.addr=0xf2b6, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xf2b5, .value=0xb0, .type=IO_READ},
        {.addr=0xf2b6, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_032E) {
    const struct CPU_State initial_cpu = {.pc=0x3973, .a=0x85, .x=0x10, .y=0xf3, .sp=0x4f, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x3973, .value=0xb0}, {.addr=0x3974, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x3975, .a=0x85, .x=0x10, .y=0xf3, .sp=0x4f, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x3973, .value=0xb0}, {.addr=0x3974, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x3973, .value=0xb0, .type=IO_READ},
        {.addr=0x3974, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_032F) {
    const struct CPU_State initial_cpu = {.pc=0x3240, .a=0x68, .x=0x4d, .y=0xe4, .sp=0x43, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x3240, .value=0xb0}, {.addr=0x3241, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0x3242, .a=0x68, .x=0x4d, .y=0xe4, .sp=0x43, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x3240, .value=0xb0}, {.addr=0x3241, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0x3240, .value=0xb0, .type=IO_READ},
        {.addr=0x3241, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0330) {
    const struct CPU_State initial_cpu = {.pc=0xdf15, .a=0x68, .x=0x74, .y=0xaf, .sp=0xeb, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xdf15, .value=0xb0}, {.addr=0xdf16, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0xdf26, .a=0x68, .x=0x74, .y=0xaf, .sp=0xeb, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xdf15, .value=0xb0}, {.addr=0xdf16, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0xdf15, .value=0xb0, .type=IO_READ},
        {.addr=0xdf16, .value=0x0f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0331) {
    const struct CPU_State initial_cpu = {.pc=0x25ec, .a=0xa9, .x=0x70, .y=0x9d, .sp=0x71, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x25ec, .value=0xb0}, {.addr=0x25ed, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x25ee, .a=0xa9, .x=0x70, .y=0x9d, .sp=0x71, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x25ec, .value=0xb0}, {.addr=0x25ed, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x25ec, .value=0xb0, .type=IO_READ},
        {.addr=0x25ed, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0332) {
    const struct CPU_State initial_cpu = {.pc=0xe712, .a=0xe9, .x=0x05, .y=0x00, .sp=0xd9, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xe712, .value=0xb0}, {.addr=0xe713, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0xe714, .a=0xe9, .x=0x05, .y=0x00, .sp=0xd9, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0xe712, .value=0xb0}, {.addr=0xe713, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0xe712, .value=0xb0, .type=IO_READ},
        {.addr=0xe713, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0333) {
    const struct CPU_State initial_cpu = {.pc=0xa11e, .a=0x7c, .x=0xa9, .y=0x52, .sp=0xf3, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xa11e, .value=0xb0}, {.addr=0xa11f, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0xa13a, .a=0x7c, .x=0xa9, .y=0x52, .sp=0xf3, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xa11e, .value=0xb0}, {.addr=0xa11f, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0xa11e, .value=0xb0, .type=IO_READ},
        {.addr=0xa11f, .value=0x1a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0334) {
    const struct CPU_State initial_cpu = {.pc=0x30d1, .a=0xe4, .x=0x72, .y=0x3f, .sp=0x1d, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x30d1, .value=0xb0}, {.addr=0x30d2, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0x30d3, .a=0xe4, .x=0x72, .y=0x3f, .sp=0x1d, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x30d1, .value=0xb0}, {.addr=0x30d2, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0x30d1, .value=0xb0, .type=IO_READ},
        {.addr=0x30d2, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0335) {
    const struct CPU_State initial_cpu = {.pc=0x5a44, .a=0x19, .x=0xc7, .y=0x71, .sp=0x70, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x5a44, .value=0xb0}, {.addr=0x5a45, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0x5a1c, .a=0x19, .x=0xc7, .y=0x71, .sp=0x70, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x5a44, .value=0xb0}, {.addr=0x5a45, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0x5a44, .value=0xb0, .type=IO_READ},
        {.addr=0x5a45, .value=0xd6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0336) {
    const struct CPU_State initial_cpu = {.pc=0x7db0, .a=0x49, .x=0xc3, .y=0x4e, .sp=0xaf, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x7db0, .value=0xb0}, {.addr=0x7db1, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0x7db2, .a=0x49, .x=0xc3, .y=0x4e, .sp=0xaf, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x7db0, .value=0xb0}, {.addr=0x7db1, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0x7db0, .value=0xb0, .type=IO_READ},
        {.addr=0x7db1, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0337) {
    const struct CPU_State initial_cpu = {.pc=0x5b25, .a=0x28, .x=0xfd, .y=0x71, .sp=0xe7, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x5b25, .value=0xb0}, {.addr=0x5b26, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0x5b8b, .a=0x28, .x=0xfd, .y=0x71, .sp=0xe7, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x5b25, .value=0xb0}, {.addr=0x5b26, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0x5b25, .value=0xb0, .type=IO_READ},
        {.addr=0x5b26, .value=0x64, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0338) {
    const struct CPU_State initial_cpu = {.pc=0x7a1c, .a=0x83, .x=0x87, .y=0x76, .sp=0xe7, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x7a1c, .value=0xb0}, {.addr=0x7a1d, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x7a1e, .a=0x83, .x=0x87, .y=0x76, .sp=0xe7, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x7a1c, .value=0xb0}, {.addr=0x7a1d, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x7a1c, .value=0xb0, .type=IO_READ},
        {.addr=0x7a1d, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0339) {
    const struct CPU_State initial_cpu = {.pc=0x10bb, .a=0x93, .x=0x78, .y=0xc0, .sp=0xd9, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x10bb, .value=0xb0}, {.addr=0x10bc, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x10bd, .a=0x93, .x=0x78, .y=0xc0, .sp=0xd9, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x10bb, .value=0xb0}, {.addr=0x10bc, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x10bb, .value=0xb0, .type=IO_READ},
        {.addr=0x10bc, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_033A) {
    const struct CPU_State initial_cpu = {.pc=0xda15, .a=0xaa, .x=0x75, .y=0x55, .sp=0x6c, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xda15, .value=0xb0}, {.addr=0xda16, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0xda17, .a=0xaa, .x=0x75, .y=0x55, .sp=0x6c, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xda15, .value=0xb0}, {.addr=0xda16, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0xda15, .value=0xb0, .type=IO_READ},
        {.addr=0xda16, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_033B) {
    const struct CPU_State initial_cpu = {.pc=0xc6cb, .a=0xab, .x=0x48, .y=0x9c, .sp=0xab, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xc6cb, .value=0xb0}, {.addr=0xc6cc, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0xc6cd, .a=0xab, .x=0x48, .y=0x9c, .sp=0xab, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xc6cb, .value=0xb0}, {.addr=0xc6cc, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0xc6cb, .value=0xb0, .type=IO_READ},
        {.addr=0xc6cc, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_033C) {
    const struct CPU_State initial_cpu = {.pc=0x5f94, .a=0x72, .x=0xac, .y=0x26, .sp=0xff, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x5f94, .value=0xb0}, {.addr=0x5f95, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0x5f96, .a=0x72, .x=0xac, .y=0x26, .sp=0xff, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x5f94, .value=0xb0}, {.addr=0x5f95, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0x5f94, .value=0xb0, .type=IO_READ},
        {.addr=0x5f95, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_033D) {
    const struct CPU_State initial_cpu = {.pc=0x8152, .a=0xac, .x=0xc6, .y=0x23, .sp=0x05, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x8152, .value=0xb0}, {.addr=0x8153, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0x81ae, .a=0xac, .x=0xc6, .y=0x23, .sp=0x05, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x8152, .value=0xb0}, {.addr=0x8153, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0x8152, .value=0xb0, .type=IO_READ},
        {.addr=0x8153, .value=0x5a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_033E) {
    const struct CPU_State initial_cpu = {.pc=0x35c2, .a=0x32, .x=0x38, .y=0x84, .sp=0xef, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x35c2, .value=0xb0}, {.addr=0x35c3, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0x35c4, .a=0x32, .x=0x38, .y=0x84, .sp=0xef, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x35c2, .value=0xb0}, {.addr=0x35c3, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0x35c2, .value=0xb0, .type=IO_READ},
        {.addr=0x35c3, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_033F) {
    const struct CPU_State initial_cpu = {.pc=0x4fcb, .a=0xf5, .x=0x2a, .y=0xe7, .sp=0xa6, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x4fcb, .value=0xb0}, {.addr=0x4fcc, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x4f5b, .a=0xf5, .x=0x2a, .y=0xe7, .sp=0xa6, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x4fcb, .value=0xb0}, {.addr=0x4fcc, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x4fcb, .value=0xb0, .type=IO_READ},
        {.addr=0x4fcc, .value=0x8e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0340) {
    const struct CPU_State initial_cpu = {.pc=0x771c, .a=0xa8, .x=0x63, .y=0x54, .sp=0xbc, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x771c, .value=0xb0}, {.addr=0x771d, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x775b, .a=0xa8, .x=0x63, .y=0x54, .sp=0xbc, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x771c, .value=0xb0}, {.addr=0x771d, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x771c, .value=0xb0, .type=IO_READ},
        {.addr=0x771d, .value=0x3d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0341) {
    const struct CPU_State initial_cpu = {.pc=0x76f0, .a=0x64, .x=0x7a, .y=0xe1, .sp=0x32, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x76f0, .value=0xb0}, {.addr=0x76f1, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0x770b, .a=0x64, .x=0x7a, .y=0xe1, .sp=0x32, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x76f0, .value=0xb0}, {.addr=0x76f1, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0x76f0, .value=0xb0, .type=IO_READ},
        {.addr=0x76f1, .value=0x19, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0342) {
    const struct CPU_State initial_cpu = {.pc=0xea7d, .a=0x13, .x=0xff, .y=0x08, .sp=0x9a, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xea7d, .value=0xb0}, {.addr=0xea7e, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0xea7f, .a=0x13, .x=0xff, .y=0x08, .sp=0x9a, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0xea7d, .value=0xb0}, {.addr=0xea7e, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0xea7d, .value=0xb0, .type=IO_READ},
        {.addr=0xea7e, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0343) {
    const struct CPU_State initial_cpu = {.pc=0x03a4, .a=0x19, .x=0xe5, .y=0xd7, .sp=0xf4, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x03a4, .value=0xb0}, {.addr=0x03a5, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0x03a6, .a=0x19, .x=0xe5, .y=0xd7, .sp=0xf4, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x03a4, .value=0xb0}, {.addr=0x03a5, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0x03a4, .value=0xb0, .type=IO_READ},
        {.addr=0x03a5, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0344) {
    const struct CPU_State initial_cpu = {.pc=0xccd0, .a=0x99, .x=0xee, .y=0x0c, .sp=0xe8, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0xccd0, .value=0xb0}, {.addr=0xccd1, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0xcc70, .a=0x99, .x=0xee, .y=0x0c, .sp=0xe8, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0xccd0, .value=0xb0}, {.addr=0xccd1, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0xccd0, .value=0xb0, .type=IO_READ},
        {.addr=0xccd1, .value=0x9e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0345) {
    const struct CPU_State initial_cpu = {.pc=0x5413, .a=0x50, .x=0xcb, .y=0x08, .sp=0xa2, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x5413, .value=0xb0}, {.addr=0x5414, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0x53df, .a=0x50, .x=0xcb, .y=0x08, .sp=0xa2, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x5413, .value=0xb0}, {.addr=0x5414, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0x5413, .value=0xb0, .type=IO_READ},
        {.addr=0x5414, .value=0xca, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0346) {
    const struct CPU_State initial_cpu = {.pc=0xade8, .a=0x13, .x=0xee, .y=0x06, .sp=0x62, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xade8, .value=0xb0}, {.addr=0xade9, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0xae5e, .a=0x13, .x=0xee, .y=0x06, .sp=0x62, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0xade8, .value=0xb0}, {.addr=0xade9, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0xade8, .value=0xb0, .type=IO_READ},
        {.addr=0xade9, .value=0x74, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0347) {
    const struct CPU_State initial_cpu = {.pc=0x1ae8, .a=0xbf, .x=0x3b, .y=0xc4, .sp=0x5d, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x1ae8, .value=0xb0}, {.addr=0x1ae9, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0x1b09, .a=0xbf, .x=0x3b, .y=0xc4, .sp=0x5d, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x1ae8, .value=0xb0}, {.addr=0x1ae9, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0x1ae8, .value=0xb0, .type=IO_READ},
        {.addr=0x1ae9, .value=0x1f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0348) {
    const struct CPU_State initial_cpu = {.pc=0xbd6b, .a=0xf9, .x=0x30, .y=0xa5, .sp=0xa4, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xbd6b, .value=0xb0}, {.addr=0xbd6c, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xbd6d, .a=0xf9, .x=0x30, .y=0xa5, .sp=0xa4, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xbd6b, .value=0xb0}, {.addr=0xbd6c, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xbd6b, .value=0xb0, .type=IO_READ},
        {.addr=0xbd6c, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0349) {
    const struct CPU_State initial_cpu = {.pc=0xd805, .a=0x75, .x=0xb4, .y=0x6d, .sp=0xce, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0xd805, .value=0xb0}, {.addr=0xd806, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0xd79c, .a=0x75, .x=0xb4, .y=0x6d, .sp=0xce, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xd805, .value=0xb0}, {.addr=0xd806, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0xd805, .value=0xb0, .type=IO_READ},
        {.addr=0xd806, .value=0x95, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_034A) {
    const struct CPU_State initial_cpu = {.pc=0x9772, .a=0xff, .x=0xe9, .y=0x66, .sp=0x5d, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x9772, .value=0xb0}, {.addr=0x9773, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x97e1, .a=0xff, .x=0xe9, .y=0x66, .sp=0x5d, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x9772, .value=0xb0}, {.addr=0x9773, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x9772, .value=0xb0, .type=IO_READ},
        {.addr=0x9773, .value=0x6d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_034B) {
    const struct CPU_State initial_cpu = {.pc=0x2b85, .a=0x87, .x=0x7e, .y=0x90, .sp=0x8e, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x2b85, .value=0xb0}, {.addr=0x2b86, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0x2b99, .a=0x87, .x=0x7e, .y=0x90, .sp=0x8e, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x2b85, .value=0xb0}, {.addr=0x2b86, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0x2b85, .value=0xb0, .type=IO_READ},
        {.addr=0x2b86, .value=0x12, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_034C) {
    const struct CPU_State initial_cpu = {.pc=0x15c9, .a=0xa3, .x=0xd5, .y=0x7a, .sp=0xcf, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x15c9, .value=0xb0}, {.addr=0x15ca, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0x1635, .a=0xa3, .x=0xd5, .y=0x7a, .sp=0xcf, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x15c9, .value=0xb0}, {.addr=0x15ca, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0x15c9, .value=0xb0, .type=IO_READ},
        {.addr=0x15ca, .value=0x6a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_034D) {
    const struct CPU_State initial_cpu = {.pc=0x1160, .a=0xf5, .x=0x6b, .y=0xbc, .sp=0x9e, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x1160, .value=0xb0}, {.addr=0x1161, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0x110d, .a=0xf5, .x=0x6b, .y=0xbc, .sp=0x9e, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x1160, .value=0xb0}, {.addr=0x1161, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0x1160, .value=0xb0, .type=IO_READ},
        {.addr=0x1161, .value=0xab, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_034E) {
    const struct CPU_State initial_cpu = {.pc=0x430c, .a=0x71, .x=0x35, .y=0x15, .sp=0x91, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x430c, .value=0xb0}, {.addr=0x430d, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0x430e, .a=0x71, .x=0x35, .y=0x15, .sp=0x91, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x430c, .value=0xb0}, {.addr=0x430d, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0x430c, .value=0xb0, .type=IO_READ},
        {.addr=0x430d, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_034F) {
    const struct CPU_State initial_cpu = {.pc=0xee1f, .a=0x58, .x=0x7c, .y=0xe5, .sp=0x5a, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xee1f, .value=0xb0}, {.addr=0xee20, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xee21, .a=0x58, .x=0x7c, .y=0xe5, .sp=0x5a, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0xee1f, .value=0xb0}, {.addr=0xee20, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xee1f, .value=0xb0, .type=IO_READ},
        {.addr=0xee20, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0350) {
    const struct CPU_State initial_cpu = {.pc=0xb405, .a=0x91, .x=0xe2, .y=0xa5, .sp=0x4f, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xb405, .value=0xb0}, {.addr=0xb406, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0xb47e, .a=0x91, .x=0xe2, .y=0xa5, .sp=0x4f, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0xb405, .value=0xb0}, {.addr=0xb406, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0xb405, .value=0xb0, .type=IO_READ},
        {.addr=0xb406, .value=0x77, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0351) {
    const struct CPU_State initial_cpu = {.pc=0x98c8, .a=0x1b, .x=0x35, .y=0x50, .sp=0xba, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x98c8, .value=0xb0}, {.addr=0x98c9, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0x98ca, .a=0x1b, .x=0x35, .y=0x50, .sp=0xba, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x98c8, .value=0xb0}, {.addr=0x98c9, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0x98c8, .value=0xb0, .type=IO_READ},
        {.addr=0x98c9, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0352) {
    const struct CPU_State initial_cpu = {.pc=0x1f57, .a=0xc5, .x=0x7a, .y=0x0c, .sp=0x6a, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x1f57, .value=0xb0}, {.addr=0x1f58, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0x1f58, .a=0xc5, .x=0x7a, .y=0x0c, .sp=0x6a, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x1f57, .value=0xb0}, {.addr=0x1f58, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0x1f57, .value=0xb0, .type=IO_READ},
        {.addr=0x1f58, .value=0xff, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0353) {
    const struct CPU_State initial_cpu = {.pc=0x4a09, .a=0xd7, .x=0x52, .y=0x77, .sp=0x1e, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x4a09, .value=0xb0}, {.addr=0x4a0a, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0x49a1, .a=0xd7, .x=0x52, .y=0x77, .sp=0x1e, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x4a09, .value=0xb0}, {.addr=0x4a0a, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0x4a09, .value=0xb0, .type=IO_READ},
        {.addr=0x4a0a, .value=0x96, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0354) {
    const struct CPU_State initial_cpu = {.pc=0x770b, .a=0x8d, .x=0x33, .y=0x79, .sp=0x16, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x770b, .value=0xb0}, {.addr=0x770c, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x770d, .a=0x8d, .x=0x33, .y=0x79, .sp=0x16, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x770b, .value=0xb0}, {.addr=0x770c, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x770b, .value=0xb0, .type=IO_READ},
        {.addr=0x770c, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0355) {
    const struct CPU_State initial_cpu = {.pc=0x9a09, .a=0xfe, .x=0x13, .y=0x3c, .sp=0x21, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x9a09, .value=0xb0}, {.addr=0x9a0a, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x9a0b, .a=0xfe, .x=0x13, .y=0x3c, .sp=0x21, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x9a09, .value=0xb0}, {.addr=0x9a0a, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x9a09, .value=0xb0, .type=IO_READ},
        {.addr=0x9a0a, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0356) {
    const struct CPU_State initial_cpu = {.pc=0xed06, .a=0xf8, .x=0xbf, .y=0x6c, .sp=0x44, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xed06, .value=0xb0}, {.addr=0xed07, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0xed08, .a=0xf8, .x=0xbf, .y=0x6c, .sp=0x44, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xed06, .value=0xb0}, {.addr=0xed07, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0xed06, .value=0xb0, .type=IO_READ},
        {.addr=0xed07, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0357) {
    const struct CPU_State initial_cpu = {.pc=0x5185, .a=0x46, .x=0x1c, .y=0xbe, .sp=0xe3, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x5185, .value=0xb0}, {.addr=0x5186, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x5155, .a=0x46, .x=0x1c, .y=0xbe, .sp=0xe3, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x5185, .value=0xb0}, {.addr=0x5186, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x5185, .value=0xb0, .type=IO_READ},
        {.addr=0x5186, .value=0xce, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0358) {
    const struct CPU_State initial_cpu = {.pc=0x7e4d, .a=0x65, .x=0x32, .y=0xa3, .sp=0x16, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x7e4d, .value=0xb0}, {.addr=0x7e4e, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x7e03, .a=0x65, .x=0x32, .y=0xa3, .sp=0x16, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x7e4d, .value=0xb0}, {.addr=0x7e4e, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x7e4d, .value=0xb0, .type=IO_READ},
        {.addr=0x7e4e, .value=0xb4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0359) {
    const struct CPU_State initial_cpu = {.pc=0xea0a, .a=0xba, .x=0x0e, .y=0x55, .sp=0x81, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xea0a, .value=0xb0}, {.addr=0xea0b, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0xea0c, .a=0xba, .x=0x0e, .y=0x55, .sp=0x81, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xea0a, .value=0xb0}, {.addr=0xea0b, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0xea0a, .value=0xb0, .type=IO_READ},
        {.addr=0xea0b, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_035A) {
    const struct CPU_State initial_cpu = {.pc=0xf569, .a=0x4a, .x=0x0e, .y=0xe9, .sp=0xf2, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xf569, .value=0xb0}, {.addr=0xf56a, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xf519, .a=0x4a, .x=0x0e, .y=0xe9, .sp=0xf2, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0xf569, .value=0xb0}, {.addr=0xf56a, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xf569, .value=0xb0, .type=IO_READ},
        {.addr=0xf56a, .value=0xae, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_035B) {
    const struct CPU_State initial_cpu = {.pc=0x0efa, .a=0x6a, .x=0x19, .y=0xb7, .sp=0x67, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x0efa, .value=0xb0}, {.addr=0x0efb, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x0ed8, .a=0x6a, .x=0x19, .y=0xb7, .sp=0x67, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0efa, .value=0xb0}, {.addr=0x0efb, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x0efa, .value=0xb0, .type=IO_READ},
        {.addr=0x0efb, .value=0xdc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_035C) {
    const struct CPU_State initial_cpu = {.pc=0x30b2, .a=0x9c, .x=0x0f, .y=0x27, .sp=0xbc, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x30b2, .value=0xb0}, {.addr=0x30b3, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x30e4, .a=0x9c, .x=0x0f, .y=0x27, .sp=0xbc, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x30b2, .value=0xb0}, {.addr=0x30b3, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x30b2, .value=0xb0, .type=IO_READ},
        {.addr=0x30b3, .value=0x30, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_035D) {
    const struct CPU_State initial_cpu = {.pc=0x323e, .a=0x19, .x=0x0e, .y=0x52, .sp=0x64, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x323e, .value=0xb0}, {.addr=0x323f, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0x31e9, .a=0x19, .x=0x0e, .y=0x52, .sp=0x64, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x323e, .value=0xb0}, {.addr=0x323f, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0x323e, .value=0xb0, .type=IO_READ},
        {.addr=0x323f, .value=0xa9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_035E) {
    const struct CPU_State initial_cpu = {.pc=0x943b, .a=0x35, .x=0xdc, .y=0xd3, .sp=0xe0, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x943b, .value=0xb0}, {.addr=0x943c, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0x943d, .a=0x35, .x=0xdc, .y=0xd3, .sp=0xe0, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x943b, .value=0xb0}, {.addr=0x943c, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0x943b, .value=0xb0, .type=IO_READ},
        {.addr=0x943c, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_035F) {
    const struct CPU_State initial_cpu = {.pc=0x0313, .a=0x5f, .x=0xd8, .y=0x90, .sp=0xc7, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x0313, .value=0xb0}, {.addr=0x0314, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0x02e1, .a=0x5f, .x=0xd8, .y=0x90, .sp=0xc7, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x0313, .value=0xb0}, {.addr=0x0314, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0x0313, .value=0xb0, .type=IO_READ},
        {.addr=0x0314, .value=0xcc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0360) {
    const struct CPU_State initial_cpu = {.pc=0x588b, .a=0xa8, .x=0xd2, .y=0x08, .sp=0x24, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x588b, .value=0xb0}, {.addr=0x588c, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x588d, .a=0xa8, .x=0xd2, .y=0x08, .sp=0x24, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x588b, .value=0xb0}, {.addr=0x588c, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x588b, .value=0xb0, .type=IO_READ},
        {.addr=0x588c, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0361) {
    const struct CPU_State initial_cpu = {.pc=0x2899, .a=0x96, .x=0x8c, .y=0x91, .sp=0x95, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x2899, .value=0xb0}, {.addr=0x289a, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x28e4, .a=0x96, .x=0x8c, .y=0x91, .sp=0x95, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x2899, .value=0xb0}, {.addr=0x289a, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x2899, .value=0xb0, .type=IO_READ},
        {.addr=0x289a, .value=0x49, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0362) {
    const struct CPU_State initial_cpu = {.pc=0x288e, .a=0xa5, .x=0x14, .y=0xe7, .sp=0xc8, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x288e, .value=0xb0}, {.addr=0x288f, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0x2890, .a=0xa5, .x=0x14, .y=0xe7, .sp=0xc8, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x288e, .value=0xb0}, {.addr=0x288f, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0x288e, .value=0xb0, .type=IO_READ},
        {.addr=0x288f, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0363) {
    const struct CPU_State initial_cpu = {.pc=0xd531, .a=0x5c, .x=0x8d, .y=0x57, .sp=0x48, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xd531, .value=0xb0}, {.addr=0xd532, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0xd546, .a=0x5c, .x=0x8d, .y=0x57, .sp=0x48, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xd531, .value=0xb0}, {.addr=0xd532, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0xd531, .value=0xb0, .type=IO_READ},
        {.addr=0xd532, .value=0x13, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0364) {
    const struct CPU_State initial_cpu = {.pc=0x35ac, .a=0x47, .x=0x89, .y=0x92, .sp=0xb6, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x35ac, .value=0xb0}, {.addr=0x35ad, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0x35ae, .a=0x47, .x=0x89, .y=0x92, .sp=0xb6, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x35ac, .value=0xb0}, {.addr=0x35ad, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0x35ac, .value=0xb0, .type=IO_READ},
        {.addr=0x35ad, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0365) {
    const struct CPU_State initial_cpu = {.pc=0x802a, .a=0x92, .x=0x9c, .y=0xcf, .sp=0x22, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x802a, .value=0xb0}, {.addr=0x802b, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0x809f, .a=0x92, .x=0x9c, .y=0xcf, .sp=0x22, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x802a, .value=0xb0}, {.addr=0x802b, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0x802a, .value=0xb0, .type=IO_READ},
        {.addr=0x802b, .value=0x73, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0366) {
    const struct CPU_State initial_cpu = {.pc=0x7245, .a=0x71, .x=0x86, .y=0x6d, .sp=0x5b, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x7245, .value=0xb0}, {.addr=0x7246, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0x7247, .a=0x71, .x=0x86, .y=0x6d, .sp=0x5b, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x7245, .value=0xb0}, {.addr=0x7246, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0x7245, .value=0xb0, .type=IO_READ},
        {.addr=0x7246, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0367) {
    const struct CPU_State initial_cpu = {.pc=0x4de7, .a=0x30, .x=0x67, .y=0xd7, .sp=0x50, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x4de7, .value=0xb0}, {.addr=0x4de8, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x4de9, .a=0x30, .x=0x67, .y=0xd7, .sp=0x50, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x4de7, .value=0xb0}, {.addr=0x4de8, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x4de7, .value=0xb0, .type=IO_READ},
        {.addr=0x4de8, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0368) {
    const struct CPU_State initial_cpu = {.pc=0xba52, .a=0x1f, .x=0x89, .y=0x40, .sp=0x61, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xba52, .value=0xb0}, {.addr=0xba53, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0xb9ff, .a=0x1f, .x=0x89, .y=0x40, .sp=0x61, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0xba52, .value=0xb0}, {.addr=0xba53, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0xba52, .value=0xb0, .type=IO_READ},
        {.addr=0xba53, .value=0xab, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0369) {
    const struct CPU_State initial_cpu = {.pc=0x2ae8, .a=0x6a, .x=0x6f, .y=0x40, .sp=0xd1, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x2ae8, .value=0xb0}, {.addr=0x2ae9, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0x2aea, .a=0x6a, .x=0x6f, .y=0x40, .sp=0xd1, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x2ae8, .value=0xb0}, {.addr=0x2ae9, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0x2ae8, .value=0xb0, .type=IO_READ},
        {.addr=0x2ae9, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_036A) {
    const struct CPU_State initial_cpu = {.pc=0xdf41, .a=0x06, .x=0x46, .y=0x49, .sp=0x05, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xdf41, .value=0xb0}, {.addr=0xdf42, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xdf43, .a=0x06, .x=0x46, .y=0x49, .sp=0x05, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xdf41, .value=0xb0}, {.addr=0xdf42, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xdf41, .value=0xb0, .type=IO_READ},
        {.addr=0xdf42, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_036B) {
    const struct CPU_State initial_cpu = {.pc=0x53b8, .a=0xb4, .x=0xcb, .y=0x38, .sp=0x22, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x53b8, .value=0xb0}, {.addr=0x53b9, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x53ba, .a=0xb4, .x=0xcb, .y=0x38, .sp=0x22, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x53b8, .value=0xb0}, {.addr=0x53b9, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x53b8, .value=0xb0, .type=IO_READ},
        {.addr=0x53b9, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_036C) {
    const struct CPU_State initial_cpu = {.pc=0x5165, .a=0x46, .x=0xb7, .y=0x44, .sp=0x7c, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x5165, .value=0xb0}, {.addr=0x5166, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0x5167, .a=0x46, .x=0xb7, .y=0x44, .sp=0x7c, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x5165, .value=0xb0}, {.addr=0x5166, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0x5165, .value=0xb0, .type=IO_READ},
        {.addr=0x5166, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_036D) {
    const struct CPU_State initial_cpu = {.pc=0xd7ba, .a=0xa4, .x=0x23, .y=0xb5, .sp=0x26, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xd7ba, .value=0xb0}, {.addr=0xd7bb, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0xd815, .a=0xa4, .x=0x23, .y=0xb5, .sp=0x26, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0xd7ba, .value=0xb0}, {.addr=0xd7bb, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0xd7ba, .value=0xb0, .type=IO_READ},
        {.addr=0xd7bb, .value=0x59, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_036E) {
    const struct CPU_State initial_cpu = {.pc=0xcdda, .a=0x7e, .x=0x9b, .y=0xbc, .sp=0x98, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xcdda, .value=0xb0}, {.addr=0xcddb, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xcddc, .a=0x7e, .x=0x9b, .y=0xbc, .sp=0x98, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xcdda, .value=0xb0}, {.addr=0xcddb, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xcdda, .value=0xb0, .type=IO_READ},
        {.addr=0xcddb, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_036F) {
    const struct CPU_State initial_cpu = {.pc=0x69e9, .a=0xec, .x=0x76, .y=0xd0, .sp=0xd3, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x69e9, .value=0xb0}, {.addr=0x69ea, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0x69eb, .a=0xec, .x=0x76, .y=0xd0, .sp=0xd3, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x69e9, .value=0xb0}, {.addr=0x69ea, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0x69e9, .value=0xb0, .type=IO_READ},
        {.addr=0x69ea, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0370) {
    const struct CPU_State initial_cpu = {.pc=0x6c8a, .a=0x51, .x=0x6b, .y=0xd4, .sp=0xcc, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x6c8a, .value=0xb0}, {.addr=0x6c8b, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0x6c8c, .a=0x51, .x=0x6b, .y=0xd4, .sp=0xcc, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x6c8a, .value=0xb0}, {.addr=0x6c8b, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0x6c8a, .value=0xb0, .type=IO_READ},
        {.addr=0x6c8b, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0371) {
    const struct CPU_State initial_cpu = {.pc=0xab5b, .a=0xf1, .x=0xcb, .y=0xac, .sp=0xfa, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xab5b, .value=0xb0}, {.addr=0xab5c, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0xab5d, .a=0xf1, .x=0xcb, .y=0xac, .sp=0xfa, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xab5b, .value=0xb0}, {.addr=0xab5c, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0xab5b, .value=0xb0, .type=IO_READ},
        {.addr=0xab5c, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0372) {
    const struct CPU_State initial_cpu = {.pc=0x2d4f, .a=0x82, .x=0xac, .y=0x94, .sp=0xd9, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x2d4f, .value=0xb0}, {.addr=0x2d50, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0x2d51, .a=0x82, .x=0xac, .y=0x94, .sp=0xd9, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x2d4f, .value=0xb0}, {.addr=0x2d50, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0x2d4f, .value=0xb0, .type=IO_READ},
        {.addr=0x2d50, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0373) {
    const struct CPU_State initial_cpu = {.pc=0x1d8e, .a=0xa3, .x=0xdc, .y=0x98, .sp=0xe7, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x1d8e, .value=0xb0}, {.addr=0x1d8f, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x1d90, .a=0xa3, .x=0xdc, .y=0x98, .sp=0xe7, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x1d8e, .value=0xb0}, {.addr=0x1d8f, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x1d8e, .value=0xb0, .type=IO_READ},
        {.addr=0x1d8f, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0374) {
    const struct CPU_State initial_cpu = {.pc=0x0052, .a=0x53, .x=0xdd, .y=0x46, .sp=0x81, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x0052, .value=0xb0}, {.addr=0x0053, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0x001f, .a=0x53, .x=0xdd, .y=0x46, .sp=0x81, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x0052, .value=0xb0}, {.addr=0x0053, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0x0052, .value=0xb0, .type=IO_READ},
        {.addr=0x0053, .value=0xcb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0375) {
    const struct CPU_State initial_cpu = {.pc=0x730f, .a=0xc4, .x=0xa1, .y=0x74, .sp=0xbb, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x730f, .value=0xb0}, {.addr=0x7310, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0x7311, .a=0xc4, .x=0xa1, .y=0x74, .sp=0xbb, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x730f, .value=0xb0}, {.addr=0x7310, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0x730f, .value=0xb0, .type=IO_READ},
        {.addr=0x7310, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0376) {
    const struct CPU_State initial_cpu = {.pc=0x99aa, .a=0x6f, .x=0x72, .y=0x1a, .sp=0x6f, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x99aa, .value=0xb0}, {.addr=0x99ab, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0x999c, .a=0x6f, .x=0x72, .y=0x1a, .sp=0x6f, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x99aa, .value=0xb0}, {.addr=0x99ab, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0x99aa, .value=0xb0, .type=IO_READ},
        {.addr=0x99ab, .value=0xf0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0377) {
    const struct CPU_State initial_cpu = {.pc=0xcd2b, .a=0xa6, .x=0x86, .y=0xc9, .sp=0x94, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xcd2b, .value=0xb0}, {.addr=0xcd2c, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0xcd2d, .a=0xa6, .x=0x86, .y=0xc9, .sp=0x94, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0xcd2b, .value=0xb0}, {.addr=0xcd2c, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0xcd2b, .value=0xb0, .type=IO_READ},
        {.addr=0xcd2c, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0378) {
    const struct CPU_State initial_cpu = {.pc=0xc75b, .a=0xb0, .x=0x1c, .y=0x0c, .sp=0x96, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xc75b, .value=0xb0}, {.addr=0xc75c, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0xc75d, .a=0xb0, .x=0x1c, .y=0x0c, .sp=0x96, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0xc75b, .value=0xb0}, {.addr=0xc75c, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0xc75b, .value=0xb0, .type=IO_READ},
        {.addr=0xc75c, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0379) {
    const struct CPU_State initial_cpu = {.pc=0x5fa5, .a=0x31, .x=0xa9, .y=0xaf, .sp=0x97, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x5fa5, .value=0xb0}, {.addr=0x5fa6, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0x5fa7, .a=0x31, .x=0xa9, .y=0xaf, .sp=0x97, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x5fa5, .value=0xb0}, {.addr=0x5fa6, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0x5fa5, .value=0xb0, .type=IO_READ},
        {.addr=0x5fa6, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_037A) {
    const struct CPU_State initial_cpu = {.pc=0x3cb3, .a=0xff, .x=0xc5, .y=0x3a, .sp=0x63, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x3cb3, .value=0xb0}, {.addr=0x3cb4, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0x3c5f, .a=0xff, .x=0xc5, .y=0x3a, .sp=0x63, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x3cb3, .value=0xb0}, {.addr=0x3cb4, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0x3cb3, .value=0xb0, .type=IO_READ},
        {.addr=0x3cb4, .value=0xaa, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_037B) {
    const struct CPU_State initial_cpu = {.pc=0x01df, .a=0xf6, .x=0x15, .y=0x4a, .sp=0x3f, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0xb0}, {.addr=0x01e0, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0x0228, .a=0xf6, .x=0x15, .y=0x4a, .sp=0x3f, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0xb0}, {.addr=0x01e0, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0x01df, .value=0xb0, .type=IO_READ},
        {.addr=0x01e0, .value=0x47, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_037C) {
    const struct CPU_State initial_cpu = {.pc=0x05b8, .a=0x81, .x=0x77, .y=0x3b, .sp=0x82, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x05b8, .value=0xb0}, {.addr=0x05b9, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0x05ba, .a=0x81, .x=0x77, .y=0x3b, .sp=0x82, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x05b8, .value=0xb0}, {.addr=0x05b9, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0x05b8, .value=0xb0, .type=IO_READ},
        {.addr=0x05b9, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_037D) {
    const struct CPU_State initial_cpu = {.pc=0x1d6b, .a=0xb1, .x=0xc5, .y=0xd2, .sp=0xd9, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x1d6b, .value=0xb0}, {.addr=0x1d6c, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0x1d6d, .a=0xb1, .x=0xc5, .y=0xd2, .sp=0xd9, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x1d6b, .value=0xb0}, {.addr=0x1d6c, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0x1d6b, .value=0xb0, .type=IO_READ},
        {.addr=0x1d6c, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_037E) {
    const struct CPU_State initial_cpu = {.pc=0x34ba, .a=0xd8, .x=0x12, .y=0x6b, .sp=0x6d, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x34ba, .value=0xb0}, {.addr=0x34bb, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0x3483, .a=0xd8, .x=0x12, .y=0x6b, .sp=0x6d, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x34ba, .value=0xb0}, {.addr=0x34bb, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0x34ba, .value=0xb0, .type=IO_READ},
        {.addr=0x34bb, .value=0xc7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_037F) {
    const struct CPU_State initial_cpu = {.pc=0xbcb6, .a=0x94, .x=0x05, .y=0x06, .sp=0x98, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xbcb6, .value=0xb0}, {.addr=0xbcb7, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0xbcb8, .a=0x94, .x=0x05, .y=0x06, .sp=0x98, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0xbcb6, .value=0xb0}, {.addr=0xbcb7, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0xbcb6, .value=0xb0, .type=IO_READ},
        {.addr=0xbcb7, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0380) {
    const struct CPU_State initial_cpu = {.pc=0x16db, .a=0x38, .x=0xd4, .y=0x2c, .sp=0xcd, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x16db, .value=0xb0}, {.addr=0x16dc, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0x16dd, .a=0x38, .x=0xd4, .y=0x2c, .sp=0xcd, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x16db, .value=0xb0}, {.addr=0x16dc, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0x16db, .value=0xb0, .type=IO_READ},
        {.addr=0x16dc, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0381) {
    const struct CPU_State initial_cpu = {.pc=0x0ecf, .a=0x0b, .x=0x43, .y=0xc0, .sp=0x3d, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x0ecf, .value=0xb0}, {.addr=0x0ed0, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0x0ed1, .a=0x0b, .x=0x43, .y=0xc0, .sp=0x3d, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x0ecf, .value=0xb0}, {.addr=0x0ed0, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0x0ecf, .value=0xb0, .type=IO_READ},
        {.addr=0x0ed0, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0382) {
    const struct CPU_State initial_cpu = {.pc=0xc70e, .a=0xf1, .x=0x6a, .y=0x32, .sp=0xa3, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xc70e, .value=0xb0}, {.addr=0xc70f, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0xc710, .a=0xf1, .x=0x6a, .y=0x32, .sp=0xa3, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0xc70e, .value=0xb0}, {.addr=0xc70f, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0xc70e, .value=0xb0, .type=IO_READ},
        {.addr=0xc70f, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0383) {
    const struct CPU_State initial_cpu = {.pc=0xa901, .a=0x4a, .x=0x06, .y=0x8e, .sp=0x93, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xa901, .value=0xb0}, {.addr=0xa902, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0xa903, .a=0x4a, .x=0x06, .y=0x8e, .sp=0x93, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xa901, .value=0xb0}, {.addr=0xa902, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0xa901, .value=0xb0, .type=IO_READ},
        {.addr=0xa902, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0384) {
    const struct CPU_State initial_cpu = {.pc=0xbd70, .a=0x40, .x=0xb8, .y=0xb4, .sp=0xd5, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xbd70, .value=0xb0}, {.addr=0xbd71, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0xbd72, .a=0x40, .x=0xb8, .y=0xb4, .sp=0xd5, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xbd70, .value=0xb0}, {.addr=0xbd71, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0xbd70, .value=0xb0, .type=IO_READ},
        {.addr=0xbd71, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0385) {
    const struct CPU_State initial_cpu = {.pc=0xbf4e, .a=0xd5, .x=0x06, .y=0x6b, .sp=0x21, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xbf4e, .value=0xb0}, {.addr=0xbf4f, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0xbfcb, .a=0xd5, .x=0x06, .y=0x6b, .sp=0x21, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0xbf4e, .value=0xb0}, {.addr=0xbf4f, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0xbf4e, .value=0xb0, .type=IO_READ},
        {.addr=0xbf4f, .value=0x7b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0386) {
    const struct CPU_State initial_cpu = {.pc=0xb7ec, .a=0x4a, .x=0xe5, .y=0xca, .sp=0x1c, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xb7ec, .value=0xb0}, {.addr=0xb7ed, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0xb7ee, .a=0x4a, .x=0xe5, .y=0xca, .sp=0x1c, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xb7ec, .value=0xb0}, {.addr=0xb7ed, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0xb7ec, .value=0xb0, .type=IO_READ},
        {.addr=0xb7ed, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0387) {
    const struct CPU_State initial_cpu = {.pc=0xe69c, .a=0x18, .x=0x6a, .y=0x05, .sp=0xd5, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xe69c, .value=0xb0}, {.addr=0xe69d, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0xe69e, .a=0x18, .x=0x6a, .y=0x05, .sp=0xd5, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0xe69c, .value=0xb0}, {.addr=0xe69d, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0xe69c, .value=0xb0, .type=IO_READ},
        {.addr=0xe69d, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0388) {
    const struct CPU_State initial_cpu = {.pc=0x9145, .a=0x70, .x=0x72, .y=0x7e, .sp=0x2a, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x9145, .value=0xb0}, {.addr=0x9146, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0x9147, .a=0x70, .x=0x72, .y=0x7e, .sp=0x2a, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x9145, .value=0xb0}, {.addr=0x9146, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0x9145, .value=0xb0, .type=IO_READ},
        {.addr=0x9146, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0389) {
    const struct CPU_State initial_cpu = {.pc=0x7bb1, .a=0xa2, .x=0xec, .y=0x9d, .sp=0x2d, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x7bb1, .value=0xb0}, {.addr=0x7bb2, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x7bd3, .a=0xa2, .x=0xec, .y=0x9d, .sp=0x2d, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x7bb1, .value=0xb0}, {.addr=0x7bb2, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x7bb1, .value=0xb0, .type=IO_READ},
        {.addr=0x7bb2, .value=0x20, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_038A) {
    const struct CPU_State initial_cpu = {.pc=0x9d50, .a=0x8c, .x=0x03, .y=0xdd, .sp=0xec, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x9d50, .value=0xb0}, {.addr=0x9d51, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x9cf3, .a=0x8c, .x=0x03, .y=0xdd, .sp=0xec, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x9d50, .value=0xb0}, {.addr=0x9d51, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x9d50, .value=0xb0, .type=IO_READ},
        {.addr=0x9d51, .value=0xa1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_038B) {
    const struct CPU_State initial_cpu = {.pc=0xbb97, .a=0x70, .x=0x39, .y=0xd6, .sp=0xc6, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0xbb97, .value=0xb0}, {.addr=0xbb98, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0xbbde, .a=0x70, .x=0x39, .y=0xd6, .sp=0xc6, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0xbb97, .value=0xb0}, {.addr=0xbb98, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0xbb97, .value=0xb0, .type=IO_READ},
        {.addr=0xbb98, .value=0x45, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_038C) {
    const struct CPU_State initial_cpu = {.pc=0x9a93, .a=0xec, .x=0xac, .y=0xaf, .sp=0x87, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x9a93, .value=0xb0}, {.addr=0x9a94, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0x9a95, .a=0xec, .x=0xac, .y=0xaf, .sp=0x87, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x9a93, .value=0xb0}, {.addr=0x9a94, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0x9a93, .value=0xb0, .type=IO_READ},
        {.addr=0x9a94, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_038D) {
    const struct CPU_State initial_cpu = {.pc=0x631e, .a=0x6a, .x=0xcc, .y=0xab, .sp=0x0d, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x631e, .value=0xb0}, {.addr=0x631f, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x6320, .a=0x6a, .x=0xcc, .y=0xab, .sp=0x0d, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x631e, .value=0xb0}, {.addr=0x631f, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x631e, .value=0xb0, .type=IO_READ},
        {.addr=0x631f, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_038E) {
    const struct CPU_State initial_cpu = {.pc=0x0a3b, .a=0xc6, .x=0xf0, .y=0xdd, .sp=0x1d, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x0a3b, .value=0xb0}, {.addr=0x0a3c, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x0a19, .a=0xc6, .x=0xf0, .y=0xdd, .sp=0x1d, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x0a3b, .value=0xb0}, {.addr=0x0a3c, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x0a3b, .value=0xb0, .type=IO_READ},
        {.addr=0x0a3c, .value=0xdc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_038F) {
    const struct CPU_State initial_cpu = {.pc=0x423f, .a=0x88, .x=0xfb, .y=0x6c, .sp=0xe9, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x423f, .value=0xb0}, {.addr=0x4240, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x4241, .a=0x88, .x=0xfb, .y=0x6c, .sp=0xe9, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x423f, .value=0xb0}, {.addr=0x4240, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x423f, .value=0xb0, .type=IO_READ},
        {.addr=0x4240, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0390) {
    const struct CPU_State initial_cpu = {.pc=0xad0d, .a=0x97, .x=0x99, .y=0xf3, .sp=0xfa, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xad0d, .value=0xb0}, {.addr=0xad0e, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0xad3f, .a=0x97, .x=0x99, .y=0xf3, .sp=0xfa, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0xad0d, .value=0xb0}, {.addr=0xad0e, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0xad0d, .value=0xb0, .type=IO_READ},
        {.addr=0xad0e, .value=0x30, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0391) {
    const struct CPU_State initial_cpu = {.pc=0x53d5, .a=0x21, .x=0xaa, .y=0xc5, .sp=0xaa, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x53d5, .value=0xb0}, {.addr=0x53d6, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0x53d7, .a=0x21, .x=0xaa, .y=0xc5, .sp=0xaa, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x53d5, .value=0xb0}, {.addr=0x53d6, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0x53d5, .value=0xb0, .type=IO_READ},
        {.addr=0x53d6, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0392) {
    const struct CPU_State initial_cpu = {.pc=0xf4af, .a=0xdf, .x=0xcf, .y=0x6a, .sp=0xe9, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xf4af, .value=0xb0}, {.addr=0xf4b0, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0xf44b, .a=0xdf, .x=0xcf, .y=0x6a, .sp=0xe9, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0xf4af, .value=0xb0}, {.addr=0xf4b0, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0xf4af, .value=0xb0, .type=IO_READ},
        {.addr=0xf4b0, .value=0x9a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0393) {
    const struct CPU_State initial_cpu = {.pc=0x3b22, .a=0x42, .x=0xb5, .y=0x5e, .sp=0x76, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x3b22, .value=0xb0}, {.addr=0x3b23, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x3b24, .a=0x42, .x=0xb5, .y=0x5e, .sp=0x76, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x3b22, .value=0xb0}, {.addr=0x3b23, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x3b22, .value=0xb0, .type=IO_READ},
        {.addr=0x3b23, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0394) {
    const struct CPU_State initial_cpu = {.pc=0xeac4, .a=0xd9, .x=0xd6, .y=0xa3, .sp=0x90, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xeac4, .value=0xb0}, {.addr=0xeac5, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0xeadd, .a=0xd9, .x=0xd6, .y=0xa3, .sp=0x90, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0xeac4, .value=0xb0}, {.addr=0xeac5, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0xeac4, .value=0xb0, .type=IO_READ},
        {.addr=0xeac5, .value=0x17, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0395) {
    const struct CPU_State initial_cpu = {.pc=0x9a21, .a=0x33, .x=0xba, .y=0x95, .sp=0x6b, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x9a21, .value=0xb0}, {.addr=0x9a22, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0x9a23, .a=0x33, .x=0xba, .y=0x95, .sp=0x6b, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x9a21, .value=0xb0}, {.addr=0x9a22, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0x9a21, .value=0xb0, .type=IO_READ},
        {.addr=0x9a22, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0396) {
    const struct CPU_State initial_cpu = {.pc=0x507a, .a=0x8d, .x=0xb3, .y=0xc9, .sp=0x4b, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x507a, .value=0xb0}, {.addr=0x507b, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x5098, .a=0x8d, .x=0xb3, .y=0xc9, .sp=0x4b, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x507a, .value=0xb0}, {.addr=0x507b, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x507a, .value=0xb0, .type=IO_READ},
        {.addr=0x507b, .value=0x1c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0397) {
    const struct CPU_State initial_cpu = {.pc=0xc233, .a=0x35, .x=0xf3, .y=0x16, .sp=0xcb, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xc233, .value=0xb0}, {.addr=0xc234, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0xc28f, .a=0x35, .x=0xf3, .y=0x16, .sp=0xcb, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0xc233, .value=0xb0}, {.addr=0xc234, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0xc233, .value=0xb0, .type=IO_READ},
        {.addr=0xc234, .value=0x5a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0398) {
    const struct CPU_State initial_cpu = {.pc=0x8a20, .a=0xd7, .x=0x6e, .y=0x31, .sp=0x5a, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x8a20, .value=0xb0}, {.addr=0x8a21, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0x8a22, .a=0xd7, .x=0x6e, .y=0x31, .sp=0x5a, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x8a20, .value=0xb0}, {.addr=0x8a21, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0x8a20, .value=0xb0, .type=IO_READ},
        {.addr=0x8a21, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_0399) {
    const struct CPU_State initial_cpu = {.pc=0x0398, .a=0x53, .x=0x64, .y=0xa4, .sp=0x32, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x0398, .value=0xb0}, {.addr=0x0399, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x0349, .a=0x53, .x=0x64, .y=0xa4, .sp=0x32, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x0398, .value=0xb0}, {.addr=0x0399, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x0398, .value=0xb0, .type=IO_READ},
        {.addr=0x0399, .value=0xaf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_039A) {
    const struct CPU_State initial_cpu = {.pc=0x1a17, .a=0x5e, .x=0x93, .y=0x31, .sp=0x1f, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x1a17, .value=0xb0}, {.addr=0x1a18, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x1a19, .a=0x5e, .x=0x93, .y=0x31, .sp=0x1f, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x1a17, .value=0xb0}, {.addr=0x1a18, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x1a17, .value=0xb0, .type=IO_READ},
        {.addr=0x1a18, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_039B) {
    const struct CPU_State initial_cpu = {.pc=0x72f9, .a=0x5e, .x=0x5d, .y=0xfa, .sp=0x16, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x72f9, .value=0xb0}, {.addr=0x72fa, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x72fb, .a=0x5e, .x=0x5d, .y=0xfa, .sp=0x16, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x72f9, .value=0xb0}, {.addr=0x72fa, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x72f9, .value=0xb0, .type=IO_READ},
        {.addr=0x72fa, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_039C) {
    const struct CPU_State initial_cpu = {.pc=0xbee6, .a=0x28, .x=0xea, .y=0xba, .sp=0xe6, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0xbee6, .value=0xb0}, {.addr=0xbee7, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0xbef1, .a=0x28, .x=0xea, .y=0xba, .sp=0xe6, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xbee6, .value=0xb0}, {.addr=0xbee7, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0xbee6, .value=0xb0, .type=IO_READ},
        {.addr=0xbee7, .value=0x09, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_039D) {
    const struct CPU_State initial_cpu = {.pc=0x62a8, .a=0x34, .x=0xac, .y=0x26, .sp=0x5a, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x62a8, .value=0xb0}, {.addr=0x62a9, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0x6239, .a=0x34, .x=0xac, .y=0x26, .sp=0x5a, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x62a8, .value=0xb0}, {.addr=0x62a9, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0x62a8, .value=0xb0, .type=IO_READ},
        {.addr=0x62a9, .value=0x8f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_039E) {
    const struct CPU_State initial_cpu = {.pc=0xb315, .a=0xfd, .x=0xc9, .y=0x24, .sp=0xcf, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xb315, .value=0xb0}, {.addr=0xb316, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0xb317, .a=0xfd, .x=0xc9, .y=0x24, .sp=0xcf, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0xb315, .value=0xb0}, {.addr=0xb316, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0xb315, .value=0xb0, .type=IO_READ},
        {.addr=0xb316, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_039F) {
    const struct CPU_State initial_cpu = {.pc=0x0768, .a=0x33, .x=0x48, .y=0xde, .sp=0x59, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x0768, .value=0xb0}, {.addr=0x0769, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0x076a, .a=0x33, .x=0x48, .y=0xde, .sp=0x59, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0768, .value=0xb0}, {.addr=0x0769, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0x0768, .value=0xb0, .type=IO_READ},
        {.addr=0x0769, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03A0) {
    const struct CPU_State initial_cpu = {.pc=0x8cc2, .a=0x64, .x=0x88, .y=0xd4, .sp=0x53, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x8cc2, .value=0xb0}, {.addr=0x8cc3, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0x8c4c, .a=0x64, .x=0x88, .y=0xd4, .sp=0x53, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x8cc2, .value=0xb0}, {.addr=0x8cc3, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0x8cc2, .value=0xb0, .type=IO_READ},
        {.addr=0x8cc3, .value=0x88, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03A1) {
    const struct CPU_State initial_cpu = {.pc=0xe77d, .a=0xfb, .x=0x16, .y=0x90, .sp=0xf0, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xe77d, .value=0xb0}, {.addr=0xe77e, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0xe76a, .a=0xfb, .x=0x16, .y=0x90, .sp=0xf0, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0xe77d, .value=0xb0}, {.addr=0xe77e, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0xe77d, .value=0xb0, .type=IO_READ},
        {.addr=0xe77e, .value=0xeb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03A2) {
    const struct CPU_State initial_cpu = {.pc=0xa014, .a=0xf4, .x=0x86, .y=0xf0, .sp=0xbe, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xa014, .value=0xb0}, {.addr=0xa015, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xa016, .a=0xf4, .x=0x86, .y=0xf0, .sp=0xbe, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0xa014, .value=0xb0}, {.addr=0xa015, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xa014, .value=0xb0, .type=IO_READ},
        {.addr=0xa015, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03A3) {
    const struct CPU_State initial_cpu = {.pc=0xe4f7, .a=0x34, .x=0x64, .y=0x6b, .sp=0x03, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0xe4f7, .value=0xb0}, {.addr=0xe4f8, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0xe4f9, .a=0x34, .x=0x64, .y=0x6b, .sp=0x03, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xe4f7, .value=0xb0}, {.addr=0xe4f8, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0xe4f7, .value=0xb0, .type=IO_READ},
        {.addr=0xe4f8, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03A4) {
    const struct CPU_State initial_cpu = {.pc=0x4be5, .a=0x6b, .x=0x47, .y=0xb1, .sp=0x54, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x4be5, .value=0xb0}, {.addr=0x4be6, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0x4bbc, .a=0x6b, .x=0x47, .y=0xb1, .sp=0x54, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x4be5, .value=0xb0}, {.addr=0x4be6, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0x4be5, .value=0xb0, .type=IO_READ},
        {.addr=0x4be6, .value=0xd5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03A5) {
    const struct CPU_State initial_cpu = {.pc=0x1eee, .a=0x3c, .x=0x63, .y=0x91, .sp=0x54, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x1eee, .value=0xb0}, {.addr=0x1eef, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0x1ef0, .a=0x3c, .x=0x63, .y=0x91, .sp=0x54, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x1eee, .value=0xb0}, {.addr=0x1eef, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0x1eee, .value=0xb0, .type=IO_READ},
        {.addr=0x1eef, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03A6) {
    const struct CPU_State initial_cpu = {.pc=0xbf82, .a=0x02, .x=0x49, .y=0x1c, .sp=0xc3, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xbf82, .value=0xb0}, {.addr=0xbf83, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xbf84, .a=0x02, .x=0x49, .y=0x1c, .sp=0xc3, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0xbf82, .value=0xb0}, {.addr=0xbf83, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xbf82, .value=0xb0, .type=IO_READ},
        {.addr=0xbf83, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03A7) {
    const struct CPU_State initial_cpu = {.pc=0xab95, .a=0xa5, .x=0x94, .y=0x7d, .sp=0xca, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xab95, .value=0xb0}, {.addr=0xab96, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0xab64, .a=0xa5, .x=0x94, .y=0x7d, .sp=0xca, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xab95, .value=0xb0}, {.addr=0xab96, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0xab95, .value=0xb0, .type=IO_READ},
        {.addr=0xab96, .value=0xcd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03A8) {
    const struct CPU_State initial_cpu = {.pc=0xd7b7, .a=0xfb, .x=0xed, .y=0xae, .sp=0xdc, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xd7b7, .value=0xb0}, {.addr=0xd7b8, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0xd73a, .a=0xfb, .x=0xed, .y=0xae, .sp=0xdc, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0xd7b7, .value=0xb0}, {.addr=0xd7b8, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0xd7b7, .value=0xb0, .type=IO_READ},
        {.addr=0xd7b8, .value=0x81, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03A9) {
    const struct CPU_State initial_cpu = {.pc=0x9427, .a=0xba, .x=0xdc, .y=0x35, .sp=0x9d, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x9427, .value=0xb0}, {.addr=0x9428, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x9429, .a=0xba, .x=0xdc, .y=0x35, .sp=0x9d, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x9427, .value=0xb0}, {.addr=0x9428, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x9427, .value=0xb0, .type=IO_READ},
        {.addr=0x9428, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03AA) {
    const struct CPU_State initial_cpu = {.pc=0x535f, .a=0xaf, .x=0xec, .y=0xd6, .sp=0xc7, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x535f, .value=0xb0}, {.addr=0x5360, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0x5361, .a=0xaf, .x=0xec, .y=0xd6, .sp=0xc7, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x535f, .value=0xb0}, {.addr=0x5360, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0x535f, .value=0xb0, .type=IO_READ},
        {.addr=0x5360, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03AB) {
    const struct CPU_State initial_cpu = {.pc=0xd908, .a=0x1e, .x=0xe0, .y=0xf9, .sp=0x5a, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xd908, .value=0xb0}, {.addr=0xd909, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0xd8d6, .a=0x1e, .x=0xe0, .y=0xf9, .sp=0x5a, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0xd908, .value=0xb0}, {.addr=0xd909, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0xd908, .value=0xb0, .type=IO_READ},
        {.addr=0xd909, .value=0xcc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03AC) {
    const struct CPU_State initial_cpu = {.pc=0x30a5, .a=0xf4, .x=0xf8, .y=0x86, .sp=0x8e, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x30a5, .value=0xb0}, {.addr=0x30a6, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0x30a7, .a=0xf4, .x=0xf8, .y=0x86, .sp=0x8e, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x30a5, .value=0xb0}, {.addr=0x30a6, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0x30a5, .value=0xb0, .type=IO_READ},
        {.addr=0x30a6, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03AD) {
    const struct CPU_State initial_cpu = {.pc=0x467a, .a=0x86, .x=0x38, .y=0xe2, .sp=0x7c, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x467a, .value=0xb0}, {.addr=0x467b, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0x464e, .a=0x86, .x=0x38, .y=0xe2, .sp=0x7c, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x467a, .value=0xb0}, {.addr=0x467b, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0x467a, .value=0xb0, .type=IO_READ},
        {.addr=0x467b, .value=0xd2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03AE) {
    const struct CPU_State initial_cpu = {.pc=0xc693, .a=0x94, .x=0x4c, .y=0x9c, .sp=0xfe, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xc693, .value=0xb0}, {.addr=0xc694, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0xc695, .a=0x94, .x=0x4c, .y=0x9c, .sp=0xfe, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xc693, .value=0xb0}, {.addr=0xc694, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0xc693, .value=0xb0, .type=IO_READ},
        {.addr=0xc694, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03AF) {
    const struct CPU_State initial_cpu = {.pc=0xb15e, .a=0x12, .x=0x3c, .y=0x39, .sp=0x18, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xb15e, .value=0xb0}, {.addr=0xb15f, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0xb164, .a=0x12, .x=0x3c, .y=0x39, .sp=0x18, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xb15e, .value=0xb0}, {.addr=0xb15f, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0xb15e, .value=0xb0, .type=IO_READ},
        {.addr=0xb15f, .value=0x04, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03B0) {
    const struct CPU_State initial_cpu = {.pc=0x26d2, .a=0xc4, .x=0x52, .y=0x58, .sp=0xc5, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x26d2, .value=0xb0}, {.addr=0x26d3, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0x26c3, .a=0xc4, .x=0x52, .y=0x58, .sp=0xc5, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x26d2, .value=0xb0}, {.addr=0x26d3, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0x26d2, .value=0xb0, .type=IO_READ},
        {.addr=0x26d3, .value=0xef, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03B1) {
    const struct CPU_State initial_cpu = {.pc=0x31c6, .a=0xd5, .x=0x0e, .y=0x60, .sp=0x57, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x31c6, .value=0xb0}, {.addr=0x31c7, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0x3221, .a=0xd5, .x=0x0e, .y=0x60, .sp=0x57, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x31c6, .value=0xb0}, {.addr=0x31c7, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0x31c6, .value=0xb0, .type=IO_READ},
        {.addr=0x31c7, .value=0x59, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03B2) {
    const struct CPU_State initial_cpu = {.pc=0x6a91, .a=0x00, .x=0x3f, .y=0x67, .sp=0x7b, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x6a91, .value=0xb0}, {.addr=0x6a92, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0x6a93, .a=0x00, .x=0x3f, .y=0x67, .sp=0x7b, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x6a91, .value=0xb0}, {.addr=0x6a92, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0x6a91, .value=0xb0, .type=IO_READ},
        {.addr=0x6a92, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03B3) {
    const struct CPU_State initial_cpu = {.pc=0x9e03, .a=0xd2, .x=0x9b, .y=0x80, .sp=0xa4, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x9e03, .value=0xb0}, {.addr=0x9e04, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0x9e05, .a=0xd2, .x=0x9b, .y=0x80, .sp=0xa4, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x9e03, .value=0xb0}, {.addr=0x9e04, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0x9e03, .value=0xb0, .type=IO_READ},
        {.addr=0x9e04, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03B4) {
    const struct CPU_State initial_cpu = {.pc=0x4640, .a=0x0c, .x=0x60, .y=0x31, .sp=0xb3, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x4640, .value=0xb0}, {.addr=0x4641, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0x464c, .a=0x0c, .x=0x60, .y=0x31, .sp=0xb3, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x4640, .value=0xb0}, {.addr=0x4641, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0x4640, .value=0xb0, .type=IO_READ},
        {.addr=0x4641, .value=0x0a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03B5) {
    const struct CPU_State initial_cpu = {.pc=0x8c6b, .a=0x92, .x=0x6a, .y=0x4d, .sp=0x27, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x8c6b, .value=0xb0}, {.addr=0x8c6c, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0x8c6d, .a=0x92, .x=0x6a, .y=0x4d, .sp=0x27, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x8c6b, .value=0xb0}, {.addr=0x8c6c, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0x8c6b, .value=0xb0, .type=IO_READ},
        {.addr=0x8c6c, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03B6) {
    const struct CPU_State initial_cpu = {.pc=0x06fc, .a=0xcf, .x=0x05, .y=0x83, .sp=0xd1, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x06fc, .value=0xb0}, {.addr=0x06fd, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x067e, .a=0xcf, .x=0x05, .y=0x83, .sp=0xd1, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x06fc, .value=0xb0}, {.addr=0x06fd, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x06fc, .value=0xb0, .type=IO_READ},
        {.addr=0x06fd, .value=0x80, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03B7) {
    const struct CPU_State initial_cpu = {.pc=0x6b80, .a=0xb4, .x=0xd1, .y=0x4d, .sp=0x7e, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x6b80, .value=0xb0}, {.addr=0x6b81, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0x6b82, .a=0xb4, .x=0xd1, .y=0x4d, .sp=0x7e, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x6b80, .value=0xb0}, {.addr=0x6b81, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0x6b80, .value=0xb0, .type=IO_READ},
        {.addr=0x6b81, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03B8) {
    const struct CPU_State initial_cpu = {.pc=0x27e7, .a=0x8f, .x=0x1c, .y=0x91, .sp=0xad, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x27e7, .value=0xb0}, {.addr=0x27e8, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0x27b2, .a=0x8f, .x=0x1c, .y=0x91, .sp=0xad, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x27e7, .value=0xb0}, {.addr=0x27e8, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0x27e7, .value=0xb0, .type=IO_READ},
        {.addr=0x27e8, .value=0xc9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03B9) {
    const struct CPU_State initial_cpu = {.pc=0x1372, .a=0x45, .x=0x1e, .y=0x60, .sp=0x1b, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x1372, .value=0xb0}, {.addr=0x1373, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x1374, .a=0x45, .x=0x1e, .y=0x60, .sp=0x1b, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x1372, .value=0xb0}, {.addr=0x1373, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x1372, .value=0xb0, .type=IO_READ},
        {.addr=0x1373, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03BA) {
    const struct CPU_State initial_cpu = {.pc=0xcbf5, .a=0xab, .x=0x2b, .y=0xba, .sp=0x60, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xcbf5, .value=0xb0}, {.addr=0xcbf6, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0xcb7b, .a=0xab, .x=0x2b, .y=0xba, .sp=0x60, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xcbf5, .value=0xb0}, {.addr=0xcbf6, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0xcbf5, .value=0xb0, .type=IO_READ},
        {.addr=0xcbf6, .value=0x84, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03BB) {
    const struct CPU_State initial_cpu = {.pc=0xbfb6, .a=0xd1, .x=0x79, .y=0x04, .sp=0x5c, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xbfb6, .value=0xb0}, {.addr=0xbfb7, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0xbfb8, .a=0xd1, .x=0x79, .y=0x04, .sp=0x5c, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0xbfb6, .value=0xb0}, {.addr=0xbfb7, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0xbfb6, .value=0xb0, .type=IO_READ},
        {.addr=0xbfb7, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03BC) {
    const struct CPU_State initial_cpu = {.pc=0x3b1a, .a=0x17, .x=0x07, .y=0xad, .sp=0x47, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x3b1a, .value=0xb0}, {.addr=0x3b1b, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0x3b2f, .a=0x17, .x=0x07, .y=0xad, .sp=0x47, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x3b1a, .value=0xb0}, {.addr=0x3b1b, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0x3b1a, .value=0xb0, .type=IO_READ},
        {.addr=0x3b1b, .value=0x13, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03BD) {
    const struct CPU_State initial_cpu = {.pc=0x4375, .a=0x1a, .x=0x1b, .y=0xc7, .sp=0xbd, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x4375, .value=0xb0}, {.addr=0x4376, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0x4377, .a=0x1a, .x=0x1b, .y=0xc7, .sp=0xbd, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x4375, .value=0xb0}, {.addr=0x4376, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0x4375, .value=0xb0, .type=IO_READ},
        {.addr=0x4376, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03BE) {
    const struct CPU_State initial_cpu = {.pc=0x0dd6, .a=0x78, .x=0xcf, .y=0xe7, .sp=0x4a, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x0dd6, .value=0xb0}, {.addr=0x0dd7, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0x0dd8, .a=0x78, .x=0xcf, .y=0xe7, .sp=0x4a, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x0dd6, .value=0xb0}, {.addr=0x0dd7, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0x0dd6, .value=0xb0, .type=IO_READ},
        {.addr=0x0dd7, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03BF) {
    const struct CPU_State initial_cpu = {.pc=0x3cbe, .a=0x9a, .x=0xa8, .y=0x47, .sp=0xaf, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x3cbe, .value=0xb0}, {.addr=0x3cbf, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0x3cc0, .a=0x9a, .x=0xa8, .y=0x47, .sp=0xaf, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x3cbe, .value=0xb0}, {.addr=0x3cbf, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0x3cbe, .value=0xb0, .type=IO_READ},
        {.addr=0x3cbf, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03C0) {
    const struct CPU_State initial_cpu = {.pc=0xdb6a, .a=0x6a, .x=0x21, .y=0x8c, .sp=0x48, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xdb6a, .value=0xb0}, {.addr=0xdb6b, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xdb6c, .a=0x6a, .x=0x21, .y=0x8c, .sp=0x48, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xdb6a, .value=0xb0}, {.addr=0xdb6b, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xdb6a, .value=0xb0, .type=IO_READ},
        {.addr=0xdb6b, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03C1) {
    const struct CPU_State initial_cpu = {.pc=0x0a0f, .a=0xb3, .x=0x4e, .y=0xdb, .sp=0x6b, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x0a0f, .value=0xb0}, {.addr=0x0a10, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0x0a11, .a=0xb3, .x=0x4e, .y=0xdb, .sp=0x6b, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x0a0f, .value=0xb0}, {.addr=0x0a10, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0x0a0f, .value=0xb0, .type=IO_READ},
        {.addr=0x0a10, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03C2) {
    const struct CPU_State initial_cpu = {.pc=0x8e1a, .a=0x61, .x=0xd2, .y=0x93, .sp=0xc1, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x8e1a, .value=0xb0}, {.addr=0x8e1b, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0x8e1c, .a=0x61, .x=0xd2, .y=0x93, .sp=0xc1, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x8e1a, .value=0xb0}, {.addr=0x8e1b, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0x8e1a, .value=0xb0, .type=IO_READ},
        {.addr=0x8e1b, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03C3) {
    const struct CPU_State initial_cpu = {.pc=0xca12, .a=0xbe, .x=0x00, .y=0x96, .sp=0xbb, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xca12, .value=0xb0}, {.addr=0xca13, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xc9d1, .a=0xbe, .x=0x00, .y=0x96, .sp=0xbb, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xca12, .value=0xb0}, {.addr=0xca13, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xca12, .value=0xb0, .type=IO_READ},
        {.addr=0xca13, .value=0xbd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03C4) {
    const struct CPU_State initial_cpu = {.pc=0x9325, .a=0x01, .x=0xf0, .y=0xa0, .sp=0x77, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x9325, .value=0xb0}, {.addr=0x9326, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x930d, .a=0x01, .x=0xf0, .y=0xa0, .sp=0x77, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x9325, .value=0xb0}, {.addr=0x9326, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x9325, .value=0xb0, .type=IO_READ},
        {.addr=0x9326, .value=0xe6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03C5) {
    const struct CPU_State initial_cpu = {.pc=0xcaeb, .a=0xb1, .x=0xa7, .y=0x2c, .sp=0xf4, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xcaeb, .value=0xb0}, {.addr=0xcaec, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0xcae6, .a=0xb1, .x=0xa7, .y=0x2c, .sp=0xf4, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xcaeb, .value=0xb0}, {.addr=0xcaec, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0xcaeb, .value=0xb0, .type=IO_READ},
        {.addr=0xcaec, .value=0xf9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03C6) {
    const struct CPU_State initial_cpu = {.pc=0x367f, .a=0xd3, .x=0x9a, .y=0x0e, .sp=0x9f, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x367f, .value=0xb0}, {.addr=0x3680, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0x365c, .a=0xd3, .x=0x9a, .y=0x0e, .sp=0x9f, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x367f, .value=0xb0}, {.addr=0x3680, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0x367f, .value=0xb0, .type=IO_READ},
        {.addr=0x3680, .value=0xdb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03C7) {
    const struct CPU_State initial_cpu = {.pc=0xd2aa, .a=0x36, .x=0x36, .y=0x06, .sp=0x74, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xd2aa, .value=0xb0}, {.addr=0xd2ab, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xd2ac, .a=0x36, .x=0x36, .y=0x06, .sp=0x74, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xd2aa, .value=0xb0}, {.addr=0xd2ab, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xd2aa, .value=0xb0, .type=IO_READ},
        {.addr=0xd2ab, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03C8) {
    const struct CPU_State initial_cpu = {.pc=0xed47, .a=0x37, .x=0x61, .y=0x59, .sp=0x5b, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xed47, .value=0xb0}, {.addr=0xed48, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0xed53, .a=0x37, .x=0x61, .y=0x59, .sp=0x5b, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xed47, .value=0xb0}, {.addr=0xed48, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0xed47, .value=0xb0, .type=IO_READ},
        {.addr=0xed48, .value=0x0a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03C9) {
    const struct CPU_State initial_cpu = {.pc=0x5918, .a=0xed, .x=0x1d, .y=0x5b, .sp=0x99, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x5918, .value=0xb0}, {.addr=0x5919, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0x591a, .a=0xed, .x=0x1d, .y=0x5b, .sp=0x99, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x5918, .value=0xb0}, {.addr=0x5919, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0x5918, .value=0xb0, .type=IO_READ},
        {.addr=0x5919, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03CA) {
    const struct CPU_State initial_cpu = {.pc=0x4d52, .a=0xfb, .x=0x7b, .y=0x89, .sp=0x7d, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x4d52, .value=0xb0}, {.addr=0x4d53, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0x4dae, .a=0xfb, .x=0x7b, .y=0x89, .sp=0x7d, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x4d52, .value=0xb0}, {.addr=0x4d53, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0x4d52, .value=0xb0, .type=IO_READ},
        {.addr=0x4d53, .value=0x5a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03CB) {
    const struct CPU_State initial_cpu = {.pc=0xafd5, .a=0xd0, .x=0xeb, .y=0x1d, .sp=0xe6, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xafd5, .value=0xb0}, {.addr=0xafd6, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0xb04a, .a=0xd0, .x=0xeb, .y=0x1d, .sp=0xe6, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0xafd5, .value=0xb0}, {.addr=0xafd6, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0xafd5, .value=0xb0, .type=IO_READ},
        {.addr=0xafd6, .value=0x73, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03CC) {
    const struct CPU_State initial_cpu = {.pc=0x709d, .a=0x8f, .x=0xac, .y=0xca, .sp=0x07, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x709d, .value=0xb0}, {.addr=0x709e, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0x70ae, .a=0x8f, .x=0xac, .y=0xca, .sp=0x07, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x709d, .value=0xb0}, {.addr=0x709e, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0x709d, .value=0xb0, .type=IO_READ},
        {.addr=0x709e, .value=0x0f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03CD) {
    const struct CPU_State initial_cpu = {.pc=0xa009, .a=0xd9, .x=0x14, .y=0x92, .sp=0x61, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xa009, .value=0xb0}, {.addr=0xa00a, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0xa00b, .a=0xd9, .x=0x14, .y=0x92, .sp=0x61, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0xa009, .value=0xb0}, {.addr=0xa00a, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0xa009, .value=0xb0, .type=IO_READ},
        {.addr=0xa00a, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03CE) {
    const struct CPU_State initial_cpu = {.pc=0x6342, .a=0x59, .x=0x46, .y=0xe5, .sp=0x7e, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x6342, .value=0xb0}, {.addr=0x6343, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0x6368, .a=0x59, .x=0x46, .y=0xe5, .sp=0x7e, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x6342, .value=0xb0}, {.addr=0x6343, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0x6342, .value=0xb0, .type=IO_READ},
        {.addr=0x6343, .value=0x24, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03CF) {
    const struct CPU_State initial_cpu = {.pc=0xd2c2, .a=0x83, .x=0x5f, .y=0x56, .sp=0xfc, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xd2c2, .value=0xb0}, {.addr=0xd2c3, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xd264, .a=0x83, .x=0x5f, .y=0x56, .sp=0xfc, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0xd2c2, .value=0xb0}, {.addr=0xd2c3, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xd2c2, .value=0xb0, .type=IO_READ},
        {.addr=0xd2c3, .value=0xa0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03D0) {
    const struct CPU_State initial_cpu = {.pc=0x1ba2, .a=0x1f, .x=0x38, .y=0x91, .sp=0xb3, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x1ba2, .value=0xb0}, {.addr=0x1ba3, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0x1ba4, .a=0x1f, .x=0x38, .y=0x91, .sp=0xb3, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x1ba2, .value=0xb0}, {.addr=0x1ba3, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0x1ba2, .value=0xb0, .type=IO_READ},
        {.addr=0x1ba3, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03D1) {
    const struct CPU_State initial_cpu = {.pc=0x91bf, .a=0x92, .x=0xd0, .y=0x51, .sp=0x89, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x91bf, .value=0xb0}, {.addr=0x91c0, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0x9215, .a=0x92, .x=0xd0, .y=0x51, .sp=0x89, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x91bf, .value=0xb0}, {.addr=0x91c0, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0x91bf, .value=0xb0, .type=IO_READ},
        {.addr=0x91c0, .value=0x54, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03D2) {
    const struct CPU_State initial_cpu = {.pc=0xe6e4, .a=0x10, .x=0x1b, .y=0x2f, .sp=0xc7, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xe6e4, .value=0xb0}, {.addr=0xe6e5, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0xe71b, .a=0x10, .x=0x1b, .y=0x2f, .sp=0xc7, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xe6e4, .value=0xb0}, {.addr=0xe6e5, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0xe6e4, .value=0xb0, .type=IO_READ},
        {.addr=0xe6e5, .value=0x35, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03D3) {
    const struct CPU_State initial_cpu = {.pc=0x4366, .a=0xed, .x=0x85, .y=0x1b, .sp=0x48, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x4366, .value=0xb0}, {.addr=0x4367, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x4368, .a=0xed, .x=0x85, .y=0x1b, .sp=0x48, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x4366, .value=0xb0}, {.addr=0x4367, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x4366, .value=0xb0, .type=IO_READ},
        {.addr=0x4367, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03D4) {
    const struct CPU_State initial_cpu = {.pc=0x954f, .a=0x61, .x=0x85, .y=0xe4, .sp=0x84, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x954f, .value=0xb0}, {.addr=0x9550, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0x955d, .a=0x61, .x=0x85, .y=0xe4, .sp=0x84, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x954f, .value=0xb0}, {.addr=0x9550, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0x954f, .value=0xb0, .type=IO_READ},
        {.addr=0x9550, .value=0x0c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03D5) {
    const struct CPU_State initial_cpu = {.pc=0x7dfc, .a=0xa6, .x=0x79, .y=0x8e, .sp=0x7a, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x7dfc, .value=0xb0}, {.addr=0x7dfd, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0x7e28, .a=0xa6, .x=0x79, .y=0x8e, .sp=0x7a, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x7dfc, .value=0xb0}, {.addr=0x7dfd, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0x7dfc, .value=0xb0, .type=IO_READ},
        {.addr=0x7dfd, .value=0x2a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03D6) {
    const struct CPU_State initial_cpu = {.pc=0x6802, .a=0xd7, .x=0x90, .y=0x3c, .sp=0x59, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x6802, .value=0xb0}, {.addr=0x6803, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x6804, .a=0xd7, .x=0x90, .y=0x3c, .sp=0x59, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x6802, .value=0xb0}, {.addr=0x6803, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x6802, .value=0xb0, .type=IO_READ},
        {.addr=0x6803, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03D7) {
    const struct CPU_State initial_cpu = {.pc=0x1bd2, .a=0xdb, .x=0x6a, .y=0x85, .sp=0xef, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x1bd2, .value=0xb0}, {.addr=0x1bd3, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0x1c26, .a=0xdb, .x=0x6a, .y=0x85, .sp=0xef, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x1bd2, .value=0xb0}, {.addr=0x1bd3, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0x1bd2, .value=0xb0, .type=IO_READ},
        {.addr=0x1bd3, .value=0x52, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03D8) {
    const struct CPU_State initial_cpu = {.pc=0x0124, .a=0x00, .x=0xd0, .y=0xac, .sp=0x8c, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0xb0}, {.addr=0x0125, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x0126, .a=0x00, .x=0xd0, .y=0xac, .sp=0x8c, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0xb0}, {.addr=0x0125, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x0124, .value=0xb0, .type=IO_READ},
        {.addr=0x0125, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03D9) {
    const struct CPU_State initial_cpu = {.pc=0x7ebd, .a=0xe7, .x=0xc8, .y=0x24, .sp=0x27, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x7ebd, .value=0xb0}, {.addr=0x7ebe, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x7ebf, .a=0xe7, .x=0xc8, .y=0x24, .sp=0x27, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x7ebd, .value=0xb0}, {.addr=0x7ebe, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x7ebd, .value=0xb0, .type=IO_READ},
        {.addr=0x7ebe, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03DA) {
    const struct CPU_State initial_cpu = {.pc=0x18ab, .a=0xca, .x=0xdd, .y=0x6c, .sp=0xb1, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x18ab, .value=0xb0}, {.addr=0x18ac, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x18ad, .a=0xca, .x=0xdd, .y=0x6c, .sp=0xb1, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x18ab, .value=0xb0}, {.addr=0x18ac, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x18ab, .value=0xb0, .type=IO_READ},
        {.addr=0x18ac, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03DB) {
    const struct CPU_State initial_cpu = {.pc=0xb307, .a=0x1f, .x=0x59, .y=0x3d, .sp=0x25, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xb307, .value=0xb0}, {.addr=0xb308, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0xb309, .a=0x1f, .x=0x59, .y=0x3d, .sp=0x25, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0xb307, .value=0xb0}, {.addr=0xb308, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0xb307, .value=0xb0, .type=IO_READ},
        {.addr=0xb308, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03DC) {
    const struct CPU_State initial_cpu = {.pc=0xdf1a, .a=0xc4, .x=0x16, .y=0xe1, .sp=0xb7, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xdf1a, .value=0xb0}, {.addr=0xdf1b, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0xde9d, .a=0xc4, .x=0x16, .y=0xe1, .sp=0xb7, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0xdf1a, .value=0xb0}, {.addr=0xdf1b, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0xdf1a, .value=0xb0, .type=IO_READ},
        {.addr=0xdf1b, .value=0x81, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03DD) {
    const struct CPU_State initial_cpu = {.pc=0x248a, .a=0xc1, .x=0x02, .y=0x04, .sp=0x79, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x248a, .value=0xb0}, {.addr=0x248b, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0x248c, .a=0xc1, .x=0x02, .y=0x04, .sp=0x79, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x248a, .value=0xb0}, {.addr=0x248b, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0x248a, .value=0xb0, .type=IO_READ},
        {.addr=0x248b, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03DE) {
    const struct CPU_State initial_cpu = {.pc=0xfcc4, .a=0x41, .x=0x27, .y=0x4d, .sp=0x02, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xfcc4, .value=0xb0}, {.addr=0xfcc5, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0xfcc6, .a=0x41, .x=0x27, .y=0x4d, .sp=0x02, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xfcc4, .value=0xb0}, {.addr=0xfcc5, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0xfcc4, .value=0xb0, .type=IO_READ},
        {.addr=0xfcc5, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03DF) {
    const struct CPU_State initial_cpu = {.pc=0xeee7, .a=0xb2, .x=0xcf, .y=0x21, .sp=0xf0, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xeee7, .value=0xb0}, {.addr=0xeee8, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0xeee9, .a=0xb2, .x=0xcf, .y=0x21, .sp=0xf0, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0xeee7, .value=0xb0}, {.addr=0xeee8, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0xeee7, .value=0xb0, .type=IO_READ},
        {.addr=0xeee8, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03E0) {
    const struct CPU_State initial_cpu = {.pc=0x19df, .a=0x00, .x=0xef, .y=0xdd, .sp=0x00, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x19df, .value=0xb0}, {.addr=0x19e0, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0x19e1, .a=0x00, .x=0xef, .y=0xdd, .sp=0x00, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0x19df, .value=0xb0}, {.addr=0x19e0, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0x19df, .value=0xb0, .type=IO_READ},
        {.addr=0x19e0, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03E1) {
    const struct CPU_State initial_cpu = {.pc=0x61c9, .a=0xfb, .x=0x0c, .y=0x8d, .sp=0xfc, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x61c9, .value=0xb0}, {.addr=0x61ca, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x620b, .a=0xfb, .x=0x0c, .y=0x8d, .sp=0xfc, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x61c9, .value=0xb0}, {.addr=0x61ca, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x61c9, .value=0xb0, .type=IO_READ},
        {.addr=0x61ca, .value=0x40, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03E2) {
    const struct CPU_State initial_cpu = {.pc=0xf76f, .a=0x1d, .x=0x41, .y=0x76, .sp=0x3b, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xf76f, .value=0xb0}, {.addr=0xf770, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0xf768, .a=0x1d, .x=0x41, .y=0x76, .sp=0x3b, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0xf76f, .value=0xb0}, {.addr=0xf770, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0xf76f, .value=0xb0, .type=IO_READ},
        {.addr=0xf770, .value=0xf7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03E3) {
    const struct CPU_State initial_cpu = {.pc=0x1144, .a=0x16, .x=0x20, .y=0x07, .sp=0xc4, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x1144, .value=0xb0}, {.addr=0x1145, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0x10f1, .a=0x16, .x=0x20, .y=0x07, .sp=0xc4, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x1144, .value=0xb0}, {.addr=0x1145, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0x1144, .value=0xb0, .type=IO_READ},
        {.addr=0x1145, .value=0xab, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03E4) {
    const struct CPU_State initial_cpu = {.pc=0x37ba, .a=0xff, .x=0xc7, .y=0x14, .sp=0xb2, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x37ba, .value=0xb0}, {.addr=0x37bb, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0x37bc, .a=0xff, .x=0xc7, .y=0x14, .sp=0xb2, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x37ba, .value=0xb0}, {.addr=0x37bb, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0x37ba, .value=0xb0, .type=IO_READ},
        {.addr=0x37bb, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03E5) {
    const struct CPU_State initial_cpu = {.pc=0x3239, .a=0xd6, .x=0xe3, .y=0x65, .sp=0xb8, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x3239, .value=0xb0}, {.addr=0x323a, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x3285, .a=0xd6, .x=0xe3, .y=0x65, .sp=0xb8, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x3239, .value=0xb0}, {.addr=0x323a, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x3239, .value=0xb0, .type=IO_READ},
        {.addr=0x323a, .value=0x4a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03E6) {
    const struct CPU_State initial_cpu = {.pc=0x3998, .a=0xf4, .x=0x74, .y=0x90, .sp=0xc0, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x3998, .value=0xb0}, {.addr=0x3999, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0x399a, .a=0xf4, .x=0x74, .y=0x90, .sp=0xc0, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x3998, .value=0xb0}, {.addr=0x3999, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0x3998, .value=0xb0, .type=IO_READ},
        {.addr=0x3999, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_B0, _B0_03E7) {
    const struct CPU_State initial_cpu = {.pc=0xa169, .a=0xda, .x=0x83, .y=0xf9, .sp=0xdc, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xa169, .value=0xb0}, {.addr=0xa16a, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0xa16b, .a=0xda, .x=0x83, .y=0xf9, .sp=0xdc, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xa169, .value=0xb0}, {.addr=0xa16a, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0xa169, .value=0xb0, .type=IO_READ},
        {.addr=0xa16a, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("B0 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
