#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_90, _90_0000) {
    const struct CPU_State initial_cpu = {.pc=0xb384, .a=0xac, .x=0x19, .y=0x05, .sp=0x09, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xb384, .value=0x90}, {.addr=0xb385, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0xb386, .a=0xac, .x=0x19, .y=0x05, .sp=0x09, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xb384, .value=0x90}, {.addr=0xb385, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0xb384, .value=0x90, .type=IO_READ},
        {.addr=0xb385, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0001) {
    const struct CPU_State initial_cpu = {.pc=0x2f09, .a=0x20, .x=0x88, .y=0xe0, .sp=0x37, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x2f09, .value=0x90}, {.addr=0x2f0a, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x2f0b, .a=0x20, .x=0x88, .y=0xe0, .sp=0x37, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x2f09, .value=0x90}, {.addr=0x2f0a, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x2f09, .value=0x90, .type=IO_READ},
        {.addr=0x2f0a, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0002) {
    const struct CPU_State initial_cpu = {.pc=0xd0e1, .a=0x55, .x=0x65, .y=0xe0, .sp=0x1b, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xd0e1, .value=0x90}, {.addr=0xd0e2, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0xd0e3, .a=0x55, .x=0x65, .y=0xe0, .sp=0x1b, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0xd0e1, .value=0x90}, {.addr=0xd0e2, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0xd0e1, .value=0x90, .type=IO_READ},
        {.addr=0xd0e2, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0003) {
    const struct CPU_State initial_cpu = {.pc=0xac12, .a=0x20, .x=0x53, .y=0x9c, .sp=0x56, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xac12, .value=0x90}, {.addr=0xac13, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0xac75, .a=0x20, .x=0x53, .y=0x9c, .sp=0x56, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0xac12, .value=0x90}, {.addr=0xac13, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0xac12, .value=0x90, .type=IO_READ},
        {.addr=0xac13, .value=0x61, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0004) {
    const struct CPU_State initial_cpu = {.pc=0xcece, .a=0xcf, .x=0xec, .y=0xb3, .sp=0x81, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xcece, .value=0x90}, {.addr=0xcecf, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0xce89, .a=0xcf, .x=0xec, .y=0xb3, .sp=0x81, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0xcece, .value=0x90}, {.addr=0xcecf, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0xcece, .value=0x90, .type=IO_READ},
        {.addr=0xcecf, .value=0xb9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0005) {
    const struct CPU_State initial_cpu = {.pc=0xbaa7, .a=0x33, .x=0x30, .y=0xe4, .sp=0xfe, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xbaa7, .value=0x90}, {.addr=0xbaa8, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0xbadf, .a=0x33, .x=0x30, .y=0xe4, .sp=0xfe, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0xbaa7, .value=0x90}, {.addr=0xbaa8, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0xbaa7, .value=0x90, .type=IO_READ},
        {.addr=0xbaa8, .value=0x36, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0006) {
    const struct CPU_State initial_cpu = {.pc=0x2216, .a=0xba, .x=0xcf, .y=0x1b, .sp=0x6a, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x2216, .value=0x90}, {.addr=0x2217, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0x21ca, .a=0xba, .x=0xcf, .y=0x1b, .sp=0x6a, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x2216, .value=0x90}, {.addr=0x2217, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0x2216, .value=0x90, .type=IO_READ},
        {.addr=0x2217, .value=0xb2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0007) {
    const struct CPU_State initial_cpu = {.pc=0xada2, .a=0x7b, .x=0x64, .y=0xc3, .sp=0xc4, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xada2, .value=0x90}, {.addr=0xada3, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xadd1, .a=0x7b, .x=0x64, .y=0xc3, .sp=0xc4, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xada2, .value=0x90}, {.addr=0xada3, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xada2, .value=0x90, .type=IO_READ},
        {.addr=0xada3, .value=0x2d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0008) {
    const struct CPU_State initial_cpu = {.pc=0x70ff, .a=0x7e, .x=0x82, .y=0x4c, .sp=0x51, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x70ff, .value=0x90}, {.addr=0x7100, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x7101, .a=0x7e, .x=0x82, .y=0x4c, .sp=0x51, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x70ff, .value=0x90}, {.addr=0x7100, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x70ff, .value=0x90, .type=IO_READ},
        {.addr=0x7100, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0009) {
    const struct CPU_State initial_cpu = {.pc=0xca08, .a=0x58, .x=0xeb, .y=0x17, .sp=0x49, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xca08, .value=0x90}, {.addr=0xca09, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xca0a, .a=0x58, .x=0xeb, .y=0x17, .sp=0x49, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xca08, .value=0x90}, {.addr=0xca09, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xca08, .value=0x90, .type=IO_READ},
        {.addr=0xca09, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_000A) {
    const struct CPU_State initial_cpu = {.pc=0x6b17, .a=0xb9, .x=0x90, .y=0x08, .sp=0x18, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x6b17, .value=0x90}, {.addr=0x6b18, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0x6b19, .a=0xb9, .x=0x90, .y=0x08, .sp=0x18, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x6b17, .value=0x90}, {.addr=0x6b18, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0x6b17, .value=0x90, .type=IO_READ},
        {.addr=0x6b18, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_000B) {
    const struct CPU_State initial_cpu = {.pc=0x077b, .a=0x81, .x=0xc9, .y=0xe2, .sp=0x59, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x077b, .value=0x90}, {.addr=0x077c, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0x077d, .a=0x81, .x=0xc9, .y=0xe2, .sp=0x59, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x077b, .value=0x90}, {.addr=0x077c, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0x077b, .value=0x90, .type=IO_READ},
        {.addr=0x077c, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_000C) {
    const struct CPU_State initial_cpu = {.pc=0x26a8, .a=0xa9, .x=0x1e, .y=0x57, .sp=0xdc, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x26a8, .value=0x90}, {.addr=0x26a9, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0x262e, .a=0xa9, .x=0x1e, .y=0x57, .sp=0xdc, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x26a8, .value=0x90}, {.addr=0x26a9, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0x26a8, .value=0x90, .type=IO_READ},
        {.addr=0x26a9, .value=0x84, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_000D) {
    const struct CPU_State initial_cpu = {.pc=0xe6c6, .a=0xb6, .x=0x33, .y=0x95, .sp=0x7d, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xe6c6, .value=0x90}, {.addr=0xe6c7, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0xe65e, .a=0xb6, .x=0x33, .y=0x95, .sp=0x7d, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xe6c6, .value=0x90}, {.addr=0xe6c7, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0xe6c6, .value=0x90, .type=IO_READ},
        {.addr=0xe6c7, .value=0x96, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_000E) {
    const struct CPU_State initial_cpu = {.pc=0x5678, .a=0xe3, .x=0xd5, .y=0x19, .sp=0x88, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x5678, .value=0x90}, {.addr=0x5679, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x55fc, .a=0xe3, .x=0xd5, .y=0x19, .sp=0x88, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x5678, .value=0x90}, {.addr=0x5679, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x5678, .value=0x90, .type=IO_READ},
        {.addr=0x5679, .value=0x82, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_000F) {
    const struct CPU_State initial_cpu = {.pc=0x66dd, .a=0x04, .x=0xfe, .y=0xac, .sp=0xa6, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x66dd, .value=0x90}, {.addr=0x66de, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x670a, .a=0x04, .x=0xfe, .y=0xac, .sp=0xa6, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x66dd, .value=0x90}, {.addr=0x66de, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x66dd, .value=0x90, .type=IO_READ},
        {.addr=0x66de, .value=0x2b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0010) {
    const struct CPU_State initial_cpu = {.pc=0xa97a, .a=0x46, .x=0x61, .y=0x8e, .sp=0xa2, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xa97a, .value=0x90}, {.addr=0xa97b, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0xa947, .a=0x46, .x=0x61, .y=0x8e, .sp=0xa2, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xa97a, .value=0x90}, {.addr=0xa97b, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0xa97a, .value=0x90, .type=IO_READ},
        {.addr=0xa97b, .value=0xcb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0011) {
    const struct CPU_State initial_cpu = {.pc=0x1a87, .a=0xb5, .x=0x90, .y=0x31, .sp=0xf7, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x1a87, .value=0x90}, {.addr=0x1a88, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0x1ae2, .a=0xb5, .x=0x90, .y=0x31, .sp=0xf7, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x1a87, .value=0x90}, {.addr=0x1a88, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0x1a87, .value=0x90, .type=IO_READ},
        {.addr=0x1a88, .value=0x59, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0012) {
    const struct CPU_State initial_cpu = {.pc=0x12e8, .a=0x7f, .x=0xe2, .y=0x4d, .sp=0xdb, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x12e8, .value=0x90}, {.addr=0x12e9, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0x1323, .a=0x7f, .x=0xe2, .y=0x4d, .sp=0xdb, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x12e8, .value=0x90}, {.addr=0x12e9, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0x12e8, .value=0x90, .type=IO_READ},
        {.addr=0x12e9, .value=0x39, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0013) {
    const struct CPU_State initial_cpu = {.pc=0x066b, .a=0xc6, .x=0x27, .y=0xe6, .sp=0xc0, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x066b, .value=0x90}, {.addr=0x066c, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0x066d, .a=0xc6, .x=0x27, .y=0xe6, .sp=0xc0, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x066b, .value=0x90}, {.addr=0x066c, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0x066b, .value=0x90, .type=IO_READ},
        {.addr=0x066c, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0014) {
    const struct CPU_State initial_cpu = {.pc=0x1356, .a=0x93, .x=0xf3, .y=0x01, .sp=0xe8, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x1356, .value=0x90}, {.addr=0x1357, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x1380, .a=0x93, .x=0xf3, .y=0x01, .sp=0xe8, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x1356, .value=0x90}, {.addr=0x1357, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x1356, .value=0x90, .type=IO_READ},
        {.addr=0x1357, .value=0x28, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0015) {
    const struct CPU_State initial_cpu = {.pc=0x927e, .a=0x4c, .x=0xc7, .y=0x64, .sp=0x4d, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x927e, .value=0x90}, {.addr=0x927f, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x92ed, .a=0x4c, .x=0xc7, .y=0x64, .sp=0x4d, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x927e, .value=0x90}, {.addr=0x927f, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x927e, .value=0x90, .type=IO_READ},
        {.addr=0x927f, .value=0x6d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0016) {
    const struct CPU_State initial_cpu = {.pc=0xbd88, .a=0x17, .x=0x58, .y=0x96, .sp=0xbb, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xbd88, .value=0x90}, {.addr=0xbd89, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xbd8a, .a=0x17, .x=0x58, .y=0x96, .sp=0xbb, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xbd88, .value=0x90}, {.addr=0xbd89, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xbd88, .value=0x90, .type=IO_READ},
        {.addr=0xbd89, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0017) {
    const struct CPU_State initial_cpu = {.pc=0x9aee, .a=0x45, .x=0x88, .y=0x65, .sp=0x79, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x9aee, .value=0x90}, {.addr=0x9aef, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x9af0, .a=0x45, .x=0x88, .y=0x65, .sp=0x79, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x9aee, .value=0x90}, {.addr=0x9aef, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0x9aee, .value=0x90, .type=IO_READ},
        {.addr=0x9aef, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0018) {
    const struct CPU_State initial_cpu = {.pc=0xb151, .a=0x83, .x=0xf8, .y=0x9c, .sp=0x0d, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xb151, .value=0x90}, {.addr=0xb152, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0xb1c9, .a=0x83, .x=0xf8, .y=0x9c, .sp=0x0d, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0xb151, .value=0x90}, {.addr=0xb152, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0xb151, .value=0x90, .type=IO_READ},
        {.addr=0xb152, .value=0x76, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0019) {
    const struct CPU_State initial_cpu = {.pc=0xaf16, .a=0x2e, .x=0xc4, .y=0x1d, .sp=0x0b, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xaf16, .value=0x90}, {.addr=0xaf17, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0xaf18, .a=0x2e, .x=0xc4, .y=0x1d, .sp=0x0b, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xaf16, .value=0x90}, {.addr=0xaf17, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0xaf16, .value=0x90, .type=IO_READ},
        {.addr=0xaf17, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_001A) {
    const struct CPU_State initial_cpu = {.pc=0xa7ee, .a=0xb3, .x=0xde, .y=0x4a, .sp=0xa3, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xa7ee, .value=0x90}, {.addr=0xa7ef, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0xa7f0, .a=0xb3, .x=0xde, .y=0x4a, .sp=0xa3, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0xa7ee, .value=0x90}, {.addr=0xa7ef, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0xa7ee, .value=0x90, .type=IO_READ},
        {.addr=0xa7ef, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_001B) {
    const struct CPU_State initial_cpu = {.pc=0x97d2, .a=0xb9, .x=0x23, .y=0xc0, .sp=0xed, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x97d2, .value=0x90}, {.addr=0x97d3, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0x97f9, .a=0xb9, .x=0x23, .y=0xc0, .sp=0xed, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x97d2, .value=0x90}, {.addr=0x97d3, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0x97d2, .value=0x90, .type=IO_READ},
        {.addr=0x97d3, .value=0x25, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_001C) {
    const struct CPU_State initial_cpu = {.pc=0x2601, .a=0x4b, .x=0xa5, .y=0x99, .sp=0x62, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x2601, .value=0x90}, {.addr=0x2602, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x2603, .a=0x4b, .x=0xa5, .y=0x99, .sp=0x62, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x2601, .value=0x90}, {.addr=0x2602, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x2601, .value=0x90, .type=IO_READ},
        {.addr=0x2602, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_001D) {
    const struct CPU_State initial_cpu = {.pc=0x4027, .a=0xfc, .x=0x71, .y=0x3c, .sp=0xb8, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x4027, .value=0x90}, {.addr=0x4028, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x4008, .a=0xfc, .x=0x71, .y=0x3c, .sp=0xb8, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x4027, .value=0x90}, {.addr=0x4028, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x4027, .value=0x90, .type=IO_READ},
        {.addr=0x4028, .value=0xdf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_001E) {
    const struct CPU_State initial_cpu = {.pc=0xa294, .a=0x33, .x=0xaa, .y=0x19, .sp=0x5c, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xa294, .value=0x90}, {.addr=0xa295, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0xa296, .a=0x33, .x=0xaa, .y=0x19, .sp=0x5c, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0xa294, .value=0x90}, {.addr=0xa295, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0xa294, .value=0x90, .type=IO_READ},
        {.addr=0xa295, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_001F) {
    const struct CPU_State initial_cpu = {.pc=0xff9a, .a=0x9c, .x=0xfd, .y=0x8d, .sp=0xf5, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xff9a, .value=0x90}, {.addr=0xff9b, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0xff9c, .a=0x9c, .x=0xfd, .y=0x8d, .sp=0xf5, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0xff9a, .value=0x90}, {.addr=0xff9b, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0xff9a, .value=0x90, .type=IO_READ},
        {.addr=0xff9b, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0020) {
    const struct CPU_State initial_cpu = {.pc=0xfbf9, .a=0xab, .x=0x05, .y=0xd5, .sp=0xaf, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xfbf9, .value=0x90}, {.addr=0xfbfa, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0xfbfb, .a=0xab, .x=0x05, .y=0xd5, .sp=0xaf, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0xfbf9, .value=0x90}, {.addr=0xfbfa, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0xfbf9, .value=0x90, .type=IO_READ},
        {.addr=0xfbfa, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0021) {
    const struct CPU_State initial_cpu = {.pc=0xe415, .a=0x6a, .x=0xc1, .y=0xab, .sp=0x5b, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xe415, .value=0x90}, {.addr=0xe416, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xe454, .a=0x6a, .x=0xc1, .y=0xab, .sp=0x5b, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xe415, .value=0x90}, {.addr=0xe416, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xe415, .value=0x90, .type=IO_READ},
        {.addr=0xe416, .value=0x3d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0022) {
    const struct CPU_State initial_cpu = {.pc=0x165f, .a=0xbb, .x=0x2f, .y=0xd1, .sp=0x76, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x165f, .value=0x90}, {.addr=0x1660, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0x1661, .a=0xbb, .x=0x2f, .y=0xd1, .sp=0x76, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x165f, .value=0x90}, {.addr=0x1660, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0x165f, .value=0x90, .type=IO_READ},
        {.addr=0x1660, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0023) {
    const struct CPU_State initial_cpu = {.pc=0x5323, .a=0x4d, .x=0x7c, .y=0x90, .sp=0x0a, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x5323, .value=0x90}, {.addr=0x5324, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x536f, .a=0x4d, .x=0x7c, .y=0x90, .sp=0x0a, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x5323, .value=0x90}, {.addr=0x5324, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x5323, .value=0x90, .type=IO_READ},
        {.addr=0x5324, .value=0x4a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0024) {
    const struct CPU_State initial_cpu = {.pc=0x192b, .a=0xee, .x=0x61, .y=0xdb, .sp=0x3d, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x192b, .value=0x90}, {.addr=0x192c, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x1969, .a=0xee, .x=0x61, .y=0xdb, .sp=0x3d, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x192b, .value=0x90}, {.addr=0x192c, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x192b, .value=0x90, .type=IO_READ},
        {.addr=0x192c, .value=0x3c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0025) {
    const struct CPU_State initial_cpu = {.pc=0x79cc, .a=0x56, .x=0x4b, .y=0x1b, .sp=0x92, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x79cc, .value=0x90}, {.addr=0x79cd, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x79ce, .a=0x56, .x=0x4b, .y=0x1b, .sp=0x92, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x79cc, .value=0x90}, {.addr=0x79cd, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x79cc, .value=0x90, .type=IO_READ},
        {.addr=0x79cd, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0026) {
    const struct CPU_State initial_cpu = {.pc=0x1a12, .a=0x33, .x=0xf1, .y=0xb0, .sp=0x32, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x1a12, .value=0x90}, {.addr=0x1a13, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0x19a1, .a=0x33, .x=0xf1, .y=0xb0, .sp=0x32, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x1a12, .value=0x90}, {.addr=0x1a13, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0x1a12, .value=0x90, .type=IO_READ},
        {.addr=0x1a13, .value=0x8d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0027) {
    const struct CPU_State initial_cpu = {.pc=0xb3e9, .a=0xd8, .x=0x87, .y=0xee, .sp=0xb9, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xb3e9, .value=0x90}, {.addr=0xb3ea, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0xb3eb, .a=0xd8, .x=0x87, .y=0xee, .sp=0xb9, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xb3e9, .value=0x90}, {.addr=0xb3ea, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0xb3e9, .value=0x90, .type=IO_READ},
        {.addr=0xb3ea, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0028) {
    const struct CPU_State initial_cpu = {.pc=0xfa14, .a=0xa6, .x=0x5a, .y=0x12, .sp=0x1e, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xfa14, .value=0x90}, {.addr=0xfa15, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0xfa4f, .a=0xa6, .x=0x5a, .y=0x12, .sp=0x1e, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xfa14, .value=0x90}, {.addr=0xfa15, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0xfa14, .value=0x90, .type=IO_READ},
        {.addr=0xfa15, .value=0x39, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0029) {
    const struct CPU_State initial_cpu = {.pc=0x8cea, .a=0xae, .x=0x8d, .y=0x4d, .sp=0x14, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x8cea, .value=0x90}, {.addr=0x8ceb, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x8cec, .a=0xae, .x=0x8d, .y=0x4d, .sp=0x14, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x8cea, .value=0x90}, {.addr=0x8ceb, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x8cea, .value=0x90, .type=IO_READ},
        {.addr=0x8ceb, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_002A) {
    const struct CPU_State initial_cpu = {.pc=0x1d2f, .a=0x60, .x=0x62, .y=0xb7, .sp=0x82, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x1d2f, .value=0x90}, {.addr=0x1d30, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0x1d31, .a=0x60, .x=0x62, .y=0xb7, .sp=0x82, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x1d2f, .value=0x90}, {.addr=0x1d30, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0x1d2f, .value=0x90, .type=IO_READ},
        {.addr=0x1d30, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_002B) {
    const struct CPU_State initial_cpu = {.pc=0xfacc, .a=0x73, .x=0x8a, .y=0x38, .sp=0xc4, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xfacc, .value=0x90}, {.addr=0xfacd, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0xfb46, .a=0x73, .x=0x8a, .y=0x38, .sp=0xc4, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0xfacc, .value=0x90}, {.addr=0xfacd, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0xfacc, .value=0x90, .type=IO_READ},
        {.addr=0xfacd, .value=0x78, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_002C) {
    const struct CPU_State initial_cpu = {.pc=0xe92c, .a=0x2f, .x=0x4b, .y=0xc2, .sp=0x49, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xe92c, .value=0x90}, {.addr=0xe92d, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0xe92e, .a=0x2f, .x=0x4b, .y=0xc2, .sp=0x49, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xe92c, .value=0x90}, {.addr=0xe92d, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0xe92c, .value=0x90, .type=IO_READ},
        {.addr=0xe92d, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_002D) {
    const struct CPU_State initial_cpu = {.pc=0xec69, .a=0xa5, .x=0x1d, .y=0x90, .sp=0x28, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xec69, .value=0x90}, {.addr=0xec6a, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0xec6b, .a=0xa5, .x=0x1d, .y=0x90, .sp=0x28, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0xec69, .value=0x90}, {.addr=0xec6a, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0xec69, .value=0x90, .type=IO_READ},
        {.addr=0xec6a, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_002E) {
    const struct CPU_State initial_cpu = {.pc=0x985c, .a=0x54, .x=0xc3, .y=0x40, .sp=0x63, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x985c, .value=0x90}, {.addr=0x985d, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0x980f, .a=0x54, .x=0xc3, .y=0x40, .sp=0x63, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x985c, .value=0x90}, {.addr=0x985d, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0x985c, .value=0x90, .type=IO_READ},
        {.addr=0x985d, .value=0xb1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_002F) {
    const struct CPU_State initial_cpu = {.pc=0xe287, .a=0x42, .x=0x62, .y=0x25, .sp=0xa2, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xe287, .value=0x90}, {.addr=0xe288, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0xe28e, .a=0x42, .x=0x62, .y=0x25, .sp=0xa2, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0xe287, .value=0x90}, {.addr=0xe288, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0xe287, .value=0x90, .type=IO_READ},
        {.addr=0xe288, .value=0x05, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0030) {
    const struct CPU_State initial_cpu = {.pc=0xdb2d, .a=0x7a, .x=0xf7, .y=0xa0, .sp=0xd9, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xdb2d, .value=0x90}, {.addr=0xdb2e, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0xdbae, .a=0x7a, .x=0xf7, .y=0xa0, .sp=0xd9, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0xdb2d, .value=0x90}, {.addr=0xdb2e, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0xdb2d, .value=0x90, .type=IO_READ},
        {.addr=0xdb2e, .value=0x7f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0031) {
    const struct CPU_State initial_cpu = {.pc=0x8346, .a=0x06, .x=0xec, .y=0xff, .sp=0x14, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x8346, .value=0x90}, {.addr=0x8347, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0x8348, .a=0x06, .x=0xec, .y=0xff, .sp=0x14, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x8346, .value=0x90}, {.addr=0x8347, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0x8346, .value=0x90, .type=IO_READ},
        {.addr=0x8347, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0032) {
    const struct CPU_State initial_cpu = {.pc=0x940a, .a=0x59, .x=0x3f, .y=0x3a, .sp=0x44, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x940a, .value=0x90}, {.addr=0x940b, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0x940c, .a=0x59, .x=0x3f, .y=0x3a, .sp=0x44, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x940a, .value=0x90}, {.addr=0x940b, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0x940a, .value=0x90, .type=IO_READ},
        {.addr=0x940b, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0033) {
    const struct CPU_State initial_cpu = {.pc=0x5e02, .a=0x96, .x=0x0c, .y=0x8e, .sp=0x25, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x5e02, .value=0x90}, {.addr=0x5e03, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0x5e30, .a=0x96, .x=0x0c, .y=0x8e, .sp=0x25, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x5e02, .value=0x90}, {.addr=0x5e03, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0x5e02, .value=0x90, .type=IO_READ},
        {.addr=0x5e03, .value=0x2c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0034) {
    const struct CPU_State initial_cpu = {.pc=0xfc5e, .a=0xd5, .x=0xc8, .y=0x63, .sp=0x5d, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xfc5e, .value=0x90}, {.addr=0xfc5f, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xfc60, .a=0xd5, .x=0xc8, .y=0x63, .sp=0x5d, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0xfc5e, .value=0x90}, {.addr=0xfc5f, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xfc5e, .value=0x90, .type=IO_READ},
        {.addr=0xfc5f, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0035) {
    const struct CPU_State initial_cpu = {.pc=0x660c, .a=0x40, .x=0xff, .y=0x18, .sp=0x08, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x660c, .value=0x90}, {.addr=0x660d, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0x660e, .a=0x40, .x=0xff, .y=0x18, .sp=0x08, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x660c, .value=0x90}, {.addr=0x660d, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0x660c, .value=0x90, .type=IO_READ},
        {.addr=0x660d, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0036) {
    const struct CPU_State initial_cpu = {.pc=0xce79, .a=0x37, .x=0xb5, .y=0xed, .sp=0x60, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xce79, .value=0x90}, {.addr=0xce7a, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0xce7b, .a=0x37, .x=0xb5, .y=0xed, .sp=0x60, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xce79, .value=0x90}, {.addr=0xce7a, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0xce79, .value=0x90, .type=IO_READ},
        {.addr=0xce7a, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0037) {
    const struct CPU_State initial_cpu = {.pc=0x8572, .a=0x77, .x=0xec, .y=0xb5, .sp=0x3d, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x8572, .value=0x90}, {.addr=0x8573, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0x8574, .a=0x77, .x=0xec, .y=0xb5, .sp=0x3d, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x8572, .value=0x90}, {.addr=0x8573, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0x8572, .value=0x90, .type=IO_READ},
        {.addr=0x8573, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0038) {
    const struct CPU_State initial_cpu = {.pc=0x14e7, .a=0xce, .x=0x0e, .y=0x52, .sp=0xe0, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x14e7, .value=0x90}, {.addr=0x14e8, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x14fd, .a=0xce, .x=0x0e, .y=0x52, .sp=0xe0, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x14e7, .value=0x90}, {.addr=0x14e8, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x14e7, .value=0x90, .type=IO_READ},
        {.addr=0x14e8, .value=0x14, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0039) {
    const struct CPU_State initial_cpu = {.pc=0x9ee7, .a=0xb2, .x=0x80, .y=0xd3, .sp=0xd8, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x9ee7, .value=0x90}, {.addr=0x9ee8, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0x9ee9, .a=0xb2, .x=0x80, .y=0xd3, .sp=0xd8, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x9ee7, .value=0x90}, {.addr=0x9ee8, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0x9ee7, .value=0x90, .type=IO_READ},
        {.addr=0x9ee8, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_003A) {
    const struct CPU_State initial_cpu = {.pc=0x39bc, .a=0x01, .x=0xae, .y=0x9a, .sp=0x64, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x39bc, .value=0x90}, {.addr=0x39bd, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0x3a1f, .a=0x01, .x=0xae, .y=0x9a, .sp=0x64, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x39bc, .value=0x90}, {.addr=0x39bd, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0x39bc, .value=0x90, .type=IO_READ},
        {.addr=0x39bd, .value=0x61, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_003B) {
    const struct CPU_State initial_cpu = {.pc=0x725f, .a=0xd9, .x=0x92, .y=0x55, .sp=0xfc, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x725f, .value=0x90}, {.addr=0x7260, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0x720e, .a=0xd9, .x=0x92, .y=0x55, .sp=0xfc, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x725f, .value=0x90}, {.addr=0x7260, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0x725f, .value=0x90, .type=IO_READ},
        {.addr=0x7260, .value=0xad, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_003C) {
    const struct CPU_State initial_cpu = {.pc=0x0f84, .a=0x1b, .x=0x7a, .y=0xdb, .sp=0x0b, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x0f84, .value=0x90}, {.addr=0x0f85, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0x0f86, .a=0x1b, .x=0x7a, .y=0xdb, .sp=0x0b, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x0f84, .value=0x90}, {.addr=0x0f85, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0x0f84, .value=0x90, .type=IO_READ},
        {.addr=0x0f85, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_003D) {
    const struct CPU_State initial_cpu = {.pc=0x02e9, .a=0xaf, .x=0x25, .y=0x36, .sp=0x05, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x02e9, .value=0x90}, {.addr=0x02ea, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x030b, .a=0xaf, .x=0x25, .y=0x36, .sp=0x05, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x02e9, .value=0x90}, {.addr=0x02ea, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x02e9, .value=0x90, .type=IO_READ},
        {.addr=0x02ea, .value=0x20, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_003E) {
    const struct CPU_State initial_cpu = {.pc=0xa00c, .a=0xf7, .x=0xb8, .y=0xb7, .sp=0x0e, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xa00c, .value=0x90}, {.addr=0xa00d, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0xa00e, .a=0xf7, .x=0xb8, .y=0xb7, .sp=0x0e, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xa00c, .value=0x90}, {.addr=0xa00d, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0xa00c, .value=0x90, .type=IO_READ},
        {.addr=0xa00d, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_003F) {
    const struct CPU_State initial_cpu = {.pc=0xca4d, .a=0xc2, .x=0x5e, .y=0xd6, .sp=0x4d, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xca4d, .value=0x90}, {.addr=0xca4e, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0xca4f, .a=0xc2, .x=0x5e, .y=0xd6, .sp=0x4d, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0xca4d, .value=0x90}, {.addr=0xca4e, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0xca4d, .value=0x90, .type=IO_READ},
        {.addr=0xca4e, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0040) {
    const struct CPU_State initial_cpu = {.pc=0x81e2, .a=0x94, .x=0x88, .y=0x1b, .sp=0x1f, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x81e2, .value=0x90}, {.addr=0x81e3, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0x816d, .a=0x94, .x=0x88, .y=0x1b, .sp=0x1f, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x81e2, .value=0x90}, {.addr=0x81e3, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0x81e2, .value=0x90, .type=IO_READ},
        {.addr=0x81e3, .value=0x89, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0041) {
    const struct CPU_State initial_cpu = {.pc=0x2616, .a=0xa3, .x=0x4a, .y=0xc0, .sp=0x95, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x2616, .value=0x90}, {.addr=0x2617, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0x2669, .a=0xa3, .x=0x4a, .y=0xc0, .sp=0x95, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x2616, .value=0x90}, {.addr=0x2617, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0x2616, .value=0x90, .type=IO_READ},
        {.addr=0x2617, .value=0x51, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0042) {
    const struct CPU_State initial_cpu = {.pc=0xea00, .a=0x12, .x=0x4a, .y=0x18, .sp=0x8a, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xea00, .value=0x90}, {.addr=0xea01, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0xea0b, .a=0x12, .x=0x4a, .y=0x18, .sp=0x8a, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0xea00, .value=0x90}, {.addr=0xea01, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0xea00, .value=0x90, .type=IO_READ},
        {.addr=0xea01, .value=0x09, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0043) {
    const struct CPU_State initial_cpu = {.pc=0x6b9f, .a=0x2e, .x=0x1f, .y=0x30, .sp=0x72, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x6b9f, .value=0x90}, {.addr=0x6ba0, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0x6bcb, .a=0x2e, .x=0x1f, .y=0x30, .sp=0x72, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x6b9f, .value=0x90}, {.addr=0x6ba0, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0x6b9f, .value=0x90, .type=IO_READ},
        {.addr=0x6ba0, .value=0x2a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0044) {
    const struct CPU_State initial_cpu = {.pc=0x5ce4, .a=0xb4, .x=0x3c, .y=0xba, .sp=0xa6, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x5ce4, .value=0x90}, {.addr=0x5ce5, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x5ca2, .a=0xb4, .x=0x3c, .y=0xba, .sp=0xa6, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x5ce4, .value=0x90}, {.addr=0x5ce5, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x5ce4, .value=0x90, .type=IO_READ},
        {.addr=0x5ce5, .value=0xbc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0045) {
    const struct CPU_State initial_cpu = {.pc=0x494b, .a=0x35, .x=0x10, .y=0xe6, .sp=0x2f, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x494b, .value=0x90}, {.addr=0x494c, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0x494d, .a=0x35, .x=0x10, .y=0xe6, .sp=0x2f, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x494b, .value=0x90}, {.addr=0x494c, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0x494b, .value=0x90, .type=IO_READ},
        {.addr=0x494c, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0046) {
    const struct CPU_State initial_cpu = {.pc=0x62a6, .a=0xcc, .x=0x7b, .y=0xd8, .sp=0xf7, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x62a6, .value=0x90}, {.addr=0x62a7, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x62d7, .a=0xcc, .x=0x7b, .y=0xd8, .sp=0xf7, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x62a6, .value=0x90}, {.addr=0x62a7, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x62a6, .value=0x90, .type=IO_READ},
        {.addr=0x62a7, .value=0x2f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0047) {
    const struct CPU_State initial_cpu = {.pc=0x2aa4, .a=0xcc, .x=0x3d, .y=0xb8, .sp=0x96, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x2aa4, .value=0x90}, {.addr=0x2aa5, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0x2a50, .a=0xcc, .x=0x3d, .y=0xb8, .sp=0x96, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x2aa4, .value=0x90}, {.addr=0x2aa5, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0x2aa4, .value=0x90, .type=IO_READ},
        {.addr=0x2aa5, .value=0xaa, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0048) {
    const struct CPU_State initial_cpu = {.pc=0x5c37, .a=0x4f, .x=0xa9, .y=0xd8, .sp=0x81, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x5c37, .value=0x90}, {.addr=0x5c38, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0x5c39, .a=0x4f, .x=0xa9, .y=0xd8, .sp=0x81, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x5c37, .value=0x90}, {.addr=0x5c38, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0x5c37, .value=0x90, .type=IO_READ},
        {.addr=0x5c38, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0049) {
    const struct CPU_State initial_cpu = {.pc=0x296f, .a=0x0a, .x=0xc4, .y=0x2c, .sp=0x54, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x296f, .value=0x90}, {.addr=0x2970, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0x2952, .a=0x0a, .x=0xc4, .y=0x2c, .sp=0x54, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0x296f, .value=0x90}, {.addr=0x2970, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0x296f, .value=0x90, .type=IO_READ},
        {.addr=0x2970, .value=0xe1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_004A) {
    const struct CPU_State initial_cpu = {.pc=0xb2c7, .a=0xf7, .x=0x63, .y=0x6f, .sp=0x1a, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xb2c7, .value=0x90}, {.addr=0xb2c8, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0xb2c9, .a=0xf7, .x=0x63, .y=0x6f, .sp=0x1a, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xb2c7, .value=0x90}, {.addr=0xb2c8, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0xb2c7, .value=0x90, .type=IO_READ},
        {.addr=0xb2c8, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_004B) {
    const struct CPU_State initial_cpu = {.pc=0x7bc5, .a=0xe9, .x=0x38, .y=0x92, .sp=0xb0, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x7bc5, .value=0x90}, {.addr=0x7bc6, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x7bc7, .a=0xe9, .x=0x38, .y=0x92, .sp=0xb0, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x7bc5, .value=0x90}, {.addr=0x7bc6, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x7bc5, .value=0x90, .type=IO_READ},
        {.addr=0x7bc6, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_004C) {
    const struct CPU_State initial_cpu = {.pc=0xc879, .a=0x73, .x=0xed, .y=0xf7, .sp=0x82, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xc879, .value=0x90}, {.addr=0xc87a, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0xc845, .a=0x73, .x=0xed, .y=0xf7, .sp=0x82, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0xc879, .value=0x90}, {.addr=0xc87a, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0xc879, .value=0x90, .type=IO_READ},
        {.addr=0xc87a, .value=0xca, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_004D) {
    const struct CPU_State initial_cpu = {.pc=0x57f9, .a=0xde, .x=0xdf, .y=0x98, .sp=0x98, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x57f9, .value=0x90}, {.addr=0x57fa, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0x5850, .a=0xde, .x=0xdf, .y=0x98, .sp=0x98, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x57f9, .value=0x90}, {.addr=0x57fa, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0x57f9, .value=0x90, .type=IO_READ},
        {.addr=0x57fa, .value=0x55, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_004E) {
    const struct CPU_State initial_cpu = {.pc=0xd6e2, .a=0xef, .x=0xaf, .y=0x6f, .sp=0x59, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xd6e2, .value=0x90}, {.addr=0xd6e3, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0xd68f, .a=0xef, .x=0xaf, .y=0x6f, .sp=0x59, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0xd6e2, .value=0x90}, {.addr=0xd6e3, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0xd6e2, .value=0x90, .type=IO_READ},
        {.addr=0xd6e3, .value=0xab, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_004F) {
    const struct CPU_State initial_cpu = {.pc=0xaa49, .a=0x4e, .x=0x51, .y=0x98, .sp=0x63, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xaa49, .value=0x90}, {.addr=0xaa4a, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0xaab3, .a=0x4e, .x=0x51, .y=0x98, .sp=0x63, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0xaa49, .value=0x90}, {.addr=0xaa4a, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0xaa49, .value=0x90, .type=IO_READ},
        {.addr=0xaa4a, .value=0x68, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0050) {
    const struct CPU_State initial_cpu = {.pc=0x2269, .a=0xaa, .x=0xc4, .y=0xc5, .sp=0xb2, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x2269, .value=0x90}, {.addr=0x226a, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x221f, .a=0xaa, .x=0xc4, .y=0xc5, .sp=0xb2, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x2269, .value=0x90}, {.addr=0x226a, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x2269, .value=0x90, .type=IO_READ},
        {.addr=0x226a, .value=0xb4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0051) {
    const struct CPU_State initial_cpu = {.pc=0x8504, .a=0x05, .x=0x84, .y=0xba, .sp=0x4e, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x8504, .value=0x90}, {.addr=0x8505, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0x8506, .a=0x05, .x=0x84, .y=0xba, .sp=0x4e, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x8504, .value=0x90}, {.addr=0x8505, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0x8504, .value=0x90, .type=IO_READ},
        {.addr=0x8505, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0052) {
    const struct CPU_State initial_cpu = {.pc=0xc3e7, .a=0xa2, .x=0x0c, .y=0xd1, .sp=0x94, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xc3e7, .value=0x90}, {.addr=0xc3e8, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0xc3e9, .a=0xa2, .x=0x0c, .y=0xd1, .sp=0x94, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0xc3e7, .value=0x90}, {.addr=0xc3e8, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0xc3e7, .value=0x90, .type=IO_READ},
        {.addr=0xc3e8, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0053) {
    const struct CPU_State initial_cpu = {.pc=0x3925, .a=0x92, .x=0xb5, .y=0x09, .sp=0x70, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x3925, .value=0x90}, {.addr=0x3926, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x3912, .a=0x92, .x=0xb5, .y=0x09, .sp=0x70, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x3925, .value=0x90}, {.addr=0x3926, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x3925, .value=0x90, .type=IO_READ},
        {.addr=0x3926, .value=0xeb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0054) {
    const struct CPU_State initial_cpu = {.pc=0xff74, .a=0x8b, .x=0xfd, .y=0x22, .sp=0xcd, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xff74, .value=0x90}, {.addr=0xff75, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xffdc, .a=0x8b, .x=0xfd, .y=0x22, .sp=0xcd, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0xff74, .value=0x90}, {.addr=0xff75, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xff74, .value=0x90, .type=IO_READ},
        {.addr=0xff75, .value=0x66, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0055) {
    const struct CPU_State initial_cpu = {.pc=0x7168, .a=0xfc, .x=0xb1, .y=0xd0, .sp=0x3a, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x7168, .value=0x90}, {.addr=0x7169, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x716a, .a=0xfc, .x=0xb1, .y=0xd0, .sp=0x3a, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x7168, .value=0x90}, {.addr=0x7169, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x7168, .value=0x90, .type=IO_READ},
        {.addr=0x7169, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0056) {
    const struct CPU_State initial_cpu = {.pc=0x25e9, .a=0x76, .x=0xe6, .y=0x2e, .sp=0xc3, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x25e9, .value=0x90}, {.addr=0x25ea, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0x25eb, .a=0x76, .x=0xe6, .y=0x2e, .sp=0xc3, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x25e9, .value=0x90}, {.addr=0x25ea, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0x25e9, .value=0x90, .type=IO_READ},
        {.addr=0x25ea, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0057) {
    const struct CPU_State initial_cpu = {.pc=0x0b34, .a=0xd5, .x=0x5f, .y=0xd6, .sp=0x7c, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x0b34, .value=0x90}, {.addr=0x0b35, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0x0b0e, .a=0xd5, .x=0x5f, .y=0xd6, .sp=0x7c, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x0b34, .value=0x90}, {.addr=0x0b35, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0x0b34, .value=0x90, .type=IO_READ},
        {.addr=0x0b35, .value=0xd8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0058) {
    const struct CPU_State initial_cpu = {.pc=0x60e9, .a=0xe9, .x=0xd5, .y=0xed, .sp=0x1a, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x60e9, .value=0x90}, {.addr=0x60ea, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0x60eb, .a=0xe9, .x=0xd5, .y=0xed, .sp=0x1a, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x60e9, .value=0x90}, {.addr=0x60ea, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0x60e9, .value=0x90, .type=IO_READ},
        {.addr=0x60ea, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0059) {
    const struct CPU_State initial_cpu = {.pc=0x563e, .a=0x70, .x=0xdd, .y=0xd8, .sp=0xb0, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x563e, .value=0x90}, {.addr=0x563f, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x5640, .a=0x70, .x=0xdd, .y=0xd8, .sp=0xb0, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x563e, .value=0x90}, {.addr=0x563f, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x563e, .value=0x90, .type=IO_READ},
        {.addr=0x563f, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_005A) {
    const struct CPU_State initial_cpu = {.pc=0x1bb0, .a=0xe3, .x=0x1e, .y=0x93, .sp=0x6e, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x1bb0, .value=0x90}, {.addr=0x1bb1, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0x1bb2, .a=0xe3, .x=0x1e, .y=0x93, .sp=0x6e, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x1bb0, .value=0x90}, {.addr=0x1bb1, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0x1bb0, .value=0x90, .type=IO_READ},
        {.addr=0x1bb1, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_005B) {
    const struct CPU_State initial_cpu = {.pc=0x4231, .a=0xd9, .x=0xc4, .y=0x33, .sp=0x16, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x4231, .value=0x90}, {.addr=0x4232, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0x4233, .a=0xd9, .x=0xc4, .y=0x33, .sp=0x16, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x4231, .value=0x90}, {.addr=0x4232, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0x4231, .value=0x90, .type=IO_READ},
        {.addr=0x4232, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_005C) {
    const struct CPU_State initial_cpu = {.pc=0x8249, .a=0x5e, .x=0x3e, .y=0x52, .sp=0xdc, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x8249, .value=0x90}, {.addr=0x824a, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0x824b, .a=0x5e, .x=0x3e, .y=0x52, .sp=0xdc, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x8249, .value=0x90}, {.addr=0x824a, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0x8249, .value=0x90, .type=IO_READ},
        {.addr=0x824a, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_005D) {
    const struct CPU_State initial_cpu = {.pc=0x050d, .a=0xf1, .x=0x2d, .y=0xe5, .sp=0x6e, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x050d, .value=0x90}, {.addr=0x050e, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0x0556, .a=0xf1, .x=0x2d, .y=0xe5, .sp=0x6e, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x050d, .value=0x90}, {.addr=0x050e, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0x050d, .value=0x90, .type=IO_READ},
        {.addr=0x050e, .value=0x47, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_005E) {
    const struct CPU_State initial_cpu = {.pc=0xb306, .a=0x77, .x=0x03, .y=0x19, .sp=0x55, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xb306, .value=0x90}, {.addr=0xb307, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0xb380, .a=0x77, .x=0x03, .y=0x19, .sp=0x55, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xb306, .value=0x90}, {.addr=0xb307, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0xb306, .value=0x90, .type=IO_READ},
        {.addr=0xb307, .value=0x78, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_005F) {
    const struct CPU_State initial_cpu = {.pc=0x080c, .a=0xbf, .x=0x6c, .y=0xa1, .sp=0x05, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x080c, .value=0x90}, {.addr=0x080d, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0x080e, .a=0xbf, .x=0x6c, .y=0xa1, .sp=0x05, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x080c, .value=0x90}, {.addr=0x080d, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0x080c, .value=0x90, .type=IO_READ},
        {.addr=0x080d, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0060) {
    const struct CPU_State initial_cpu = {.pc=0xb74a, .a=0x13, .x=0x19, .y=0x42, .sp=0xa5, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xb74a, .value=0x90}, {.addr=0xb74b, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0xb6e6, .a=0x13, .x=0x19, .y=0x42, .sp=0xa5, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xb74a, .value=0x90}, {.addr=0xb74b, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0xb74a, .value=0x90, .type=IO_READ},
        {.addr=0xb74b, .value=0x9a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0061) {
    const struct CPU_State initial_cpu = {.pc=0xab47, .a=0x96, .x=0x86, .y=0xa8, .sp=0x34, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xab47, .value=0x90}, {.addr=0xab48, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0xab49, .a=0x96, .x=0x86, .y=0xa8, .sp=0x34, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0xab47, .value=0x90}, {.addr=0xab48, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0xab47, .value=0x90, .type=IO_READ},
        {.addr=0xab48, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0062) {
    const struct CPU_State initial_cpu = {.pc=0x3331, .a=0xc9, .x=0x6d, .y=0x79, .sp=0x9e, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x3331, .value=0x90}, {.addr=0x3332, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0x3333, .a=0xc9, .x=0x6d, .y=0x79, .sp=0x9e, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x3331, .value=0x90}, {.addr=0x3332, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0x3331, .value=0x90, .type=IO_READ},
        {.addr=0x3332, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0063) {
    const struct CPU_State initial_cpu = {.pc=0x34c8, .a=0xa2, .x=0x0f, .y=0xe0, .sp=0x90, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x34c8, .value=0x90}, {.addr=0x34c9, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x3467, .a=0xa2, .x=0x0f, .y=0xe0, .sp=0x90, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x34c8, .value=0x90}, {.addr=0x34c9, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x34c8, .value=0x90, .type=IO_READ},
        {.addr=0x34c9, .value=0x9d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0064) {
    const struct CPU_State initial_cpu = {.pc=0xf5af, .a=0xfc, .x=0x99, .y=0xd2, .sp=0x97, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xf5af, .value=0x90}, {.addr=0xf5b0, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0xf535, .a=0xfc, .x=0x99, .y=0xd2, .sp=0x97, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0xf5af, .value=0x90}, {.addr=0xf5b0, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0xf5af, .value=0x90, .type=IO_READ},
        {.addr=0xf5b0, .value=0x84, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0065) {
    const struct CPU_State initial_cpu = {.pc=0x5157, .a=0x8f, .x=0x07, .y=0x27, .sp=0x43, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x5157, .value=0x90}, {.addr=0x5158, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0x5159, .a=0x8f, .x=0x07, .y=0x27, .sp=0x43, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x5157, .value=0x90}, {.addr=0x5158, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0x5157, .value=0x90, .type=IO_READ},
        {.addr=0x5158, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0066) {
    const struct CPU_State initial_cpu = {.pc=0x3d00, .a=0xa3, .x=0x61, .y=0x7a, .sp=0xc0, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x3d00, .value=0x90}, {.addr=0x3d01, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0x3d50, .a=0xa3, .x=0x61, .y=0x7a, .sp=0xc0, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x3d00, .value=0x90}, {.addr=0x3d01, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0x3d00, .value=0x90, .type=IO_READ},
        {.addr=0x3d01, .value=0x4e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0067) {
    const struct CPU_State initial_cpu = {.pc=0x2c32, .a=0xbb, .x=0xba, .y=0x55, .sp=0x71, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x2c32, .value=0x90}, {.addr=0x2c33, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0x2c34, .a=0xbb, .x=0xba, .y=0x55, .sp=0x71, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x2c32, .value=0x90}, {.addr=0x2c33, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0x2c32, .value=0x90, .type=IO_READ},
        {.addr=0x2c33, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0068) {
    const struct CPU_State initial_cpu = {.pc=0x2937, .a=0x9b, .x=0xef, .y=0xe3, .sp=0x06, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x2937, .value=0x90}, {.addr=0x2938, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0x28fb, .a=0x9b, .x=0xef, .y=0xe3, .sp=0x06, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x2937, .value=0x90}, {.addr=0x2938, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0x2937, .value=0x90, .type=IO_READ},
        {.addr=0x2938, .value=0xc2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0069) {
    const struct CPU_State initial_cpu = {.pc=0x8f2b, .a=0xd8, .x=0x14, .y=0x33, .sp=0x43, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x8f2b, .value=0x90}, {.addr=0x8f2c, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0x8f11, .a=0xd8, .x=0x14, .y=0x33, .sp=0x43, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x8f2b, .value=0x90}, {.addr=0x8f2c, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0x8f2b, .value=0x90, .type=IO_READ},
        {.addr=0x8f2c, .value=0xe4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_006A) {
    const struct CPU_State initial_cpu = {.pc=0xde2b, .a=0x2b, .x=0xff, .y=0xde, .sp=0x12, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xde2b, .value=0x90}, {.addr=0xde2c, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0xde61, .a=0x2b, .x=0xff, .y=0xde, .sp=0x12, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xde2b, .value=0x90}, {.addr=0xde2c, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0xde2b, .value=0x90, .type=IO_READ},
        {.addr=0xde2c, .value=0x34, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_006B) {
    const struct CPU_State initial_cpu = {.pc=0x4742, .a=0xf3, .x=0x42, .y=0x60, .sp=0x0f, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x4742, .value=0x90}, {.addr=0x4743, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x4744, .a=0xf3, .x=0x42, .y=0x60, .sp=0x0f, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x4742, .value=0x90}, {.addr=0x4743, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x4742, .value=0x90, .type=IO_READ},
        {.addr=0x4743, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_006C) {
    const struct CPU_State initial_cpu = {.pc=0x5c6b, .a=0xdb, .x=0x8d, .y=0x06, .sp=0x61, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x5c6b, .value=0x90}, {.addr=0x5c6c, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0x5c6d, .a=0xdb, .x=0x8d, .y=0x06, .sp=0x61, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x5c6b, .value=0x90}, {.addr=0x5c6c, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0x5c6b, .value=0x90, .type=IO_READ},
        {.addr=0x5c6c, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_006D) {
    const struct CPU_State initial_cpu = {.pc=0xea0e, .a=0x7c, .x=0x8f, .y=0x9e, .sp=0xfa, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xea0e, .value=0x90}, {.addr=0xea0f, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0xea10, .a=0x7c, .x=0x8f, .y=0x9e, .sp=0xfa, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0xea0e, .value=0x90}, {.addr=0xea0f, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0xea0e, .value=0x90, .type=IO_READ},
        {.addr=0xea0f, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_006E) {
    const struct CPU_State initial_cpu = {.pc=0x9308, .a=0xd9, .x=0xb7, .y=0x7f, .sp=0x83, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x9308, .value=0x90}, {.addr=0x9309, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0x930a, .a=0xd9, .x=0xb7, .y=0x7f, .sp=0x83, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x9308, .value=0x90}, {.addr=0x9309, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0x9308, .value=0x90, .type=IO_READ},
        {.addr=0x9309, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_006F) {
    const struct CPU_State initial_cpu = {.pc=0xac16, .a=0xef, .x=0xf5, .y=0x4d, .sp=0x58, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xac16, .value=0x90}, {.addr=0xac17, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0xac18, .a=0xef, .x=0xf5, .y=0x4d, .sp=0x58, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xac16, .value=0x90}, {.addr=0xac17, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0xac16, .value=0x90, .type=IO_READ},
        {.addr=0xac17, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0070) {
    const struct CPU_State initial_cpu = {.pc=0x8659, .a=0x2d, .x=0xab, .y=0xd1, .sp=0x9a, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x8659, .value=0x90}, {.addr=0x865a, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x865b, .a=0x2d, .x=0xab, .y=0xd1, .sp=0x9a, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x8659, .value=0x90}, {.addr=0x865a, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x8659, .value=0x90, .type=IO_READ},
        {.addr=0x865a, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0071) {
    const struct CPU_State initial_cpu = {.pc=0xf8af, .a=0xd2, .x=0x65, .y=0x6b, .sp=0x33, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xf8af, .value=0x90}, {.addr=0xf8b0, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0xf85a, .a=0xd2, .x=0x65, .y=0x6b, .sp=0x33, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0xf8af, .value=0x90}, {.addr=0xf8b0, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0xf8af, .value=0x90, .type=IO_READ},
        {.addr=0xf8b0, .value=0xa9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0072) {
    const struct CPU_State initial_cpu = {.pc=0xdada, .a=0x56, .x=0x10, .y=0x85, .sp=0x70, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xdada, .value=0x90}, {.addr=0xdadb, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xda8b, .a=0x56, .x=0x10, .y=0x85, .sp=0x70, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xdada, .value=0x90}, {.addr=0xdadb, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xdada, .value=0x90, .type=IO_READ},
        {.addr=0xdadb, .value=0xaf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0073) {
    const struct CPU_State initial_cpu = {.pc=0x1a14, .a=0x1b, .x=0x1d, .y=0xd4, .sp=0xc8, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x1a14, .value=0x90}, {.addr=0x1a15, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0x19c2, .a=0x1b, .x=0x1d, .y=0xd4, .sp=0xc8, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x1a14, .value=0x90}, {.addr=0x1a15, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0x1a14, .value=0x90, .type=IO_READ},
        {.addr=0x1a15, .value=0xac, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0074) {
    const struct CPU_State initial_cpu = {.pc=0xaacc, .a=0xcd, .x=0xd5, .y=0xc3, .sp=0x48, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xaacc, .value=0x90}, {.addr=0xaacd, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0xaace, .a=0xcd, .x=0xd5, .y=0xc3, .sp=0x48, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0xaacc, .value=0x90}, {.addr=0xaacd, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0xaacc, .value=0x90, .type=IO_READ},
        {.addr=0xaacd, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0075) {
    const struct CPU_State initial_cpu = {.pc=0xb654, .a=0xa5, .x=0x3a, .y=0xa1, .sp=0xa4, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xb654, .value=0x90}, {.addr=0xb655, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0xb656, .a=0xa5, .x=0x3a, .y=0xa1, .sp=0xa4, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xb654, .value=0x90}, {.addr=0xb655, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0xb654, .value=0x90, .type=IO_READ},
        {.addr=0xb655, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0076) {
    const struct CPU_State initial_cpu = {.pc=0x056f, .a=0x79, .x=0x47, .y=0x81, .sp=0x0f, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x056f, .value=0x90}, {.addr=0x0570, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x0571, .a=0x79, .x=0x47, .y=0x81, .sp=0x0f, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x056f, .value=0x90}, {.addr=0x0570, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x056f, .value=0x90, .type=IO_READ},
        {.addr=0x0570, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0077) {
    const struct CPU_State initial_cpu = {.pc=0xc8d6, .a=0xb1, .x=0xa9, .y=0x05, .sp=0xa9, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xc8d6, .value=0x90}, {.addr=0xc8d7, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xc8d8, .a=0xb1, .x=0xa9, .y=0x05, .sp=0xa9, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0xc8d6, .value=0x90}, {.addr=0xc8d7, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xc8d6, .value=0x90, .type=IO_READ},
        {.addr=0xc8d7, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0078) {
    const struct CPU_State initial_cpu = {.pc=0x2b02, .a=0xb1, .x=0xb4, .y=0xde, .sp=0x18, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x2b02, .value=0x90}, {.addr=0x2b03, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0x2b04, .a=0xb1, .x=0xb4, .y=0xde, .sp=0x18, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x2b02, .value=0x90}, {.addr=0x2b03, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0x2b02, .value=0x90, .type=IO_READ},
        {.addr=0x2b03, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0079) {
    const struct CPU_State initial_cpu = {.pc=0xf2f5, .a=0x64, .x=0x9b, .y=0xb8, .sp=0xb9, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xf2f5, .value=0x90}, {.addr=0xf2f6, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0xf2f7, .a=0x64, .x=0x9b, .y=0xb8, .sp=0xb9, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xf2f5, .value=0x90}, {.addr=0xf2f6, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0xf2f5, .value=0x90, .type=IO_READ},
        {.addr=0xf2f6, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_007A) {
    const struct CPU_State initial_cpu = {.pc=0x3a44, .a=0xe5, .x=0xe6, .y=0xfe, .sp=0xfa, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x3a44, .value=0x90}, {.addr=0x3a45, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0x39dc, .a=0xe5, .x=0xe6, .y=0xfe, .sp=0xfa, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x3a44, .value=0x90}, {.addr=0x3a45, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0x3a44, .value=0x90, .type=IO_READ},
        {.addr=0x3a45, .value=0x96, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_007B) {
    const struct CPU_State initial_cpu = {.pc=0x927e, .a=0x30, .x=0x47, .y=0xaf, .sp=0x04, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x927e, .value=0x90}, {.addr=0x927f, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x9280, .a=0x30, .x=0x47, .y=0xaf, .sp=0x04, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x927e, .value=0x90}, {.addr=0x927f, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x927e, .value=0x90, .type=IO_READ},
        {.addr=0x927f, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_007C) {
    const struct CPU_State initial_cpu = {.pc=0x3a01, .a=0x47, .x=0x1a, .y=0x74, .sp=0xbe, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x3a01, .value=0x90}, {.addr=0x3a02, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0x3a56, .a=0x47, .x=0x1a, .y=0x74, .sp=0xbe, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x3a01, .value=0x90}, {.addr=0x3a02, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0x3a01, .value=0x90, .type=IO_READ},
        {.addr=0x3a02, .value=0x53, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_007D) {
    const struct CPU_State initial_cpu = {.pc=0x1744, .a=0x4d, .x=0x89, .y=0x8c, .sp=0xe5, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x1744, .value=0x90}, {.addr=0x1745, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0x172a, .a=0x4d, .x=0x89, .y=0x8c, .sp=0xe5, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x1744, .value=0x90}, {.addr=0x1745, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0x1744, .value=0x90, .type=IO_READ},
        {.addr=0x1745, .value=0xe4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_007E) {
    const struct CPU_State initial_cpu = {.pc=0x77e4, .a=0x6b, .x=0x9e, .y=0xdb, .sp=0xa2, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x77e4, .value=0x90}, {.addr=0x77e5, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0x77aa, .a=0x6b, .x=0x9e, .y=0xdb, .sp=0xa2, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x77e4, .value=0x90}, {.addr=0x77e5, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0x77e4, .value=0x90, .type=IO_READ},
        {.addr=0x77e5, .value=0xc4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_007F) {
    const struct CPU_State initial_cpu = {.pc=0x4205, .a=0xf0, .x=0x9e, .y=0xa8, .sp=0xc7, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x4205, .value=0x90}, {.addr=0x4206, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0x419e, .a=0xf0, .x=0x9e, .y=0xa8, .sp=0xc7, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x4205, .value=0x90}, {.addr=0x4206, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0x4205, .value=0x90, .type=IO_READ},
        {.addr=0x4206, .value=0x97, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0080) {
    const struct CPU_State initial_cpu = {.pc=0x916d, .a=0x8e, .x=0x07, .y=0x45, .sp=0x9e, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x916d, .value=0x90}, {.addr=0x916e, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x9160, .a=0x8e, .x=0x07, .y=0x45, .sp=0x9e, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x916d, .value=0x90}, {.addr=0x916e, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x916d, .value=0x90, .type=IO_READ},
        {.addr=0x916e, .value=0xf1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0081) {
    const struct CPU_State initial_cpu = {.pc=0xec9f, .a=0x7a, .x=0x50, .y=0x10, .sp=0x33, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xec9f, .value=0x90}, {.addr=0xeca0, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0xece3, .a=0x7a, .x=0x50, .y=0x10, .sp=0x33, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xec9f, .value=0x90}, {.addr=0xeca0, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0xec9f, .value=0x90, .type=IO_READ},
        {.addr=0xeca0, .value=0x42, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0082) {
    const struct CPU_State initial_cpu = {.pc=0x50eb, .a=0x05, .x=0xdc, .y=0x45, .sp=0x84, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x50eb, .value=0x90}, {.addr=0x50ec, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0x50ed, .a=0x05, .x=0xdc, .y=0x45, .sp=0x84, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x50eb, .value=0x90}, {.addr=0x50ec, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0x50eb, .value=0x90, .type=IO_READ},
        {.addr=0x50ec, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0083) {
    const struct CPU_State initial_cpu = {.pc=0x3fce, .a=0x7d, .x=0xfb, .y=0xb8, .sp=0x9c, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x3fce, .value=0x90}, {.addr=0x3fcf, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0x3fd0, .a=0x7d, .x=0xfb, .y=0xb8, .sp=0x9c, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x3fce, .value=0x90}, {.addr=0x3fcf, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0x3fce, .value=0x90, .type=IO_READ},
        {.addr=0x3fcf, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0084) {
    const struct CPU_State initial_cpu = {.pc=0x04d8, .a=0x49, .x=0xe6, .y=0x02, .sp=0x4d, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x04d8, .value=0x90}, {.addr=0x04d9, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0x04da, .a=0x49, .x=0xe6, .y=0x02, .sp=0x4d, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x04d8, .value=0x90}, {.addr=0x04d9, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0x04d8, .value=0x90, .type=IO_READ},
        {.addr=0x04d9, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0085) {
    const struct CPU_State initial_cpu = {.pc=0x64ab, .a=0xa0, .x=0x45, .y=0x68, .sp=0x2b, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x64ab, .value=0x90}, {.addr=0x64ac, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0x64ad, .a=0xa0, .x=0x45, .y=0x68, .sp=0x2b, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x64ab, .value=0x90}, {.addr=0x64ac, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0x64ab, .value=0x90, .type=IO_READ},
        {.addr=0x64ac, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0086) {
    const struct CPU_State initial_cpu = {.pc=0x3e75, .a=0x4d, .x=0xb7, .y=0x2a, .sp=0x99, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x3e75, .value=0x90}, {.addr=0x3e76, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0x3e55, .a=0x4d, .x=0xb7, .y=0x2a, .sp=0x99, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x3e75, .value=0x90}, {.addr=0x3e76, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0x3e75, .value=0x90, .type=IO_READ},
        {.addr=0x3e76, .value=0xde, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0087) {
    const struct CPU_State initial_cpu = {.pc=0xe642, .a=0xab, .x=0x0a, .y=0x65, .sp=0x3e, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xe642, .value=0x90}, {.addr=0xe643, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0xe699, .a=0xab, .x=0x0a, .y=0x65, .sp=0x3e, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xe642, .value=0x90}, {.addr=0xe643, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0xe642, .value=0x90, .type=IO_READ},
        {.addr=0xe643, .value=0x55, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0088) {
    const struct CPU_State initial_cpu = {.pc=0x0d7a, .a=0x0d, .x=0x69, .y=0x51, .sp=0xae, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x0d7a, .value=0x90}, {.addr=0x0d7b, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0x0d7c, .a=0x0d, .x=0x69, .y=0x51, .sp=0xae, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x0d7a, .value=0x90}, {.addr=0x0d7b, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0x0d7a, .value=0x90, .type=IO_READ},
        {.addr=0x0d7b, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0089) {
    const struct CPU_State initial_cpu = {.pc=0x4851, .a=0x11, .x=0x1c, .y=0x68, .sp=0x0b, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x4851, .value=0x90}, {.addr=0x4852, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0x4853, .a=0x11, .x=0x1c, .y=0x68, .sp=0x0b, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x4851, .value=0x90}, {.addr=0x4852, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0x4851, .value=0x90, .type=IO_READ},
        {.addr=0x4852, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_008A) {
    const struct CPU_State initial_cpu = {.pc=0x8841, .a=0xea, .x=0xff, .y=0x1f, .sp=0xaa, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x8841, .value=0x90}, {.addr=0x8842, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0x8843, .a=0xea, .x=0xff, .y=0x1f, .sp=0xaa, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x8841, .value=0x90}, {.addr=0x8842, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0x8841, .value=0x90, .type=IO_READ},
        {.addr=0x8842, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_008B) {
    const struct CPU_State initial_cpu = {.pc=0x4627, .a=0x6a, .x=0xc5, .y=0x98, .sp=0xc2, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x4627, .value=0x90}, {.addr=0x4628, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0x4629, .a=0x6a, .x=0xc5, .y=0x98, .sp=0xc2, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x4627, .value=0x90}, {.addr=0x4628, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0x4627, .value=0x90, .type=IO_READ},
        {.addr=0x4628, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_008C) {
    const struct CPU_State initial_cpu = {.pc=0xb353, .a=0x5e, .x=0xaf, .y=0x7d, .sp=0xbe, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xb353, .value=0x90}, {.addr=0xb354, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0xb336, .a=0x5e, .x=0xaf, .y=0x7d, .sp=0xbe, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0xb353, .value=0x90}, {.addr=0xb354, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0xb353, .value=0x90, .type=IO_READ},
        {.addr=0xb354, .value=0xe1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_008D) {
    const struct CPU_State initial_cpu = {.pc=0xa09c, .a=0xc0, .x=0x73, .y=0x3e, .sp=0xab, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xa09c, .value=0x90}, {.addr=0xa09d, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0xa09e, .a=0xc0, .x=0x73, .y=0x3e, .sp=0xab, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xa09c, .value=0x90}, {.addr=0xa09d, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0xa09c, .value=0x90, .type=IO_READ},
        {.addr=0xa09d, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_008E) {
    const struct CPU_State initial_cpu = {.pc=0x6de7, .a=0x8f, .x=0xaf, .y=0x42, .sp=0xf1, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x6de7, .value=0x90}, {.addr=0x6de8, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0x6ddb, .a=0x8f, .x=0xaf, .y=0x42, .sp=0xf1, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x6de7, .value=0x90}, {.addr=0x6de8, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0x6de7, .value=0x90, .type=IO_READ},
        {.addr=0x6de8, .value=0xf2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_008F) {
    const struct CPU_State initial_cpu = {.pc=0x53cf, .a=0xc4, .x=0xd7, .y=0x44, .sp=0xf7, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x53cf, .value=0x90}, {.addr=0x53d0, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x53d1, .a=0xc4, .x=0xd7, .y=0x44, .sp=0xf7, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x53cf, .value=0x90}, {.addr=0x53d0, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x53cf, .value=0x90, .type=IO_READ},
        {.addr=0x53d0, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0090) {
    const struct CPU_State initial_cpu = {.pc=0xdc37, .a=0xb5, .x=0xbc, .y=0x9e, .sp=0xfb, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xdc37, .value=0x90}, {.addr=0xdc38, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0xdc00, .a=0xb5, .x=0xbc, .y=0x9e, .sp=0xfb, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0xdc37, .value=0x90}, {.addr=0xdc38, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0xdc37, .value=0x90, .type=IO_READ},
        {.addr=0xdc38, .value=0xc7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0091) {
    const struct CPU_State initial_cpu = {.pc=0xe7e8, .a=0xa0, .x=0x73, .y=0x90, .sp=0x4e, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xe7e8, .value=0x90}, {.addr=0xe7e9, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0xe7ea, .a=0xa0, .x=0x73, .y=0x90, .sp=0x4e, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0xe7e8, .value=0x90}, {.addr=0xe7e9, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0xe7e8, .value=0x90, .type=IO_READ},
        {.addr=0xe7e9, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0092) {
    const struct CPU_State initial_cpu = {.pc=0x4c10, .a=0x62, .x=0x8a, .y=0x06, .sp=0x3f, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x4c10, .value=0x90}, {.addr=0x4c11, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0x4c12, .a=0x62, .x=0x8a, .y=0x06, .sp=0x3f, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x4c10, .value=0x90}, {.addr=0x4c11, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0x4c10, .value=0x90, .type=IO_READ},
        {.addr=0x4c11, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0093) {
    const struct CPU_State initial_cpu = {.pc=0x7422, .a=0x9a, .x=0xfc, .y=0x64, .sp=0xd4, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x7422, .value=0x90}, {.addr=0x7423, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0x73a8, .a=0x9a, .x=0xfc, .y=0x64, .sp=0xd4, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x7422, .value=0x90}, {.addr=0x7423, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0x7422, .value=0x90, .type=IO_READ},
        {.addr=0x7423, .value=0x84, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0094) {
    const struct CPU_State initial_cpu = {.pc=0x0dd7, .a=0xc3, .x=0x3b, .y=0x37, .sp=0xc7, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x0dd7, .value=0x90}, {.addr=0x0dd8, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x0d78, .a=0xc3, .x=0x3b, .y=0x37, .sp=0xc7, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0dd7, .value=0x90}, {.addr=0x0dd8, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x0dd7, .value=0x90, .type=IO_READ},
        {.addr=0x0dd8, .value=0x9f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0095) {
    const struct CPU_State initial_cpu = {.pc=0x47e0, .a=0xb1, .x=0x31, .y=0x5b, .sp=0xc1, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x47e0, .value=0x90}, {.addr=0x47e1, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0x47e2, .a=0xb1, .x=0x31, .y=0x5b, .sp=0xc1, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x47e0, .value=0x90}, {.addr=0x47e1, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0x47e0, .value=0x90, .type=IO_READ},
        {.addr=0x47e1, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0096) {
    const struct CPU_State initial_cpu = {.pc=0x23f5, .a=0x6d, .x=0x63, .y=0xa5, .sp=0xc2, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x23f5, .value=0x90}, {.addr=0x23f6, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0x23cf, .a=0x6d, .x=0x63, .y=0xa5, .sp=0xc2, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x23f5, .value=0x90}, {.addr=0x23f6, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0x23f5, .value=0x90, .type=IO_READ},
        {.addr=0x23f6, .value=0xd8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0097) {
    const struct CPU_State initial_cpu = {.pc=0x20b5, .a=0xf6, .x=0x47, .y=0xfb, .sp=0x3b, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x20b5, .value=0x90}, {.addr=0x20b6, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0x20b7, .a=0xf6, .x=0x47, .y=0xfb, .sp=0x3b, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x20b5, .value=0x90}, {.addr=0x20b6, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0x20b5, .value=0x90, .type=IO_READ},
        {.addr=0x20b6, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0098) {
    const struct CPU_State initial_cpu = {.pc=0x044b, .a=0x43, .x=0xc9, .y=0x81, .sp=0xfc, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x044b, .value=0x90}, {.addr=0x044c, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0x044d, .a=0x43, .x=0xc9, .y=0x81, .sp=0xfc, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x044b, .value=0x90}, {.addr=0x044c, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0x044b, .value=0x90, .type=IO_READ},
        {.addr=0x044c, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0099) {
    const struct CPU_State initial_cpu = {.pc=0x8059, .a=0x9f, .x=0x22, .y=0x2d, .sp=0xb3, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x8059, .value=0x90}, {.addr=0x805a, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x805b, .a=0x9f, .x=0x22, .y=0x2d, .sp=0xb3, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x8059, .value=0x90}, {.addr=0x805a, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x8059, .value=0x90, .type=IO_READ},
        {.addr=0x805a, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_009A) {
    const struct CPU_State initial_cpu = {.pc=0xe9b1, .a=0x37, .x=0xd9, .y=0xa2, .sp=0x8a, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0xe9b1, .value=0x90}, {.addr=0xe9b2, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xe992, .a=0x37, .x=0xd9, .y=0xa2, .sp=0x8a, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0xe9b1, .value=0x90}, {.addr=0xe9b2, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xe9b1, .value=0x90, .type=IO_READ},
        {.addr=0xe9b2, .value=0xdf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_009B) {
    const struct CPU_State initial_cpu = {.pc=0x3013, .a=0x26, .x=0x66, .y=0x3d, .sp=0x20, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x3013, .value=0x90}, {.addr=0x3014, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0x2ffd, .a=0x26, .x=0x66, .y=0x3d, .sp=0x20, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x3013, .value=0x90}, {.addr=0x3014, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0x3013, .value=0x90, .type=IO_READ},
        {.addr=0x3014, .value=0xe8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_009C) {
    const struct CPU_State initial_cpu = {.pc=0xdb33, .a=0xfa, .x=0x2f, .y=0x32, .sp=0x17, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xdb33, .value=0x90}, {.addr=0xdb34, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0xdb35, .a=0xfa, .x=0x2f, .y=0x32, .sp=0x17, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xdb33, .value=0x90}, {.addr=0xdb34, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0xdb33, .value=0x90, .type=IO_READ},
        {.addr=0xdb34, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_009D) {
    const struct CPU_State initial_cpu = {.pc=0x44af, .a=0xa2, .x=0x46, .y=0xf9, .sp=0x79, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x44af, .value=0x90}, {.addr=0x44b0, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x44b1, .a=0xa2, .x=0x46, .y=0xf9, .sp=0x79, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x44af, .value=0x90}, {.addr=0x44b0, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x44af, .value=0x90, .type=IO_READ},
        {.addr=0x44b0, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_009E) {
    const struct CPU_State initial_cpu = {.pc=0xb9e3, .a=0xb5, .x=0xe3, .y=0x80, .sp=0x53, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xb9e3, .value=0x90}, {.addr=0xb9e4, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0xb99b, .a=0xb5, .x=0xe3, .y=0x80, .sp=0x53, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0xb9e3, .value=0x90}, {.addr=0xb9e4, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0xb9e3, .value=0x90, .type=IO_READ},
        {.addr=0xb9e4, .value=0xb6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_009F) {
    const struct CPU_State initial_cpu = {.pc=0xc7d4, .a=0x58, .x=0xf2, .y=0x4e, .sp=0xfe, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xc7d4, .value=0x90}, {.addr=0xc7d5, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0xc7d6, .a=0x58, .x=0xf2, .y=0x4e, .sp=0xfe, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xc7d4, .value=0x90}, {.addr=0xc7d5, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0xc7d4, .value=0x90, .type=IO_READ},
        {.addr=0xc7d5, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00A0) {
    const struct CPU_State initial_cpu = {.pc=0x414f, .a=0x42, .x=0x26, .y=0x12, .sp=0x42, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x414f, .value=0x90}, {.addr=0x4150, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0x41a0, .a=0x42, .x=0x26, .y=0x12, .sp=0x42, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x414f, .value=0x90}, {.addr=0x4150, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0x414f, .value=0x90, .type=IO_READ},
        {.addr=0x4150, .value=0x4f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00A1) {
    const struct CPU_State initial_cpu = {.pc=0x993c, .a=0x1f, .x=0xfb, .y=0x44, .sp=0x2e, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x993c, .value=0x90}, {.addr=0x993d, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x998a, .a=0x1f, .x=0xfb, .y=0x44, .sp=0x2e, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x993c, .value=0x90}, {.addr=0x993d, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x993c, .value=0x90, .type=IO_READ},
        {.addr=0x993d, .value=0x4c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00A2) {
    const struct CPU_State initial_cpu = {.pc=0xa4ff, .a=0xd0, .x=0x82, .y=0xab, .sp=0x60, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xa4ff, .value=0x90}, {.addr=0xa500, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0xa49c, .a=0xd0, .x=0x82, .y=0xab, .sp=0x60, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0xa4ff, .value=0x90}, {.addr=0xa500, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0xa4ff, .value=0x90, .type=IO_READ},
        {.addr=0xa500, .value=0x9b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00A3) {
    const struct CPU_State initial_cpu = {.pc=0x8799, .a=0x68, .x=0xaf, .y=0x10, .sp=0x0d, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x8799, .value=0x90}, {.addr=0x879a, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0x879b, .a=0x68, .x=0xaf, .y=0x10, .sp=0x0d, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x8799, .value=0x90}, {.addr=0x879a, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0x8799, .value=0x90, .type=IO_READ},
        {.addr=0x879a, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00A4) {
    const struct CPU_State initial_cpu = {.pc=0xc6b4, .a=0x3d, .x=0x09, .y=0xc7, .sp=0xce, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xc6b4, .value=0x90}, {.addr=0xc6b5, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xc6b6, .a=0x3d, .x=0x09, .y=0xc7, .sp=0xce, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xc6b4, .value=0x90}, {.addr=0xc6b5, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xc6b4, .value=0x90, .type=IO_READ},
        {.addr=0xc6b5, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00A5) {
    const struct CPU_State initial_cpu = {.pc=0x695f, .a=0x89, .x=0x71, .y=0x75, .sp=0x7e, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x695f, .value=0x90}, {.addr=0x6960, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x6961, .a=0x89, .x=0x71, .y=0x75, .sp=0x7e, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x695f, .value=0x90}, {.addr=0x6960, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x695f, .value=0x90, .type=IO_READ},
        {.addr=0x6960, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00A6) {
    const struct CPU_State initial_cpu = {.pc=0xaf5b, .a=0xca, .x=0x9a, .y=0x81, .sp=0xa5, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xaf5b, .value=0x90}, {.addr=0xaf5c, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0xaef2, .a=0xca, .x=0x9a, .y=0x81, .sp=0xa5, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0xaf5b, .value=0x90}, {.addr=0xaf5c, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0xaf5b, .value=0x90, .type=IO_READ},
        {.addr=0xaf5c, .value=0x95, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00A7) {
    const struct CPU_State initial_cpu = {.pc=0xa8f1, .a=0x01, .x=0x8a, .y=0x7f, .sp=0x9f, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xa8f1, .value=0x90}, {.addr=0xa8f2, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0xa8ed, .a=0x01, .x=0x8a, .y=0x7f, .sp=0x9f, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0xa8f1, .value=0x90}, {.addr=0xa8f2, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0xa8f1, .value=0x90, .type=IO_READ},
        {.addr=0xa8f2, .value=0xfa, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00A8) {
    const struct CPU_State initial_cpu = {.pc=0x0521, .a=0x53, .x=0x6f, .y=0xea, .sp=0xc9, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x0521, .value=0x90}, {.addr=0x0522, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0x0523, .a=0x53, .x=0x6f, .y=0xea, .sp=0xc9, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x0521, .value=0x90}, {.addr=0x0522, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0x0521, .value=0x90, .type=IO_READ},
        {.addr=0x0522, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00A9) {
    const struct CPU_State initial_cpu = {.pc=0xc5eb, .a=0xdc, .x=0x78, .y=0x8c, .sp=0x09, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xc5eb, .value=0x90}, {.addr=0xc5ec, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xc5ed, .a=0xdc, .x=0x78, .y=0x8c, .sp=0x09, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0xc5eb, .value=0x90}, {.addr=0xc5ec, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xc5eb, .value=0x90, .type=IO_READ},
        {.addr=0xc5ec, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00AA) {
    const struct CPU_State initial_cpu = {.pc=0x0e5c, .a=0xe6, .x=0x91, .y=0x7f, .sp=0xee, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x0e5c, .value=0x90}, {.addr=0x0e5d, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x0e5e, .a=0xe6, .x=0x91, .y=0x7f, .sp=0xee, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x0e5c, .value=0x90}, {.addr=0x0e5d, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x0e5c, .value=0x90, .type=IO_READ},
        {.addr=0x0e5d, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x9f9c, .a=0x0e, .x=0xe3, .y=0x6a, .sp=0x94, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x9f9c, .value=0x90}, {.addr=0x9f9d, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0x9ff9, .a=0x0e, .x=0xe3, .y=0x6a, .sp=0x94, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x9f9c, .value=0x90}, {.addr=0x9f9d, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0x9f9c, .value=0x90, .type=IO_READ},
        {.addr=0x9f9d, .value=0x5b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00AC) {
    const struct CPU_State initial_cpu = {.pc=0xad90, .a=0x4c, .x=0xea, .y=0xcc, .sp=0xe2, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xad90, .value=0x90}, {.addr=0xad91, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0xad92, .a=0x4c, .x=0xea, .y=0xcc, .sp=0xe2, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xad90, .value=0x90}, {.addr=0xad91, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0xad90, .value=0x90, .type=IO_READ},
        {.addr=0xad91, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00AD) {
    const struct CPU_State initial_cpu = {.pc=0x2eab, .a=0xb8, .x=0xe8, .y=0x8c, .sp=0x14, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x2eab, .value=0x90}, {.addr=0x2eac, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0x2e90, .a=0xb8, .x=0xe8, .y=0x8c, .sp=0x14, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x2eab, .value=0x90}, {.addr=0x2eac, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0x2eab, .value=0x90, .type=IO_READ},
        {.addr=0x2eac, .value=0xe3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00AE) {
    const struct CPU_State initial_cpu = {.pc=0x1239, .a=0x1f, .x=0xd6, .y=0x08, .sp=0x08, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x1239, .value=0x90}, {.addr=0x123a, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x123b, .a=0x1f, .x=0xd6, .y=0x08, .sp=0x08, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x1239, .value=0x90}, {.addr=0x123a, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x1239, .value=0x90, .type=IO_READ},
        {.addr=0x123a, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00AF) {
    const struct CPU_State initial_cpu = {.pc=0xa76a, .a=0x40, .x=0x28, .y=0x4e, .sp=0xc0, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xa76a, .value=0x90}, {.addr=0xa76b, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0xa76c, .a=0x40, .x=0x28, .y=0x4e, .sp=0xc0, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0xa76a, .value=0x90}, {.addr=0xa76b, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0xa76a, .value=0x90, .type=IO_READ},
        {.addr=0xa76b, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00B0) {
    const struct CPU_State initial_cpu = {.pc=0x9578, .a=0x84, .x=0xa7, .y=0xa9, .sp=0x42, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x9578, .value=0x90}, {.addr=0x9579, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0x957a, .a=0x84, .x=0xa7, .y=0xa9, .sp=0x42, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x9578, .value=0x90}, {.addr=0x9579, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0x9578, .value=0x90, .type=IO_READ},
        {.addr=0x9579, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00B1) {
    const struct CPU_State initial_cpu = {.pc=0x9c97, .a=0xfb, .x=0x8c, .y=0xf9, .sp=0x53, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x9c97, .value=0x90}, {.addr=0x9c98, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0x9ca3, .a=0xfb, .x=0x8c, .y=0xf9, .sp=0x53, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x9c97, .value=0x90}, {.addr=0x9c98, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0x9c97, .value=0x90, .type=IO_READ},
        {.addr=0x9c98, .value=0x0a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00B2) {
    const struct CPU_State initial_cpu = {.pc=0xac0d, .a=0x66, .x=0xe5, .y=0xf1, .sp=0xf3, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xac0d, .value=0x90}, {.addr=0xac0e, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0xac0f, .a=0x66, .x=0xe5, .y=0xf1, .sp=0xf3, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0xac0d, .value=0x90}, {.addr=0xac0e, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0xac0d, .value=0x90, .type=IO_READ},
        {.addr=0xac0e, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00B3) {
    const struct CPU_State initial_cpu = {.pc=0x242b, .a=0xa0, .x=0xe5, .y=0x6b, .sp=0xe5, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x242b, .value=0x90}, {.addr=0x242c, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x242d, .a=0xa0, .x=0xe5, .y=0x6b, .sp=0xe5, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x242b, .value=0x90}, {.addr=0x242c, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x242b, .value=0x90, .type=IO_READ},
        {.addr=0x242c, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00B4) {
    const struct CPU_State initial_cpu = {.pc=0xdd03, .a=0x97, .x=0x1c, .y=0x18, .sp=0x11, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xdd03, .value=0x90}, {.addr=0xdd04, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0xdd05, .a=0x97, .x=0x1c, .y=0x18, .sp=0x11, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0xdd03, .value=0x90}, {.addr=0xdd04, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0xdd03, .value=0x90, .type=IO_READ},
        {.addr=0xdd04, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00B5) {
    const struct CPU_State initial_cpu = {.pc=0x69e8, .a=0x42, .x=0x59, .y=0x7d, .sp=0xff, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x69e8, .value=0x90}, {.addr=0x69e9, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0x69e2, .a=0x42, .x=0x59, .y=0x7d, .sp=0xff, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x69e8, .value=0x90}, {.addr=0x69e9, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0x69e8, .value=0x90, .type=IO_READ},
        {.addr=0x69e9, .value=0xf8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00B6) {
    const struct CPU_State initial_cpu = {.pc=0x5f3a, .a=0x73, .x=0x25, .y=0xbc, .sp=0x7e, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x5f3a, .value=0x90}, {.addr=0x5f3b, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0x5f66, .a=0x73, .x=0x25, .y=0xbc, .sp=0x7e, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x5f3a, .value=0x90}, {.addr=0x5f3b, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0x5f3a, .value=0x90, .type=IO_READ},
        {.addr=0x5f3b, .value=0x2a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00B7) {
    const struct CPU_State initial_cpu = {.pc=0x2a2b, .a=0x42, .x=0x8c, .y=0x6b, .sp=0x73, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x2a2b, .value=0x90}, {.addr=0x2a2c, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0x2a6b, .a=0x42, .x=0x8c, .y=0x6b, .sp=0x73, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x2a2b, .value=0x90}, {.addr=0x2a2c, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0x2a2b, .value=0x90, .type=IO_READ},
        {.addr=0x2a2c, .value=0x3e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00B8) {
    const struct CPU_State initial_cpu = {.pc=0x0cb2, .a=0x7d, .x=0xdf, .y=0x43, .sp=0xfc, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x0cb2, .value=0x90}, {.addr=0x0cb3, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0x0cb4, .a=0x7d, .x=0xdf, .y=0x43, .sp=0xfc, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0cb2, .value=0x90}, {.addr=0x0cb3, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0x0cb2, .value=0x90, .type=IO_READ},
        {.addr=0x0cb3, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00B9) {
    const struct CPU_State initial_cpu = {.pc=0x77ef, .a=0xee, .x=0xfa, .y=0xd4, .sp=0x1c, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x77ef, .value=0x90}, {.addr=0x77f0, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x7791, .a=0xee, .x=0xfa, .y=0xd4, .sp=0x1c, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x77ef, .value=0x90}, {.addr=0x77f0, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x77ef, .value=0x90, .type=IO_READ},
        {.addr=0x77f0, .value=0xa0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00BA) {
    const struct CPU_State initial_cpu = {.pc=0x7ae6, .a=0x61, .x=0x50, .y=0xaa, .sp=0x8a, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x7ae6, .value=0x90}, {.addr=0x7ae7, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0x7b1d, .a=0x61, .x=0x50, .y=0xaa, .sp=0x8a, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x7ae6, .value=0x90}, {.addr=0x7ae7, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0x7ae6, .value=0x90, .type=IO_READ},
        {.addr=0x7ae7, .value=0x35, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00BB) {
    const struct CPU_State initial_cpu = {.pc=0xa42b, .a=0x72, .x=0x3a, .y=0x57, .sp=0x29, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xa42b, .value=0x90}, {.addr=0xa42c, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0xa444, .a=0x72, .x=0x3a, .y=0x57, .sp=0x29, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xa42b, .value=0x90}, {.addr=0xa42c, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0xa42b, .value=0x90, .type=IO_READ},
        {.addr=0xa42c, .value=0x17, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00BC) {
    const struct CPU_State initial_cpu = {.pc=0x6d6a, .a=0x5e, .x=0x19, .y=0xb0, .sp=0xef, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x6d6a, .value=0x90}, {.addr=0x6d6b, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0x6ddb, .a=0x5e, .x=0x19, .y=0xb0, .sp=0xef, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x6d6a, .value=0x90}, {.addr=0x6d6b, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0x6d6a, .value=0x90, .type=IO_READ},
        {.addr=0x6d6b, .value=0x6f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00BD) {
    const struct CPU_State initial_cpu = {.pc=0x1f2a, .a=0x8a, .x=0x6b, .y=0xd6, .sp=0x5a, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x1f2a, .value=0x90}, {.addr=0x1f2b, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0x1f2c, .a=0x8a, .x=0x6b, .y=0xd6, .sp=0x5a, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x1f2a, .value=0x90}, {.addr=0x1f2b, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0x1f2a, .value=0x90, .type=IO_READ},
        {.addr=0x1f2b, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00BE) {
    const struct CPU_State initial_cpu = {.pc=0xd23c, .a=0xf8, .x=0x1f, .y=0x3b, .sp=0x72, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xd23c, .value=0x90}, {.addr=0xd23d, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xd25a, .a=0xf8, .x=0x1f, .y=0x3b, .sp=0x72, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xd23c, .value=0x90}, {.addr=0xd23d, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xd23c, .value=0x90, .type=IO_READ},
        {.addr=0xd23d, .value=0x1c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00BF) {
    const struct CPU_State initial_cpu = {.pc=0x8db9, .a=0x04, .x=0xe8, .y=0x31, .sp=0xa7, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x8db9, .value=0x90}, {.addr=0x8dba, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0x8dbb, .a=0x04, .x=0xe8, .y=0x31, .sp=0xa7, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x8db9, .value=0x90}, {.addr=0x8dba, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0x8db9, .value=0x90, .type=IO_READ},
        {.addr=0x8dba, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00C0) {
    const struct CPU_State initial_cpu = {.pc=0x32e5, .a=0xa1, .x=0x19, .y=0x63, .sp=0x92, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x32e5, .value=0x90}, {.addr=0x32e6, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x32e7, .a=0xa1, .x=0x19, .y=0x63, .sp=0x92, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x32e5, .value=0x90}, {.addr=0x32e6, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x32e5, .value=0x90, .type=IO_READ},
        {.addr=0x32e6, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00C1) {
    const struct CPU_State initial_cpu = {.pc=0x599c, .a=0xcb, .x=0x4a, .y=0xd0, .sp=0x29, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x599c, .value=0x90}, {.addr=0x599d, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x592e, .a=0xcb, .x=0x4a, .y=0xd0, .sp=0x29, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x599c, .value=0x90}, {.addr=0x599d, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0x599c, .value=0x90, .type=IO_READ},
        {.addr=0x599d, .value=0x90, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00C2) {
    const struct CPU_State initial_cpu = {.pc=0x699c, .a=0x44, .x=0x8c, .y=0x36, .sp=0x4c, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x699c, .value=0x90}, {.addr=0x699d, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x69ea, .a=0x44, .x=0x8c, .y=0x36, .sp=0x4c, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x699c, .value=0x90}, {.addr=0x699d, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x699c, .value=0x90, .type=IO_READ},
        {.addr=0x699d, .value=0x4c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00C3) {
    const struct CPU_State initial_cpu = {.pc=0x5d19, .a=0x39, .x=0x6b, .y=0xb8, .sp=0x88, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x5d19, .value=0x90}, {.addr=0x5d1a, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x5cd9, .a=0x39, .x=0x6b, .y=0xb8, .sp=0x88, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x5d19, .value=0x90}, {.addr=0x5d1a, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x5d19, .value=0x90, .type=IO_READ},
        {.addr=0x5d1a, .value=0xbe, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00C4) {
    const struct CPU_State initial_cpu = {.pc=0x879d, .a=0xc4, .x=0x2c, .y=0xbe, .sp=0x3a, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x879d, .value=0x90}, {.addr=0x879e, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0x8803, .a=0xc4, .x=0x2c, .y=0xbe, .sp=0x3a, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x879d, .value=0x90}, {.addr=0x879e, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0x879d, .value=0x90, .type=IO_READ},
        {.addr=0x879e, .value=0x64, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00C5) {
    const struct CPU_State initial_cpu = {.pc=0x4b52, .a=0x1a, .x=0x71, .y=0x16, .sp=0x65, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x4b52, .value=0x90}, {.addr=0x4b53, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0x4b54, .a=0x1a, .x=0x71, .y=0x16, .sp=0x65, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x4b52, .value=0x90}, {.addr=0x4b53, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0x4b52, .value=0x90, .type=IO_READ},
        {.addr=0x4b53, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00C6) {
    const struct CPU_State initial_cpu = {.pc=0xaecc, .a=0x82, .x=0x6d, .y=0xb6, .sp=0x19, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xaecc, .value=0x90}, {.addr=0xaecd, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0xaeb6, .a=0x82, .x=0x6d, .y=0xb6, .sp=0x19, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xaecc, .value=0x90}, {.addr=0xaecd, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0xaecc, .value=0x90, .type=IO_READ},
        {.addr=0xaecd, .value=0xe8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00C7) {
    const struct CPU_State initial_cpu = {.pc=0x2929, .a=0x90, .x=0xf2, .y=0x1e, .sp=0x88, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x2929, .value=0x90}, {.addr=0x292a, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0x28cf, .a=0x90, .x=0xf2, .y=0x1e, .sp=0x88, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x2929, .value=0x90}, {.addr=0x292a, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0x2929, .value=0x90, .type=IO_READ},
        {.addr=0x292a, .value=0xa4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00C8) {
    const struct CPU_State initial_cpu = {.pc=0xea14, .a=0x0f, .x=0x1b, .y=0x9d, .sp=0x04, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xea14, .value=0x90}, {.addr=0xea15, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0xea45, .a=0x0f, .x=0x1b, .y=0x9d, .sp=0x04, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0xea14, .value=0x90}, {.addr=0xea15, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0xea14, .value=0x90, .type=IO_READ},
        {.addr=0xea15, .value=0x2f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00C9) {
    const struct CPU_State initial_cpu = {.pc=0x233a, .a=0x3e, .x=0x6c, .y=0x4b, .sp=0x19, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x233a, .value=0x90}, {.addr=0x233b, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x23b1, .a=0x3e, .x=0x6c, .y=0x4b, .sp=0x19, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x233a, .value=0x90}, {.addr=0x233b, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x233a, .value=0x90, .type=IO_READ},
        {.addr=0x233b, .value=0x75, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00CA) {
    const struct CPU_State initial_cpu = {.pc=0xda47, .a=0x0a, .x=0xbb, .y=0x5e, .sp=0x5d, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xda47, .value=0x90}, {.addr=0xda48, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xda49, .a=0x0a, .x=0xbb, .y=0x5e, .sp=0x5d, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0xda47, .value=0x90}, {.addr=0xda48, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xda47, .value=0x90, .type=IO_READ},
        {.addr=0xda48, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00CB) {
    const struct CPU_State initial_cpu = {.pc=0x2eea, .a=0x73, .x=0x6b, .y=0x3c, .sp=0x30, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x2eea, .value=0x90}, {.addr=0x2eeb, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0x2f51, .a=0x73, .x=0x6b, .y=0x3c, .sp=0x30, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x2eea, .value=0x90}, {.addr=0x2eeb, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0x2eea, .value=0x90, .type=IO_READ},
        {.addr=0x2eeb, .value=0x65, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00CC) {
    const struct CPU_State initial_cpu = {.pc=0xcb51, .a=0x4a, .x=0x35, .y=0xae, .sp=0x5d, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xcb51, .value=0x90}, {.addr=0xcb52, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0xcb4c, .a=0x4a, .x=0x35, .y=0xae, .sp=0x5d, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xcb51, .value=0x90}, {.addr=0xcb52, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0xcb51, .value=0x90, .type=IO_READ},
        {.addr=0xcb52, .value=0xf9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00CD) {
    const struct CPU_State initial_cpu = {.pc=0x122d, .a=0xc8, .x=0x92, .y=0x91, .sp=0x88, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x122d, .value=0x90}, {.addr=0x122e, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0x1202, .a=0xc8, .x=0x92, .y=0x91, .sp=0x88, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x122d, .value=0x90}, {.addr=0x122e, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0x122d, .value=0x90, .type=IO_READ},
        {.addr=0x122e, .value=0xd3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00CE) {
    const struct CPU_State initial_cpu = {.pc=0x97df, .a=0xb7, .x=0x4c, .y=0x0b, .sp=0xfc, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x97df, .value=0x90}, {.addr=0x97e0, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x97e1, .a=0xb7, .x=0x4c, .y=0x0b, .sp=0xfc, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x97df, .value=0x90}, {.addr=0x97e0, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x97df, .value=0x90, .type=IO_READ},
        {.addr=0x97e0, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00CF) {
    const struct CPU_State initial_cpu = {.pc=0x9ddb, .a=0x3a, .x=0x3b, .y=0xbc, .sp=0x4f, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x9ddb, .value=0x90}, {.addr=0x9ddc, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0x9ddd, .a=0x3a, .x=0x3b, .y=0xbc, .sp=0x4f, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x9ddb, .value=0x90}, {.addr=0x9ddc, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0x9ddb, .value=0x90, .type=IO_READ},
        {.addr=0x9ddc, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00D0) {
    const struct CPU_State initial_cpu = {.pc=0xf9bd, .a=0xec, .x=0x47, .y=0x9d, .sp=0xa8, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xf9bd, .value=0x90}, {.addr=0xf9be, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0xf98c, .a=0xec, .x=0x47, .y=0x9d, .sp=0xa8, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xf9bd, .value=0x90}, {.addr=0xf9be, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0xf9bd, .value=0x90, .type=IO_READ},
        {.addr=0xf9be, .value=0xcd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00D1) {
    const struct CPU_State initial_cpu = {.pc=0x85b7, .a=0x55, .x=0x9b, .y=0x24, .sp=0x87, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x85b7, .value=0x90}, {.addr=0x85b8, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x8593, .a=0x55, .x=0x9b, .y=0x24, .sp=0x87, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x85b7, .value=0x90}, {.addr=0x85b8, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x85b7, .value=0x90, .type=IO_READ},
        {.addr=0x85b8, .value=0xda, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00D2) {
    const struct CPU_State initial_cpu = {.pc=0x7217, .a=0x38, .x=0xb6, .y=0x60, .sp=0x7d, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x7217, .value=0x90}, {.addr=0x7218, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0x7219, .a=0x38, .x=0xb6, .y=0x60, .sp=0x7d, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x7217, .value=0x90}, {.addr=0x7218, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0x7217, .value=0x90, .type=IO_READ},
        {.addr=0x7218, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00D3) {
    const struct CPU_State initial_cpu = {.pc=0xd08f, .a=0x41, .x=0xa7, .y=0x44, .sp=0xfc, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xd08f, .value=0x90}, {.addr=0xd090, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0xd020, .a=0x41, .x=0xa7, .y=0x44, .sp=0xfc, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xd08f, .value=0x90}, {.addr=0xd090, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0xd08f, .value=0x90, .type=IO_READ},
        {.addr=0xd090, .value=0x8f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00D4) {
    const struct CPU_State initial_cpu = {.pc=0x3079, .a=0x46, .x=0xe4, .y=0xcc, .sp=0x6d, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x3079, .value=0x90}, {.addr=0x307a, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x307b, .a=0x46, .x=0xe4, .y=0xcc, .sp=0x6d, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x3079, .value=0x90}, {.addr=0x307a, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x3079, .value=0x90, .type=IO_READ},
        {.addr=0x307a, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00D5) {
    const struct CPU_State initial_cpu = {.pc=0x793a, .a=0xfc, .x=0xc8, .y=0xcc, .sp=0xe1, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x793a, .value=0x90}, {.addr=0x793b, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x7930, .a=0xfc, .x=0xc8, .y=0xcc, .sp=0xe1, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x793a, .value=0x90}, {.addr=0x793b, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x793a, .value=0x90, .type=IO_READ},
        {.addr=0x793b, .value=0xf4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00D6) {
    const struct CPU_State initial_cpu = {.pc=0x6d40, .a=0xb0, .x=0x5f, .y=0x88, .sp=0xee, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x6d40, .value=0x90}, {.addr=0x6d41, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0x6d42, .a=0xb0, .x=0x5f, .y=0x88, .sp=0xee, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x6d40, .value=0x90}, {.addr=0x6d41, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0x6d40, .value=0x90, .type=IO_READ},
        {.addr=0x6d41, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00D7) {
    const struct CPU_State initial_cpu = {.pc=0x08f5, .a=0x2d, .x=0x92, .y=0x82, .sp=0xc9, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x08f5, .value=0x90}, {.addr=0x08f6, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0x08f7, .a=0x2d, .x=0x92, .y=0x82, .sp=0xc9, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x08f5, .value=0x90}, {.addr=0x08f6, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0x08f5, .value=0x90, .type=IO_READ},
        {.addr=0x08f6, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00D8) {
    const struct CPU_State initial_cpu = {.pc=0xf5dc, .a=0xdb, .x=0x5b, .y=0xd5, .sp=0x33, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xf5dc, .value=0x90}, {.addr=0xf5dd, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0xf5ff, .a=0xdb, .x=0x5b, .y=0xd5, .sp=0x33, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xf5dc, .value=0x90}, {.addr=0xf5dd, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0xf5dc, .value=0x90, .type=IO_READ},
        {.addr=0xf5dd, .value=0x21, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00D9) {
    const struct CPU_State initial_cpu = {.pc=0xb205, .a=0xc7, .x=0xad, .y=0x71, .sp=0xdf, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0xb205, .value=0x90}, {.addr=0xb206, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0xb207, .a=0xc7, .x=0xad, .y=0x71, .sp=0xdf, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0xb205, .value=0x90}, {.addr=0xb206, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0xb205, .value=0x90, .type=IO_READ},
        {.addr=0xb206, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00DA) {
    const struct CPU_State initial_cpu = {.pc=0x42f0, .a=0x56, .x=0x87, .y=0x24, .sp=0x96, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x42f0, .value=0x90}, {.addr=0x42f1, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x42f2, .a=0x56, .x=0x87, .y=0x24, .sp=0x96, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x42f0, .value=0x90}, {.addr=0x42f1, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x42f0, .value=0x90, .type=IO_READ},
        {.addr=0x42f1, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00DB) {
    const struct CPU_State initial_cpu = {.pc=0xb479, .a=0xe3, .x=0x55, .y=0xd2, .sp=0xce, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xb479, .value=0x90}, {.addr=0xb47a, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0xb462, .a=0xe3, .x=0x55, .y=0xd2, .sp=0xce, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xb479, .value=0x90}, {.addr=0xb47a, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0xb479, .value=0x90, .type=IO_READ},
        {.addr=0xb47a, .value=0xe7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00DC) {
    const struct CPU_State initial_cpu = {.pc=0x68d7, .a=0x97, .x=0x04, .y=0x4a, .sp=0x2a, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x68d7, .value=0x90}, {.addr=0x68d8, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0x68d9, .a=0x97, .x=0x04, .y=0x4a, .sp=0x2a, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x68d7, .value=0x90}, {.addr=0x68d8, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0x68d7, .value=0x90, .type=IO_READ},
        {.addr=0x68d8, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00DD) {
    const struct CPU_State initial_cpu = {.pc=0xafa7, .a=0x2f, .x=0x1d, .y=0xa2, .sp=0x72, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xafa7, .value=0x90}, {.addr=0xafa8, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xb00f, .a=0x2f, .x=0x1d, .y=0xa2, .sp=0x72, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0xafa7, .value=0x90}, {.addr=0xafa8, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xafa7, .value=0x90, .type=IO_READ},
        {.addr=0xafa8, .value=0x66, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00DE) {
    const struct CPU_State initial_cpu = {.pc=0x0e81, .a=0x53, .x=0xf1, .y=0x91, .sp=0x22, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x0e81, .value=0x90}, {.addr=0x0e82, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x0e83, .a=0x53, .x=0xf1, .y=0x91, .sp=0x22, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x0e81, .value=0x90}, {.addr=0x0e82, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x0e81, .value=0x90, .type=IO_READ},
        {.addr=0x0e82, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00DF) {
    const struct CPU_State initial_cpu = {.pc=0x645a, .a=0xda, .x=0x20, .y=0x81, .sp=0xce, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x645a, .value=0x90}, {.addr=0x645b, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0x64c3, .a=0xda, .x=0x20, .y=0x81, .sp=0xce, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x645a, .value=0x90}, {.addr=0x645b, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0x645a, .value=0x90, .type=IO_READ},
        {.addr=0x645b, .value=0x67, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00E0) {
    const struct CPU_State initial_cpu = {.pc=0xbeff, .a=0xb9, .x=0xe0, .y=0x20, .sp=0x11, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xbeff, .value=0x90}, {.addr=0xbf00, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xbf01, .a=0xb9, .x=0xe0, .y=0x20, .sp=0x11, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xbeff, .value=0x90}, {.addr=0xbf00, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xbeff, .value=0x90, .type=IO_READ},
        {.addr=0xbf00, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00E1) {
    const struct CPU_State initial_cpu = {.pc=0x9d57, .a=0x14, .x=0xa7, .y=0x4f, .sp=0x2d, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x9d57, .value=0x90}, {.addr=0x9d58, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0x9d37, .a=0x14, .x=0xa7, .y=0x4f, .sp=0x2d, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x9d57, .value=0x90}, {.addr=0x9d58, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0x9d57, .value=0x90, .type=IO_READ},
        {.addr=0x9d58, .value=0xde, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x6fb3, .a=0x72, .x=0xa1, .y=0x0e, .sp=0x04, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x6fb3, .value=0x90}, {.addr=0x6fb4, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0x7030, .a=0x72, .x=0xa1, .y=0x0e, .sp=0x04, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x6fb3, .value=0x90}, {.addr=0x6fb4, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0x6fb3, .value=0x90, .type=IO_READ},
        {.addr=0x6fb4, .value=0x7b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00E3) {
    const struct CPU_State initial_cpu = {.pc=0xb831, .a=0x15, .x=0x17, .y=0x67, .sp=0x0d, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xb831, .value=0x90}, {.addr=0xb832, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0xb87a, .a=0x15, .x=0x17, .y=0x67, .sp=0x0d, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0xb831, .value=0x90}, {.addr=0xb832, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0xb831, .value=0x90, .type=IO_READ},
        {.addr=0xb832, .value=0x47, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00E4) {
    const struct CPU_State initial_cpu = {.pc=0x2b9e, .a=0xa2, .x=0x90, .y=0x3a, .sp=0xa3, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x2b9e, .value=0x90}, {.addr=0x2b9f, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0x2b21, .a=0xa2, .x=0x90, .y=0x3a, .sp=0xa3, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x2b9e, .value=0x90}, {.addr=0x2b9f, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0x2b9e, .value=0x90, .type=IO_READ},
        {.addr=0x2b9f, .value=0x81, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00E5) {
    const struct CPU_State initial_cpu = {.pc=0x7e80, .a=0x51, .x=0x13, .y=0xd8, .sp=0xa7, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x7e80, .value=0x90}, {.addr=0x7e81, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x7e21, .a=0x51, .x=0x13, .y=0xd8, .sp=0xa7, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x7e80, .value=0x90}, {.addr=0x7e81, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x7e80, .value=0x90, .type=IO_READ},
        {.addr=0x7e81, .value=0x9f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00E6) {
    const struct CPU_State initial_cpu = {.pc=0xfd79, .a=0xb0, .x=0xf8, .y=0x6f, .sp=0x38, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xfd79, .value=0x90}, {.addr=0xfd7a, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0xfd32, .a=0xb0, .x=0xf8, .y=0x6f, .sp=0x38, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0xfd79, .value=0x90}, {.addr=0xfd7a, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0xfd79, .value=0x90, .type=IO_READ},
        {.addr=0xfd7a, .value=0xb7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00E7) {
    const struct CPU_State initial_cpu = {.pc=0xd1f1, .a=0x4c, .x=0xe1, .y=0x50, .sp=0x75, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xd1f1, .value=0x90}, {.addr=0xd1f2, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0xd1f3, .a=0x4c, .x=0xe1, .y=0x50, .sp=0x75, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xd1f1, .value=0x90}, {.addr=0xd1f2, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0xd1f1, .value=0x90, .type=IO_READ},
        {.addr=0xd1f2, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00E8) {
    const struct CPU_State initial_cpu = {.pc=0x3744, .a=0xa0, .x=0x90, .y=0x0a, .sp=0x3f, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x3744, .value=0x90}, {.addr=0x3745, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0x377f, .a=0xa0, .x=0x90, .y=0x0a, .sp=0x3f, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x3744, .value=0x90}, {.addr=0x3745, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0x3744, .value=0x90, .type=IO_READ},
        {.addr=0x3745, .value=0x39, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00E9) {
    const struct CPU_State initial_cpu = {.pc=0x99ae, .a=0x9b, .x=0x83, .y=0x69, .sp=0xaa, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x99ae, .value=0x90}, {.addr=0x99af, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0x99b0, .a=0x9b, .x=0x83, .y=0x69, .sp=0xaa, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x99ae, .value=0x90}, {.addr=0x99af, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0x99ae, .value=0x90, .type=IO_READ},
        {.addr=0x99af, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00EA) {
    const struct CPU_State initial_cpu = {.pc=0x3c4e, .a=0x58, .x=0x05, .y=0x03, .sp=0x79, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x3c4e, .value=0x90}, {.addr=0x3c4f, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0x3cc4, .a=0x58, .x=0x05, .y=0x03, .sp=0x79, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x3c4e, .value=0x90}, {.addr=0x3c4f, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0x3c4e, .value=0x90, .type=IO_READ},
        {.addr=0x3c4f, .value=0x74, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00EB) {
    const struct CPU_State initial_cpu = {.pc=0xfef0, .a=0x68, .x=0x2e, .y=0x03, .sp=0x5e, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xfef0, .value=0x90}, {.addr=0xfef1, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0xfef2, .a=0x68, .x=0x2e, .y=0x03, .sp=0x5e, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xfef0, .value=0x90}, {.addr=0xfef1, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0xfef0, .value=0x90, .type=IO_READ},
        {.addr=0xfef1, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00EC) {
    const struct CPU_State initial_cpu = {.pc=0x886e, .a=0x69, .x=0xd7, .y=0x66, .sp=0xf4, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x886e, .value=0x90}, {.addr=0x886f, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0x8870, .a=0x69, .x=0xd7, .y=0x66, .sp=0xf4, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x886e, .value=0x90}, {.addr=0x886f, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0x886e, .value=0x90, .type=IO_READ},
        {.addr=0x886f, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00ED) {
    const struct CPU_State initial_cpu = {.pc=0xe692, .a=0x74, .x=0xea, .y=0xc9, .sp=0x46, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xe692, .value=0x90}, {.addr=0xe693, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0xe694, .a=0x74, .x=0xea, .y=0xc9, .sp=0x46, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0xe692, .value=0x90}, {.addr=0xe693, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0xe692, .value=0x90, .type=IO_READ},
        {.addr=0xe693, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00EE) {
    const struct CPU_State initial_cpu = {.pc=0x6dfa, .a=0xc4, .x=0xf5, .y=0xb0, .sp=0x9d, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x6dfa, .value=0x90}, {.addr=0x6dfb, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0x6dfc, .a=0xc4, .x=0xf5, .y=0xb0, .sp=0x9d, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x6dfa, .value=0x90}, {.addr=0x6dfb, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0x6dfa, .value=0x90, .type=IO_READ},
        {.addr=0x6dfb, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00EF) {
    const struct CPU_State initial_cpu = {.pc=0x8211, .a=0x19, .x=0x32, .y=0x07, .sp=0x43, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x8211, .value=0x90}, {.addr=0x8212, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0x8213, .a=0x19, .x=0x32, .y=0x07, .sp=0x43, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x8211, .value=0x90}, {.addr=0x8212, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0x8211, .value=0x90, .type=IO_READ},
        {.addr=0x8212, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00F0) {
    const struct CPU_State initial_cpu = {.pc=0xb955, .a=0xfb, .x=0x3b, .y=0xdb, .sp=0xb9, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xb955, .value=0x90}, {.addr=0xb956, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0xb95e, .a=0xfb, .x=0x3b, .y=0xdb, .sp=0xb9, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0xb955, .value=0x90}, {.addr=0xb956, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0xb955, .value=0x90, .type=IO_READ},
        {.addr=0xb956, .value=0x07, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00F1) {
    const struct CPU_State initial_cpu = {.pc=0x9907, .a=0x69, .x=0x7a, .y=0x72, .sp=0x49, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x9907, .value=0x90}, {.addr=0x9908, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0x9909, .a=0x69, .x=0x7a, .y=0x72, .sp=0x49, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x9907, .value=0x90}, {.addr=0x9908, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0x9907, .value=0x90, .type=IO_READ},
        {.addr=0x9908, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00F2) {
    const struct CPU_State initial_cpu = {.pc=0x8f10, .a=0x5b, .x=0x50, .y=0x9e, .sp=0xae, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x8f10, .value=0x90}, {.addr=0x8f11, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0x8f12, .a=0x5b, .x=0x50, .y=0x9e, .sp=0xae, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x8f10, .value=0x90}, {.addr=0x8f11, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0x8f10, .value=0x90, .type=IO_READ},
        {.addr=0x8f11, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00F3) {
    const struct CPU_State initial_cpu = {.pc=0xba54, .a=0x01, .x=0xb2, .y=0xfe, .sp=0x59, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0xba54, .value=0x90}, {.addr=0xba55, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0xbabd, .a=0x01, .x=0xb2, .y=0xfe, .sp=0x59, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xba54, .value=0x90}, {.addr=0xba55, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0xba54, .value=0x90, .type=IO_READ},
        {.addr=0xba55, .value=0x67, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00F4) {
    const struct CPU_State initial_cpu = {.pc=0x8692, .a=0x13, .x=0x23, .y=0x31, .sp=0x5c, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x8692, .value=0x90}, {.addr=0x8693, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x8694, .a=0x13, .x=0x23, .y=0x31, .sp=0x5c, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x8692, .value=0x90}, {.addr=0x8693, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x8692, .value=0x90, .type=IO_READ},
        {.addr=0x8693, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00F5) {
    const struct CPU_State initial_cpu = {.pc=0xa9f6, .a=0x8f, .x=0xa4, .y=0x28, .sp=0x55, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xa9f6, .value=0x90}, {.addr=0xa9f7, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0xaa5c, .a=0x8f, .x=0xa4, .y=0x28, .sp=0x55, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xa9f6, .value=0x90}, {.addr=0xa9f7, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0xa9f6, .value=0x90, .type=IO_READ},
        {.addr=0xa9f7, .value=0x64, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00F6) {
    const struct CPU_State initial_cpu = {.pc=0xd36d, .a=0x66, .x=0x6a, .y=0xda, .sp=0x25, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xd36d, .value=0x90}, {.addr=0xd36e, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0xd389, .a=0x66, .x=0x6a, .y=0xda, .sp=0x25, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xd36d, .value=0x90}, {.addr=0xd36e, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0xd36d, .value=0x90, .type=IO_READ},
        {.addr=0xd36e, .value=0x1a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00F7) {
    const struct CPU_State initial_cpu = {.pc=0xba6f, .a=0xc6, .x=0x9c, .y=0xf7, .sp=0xe8, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xba6f, .value=0x90}, {.addr=0xba70, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0xba71, .a=0xc6, .x=0x9c, .y=0xf7, .sp=0xe8, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0xba6f, .value=0x90}, {.addr=0xba70, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0xba6f, .value=0x90, .type=IO_READ},
        {.addr=0xba70, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00F8) {
    const struct CPU_State initial_cpu = {.pc=0x5311, .a=0xb8, .x=0x9f, .y=0x8e, .sp=0xfa, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x5311, .value=0x90}, {.addr=0x5312, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0x5341, .a=0xb8, .x=0x9f, .y=0x8e, .sp=0xfa, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x5311, .value=0x90}, {.addr=0x5312, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0x5311, .value=0x90, .type=IO_READ},
        {.addr=0x5312, .value=0x2e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00F9) {
    const struct CPU_State initial_cpu = {.pc=0x4e68, .a=0xd9, .x=0xaa, .y=0xdf, .sp=0x9f, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x4e68, .value=0x90}, {.addr=0x4e69, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0x4e6d, .a=0xd9, .x=0xaa, .y=0xdf, .sp=0x9f, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x4e68, .value=0x90}, {.addr=0x4e69, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0x4e68, .value=0x90, .type=IO_READ},
        {.addr=0x4e69, .value=0x03, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00FA) {
    const struct CPU_State initial_cpu = {.pc=0x02ab, .a=0xcf, .x=0x59, .y=0x50, .sp=0x2d, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x02ab, .value=0x90}, {.addr=0x02ac, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0x02ad, .a=0xcf, .x=0x59, .y=0x50, .sp=0x2d, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x02ab, .value=0x90}, {.addr=0x02ac, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0x02ab, .value=0x90, .type=IO_READ},
        {.addr=0x02ac, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00FB) {
    const struct CPU_State initial_cpu = {.pc=0xc364, .a=0xd7, .x=0x12, .y=0xd7, .sp=0x76, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xc364, .value=0x90}, {.addr=0xc365, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0xc38f, .a=0xd7, .x=0x12, .y=0xd7, .sp=0x76, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xc364, .value=0x90}, {.addr=0xc365, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0xc364, .value=0x90, .type=IO_READ},
        {.addr=0xc365, .value=0x29, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00FC) {
    const struct CPU_State initial_cpu = {.pc=0x56a9, .a=0xa3, .x=0x7f, .y=0xb9, .sp=0x46, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x56a9, .value=0x90}, {.addr=0x56aa, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0x56ab, .a=0xa3, .x=0x7f, .y=0xb9, .sp=0x46, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x56a9, .value=0x90}, {.addr=0x56aa, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0x56a9, .value=0x90, .type=IO_READ},
        {.addr=0x56aa, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00FD) {
    const struct CPU_State initial_cpu = {.pc=0xbfcb, .a=0xdd, .x=0x5f, .y=0xe6, .sp=0xbb, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xbfcb, .value=0x90}, {.addr=0xbfcc, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0xbfe0, .a=0xdd, .x=0x5f, .y=0xe6, .sp=0xbb, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0xbfcb, .value=0x90}, {.addr=0xbfcc, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0xbfcb, .value=0x90, .type=IO_READ},
        {.addr=0xbfcc, .value=0x13, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00FE) {
    const struct CPU_State initial_cpu = {.pc=0x0f9a, .a=0x77, .x=0x3b, .y=0xd8, .sp=0x3c, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x0f9a, .value=0x90}, {.addr=0x0f9b, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0x0fe4, .a=0x77, .x=0x3b, .y=0xd8, .sp=0x3c, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x0f9a, .value=0x90}, {.addr=0x0f9b, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0x0f9a, .value=0x90, .type=IO_READ},
        {.addr=0x0f9b, .value=0x48, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_00FF) {
    const struct CPU_State initial_cpu = {.pc=0x36bf, .a=0x4f, .x=0x03, .y=0xd1, .sp=0xc8, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x36bf, .value=0x90}, {.addr=0x36c0, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0x36c1, .a=0x4f, .x=0x03, .y=0xd1, .sp=0xc8, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x36bf, .value=0x90}, {.addr=0x36c0, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0x36bf, .value=0x90, .type=IO_READ},
        {.addr=0x36c0, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0100) {
    const struct CPU_State initial_cpu = {.pc=0x8ae7, .a=0x00, .x=0x4b, .y=0x0c, .sp=0x8a, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x8ae7, .value=0x90}, {.addr=0x8ae8, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0x8b50, .a=0x00, .x=0x4b, .y=0x0c, .sp=0x8a, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x8ae7, .value=0x90}, {.addr=0x8ae8, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0x8ae7, .value=0x90, .type=IO_READ},
        {.addr=0x8ae8, .value=0x67, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0101) {
    const struct CPU_State initial_cpu = {.pc=0xaac7, .a=0x07, .x=0x5e, .y=0x88, .sp=0xe1, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xaac7, .value=0x90}, {.addr=0xaac8, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xaab7, .a=0x07, .x=0x5e, .y=0x88, .sp=0xe1, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0xaac7, .value=0x90}, {.addr=0xaac8, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xaac7, .value=0x90, .type=IO_READ},
        {.addr=0xaac8, .value=0xee, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0102) {
    const struct CPU_State initial_cpu = {.pc=0x4a75, .a=0x89, .x=0x88, .y=0x40, .sp=0x14, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x4a75, .value=0x90}, {.addr=0x4a76, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0x4a63, .a=0x89, .x=0x88, .y=0x40, .sp=0x14, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x4a75, .value=0x90}, {.addr=0x4a76, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0x4a75, .value=0x90, .type=IO_READ},
        {.addr=0x4a76, .value=0xec, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0103) {
    const struct CPU_State initial_cpu = {.pc=0x30df, .a=0x6e, .x=0x44, .y=0xee, .sp=0xe6, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x30df, .value=0x90}, {.addr=0x30e0, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0x3126, .a=0x6e, .x=0x44, .y=0xee, .sp=0xe6, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x30df, .value=0x90}, {.addr=0x30e0, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0x30df, .value=0x90, .type=IO_READ},
        {.addr=0x30e0, .value=0x45, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0104) {
    const struct CPU_State initial_cpu = {.pc=0x32aa, .a=0x23, .x=0x66, .y=0xeb, .sp=0x3f, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x32aa, .value=0x90}, {.addr=0x32ab, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x329a, .a=0x23, .x=0x66, .y=0xeb, .sp=0x3f, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x32aa, .value=0x90}, {.addr=0x32ab, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x32aa, .value=0x90, .type=IO_READ},
        {.addr=0x32ab, .value=0xee, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0105) {
    const struct CPU_State initial_cpu = {.pc=0xe557, .a=0xad, .x=0xad, .y=0x64, .sp=0xe1, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xe557, .value=0x90}, {.addr=0xe558, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0xe559, .a=0xad, .x=0xad, .y=0x64, .sp=0xe1, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xe557, .value=0x90}, {.addr=0xe558, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0xe557, .value=0x90, .type=IO_READ},
        {.addr=0xe558, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0106) {
    const struct CPU_State initial_cpu = {.pc=0xa208, .a=0x10, .x=0x25, .y=0xa9, .sp=0x7c, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xa208, .value=0x90}, {.addr=0xa209, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xa20a, .a=0x10, .x=0x25, .y=0xa9, .sp=0x7c, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0xa208, .value=0x90}, {.addr=0xa209, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xa208, .value=0x90, .type=IO_READ},
        {.addr=0xa209, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0107) {
    const struct CPU_State initial_cpu = {.pc=0x1105, .a=0xed, .x=0xf2, .y=0x30, .sp=0xdb, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x1105, .value=0x90}, {.addr=0x1106, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0x10f0, .a=0xed, .x=0xf2, .y=0x30, .sp=0xdb, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x1105, .value=0x90}, {.addr=0x1106, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0x1105, .value=0x90, .type=IO_READ},
        {.addr=0x1106, .value=0xe9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0108) {
    const struct CPU_State initial_cpu = {.pc=0xd0b7, .a=0x8f, .x=0x62, .y=0xcd, .sp=0xa1, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xd0b7, .value=0x90}, {.addr=0xd0b8, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0xd0aa, .a=0x8f, .x=0x62, .y=0xcd, .sp=0xa1, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0xd0b7, .value=0x90}, {.addr=0xd0b8, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0xd0b7, .value=0x90, .type=IO_READ},
        {.addr=0xd0b8, .value=0xf1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0109) {
    const struct CPU_State initial_cpu = {.pc=0xfdcb, .a=0x1b, .x=0x81, .y=0x3a, .sp=0x3d, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xfdcb, .value=0x90}, {.addr=0xfdcc, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0xfdcd, .a=0x1b, .x=0x81, .y=0x3a, .sp=0x3d, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0xfdcb, .value=0x90}, {.addr=0xfdcc, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0xfdcb, .value=0x90, .type=IO_READ},
        {.addr=0xfdcc, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_010A) {
    const struct CPU_State initial_cpu = {.pc=0xe6c8, .a=0xc8, .x=0x72, .y=0x57, .sp=0x68, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xe6c8, .value=0x90}, {.addr=0xe6c9, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0xe6ca, .a=0xc8, .x=0x72, .y=0x57, .sp=0x68, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xe6c8, .value=0x90}, {.addr=0xe6c9, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0xe6c8, .value=0x90, .type=IO_READ},
        {.addr=0xe6c9, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_010B) {
    const struct CPU_State initial_cpu = {.pc=0x3bd7, .a=0x23, .x=0x58, .y=0xeb, .sp=0x00, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x3bd7, .value=0x90}, {.addr=0x3bd8, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0x3bd9, .a=0x23, .x=0x58, .y=0xeb, .sp=0x00, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x3bd7, .value=0x90}, {.addr=0x3bd8, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0x3bd7, .value=0x90, .type=IO_READ},
        {.addr=0x3bd8, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_010C) {
    const struct CPU_State initial_cpu = {.pc=0x85be, .a=0x75, .x=0x88, .y=0x34, .sp=0x97, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x85be, .value=0x90}, {.addr=0x85bf, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x85e8, .a=0x75, .x=0x88, .y=0x34, .sp=0x97, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x85be, .value=0x90}, {.addr=0x85bf, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x85be, .value=0x90, .type=IO_READ},
        {.addr=0x85bf, .value=0x28, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_010D) {
    const struct CPU_State initial_cpu = {.pc=0xa344, .a=0x2e, .x=0xa9, .y=0x3b, .sp=0x0d, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xa344, .value=0x90}, {.addr=0xa345, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0xa2fc, .a=0x2e, .x=0xa9, .y=0x3b, .sp=0x0d, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xa344, .value=0x90}, {.addr=0xa345, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0xa344, .value=0x90, .type=IO_READ},
        {.addr=0xa345, .value=0xb6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_010E) {
    const struct CPU_State initial_cpu = {.pc=0x4a3f, .a=0x05, .x=0x07, .y=0xa2, .sp=0x9d, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x4a3f, .value=0x90}, {.addr=0x4a40, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x49f9, .a=0x05, .x=0x07, .y=0xa2, .sp=0x9d, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x4a3f, .value=0x90}, {.addr=0x4a40, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x4a3f, .value=0x90, .type=IO_READ},
        {.addr=0x4a40, .value=0xb8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_010F) {
    const struct CPU_State initial_cpu = {.pc=0xd617, .a=0x07, .x=0x70, .y=0x77, .sp=0x6b, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xd617, .value=0x90}, {.addr=0xd618, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0xd619, .a=0x07, .x=0x70, .y=0x77, .sp=0x6b, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xd617, .value=0x90}, {.addr=0xd618, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0xd617, .value=0x90, .type=IO_READ},
        {.addr=0xd618, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0110) {
    const struct CPU_State initial_cpu = {.pc=0x12b0, .a=0xa8, .x=0x67, .y=0x70, .sp=0x1e, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x12b0, .value=0x90}, {.addr=0x12b1, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0x12b2, .a=0xa8, .x=0x67, .y=0x70, .sp=0x1e, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x12b0, .value=0x90}, {.addr=0x12b1, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0x12b0, .value=0x90, .type=IO_READ},
        {.addr=0x12b1, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0111) {
    const struct CPU_State initial_cpu = {.pc=0x7f89, .a=0x60, .x=0x25, .y=0x37, .sp=0x76, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x7f89, .value=0x90}, {.addr=0x7f8a, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0x7f8b, .a=0x60, .x=0x25, .y=0x37, .sp=0x76, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x7f89, .value=0x90}, {.addr=0x7f8a, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0x7f89, .value=0x90, .type=IO_READ},
        {.addr=0x7f8a, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0112) {
    const struct CPU_State initial_cpu = {.pc=0x8003, .a=0x15, .x=0xc2, .y=0xc3, .sp=0xd0, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x8003, .value=0x90}, {.addr=0x8004, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0x7fb2, .a=0x15, .x=0xc2, .y=0xc3, .sp=0xd0, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x8003, .value=0x90}, {.addr=0x8004, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0x8003, .value=0x90, .type=IO_READ},
        {.addr=0x8004, .value=0xad, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0113) {
    const struct CPU_State initial_cpu = {.pc=0x0da2, .a=0xe0, .x=0xc8, .y=0xae, .sp=0x09, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x0da2, .value=0x90}, {.addr=0x0da3, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0x0d2e, .a=0xe0, .x=0xc8, .y=0xae, .sp=0x09, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x0da2, .value=0x90}, {.addr=0x0da3, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0x0da2, .value=0x90, .type=IO_READ},
        {.addr=0x0da3, .value=0x8a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0114) {
    const struct CPU_State initial_cpu = {.pc=0xfdd7, .a=0x22, .x=0xab, .y=0xa5, .sp=0x45, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xfdd7, .value=0x90}, {.addr=0xfdd8, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0xfdd9, .a=0x22, .x=0xab, .y=0xa5, .sp=0x45, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0xfdd7, .value=0x90}, {.addr=0xfdd8, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0xfdd7, .value=0x90, .type=IO_READ},
        {.addr=0xfdd8, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0115) {
    const struct CPU_State initial_cpu = {.pc=0x41dc, .a=0x7a, .x=0x71, .y=0xe5, .sp=0x50, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x41dc, .value=0x90}, {.addr=0x41dd, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0x4193, .a=0x7a, .x=0x71, .y=0xe5, .sp=0x50, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x41dc, .value=0x90}, {.addr=0x41dd, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0x41dc, .value=0x90, .type=IO_READ},
        {.addr=0x41dd, .value=0xb5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0116) {
    const struct CPU_State initial_cpu = {.pc=0x6729, .a=0xb5, .x=0xff, .y=0x02, .sp=0x9e, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x6729, .value=0x90}, {.addr=0x672a, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0x672b, .a=0xb5, .x=0xff, .y=0x02, .sp=0x9e, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x6729, .value=0x90}, {.addr=0x672a, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0x6729, .value=0x90, .type=IO_READ},
        {.addr=0x672a, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0117) {
    const struct CPU_State initial_cpu = {.pc=0xb222, .a=0x9e, .x=0x39, .y=0xf9, .sp=0x55, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xb222, .value=0x90}, {.addr=0xb223, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0xb224, .a=0x9e, .x=0x39, .y=0xf9, .sp=0x55, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xb222, .value=0x90}, {.addr=0xb223, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0xb222, .value=0x90, .type=IO_READ},
        {.addr=0xb223, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0118) {
    const struct CPU_State initial_cpu = {.pc=0x1151, .a=0x6f, .x=0x1a, .y=0x2a, .sp=0xb4, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x1151, .value=0x90}, {.addr=0x1152, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0x1153, .a=0x6f, .x=0x1a, .y=0x2a, .sp=0xb4, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x1151, .value=0x90}, {.addr=0x1152, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0x1151, .value=0x90, .type=IO_READ},
        {.addr=0x1152, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0119) {
    const struct CPU_State initial_cpu = {.pc=0x7436, .a=0xc2, .x=0x03, .y=0xd1, .sp=0x0f, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x7436, .value=0x90}, {.addr=0x7437, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x7438, .a=0xc2, .x=0x03, .y=0xd1, .sp=0x0f, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x7436, .value=0x90}, {.addr=0x7437, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x7436, .value=0x90, .type=IO_READ},
        {.addr=0x7437, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_011A) {
    const struct CPU_State initial_cpu = {.pc=0xa0fc, .a=0x99, .x=0xd5, .y=0x00, .sp=0x2e, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xa0fc, .value=0x90}, {.addr=0xa0fd, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0xa081, .a=0x99, .x=0xd5, .y=0x00, .sp=0x2e, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0xa0fc, .value=0x90}, {.addr=0xa0fd, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0xa0fc, .value=0x90, .type=IO_READ},
        {.addr=0xa0fd, .value=0x83, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_011B) {
    const struct CPU_State initial_cpu = {.pc=0xdfbb, .a=0xc2, .x=0xd2, .y=0x0d, .sp=0x5d, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xdfbb, .value=0x90}, {.addr=0xdfbc, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0xdf94, .a=0xc2, .x=0xd2, .y=0x0d, .sp=0x5d, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xdfbb, .value=0x90}, {.addr=0xdfbc, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0xdfbb, .value=0x90, .type=IO_READ},
        {.addr=0xdfbc, .value=0xd7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_011C) {
    const struct CPU_State initial_cpu = {.pc=0x1076, .a=0xab, .x=0x6d, .y=0xae, .sp=0xa0, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x1076, .value=0x90}, {.addr=0x1077, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0x1002, .a=0xab, .x=0x6d, .y=0xae, .sp=0xa0, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x1076, .value=0x90}, {.addr=0x1077, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0x1076, .value=0x90, .type=IO_READ},
        {.addr=0x1077, .value=0x8a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_011D) {
    const struct CPU_State initial_cpu = {.pc=0x2e04, .a=0x0e, .x=0xc5, .y=0x84, .sp=0x3b, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x2e04, .value=0x90}, {.addr=0x2e05, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0x2e06, .a=0x0e, .x=0xc5, .y=0x84, .sp=0x3b, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x2e04, .value=0x90}, {.addr=0x2e05, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0x2e04, .value=0x90, .type=IO_READ},
        {.addr=0x2e05, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_011E) {
    const struct CPU_State initial_cpu = {.pc=0x6061, .a=0xdb, .x=0xb9, .y=0x9f, .sp=0xc5, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x6061, .value=0x90}, {.addr=0x6062, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x5fe6, .a=0xdb, .x=0xb9, .y=0x9f, .sp=0xc5, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x6061, .value=0x90}, {.addr=0x6062, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x6061, .value=0x90, .type=IO_READ},
        {.addr=0x6062, .value=0x83, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_011F) {
    const struct CPU_State initial_cpu = {.pc=0x6ade, .a=0xc8, .x=0xa1, .y=0x2c, .sp=0xbf, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x6ade, .value=0x90}, {.addr=0x6adf, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0x6ae0, .a=0xc8, .x=0xa1, .y=0x2c, .sp=0xbf, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x6ade, .value=0x90}, {.addr=0x6adf, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0x6ade, .value=0x90, .type=IO_READ},
        {.addr=0x6adf, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0120) {
    const struct CPU_State initial_cpu = {.pc=0x5f6a, .a=0xbb, .x=0xe5, .y=0xc0, .sp=0x04, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x5f6a, .value=0x90}, {.addr=0x5f6b, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0x5fa1, .a=0xbb, .x=0xe5, .y=0xc0, .sp=0x04, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x5f6a, .value=0x90}, {.addr=0x5f6b, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0x5f6a, .value=0x90, .type=IO_READ},
        {.addr=0x5f6b, .value=0x35, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0121) {
    const struct CPU_State initial_cpu = {.pc=0xcc9c, .a=0x17, .x=0x75, .y=0xef, .sp=0x43, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xcc9c, .value=0x90}, {.addr=0xcc9d, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0xcc9e, .a=0x17, .x=0x75, .y=0xef, .sp=0x43, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0xcc9c, .value=0x90}, {.addr=0xcc9d, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0xcc9c, .value=0x90, .type=IO_READ},
        {.addr=0xcc9d, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0122) {
    const struct CPU_State initial_cpu = {.pc=0x4fa6, .a=0x8e, .x=0x61, .y=0x46, .sp=0x5b, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x4fa6, .value=0x90}, {.addr=0x4fa7, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0x4fca, .a=0x8e, .x=0x61, .y=0x46, .sp=0x5b, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x4fa6, .value=0x90}, {.addr=0x4fa7, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0x4fa6, .value=0x90, .type=IO_READ},
        {.addr=0x4fa7, .value=0x22, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0123) {
    const struct CPU_State initial_cpu = {.pc=0x9447, .a=0x31, .x=0xf7, .y=0xbd, .sp=0x10, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x9447, .value=0x90}, {.addr=0x9448, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0x9433, .a=0x31, .x=0xf7, .y=0xbd, .sp=0x10, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x9447, .value=0x90}, {.addr=0x9448, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0x9447, .value=0x90, .type=IO_READ},
        {.addr=0x9448, .value=0xea, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0124) {
    const struct CPU_State initial_cpu = {.pc=0x5e64, .a=0x66, .x=0x6e, .y=0x74, .sp=0x3d, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x5e64, .value=0x90}, {.addr=0x5e65, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0x5e41, .a=0x66, .x=0x6e, .y=0x74, .sp=0x3d, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x5e64, .value=0x90}, {.addr=0x5e65, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0x5e64, .value=0x90, .type=IO_READ},
        {.addr=0x5e65, .value=0xdb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0125) {
    const struct CPU_State initial_cpu = {.pc=0x5091, .a=0x4d, .x=0x4e, .y=0x9f, .sp=0xe4, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x5091, .value=0x90}, {.addr=0x5092, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x5093, .a=0x4d, .x=0x4e, .y=0x9f, .sp=0xe4, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x5091, .value=0x90}, {.addr=0x5092, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x5091, .value=0x90, .type=IO_READ},
        {.addr=0x5092, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0126) {
    const struct CPU_State initial_cpu = {.pc=0xef0c, .a=0x62, .x=0x10, .y=0x3e, .sp=0xa7, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xef0c, .value=0x90}, {.addr=0xef0d, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0xef0e, .a=0x62, .x=0x10, .y=0x3e, .sp=0xa7, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xef0c, .value=0x90}, {.addr=0xef0d, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0xef0c, .value=0x90, .type=IO_READ},
        {.addr=0xef0d, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0127) {
    const struct CPU_State initial_cpu = {.pc=0x7abb, .a=0x88, .x=0x79, .y=0xe3, .sp=0x52, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x7abb, .value=0x90}, {.addr=0x7abc, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0x7abd, .a=0x88, .x=0x79, .y=0xe3, .sp=0x52, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x7abb, .value=0x90}, {.addr=0x7abc, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0x7abb, .value=0x90, .type=IO_READ},
        {.addr=0x7abc, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0128) {
    const struct CPU_State initial_cpu = {.pc=0xc48a, .a=0xb5, .x=0xdb, .y=0xa6, .sp=0xa5, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xc48a, .value=0x90}, {.addr=0xc48b, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xc48c, .a=0xb5, .x=0xdb, .y=0xa6, .sp=0xa5, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0xc48a, .value=0x90}, {.addr=0xc48b, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xc48a, .value=0x90, .type=IO_READ},
        {.addr=0xc48b, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0129) {
    const struct CPU_State initial_cpu = {.pc=0x3e2a, .a=0x01, .x=0x44, .y=0x8d, .sp=0x85, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x3e2a, .value=0x90}, {.addr=0x3e2b, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0x3dd4, .a=0x01, .x=0x44, .y=0x8d, .sp=0x85, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x3e2a, .value=0x90}, {.addr=0x3e2b, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0x3e2a, .value=0x90, .type=IO_READ},
        {.addr=0x3e2b, .value=0xa8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_012A) {
    const struct CPU_State initial_cpu = {.pc=0x2472, .a=0x6d, .x=0x20, .y=0x69, .sp=0x5b, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x2472, .value=0x90}, {.addr=0x2473, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0x2401, .a=0x6d, .x=0x20, .y=0x69, .sp=0x5b, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x2472, .value=0x90}, {.addr=0x2473, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0x2472, .value=0x90, .type=IO_READ},
        {.addr=0x2473, .value=0x8d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_012B) {
    const struct CPU_State initial_cpu = {.pc=0x1d31, .a=0x56, .x=0x66, .y=0x28, .sp=0xee, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x1d31, .value=0x90}, {.addr=0x1d32, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0x1cd1, .a=0x56, .x=0x66, .y=0x28, .sp=0xee, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x1d31, .value=0x90}, {.addr=0x1d32, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0x1d31, .value=0x90, .type=IO_READ},
        {.addr=0x1d32, .value=0x9e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_012C) {
    const struct CPU_State initial_cpu = {.pc=0x923c, .a=0x38, .x=0xdf, .y=0xab, .sp=0x19, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x923c, .value=0x90}, {.addr=0x923d, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0x91e0, .a=0x38, .x=0xdf, .y=0xab, .sp=0x19, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x923c, .value=0x90}, {.addr=0x923d, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0x923c, .value=0x90, .type=IO_READ},
        {.addr=0x923d, .value=0xa2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_012D) {
    const struct CPU_State initial_cpu = {.pc=0x09f7, .a=0xa8, .x=0x65, .y=0x4e, .sp=0xec, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x09f7, .value=0x90}, {.addr=0x09f8, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0x0a0b, .a=0xa8, .x=0x65, .y=0x4e, .sp=0xec, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x09f7, .value=0x90}, {.addr=0x09f8, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0x09f7, .value=0x90, .type=IO_READ},
        {.addr=0x09f8, .value=0x12, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_012E) {
    const struct CPU_State initial_cpu = {.pc=0x2f94, .a=0x85, .x=0x53, .y=0x99, .sp=0x5b, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x2f94, .value=0x90}, {.addr=0x2f95, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0x2f96, .a=0x85, .x=0x53, .y=0x99, .sp=0x5b, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x2f94, .value=0x90}, {.addr=0x2f95, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0x2f94, .value=0x90, .type=IO_READ},
        {.addr=0x2f95, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_012F) {
    const struct CPU_State initial_cpu = {.pc=0x2d85, .a=0x0b, .x=0x9e, .y=0xa3, .sp=0x6a, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x2d85, .value=0x90}, {.addr=0x2d86, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x2d21, .a=0x0b, .x=0x9e, .y=0xa3, .sp=0x6a, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x2d85, .value=0x90}, {.addr=0x2d86, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x2d85, .value=0x90, .type=IO_READ},
        {.addr=0x2d86, .value=0x9a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0130) {
    const struct CPU_State initial_cpu = {.pc=0xa647, .a=0xf2, .x=0x8b, .y=0x60, .sp=0x93, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xa647, .value=0x90}, {.addr=0xa648, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0xa5ed, .a=0xf2, .x=0x8b, .y=0x60, .sp=0x93, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xa647, .value=0x90}, {.addr=0xa648, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0xa647, .value=0x90, .type=IO_READ},
        {.addr=0xa648, .value=0xa4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0131) {
    const struct CPU_State initial_cpu = {.pc=0xb981, .a=0x66, .x=0x1d, .y=0xc7, .sp=0x46, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xb981, .value=0x90}, {.addr=0xb982, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0xb983, .a=0x66, .x=0x1d, .y=0xc7, .sp=0x46, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xb981, .value=0x90}, {.addr=0xb982, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0xb981, .value=0x90, .type=IO_READ},
        {.addr=0xb982, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0132) {
    const struct CPU_State initial_cpu = {.pc=0x982d, .a=0xf7, .x=0x72, .y=0x6f, .sp=0x49, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x982d, .value=0x90}, {.addr=0x982e, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0x9863, .a=0xf7, .x=0x72, .y=0x6f, .sp=0x49, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x982d, .value=0x90}, {.addr=0x982e, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0x982d, .value=0x90, .type=IO_READ},
        {.addr=0x982e, .value=0x34, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0133) {
    const struct CPU_State initial_cpu = {.pc=0x3aae, .a=0x2f, .x=0x09, .y=0x0c, .sp=0x64, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x3aae, .value=0x90}, {.addr=0x3aaf, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0x3ab0, .a=0x2f, .x=0x09, .y=0x0c, .sp=0x64, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x3aae, .value=0x90}, {.addr=0x3aaf, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0x3aae, .value=0x90, .type=IO_READ},
        {.addr=0x3aaf, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0134) {
    const struct CPU_State initial_cpu = {.pc=0x41aa, .a=0x8a, .x=0x1a, .y=0xef, .sp=0x2d, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x41aa, .value=0x90}, {.addr=0x41ab, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x41ac, .a=0x8a, .x=0x1a, .y=0xef, .sp=0x2d, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x41aa, .value=0x90}, {.addr=0x41ab, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x41aa, .value=0x90, .type=IO_READ},
        {.addr=0x41ab, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0135) {
    const struct CPU_State initial_cpu = {.pc=0x891d, .a=0x25, .x=0xff, .y=0xbb, .sp=0x4d, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x891d, .value=0x90}, {.addr=0x891e, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0x8959, .a=0x25, .x=0xff, .y=0xbb, .sp=0x4d, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x891d, .value=0x90}, {.addr=0x891e, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0x891d, .value=0x90, .type=IO_READ},
        {.addr=0x891e, .value=0x3a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0136) {
    const struct CPU_State initial_cpu = {.pc=0x4c79, .a=0xad, .x=0x9d, .y=0xfb, .sp=0x71, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x4c79, .value=0x90}, {.addr=0x4c7a, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0x4c87, .a=0xad, .x=0x9d, .y=0xfb, .sp=0x71, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x4c79, .value=0x90}, {.addr=0x4c7a, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0x4c79, .value=0x90, .type=IO_READ},
        {.addr=0x4c7a, .value=0x0c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0137) {
    const struct CPU_State initial_cpu = {.pc=0xabe1, .a=0x9f, .x=0x3b, .y=0xeb, .sp=0x0b, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xabe1, .value=0x90}, {.addr=0xabe2, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0xabe3, .a=0x9f, .x=0x3b, .y=0xeb, .sp=0x0b, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0xabe1, .value=0x90}, {.addr=0xabe2, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0xabe1, .value=0x90, .type=IO_READ},
        {.addr=0xabe2, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0138) {
    const struct CPU_State initial_cpu = {.pc=0x5a9c, .a=0xe6, .x=0xca, .y=0xb9, .sp=0xe5, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x5a9c, .value=0x90}, {.addr=0x5a9d, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0x5ad2, .a=0xe6, .x=0xca, .y=0xb9, .sp=0xe5, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x5a9c, .value=0x90}, {.addr=0x5a9d, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0x5a9c, .value=0x90, .type=IO_READ},
        {.addr=0x5a9d, .value=0x34, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0139) {
    const struct CPU_State initial_cpu = {.pc=0x7a73, .a=0x9e, .x=0x7f, .y=0x75, .sp=0xb9, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x7a73, .value=0x90}, {.addr=0x7a74, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0x7a9a, .a=0x9e, .x=0x7f, .y=0x75, .sp=0xb9, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x7a73, .value=0x90}, {.addr=0x7a74, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0x7a73, .value=0x90, .type=IO_READ},
        {.addr=0x7a74, .value=0x25, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_013A) {
    const struct CPU_State initial_cpu = {.pc=0xca78, .a=0x60, .x=0x5f, .y=0x37, .sp=0x62, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xca78, .value=0x90}, {.addr=0xca79, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0xca9d, .a=0x60, .x=0x5f, .y=0x37, .sp=0x62, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0xca78, .value=0x90}, {.addr=0xca79, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0xca78, .value=0x90, .type=IO_READ},
        {.addr=0xca79, .value=0x23, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_013B) {
    const struct CPU_State initial_cpu = {.pc=0x50e6, .a=0xd9, .x=0xc0, .y=0x6f, .sp=0x6c, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x50e6, .value=0x90}, {.addr=0x50e7, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x50e8, .a=0xd9, .x=0xc0, .y=0x6f, .sp=0x6c, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x50e6, .value=0x90}, {.addr=0x50e7, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x50e6, .value=0x90, .type=IO_READ},
        {.addr=0x50e7, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_013C) {
    const struct CPU_State initial_cpu = {.pc=0x0cab, .a=0x08, .x=0xfa, .y=0x35, .sp=0x9b, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x0cab, .value=0x90}, {.addr=0x0cac, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0x0cbb, .a=0x08, .x=0xfa, .y=0x35, .sp=0x9b, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x0cab, .value=0x90}, {.addr=0x0cac, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0x0cab, .value=0x90, .type=IO_READ},
        {.addr=0x0cac, .value=0x0e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_013D) {
    const struct CPU_State initial_cpu = {.pc=0x2caf, .a=0xc1, .x=0xa1, .y=0x17, .sp=0xf8, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x2caf, .value=0x90}, {.addr=0x2cb0, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0x2cb1, .a=0xc1, .x=0xa1, .y=0x17, .sp=0xf8, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x2caf, .value=0x90}, {.addr=0x2cb0, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0x2caf, .value=0x90, .type=IO_READ},
        {.addr=0x2cb0, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_013E) {
    const struct CPU_State initial_cpu = {.pc=0x819c, .a=0x7a, .x=0x80, .y=0xa4, .sp=0x6b, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x819c, .value=0x90}, {.addr=0x819d, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0x8173, .a=0x7a, .x=0x80, .y=0xa4, .sp=0x6b, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x819c, .value=0x90}, {.addr=0x819d, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0x819c, .value=0x90, .type=IO_READ},
        {.addr=0x819d, .value=0xd5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_013F) {
    const struct CPU_State initial_cpu = {.pc=0xa512, .a=0xca, .x=0xb0, .y=0xa7, .sp=0x25, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xa512, .value=0x90}, {.addr=0xa513, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0xa4cd, .a=0xca, .x=0xb0, .y=0xa7, .sp=0x25, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xa512, .value=0x90}, {.addr=0xa513, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0xa512, .value=0x90, .type=IO_READ},
        {.addr=0xa513, .value=0xb9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0140) {
    const struct CPU_State initial_cpu = {.pc=0x25a3, .a=0x51, .x=0xe8, .y=0x5a, .sp=0xe5, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x25a3, .value=0x90}, {.addr=0x25a4, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0x25d6, .a=0x51, .x=0xe8, .y=0x5a, .sp=0xe5, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x25a3, .value=0x90}, {.addr=0x25a4, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0x25a3, .value=0x90, .type=IO_READ},
        {.addr=0x25a4, .value=0x31, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0141) {
    const struct CPU_State initial_cpu = {.pc=0x9d11, .a=0xfb, .x=0x99, .y=0x03, .sp=0x54, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x9d11, .value=0x90}, {.addr=0x9d12, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0x9d13, .a=0xfb, .x=0x99, .y=0x03, .sp=0x54, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x9d11, .value=0x90}, {.addr=0x9d12, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0x9d11, .value=0x90, .type=IO_READ},
        {.addr=0x9d12, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0142) {
    const struct CPU_State initial_cpu = {.pc=0x3fe4, .a=0x44, .x=0xdc, .y=0x30, .sp=0x0c, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x3fe4, .value=0x90}, {.addr=0x3fe5, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0x3fe6, .a=0x44, .x=0xdc, .y=0x30, .sp=0x0c, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x3fe4, .value=0x90}, {.addr=0x3fe5, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0x3fe4, .value=0x90, .type=IO_READ},
        {.addr=0x3fe5, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0143) {
    const struct CPU_State initial_cpu = {.pc=0xea4e, .a=0x1d, .x=0xfc, .y=0x33, .sp=0xe1, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xea4e, .value=0x90}, {.addr=0xea4f, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0xeabb, .a=0x1d, .x=0xfc, .y=0x33, .sp=0xe1, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0xea4e, .value=0x90}, {.addr=0xea4f, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0xea4e, .value=0x90, .type=IO_READ},
        {.addr=0xea4f, .value=0x6b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0144) {
    const struct CPU_State initial_cpu = {.pc=0x5f2d, .a=0x02, .x=0xfc, .y=0xef, .sp=0x6c, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x5f2d, .value=0x90}, {.addr=0x5f2e, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x5f2f, .a=0x02, .x=0xfc, .y=0xef, .sp=0x6c, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x5f2d, .value=0x90}, {.addr=0x5f2e, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x5f2d, .value=0x90, .type=IO_READ},
        {.addr=0x5f2e, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0145) {
    const struct CPU_State initial_cpu = {.pc=0x5e9c, .a=0xfb, .x=0x61, .y=0x76, .sp=0xe1, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x5e9c, .value=0x90}, {.addr=0x5e9d, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0x5e48, .a=0xfb, .x=0x61, .y=0x76, .sp=0xe1, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x5e9c, .value=0x90}, {.addr=0x5e9d, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0x5e9c, .value=0x90, .type=IO_READ},
        {.addr=0x5e9d, .value=0xaa, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0146) {
    const struct CPU_State initial_cpu = {.pc=0x87da, .a=0x63, .x=0x39, .y=0xe8, .sp=0x51, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x87da, .value=0x90}, {.addr=0x87db, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x87dc, .a=0x63, .x=0x39, .y=0xe8, .sp=0x51, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x87da, .value=0x90}, {.addr=0x87db, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x87da, .value=0x90, .type=IO_READ},
        {.addr=0x87db, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0147) {
    const struct CPU_State initial_cpu = {.pc=0xa9e2, .a=0xa6, .x=0xb6, .y=0x8f, .sp=0x6b, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xa9e2, .value=0x90}, {.addr=0xa9e3, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0xa9e4, .a=0xa6, .x=0xb6, .y=0x8f, .sp=0x6b, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0xa9e2, .value=0x90}, {.addr=0xa9e3, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0xa9e2, .value=0x90, .type=IO_READ},
        {.addr=0xa9e3, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0148) {
    const struct CPU_State initial_cpu = {.pc=0xf168, .a=0x07, .x=0x6a, .y=0x62, .sp=0x4f, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xf168, .value=0x90}, {.addr=0xf169, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0xf15c, .a=0x07, .x=0x6a, .y=0x62, .sp=0x4f, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0xf168, .value=0x90}, {.addr=0xf169, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0xf168, .value=0x90, .type=IO_READ},
        {.addr=0xf169, .value=0xf2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0149) {
    const struct CPU_State initial_cpu = {.pc=0x5bf8, .a=0xe5, .x=0xa3, .y=0xdf, .sp=0xe0, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x5bf8, .value=0x90}, {.addr=0x5bf9, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0x5bcd, .a=0xe5, .x=0xa3, .y=0xdf, .sp=0xe0, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x5bf8, .value=0x90}, {.addr=0x5bf9, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0x5bf8, .value=0x90, .type=IO_READ},
        {.addr=0x5bf9, .value=0xd3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_014A) {
    const struct CPU_State initial_cpu = {.pc=0x7425, .a=0x14, .x=0x56, .y=0x26, .sp=0x87, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x7425, .value=0x90}, {.addr=0x7426, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0x7427, .a=0x14, .x=0x56, .y=0x26, .sp=0x87, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x7425, .value=0x90}, {.addr=0x7426, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0x7425, .value=0x90, .type=IO_READ},
        {.addr=0x7426, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_014B) {
    const struct CPU_State initial_cpu = {.pc=0xeb41, .a=0x67, .x=0x2a, .y=0x21, .sp=0x1d, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xeb41, .value=0x90}, {.addr=0xeb42, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0xeb43, .a=0x67, .x=0x2a, .y=0x21, .sp=0x1d, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xeb41, .value=0x90}, {.addr=0xeb42, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0xeb41, .value=0x90, .type=IO_READ},
        {.addr=0xeb42, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_014C) {
    const struct CPU_State initial_cpu = {.pc=0xa0fe, .a=0x12, .x=0xce, .y=0x64, .sp=0x03, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xa0fe, .value=0x90}, {.addr=0xa0ff, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xa086, .a=0x12, .x=0xce, .y=0x64, .sp=0x03, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xa0fe, .value=0x90}, {.addr=0xa0ff, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xa0fe, .value=0x90, .type=IO_READ},
        {.addr=0xa0ff, .value=0x86, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_014D) {
    const struct CPU_State initial_cpu = {.pc=0x73d8, .a=0x78, .x=0xce, .y=0x44, .sp=0xba, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x73d8, .value=0x90}, {.addr=0x73d9, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0x73da, .a=0x78, .x=0xce, .y=0x44, .sp=0xba, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x73d8, .value=0x90}, {.addr=0x73d9, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0x73d8, .value=0x90, .type=IO_READ},
        {.addr=0x73d9, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_014E) {
    const struct CPU_State initial_cpu = {.pc=0x5682, .a=0x53, .x=0xe0, .y=0x58, .sp=0x97, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x5682, .value=0x90}, {.addr=0x5683, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x5607, .a=0x53, .x=0xe0, .y=0x58, .sp=0x97, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x5682, .value=0x90}, {.addr=0x5683, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x5682, .value=0x90, .type=IO_READ},
        {.addr=0x5683, .value=0x83, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_014F) {
    const struct CPU_State initial_cpu = {.pc=0xbfc0, .a=0x86, .x=0x3c, .y=0x2d, .sp=0xe1, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xbfc0, .value=0x90}, {.addr=0xbfc1, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0xbf87, .a=0x86, .x=0x3c, .y=0x2d, .sp=0xe1, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0xbfc0, .value=0x90}, {.addr=0xbfc1, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0xbfc0, .value=0x90, .type=IO_READ},
        {.addr=0xbfc1, .value=0xc5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0150) {
    const struct CPU_State initial_cpu = {.pc=0x20a0, .a=0xd1, .x=0x8a, .y=0x38, .sp=0x1b, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x20a0, .value=0x90}, {.addr=0x20a1, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0x2080, .a=0xd1, .x=0x8a, .y=0x38, .sp=0x1b, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x20a0, .value=0x90}, {.addr=0x20a1, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0x20a0, .value=0x90, .type=IO_READ},
        {.addr=0x20a1, .value=0xde, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0151) {
    const struct CPU_State initial_cpu = {.pc=0xfefa, .a=0x88, .x=0xb3, .y=0x67, .sp=0x9e, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0xfefa, .value=0x90}, {.addr=0xfefb, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0xff76, .a=0x88, .x=0xb3, .y=0x67, .sp=0x9e, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0xfefa, .value=0x90}, {.addr=0xfefb, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0xfefa, .value=0x90, .type=IO_READ},
        {.addr=0xfefb, .value=0x7a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0152) {
    const struct CPU_State initial_cpu = {.pc=0xa3f3, .a=0x5a, .x=0x68, .y=0xf4, .sp=0x4f, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0xa3f3, .value=0x90}, {.addr=0xa3f4, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0xa3f5, .a=0x5a, .x=0x68, .y=0xf4, .sp=0x4f, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0xa3f3, .value=0x90}, {.addr=0xa3f4, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0xa3f3, .value=0x90, .type=IO_READ},
        {.addr=0xa3f4, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0153) {
    const struct CPU_State initial_cpu = {.pc=0x9a14, .a=0xe1, .x=0x1b, .y=0xba, .sp=0xdd, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x9a14, .value=0x90}, {.addr=0x9a15, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0x99f4, .a=0xe1, .x=0x1b, .y=0xba, .sp=0xdd, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x9a14, .value=0x90}, {.addr=0x9a15, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0x9a14, .value=0x90, .type=IO_READ},
        {.addr=0x9a15, .value=0xde, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0154) {
    const struct CPU_State initial_cpu = {.pc=0x0406, .a=0x23, .x=0x0f, .y=0x94, .sp=0x18, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x0406, .value=0x90}, {.addr=0x0407, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x03f9, .a=0x23, .x=0x0f, .y=0x94, .sp=0x18, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x0406, .value=0x90}, {.addr=0x0407, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x0406, .value=0x90, .type=IO_READ},
        {.addr=0x0407, .value=0xf1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0155) {
    const struct CPU_State initial_cpu = {.pc=0xd849, .a=0xd6, .x=0x9a, .y=0xaa, .sp=0x4a, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xd849, .value=0x90}, {.addr=0xd84a, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0xd8b4, .a=0xd6, .x=0x9a, .y=0xaa, .sp=0x4a, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0xd849, .value=0x90}, {.addr=0xd84a, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0xd849, .value=0x90, .type=IO_READ},
        {.addr=0xd84a, .value=0x69, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0156) {
    const struct CPU_State initial_cpu = {.pc=0x3049, .a=0x16, .x=0x0a, .y=0xd6, .sp=0xa3, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x3049, .value=0x90}, {.addr=0x304a, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0x3034, .a=0x16, .x=0x0a, .y=0xd6, .sp=0xa3, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x3049, .value=0x90}, {.addr=0x304a, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0x3049, .value=0x90, .type=IO_READ},
        {.addr=0x304a, .value=0xe9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0157) {
    const struct CPU_State initial_cpu = {.pc=0xe7a9, .a=0x55, .x=0xb9, .y=0x0e, .sp=0xba, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xe7a9, .value=0x90}, {.addr=0xe7aa, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0xe79c, .a=0x55, .x=0xb9, .y=0x0e, .sp=0xba, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0xe7a9, .value=0x90}, {.addr=0xe7aa, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0xe7a9, .value=0x90, .type=IO_READ},
        {.addr=0xe7aa, .value=0xf1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0158) {
    const struct CPU_State initial_cpu = {.pc=0x1647, .a=0x0e, .x=0xc5, .y=0xdf, .sp=0xb9, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x1647, .value=0x90}, {.addr=0x1648, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x1649, .a=0x0e, .x=0xc5, .y=0xdf, .sp=0xb9, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x1647, .value=0x90}, {.addr=0x1648, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x1647, .value=0x90, .type=IO_READ},
        {.addr=0x1648, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0159) {
    const struct CPU_State initial_cpu = {.pc=0x0456, .a=0x49, .x=0x98, .y=0x48, .sp=0xe4, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x0456, .value=0x90}, {.addr=0x0457, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x0458, .a=0x49, .x=0x98, .y=0x48, .sp=0xe4, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x0456, .value=0x90}, {.addr=0x0457, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x0456, .value=0x90, .type=IO_READ},
        {.addr=0x0457, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_015A) {
    const struct CPU_State initial_cpu = {.pc=0x6f76, .a=0x1c, .x=0x57, .y=0x15, .sp=0x18, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x6f76, .value=0x90}, {.addr=0x6f77, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0x6f78, .a=0x1c, .x=0x57, .y=0x15, .sp=0x18, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x6f76, .value=0x90}, {.addr=0x6f77, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0x6f76, .value=0x90, .type=IO_READ},
        {.addr=0x6f77, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_015B) {
    const struct CPU_State initial_cpu = {.pc=0x802a, .a=0xf1, .x=0xcb, .y=0x72, .sp=0xc6, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x802a, .value=0x90}, {.addr=0x802b, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0x802c, .a=0xf1, .x=0xcb, .y=0x72, .sp=0xc6, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x802a, .value=0x90}, {.addr=0x802b, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0x802a, .value=0x90, .type=IO_READ},
        {.addr=0x802b, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_015C) {
    const struct CPU_State initial_cpu = {.pc=0x07f7, .a=0xec, .x=0x46, .y=0x42, .sp=0xaa, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x07f7, .value=0x90}, {.addr=0x07f8, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0x081c, .a=0xec, .x=0x46, .y=0x42, .sp=0xaa, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x07f7, .value=0x90}, {.addr=0x07f8, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0x07f7, .value=0x90, .type=IO_READ},
        {.addr=0x07f8, .value=0x23, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_015D) {
    const struct CPU_State initial_cpu = {.pc=0xe59f, .a=0x81, .x=0x71, .y=0x8d, .sp=0xa4, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xe59f, .value=0x90}, {.addr=0xe5a0, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xe550, .a=0x81, .x=0x71, .y=0x8d, .sp=0xa4, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xe59f, .value=0x90}, {.addr=0xe5a0, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xe59f, .value=0x90, .type=IO_READ},
        {.addr=0xe5a0, .value=0xaf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_015E) {
    const struct CPU_State initial_cpu = {.pc=0xff2b, .a=0x67, .x=0xd2, .y=0x1d, .sp=0xba, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xff2b, .value=0x90}, {.addr=0xff2c, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xff2d, .a=0x67, .x=0xd2, .y=0x1d, .sp=0xba, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xff2b, .value=0x90}, {.addr=0xff2c, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xff2b, .value=0x90, .type=IO_READ},
        {.addr=0xff2c, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_015F) {
    const struct CPU_State initial_cpu = {.pc=0xc6f5, .a=0x5b, .x=0xae, .y=0x35, .sp=0x55, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xc6f5, .value=0x90}, {.addr=0xc6f6, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0xc6f7, .a=0x5b, .x=0xae, .y=0x35, .sp=0x55, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xc6f5, .value=0x90}, {.addr=0xc6f6, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0xc6f5, .value=0x90, .type=IO_READ},
        {.addr=0xc6f6, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0160) {
    const struct CPU_State initial_cpu = {.pc=0x563c, .a=0x96, .x=0x25, .y=0xe3, .sp=0xec, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x563c, .value=0x90}, {.addr=0x563d, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0x55dc, .a=0x96, .x=0x25, .y=0xe3, .sp=0xec, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x563c, .value=0x90}, {.addr=0x563d, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0x563c, .value=0x90, .type=IO_READ},
        {.addr=0x563d, .value=0x9e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0161) {
    const struct CPU_State initial_cpu = {.pc=0x5708, .a=0x59, .x=0x7b, .y=0x45, .sp=0xd4, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x5708, .value=0x90}, {.addr=0x5709, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x5753, .a=0x59, .x=0x7b, .y=0x45, .sp=0xd4, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x5708, .value=0x90}, {.addr=0x5709, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x5708, .value=0x90, .type=IO_READ},
        {.addr=0x5709, .value=0x49, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0162) {
    const struct CPU_State initial_cpu = {.pc=0xbe6c, .a=0xfd, .x=0x81, .y=0xd6, .sp=0x92, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xbe6c, .value=0x90}, {.addr=0xbe6d, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0xbe6e, .a=0xfd, .x=0x81, .y=0xd6, .sp=0x92, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0xbe6c, .value=0x90}, {.addr=0xbe6d, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0xbe6c, .value=0x90, .type=IO_READ},
        {.addr=0xbe6d, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0163) {
    const struct CPU_State initial_cpu = {.pc=0xd10e, .a=0x6b, .x=0x51, .y=0x84, .sp=0x96, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xd10e, .value=0x90}, {.addr=0xd10f, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0xd110, .a=0x6b, .x=0x51, .y=0x84, .sp=0x96, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0xd10e, .value=0x90}, {.addr=0xd10f, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0xd10e, .value=0x90, .type=IO_READ},
        {.addr=0xd10f, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0164) {
    const struct CPU_State initial_cpu = {.pc=0xfca0, .a=0xdb, .x=0x6e, .y=0xcd, .sp=0x9a, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xfca0, .value=0x90}, {.addr=0xfca1, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0xfca2, .a=0xdb, .x=0x6e, .y=0xcd, .sp=0x9a, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xfca0, .value=0x90}, {.addr=0xfca1, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0xfca0, .value=0x90, .type=IO_READ},
        {.addr=0xfca1, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0165) {
    const struct CPU_State initial_cpu = {.pc=0x08bf, .a=0xd6, .x=0x09, .y=0xb8, .sp=0xc5, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x08bf, .value=0x90}, {.addr=0x08c0, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x08c1, .a=0xd6, .x=0x09, .y=0xb8, .sp=0xc5, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x08bf, .value=0x90}, {.addr=0x08c0, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x08bf, .value=0x90, .type=IO_READ},
        {.addr=0x08c0, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0166) {
    const struct CPU_State initial_cpu = {.pc=0x2f0e, .a=0x1c, .x=0x74, .y=0xb3, .sp=0x04, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x2f0e, .value=0x90}, {.addr=0x2f0f, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0x2f10, .a=0x1c, .x=0x74, .y=0xb3, .sp=0x04, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x2f0e, .value=0x90}, {.addr=0x2f0f, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0x2f0e, .value=0x90, .type=IO_READ},
        {.addr=0x2f0f, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0167) {
    const struct CPU_State initial_cpu = {.pc=0x80e1, .a=0x6d, .x=0x7a, .y=0x7a, .sp=0x02, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x80e1, .value=0x90}, {.addr=0x80e2, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0x8111, .a=0x6d, .x=0x7a, .y=0x7a, .sp=0x02, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x80e1, .value=0x90}, {.addr=0x80e2, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0x80e1, .value=0x90, .type=IO_READ},
        {.addr=0x80e2, .value=0x2e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0168) {
    const struct CPU_State initial_cpu = {.pc=0x0c72, .a=0x7a, .x=0x99, .y=0x19, .sp=0x53, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x0c72, .value=0x90}, {.addr=0x0c73, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0x0c00, .a=0x7a, .x=0x99, .y=0x19, .sp=0x53, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x0c72, .value=0x90}, {.addr=0x0c73, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0x0c72, .value=0x90, .type=IO_READ},
        {.addr=0x0c73, .value=0x8c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0169) {
    const struct CPU_State initial_cpu = {.pc=0x29ce, .a=0x58, .x=0x90, .y=0xa2, .sp=0x99, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x29ce, .value=0x90}, {.addr=0x29cf, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0x29d0, .a=0x58, .x=0x90, .y=0xa2, .sp=0x99, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x29ce, .value=0x90}, {.addr=0x29cf, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0x29ce, .value=0x90, .type=IO_READ},
        {.addr=0x29cf, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_016A) {
    const struct CPU_State initial_cpu = {.pc=0xb4d1, .a=0x43, .x=0xff, .y=0x50, .sp=0x39, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xb4d1, .value=0x90}, {.addr=0xb4d2, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0xb54c, .a=0x43, .x=0xff, .y=0x50, .sp=0x39, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xb4d1, .value=0x90}, {.addr=0xb4d2, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0xb4d1, .value=0x90, .type=IO_READ},
        {.addr=0xb4d2, .value=0x79, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_016B) {
    const struct CPU_State initial_cpu = {.pc=0xb359, .a=0xcd, .x=0x58, .y=0xd1, .sp=0x1a, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xb359, .value=0x90}, {.addr=0xb35a, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0xb35b, .a=0xcd, .x=0x58, .y=0xd1, .sp=0x1a, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0xb359, .value=0x90}, {.addr=0xb35a, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0xb359, .value=0x90, .type=IO_READ},
        {.addr=0xb35a, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_016C) {
    const struct CPU_State initial_cpu = {.pc=0xd219, .a=0x14, .x=0x83, .y=0x15, .sp=0xa6, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xd219, .value=0x90}, {.addr=0xd21a, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0xd21b, .a=0x14, .x=0x83, .y=0x15, .sp=0xa6, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0xd219, .value=0x90}, {.addr=0xd21a, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0xd219, .value=0x90, .type=IO_READ},
        {.addr=0xd21a, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_016D) {
    const struct CPU_State initial_cpu = {.pc=0xa1de, .a=0x7a, .x=0xb6, .y=0xf9, .sp=0xbe, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xa1de, .value=0x90}, {.addr=0xa1df, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0xa197, .a=0x7a, .x=0xb6, .y=0xf9, .sp=0xbe, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0xa1de, .value=0x90}, {.addr=0xa1df, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0xa1de, .value=0x90, .type=IO_READ},
        {.addr=0xa1df, .value=0xb7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_016E) {
    const struct CPU_State initial_cpu = {.pc=0x0c84, .a=0x6d, .x=0x4f, .y=0x59, .sp=0x9b, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x0c84, .value=0x90}, {.addr=0x0c85, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0x0c86, .a=0x6d, .x=0x4f, .y=0x59, .sp=0x9b, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0c84, .value=0x90}, {.addr=0x0c85, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0x0c84, .value=0x90, .type=IO_READ},
        {.addr=0x0c85, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_016F) {
    const struct CPU_State initial_cpu = {.pc=0xaad7, .a=0x25, .x=0x3b, .y=0x8a, .sp=0x4a, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xaad7, .value=0x90}, {.addr=0xaad8, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xab56, .a=0x25, .x=0x3b, .y=0x8a, .sp=0x4a, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0xaad7, .value=0x90}, {.addr=0xaad8, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xaad7, .value=0x90, .type=IO_READ},
        {.addr=0xaad8, .value=0x7d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0170) {
    const struct CPU_State initial_cpu = {.pc=0x40fb, .a=0x16, .x=0xb0, .y=0x7b, .sp=0xf9, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x40fb, .value=0x90}, {.addr=0x40fc, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0x414f, .a=0x16, .x=0xb0, .y=0x7b, .sp=0xf9, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x40fb, .value=0x90}, {.addr=0x40fc, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0x40fb, .value=0x90, .type=IO_READ},
        {.addr=0x40fc, .value=0x52, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0171) {
    const struct CPU_State initial_cpu = {.pc=0x8692, .a=0xdf, .x=0x08, .y=0xd5, .sp=0xa0, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x8692, .value=0x90}, {.addr=0x8693, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0x8694, .a=0xdf, .x=0x08, .y=0xd5, .sp=0xa0, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x8692, .value=0x90}, {.addr=0x8693, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0x8692, .value=0x90, .type=IO_READ},
        {.addr=0x8693, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0172) {
    const struct CPU_State initial_cpu = {.pc=0x048f, .a=0xdc, .x=0x4f, .y=0xbc, .sp=0x87, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x048f, .value=0x90}, {.addr=0x0490, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0x04a8, .a=0xdc, .x=0x4f, .y=0xbc, .sp=0x87, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x048f, .value=0x90}, {.addr=0x0490, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0x048f, .value=0x90, .type=IO_READ},
        {.addr=0x0490, .value=0x17, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0173) {
    const struct CPU_State initial_cpu = {.pc=0x484d, .a=0x33, .x=0x88, .y=0x7e, .sp=0x2e, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x484d, .value=0x90}, {.addr=0x484e, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0x484f, .a=0x33, .x=0x88, .y=0x7e, .sp=0x2e, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x484d, .value=0x90}, {.addr=0x484e, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0x484d, .value=0x90, .type=IO_READ},
        {.addr=0x484e, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0174) {
    const struct CPU_State initial_cpu = {.pc=0x32c9, .a=0xf0, .x=0x6b, .y=0xa7, .sp=0x0f, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x32c9, .value=0x90}, {.addr=0x32ca, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x3291, .a=0xf0, .x=0x6b, .y=0xa7, .sp=0x0f, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x32c9, .value=0x90}, {.addr=0x32ca, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x32c9, .value=0x90, .type=IO_READ},
        {.addr=0x32ca, .value=0xc6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0175) {
    const struct CPU_State initial_cpu = {.pc=0x7f56, .a=0x3e, .x=0xa3, .y=0x2a, .sp=0xbc, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x7f56, .value=0x90}, {.addr=0x7f57, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0x7f58, .a=0x3e, .x=0xa3, .y=0x2a, .sp=0xbc, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x7f56, .value=0x90}, {.addr=0x7f57, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0x7f56, .value=0x90, .type=IO_READ},
        {.addr=0x7f57, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0176) {
    const struct CPU_State initial_cpu = {.pc=0xd320, .a=0x81, .x=0xcb, .y=0xf3, .sp=0x20, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xd320, .value=0x90}, {.addr=0xd321, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0xd322, .a=0x81, .x=0xcb, .y=0xf3, .sp=0x20, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xd320, .value=0x90}, {.addr=0xd321, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0xd320, .value=0x90, .type=IO_READ},
        {.addr=0xd321, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0177) {
    const struct CPU_State initial_cpu = {.pc=0xb600, .a=0x43, .x=0x75, .y=0x7d, .sp=0x47, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xb600, .value=0x90}, {.addr=0xb601, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0xb60e, .a=0x43, .x=0x75, .y=0x7d, .sp=0x47, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xb600, .value=0x90}, {.addr=0xb601, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0xb600, .value=0x90, .type=IO_READ},
        {.addr=0xb601, .value=0x0c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0178) {
    const struct CPU_State initial_cpu = {.pc=0x9037, .a=0xa0, .x=0x34, .y=0xf6, .sp=0xff, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x9037, .value=0x90}, {.addr=0x9038, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0x9039, .a=0xa0, .x=0x34, .y=0xf6, .sp=0xff, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x9037, .value=0x90}, {.addr=0x9038, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0x9037, .value=0x90, .type=IO_READ},
        {.addr=0x9038, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0179) {
    const struct CPU_State initial_cpu = {.pc=0x6337, .a=0x08, .x=0x07, .y=0x76, .sp=0x97, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x6337, .value=0x90}, {.addr=0x6338, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x6386, .a=0x08, .x=0x07, .y=0x76, .sp=0x97, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x6337, .value=0x90}, {.addr=0x6338, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x6337, .value=0x90, .type=IO_READ},
        {.addr=0x6338, .value=0x4d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_017A) {
    const struct CPU_State initial_cpu = {.pc=0x402e, .a=0x55, .x=0xa3, .y=0xd1, .sp=0xa5, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x402e, .value=0x90}, {.addr=0x402f, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0x3fd4, .a=0x55, .x=0xa3, .y=0xd1, .sp=0xa5, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x402e, .value=0x90}, {.addr=0x402f, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0x402e, .value=0x90, .type=IO_READ},
        {.addr=0x402f, .value=0xa4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_017B) {
    const struct CPU_State initial_cpu = {.pc=0x7fa4, .a=0xcd, .x=0xfc, .y=0x56, .sp=0x46, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x7fa4, .value=0x90}, {.addr=0x7fa5, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0x7fa6, .a=0xcd, .x=0xfc, .y=0x56, .sp=0x46, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x7fa4, .value=0x90}, {.addr=0x7fa5, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0x7fa4, .value=0x90, .type=IO_READ},
        {.addr=0x7fa5, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_017C) {
    const struct CPU_State initial_cpu = {.pc=0x76cc, .a=0x7b, .x=0x8a, .y=0xd6, .sp=0x7d, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x76cc, .value=0x90}, {.addr=0x76cd, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0x7708, .a=0x7b, .x=0x8a, .y=0xd6, .sp=0x7d, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x76cc, .value=0x90}, {.addr=0x76cd, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0x76cc, .value=0x90, .type=IO_READ},
        {.addr=0x76cd, .value=0x3a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_017D) {
    const struct CPU_State initial_cpu = {.pc=0x9357, .a=0x69, .x=0x1a, .y=0x98, .sp=0x91, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x9357, .value=0x90}, {.addr=0x9358, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0x9380, .a=0x69, .x=0x1a, .y=0x98, .sp=0x91, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x9357, .value=0x90}, {.addr=0x9358, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0x9357, .value=0x90, .type=IO_READ},
        {.addr=0x9358, .value=0x27, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_017E) {
    const struct CPU_State initial_cpu = {.pc=0x655e, .a=0x5c, .x=0xc2, .y=0xbb, .sp=0xbf, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x655e, .value=0x90}, {.addr=0x655f, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x6560, .a=0x5c, .x=0xc2, .y=0xbb, .sp=0xbf, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x655e, .value=0x90}, {.addr=0x655f, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x655e, .value=0x90, .type=IO_READ},
        {.addr=0x655f, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_017F) {
    const struct CPU_State initial_cpu = {.pc=0x3ad5, .a=0x12, .x=0x63, .y=0xc7, .sp=0x83, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x3ad5, .value=0x90}, {.addr=0x3ad6, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x3ad7, .a=0x12, .x=0x63, .y=0xc7, .sp=0x83, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x3ad5, .value=0x90}, {.addr=0x3ad6, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x3ad5, .value=0x90, .type=IO_READ},
        {.addr=0x3ad6, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0180) {
    const struct CPU_State initial_cpu = {.pc=0x7e12, .a=0x7b, .x=0xd2, .y=0x98, .sp=0xcd, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x7e12, .value=0x90}, {.addr=0x7e13, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x7e14, .a=0x7b, .x=0xd2, .y=0x98, .sp=0xcd, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x7e12, .value=0x90}, {.addr=0x7e13, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x7e12, .value=0x90, .type=IO_READ},
        {.addr=0x7e13, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0181) {
    const struct CPU_State initial_cpu = {.pc=0x599f, .a=0xc6, .x=0x00, .y=0x78, .sp=0x98, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x599f, .value=0x90}, {.addr=0x59a0, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0x59a1, .a=0xc6, .x=0x00, .y=0x78, .sp=0x98, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x599f, .value=0x90}, {.addr=0x59a0, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0x599f, .value=0x90, .type=IO_READ},
        {.addr=0x59a0, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0182) {
    const struct CPU_State initial_cpu = {.pc=0x49bc, .a=0x73, .x=0xfb, .y=0xa2, .sp=0x45, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x49bc, .value=0x90}, {.addr=0x49bd, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0x4953, .a=0x73, .x=0xfb, .y=0xa2, .sp=0x45, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x49bc, .value=0x90}, {.addr=0x49bd, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0x49bc, .value=0x90, .type=IO_READ},
        {.addr=0x49bd, .value=0x95, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0183) {
    const struct CPU_State initial_cpu = {.pc=0x3c1d, .a=0x89, .x=0x82, .y=0xb3, .sp=0x01, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x3c1d, .value=0x90}, {.addr=0x3c1e, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x3c13, .a=0x89, .x=0x82, .y=0xb3, .sp=0x01, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x3c1d, .value=0x90}, {.addr=0x3c1e, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x3c1d, .value=0x90, .type=IO_READ},
        {.addr=0x3c1e, .value=0xf4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0184) {
    const struct CPU_State initial_cpu = {.pc=0xfa4d, .a=0xb7, .x=0x79, .y=0xbe, .sp=0x3b, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xfa4d, .value=0x90}, {.addr=0xfa4e, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xfa0c, .a=0xb7, .x=0x79, .y=0xbe, .sp=0x3b, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0xfa4d, .value=0x90}, {.addr=0xfa4e, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xfa4d, .value=0x90, .type=IO_READ},
        {.addr=0xfa4e, .value=0xbd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0185) {
    const struct CPU_State initial_cpu = {.pc=0xb0b4, .a=0x0a, .x=0x04, .y=0x16, .sp=0x04, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xb0b4, .value=0x90}, {.addr=0xb0b5, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0xb0b6, .a=0x0a, .x=0x04, .y=0x16, .sp=0x04, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xb0b4, .value=0x90}, {.addr=0xb0b5, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0xb0b4, .value=0x90, .type=IO_READ},
        {.addr=0xb0b5, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0186) {
    const struct CPU_State initial_cpu = {.pc=0xf351, .a=0x8c, .x=0xd8, .y=0x03, .sp=0xd1, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xf351, .value=0x90}, {.addr=0xf352, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0xf2d8, .a=0x8c, .x=0xd8, .y=0x03, .sp=0xd1, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0xf351, .value=0x90}, {.addr=0xf352, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0xf351, .value=0x90, .type=IO_READ},
        {.addr=0xf352, .value=0x85, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0187) {
    const struct CPU_State initial_cpu = {.pc=0x9a7c, .a=0x59, .x=0x7b, .y=0xaa, .sp=0xa4, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x9a7c, .value=0x90}, {.addr=0x9a7d, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x9a1e, .a=0x59, .x=0x7b, .y=0xaa, .sp=0xa4, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x9a7c, .value=0x90}, {.addr=0x9a7d, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x9a7c, .value=0x90, .type=IO_READ},
        {.addr=0x9a7d, .value=0xa0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0188) {
    const struct CPU_State initial_cpu = {.pc=0x9560, .a=0x42, .x=0x93, .y=0xaf, .sp=0xe9, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x9560, .value=0x90}, {.addr=0x9561, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x9562, .a=0x42, .x=0x93, .y=0xaf, .sp=0xe9, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x9560, .value=0x90}, {.addr=0x9561, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x9560, .value=0x90, .type=IO_READ},
        {.addr=0x9561, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0189) {
    const struct CPU_State initial_cpu = {.pc=0x3a97, .a=0x01, .x=0x3e, .y=0x19, .sp=0x45, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x3a97, .value=0x90}, {.addr=0x3a98, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0x3b13, .a=0x01, .x=0x3e, .y=0x19, .sp=0x45, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x3a97, .value=0x90}, {.addr=0x3a98, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0x3a97, .value=0x90, .type=IO_READ},
        {.addr=0x3a98, .value=0x7a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_018A) {
    const struct CPU_State initial_cpu = {.pc=0xa877, .a=0xde, .x=0xcc, .y=0xf6, .sp=0x4e, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xa877, .value=0x90}, {.addr=0xa878, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0xa83c, .a=0xde, .x=0xcc, .y=0xf6, .sp=0x4e, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xa877, .value=0x90}, {.addr=0xa878, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0xa877, .value=0x90, .type=IO_READ},
        {.addr=0xa878, .value=0xc3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_018B) {
    const struct CPU_State initial_cpu = {.pc=0xfb67, .a=0x32, .x=0x2f, .y=0xb6, .sp=0xcf, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xfb67, .value=0x90}, {.addr=0xfb68, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xfb69, .a=0x32, .x=0x2f, .y=0xb6, .sp=0xcf, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0xfb67, .value=0x90}, {.addr=0xfb68, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xfb67, .value=0x90, .type=IO_READ},
        {.addr=0xfb68, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_018C) {
    const struct CPU_State initial_cpu = {.pc=0x5e40, .a=0xee, .x=0xd4, .y=0xd4, .sp=0x1e, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x5e40, .value=0x90}, {.addr=0x5e41, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x5e02, .a=0xee, .x=0xd4, .y=0xd4, .sp=0x1e, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x5e40, .value=0x90}, {.addr=0x5e41, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x5e40, .value=0x90, .type=IO_READ},
        {.addr=0x5e41, .value=0xc0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_018D) {
    const struct CPU_State initial_cpu = {.pc=0x1854, .a=0x2e, .x=0x94, .y=0x07, .sp=0xac, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x1854, .value=0x90}, {.addr=0x1855, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0x1856, .a=0x2e, .x=0x94, .y=0x07, .sp=0xac, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x1854, .value=0x90}, {.addr=0x1855, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0x1854, .value=0x90, .type=IO_READ},
        {.addr=0x1855, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_018E) {
    const struct CPU_State initial_cpu = {.pc=0x2093, .a=0x84, .x=0xc2, .y=0xc4, .sp=0x3c, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x2093, .value=0x90}, {.addr=0x2094, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0x20c6, .a=0x84, .x=0xc2, .y=0xc4, .sp=0x3c, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x2093, .value=0x90}, {.addr=0x2094, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0x2093, .value=0x90, .type=IO_READ},
        {.addr=0x2094, .value=0x31, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_018F) {
    const struct CPU_State initial_cpu = {.pc=0xc01f, .a=0xee, .x=0xcd, .y=0x18, .sp=0xea, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xc01f, .value=0x90}, {.addr=0xc020, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0xc021, .a=0xee, .x=0xcd, .y=0x18, .sp=0xea, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xc01f, .value=0x90}, {.addr=0xc020, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0xc01f, .value=0x90, .type=IO_READ},
        {.addr=0xc020, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0190) {
    const struct CPU_State initial_cpu = {.pc=0x3e76, .a=0xf3, .x=0x3f, .y=0x5c, .sp=0xd9, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x3e76, .value=0x90}, {.addr=0x3e77, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0x3ecb, .a=0xf3, .x=0x3f, .y=0x5c, .sp=0xd9, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x3e76, .value=0x90}, {.addr=0x3e77, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0x3e76, .value=0x90, .type=IO_READ},
        {.addr=0x3e77, .value=0x53, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0191) {
    const struct CPU_State initial_cpu = {.pc=0x5c07, .a=0xe5, .x=0x72, .y=0x10, .sp=0x6e, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x5c07, .value=0x90}, {.addr=0x5c08, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0x5c09, .a=0xe5, .x=0x72, .y=0x10, .sp=0x6e, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x5c07, .value=0x90}, {.addr=0x5c08, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0x5c07, .value=0x90, .type=IO_READ},
        {.addr=0x5c08, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0192) {
    const struct CPU_State initial_cpu = {.pc=0x2927, .a=0x8a, .x=0x7a, .y=0x59, .sp=0xc8, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x2927, .value=0x90}, {.addr=0x2928, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x2929, .a=0x8a, .x=0x7a, .y=0x59, .sp=0xc8, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x2927, .value=0x90}, {.addr=0x2928, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x2927, .value=0x90, .type=IO_READ},
        {.addr=0x2928, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0193) {
    const struct CPU_State initial_cpu = {.pc=0x81e1, .a=0x04, .x=0x12, .y=0x3c, .sp=0x83, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x81e1, .value=0x90}, {.addr=0x81e2, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0x81e3, .a=0x04, .x=0x12, .y=0x3c, .sp=0x83, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x81e1, .value=0x90}, {.addr=0x81e2, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0x81e1, .value=0x90, .type=IO_READ},
        {.addr=0x81e2, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0194) {
    const struct CPU_State initial_cpu = {.pc=0x146e, .a=0xc5, .x=0x92, .y=0x2a, .sp=0x13, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x146e, .value=0x90}, {.addr=0x146f, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x1470, .a=0xc5, .x=0x92, .y=0x2a, .sp=0x13, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x146e, .value=0x90}, {.addr=0x146f, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x146e, .value=0x90, .type=IO_READ},
        {.addr=0x146f, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0195) {
    const struct CPU_State initial_cpu = {.pc=0x6893, .a=0x46, .x=0x96, .y=0x06, .sp=0x98, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x6893, .value=0x90}, {.addr=0x6894, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x68b2, .a=0x46, .x=0x96, .y=0x06, .sp=0x98, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x6893, .value=0x90}, {.addr=0x6894, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x6893, .value=0x90, .type=IO_READ},
        {.addr=0x6894, .value=0x1d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0196) {
    const struct CPU_State initial_cpu = {.pc=0x92e1, .a=0xbd, .x=0x4b, .y=0x7e, .sp=0x0e, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x92e1, .value=0x90}, {.addr=0x92e2, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x9303, .a=0xbd, .x=0x4b, .y=0x7e, .sp=0x0e, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x92e1, .value=0x90}, {.addr=0x92e2, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x92e1, .value=0x90, .type=IO_READ},
        {.addr=0x92e2, .value=0x20, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0197) {
    const struct CPU_State initial_cpu = {.pc=0x5422, .a=0x2a, .x=0xa8, .y=0x2b, .sp=0xba, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x5422, .value=0x90}, {.addr=0x5423, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x5424, .a=0x2a, .x=0xa8, .y=0x2b, .sp=0xba, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x5422, .value=0x90}, {.addr=0x5423, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x5422, .value=0x90, .type=IO_READ},
        {.addr=0x5423, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0198) {
    const struct CPU_State initial_cpu = {.pc=0x0ecc, .a=0x89, .x=0xf5, .y=0xb9, .sp=0x84, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x0ecc, .value=0x90}, {.addr=0x0ecd, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x0ece, .a=0x89, .x=0xf5, .y=0xb9, .sp=0x84, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0ecc, .value=0x90}, {.addr=0x0ecd, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x0ecc, .value=0x90, .type=IO_READ},
        {.addr=0x0ecd, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0199) {
    const struct CPU_State initial_cpu = {.pc=0x8ead, .a=0x5c, .x=0x1a, .y=0x76, .sp=0x40, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x8ead, .value=0x90}, {.addr=0x8eae, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0x8f23, .a=0x5c, .x=0x1a, .y=0x76, .sp=0x40, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x8ead, .value=0x90}, {.addr=0x8eae, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0x8ead, .value=0x90, .type=IO_READ},
        {.addr=0x8eae, .value=0x74, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_019A) {
    const struct CPU_State initial_cpu = {.pc=0x5e65, .a=0xbc, .x=0x34, .y=0xf9, .sp=0x96, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x5e65, .value=0x90}, {.addr=0x5e66, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0x5e67, .a=0xbc, .x=0x34, .y=0xf9, .sp=0x96, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x5e65, .value=0x90}, {.addr=0x5e66, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0x5e65, .value=0x90, .type=IO_READ},
        {.addr=0x5e66, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_019B) {
    const struct CPU_State initial_cpu = {.pc=0x1bc4, .a=0x12, .x=0x75, .y=0x80, .sp=0xd9, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x1bc4, .value=0x90}, {.addr=0x1bc5, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0x1bc6, .a=0x12, .x=0x75, .y=0x80, .sp=0xd9, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x1bc4, .value=0x90}, {.addr=0x1bc5, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0x1bc4, .value=0x90, .type=IO_READ},
        {.addr=0x1bc5, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_019C) {
    const struct CPU_State initial_cpu = {.pc=0xe140, .a=0x28, .x=0x2d, .y=0x8f, .sp=0x07, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xe140, .value=0x90}, {.addr=0xe141, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0xe181, .a=0x28, .x=0x2d, .y=0x8f, .sp=0x07, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0xe140, .value=0x90}, {.addr=0xe141, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0xe140, .value=0x90, .type=IO_READ},
        {.addr=0xe141, .value=0x3f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_019D) {
    const struct CPU_State initial_cpu = {.pc=0x92ba, .a=0x7e, .x=0xcf, .y=0xcf, .sp=0x69, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x92ba, .value=0x90}, {.addr=0x92bb, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0x9293, .a=0x7e, .x=0xcf, .y=0xcf, .sp=0x69, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x92ba, .value=0x90}, {.addr=0x92bb, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0x92ba, .value=0x90, .type=IO_READ},
        {.addr=0x92bb, .value=0xd7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_019E) {
    const struct CPU_State initial_cpu = {.pc=0xca91, .a=0x13, .x=0x77, .y=0xa2, .sp=0x57, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xca91, .value=0x90}, {.addr=0xca92, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0xca5f, .a=0x13, .x=0x77, .y=0xa2, .sp=0x57, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0xca91, .value=0x90}, {.addr=0xca92, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0xca91, .value=0x90, .type=IO_READ},
        {.addr=0xca92, .value=0xcc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_019F) {
    const struct CPU_State initial_cpu = {.pc=0xf348, .a=0x51, .x=0x50, .y=0x52, .sp=0xc4, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xf348, .value=0x90}, {.addr=0xf349, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0xf34a, .a=0x51, .x=0x50, .y=0x52, .sp=0xc4, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xf348, .value=0x90}, {.addr=0xf349, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0xf348, .value=0x90, .type=IO_READ},
        {.addr=0xf349, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01A0) {
    const struct CPU_State initial_cpu = {.pc=0xc3d1, .a=0x5b, .x=0x3b, .y=0x31, .sp=0xd7, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xc3d1, .value=0x90}, {.addr=0xc3d2, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0xc42a, .a=0x5b, .x=0x3b, .y=0x31, .sp=0xd7, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0xc3d1, .value=0x90}, {.addr=0xc3d2, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0xc3d1, .value=0x90, .type=IO_READ},
        {.addr=0xc3d2, .value=0x57, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01A1) {
    const struct CPU_State initial_cpu = {.pc=0xe4da, .a=0x23, .x=0xda, .y=0x87, .sp=0x60, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xe4da, .value=0x90}, {.addr=0xe4db, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0xe4dc, .a=0x23, .x=0xda, .y=0x87, .sp=0x60, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xe4da, .value=0x90}, {.addr=0xe4db, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0xe4da, .value=0x90, .type=IO_READ},
        {.addr=0xe4db, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01A2) {
    const struct CPU_State initial_cpu = {.pc=0x4dc1, .a=0x5d, .x=0x29, .y=0x2c, .sp=0x21, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x4dc1, .value=0x90}, {.addr=0x4dc2, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0x4dc3, .a=0x5d, .x=0x29, .y=0x2c, .sp=0x21, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x4dc1, .value=0x90}, {.addr=0x4dc2, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0x4dc1, .value=0x90, .type=IO_READ},
        {.addr=0x4dc2, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01A3) {
    const struct CPU_State initial_cpu = {.pc=0x7190, .a=0xcc, .x=0xf6, .y=0x1c, .sp=0xf5, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x7190, .value=0x90}, {.addr=0x7191, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0x7145, .a=0xcc, .x=0xf6, .y=0x1c, .sp=0xf5, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x7190, .value=0x90}, {.addr=0x7191, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0x7190, .value=0x90, .type=IO_READ},
        {.addr=0x7191, .value=0xb3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01A4) {
    const struct CPU_State initial_cpu = {.pc=0x31c7, .a=0x5c, .x=0xac, .y=0x38, .sp=0x4b, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x31c7, .value=0x90}, {.addr=0x31c8, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x320c, .a=0x5c, .x=0xac, .y=0x38, .sp=0x4b, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x31c7, .value=0x90}, {.addr=0x31c8, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x31c7, .value=0x90, .type=IO_READ},
        {.addr=0x31c8, .value=0x43, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01A5) {
    const struct CPU_State initial_cpu = {.pc=0xcaee, .a=0xdb, .x=0x08, .y=0x05, .sp=0x55, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0xcaee, .value=0x90}, {.addr=0xcaef, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0xca9d, .a=0xdb, .x=0x08, .y=0x05, .sp=0x55, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0xcaee, .value=0x90}, {.addr=0xcaef, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0xcaee, .value=0x90, .type=IO_READ},
        {.addr=0xcaef, .value=0xad, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01A6) {
    const struct CPU_State initial_cpu = {.pc=0xb22b, .a=0xbd, .x=0x1f, .y=0xb6, .sp=0x8d, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xb22b, .value=0x90}, {.addr=0xb22c, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0xb22d, .a=0xbd, .x=0x1f, .y=0xb6, .sp=0x8d, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0xb22b, .value=0x90}, {.addr=0xb22c, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0xb22b, .value=0x90, .type=IO_READ},
        {.addr=0xb22c, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01A7) {
    const struct CPU_State initial_cpu = {.pc=0x84b6, .a=0xce, .x=0x3b, .y=0xdd, .sp=0x41, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x84b6, .value=0x90}, {.addr=0x84b7, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x8458, .a=0xce, .x=0x3b, .y=0xdd, .sp=0x41, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x84b6, .value=0x90}, {.addr=0x84b7, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x84b6, .value=0x90, .type=IO_READ},
        {.addr=0x84b7, .value=0xa0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01A8) {
    const struct CPU_State initial_cpu = {.pc=0x7b35, .a=0x90, .x=0x95, .y=0xf8, .sp=0x8b, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x7b35, .value=0x90}, {.addr=0x7b36, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0x7b68, .a=0x90, .x=0x95, .y=0xf8, .sp=0x8b, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x7b35, .value=0x90}, {.addr=0x7b36, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0x7b35, .value=0x90, .type=IO_READ},
        {.addr=0x7b36, .value=0x31, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01A9) {
    const struct CPU_State initial_cpu = {.pc=0x5cbc, .a=0x35, .x=0xd5, .y=0x92, .sp=0xa6, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x5cbc, .value=0x90}, {.addr=0x5cbd, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0x5cbe, .a=0x35, .x=0xd5, .y=0x92, .sp=0xa6, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x5cbc, .value=0x90}, {.addr=0x5cbd, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0x5cbc, .value=0x90, .type=IO_READ},
        {.addr=0x5cbd, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01AA) {
    const struct CPU_State initial_cpu = {.pc=0x1663, .a=0x34, .x=0xcd, .y=0x09, .sp=0x93, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x1663, .value=0x90}, {.addr=0x1664, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x1665, .a=0x34, .x=0xcd, .y=0x09, .sp=0x93, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x1663, .value=0x90}, {.addr=0x1664, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x1663, .value=0x90, .type=IO_READ},
        {.addr=0x1664, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01AB) {
    const struct CPU_State initial_cpu = {.pc=0x63c1, .a=0x60, .x=0x02, .y=0x02, .sp=0x43, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x63c1, .value=0x90}, {.addr=0x63c2, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0x63db, .a=0x60, .x=0x02, .y=0x02, .sp=0x43, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x63c1, .value=0x90}, {.addr=0x63c2, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0x63c1, .value=0x90, .type=IO_READ},
        {.addr=0x63c2, .value=0x18, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01AC) {
    const struct CPU_State initial_cpu = {.pc=0x0f70, .a=0xae, .x=0x64, .y=0x85, .sp=0x51, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x0f70, .value=0x90}, {.addr=0x0f71, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x0f72, .a=0xae, .x=0x64, .y=0x85, .sp=0x51, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x0f70, .value=0x90}, {.addr=0x0f71, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x0f70, .value=0x90, .type=IO_READ},
        {.addr=0x0f71, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01AD) {
    const struct CPU_State initial_cpu = {.pc=0x5c3c, .a=0xd5, .x=0xe5, .y=0x83, .sp=0x3b, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x5c3c, .value=0x90}, {.addr=0x5c3d, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0x5c11, .a=0xd5, .x=0xe5, .y=0x83, .sp=0x3b, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x5c3c, .value=0x90}, {.addr=0x5c3d, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0x5c3c, .value=0x90, .type=IO_READ},
        {.addr=0x5c3d, .value=0xd3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01AE) {
    const struct CPU_State initial_cpu = {.pc=0x437c, .a=0x23, .x=0x0c, .y=0x16, .sp=0x21, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x437c, .value=0x90}, {.addr=0x437d, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0x437e, .a=0x23, .x=0x0c, .y=0x16, .sp=0x21, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x437c, .value=0x90}, {.addr=0x437d, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0x437c, .value=0x90, .type=IO_READ},
        {.addr=0x437d, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01AF) {
    const struct CPU_State initial_cpu = {.pc=0xe2f8, .a=0x20, .x=0xe3, .y=0xa3, .sp=0x84, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xe2f8, .value=0x90}, {.addr=0xe2f9, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0xe2fa, .a=0x20, .x=0xe3, .y=0xa3, .sp=0x84, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xe2f8, .value=0x90}, {.addr=0xe2f9, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0xe2f8, .value=0x90, .type=IO_READ},
        {.addr=0xe2f9, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01B0) {
    const struct CPU_State initial_cpu = {.pc=0x996b, .a=0xb5, .x=0x79, .y=0x56, .sp=0x10, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x996b, .value=0x90}, {.addr=0x996c, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0x996d, .a=0xb5, .x=0x79, .y=0x56, .sp=0x10, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x996b, .value=0x90}, {.addr=0x996c, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0x996b, .value=0x90, .type=IO_READ},
        {.addr=0x996c, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01B1) {
    const struct CPU_State initial_cpu = {.pc=0xeb52, .a=0x24, .x=0x3c, .y=0x53, .sp=0x58, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xeb52, .value=0x90}, {.addr=0xeb53, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0xeb54, .a=0x24, .x=0x3c, .y=0x53, .sp=0x58, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0xeb52, .value=0x90}, {.addr=0xeb53, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0xeb52, .value=0x90, .type=IO_READ},
        {.addr=0xeb53, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x03cb, .a=0x58, .x=0xfb, .y=0x04, .sp=0x91, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x03cb, .value=0x90}, {.addr=0x03cc, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0x035f, .a=0x58, .x=0xfb, .y=0x04, .sp=0x91, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x03cb, .value=0x90}, {.addr=0x03cc, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0x03cb, .value=0x90, .type=IO_READ},
        {.addr=0x03cc, .value=0x92, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01B3) {
    const struct CPU_State initial_cpu = {.pc=0x69c0, .a=0xcf, .x=0x7b, .y=0x96, .sp=0xb2, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x69c0, .value=0x90}, {.addr=0x69c1, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0x69c2, .a=0xcf, .x=0x7b, .y=0x96, .sp=0xb2, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x69c0, .value=0x90}, {.addr=0x69c1, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0x69c0, .value=0x90, .type=IO_READ},
        {.addr=0x69c1, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01B4) {
    const struct CPU_State initial_cpu = {.pc=0x37e9, .a=0xb3, .x=0x6d, .y=0x22, .sp=0x02, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x37e9, .value=0x90}, {.addr=0x37ea, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0x37dd, .a=0xb3, .x=0x6d, .y=0x22, .sp=0x02, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x37e9, .value=0x90}, {.addr=0x37ea, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0x37e9, .value=0x90, .type=IO_READ},
        {.addr=0x37ea, .value=0xf2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01B5) {
    const struct CPU_State initial_cpu = {.pc=0xf526, .a=0x50, .x=0x20, .y=0x58, .sp=0xe4, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xf526, .value=0x90}, {.addr=0xf527, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xf4c7, .a=0x50, .x=0x20, .y=0x58, .sp=0xe4, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xf526, .value=0x90}, {.addr=0xf527, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xf526, .value=0x90, .type=IO_READ},
        {.addr=0xf527, .value=0x9f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01B6) {
    const struct CPU_State initial_cpu = {.pc=0x8354, .a=0xde, .x=0x06, .y=0xa0, .sp=0x47, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x8354, .value=0x90}, {.addr=0x8355, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0x8318, .a=0xde, .x=0x06, .y=0xa0, .sp=0x47, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x8354, .value=0x90}, {.addr=0x8355, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0x8354, .value=0x90, .type=IO_READ},
        {.addr=0x8355, .value=0xc2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01B7) {
    const struct CPU_State initial_cpu = {.pc=0x3a9f, .a=0x4b, .x=0x3b, .y=0x23, .sp=0x56, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x3a9f, .value=0x90}, {.addr=0x3aa0, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0x3aa1, .a=0x4b, .x=0x3b, .y=0x23, .sp=0x56, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x3a9f, .value=0x90}, {.addr=0x3aa0, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0x3a9f, .value=0x90, .type=IO_READ},
        {.addr=0x3aa0, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01B8) {
    const struct CPU_State initial_cpu = {.pc=0xb000, .a=0x49, .x=0x0c, .y=0x07, .sp=0x17, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xb000, .value=0x90}, {.addr=0xb001, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0xafda, .a=0x49, .x=0x0c, .y=0x07, .sp=0x17, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xb000, .value=0x90}, {.addr=0xb001, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0xb000, .value=0x90, .type=IO_READ},
        {.addr=0xb001, .value=0xd8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01B9) {
    const struct CPU_State initial_cpu = {.pc=0x9025, .a=0xe9, .x=0x7f, .y=0x20, .sp=0x18, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x9025, .value=0x90}, {.addr=0x9026, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0x9027, .a=0xe9, .x=0x7f, .y=0x20, .sp=0x18, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x9025, .value=0x90}, {.addr=0x9026, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0x9025, .value=0x90, .type=IO_READ},
        {.addr=0x9026, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01BA) {
    const struct CPU_State initial_cpu = {.pc=0x5008, .a=0xd0, .x=0x98, .y=0xa2, .sp=0x94, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x5008, .value=0x90}, {.addr=0x5009, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0x500a, .a=0xd0, .x=0x98, .y=0xa2, .sp=0x94, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x5008, .value=0x90}, {.addr=0x5009, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0x5008, .value=0x90, .type=IO_READ},
        {.addr=0x5009, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01BB) {
    const struct CPU_State initial_cpu = {.pc=0x0c24, .a=0x5a, .x=0xfe, .y=0xdf, .sp=0x89, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x0c24, .value=0x90}, {.addr=0x0c25, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0x0bdd, .a=0x5a, .x=0xfe, .y=0xdf, .sp=0x89, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x0c24, .value=0x90}, {.addr=0x0c25, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0x0c24, .value=0x90, .type=IO_READ},
        {.addr=0x0c25, .value=0xb7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01BC) {
    const struct CPU_State initial_cpu = {.pc=0x46d2, .a=0xf2, .x=0x45, .y=0xfa, .sp=0x41, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x46d2, .value=0x90}, {.addr=0x46d3, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x4701, .a=0xf2, .x=0x45, .y=0xfa, .sp=0x41, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x46d2, .value=0x90}, {.addr=0x46d3, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x46d2, .value=0x90, .type=IO_READ},
        {.addr=0x46d3, .value=0x2d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01BD) {
    const struct CPU_State initial_cpu = {.pc=0x2e87, .a=0xaa, .x=0x49, .y=0xdb, .sp=0x7f, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x2e87, .value=0x90}, {.addr=0x2e88, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x2e41, .a=0xaa, .x=0x49, .y=0xdb, .sp=0x7f, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x2e87, .value=0x90}, {.addr=0x2e88, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x2e87, .value=0x90, .type=IO_READ},
        {.addr=0x2e88, .value=0xb8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01BE) {
    const struct CPU_State initial_cpu = {.pc=0x211c, .a=0x4e, .x=0x49, .y=0xdf, .sp=0xfa, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x211c, .value=0x90}, {.addr=0x211d, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x211e, .a=0x4e, .x=0x49, .y=0xdf, .sp=0xfa, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x211c, .value=0x90}, {.addr=0x211d, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x211c, .value=0x90, .type=IO_READ},
        {.addr=0x211d, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01BF) {
    const struct CPU_State initial_cpu = {.pc=0x25fd, .a=0x88, .x=0xfc, .y=0xc9, .sp=0x80, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x25fd, .value=0x90}, {.addr=0x25fe, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0x2639, .a=0x88, .x=0xfc, .y=0xc9, .sp=0x80, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x25fd, .value=0x90}, {.addr=0x25fe, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0x25fd, .value=0x90, .type=IO_READ},
        {.addr=0x25fe, .value=0x3a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01C0) {
    const struct CPU_State initial_cpu = {.pc=0x9aa3, .a=0x20, .x=0xe9, .y=0x1c, .sp=0x1d, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x9aa3, .value=0x90}, {.addr=0x9aa4, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x9a53, .a=0x20, .x=0xe9, .y=0x1c, .sp=0x1d, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x9aa3, .value=0x90}, {.addr=0x9aa4, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x9aa3, .value=0x90, .type=IO_READ},
        {.addr=0x9aa4, .value=0xae, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01C1) {
    const struct CPU_State initial_cpu = {.pc=0x6afc, .a=0x4d, .x=0x21, .y=0x44, .sp=0x28, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x6afc, .value=0x90}, {.addr=0x6afd, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0x6afe, .a=0x4d, .x=0x21, .y=0x44, .sp=0x28, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x6afc, .value=0x90}, {.addr=0x6afd, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0x6afc, .value=0x90, .type=IO_READ},
        {.addr=0x6afd, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01C2) {
    const struct CPU_State initial_cpu = {.pc=0xd45f, .a=0x1a, .x=0xee, .y=0xbe, .sp=0x14, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xd45f, .value=0x90}, {.addr=0xd460, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0xd4d1, .a=0x1a, .x=0xee, .y=0xbe, .sp=0x14, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0xd45f, .value=0x90}, {.addr=0xd460, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0xd45f, .value=0x90, .type=IO_READ},
        {.addr=0xd460, .value=0x70, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01C3) {
    const struct CPU_State initial_cpu = {.pc=0x0ed9, .a=0xa6, .x=0xb6, .y=0x2e, .sp=0xb1, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x0ed9, .value=0x90}, {.addr=0x0eda, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0x0ed9, .a=0xa6, .x=0xb6, .y=0x2e, .sp=0xb1, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x0ed9, .value=0x90}, {.addr=0x0eda, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0x0ed9, .value=0x90, .type=IO_READ},
        {.addr=0x0eda, .value=0xfe, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01C4) {
    const struct CPU_State initial_cpu = {.pc=0xce0f, .a=0x4f, .x=0x49, .y=0x0b, .sp=0xb5, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xce0f, .value=0x90}, {.addr=0xce10, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0xce11, .a=0x4f, .x=0x49, .y=0x0b, .sp=0xb5, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xce0f, .value=0x90}, {.addr=0xce10, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0xce0f, .value=0x90, .type=IO_READ},
        {.addr=0xce10, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01C5) {
    const struct CPU_State initial_cpu = {.pc=0x58b3, .a=0xd6, .x=0xe1, .y=0x4f, .sp=0xff, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x58b3, .value=0x90}, {.addr=0x58b4, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0x58b5, .a=0xd6, .x=0xe1, .y=0x4f, .sp=0xff, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x58b3, .value=0x90}, {.addr=0x58b4, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0x58b3, .value=0x90, .type=IO_READ},
        {.addr=0x58b4, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01C6) {
    const struct CPU_State initial_cpu = {.pc=0x7d74, .a=0x54, .x=0x61, .y=0xed, .sp=0x62, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x7d74, .value=0x90}, {.addr=0x7d75, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0x7d76, .a=0x54, .x=0x61, .y=0xed, .sp=0x62, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x7d74, .value=0x90}, {.addr=0x7d75, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0x7d74, .value=0x90, .type=IO_READ},
        {.addr=0x7d75, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01C7) {
    const struct CPU_State initial_cpu = {.pc=0x8eed, .a=0x76, .x=0xd2, .y=0x4c, .sp=0xdf, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x8eed, .value=0x90}, {.addr=0x8eee, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0x8eef, .a=0x76, .x=0xd2, .y=0x4c, .sp=0xdf, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x8eed, .value=0x90}, {.addr=0x8eee, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0x8eed, .value=0x90, .type=IO_READ},
        {.addr=0x8eee, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01C8) {
    const struct CPU_State initial_cpu = {.pc=0x075f, .a=0x41, .x=0xe4, .y=0xb7, .sp=0x10, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x075f, .value=0x90}, {.addr=0x0760, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x0761, .a=0x41, .x=0xe4, .y=0xb7, .sp=0x10, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x075f, .value=0x90}, {.addr=0x0760, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x075f, .value=0x90, .type=IO_READ},
        {.addr=0x0760, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01C9) {
    const struct CPU_State initial_cpu = {.pc=0xdcaf, .a=0xff, .x=0x86, .y=0x28, .sp=0x4b, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0xdcaf, .value=0x90}, {.addr=0xdcb0, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xdcb1, .a=0xff, .x=0x86, .y=0x28, .sp=0x4b, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0xdcaf, .value=0x90}, {.addr=0xdcb0, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xdcaf, .value=0x90, .type=IO_READ},
        {.addr=0xdcb0, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01CA) {
    const struct CPU_State initial_cpu = {.pc=0x9a35, .a=0xcc, .x=0x3b, .y=0x7a, .sp=0x1e, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x9a35, .value=0x90}, {.addr=0x9a36, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x9a4c, .a=0xcc, .x=0x3b, .y=0x7a, .sp=0x1e, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x9a35, .value=0x90}, {.addr=0x9a36, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x9a35, .value=0x90, .type=IO_READ},
        {.addr=0x9a36, .value=0x15, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01CB) {
    const struct CPU_State initial_cpu = {.pc=0x2da8, .a=0x63, .x=0x30, .y=0xec, .sp=0x5a, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x2da8, .value=0x90}, {.addr=0x2da9, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0x2daa, .a=0x63, .x=0x30, .y=0xec, .sp=0x5a, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x2da8, .value=0x90}, {.addr=0x2da9, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0x2da8, .value=0x90, .type=IO_READ},
        {.addr=0x2da9, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01CC) {
    const struct CPU_State initial_cpu = {.pc=0x3ce6, .a=0x62, .x=0x2b, .y=0x87, .sp=0x8f, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x3ce6, .value=0x90}, {.addr=0x3ce7, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0x3ce8, .a=0x62, .x=0x2b, .y=0x87, .sp=0x8f, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x3ce6, .value=0x90}, {.addr=0x3ce7, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0x3ce6, .value=0x90, .type=IO_READ},
        {.addr=0x3ce7, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01CD) {
    const struct CPU_State initial_cpu = {.pc=0x6a0d, .a=0x4d, .x=0x9a, .y=0xc4, .sp=0xa1, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x6a0d, .value=0x90}, {.addr=0x6a0e, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0x6a0f, .a=0x4d, .x=0x9a, .y=0xc4, .sp=0xa1, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x6a0d, .value=0x90}, {.addr=0x6a0e, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0x6a0d, .value=0x90, .type=IO_READ},
        {.addr=0x6a0e, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01CE) {
    const struct CPU_State initial_cpu = {.pc=0x16d3, .a=0x31, .x=0x0e, .y=0x2f, .sp=0x49, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x16d3, .value=0x90}, {.addr=0x16d4, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0x16d5, .a=0x31, .x=0x0e, .y=0x2f, .sp=0x49, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x16d3, .value=0x90}, {.addr=0x16d4, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0x16d3, .value=0x90, .type=IO_READ},
        {.addr=0x16d4, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01CF) {
    const struct CPU_State initial_cpu = {.pc=0x4067, .a=0x35, .x=0xf0, .y=0xbc, .sp=0x77, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x4067, .value=0x90}, {.addr=0x4068, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0x408b, .a=0x35, .x=0xf0, .y=0xbc, .sp=0x77, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x4067, .value=0x90}, {.addr=0x4068, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0x4067, .value=0x90, .type=IO_READ},
        {.addr=0x4068, .value=0x22, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01D0) {
    const struct CPU_State initial_cpu = {.pc=0xacf1, .a=0x63, .x=0x7a, .y=0x1d, .sp=0xdd, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xacf1, .value=0x90}, {.addr=0xacf2, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0xacf3, .a=0x63, .x=0x7a, .y=0x1d, .sp=0xdd, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xacf1, .value=0x90}, {.addr=0xacf2, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0xacf1, .value=0x90, .type=IO_READ},
        {.addr=0xacf2, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01D1) {
    const struct CPU_State initial_cpu = {.pc=0x7009, .a=0x2b, .x=0x41, .y=0xec, .sp=0xbb, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x7009, .value=0x90}, {.addr=0x700a, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0x700b, .a=0x2b, .x=0x41, .y=0xec, .sp=0xbb, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x7009, .value=0x90}, {.addr=0x700a, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0x7009, .value=0x90, .type=IO_READ},
        {.addr=0x700a, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01D2) {
    const struct CPU_State initial_cpu = {.pc=0x7f4f, .a=0xf8, .x=0x67, .y=0x25, .sp=0x46, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x7f4f, .value=0x90}, {.addr=0x7f50, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x7f81, .a=0xf8, .x=0x67, .y=0x25, .sp=0x46, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x7f4f, .value=0x90}, {.addr=0x7f50, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x7f4f, .value=0x90, .type=IO_READ},
        {.addr=0x7f50, .value=0x30, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01D3) {
    const struct CPU_State initial_cpu = {.pc=0xe22a, .a=0xc5, .x=0xce, .y=0xb1, .sp=0x80, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xe22a, .value=0x90}, {.addr=0xe22b, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0xe20f, .a=0xc5, .x=0xce, .y=0xb1, .sp=0x80, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0xe22a, .value=0x90}, {.addr=0xe22b, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0xe22a, .value=0x90, .type=IO_READ},
        {.addr=0xe22b, .value=0xe3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01D4) {
    const struct CPU_State initial_cpu = {.pc=0xe4cf, .a=0x8a, .x=0xdd, .y=0x5f, .sp=0xdc, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xe4cf, .value=0x90}, {.addr=0xe4d0, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0xe4f4, .a=0x8a, .x=0xdd, .y=0x5f, .sp=0xdc, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0xe4cf, .value=0x90}, {.addr=0xe4d0, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0xe4cf, .value=0x90, .type=IO_READ},
        {.addr=0xe4d0, .value=0x23, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01D5) {
    const struct CPU_State initial_cpu = {.pc=0x0e9d, .a=0x04, .x=0x67, .y=0x57, .sp=0x45, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x0e9d, .value=0x90}, {.addr=0x0e9e, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x0e93, .a=0x04, .x=0x67, .y=0x57, .sp=0x45, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x0e9d, .value=0x90}, {.addr=0x0e9e, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x0e9d, .value=0x90, .type=IO_READ},
        {.addr=0x0e9e, .value=0xf4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01D6) {
    const struct CPU_State initial_cpu = {.pc=0xd17a, .a=0xe9, .x=0x40, .y=0x95, .sp=0xcc, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xd17a, .value=0x90}, {.addr=0xd17b, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0xd17c, .a=0xe9, .x=0x40, .y=0x95, .sp=0xcc, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xd17a, .value=0x90}, {.addr=0xd17b, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0xd17a, .value=0x90, .type=IO_READ},
        {.addr=0xd17b, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01D7) {
    const struct CPU_State initial_cpu = {.pc=0xc959, .a=0xb6, .x=0x1f, .y=0x3f, .sp=0x54, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xc959, .value=0x90}, {.addr=0xc95a, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0xc96f, .a=0xb6, .x=0x1f, .y=0x3f, .sp=0x54, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xc959, .value=0x90}, {.addr=0xc95a, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0xc959, .value=0x90, .type=IO_READ},
        {.addr=0xc95a, .value=0x14, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01D8) {
    const struct CPU_State initial_cpu = {.pc=0xb491, .a=0x00, .x=0xbb, .y=0x86, .sp=0x3f, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xb491, .value=0x90}, {.addr=0xb492, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0xb435, .a=0x00, .x=0xbb, .y=0x86, .sp=0x3f, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xb491, .value=0x90}, {.addr=0xb492, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0xb491, .value=0x90, .type=IO_READ},
        {.addr=0xb492, .value=0xa2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01D9) {
    const struct CPU_State initial_cpu = {.pc=0x88bd, .a=0x3b, .x=0xcf, .y=0xe3, .sp=0xa2, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x88bd, .value=0x90}, {.addr=0x88be, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x88bf, .a=0x3b, .x=0xcf, .y=0xe3, .sp=0xa2, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x88bd, .value=0x90}, {.addr=0x88be, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x88bd, .value=0x90, .type=IO_READ},
        {.addr=0x88be, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01DA) {
    const struct CPU_State initial_cpu = {.pc=0x95df, .a=0x54, .x=0xec, .y=0x05, .sp=0x78, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x95df, .value=0x90}, {.addr=0x95e0, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0x9589, .a=0x54, .x=0xec, .y=0x05, .sp=0x78, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x95df, .value=0x90}, {.addr=0x95e0, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0x95df, .value=0x90, .type=IO_READ},
        {.addr=0x95e0, .value=0xa8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01DB) {
    const struct CPU_State initial_cpu = {.pc=0x0343, .a=0x9e, .x=0x3b, .y=0x2b, .sp=0x18, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x0343, .value=0x90}, {.addr=0x0344, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0x0345, .a=0x9e, .x=0x3b, .y=0x2b, .sp=0x18, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x0343, .value=0x90}, {.addr=0x0344, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0x0343, .value=0x90, .type=IO_READ},
        {.addr=0x0344, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01DC) {
    const struct CPU_State initial_cpu = {.pc=0x0373, .a=0x13, .x=0xbb, .y=0x5e, .sp=0xea, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x0373, .value=0x90}, {.addr=0x0374, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x0375, .a=0x13, .x=0xbb, .y=0x5e, .sp=0xea, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x0373, .value=0x90}, {.addr=0x0374, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x0373, .value=0x90, .type=IO_READ},
        {.addr=0x0374, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01DD) {
    const struct CPU_State initial_cpu = {.pc=0x5651, .a=0x0e, .x=0x0d, .y=0xca, .sp=0x75, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x5651, .value=0x90}, {.addr=0x5652, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0x5653, .a=0x0e, .x=0x0d, .y=0xca, .sp=0x75, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x5651, .value=0x90}, {.addr=0x5652, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0x5651, .value=0x90, .type=IO_READ},
        {.addr=0x5652, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01DE) {
    const struct CPU_State initial_cpu = {.pc=0xf710, .a=0xc4, .x=0xc0, .y=0x4c, .sp=0x40, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xf710, .value=0x90}, {.addr=0xf711, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0xf736, .a=0xc4, .x=0xc0, .y=0x4c, .sp=0x40, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xf710, .value=0x90}, {.addr=0xf711, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0xf710, .value=0x90, .type=IO_READ},
        {.addr=0xf711, .value=0x24, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01DF) {
    const struct CPU_State initial_cpu = {.pc=0xa310, .a=0xa0, .x=0x87, .y=0x85, .sp=0x24, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xa310, .value=0x90}, {.addr=0xa311, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0xa312, .a=0xa0, .x=0x87, .y=0x85, .sp=0x24, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0xa310, .value=0x90}, {.addr=0xa311, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0xa310, .value=0x90, .type=IO_READ},
        {.addr=0xa311, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01E0) {
    const struct CPU_State initial_cpu = {.pc=0x97bc, .a=0x79, .x=0xf9, .y=0x7d, .sp=0xb2, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x97bc, .value=0x90}, {.addr=0x97bd, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x97be, .a=0x79, .x=0xf9, .y=0x7d, .sp=0xb2, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x97bc, .value=0x90}, {.addr=0x97bd, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x97bc, .value=0x90, .type=IO_READ},
        {.addr=0x97bd, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01E1) {
    const struct CPU_State initial_cpu = {.pc=0x5860, .a=0xfa, .x=0xe9, .y=0xc8, .sp=0xde, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x5860, .value=0x90}, {.addr=0x5861, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x57e8, .a=0xfa, .x=0xe9, .y=0xc8, .sp=0xde, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x5860, .value=0x90}, {.addr=0x5861, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x5860, .value=0x90, .type=IO_READ},
        {.addr=0x5861, .value=0x86, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01E2) {
    const struct CPU_State initial_cpu = {.pc=0x781d, .a=0x18, .x=0x08, .y=0x42, .sp=0x35, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x781d, .value=0x90}, {.addr=0x781e, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x781f, .a=0x18, .x=0x08, .y=0x42, .sp=0x35, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x781d, .value=0x90}, {.addr=0x781e, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x781d, .value=0x90, .type=IO_READ},
        {.addr=0x781e, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01E3) {
    const struct CPU_State initial_cpu = {.pc=0x91ce, .a=0xa2, .x=0x0d, .y=0x6b, .sp=0x18, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x91ce, .value=0x90}, {.addr=0x91cf, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0x91d0, .a=0xa2, .x=0x0d, .y=0x6b, .sp=0x18, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x91ce, .value=0x90}, {.addr=0x91cf, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0x91ce, .value=0x90, .type=IO_READ},
        {.addr=0x91cf, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01E4) {
    const struct CPU_State initial_cpu = {.pc=0x2423, .a=0x5a, .x=0xd8, .y=0x0a, .sp=0x4f, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x2423, .value=0x90}, {.addr=0x2424, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0x23ee, .a=0x5a, .x=0xd8, .y=0x0a, .sp=0x4f, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x2423, .value=0x90}, {.addr=0x2424, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0x2423, .value=0x90, .type=IO_READ},
        {.addr=0x2424, .value=0xc9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01E5) {
    const struct CPU_State initial_cpu = {.pc=0xba30, .a=0x65, .x=0xa5, .y=0xab, .sp=0x8d, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xba30, .value=0x90}, {.addr=0xba31, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0xba32, .a=0x65, .x=0xa5, .y=0xab, .sp=0x8d, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xba30, .value=0x90}, {.addr=0xba31, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0xba30, .value=0x90, .type=IO_READ},
        {.addr=0xba31, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01E6) {
    const struct CPU_State initial_cpu = {.pc=0xdaa6, .a=0x29, .x=0x4d, .y=0xd2, .sp=0x2e, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xdaa6, .value=0x90}, {.addr=0xdaa7, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0xdaa8, .a=0x29, .x=0x4d, .y=0xd2, .sp=0x2e, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xdaa6, .value=0x90}, {.addr=0xdaa7, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0xdaa6, .value=0x90, .type=IO_READ},
        {.addr=0xdaa7, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01E7) {
    const struct CPU_State initial_cpu = {.pc=0x2279, .a=0x27, .x=0x5d, .y=0x7c, .sp=0x40, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x2279, .value=0x90}, {.addr=0x227a, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x2258, .a=0x27, .x=0x5d, .y=0x7c, .sp=0x40, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x2279, .value=0x90}, {.addr=0x227a, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x2279, .value=0x90, .type=IO_READ},
        {.addr=0x227a, .value=0xdd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01E8) {
    const struct CPU_State initial_cpu = {.pc=0xe783, .a=0x8c, .x=0x18, .y=0xe3, .sp=0xbe, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xe783, .value=0x90}, {.addr=0xe784, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xe7e2, .a=0x8c, .x=0x18, .y=0xe3, .sp=0xbe, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xe783, .value=0x90}, {.addr=0xe784, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xe783, .value=0x90, .type=IO_READ},
        {.addr=0xe784, .value=0x5d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01E9) {
    const struct CPU_State initial_cpu = {.pc=0x4eb3, .a=0x71, .x=0x31, .y=0x25, .sp=0x0d, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x4eb3, .value=0x90}, {.addr=0x4eb4, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x4efb, .a=0x71, .x=0x31, .y=0x25, .sp=0x0d, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x4eb3, .value=0x90}, {.addr=0x4eb4, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x4eb3, .value=0x90, .type=IO_READ},
        {.addr=0x4eb4, .value=0x46, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01EA) {
    const struct CPU_State initial_cpu = {.pc=0xfba6, .a=0x8b, .x=0xca, .y=0xd1, .sp=0x9c, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xfba6, .value=0x90}, {.addr=0xfba7, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xfba8, .a=0x8b, .x=0xca, .y=0xd1, .sp=0x9c, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xfba6, .value=0x90}, {.addr=0xfba7, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xfba6, .value=0x90, .type=IO_READ},
        {.addr=0xfba7, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01EB) {
    const struct CPU_State initial_cpu = {.pc=0x50d8, .a=0x83, .x=0x11, .y=0x66, .sp=0xe0, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x50d8, .value=0x90}, {.addr=0x50d9, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0x50da, .a=0x83, .x=0x11, .y=0x66, .sp=0xe0, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x50d8, .value=0x90}, {.addr=0x50d9, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0x50d8, .value=0x90, .type=IO_READ},
        {.addr=0x50d9, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01EC) {
    const struct CPU_State initial_cpu = {.pc=0xbd5e, .a=0x9e, .x=0xa2, .y=0x08, .sp=0x1b, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xbd5e, .value=0x90}, {.addr=0xbd5f, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0xbd60, .a=0x9e, .x=0xa2, .y=0x08, .sp=0x1b, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xbd5e, .value=0x90}, {.addr=0xbd5f, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0xbd5e, .value=0x90, .type=IO_READ},
        {.addr=0xbd5f, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01ED) {
    const struct CPU_State initial_cpu = {.pc=0xf486, .a=0x3b, .x=0x95, .y=0x96, .sp=0x94, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xf486, .value=0x90}, {.addr=0xf487, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0xf487, .a=0x3b, .x=0x95, .y=0x96, .sp=0x94, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xf486, .value=0x90}, {.addr=0xf487, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0xf486, .value=0x90, .type=IO_READ},
        {.addr=0xf487, .value=0xff, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01EE) {
    const struct CPU_State initial_cpu = {.pc=0x4297, .a=0xcb, .x=0x58, .y=0x47, .sp=0xd8, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x4297, .value=0x90}, {.addr=0x4298, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0x4299, .a=0xcb, .x=0x58, .y=0x47, .sp=0xd8, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x4297, .value=0x90}, {.addr=0x4298, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0x4297, .value=0x90, .type=IO_READ},
        {.addr=0x4298, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01EF) {
    const struct CPU_State initial_cpu = {.pc=0x2890, .a=0xc7, .x=0x24, .y=0xdb, .sp=0x4d, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x2890, .value=0x90}, {.addr=0x2891, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0x2892, .a=0xc7, .x=0x24, .y=0xdb, .sp=0x4d, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x2890, .value=0x90}, {.addr=0x2891, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0x2890, .value=0x90, .type=IO_READ},
        {.addr=0x2891, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01F0) {
    const struct CPU_State initial_cpu = {.pc=0x0748, .a=0x2d, .x=0xf8, .y=0xca, .sp=0x89, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x0748, .value=0x90}, {.addr=0x0749, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0x07ae, .a=0x2d, .x=0xf8, .y=0xca, .sp=0x89, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x0748, .value=0x90}, {.addr=0x0749, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0x0748, .value=0x90, .type=IO_READ},
        {.addr=0x0749, .value=0x64, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01F1) {
    const struct CPU_State initial_cpu = {.pc=0xa4d3, .a=0xa0, .x=0x51, .y=0x47, .sp=0xe2, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xa4d3, .value=0x90}, {.addr=0xa4d4, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0xa477, .a=0xa0, .x=0x51, .y=0x47, .sp=0xe2, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0xa4d3, .value=0x90}, {.addr=0xa4d4, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0xa4d3, .value=0x90, .type=IO_READ},
        {.addr=0xa4d4, .value=0xa2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01F2) {
    const struct CPU_State initial_cpu = {.pc=0x0c61, .a=0xd1, .x=0xba, .y=0xa5, .sp=0x9f, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x0c61, .value=0x90}, {.addr=0x0c62, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0x0cba, .a=0xd1, .x=0xba, .y=0xa5, .sp=0x9f, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x0c61, .value=0x90}, {.addr=0x0c62, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0x0c61, .value=0x90, .type=IO_READ},
        {.addr=0x0c62, .value=0x57, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01F3) {
    const struct CPU_State initial_cpu = {.pc=0x1d82, .a=0xc7, .x=0x35, .y=0x30, .sp=0xd9, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x1d82, .value=0x90}, {.addr=0x1d83, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0x1d54, .a=0xc7, .x=0x35, .y=0x30, .sp=0xd9, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x1d82, .value=0x90}, {.addr=0x1d83, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0x1d82, .value=0x90, .type=IO_READ},
        {.addr=0x1d83, .value=0xd0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01F4) {
    const struct CPU_State initial_cpu = {.pc=0xe436, .a=0x6c, .x=0x73, .y=0x4a, .sp=0x67, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xe436, .value=0x90}, {.addr=0xe437, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0xe410, .a=0x6c, .x=0x73, .y=0x4a, .sp=0x67, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0xe436, .value=0x90}, {.addr=0xe437, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0xe436, .value=0x90, .type=IO_READ},
        {.addr=0xe437, .value=0xd8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01F5) {
    const struct CPU_State initial_cpu = {.pc=0xb32d, .a=0x32, .x=0x4d, .y=0x92, .sp=0x4c, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xb32d, .value=0x90}, {.addr=0xb32e, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0xb342, .a=0x32, .x=0x4d, .y=0x92, .sp=0x4c, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0xb32d, .value=0x90}, {.addr=0xb32e, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0xb32d, .value=0x90, .type=IO_READ},
        {.addr=0xb32e, .value=0x13, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01F6) {
    const struct CPU_State initial_cpu = {.pc=0x0437, .a=0xfa, .x=0x3c, .y=0x95, .sp=0x80, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x0437, .value=0x90}, {.addr=0x0438, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0x046a, .a=0xfa, .x=0x3c, .y=0x95, .sp=0x80, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0437, .value=0x90}, {.addr=0x0438, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0x0437, .value=0x90, .type=IO_READ},
        {.addr=0x0438, .value=0x31, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01F7) {
    const struct CPU_State initial_cpu = {.pc=0x706e, .a=0x54, .x=0xc0, .y=0x6f, .sp=0x6b, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x706e, .value=0x90}, {.addr=0x706f, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x7070, .a=0x54, .x=0xc0, .y=0x6f, .sp=0x6b, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x706e, .value=0x90}, {.addr=0x706f, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x706e, .value=0x90, .type=IO_READ},
        {.addr=0x706f, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01F8) {
    const struct CPU_State initial_cpu = {.pc=0xc1bd, .a=0xae, .x=0x23, .y=0x7a, .sp=0x39, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xc1bd, .value=0x90}, {.addr=0xc1be, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0xc1bf, .a=0xae, .x=0x23, .y=0x7a, .sp=0x39, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0xc1bd, .value=0x90}, {.addr=0xc1be, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0xc1bd, .value=0x90, .type=IO_READ},
        {.addr=0xc1be, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x5746, .a=0x95, .x=0xa3, .y=0xf3, .sp=0xa2, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x5746, .value=0x90}, {.addr=0x5747, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0x571c, .a=0x95, .x=0xa3, .y=0xf3, .sp=0xa2, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x5746, .value=0x90}, {.addr=0x5747, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0x5746, .value=0x90, .type=IO_READ},
        {.addr=0x5747, .value=0xd4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01FA) {
    const struct CPU_State initial_cpu = {.pc=0xdf1a, .a=0xf6, .x=0x8b, .y=0x31, .sp=0x3a, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xdf1a, .value=0x90}, {.addr=0xdf1b, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0xdf54, .a=0xf6, .x=0x8b, .y=0x31, .sp=0x3a, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xdf1a, .value=0x90}, {.addr=0xdf1b, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0xdf1a, .value=0x90, .type=IO_READ},
        {.addr=0xdf1b, .value=0x38, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01FB) {
    const struct CPU_State initial_cpu = {.pc=0xa000, .a=0x91, .x=0x60, .y=0xb6, .sp=0xc0, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xa000, .value=0x90}, {.addr=0xa001, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0x9f8f, .a=0x91, .x=0x60, .y=0xb6, .sp=0xc0, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0xa000, .value=0x90}, {.addr=0xa001, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0xa000, .value=0x90, .type=IO_READ},
        {.addr=0xa001, .value=0x8d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01FC) {
    const struct CPU_State initial_cpu = {.pc=0x2208, .a=0x1b, .x=0x54, .y=0x00, .sp=0x1b, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x2208, .value=0x90}, {.addr=0x2209, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0x2271, .a=0x1b, .x=0x54, .y=0x00, .sp=0x1b, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x2208, .value=0x90}, {.addr=0x2209, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0x2208, .value=0x90, .type=IO_READ},
        {.addr=0x2209, .value=0x67, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01FD) {
    const struct CPU_State initial_cpu = {.pc=0xbdfd, .a=0xeb, .x=0x34, .y=0x90, .sp=0x83, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xbdfd, .value=0x90}, {.addr=0xbdfe, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0xbdaa, .a=0xeb, .x=0x34, .y=0x90, .sp=0x83, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xbdfd, .value=0x90}, {.addr=0xbdfe, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0xbdfd, .value=0x90, .type=IO_READ},
        {.addr=0xbdfe, .value=0xab, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01FE) {
    const struct CPU_State initial_cpu = {.pc=0x5a30, .a=0x1e, .x=0x5f, .y=0xd8, .sp=0xf9, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x5a30, .value=0x90}, {.addr=0x5a31, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0x5a91, .a=0x1e, .x=0x5f, .y=0xd8, .sp=0xf9, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x5a30, .value=0x90}, {.addr=0x5a31, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0x5a30, .value=0x90, .type=IO_READ},
        {.addr=0x5a31, .value=0x5f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_01FF) {
    const struct CPU_State initial_cpu = {.pc=0xbad3, .a=0x05, .x=0x2c, .y=0x4a, .sp=0xb0, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xbad3, .value=0x90}, {.addr=0xbad4, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xba95, .a=0x05, .x=0x2c, .y=0x4a, .sp=0xb0, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0xbad3, .value=0x90}, {.addr=0xbad4, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xbad3, .value=0x90, .type=IO_READ},
        {.addr=0xbad4, .value=0xc0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0200) {
    const struct CPU_State initial_cpu = {.pc=0x48b1, .a=0xe2, .x=0x9e, .y=0xda, .sp=0x16, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x48b1, .value=0x90}, {.addr=0x48b2, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0x483b, .a=0xe2, .x=0x9e, .y=0xda, .sp=0x16, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x48b1, .value=0x90}, {.addr=0x48b2, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0x48b1, .value=0x90, .type=IO_READ},
        {.addr=0x48b2, .value=0x88, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0201) {
    const struct CPU_State initial_cpu = {.pc=0x4a89, .a=0xc0, .x=0xac, .y=0xa9, .sp=0xce, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x4a89, .value=0x90}, {.addr=0x4a8a, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0x4b01, .a=0xc0, .x=0xac, .y=0xa9, .sp=0xce, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x4a89, .value=0x90}, {.addr=0x4a8a, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0x4a89, .value=0x90, .type=IO_READ},
        {.addr=0x4a8a, .value=0x76, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0202) {
    const struct CPU_State initial_cpu = {.pc=0x56b8, .a=0x66, .x=0x63, .y=0x84, .sp=0x50, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x56b8, .value=0x90}, {.addr=0x56b9, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0x56ba, .a=0x66, .x=0x63, .y=0x84, .sp=0x50, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x56b8, .value=0x90}, {.addr=0x56b9, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0x56b8, .value=0x90, .type=IO_READ},
        {.addr=0x56b9, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0203) {
    const struct CPU_State initial_cpu = {.pc=0xca9e, .a=0x0a, .x=0xdb, .y=0x03, .sp=0xc5, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0xca9e, .value=0x90}, {.addr=0xca9f, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0xcaa0, .a=0x0a, .x=0xdb, .y=0x03, .sp=0xc5, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0xca9e, .value=0x90}, {.addr=0xca9f, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0xca9e, .value=0x90, .type=IO_READ},
        {.addr=0xca9f, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0204) {
    const struct CPU_State initial_cpu = {.pc=0x5d19, .a=0xe8, .x=0x8b, .y=0x62, .sp=0x03, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x5d19, .value=0x90}, {.addr=0x5d1a, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0x5d1b, .a=0xe8, .x=0x8b, .y=0x62, .sp=0x03, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x5d19, .value=0x90}, {.addr=0x5d1a, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0x5d19, .value=0x90, .type=IO_READ},
        {.addr=0x5d1a, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0205) {
    const struct CPU_State initial_cpu = {.pc=0x0592, .a=0xf6, .x=0xea, .y=0x4f, .sp=0xd7, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x0592, .value=0x90}, {.addr=0x0593, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0x0594, .a=0xf6, .x=0xea, .y=0x4f, .sp=0xd7, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x0592, .value=0x90}, {.addr=0x0593, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0x0592, .value=0x90, .type=IO_READ},
        {.addr=0x0593, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0206) {
    const struct CPU_State initial_cpu = {.pc=0xe8df, .a=0x04, .x=0x79, .y=0x20, .sp=0x95, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xe8df, .value=0x90}, {.addr=0xe8e0, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0xe94d, .a=0x04, .x=0x79, .y=0x20, .sp=0x95, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0xe8df, .value=0x90}, {.addr=0xe8e0, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0xe8df, .value=0x90, .type=IO_READ},
        {.addr=0xe8e0, .value=0x6c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0207) {
    const struct CPU_State initial_cpu = {.pc=0x1145, .a=0x0d, .x=0xfb, .y=0xce, .sp=0x7c, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x1145, .value=0x90}, {.addr=0x1146, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x11a7, .a=0x0d, .x=0xfb, .y=0xce, .sp=0x7c, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x1145, .value=0x90}, {.addr=0x1146, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x1145, .value=0x90, .type=IO_READ},
        {.addr=0x1146, .value=0x60, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0208) {
    const struct CPU_State initial_cpu = {.pc=0x4a8e, .a=0x21, .x=0xb8, .y=0x15, .sp=0xb5, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x4a8e, .value=0x90}, {.addr=0x4a8f, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x4a2d, .a=0x21, .x=0xb8, .y=0x15, .sp=0xb5, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x4a8e, .value=0x90}, {.addr=0x4a8f, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x4a8e, .value=0x90, .type=IO_READ},
        {.addr=0x4a8f, .value=0x9d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0209) {
    const struct CPU_State initial_cpu = {.pc=0x3440, .a=0x64, .x=0xf3, .y=0x5d, .sp=0x54, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x3440, .value=0x90}, {.addr=0x3441, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x3442, .a=0x64, .x=0xf3, .y=0x5d, .sp=0x54, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x3440, .value=0x90}, {.addr=0x3441, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x3440, .value=0x90, .type=IO_READ},
        {.addr=0x3441, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_020A) {
    const struct CPU_State initial_cpu = {.pc=0x59b9, .a=0xee, .x=0x0c, .y=0x4b, .sp=0xff, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x59b9, .value=0x90}, {.addr=0x59ba, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0x59c2, .a=0xee, .x=0x0c, .y=0x4b, .sp=0xff, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x59b9, .value=0x90}, {.addr=0x59ba, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0x59b9, .value=0x90, .type=IO_READ},
        {.addr=0x59ba, .value=0x07, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_020B) {
    const struct CPU_State initial_cpu = {.pc=0xfa5d, .a=0xd1, .x=0x1f, .y=0x04, .sp=0xf4, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0xfa5d, .value=0x90}, {.addr=0xfa5e, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0xface, .a=0xd1, .x=0x1f, .y=0x04, .sp=0xf4, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xfa5d, .value=0x90}, {.addr=0xfa5e, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0xfa5d, .value=0x90, .type=IO_READ},
        {.addr=0xfa5e, .value=0x6f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_020C) {
    const struct CPU_State initial_cpu = {.pc=0x3dc8, .a=0xae, .x=0x8f, .y=0xda, .sp=0x9f, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x3dc8, .value=0x90}, {.addr=0x3dc9, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0x3dca, .a=0xae, .x=0x8f, .y=0xda, .sp=0x9f, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x3dc8, .value=0x90}, {.addr=0x3dc9, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0x3dc8, .value=0x90, .type=IO_READ},
        {.addr=0x3dc9, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_020D) {
    const struct CPU_State initial_cpu = {.pc=0x9f6b, .a=0xbe, .x=0xc3, .y=0xf7, .sp=0x53, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x9f6b, .value=0x90}, {.addr=0x9f6c, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0x9f6d, .a=0xbe, .x=0xc3, .y=0xf7, .sp=0x53, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x9f6b, .value=0x90}, {.addr=0x9f6c, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0x9f6b, .value=0x90, .type=IO_READ},
        {.addr=0x9f6c, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_020E) {
    const struct CPU_State initial_cpu = {.pc=0xb21c, .a=0x27, .x=0xbc, .y=0x67, .sp=0xe9, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xb21c, .value=0x90}, {.addr=0xb21d, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0xb21e, .a=0x27, .x=0xbc, .y=0x67, .sp=0xe9, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xb21c, .value=0x90}, {.addr=0xb21d, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0xb21c, .value=0x90, .type=IO_READ},
        {.addr=0xb21d, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_020F) {
    const struct CPU_State initial_cpu = {.pc=0x4756, .a=0x20, .x=0xc2, .y=0x02, .sp=0x3c, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x4756, .value=0x90}, {.addr=0x4757, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0x4758, .a=0x20, .x=0xc2, .y=0x02, .sp=0x3c, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x4756, .value=0x90}, {.addr=0x4757, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0x4756, .value=0x90, .type=IO_READ},
        {.addr=0x4757, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0210) {
    const struct CPU_State initial_cpu = {.pc=0x8ed3, .a=0x4e, .x=0x6d, .y=0x6f, .sp=0x4a, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x8ed3, .value=0x90}, {.addr=0x8ed4, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x8ed5, .a=0x4e, .x=0x6d, .y=0x6f, .sp=0x4a, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x8ed3, .value=0x90}, {.addr=0x8ed4, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x8ed3, .value=0x90, .type=IO_READ},
        {.addr=0x8ed4, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0211) {
    const struct CPU_State initial_cpu = {.pc=0x606e, .a=0x38, .x=0x10, .y=0xe8, .sp=0xf7, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x606e, .value=0x90}, {.addr=0x606f, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x6070, .a=0x38, .x=0x10, .y=0xe8, .sp=0xf7, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x606e, .value=0x90}, {.addr=0x606f, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x606e, .value=0x90, .type=IO_READ},
        {.addr=0x606f, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0212) {
    const struct CPU_State initial_cpu = {.pc=0xee85, .a=0x9a, .x=0x3e, .y=0xbe, .sp=0x10, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0xee85, .value=0x90}, {.addr=0xee86, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xeef4, .a=0x9a, .x=0x3e, .y=0xbe, .sp=0x10, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xee85, .value=0x90}, {.addr=0xee86, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xee85, .value=0x90, .type=IO_READ},
        {.addr=0xee86, .value=0x6d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0213) {
    const struct CPU_State initial_cpu = {.pc=0xdf5e, .a=0xf8, .x=0x0a, .y=0xa6, .sp=0x1b, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xdf5e, .value=0x90}, {.addr=0xdf5f, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0xdf60, .a=0xf8, .x=0x0a, .y=0xa6, .sp=0x1b, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0xdf5e, .value=0x90}, {.addr=0xdf5f, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0xdf5e, .value=0x90, .type=IO_READ},
        {.addr=0xdf5f, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0214) {
    const struct CPU_State initial_cpu = {.pc=0x7bfb, .a=0x1c, .x=0xa5, .y=0x00, .sp=0x19, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x7bfb, .value=0x90}, {.addr=0x7bfc, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x7bfd, .a=0x1c, .x=0xa5, .y=0x00, .sp=0x19, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x7bfb, .value=0x90}, {.addr=0x7bfc, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x7bfb, .value=0x90, .type=IO_READ},
        {.addr=0x7bfc, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0215) {
    const struct CPU_State initial_cpu = {.pc=0x7f16, .a=0x01, .x=0xfb, .y=0x23, .sp=0xb2, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x7f16, .value=0x90}, {.addr=0x7f17, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0x7f01, .a=0x01, .x=0xfb, .y=0x23, .sp=0xb2, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x7f16, .value=0x90}, {.addr=0x7f17, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0x7f16, .value=0x90, .type=IO_READ},
        {.addr=0x7f17, .value=0xe9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0216) {
    const struct CPU_State initial_cpu = {.pc=0x3996, .a=0xe1, .x=0x66, .y=0x8c, .sp=0xb4, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x3996, .value=0x90}, {.addr=0x3997, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0x3999, .a=0xe1, .x=0x66, .y=0x8c, .sp=0xb4, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x3996, .value=0x90}, {.addr=0x3997, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0x3996, .value=0x90, .type=IO_READ},
        {.addr=0x3997, .value=0x01, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0217) {
    const struct CPU_State initial_cpu = {.pc=0xac4f, .a=0xd9, .x=0xc3, .y=0xc2, .sp=0x9a, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xac4f, .value=0x90}, {.addr=0xac50, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0xac0c, .a=0xd9, .x=0xc3, .y=0xc2, .sp=0x9a, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0xac4f, .value=0x90}, {.addr=0xac50, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0xac4f, .value=0x90, .type=IO_READ},
        {.addr=0xac50, .value=0xbb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0218) {
    const struct CPU_State initial_cpu = {.pc=0x2011, .a=0xa9, .x=0xa7, .y=0x45, .sp=0x00, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x2011, .value=0x90}, {.addr=0x2012, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0x1ff8, .a=0xa9, .x=0xa7, .y=0x45, .sp=0x00, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x2011, .value=0x90}, {.addr=0x2012, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0x2011, .value=0x90, .type=IO_READ},
        {.addr=0x2012, .value=0xe5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0219) {
    const struct CPU_State initial_cpu = {.pc=0xd9e8, .a=0x8c, .x=0xda, .y=0xe6, .sp=0x17, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xd9e8, .value=0x90}, {.addr=0xd9e9, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0xda35, .a=0x8c, .x=0xda, .y=0xe6, .sp=0x17, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xd9e8, .value=0x90}, {.addr=0xd9e9, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0xd9e8, .value=0x90, .type=IO_READ},
        {.addr=0xd9e9, .value=0x4b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_021A) {
    const struct CPU_State initial_cpu = {.pc=0x4a0d, .a=0xf0, .x=0x1b, .y=0x48, .sp=0xa7, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x4a0d, .value=0x90}, {.addr=0x4a0e, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0x499a, .a=0xf0, .x=0x1b, .y=0x48, .sp=0xa7, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x4a0d, .value=0x90}, {.addr=0x4a0e, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0x4a0d, .value=0x90, .type=IO_READ},
        {.addr=0x4a0e, .value=0x8b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_021B) {
    const struct CPU_State initial_cpu = {.pc=0x519a, .a=0xe7, .x=0xdb, .y=0x6a, .sp=0xcb, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x519a, .value=0x90}, {.addr=0x519b, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0x519c, .a=0xe7, .x=0xdb, .y=0x6a, .sp=0xcb, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x519a, .value=0x90}, {.addr=0x519b, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0x519a, .value=0x90, .type=IO_READ},
        {.addr=0x519b, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_021C) {
    const struct CPU_State initial_cpu = {.pc=0x6c4e, .a=0x8d, .x=0x06, .y=0xed, .sp=0x3e, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x6c4e, .value=0x90}, {.addr=0x6c4f, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0x6c50, .a=0x8d, .x=0x06, .y=0xed, .sp=0x3e, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x6c4e, .value=0x90}, {.addr=0x6c4f, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0x6c4e, .value=0x90, .type=IO_READ},
        {.addr=0x6c4f, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_021D) {
    const struct CPU_State initial_cpu = {.pc=0xcda9, .a=0xe2, .x=0x94, .y=0xa0, .sp=0x45, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xcda9, .value=0x90}, {.addr=0xcdaa, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xcdab, .a=0xe2, .x=0x94, .y=0xa0, .sp=0x45, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xcda9, .value=0x90}, {.addr=0xcdaa, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xcda9, .value=0x90, .type=IO_READ},
        {.addr=0xcdaa, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_021E) {
    const struct CPU_State initial_cpu = {.pc=0x6172, .a=0x45, .x=0xdd, .y=0x8a, .sp=0xf1, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x6172, .value=0x90}, {.addr=0x6173, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0x6174, .a=0x45, .x=0xdd, .y=0x8a, .sp=0xf1, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x6172, .value=0x90}, {.addr=0x6173, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0x6172, .value=0x90, .type=IO_READ},
        {.addr=0x6173, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_021F) {
    const struct CPU_State initial_cpu = {.pc=0x4c63, .a=0x22, .x=0x70, .y=0x2b, .sp=0x8b, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x4c63, .value=0x90}, {.addr=0x4c64, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0x4c2e, .a=0x22, .x=0x70, .y=0x2b, .sp=0x8b, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x4c63, .value=0x90}, {.addr=0x4c64, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0x4c63, .value=0x90, .type=IO_READ},
        {.addr=0x4c64, .value=0xc9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0220) {
    const struct CPU_State initial_cpu = {.pc=0x7fb8, .a=0xce, .x=0xa5, .y=0x31, .sp=0x22, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x7fb8, .value=0x90}, {.addr=0x7fb9, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x7ffd, .a=0xce, .x=0xa5, .y=0x31, .sp=0x22, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x7fb8, .value=0x90}, {.addr=0x7fb9, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x7fb8, .value=0x90, .type=IO_READ},
        {.addr=0x7fb9, .value=0x43, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0221) {
    const struct CPU_State initial_cpu = {.pc=0xf60c, .a=0xb5, .x=0x04, .y=0x9f, .sp=0xb8, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xf60c, .value=0x90}, {.addr=0xf60d, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0xf60e, .a=0xb5, .x=0x04, .y=0x9f, .sp=0xb8, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0xf60c, .value=0x90}, {.addr=0xf60d, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0xf60c, .value=0x90, .type=IO_READ},
        {.addr=0xf60d, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0222) {
    const struct CPU_State initial_cpu = {.pc=0x792e, .a=0x9d, .x=0x8c, .y=0xf1, .sp=0xbb, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x792e, .value=0x90}, {.addr=0x792f, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0x7930, .a=0x9d, .x=0x8c, .y=0xf1, .sp=0xbb, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x792e, .value=0x90}, {.addr=0x792f, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0x792e, .value=0x90, .type=IO_READ},
        {.addr=0x792f, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0223) {
    const struct CPU_State initial_cpu = {.pc=0xc5c3, .a=0xe3, .x=0xa3, .y=0xe8, .sp=0x79, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xc5c3, .value=0x90}, {.addr=0xc5c4, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0xc63c, .a=0xe3, .x=0xa3, .y=0xe8, .sp=0x79, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0xc5c3, .value=0x90}, {.addr=0xc5c4, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0xc5c3, .value=0x90, .type=IO_READ},
        {.addr=0xc5c4, .value=0x77, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0224) {
    const struct CPU_State initial_cpu = {.pc=0xadf7, .a=0x78, .x=0x89, .y=0x68, .sp=0x85, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xadf7, .value=0x90}, {.addr=0xadf8, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xae15, .a=0x78, .x=0x89, .y=0x68, .sp=0x85, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0xadf7, .value=0x90}, {.addr=0xadf8, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xadf7, .value=0x90, .type=IO_READ},
        {.addr=0xadf8, .value=0x1c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0225) {
    const struct CPU_State initial_cpu = {.pc=0x340f, .a=0x52, .x=0xab, .y=0x82, .sp=0xee, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x340f, .value=0x90}, {.addr=0x3410, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0x340b, .a=0x52, .x=0xab, .y=0x82, .sp=0xee, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x340f, .value=0x90}, {.addr=0x3410, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0x340f, .value=0x90, .type=IO_READ},
        {.addr=0x3410, .value=0xfa, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0226) {
    const struct CPU_State initial_cpu = {.pc=0x04a5, .a=0x55, .x=0x6e, .y=0xfc, .sp=0x78, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x04a5, .value=0x90}, {.addr=0x04a6, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0x04c2, .a=0x55, .x=0x6e, .y=0xfc, .sp=0x78, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x04a5, .value=0x90}, {.addr=0x04a6, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0x04a5, .value=0x90, .type=IO_READ},
        {.addr=0x04a6, .value=0x1b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0227) {
    const struct CPU_State initial_cpu = {.pc=0x5310, .a=0xc5, .x=0xd7, .y=0xf2, .sp=0x59, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x5310, .value=0x90}, {.addr=0x5311, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0x52f9, .a=0xc5, .x=0xd7, .y=0xf2, .sp=0x59, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x5310, .value=0x90}, {.addr=0x5311, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0x5310, .value=0x90, .type=IO_READ},
        {.addr=0x5311, .value=0xe7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0228) {
    const struct CPU_State initial_cpu = {.pc=0xfc36, .a=0xf0, .x=0x79, .y=0x6b, .sp=0xfd, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xfc36, .value=0x90}, {.addr=0xfc37, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0xfc38, .a=0xf0, .x=0x79, .y=0x6b, .sp=0xfd, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xfc36, .value=0x90}, {.addr=0xfc37, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0xfc36, .value=0x90, .type=IO_READ},
        {.addr=0xfc37, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0229) {
    const struct CPU_State initial_cpu = {.pc=0x4e56, .a=0xdd, .x=0x0c, .y=0xce, .sp=0x3e, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x4e56, .value=0x90}, {.addr=0x4e57, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x4e0c, .a=0xdd, .x=0x0c, .y=0xce, .sp=0x3e, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x4e56, .value=0x90}, {.addr=0x4e57, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x4e56, .value=0x90, .type=IO_READ},
        {.addr=0x4e57, .value=0xb4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_022A) {
    const struct CPU_State initial_cpu = {.pc=0x5897, .a=0x3e, .x=0x15, .y=0x73, .sp=0xc9, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x5897, .value=0x90}, {.addr=0x5898, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0x5899, .a=0x3e, .x=0x15, .y=0x73, .sp=0xc9, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x5897, .value=0x90}, {.addr=0x5898, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0x5897, .value=0x90, .type=IO_READ},
        {.addr=0x5898, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_022B) {
    const struct CPU_State initial_cpu = {.pc=0x7203, .a=0x37, .x=0xfd, .y=0x82, .sp=0xf8, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x7203, .value=0x90}, {.addr=0x7204, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0x7205, .a=0x37, .x=0xfd, .y=0x82, .sp=0xf8, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x7203, .value=0x90}, {.addr=0x7204, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0x7203, .value=0x90, .type=IO_READ},
        {.addr=0x7204, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_022C) {
    const struct CPU_State initial_cpu = {.pc=0xdc64, .a=0x7f, .x=0x34, .y=0xed, .sp=0x2d, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xdc64, .value=0x90}, {.addr=0xdc65, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0xdc66, .a=0x7f, .x=0x34, .y=0xed, .sp=0x2d, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xdc64, .value=0x90}, {.addr=0xdc65, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0xdc64, .value=0x90, .type=IO_READ},
        {.addr=0xdc65, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_022D) {
    const struct CPU_State initial_cpu = {.pc=0x9849, .a=0x86, .x=0x10, .y=0x10, .sp=0xb5, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x9849, .value=0x90}, {.addr=0x984a, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0x9823, .a=0x86, .x=0x10, .y=0x10, .sp=0xb5, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x9849, .value=0x90}, {.addr=0x984a, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0x9849, .value=0x90, .type=IO_READ},
        {.addr=0x984a, .value=0xd8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_022E) {
    const struct CPU_State initial_cpu = {.pc=0xccbd, .a=0x0f, .x=0x24, .y=0x62, .sp=0xe5, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xccbd, .value=0x90}, {.addr=0xccbe, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0xccca, .a=0x0f, .x=0x24, .y=0x62, .sp=0xe5, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0xccbd, .value=0x90}, {.addr=0xccbe, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0xccbd, .value=0x90, .type=IO_READ},
        {.addr=0xccbe, .value=0x0b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_022F) {
    const struct CPU_State initial_cpu = {.pc=0x8a85, .a=0x7f, .x=0xa8, .y=0xea, .sp=0xc6, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x8a85, .value=0x90}, {.addr=0x8a86, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0x8a39, .a=0x7f, .x=0xa8, .y=0xea, .sp=0xc6, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x8a85, .value=0x90}, {.addr=0x8a86, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0x8a85, .value=0x90, .type=IO_READ},
        {.addr=0x8a86, .value=0xb2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0230) {
    const struct CPU_State initial_cpu = {.pc=0x1887, .a=0xe1, .x=0xb1, .y=0x0c, .sp=0x87, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x1887, .value=0x90}, {.addr=0x1888, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0x1889, .a=0xe1, .x=0xb1, .y=0x0c, .sp=0x87, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x1887, .value=0x90}, {.addr=0x1888, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0x1887, .value=0x90, .type=IO_READ},
        {.addr=0x1888, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0231) {
    const struct CPU_State initial_cpu = {.pc=0xba3f, .a=0xdc, .x=0xcb, .y=0xb7, .sp=0x58, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xba3f, .value=0x90}, {.addr=0xba40, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0xba96, .a=0xdc, .x=0xcb, .y=0xb7, .sp=0x58, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xba3f, .value=0x90}, {.addr=0xba40, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0xba3f, .value=0x90, .type=IO_READ},
        {.addr=0xba40, .value=0x55, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0232) {
    const struct CPU_State initial_cpu = {.pc=0x0fa8, .a=0x0a, .x=0xb5, .y=0x06, .sp=0xa6, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x0fa8, .value=0x90}, {.addr=0x0fa9, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0x0f93, .a=0x0a, .x=0xb5, .y=0x06, .sp=0xa6, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x0fa8, .value=0x90}, {.addr=0x0fa9, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0x0fa8, .value=0x90, .type=IO_READ},
        {.addr=0x0fa9, .value=0xe9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0233) {
    const struct CPU_State initial_cpu = {.pc=0xc7c4, .a=0x37, .x=0x32, .y=0x99, .sp=0x22, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xc7c4, .value=0x90}, {.addr=0xc7c5, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0xc7c6, .a=0x37, .x=0x32, .y=0x99, .sp=0x22, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xc7c4, .value=0x90}, {.addr=0xc7c5, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0xc7c4, .value=0x90, .type=IO_READ},
        {.addr=0xc7c5, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0234) {
    const struct CPU_State initial_cpu = {.pc=0x08ce, .a=0x71, .x=0x1e, .y=0x40, .sp=0x98, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x08ce, .value=0x90}, {.addr=0x08cf, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0x08db, .a=0x71, .x=0x1e, .y=0x40, .sp=0x98, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x08ce, .value=0x90}, {.addr=0x08cf, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0x08ce, .value=0x90, .type=IO_READ},
        {.addr=0x08cf, .value=0x0b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0235) {
    const struct CPU_State initial_cpu = {.pc=0x2e8a, .a=0xd6, .x=0xb9, .y=0x32, .sp=0x88, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x2e8a, .value=0x90}, {.addr=0x2e8b, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0x2e5f, .a=0xd6, .x=0xb9, .y=0x32, .sp=0x88, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x2e8a, .value=0x90}, {.addr=0x2e8b, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0x2e8a, .value=0x90, .type=IO_READ},
        {.addr=0x2e8b, .value=0xd3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0236) {
    const struct CPU_State initial_cpu = {.pc=0xcdce, .a=0xf0, .x=0xfb, .y=0xf8, .sp=0x93, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xcdce, .value=0x90}, {.addr=0xcdcf, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0xcdd0, .a=0xf0, .x=0xfb, .y=0xf8, .sp=0x93, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xcdce, .value=0x90}, {.addr=0xcdcf, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0xcdce, .value=0x90, .type=IO_READ},
        {.addr=0xcdcf, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0237) {
    const struct CPU_State initial_cpu = {.pc=0x1de9, .a=0xdc, .x=0xc2, .y=0x91, .sp=0x5a, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x1de9, .value=0x90}, {.addr=0x1dea, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x1deb, .a=0xdc, .x=0xc2, .y=0x91, .sp=0x5a, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x1de9, .value=0x90}, {.addr=0x1dea, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x1de9, .value=0x90, .type=IO_READ},
        {.addr=0x1dea, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0238) {
    const struct CPU_State initial_cpu = {.pc=0xa8f0, .a=0x4f, .x=0xbe, .y=0x7b, .sp=0xb1, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xa8f0, .value=0x90}, {.addr=0xa8f1, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0xa8ea, .a=0x4f, .x=0xbe, .y=0x7b, .sp=0xb1, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xa8f0, .value=0x90}, {.addr=0xa8f1, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0xa8f0, .value=0x90, .type=IO_READ},
        {.addr=0xa8f1, .value=0xf8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0239) {
    const struct CPU_State initial_cpu = {.pc=0xb5b1, .a=0x5f, .x=0x94, .y=0x1d, .sp=0x62, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0xb5b1, .value=0x90}, {.addr=0xb5b2, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0xb62d, .a=0x5f, .x=0x94, .y=0x1d, .sp=0x62, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0xb5b1, .value=0x90}, {.addr=0xb5b2, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0xb5b1, .value=0x90, .type=IO_READ},
        {.addr=0xb5b2, .value=0x7a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_023A) {
    const struct CPU_State initial_cpu = {.pc=0xa016, .a=0x32, .x=0x4e, .y=0xe8, .sp=0x18, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xa016, .value=0x90}, {.addr=0xa017, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x9fb4, .a=0x32, .x=0x4e, .y=0xe8, .sp=0x18, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xa016, .value=0x90}, {.addr=0xa017, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xa016, .value=0x90, .type=IO_READ},
        {.addr=0xa017, .value=0x9c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_023B) {
    const struct CPU_State initial_cpu = {.pc=0xe2a8, .a=0x98, .x=0x3a, .y=0x5e, .sp=0x02, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xe2a8, .value=0x90}, {.addr=0xe2a9, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0xe2aa, .a=0x98, .x=0x3a, .y=0x5e, .sp=0x02, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0xe2a8, .value=0x90}, {.addr=0xe2a9, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0xe2a8, .value=0x90, .type=IO_READ},
        {.addr=0xe2a9, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_023C) {
    const struct CPU_State initial_cpu = {.pc=0x3432, .a=0x68, .x=0xe4, .y=0x7b, .sp=0x27, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x3432, .value=0x90}, {.addr=0x3433, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0x3434, .a=0x68, .x=0xe4, .y=0x7b, .sp=0x27, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x3432, .value=0x90}, {.addr=0x3433, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0x3432, .value=0x90, .type=IO_READ},
        {.addr=0x3433, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_023D) {
    const struct CPU_State initial_cpu = {.pc=0x4da8, .a=0x9a, .x=0xc9, .y=0x34, .sp=0x93, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x4da8, .value=0x90}, {.addr=0x4da9, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x4e26, .a=0x9a, .x=0xc9, .y=0x34, .sp=0x93, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x4da8, .value=0x90}, {.addr=0x4da9, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x4da8, .value=0x90, .type=IO_READ},
        {.addr=0x4da9, .value=0x7c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_023E) {
    const struct CPU_State initial_cpu = {.pc=0x55f4, .a=0xae, .x=0x16, .y=0xe4, .sp=0x6a, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x55f4, .value=0x90}, {.addr=0x55f5, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0x563b, .a=0xae, .x=0x16, .y=0xe4, .sp=0x6a, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x55f4, .value=0x90}, {.addr=0x55f5, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0x55f4, .value=0x90, .type=IO_READ},
        {.addr=0x55f5, .value=0x45, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_023F) {
    const struct CPU_State initial_cpu = {.pc=0x7fca, .a=0xb1, .x=0xd0, .y=0xb4, .sp=0x5f, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x7fca, .value=0x90}, {.addr=0x7fcb, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0x7fcc, .a=0xb1, .x=0xd0, .y=0xb4, .sp=0x5f, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x7fca, .value=0x90}, {.addr=0x7fcb, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0x7fca, .value=0x90, .type=IO_READ},
        {.addr=0x7fcb, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0240) {
    const struct CPU_State initial_cpu = {.pc=0xeaa8, .a=0x61, .x=0x75, .y=0xe7, .sp=0x1e, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xeaa8, .value=0x90}, {.addr=0xeaa9, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0xeaaa, .a=0x61, .x=0x75, .y=0xe7, .sp=0x1e, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xeaa8, .value=0x90}, {.addr=0xeaa9, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0xeaa8, .value=0x90, .type=IO_READ},
        {.addr=0xeaa9, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0241) {
    const struct CPU_State initial_cpu = {.pc=0xa52c, .a=0x56, .x=0xd1, .y=0xb1, .sp=0x4e, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0xa52c, .value=0x90}, {.addr=0xa52d, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0xa52e, .a=0x56, .x=0xd1, .y=0xb1, .sp=0x4e, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xa52c, .value=0x90}, {.addr=0xa52d, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0xa52c, .value=0x90, .type=IO_READ},
        {.addr=0xa52d, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0242) {
    const struct CPU_State initial_cpu = {.pc=0xde86, .a=0xe2, .x=0xbe, .y=0x57, .sp=0x3f, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xde86, .value=0x90}, {.addr=0xde87, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0xde26, .a=0xe2, .x=0xbe, .y=0x57, .sp=0x3f, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xde86, .value=0x90}, {.addr=0xde87, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0xde86, .value=0x90, .type=IO_READ},
        {.addr=0xde87, .value=0x9e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0243) {
    const struct CPU_State initial_cpu = {.pc=0xbee6, .a=0x8e, .x=0xed, .y=0x4e, .sp=0xb6, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0xbee6, .value=0x90}, {.addr=0xbee7, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xbee8, .a=0x8e, .x=0xed, .y=0x4e, .sp=0xb6, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0xbee6, .value=0x90}, {.addr=0xbee7, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xbee6, .value=0x90, .type=IO_READ},
        {.addr=0xbee7, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0244) {
    const struct CPU_State initial_cpu = {.pc=0xefed, .a=0x5f, .x=0xcf, .y=0xb3, .sp=0x05, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xefed, .value=0x90}, {.addr=0xefee, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0xefef, .a=0x5f, .x=0xcf, .y=0xb3, .sp=0x05, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xefed, .value=0x90}, {.addr=0xefee, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0xefed, .value=0x90, .type=IO_READ},
        {.addr=0xefee, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0245) {
    const struct CPU_State initial_cpu = {.pc=0x111a, .a=0x58, .x=0x78, .y=0xce, .sp=0x93, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x111a, .value=0x90}, {.addr=0x111b, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0x10ff, .a=0x58, .x=0x78, .y=0xce, .sp=0x93, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x111a, .value=0x90}, {.addr=0x111b, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0x111a, .value=0x90, .type=IO_READ},
        {.addr=0x111b, .value=0xe3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0246) {
    const struct CPU_State initial_cpu = {.pc=0xf268, .a=0x43, .x=0x66, .y=0x8a, .sp=0x35, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xf268, .value=0x90}, {.addr=0xf269, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0xf26a, .a=0x43, .x=0x66, .y=0x8a, .sp=0x35, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xf268, .value=0x90}, {.addr=0xf269, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0xf268, .value=0x90, .type=IO_READ},
        {.addr=0xf269, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0247) {
    const struct CPU_State initial_cpu = {.pc=0xba0e, .a=0x8e, .x=0x40, .y=0x9c, .sp=0xca, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xba0e, .value=0x90}, {.addr=0xba0f, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0xba09, .a=0x8e, .x=0x40, .y=0x9c, .sp=0xca, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xba0e, .value=0x90}, {.addr=0xba0f, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0xba0e, .value=0x90, .type=IO_READ},
        {.addr=0xba0f, .value=0xf9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0248) {
    const struct CPU_State initial_cpu = {.pc=0x6196, .a=0x7c, .x=0x0b, .y=0x11, .sp=0x3c, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x6196, .value=0x90}, {.addr=0x6197, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x6198, .a=0x7c, .x=0x0b, .y=0x11, .sp=0x3c, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x6196, .value=0x90}, {.addr=0x6197, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0x6196, .value=0x90, .type=IO_READ},
        {.addr=0x6197, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0249) {
    const struct CPU_State initial_cpu = {.pc=0xc126, .a=0x2e, .x=0x4a, .y=0xf6, .sp=0x6d, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xc126, .value=0x90}, {.addr=0xc127, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0xc11a, .a=0x2e, .x=0x4a, .y=0xf6, .sp=0x6d, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xc126, .value=0x90}, {.addr=0xc127, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0xc126, .value=0x90, .type=IO_READ},
        {.addr=0xc127, .value=0xf2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_024A) {
    const struct CPU_State initial_cpu = {.pc=0xb69d, .a=0x24, .x=0x7f, .y=0xde, .sp=0xa4, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xb69d, .value=0x90}, {.addr=0xb69e, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0xb69f, .a=0x24, .x=0x7f, .y=0xde, .sp=0xa4, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xb69d, .value=0x90}, {.addr=0xb69e, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0xb69d, .value=0x90, .type=IO_READ},
        {.addr=0xb69e, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_024B) {
    const struct CPU_State initial_cpu = {.pc=0x0af2, .a=0x2f, .x=0x38, .y=0xa3, .sp=0x3b, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x0af2, .value=0x90}, {.addr=0x0af3, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0x0afe, .a=0x2f, .x=0x38, .y=0xa3, .sp=0x3b, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x0af2, .value=0x90}, {.addr=0x0af3, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0x0af2, .value=0x90, .type=IO_READ},
        {.addr=0x0af3, .value=0x0a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_024C) {
    const struct CPU_State initial_cpu = {.pc=0x681f, .a=0xc1, .x=0x3a, .y=0xc8, .sp=0x3a, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x681f, .value=0x90}, {.addr=0x6820, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0x6821, .a=0xc1, .x=0x3a, .y=0xc8, .sp=0x3a, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x681f, .value=0x90}, {.addr=0x6820, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0x681f, .value=0x90, .type=IO_READ},
        {.addr=0x6820, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_024D) {
    const struct CPU_State initial_cpu = {.pc=0x0f9a, .a=0x9b, .x=0xa6, .y=0x78, .sp=0x39, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x0f9a, .value=0x90}, {.addr=0x0f9b, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x0f9c, .a=0x9b, .x=0xa6, .y=0x78, .sp=0x39, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x0f9a, .value=0x90}, {.addr=0x0f9b, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x0f9a, .value=0x90, .type=IO_READ},
        {.addr=0x0f9b, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_024E) {
    const struct CPU_State initial_cpu = {.pc=0x1934, .a=0x1c, .x=0x07, .y=0x09, .sp=0x06, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x1934, .value=0x90}, {.addr=0x1935, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0x18bd, .a=0x1c, .x=0x07, .y=0x09, .sp=0x06, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x1934, .value=0x90}, {.addr=0x1935, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0x1934, .value=0x90, .type=IO_READ},
        {.addr=0x1935, .value=0x87, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_024F) {
    const struct CPU_State initial_cpu = {.pc=0x37c1, .a=0xc3, .x=0x86, .y=0x83, .sp=0xf5, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x37c1, .value=0x90}, {.addr=0x37c2, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x37c3, .a=0xc3, .x=0x86, .y=0x83, .sp=0xf5, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x37c1, .value=0x90}, {.addr=0x37c2, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x37c1, .value=0x90, .type=IO_READ},
        {.addr=0x37c2, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0250) {
    const struct CPU_State initial_cpu = {.pc=0x4b47, .a=0x49, .x=0x6e, .y=0xb2, .sp=0xc3, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x4b47, .value=0x90}, {.addr=0x4b48, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0x4b49, .a=0x49, .x=0x6e, .y=0xb2, .sp=0xc3, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x4b47, .value=0x90}, {.addr=0x4b48, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0x4b47, .value=0x90, .type=IO_READ},
        {.addr=0x4b48, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0251) {
    const struct CPU_State initial_cpu = {.pc=0xf82e, .a=0x00, .x=0x97, .y=0x98, .sp=0x64, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xf82e, .value=0x90}, {.addr=0xf82f, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0xf830, .a=0x00, .x=0x97, .y=0x98, .sp=0x64, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xf82e, .value=0x90}, {.addr=0xf82f, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0xf82e, .value=0x90, .type=IO_READ},
        {.addr=0xf82f, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0252) {
    const struct CPU_State initial_cpu = {.pc=0x8e37, .a=0x6a, .x=0xae, .y=0x50, .sp=0x49, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x8e37, .value=0x90}, {.addr=0x8e38, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0x8e39, .a=0x6a, .x=0xae, .y=0x50, .sp=0x49, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x8e37, .value=0x90}, {.addr=0x8e38, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0x8e37, .value=0x90, .type=IO_READ},
        {.addr=0x8e38, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0253) {
    const struct CPU_State initial_cpu = {.pc=0x5dcd, .a=0x7c, .x=0xfb, .y=0x31, .sp=0x10, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x5dcd, .value=0x90}, {.addr=0x5dce, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x5df5, .a=0x7c, .x=0xfb, .y=0x31, .sp=0x10, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x5dcd, .value=0x90}, {.addr=0x5dce, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x5dcd, .value=0x90, .type=IO_READ},
        {.addr=0x5dce, .value=0x26, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0254) {
    const struct CPU_State initial_cpu = {.pc=0xad5f, .a=0x98, .x=0x23, .y=0xe5, .sp=0x15, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xad5f, .value=0x90}, {.addr=0xad60, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0xad61, .a=0x98, .x=0x23, .y=0xe5, .sp=0x15, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0xad5f, .value=0x90}, {.addr=0xad60, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0xad5f, .value=0x90, .type=IO_READ},
        {.addr=0xad60, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0255) {
    const struct CPU_State initial_cpu = {.pc=0x129b, .a=0x9c, .x=0xfd, .y=0x13, .sp=0x95, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x129b, .value=0x90}, {.addr=0x129c, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0x129d, .a=0x9c, .x=0xfd, .y=0x13, .sp=0x95, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x129b, .value=0x90}, {.addr=0x129c, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0x129b, .value=0x90, .type=IO_READ},
        {.addr=0x129c, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0256) {
    const struct CPU_State initial_cpu = {.pc=0x6543, .a=0xd3, .x=0xff, .y=0xaf, .sp=0xf1, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x6543, .value=0x90}, {.addr=0x6544, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0x65c0, .a=0xd3, .x=0xff, .y=0xaf, .sp=0xf1, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x6543, .value=0x90}, {.addr=0x6544, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0x6543, .value=0x90, .type=IO_READ},
        {.addr=0x6544, .value=0x7b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0257) {
    const struct CPU_State initial_cpu = {.pc=0xc5c9, .a=0xc7, .x=0xb3, .y=0x89, .sp=0xb2, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xc5c9, .value=0x90}, {.addr=0xc5ca, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0xc5cb, .a=0xc7, .x=0xb3, .y=0x89, .sp=0xb2, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xc5c9, .value=0x90}, {.addr=0xc5ca, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0xc5c9, .value=0x90, .type=IO_READ},
        {.addr=0xc5ca, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0258) {
    const struct CPU_State initial_cpu = {.pc=0x4c06, .a=0x96, .x=0x0a, .y=0xdd, .sp=0x3c, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x4c06, .value=0x90}, {.addr=0x4c07, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0x4c4a, .a=0x96, .x=0x0a, .y=0xdd, .sp=0x3c, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x4c06, .value=0x90}, {.addr=0x4c07, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0x4c06, .value=0x90, .type=IO_READ},
        {.addr=0x4c07, .value=0x42, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0259) {
    const struct CPU_State initial_cpu = {.pc=0x29d6, .a=0x90, .x=0x04, .y=0x30, .sp=0x14, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x29d6, .value=0x90}, {.addr=0x29d7, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0x29d8, .a=0x90, .x=0x04, .y=0x30, .sp=0x14, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x29d6, .value=0x90}, {.addr=0x29d7, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0x29d6, .value=0x90, .type=IO_READ},
        {.addr=0x29d7, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_025A) {
    const struct CPU_State initial_cpu = {.pc=0x1f80, .a=0x52, .x=0x84, .y=0x00, .sp=0xaa, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x1f80, .value=0x90}, {.addr=0x1f81, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0x1ffc, .a=0x52, .x=0x84, .y=0x00, .sp=0xaa, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x1f80, .value=0x90}, {.addr=0x1f81, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0x1f80, .value=0x90, .type=IO_READ},
        {.addr=0x1f81, .value=0x7a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_025B) {
    const struct CPU_State initial_cpu = {.pc=0xf451, .a=0xda, .x=0x46, .y=0x5a, .sp=0x0e, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xf451, .value=0x90}, {.addr=0xf452, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0xf416, .a=0xda, .x=0x46, .y=0x5a, .sp=0x0e, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0xf451, .value=0x90}, {.addr=0xf452, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0xf451, .value=0x90, .type=IO_READ},
        {.addr=0xf452, .value=0xc3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_025C) {
    const struct CPU_State initial_cpu = {.pc=0xd923, .a=0x80, .x=0xe8, .y=0x09, .sp=0x00, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xd923, .value=0x90}, {.addr=0xd924, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0xd925, .a=0x80, .x=0xe8, .y=0x09, .sp=0x00, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0xd923, .value=0x90}, {.addr=0xd924, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0xd923, .value=0x90, .type=IO_READ},
        {.addr=0xd924, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_025D) {
    const struct CPU_State initial_cpu = {.pc=0x9da7, .a=0x05, .x=0xf7, .y=0x98, .sp=0x6d, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x9da7, .value=0x90}, {.addr=0x9da8, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x9da9, .a=0x05, .x=0xf7, .y=0x98, .sp=0x6d, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x9da7, .value=0x90}, {.addr=0x9da8, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x9da7, .value=0x90, .type=IO_READ},
        {.addr=0x9da8, .value=0x00, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_025E) {
    const struct CPU_State initial_cpu = {.pc=0xb421, .a=0xda, .x=0x73, .y=0xd2, .sp=0x66, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xb421, .value=0x90}, {.addr=0xb422, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0xb438, .a=0xda, .x=0x73, .y=0xd2, .sp=0x66, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xb421, .value=0x90}, {.addr=0xb422, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0xb421, .value=0x90, .type=IO_READ},
        {.addr=0xb422, .value=0x15, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_025F) {
    const struct CPU_State initial_cpu = {.pc=0xdc13, .a=0x02, .x=0xb0, .y=0x93, .sp=0xeb, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xdc13, .value=0x90}, {.addr=0xdc14, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0xdc08, .a=0x02, .x=0xb0, .y=0x93, .sp=0xeb, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xdc13, .value=0x90}, {.addr=0xdc14, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0xdc13, .value=0x90, .type=IO_READ},
        {.addr=0xdc14, .value=0xf3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0260) {
    const struct CPU_State initial_cpu = {.pc=0xcaf8, .a=0x16, .x=0x9b, .y=0xa3, .sp=0xf8, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xcaf8, .value=0x90}, {.addr=0xcaf9, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0xcb46, .a=0x16, .x=0x9b, .y=0xa3, .sp=0xf8, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0xcaf8, .value=0x90}, {.addr=0xcaf9, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0xcaf8, .value=0x90, .type=IO_READ},
        {.addr=0xcaf9, .value=0x4c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0261) {
    const struct CPU_State initial_cpu = {.pc=0x1e21, .a=0x3e, .x=0x6a, .y=0xac, .sp=0x8e, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x1e21, .value=0x90}, {.addr=0x1e22, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0x1e23, .a=0x3e, .x=0x6a, .y=0xac, .sp=0x8e, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x1e21, .value=0x90}, {.addr=0x1e22, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0x1e21, .value=0x90, .type=IO_READ},
        {.addr=0x1e22, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0262) {
    const struct CPU_State initial_cpu = {.pc=0x0cb9, .a=0xa0, .x=0xf2, .y=0xe9, .sp=0x84, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x0cb9, .value=0x90}, {.addr=0x0cba, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0x0ce5, .a=0xa0, .x=0xf2, .y=0xe9, .sp=0x84, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x0cb9, .value=0x90}, {.addr=0x0cba, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0x0cb9, .value=0x90, .type=IO_READ},
        {.addr=0x0cba, .value=0x2a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0263) {
    const struct CPU_State initial_cpu = {.pc=0xa184, .a=0x5b, .x=0x29, .y=0x59, .sp=0xae, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xa184, .value=0x90}, {.addr=0xa185, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0xa186, .a=0x5b, .x=0x29, .y=0x59, .sp=0xae, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0xa184, .value=0x90}, {.addr=0xa185, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0xa184, .value=0x90, .type=IO_READ},
        {.addr=0xa185, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0264) {
    const struct CPU_State initial_cpu = {.pc=0x31da, .a=0x61, .x=0x89, .y=0x59, .sp=0x8a, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x31da, .value=0x90}, {.addr=0x31db, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0x31dc, .a=0x61, .x=0x89, .y=0x59, .sp=0x8a, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x31da, .value=0x90}, {.addr=0x31db, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0x31da, .value=0x90, .type=IO_READ},
        {.addr=0x31db, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0265) {
    const struct CPU_State initial_cpu = {.pc=0x48e7, .a=0x58, .x=0x8e, .y=0xe1, .sp=0xd2, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x48e7, .value=0x90}, {.addr=0x48e8, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x4954, .a=0x58, .x=0x8e, .y=0xe1, .sp=0xd2, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x48e7, .value=0x90}, {.addr=0x48e8, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x48e7, .value=0x90, .type=IO_READ},
        {.addr=0x48e8, .value=0x6b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0266) {
    const struct CPU_State initial_cpu = {.pc=0x7b97, .a=0x97, .x=0x66, .y=0x0d, .sp=0xcf, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x7b97, .value=0x90}, {.addr=0x7b98, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x7b76, .a=0x97, .x=0x66, .y=0x0d, .sp=0xcf, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x7b97, .value=0x90}, {.addr=0x7b98, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x7b97, .value=0x90, .type=IO_READ},
        {.addr=0x7b98, .value=0xdd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0267) {
    const struct CPU_State initial_cpu = {.pc=0xc3b7, .a=0xad, .x=0xb8, .y=0x50, .sp=0x79, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xc3b7, .value=0x90}, {.addr=0xc3b8, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xc3b9, .a=0xad, .x=0xb8, .y=0x50, .sp=0x79, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0xc3b7, .value=0x90}, {.addr=0xc3b8, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xc3b7, .value=0x90, .type=IO_READ},
        {.addr=0xc3b8, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0268) {
    const struct CPU_State initial_cpu = {.pc=0xa71e, .a=0x00, .x=0x0d, .y=0xa6, .sp=0xa8, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xa71e, .value=0x90}, {.addr=0xa71f, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xa720, .a=0x00, .x=0x0d, .y=0xa6, .sp=0xa8, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0xa71e, .value=0x90}, {.addr=0xa71f, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xa71e, .value=0x90, .type=IO_READ},
        {.addr=0xa71f, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0269) {
    const struct CPU_State initial_cpu = {.pc=0x5ee9, .a=0x24, .x=0x65, .y=0x69, .sp=0x3b, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x5ee9, .value=0x90}, {.addr=0x5eea, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0x5f09, .a=0x24, .x=0x65, .y=0x69, .sp=0x3b, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x5ee9, .value=0x90}, {.addr=0x5eea, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0x5ee9, .value=0x90, .type=IO_READ},
        {.addr=0x5eea, .value=0x1e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_026A) {
    const struct CPU_State initial_cpu = {.pc=0x93a4, .a=0xdd, .x=0x27, .y=0x06, .sp=0x68, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x93a4, .value=0x90}, {.addr=0x93a5, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0x93a6, .a=0xdd, .x=0x27, .y=0x06, .sp=0x68, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x93a4, .value=0x90}, {.addr=0x93a5, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0x93a4, .value=0x90, .type=IO_READ},
        {.addr=0x93a5, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_026B) {
    const struct CPU_State initial_cpu = {.pc=0xe331, .a=0xc2, .x=0x9e, .y=0xb0, .sp=0x5d, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xe331, .value=0x90}, {.addr=0xe332, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0xe333, .a=0xc2, .x=0x9e, .y=0xb0, .sp=0x5d, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0xe331, .value=0x90}, {.addr=0xe332, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0xe331, .value=0x90, .type=IO_READ},
        {.addr=0xe332, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_026C) {
    const struct CPU_State initial_cpu = {.pc=0x56c4, .a=0x5a, .x=0x8e, .y=0x54, .sp=0xf6, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x56c4, .value=0x90}, {.addr=0x56c5, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0x56ff, .a=0x5a, .x=0x8e, .y=0x54, .sp=0xf6, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x56c4, .value=0x90}, {.addr=0x56c5, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0x56c4, .value=0x90, .type=IO_READ},
        {.addr=0x56c5, .value=0x39, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_026D) {
    const struct CPU_State initial_cpu = {.pc=0x66f8, .a=0x1a, .x=0x42, .y=0x2a, .sp=0xea, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x66f8, .value=0x90}, {.addr=0x66f9, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0x6691, .a=0x1a, .x=0x42, .y=0x2a, .sp=0xea, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x66f8, .value=0x90}, {.addr=0x66f9, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0x66f8, .value=0x90, .type=IO_READ},
        {.addr=0x66f9, .value=0x97, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_026E) {
    const struct CPU_State initial_cpu = {.pc=0xbc75, .a=0xed, .x=0x7d, .y=0xf0, .sp=0x6f, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xbc75, .value=0x90}, {.addr=0xbc76, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0xbc77, .a=0xed, .x=0x7d, .y=0xf0, .sp=0x6f, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0xbc75, .value=0x90}, {.addr=0xbc76, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0xbc75, .value=0x90, .type=IO_READ},
        {.addr=0xbc76, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_026F) {
    const struct CPU_State initial_cpu = {.pc=0x67f8, .a=0x19, .x=0xe8, .y=0x3c, .sp=0x9e, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x67f8, .value=0x90}, {.addr=0x67f9, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0x67fa, .a=0x19, .x=0xe8, .y=0x3c, .sp=0x9e, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x67f8, .value=0x90}, {.addr=0x67f9, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0x67f8, .value=0x90, .type=IO_READ},
        {.addr=0x67f9, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0270) {
    const struct CPU_State initial_cpu = {.pc=0xda60, .a=0xf5, .x=0x54, .y=0x47, .sp=0xc3, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xda60, .value=0x90}, {.addr=0xda61, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0xdaab, .a=0xf5, .x=0x54, .y=0x47, .sp=0xc3, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xda60, .value=0x90}, {.addr=0xda61, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0xda60, .value=0x90, .type=IO_READ},
        {.addr=0xda61, .value=0x49, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0271) {
    const struct CPU_State initial_cpu = {.pc=0x1008, .a=0xbb, .x=0xd2, .y=0x2a, .sp=0x6c, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x1008, .value=0x90}, {.addr=0x1009, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0x0ffd, .a=0xbb, .x=0xd2, .y=0x2a, .sp=0x6c, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x1008, .value=0x90}, {.addr=0x1009, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0x1008, .value=0x90, .type=IO_READ},
        {.addr=0x1009, .value=0xf3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0272) {
    const struct CPU_State initial_cpu = {.pc=0x1eee, .a=0xe8, .x=0xce, .y=0x24, .sp=0xd9, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x1eee, .value=0x90}, {.addr=0x1eef, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0x1f53, .a=0xe8, .x=0xce, .y=0x24, .sp=0xd9, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x1eee, .value=0x90}, {.addr=0x1eef, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0x1eee, .value=0x90, .type=IO_READ},
        {.addr=0x1eef, .value=0x63, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0273) {
    const struct CPU_State initial_cpu = {.pc=0x1f8f, .a=0x6d, .x=0xe5, .y=0xeb, .sp=0x65, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x1f8f, .value=0x90}, {.addr=0x1f90, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0x1f91, .a=0x6d, .x=0xe5, .y=0xeb, .sp=0x65, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x1f8f, .value=0x90}, {.addr=0x1f90, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0x1f8f, .value=0x90, .type=IO_READ},
        {.addr=0x1f90, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0274) {
    const struct CPU_State initial_cpu = {.pc=0xd48f, .a=0x59, .x=0x71, .y=0xa2, .sp=0xa8, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xd48f, .value=0x90}, {.addr=0xd490, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0xd491, .a=0x59, .x=0x71, .y=0xa2, .sp=0xa8, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xd48f, .value=0x90}, {.addr=0xd490, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0xd48f, .value=0x90, .type=IO_READ},
        {.addr=0xd490, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0275) {
    const struct CPU_State initial_cpu = {.pc=0x7000, .a=0x87, .x=0x49, .y=0xea, .sp=0x5e, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x7000, .value=0x90}, {.addr=0x7001, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0x6fe0, .a=0x87, .x=0x49, .y=0xea, .sp=0x5e, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x7000, .value=0x90}, {.addr=0x7001, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0x7000, .value=0x90, .type=IO_READ},
        {.addr=0x7001, .value=0xde, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0276) {
    const struct CPU_State initial_cpu = {.pc=0x2ac5, .a=0xe6, .x=0x40, .y=0xdb, .sp=0x8b, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x2ac5, .value=0x90}, {.addr=0x2ac6, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0x2b1a, .a=0xe6, .x=0x40, .y=0xdb, .sp=0x8b, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x2ac5, .value=0x90}, {.addr=0x2ac6, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0x2ac5, .value=0x90, .type=IO_READ},
        {.addr=0x2ac6, .value=0x53, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0277) {
    const struct CPU_State initial_cpu = {.pc=0xaf08, .a=0xa0, .x=0xa8, .y=0xe9, .sp=0xc0, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xaf08, .value=0x90}, {.addr=0xaf09, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0xaf79, .a=0xa0, .x=0xa8, .y=0xe9, .sp=0xc0, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xaf08, .value=0x90}, {.addr=0xaf09, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0xaf08, .value=0x90, .type=IO_READ},
        {.addr=0xaf09, .value=0x6f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0278) {
    const struct CPU_State initial_cpu = {.pc=0xe4e0, .a=0x66, .x=0xfb, .y=0x56, .sp=0xfb, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xe4e0, .value=0x90}, {.addr=0xe4e1, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0xe4e2, .a=0x66, .x=0xfb, .y=0x56, .sp=0xfb, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xe4e0, .value=0x90}, {.addr=0xe4e1, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0xe4e0, .value=0x90, .type=IO_READ},
        {.addr=0xe4e1, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0279) {
    const struct CPU_State initial_cpu = {.pc=0xb822, .a=0x84, .x=0xab, .y=0xcb, .sp=0x3a, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xb822, .value=0x90}, {.addr=0xb823, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0xb7ae, .a=0x84, .x=0xab, .y=0xcb, .sp=0x3a, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0xb822, .value=0x90}, {.addr=0xb823, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0xb822, .value=0x90, .type=IO_READ},
        {.addr=0xb823, .value=0x8a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_027A) {
    const struct CPU_State initial_cpu = {.pc=0x5942, .a=0x57, .x=0xd5, .y=0xc1, .sp=0x89, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x5942, .value=0x90}, {.addr=0x5943, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0x58c8, .a=0x57, .x=0xd5, .y=0xc1, .sp=0x89, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x5942, .value=0x90}, {.addr=0x5943, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0x5942, .value=0x90, .type=IO_READ},
        {.addr=0x5943, .value=0x84, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_027B) {
    const struct CPU_State initial_cpu = {.pc=0xdfae, .a=0x56, .x=0x94, .y=0x0a, .sp=0x6c, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xdfae, .value=0x90}, {.addr=0xdfaf, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0xdfb0, .a=0x56, .x=0x94, .y=0x0a, .sp=0x6c, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xdfae, .value=0x90}, {.addr=0xdfaf, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0xdfae, .value=0x90, .type=IO_READ},
        {.addr=0xdfaf, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_027C) {
    const struct CPU_State initial_cpu = {.pc=0x303b, .a=0x0e, .x=0x92, .y=0x41, .sp=0xe7, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x303b, .value=0x90}, {.addr=0x303c, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0x303d, .a=0x0e, .x=0x92, .y=0x41, .sp=0xe7, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x303b, .value=0x90}, {.addr=0x303c, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0x303b, .value=0x90, .type=IO_READ},
        {.addr=0x303c, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_027D) {
    const struct CPU_State initial_cpu = {.pc=0x59f7, .a=0x99, .x=0x1f, .y=0x8b, .sp=0x02, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x59f7, .value=0x90}, {.addr=0x59f8, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0x59f9, .a=0x99, .x=0x1f, .y=0x8b, .sp=0x02, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x59f7, .value=0x90}, {.addr=0x59f8, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0x59f7, .value=0x90, .type=IO_READ},
        {.addr=0x59f8, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_027E) {
    const struct CPU_State initial_cpu = {.pc=0x1851, .a=0xd6, .x=0x29, .y=0xb9, .sp=0xc7, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x1851, .value=0x90}, {.addr=0x1852, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0x1853, .a=0xd6, .x=0x29, .y=0xb9, .sp=0xc7, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x1851, .value=0x90}, {.addr=0x1852, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0x1851, .value=0x90, .type=IO_READ},
        {.addr=0x1852, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_027F) {
    const struct CPU_State initial_cpu = {.pc=0x04bf, .a=0x74, .x=0xbc, .y=0x8c, .sp=0x84, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x04bf, .value=0x90}, {.addr=0x04c0, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0x04b7, .a=0x74, .x=0xbc, .y=0x8c, .sp=0x84, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x04bf, .value=0x90}, {.addr=0x04c0, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0x04bf, .value=0x90, .type=IO_READ},
        {.addr=0x04c0, .value=0xf6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0280) {
    const struct CPU_State initial_cpu = {.pc=0xfe89, .a=0xbd, .x=0x97, .y=0x86, .sp=0x2f, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xfe89, .value=0x90}, {.addr=0xfe8a, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0xfe8b, .a=0xbd, .x=0x97, .y=0x86, .sp=0x2f, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xfe89, .value=0x90}, {.addr=0xfe8a, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0xfe89, .value=0x90, .type=IO_READ},
        {.addr=0xfe8a, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0281) {
    const struct CPU_State initial_cpu = {.pc=0xb1ee, .a=0x39, .x=0x0f, .y=0x32, .sp=0x50, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xb1ee, .value=0x90}, {.addr=0xb1ef, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0xb1ee, .a=0x39, .x=0x0f, .y=0x32, .sp=0x50, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0xb1ee, .value=0x90}, {.addr=0xb1ef, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0xb1ee, .value=0x90, .type=IO_READ},
        {.addr=0xb1ef, .value=0xfe, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0282) {
    const struct CPU_State initial_cpu = {.pc=0x8219, .a=0xfc, .x=0xcd, .y=0xdf, .sp=0x91, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x8219, .value=0x90}, {.addr=0x821a, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x821b, .a=0xfc, .x=0xcd, .y=0xdf, .sp=0x91, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x8219, .value=0x90}, {.addr=0x821a, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x8219, .value=0x90, .type=IO_READ},
        {.addr=0x821a, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0283) {
    const struct CPU_State initial_cpu = {.pc=0x9d94, .a=0x9d, .x=0x59, .y=0x1f, .sp=0x79, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x9d94, .value=0x90}, {.addr=0x9d95, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x9d96, .a=0x9d, .x=0x59, .y=0x1f, .sp=0x79, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x9d94, .value=0x90}, {.addr=0x9d95, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x9d94, .value=0x90, .type=IO_READ},
        {.addr=0x9d95, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0284) {
    const struct CPU_State initial_cpu = {.pc=0x8c3c, .a=0x66, .x=0xc2, .y=0x7c, .sp=0xed, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x8c3c, .value=0x90}, {.addr=0x8c3d, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0x8c47, .a=0x66, .x=0xc2, .y=0x7c, .sp=0xed, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x8c3c, .value=0x90}, {.addr=0x8c3d, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0x8c3c, .value=0x90, .type=IO_READ},
        {.addr=0x8c3d, .value=0x09, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0285) {
    const struct CPU_State initial_cpu = {.pc=0xfc43, .a=0x48, .x=0x74, .y=0x71, .sp=0x7d, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xfc43, .value=0x90}, {.addr=0xfc44, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0xfc45, .a=0x48, .x=0x74, .y=0x71, .sp=0x7d, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0xfc43, .value=0x90}, {.addr=0xfc44, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0xfc43, .value=0x90, .type=IO_READ},
        {.addr=0xfc44, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0286) {
    const struct CPU_State initial_cpu = {.pc=0xa53f, .a=0x03, .x=0xca, .y=0x1d, .sp=0x67, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xa53f, .value=0x90}, {.addr=0xa540, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0xa574, .a=0x03, .x=0xca, .y=0x1d, .sp=0x67, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xa53f, .value=0x90}, {.addr=0xa540, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0xa53f, .value=0x90, .type=IO_READ},
        {.addr=0xa540, .value=0x33, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0287) {
    const struct CPU_State initial_cpu = {.pc=0x80c2, .a=0x48, .x=0xd6, .y=0x2c, .sp=0x27, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x80c2, .value=0x90}, {.addr=0x80c3, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0x80cd, .a=0x48, .x=0xd6, .y=0x2c, .sp=0x27, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x80c2, .value=0x90}, {.addr=0x80c3, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0x80c2, .value=0x90, .type=IO_READ},
        {.addr=0x80c3, .value=0x09, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0288) {
    const struct CPU_State initial_cpu = {.pc=0x128b, .a=0x83, .x=0x80, .y=0x4b, .sp=0x92, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x128b, .value=0x90}, {.addr=0x128c, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0x12a7, .a=0x83, .x=0x80, .y=0x4b, .sp=0x92, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x128b, .value=0x90}, {.addr=0x128c, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0x128b, .value=0x90, .type=IO_READ},
        {.addr=0x128c, .value=0x1a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0289) {
    const struct CPU_State initial_cpu = {.pc=0x3bf1, .a=0x12, .x=0x37, .y=0xbd, .sp=0x75, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x3bf1, .value=0x90}, {.addr=0x3bf2, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0x3c34, .a=0x12, .x=0x37, .y=0xbd, .sp=0x75, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x3bf1, .value=0x90}, {.addr=0x3bf2, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0x3bf1, .value=0x90, .type=IO_READ},
        {.addr=0x3bf2, .value=0x41, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_028A) {
    const struct CPU_State initial_cpu = {.pc=0xa69b, .a=0x07, .x=0x0a, .y=0x59, .sp=0xce, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xa69b, .value=0x90}, {.addr=0xa69c, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0xa69e, .a=0x07, .x=0x0a, .y=0x59, .sp=0xce, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0xa69b, .value=0x90}, {.addr=0xa69c, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0xa69b, .value=0x90, .type=IO_READ},
        {.addr=0xa69c, .value=0x01, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_028B) {
    const struct CPU_State initial_cpu = {.pc=0xb20b, .a=0xee, .x=0x87, .y=0xc1, .sp=0x6f, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xb20b, .value=0x90}, {.addr=0xb20c, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0xb20d, .a=0xee, .x=0x87, .y=0xc1, .sp=0x6f, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0xb20b, .value=0x90}, {.addr=0xb20c, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0xb20b, .value=0x90, .type=IO_READ},
        {.addr=0xb20c, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_028C) {
    const struct CPU_State initial_cpu = {.pc=0x0ef9, .a=0x6f, .x=0x71, .y=0x3e, .sp=0x90, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x0ef9, .value=0x90}, {.addr=0x0efa, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0x0ed2, .a=0x6f, .x=0x71, .y=0x3e, .sp=0x90, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x0ef9, .value=0x90}, {.addr=0x0efa, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0x0ef9, .value=0x90, .type=IO_READ},
        {.addr=0x0efa, .value=0xd7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_028D) {
    const struct CPU_State initial_cpu = {.pc=0xc537, .a=0xf4, .x=0x88, .y=0xff, .sp=0xb9, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xc537, .value=0x90}, {.addr=0xc538, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0xc539, .a=0xf4, .x=0x88, .y=0xff, .sp=0xb9, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0xc537, .value=0x90}, {.addr=0xc538, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0xc537, .value=0x90, .type=IO_READ},
        {.addr=0xc538, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_028E) {
    const struct CPU_State initial_cpu = {.pc=0xe471, .a=0x5d, .x=0x70, .y=0xd6, .sp=0xf1, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xe471, .value=0x90}, {.addr=0xe472, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0xe4c9, .a=0x5d, .x=0x70, .y=0xd6, .sp=0xf1, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xe471, .value=0x90}, {.addr=0xe472, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0xe471, .value=0x90, .type=IO_READ},
        {.addr=0xe472, .value=0x56, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_028F) {
    const struct CPU_State initial_cpu = {.pc=0xc928, .a=0x95, .x=0x3e, .y=0x1b, .sp=0xa2, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xc928, .value=0x90}, {.addr=0xc929, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0xc8fe, .a=0x95, .x=0x3e, .y=0x1b, .sp=0xa2, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xc928, .value=0x90}, {.addr=0xc929, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0xc928, .value=0x90, .type=IO_READ},
        {.addr=0xc929, .value=0xd4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0290) {
    const struct CPU_State initial_cpu = {.pc=0x011b, .a=0x84, .x=0x05, .y=0xd9, .sp=0x25, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0x90}, {.addr=0x011c, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x011d, .a=0x84, .x=0x05, .y=0xd9, .sp=0x25, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0x90}, {.addr=0x011c, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x011b, .value=0x90, .type=IO_READ},
        {.addr=0x011c, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0291) {
    const struct CPU_State initial_cpu = {.pc=0x220b, .a=0x80, .x=0x10, .y=0xeb, .sp=0xf0, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x220b, .value=0x90}, {.addr=0x220c, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0x220d, .a=0x80, .x=0x10, .y=0xeb, .sp=0xf0, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x220b, .value=0x90}, {.addr=0x220c, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0x220b, .value=0x90, .type=IO_READ},
        {.addr=0x220c, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0292) {
    const struct CPU_State initial_cpu = {.pc=0x6453, .a=0xcf, .x=0x9a, .y=0x0b, .sp=0x7a, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x6453, .value=0x90}, {.addr=0x6454, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x6452, .a=0xcf, .x=0x9a, .y=0x0b, .sp=0x7a, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x6453, .value=0x90}, {.addr=0x6454, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x6453, .value=0x90, .type=IO_READ},
        {.addr=0x6454, .value=0xfd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0293) {
    const struct CPU_State initial_cpu = {.pc=0x26e0, .a=0x84, .x=0x49, .y=0xf5, .sp=0x74, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x26e0, .value=0x90}, {.addr=0x26e1, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0x26f5, .a=0x84, .x=0x49, .y=0xf5, .sp=0x74, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x26e0, .value=0x90}, {.addr=0x26e1, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0x26e0, .value=0x90, .type=IO_READ},
        {.addr=0x26e1, .value=0x13, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0294) {
    const struct CPU_State initial_cpu = {.pc=0x3651, .a=0x23, .x=0x33, .y=0x76, .sp=0x7b, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x3651, .value=0x90}, {.addr=0x3652, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0x3653, .a=0x23, .x=0x33, .y=0x76, .sp=0x7b, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x3651, .value=0x90}, {.addr=0x3652, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0x3651, .value=0x90, .type=IO_READ},
        {.addr=0x3652, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0295) {
    const struct CPU_State initial_cpu = {.pc=0x7261, .a=0xaa, .x=0x62, .y=0x89, .sp=0xbe, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x7261, .value=0x90}, {.addr=0x7262, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0x7263, .a=0xaa, .x=0x62, .y=0x89, .sp=0xbe, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x7261, .value=0x90}, {.addr=0x7262, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0x7261, .value=0x90, .type=IO_READ},
        {.addr=0x7262, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0296) {
    const struct CPU_State initial_cpu = {.pc=0x45e4, .a=0x5c, .x=0x4e, .y=0xfc, .sp=0xfd, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x45e4, .value=0x90}, {.addr=0x45e5, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x4642, .a=0x5c, .x=0x4e, .y=0xfc, .sp=0xfd, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x45e4, .value=0x90}, {.addr=0x45e5, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x45e4, .value=0x90, .type=IO_READ},
        {.addr=0x45e5, .value=0x5c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0297) {
    const struct CPU_State initial_cpu = {.pc=0x3611, .a=0xf7, .x=0x17, .y=0x35, .sp=0xee, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x3611, .value=0x90}, {.addr=0x3612, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0x3613, .a=0xf7, .x=0x17, .y=0x35, .sp=0xee, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x3611, .value=0x90}, {.addr=0x3612, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0x3611, .value=0x90, .type=IO_READ},
        {.addr=0x3612, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0298) {
    const struct CPU_State initial_cpu = {.pc=0xba28, .a=0xda, .x=0x09, .y=0x4a, .sp=0xa9, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xba28, .value=0x90}, {.addr=0xba29, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0xba2a, .a=0xda, .x=0x09, .y=0x4a, .sp=0xa9, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0xba28, .value=0x90}, {.addr=0xba29, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0xba28, .value=0x90, .type=IO_READ},
        {.addr=0xba29, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0299) {
    const struct CPU_State initial_cpu = {.pc=0x7beb, .a=0x5d, .x=0xbf, .y=0x57, .sp=0xe4, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x7beb, .value=0x90}, {.addr=0x7bec, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0x7b94, .a=0x5d, .x=0xbf, .y=0x57, .sp=0xe4, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x7beb, .value=0x90}, {.addr=0x7bec, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0x7beb, .value=0x90, .type=IO_READ},
        {.addr=0x7bec, .value=0xa7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_029A) {
    const struct CPU_State initial_cpu = {.pc=0x1e3e, .a=0xc7, .x=0xad, .y=0x82, .sp=0xea, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x1e3e, .value=0x90}, {.addr=0x1e3f, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x1e40, .a=0xc7, .x=0xad, .y=0x82, .sp=0xea, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x1e3e, .value=0x90}, {.addr=0x1e3f, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x1e3e, .value=0x90, .type=IO_READ},
        {.addr=0x1e3f, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_029B) {
    const struct CPU_State initial_cpu = {.pc=0x2a27, .a=0x79, .x=0xdf, .y=0x43, .sp=0xc0, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x2a27, .value=0x90}, {.addr=0x2a28, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0x29fe, .a=0x79, .x=0xdf, .y=0x43, .sp=0xc0, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x2a27, .value=0x90}, {.addr=0x2a28, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0x2a27, .value=0x90, .type=IO_READ},
        {.addr=0x2a28, .value=0xd5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_029C) {
    const struct CPU_State initial_cpu = {.pc=0x6782, .a=0x18, .x=0x8a, .y=0x29, .sp=0xf1, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x6782, .value=0x90}, {.addr=0x6783, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0x6784, .a=0x18, .x=0x8a, .y=0x29, .sp=0xf1, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x6782, .value=0x90}, {.addr=0x6783, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0x6782, .value=0x90, .type=IO_READ},
        {.addr=0x6783, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_029D) {
    const struct CPU_State initial_cpu = {.pc=0xf5fc, .a=0xa0, .x=0x8a, .y=0x96, .sp=0x10, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xf5fc, .value=0x90}, {.addr=0xf5fd, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0xf61f, .a=0xa0, .x=0x8a, .y=0x96, .sp=0x10, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xf5fc, .value=0x90}, {.addr=0xf5fd, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0xf5fc, .value=0x90, .type=IO_READ},
        {.addr=0xf5fd, .value=0x21, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_029E) {
    const struct CPU_State initial_cpu = {.pc=0xa066, .a=0xd9, .x=0x9a, .y=0xac, .sp=0xcb, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xa066, .value=0x90}, {.addr=0xa067, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xa068, .a=0xd9, .x=0x9a, .y=0xac, .sp=0xcb, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xa066, .value=0x90}, {.addr=0xa067, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xa066, .value=0x90, .type=IO_READ},
        {.addr=0xa067, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_029F) {
    const struct CPU_State initial_cpu = {.pc=0x2792, .a=0xdf, .x=0xce, .y=0x79, .sp=0xc3, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x2792, .value=0x90}, {.addr=0x2793, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x2794, .a=0xdf, .x=0xce, .y=0x79, .sp=0xc3, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x2792, .value=0x90}, {.addr=0x2793, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x2792, .value=0x90, .type=IO_READ},
        {.addr=0x2793, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02A0) {
    const struct CPU_State initial_cpu = {.pc=0x9b41, .a=0x53, .x=0x87, .y=0x9f, .sp=0xe3, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x9b41, .value=0x90}, {.addr=0x9b42, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0x9b8a, .a=0x53, .x=0x87, .y=0x9f, .sp=0xe3, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x9b41, .value=0x90}, {.addr=0x9b42, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0x9b41, .value=0x90, .type=IO_READ},
        {.addr=0x9b42, .value=0x47, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02A1) {
    const struct CPU_State initial_cpu = {.pc=0x5267, .a=0xaa, .x=0x47, .y=0x02, .sp=0x53, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x5267, .value=0x90}, {.addr=0x5268, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x5269, .a=0xaa, .x=0x47, .y=0x02, .sp=0x53, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x5267, .value=0x90}, {.addr=0x5268, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x5267, .value=0x90, .type=IO_READ},
        {.addr=0x5268, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02A2) {
    const struct CPU_State initial_cpu = {.pc=0xa3b0, .a=0x88, .x=0xc2, .y=0xc2, .sp=0x95, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xa3b0, .value=0x90}, {.addr=0xa3b1, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0xa3c1, .a=0x88, .x=0xc2, .y=0xc2, .sp=0x95, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0xa3b0, .value=0x90}, {.addr=0xa3b1, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0xa3b0, .value=0x90, .type=IO_READ},
        {.addr=0xa3b1, .value=0x0f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02A3) {
    const struct CPU_State initial_cpu = {.pc=0x00e6, .a=0x87, .x=0x50, .y=0xec, .sp=0xd2, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x00e6, .value=0x90}, {.addr=0x00e7, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0x00e8, .a=0x87, .x=0x50, .y=0xec, .sp=0xd2, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x00e6, .value=0x90}, {.addr=0x00e7, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0x00e6, .value=0x90, .type=IO_READ},
        {.addr=0x00e7, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02A4) {
    const struct CPU_State initial_cpu = {.pc=0xdfe8, .a=0xfb, .x=0x9e, .y=0xf7, .sp=0xa8, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xdfe8, .value=0x90}, {.addr=0xdfe9, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0xe05b, .a=0xfb, .x=0x9e, .y=0xf7, .sp=0xa8, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0xdfe8, .value=0x90}, {.addr=0xdfe9, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0xdfe8, .value=0x90, .type=IO_READ},
        {.addr=0xdfe9, .value=0x71, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x037f, .a=0xe2, .x=0xc6, .y=0xc8, .sp=0xeb, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x037f, .value=0x90}, {.addr=0x0380, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0x0369, .a=0xe2, .x=0xc6, .y=0xc8, .sp=0xeb, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x037f, .value=0x90}, {.addr=0x0380, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0x037f, .value=0x90, .type=IO_READ},
        {.addr=0x0380, .value=0xe8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02A6) {
    const struct CPU_State initial_cpu = {.pc=0x7832, .a=0x8c, .x=0x54, .y=0x34, .sp=0xac, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x7832, .value=0x90}, {.addr=0x7833, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0x7834, .a=0x8c, .x=0x54, .y=0x34, .sp=0xac, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x7832, .value=0x90}, {.addr=0x7833, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0x7832, .value=0x90, .type=IO_READ},
        {.addr=0x7833, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02A7) {
    const struct CPU_State initial_cpu = {.pc=0x085c, .a=0x83, .x=0xd8, .y=0x07, .sp=0x10, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x085c, .value=0x90}, {.addr=0x085d, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x085e, .a=0x83, .x=0xd8, .y=0x07, .sp=0x10, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x085c, .value=0x90}, {.addr=0x085d, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x085c, .value=0x90, .type=IO_READ},
        {.addr=0x085d, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02A8) {
    const struct CPU_State initial_cpu = {.pc=0x4060, .a=0xb9, .x=0x8e, .y=0x35, .sp=0xf7, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x4060, .value=0x90}, {.addr=0x4061, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0x40a9, .a=0xb9, .x=0x8e, .y=0x35, .sp=0xf7, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x4060, .value=0x90}, {.addr=0x4061, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0x4060, .value=0x90, .type=IO_READ},
        {.addr=0x4061, .value=0x47, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02A9) {
    const struct CPU_State initial_cpu = {.pc=0xf64e, .a=0x8d, .x=0x30, .y=0xbd, .sp=0x1a, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xf64e, .value=0x90}, {.addr=0xf64f, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0xf614, .a=0x8d, .x=0x30, .y=0xbd, .sp=0x1a, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0xf64e, .value=0x90}, {.addr=0xf64f, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0xf64e, .value=0x90, .type=IO_READ},
        {.addr=0xf64f, .value=0xc4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02AA) {
    const struct CPU_State initial_cpu = {.pc=0x0796, .a=0x18, .x=0x15, .y=0x4b, .sp=0x84, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x0796, .value=0x90}, {.addr=0x0797, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x07de, .a=0x18, .x=0x15, .y=0x4b, .sp=0x84, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x0796, .value=0x90}, {.addr=0x0797, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x0796, .value=0x90, .type=IO_READ},
        {.addr=0x0797, .value=0x46, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02AB) {
    const struct CPU_State initial_cpu = {.pc=0xc24f, .a=0x14, .x=0x6d, .y=0x5d, .sp=0xac, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xc24f, .value=0x90}, {.addr=0xc250, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0xc251, .a=0x14, .x=0x6d, .y=0x5d, .sp=0xac, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0xc24f, .value=0x90}, {.addr=0xc250, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0xc24f, .value=0x90, .type=IO_READ},
        {.addr=0xc250, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02AC) {
    const struct CPU_State initial_cpu = {.pc=0x26b1, .a=0xc2, .x=0xc1, .y=0xe4, .sp=0xa6, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x26b1, .value=0x90}, {.addr=0x26b2, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0x2660, .a=0xc2, .x=0xc1, .y=0xe4, .sp=0xa6, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x26b1, .value=0x90}, {.addr=0x26b2, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0x26b1, .value=0x90, .type=IO_READ},
        {.addr=0x26b2, .value=0xad, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02AD) {
    const struct CPU_State initial_cpu = {.pc=0xdbf1, .a=0x55, .x=0xad, .y=0x1e, .sp=0x26, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xdbf1, .value=0x90}, {.addr=0xdbf2, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0xdba6, .a=0x55, .x=0xad, .y=0x1e, .sp=0x26, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0xdbf1, .value=0x90}, {.addr=0xdbf2, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0xdbf1, .value=0x90, .type=IO_READ},
        {.addr=0xdbf2, .value=0xb3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02AE) {
    const struct CPU_State initial_cpu = {.pc=0xdeb2, .a=0xaf, .x=0xf6, .y=0xab, .sp=0x1b, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0xdeb2, .value=0x90}, {.addr=0xdeb3, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0xdeb4, .a=0xaf, .x=0xf6, .y=0xab, .sp=0x1b, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xdeb2, .value=0x90}, {.addr=0xdeb3, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0xdeb2, .value=0x90, .type=IO_READ},
        {.addr=0xdeb3, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02AF) {
    const struct CPU_State initial_cpu = {.pc=0xced8, .a=0x93, .x=0xec, .y=0xf5, .sp=0xca, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xced8, .value=0x90}, {.addr=0xced9, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0xcf21, .a=0x93, .x=0xec, .y=0xf5, .sp=0xca, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xced8, .value=0x90}, {.addr=0xced9, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0xced8, .value=0x90, .type=IO_READ},
        {.addr=0xced9, .value=0x47, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02B0) {
    const struct CPU_State initial_cpu = {.pc=0x5a8c, .a=0x93, .x=0xb3, .y=0xd8, .sp=0x82, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x5a8c, .value=0x90}, {.addr=0x5a8d, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x5a8e, .a=0x93, .x=0xb3, .y=0xd8, .sp=0x82, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x5a8c, .value=0x90}, {.addr=0x5a8d, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x5a8c, .value=0x90, .type=IO_READ},
        {.addr=0x5a8d, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02B1) {
    const struct CPU_State initial_cpu = {.pc=0xc212, .a=0xa0, .x=0xa8, .y=0x82, .sp=0xde, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xc212, .value=0x90}, {.addr=0xc213, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0xc270, .a=0xa0, .x=0xa8, .y=0x82, .sp=0xde, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xc212, .value=0x90}, {.addr=0xc213, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0xc212, .value=0x90, .type=IO_READ},
        {.addr=0xc213, .value=0x5c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02B2) {
    const struct CPU_State initial_cpu = {.pc=0x7383, .a=0x09, .x=0xb3, .y=0x15, .sp=0xd5, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x7383, .value=0x90}, {.addr=0x7384, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x7385, .a=0x09, .x=0xb3, .y=0x15, .sp=0xd5, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x7383, .value=0x90}, {.addr=0x7384, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x7383, .value=0x90, .type=IO_READ},
        {.addr=0x7384, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02B3) {
    const struct CPU_State initial_cpu = {.pc=0x4bc2, .a=0xdf, .x=0x70, .y=0x66, .sp=0xd2, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x4bc2, .value=0x90}, {.addr=0x4bc3, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0x4bc4, .a=0xdf, .x=0x70, .y=0x66, .sp=0xd2, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x4bc2, .value=0x90}, {.addr=0x4bc3, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0x4bc2, .value=0x90, .type=IO_READ},
        {.addr=0x4bc3, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02B4) {
    const struct CPU_State initial_cpu = {.pc=0xd157, .a=0xfe, .x=0x9e, .y=0xc3, .sp=0x1f, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xd157, .value=0x90}, {.addr=0xd158, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0xd164, .a=0xfe, .x=0x9e, .y=0xc3, .sp=0x1f, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0xd157, .value=0x90}, {.addr=0xd158, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0xd157, .value=0x90, .type=IO_READ},
        {.addr=0xd158, .value=0x0b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02B5) {
    const struct CPU_State initial_cpu = {.pc=0x0437, .a=0x74, .x=0x31, .y=0x78, .sp=0xda, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x0437, .value=0x90}, {.addr=0x0438, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0x0439, .a=0x74, .x=0x31, .y=0x78, .sp=0xda, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x0437, .value=0x90}, {.addr=0x0438, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0x0437, .value=0x90, .type=IO_READ},
        {.addr=0x0438, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02B6) {
    const struct CPU_State initial_cpu = {.pc=0xba93, .a=0x4c, .x=0x96, .y=0x0b, .sp=0x54, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xba93, .value=0x90}, {.addr=0xba94, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0xba95, .a=0x4c, .x=0x96, .y=0x0b, .sp=0x54, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0xba93, .value=0x90}, {.addr=0xba94, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0xba93, .value=0x90, .type=IO_READ},
        {.addr=0xba94, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02B7) {
    const struct CPU_State initial_cpu = {.pc=0x3af3, .a=0x64, .x=0x05, .y=0xc6, .sp=0x9a, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x3af3, .value=0x90}, {.addr=0x3af4, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x3af5, .a=0x64, .x=0x05, .y=0xc6, .sp=0x9a, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x3af3, .value=0x90}, {.addr=0x3af4, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x3af3, .value=0x90, .type=IO_READ},
        {.addr=0x3af4, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02B8) {
    const struct CPU_State initial_cpu = {.pc=0x99bc, .a=0x7d, .x=0x0d, .y=0x4d, .sp=0xdc, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x99bc, .value=0x90}, {.addr=0x99bd, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0x99be, .a=0x7d, .x=0x0d, .y=0x4d, .sp=0xdc, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x99bc, .value=0x90}, {.addr=0x99bd, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0x99bc, .value=0x90, .type=IO_READ},
        {.addr=0x99bd, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02B9) {
    const struct CPU_State initial_cpu = {.pc=0x8e05, .a=0x79, .x=0x7a, .y=0xf0, .sp=0x0e, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x8e05, .value=0x90}, {.addr=0x8e06, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0x8e06, .a=0x79, .x=0x7a, .y=0xf0, .sp=0x0e, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x8e05, .value=0x90}, {.addr=0x8e06, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0x8e05, .value=0x90, .type=IO_READ},
        {.addr=0x8e06, .value=0xff, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02BA) {
    const struct CPU_State initial_cpu = {.pc=0xb172, .a=0x9e, .x=0xea, .y=0x45, .sp=0xbf, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xb172, .value=0x90}, {.addr=0xb173, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0xb168, .a=0x9e, .x=0xea, .y=0x45, .sp=0xbf, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xb172, .value=0x90}, {.addr=0xb173, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0xb172, .value=0x90, .type=IO_READ},
        {.addr=0xb173, .value=0xf4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02BB) {
    const struct CPU_State initial_cpu = {.pc=0x790c, .a=0x50, .x=0x6a, .y=0x3c, .sp=0x44, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x790c, .value=0x90}, {.addr=0x790d, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x78ca, .a=0x50, .x=0x6a, .y=0x3c, .sp=0x44, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x790c, .value=0x90}, {.addr=0x790d, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x790c, .value=0x90, .type=IO_READ},
        {.addr=0x790d, .value=0xbc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02BC) {
    const struct CPU_State initial_cpu = {.pc=0x0c9c, .a=0x05, .x=0xcc, .y=0x35, .sp=0x5f, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x0c9c, .value=0x90}, {.addr=0x0c9d, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0x0ce0, .a=0x05, .x=0xcc, .y=0x35, .sp=0x5f, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x0c9c, .value=0x90}, {.addr=0x0c9d, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0x0c9c, .value=0x90, .type=IO_READ},
        {.addr=0x0c9d, .value=0x42, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02BD) {
    const struct CPU_State initial_cpu = {.pc=0xef49, .a=0xf5, .x=0x95, .y=0x6c, .sp=0xbf, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xef49, .value=0x90}, {.addr=0xef4a, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0xef4b, .a=0xf5, .x=0x95, .y=0x6c, .sp=0xbf, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xef49, .value=0x90}, {.addr=0xef4a, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0xef49, .value=0x90, .type=IO_READ},
        {.addr=0xef4a, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02BE) {
    const struct CPU_State initial_cpu = {.pc=0x7548, .a=0xaf, .x=0x39, .y=0xbc, .sp=0x72, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x7548, .value=0x90}, {.addr=0x7549, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0x752f, .a=0xaf, .x=0x39, .y=0xbc, .sp=0x72, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x7548, .value=0x90}, {.addr=0x7549, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0x7548, .value=0x90, .type=IO_READ},
        {.addr=0x7549, .value=0xe5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02BF) {
    const struct CPU_State initial_cpu = {.pc=0x7da6, .a=0xc1, .x=0xe7, .y=0x78, .sp=0x15, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x7da6, .value=0x90}, {.addr=0x7da7, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0x7da8, .a=0xc1, .x=0xe7, .y=0x78, .sp=0x15, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x7da6, .value=0x90}, {.addr=0x7da7, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0x7da6, .value=0x90, .type=IO_READ},
        {.addr=0x7da7, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02C0) {
    const struct CPU_State initial_cpu = {.pc=0x52ea, .a=0x55, .x=0xfd, .y=0x64, .sp=0x19, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x52ea, .value=0x90}, {.addr=0x52eb, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x52ec, .a=0x55, .x=0xfd, .y=0x64, .sp=0x19, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x52ea, .value=0x90}, {.addr=0x52eb, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x52ea, .value=0x90, .type=IO_READ},
        {.addr=0x52eb, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02C1) {
    const struct CPU_State initial_cpu = {.pc=0xc7db, .a=0xd0, .x=0x9c, .y=0x7a, .sp=0x28, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0xc7db, .value=0x90}, {.addr=0xc7dc, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0xc7dd, .a=0xd0, .x=0x9c, .y=0x7a, .sp=0x28, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0xc7db, .value=0x90}, {.addr=0xc7dc, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0xc7db, .value=0x90, .type=IO_READ},
        {.addr=0xc7dc, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02C2) {
    const struct CPU_State initial_cpu = {.pc=0x272c, .a=0x91, .x=0x79, .y=0x38, .sp=0x2f, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x272c, .value=0x90}, {.addr=0x272d, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x272e, .a=0x91, .x=0x79, .y=0x38, .sp=0x2f, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x272c, .value=0x90}, {.addr=0x272d, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x272c, .value=0x90, .type=IO_READ},
        {.addr=0x272d, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02C3) {
    const struct CPU_State initial_cpu = {.pc=0x0bb7, .a=0x8e, .x=0x46, .y=0x93, .sp=0x6e, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x0bb7, .value=0x90}, {.addr=0x0bb8, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x0c24, .a=0x8e, .x=0x46, .y=0x93, .sp=0x6e, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0bb7, .value=0x90}, {.addr=0x0bb8, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x0bb7, .value=0x90, .type=IO_READ},
        {.addr=0x0bb8, .value=0x6b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02C4) {
    const struct CPU_State initial_cpu = {.pc=0xb6bf, .a=0xf4, .x=0x2d, .y=0x2a, .sp=0x82, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xb6bf, .value=0x90}, {.addr=0xb6c0, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0xb6c1, .a=0xf4, .x=0x2d, .y=0x2a, .sp=0x82, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xb6bf, .value=0x90}, {.addr=0xb6c0, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0xb6bf, .value=0x90, .type=IO_READ},
        {.addr=0xb6c0, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02C5) {
    const struct CPU_State initial_cpu = {.pc=0xaf29, .a=0x4e, .x=0x64, .y=0x4c, .sp=0xc5, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xaf29, .value=0x90}, {.addr=0xaf2a, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0xaf2f, .a=0x4e, .x=0x64, .y=0x4c, .sp=0xc5, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0xaf29, .value=0x90}, {.addr=0xaf2a, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0xaf29, .value=0x90, .type=IO_READ},
        {.addr=0xaf2a, .value=0x04, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02C6) {
    const struct CPU_State initial_cpu = {.pc=0x479f, .a=0x67, .x=0xd2, .y=0x9b, .sp=0xba, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x479f, .value=0x90}, {.addr=0x47a0, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x47a1, .a=0x67, .x=0xd2, .y=0x9b, .sp=0xba, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x479f, .value=0x90}, {.addr=0x47a0, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x479f, .value=0x90, .type=IO_READ},
        {.addr=0x47a0, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02C7) {
    const struct CPU_State initial_cpu = {.pc=0xa5e1, .a=0xf9, .x=0x92, .y=0x7a, .sp=0x9a, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xa5e1, .value=0x90}, {.addr=0xa5e2, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0xa5c1, .a=0xf9, .x=0x92, .y=0x7a, .sp=0x9a, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0xa5e1, .value=0x90}, {.addr=0xa5e2, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0xa5e1, .value=0x90, .type=IO_READ},
        {.addr=0xa5e2, .value=0xde, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02C8) {
    const struct CPU_State initial_cpu = {.pc=0x441a, .a=0x9c, .x=0xa0, .y=0x32, .sp=0x2c, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x441a, .value=0x90}, {.addr=0x441b, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0x441c, .a=0x9c, .x=0xa0, .y=0x32, .sp=0x2c, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x441a, .value=0x90}, {.addr=0x441b, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0x441a, .value=0x90, .type=IO_READ},
        {.addr=0x441b, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02C9) {
    const struct CPU_State initial_cpu = {.pc=0xda8a, .a=0x46, .x=0xe7, .y=0xfc, .sp=0x73, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xda8a, .value=0x90}, {.addr=0xda8b, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0xda8c, .a=0x46, .x=0xe7, .y=0xfc, .sp=0x73, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0xda8a, .value=0x90}, {.addr=0xda8b, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0xda8a, .value=0x90, .type=IO_READ},
        {.addr=0xda8b, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02CA) {
    const struct CPU_State initial_cpu = {.pc=0xe20a, .a=0x10, .x=0x1a, .y=0x3e, .sp=0x54, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xe20a, .value=0x90}, {.addr=0xe20b, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0xe20c, .a=0x10, .x=0x1a, .y=0x3e, .sp=0x54, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xe20a, .value=0x90}, {.addr=0xe20b, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0xe20a, .value=0x90, .type=IO_READ},
        {.addr=0xe20b, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02CB) {
    const struct CPU_State initial_cpu = {.pc=0x97e8, .a=0x2a, .x=0x51, .y=0xe5, .sp=0x59, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x97e8, .value=0x90}, {.addr=0x97e9, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0x981d, .a=0x2a, .x=0x51, .y=0xe5, .sp=0x59, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x97e8, .value=0x90}, {.addr=0x97e9, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0x97e8, .value=0x90, .type=IO_READ},
        {.addr=0x97e9, .value=0x33, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02CC) {
    const struct CPU_State initial_cpu = {.pc=0x2aa0, .a=0x45, .x=0x67, .y=0xd3, .sp=0xce, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x2aa0, .value=0x90}, {.addr=0x2aa1, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0x2aa2, .a=0x45, .x=0x67, .y=0xd3, .sp=0xce, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x2aa0, .value=0x90}, {.addr=0x2aa1, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0x2aa0, .value=0x90, .type=IO_READ},
        {.addr=0x2aa1, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02CD) {
    const struct CPU_State initial_cpu = {.pc=0x1667, .a=0x24, .x=0xe9, .y=0x41, .sp=0x66, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x1667, .value=0x90}, {.addr=0x1668, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0x1669, .a=0x24, .x=0xe9, .y=0x41, .sp=0x66, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x1667, .value=0x90}, {.addr=0x1668, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0x1667, .value=0x90, .type=IO_READ},
        {.addr=0x1668, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02CE) {
    const struct CPU_State initial_cpu = {.pc=0x6bf0, .a=0x12, .x=0x24, .y=0xba, .sp=0x62, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x6bf0, .value=0x90}, {.addr=0x6bf1, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0x6bf2, .a=0x12, .x=0x24, .y=0xba, .sp=0x62, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x6bf0, .value=0x90}, {.addr=0x6bf1, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0x6bf0, .value=0x90, .type=IO_READ},
        {.addr=0x6bf1, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02CF) {
    const struct CPU_State initial_cpu = {.pc=0x1920, .a=0x02, .x=0x68, .y=0x70, .sp=0xc4, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x1920, .value=0x90}, {.addr=0x1921, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0x1922, .a=0x02, .x=0x68, .y=0x70, .sp=0xc4, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x1920, .value=0x90}, {.addr=0x1921, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0x1920, .value=0x90, .type=IO_READ},
        {.addr=0x1921, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02D0) {
    const struct CPU_State initial_cpu = {.pc=0x9744, .a=0x3d, .x=0x28, .y=0xa7, .sp=0x37, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x9744, .value=0x90}, {.addr=0x9745, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x9746, .a=0x3d, .x=0x28, .y=0xa7, .sp=0x37, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x9744, .value=0x90}, {.addr=0x9745, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x9744, .value=0x90, .type=IO_READ},
        {.addr=0x9745, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02D1) {
    const struct CPU_State initial_cpu = {.pc=0x7d98, .a=0x77, .x=0xc2, .y=0x9c, .sp=0xb1, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x7d98, .value=0x90}, {.addr=0x7d99, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0x7d94, .a=0x77, .x=0xc2, .y=0x9c, .sp=0xb1, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x7d98, .value=0x90}, {.addr=0x7d99, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0x7d98, .value=0x90, .type=IO_READ},
        {.addr=0x7d99, .value=0xfa, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x7f5c, .a=0xff, .x=0x87, .y=0x4f, .sp=0xf3, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x7f5c, .value=0x90}, {.addr=0x7f5d, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0x7f5e, .a=0xff, .x=0x87, .y=0x4f, .sp=0xf3, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x7f5c, .value=0x90}, {.addr=0x7f5d, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0x7f5c, .value=0x90, .type=IO_READ},
        {.addr=0x7f5d, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02D3) {
    const struct CPU_State initial_cpu = {.pc=0x19fc, .a=0xa7, .x=0xbf, .y=0x82, .sp=0xb9, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x19fc, .value=0x90}, {.addr=0x19fd, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0x1997, .a=0xa7, .x=0xbf, .y=0x82, .sp=0xb9, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x19fc, .value=0x90}, {.addr=0x19fd, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0x19fc, .value=0x90, .type=IO_READ},
        {.addr=0x19fd, .value=0x99, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02D4) {
    const struct CPU_State initial_cpu = {.pc=0x8ca4, .a=0xe1, .x=0xab, .y=0xfb, .sp=0x3e, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x8ca4, .value=0x90}, {.addr=0x8ca5, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0x8ccf, .a=0xe1, .x=0xab, .y=0xfb, .sp=0x3e, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x8ca4, .value=0x90}, {.addr=0x8ca5, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0x8ca4, .value=0x90, .type=IO_READ},
        {.addr=0x8ca5, .value=0x29, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02D5) {
    const struct CPU_State initial_cpu = {.pc=0xb984, .a=0x27, .x=0x50, .y=0xee, .sp=0x1a, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0xb984, .value=0x90}, {.addr=0xb985, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0xb986, .a=0x27, .x=0x50, .y=0xee, .sp=0x1a, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xb984, .value=0x90}, {.addr=0xb985, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0xb984, .value=0x90, .type=IO_READ},
        {.addr=0xb985, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02D6) {
    const struct CPU_State initial_cpu = {.pc=0x7c44, .a=0xf2, .x=0xfb, .y=0x65, .sp=0xa4, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x7c44, .value=0x90}, {.addr=0x7c45, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0x7c46, .a=0xf2, .x=0xfb, .y=0x65, .sp=0xa4, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x7c44, .value=0x90}, {.addr=0x7c45, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0x7c44, .value=0x90, .type=IO_READ},
        {.addr=0x7c45, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02D7) {
    const struct CPU_State initial_cpu = {.pc=0x7ee5, .a=0xe2, .x=0x04, .y=0x10, .sp=0xab, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x7ee5, .value=0x90}, {.addr=0x7ee6, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0x7ee7, .a=0xe2, .x=0x04, .y=0x10, .sp=0xab, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x7ee5, .value=0x90}, {.addr=0x7ee6, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0x7ee5, .value=0x90, .type=IO_READ},
        {.addr=0x7ee6, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02D8) {
    const struct CPU_State initial_cpu = {.pc=0xea1a, .a=0xed, .x=0xb1, .y=0x87, .sp=0x4b, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xea1a, .value=0x90}, {.addr=0xea1b, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xea1c, .a=0xed, .x=0xb1, .y=0x87, .sp=0x4b, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0xea1a, .value=0x90}, {.addr=0xea1b, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xea1a, .value=0x90, .type=IO_READ},
        {.addr=0xea1b, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02D9) {
    const struct CPU_State initial_cpu = {.pc=0x451e, .a=0xe0, .x=0xcf, .y=0x29, .sp=0xb3, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x451e, .value=0x90}, {.addr=0x451f, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0x451f, .a=0xe0, .x=0xcf, .y=0x29, .sp=0xb3, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x451e, .value=0x90}, {.addr=0x451f, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0x451e, .value=0x90, .type=IO_READ},
        {.addr=0x451f, .value=0xff, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02DA) {
    const struct CPU_State initial_cpu = {.pc=0xb8e5, .a=0x5d, .x=0x30, .y=0xb4, .sp=0xab, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xb8e5, .value=0x90}, {.addr=0xb8e6, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xb8c7, .a=0x5d, .x=0x30, .y=0xb4, .sp=0xab, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0xb8e5, .value=0x90}, {.addr=0xb8e6, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xb8e5, .value=0x90, .type=IO_READ},
        {.addr=0xb8e6, .value=0xe0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02DB) {
    const struct CPU_State initial_cpu = {.pc=0x2aaa, .a=0x22, .x=0x5a, .y=0xa7, .sp=0xaf, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x2aaa, .value=0x90}, {.addr=0x2aab, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x2aac, .a=0x22, .x=0x5a, .y=0xa7, .sp=0xaf, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x2aaa, .value=0x90}, {.addr=0x2aab, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x2aaa, .value=0x90, .type=IO_READ},
        {.addr=0x2aab, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02DC) {
    const struct CPU_State initial_cpu = {.pc=0xe48a, .a=0x41, .x=0x49, .y=0x0e, .sp=0xa4, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xe48a, .value=0x90}, {.addr=0xe48b, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xe48c, .a=0x41, .x=0x49, .y=0x0e, .sp=0xa4, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xe48a, .value=0x90}, {.addr=0xe48b, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xe48a, .value=0x90, .type=IO_READ},
        {.addr=0xe48b, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02DD) {
    const struct CPU_State initial_cpu = {.pc=0xce43, .a=0x0a, .x=0x08, .y=0x5e, .sp=0x67, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xce43, .value=0x90}, {.addr=0xce44, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0xce45, .a=0x0a, .x=0x08, .y=0x5e, .sp=0x67, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xce43, .value=0x90}, {.addr=0xce44, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0xce43, .value=0x90, .type=IO_READ},
        {.addr=0xce44, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02DE) {
    const struct CPU_State initial_cpu = {.pc=0xd423, .a=0x21, .x=0x55, .y=0x0d, .sp=0xc7, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xd423, .value=0x90}, {.addr=0xd424, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0xd4a3, .a=0x21, .x=0x55, .y=0x0d, .sp=0xc7, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0xd423, .value=0x90}, {.addr=0xd424, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0xd423, .value=0x90, .type=IO_READ},
        {.addr=0xd424, .value=0x7e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02DF) {
    const struct CPU_State initial_cpu = {.pc=0x5446, .a=0x7b, .x=0xb8, .y=0xe7, .sp=0x71, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x5446, .value=0x90}, {.addr=0x5447, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0x54bc, .a=0x7b, .x=0xb8, .y=0xe7, .sp=0x71, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x5446, .value=0x90}, {.addr=0x5447, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0x5446, .value=0x90, .type=IO_READ},
        {.addr=0x5447, .value=0x74, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02E0) {
    const struct CPU_State initial_cpu = {.pc=0x69b7, .a=0xab, .x=0x7d, .y=0x90, .sp=0xe7, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x69b7, .value=0x90}, {.addr=0x69b8, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0x69b9, .a=0xab, .x=0x7d, .y=0x90, .sp=0xe7, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x69b7, .value=0x90}, {.addr=0x69b8, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0x69b7, .value=0x90, .type=IO_READ},
        {.addr=0x69b8, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02E1) {
    const struct CPU_State initial_cpu = {.pc=0xf4a7, .a=0xf8, .x=0xed, .y=0x69, .sp=0xf4, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xf4a7, .value=0x90}, {.addr=0xf4a8, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0xf47a, .a=0xf8, .x=0xed, .y=0x69, .sp=0xf4, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xf4a7, .value=0x90}, {.addr=0xf4a8, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0xf4a7, .value=0x90, .type=IO_READ},
        {.addr=0xf4a8, .value=0xd1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02E2) {
    const struct CPU_State initial_cpu = {.pc=0x4010, .a=0x94, .x=0x3c, .y=0x56, .sp=0x0e, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x4010, .value=0x90}, {.addr=0x4011, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0x4012, .a=0x94, .x=0x3c, .y=0x56, .sp=0x0e, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x4010, .value=0x90}, {.addr=0x4011, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0x4010, .value=0x90, .type=IO_READ},
        {.addr=0x4011, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02E3) {
    const struct CPU_State initial_cpu = {.pc=0x9f35, .a=0xfd, .x=0xcc, .y=0x89, .sp=0xfe, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x9f35, .value=0x90}, {.addr=0x9f36, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0x9f37, .a=0xfd, .x=0xcc, .y=0x89, .sp=0xfe, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x9f35, .value=0x90}, {.addr=0x9f36, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0x9f35, .value=0x90, .type=IO_READ},
        {.addr=0x9f36, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02E4) {
    const struct CPU_State initial_cpu = {.pc=0x2f7c, .a=0xe7, .x=0x24, .y=0x7f, .sp=0x99, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x2f7c, .value=0x90}, {.addr=0x2f7d, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x2fc4, .a=0xe7, .x=0x24, .y=0x7f, .sp=0x99, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x2f7c, .value=0x90}, {.addr=0x2f7d, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x2f7c, .value=0x90, .type=IO_READ},
        {.addr=0x2f7d, .value=0x46, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02E5) {
    const struct CPU_State initial_cpu = {.pc=0xcb1f, .a=0xb8, .x=0x08, .y=0x26, .sp=0xd6, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xcb1f, .value=0x90}, {.addr=0xcb20, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0xcb21, .a=0xb8, .x=0x08, .y=0x26, .sp=0xd6, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xcb1f, .value=0x90}, {.addr=0xcb20, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0xcb1f, .value=0x90, .type=IO_READ},
        {.addr=0xcb20, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02E6) {
    const struct CPU_State initial_cpu = {.pc=0xe391, .a=0xb7, .x=0x41, .y=0x1e, .sp=0x26, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xe391, .value=0x90}, {.addr=0xe392, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0xe3a2, .a=0xb7, .x=0x41, .y=0x1e, .sp=0x26, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0xe391, .value=0x90}, {.addr=0xe392, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0xe391, .value=0x90, .type=IO_READ},
        {.addr=0xe392, .value=0x0f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02E7) {
    const struct CPU_State initial_cpu = {.pc=0x7251, .a=0x66, .x=0xb9, .y=0xd9, .sp=0x61, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x7251, .value=0x90}, {.addr=0x7252, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0x7292, .a=0x66, .x=0xb9, .y=0xd9, .sp=0x61, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x7251, .value=0x90}, {.addr=0x7252, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0x7251, .value=0x90, .type=IO_READ},
        {.addr=0x7252, .value=0x3f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02E8) {
    const struct CPU_State initial_cpu = {.pc=0x908f, .a=0xaa, .x=0xc1, .y=0x0a, .sp=0x4e, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x908f, .value=0x90}, {.addr=0x9090, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0x90bb, .a=0xaa, .x=0xc1, .y=0x0a, .sp=0x4e, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x908f, .value=0x90}, {.addr=0x9090, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0x908f, .value=0x90, .type=IO_READ},
        {.addr=0x9090, .value=0x2a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02E9) {
    const struct CPU_State initial_cpu = {.pc=0x772d, .a=0x94, .x=0xeb, .y=0xad, .sp=0xfc, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x772d, .value=0x90}, {.addr=0x772e, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0x772f, .a=0x94, .x=0xeb, .y=0xad, .sp=0xfc, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x772d, .value=0x90}, {.addr=0x772e, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0x772d, .value=0x90, .type=IO_READ},
        {.addr=0x772e, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02EA) {
    const struct CPU_State initial_cpu = {.pc=0x8f62, .a=0x90, .x=0x4e, .y=0xc0, .sp=0x8a, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x8f62, .value=0x90}, {.addr=0x8f63, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0x8ef0, .a=0x90, .x=0x4e, .y=0xc0, .sp=0x8a, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x8f62, .value=0x90}, {.addr=0x8f63, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0x8f62, .value=0x90, .type=IO_READ},
        {.addr=0x8f63, .value=0x8c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02EB) {
    const struct CPU_State initial_cpu = {.pc=0xe41b, .a=0x6a, .x=0x19, .y=0x3f, .sp=0x80, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xe41b, .value=0x90}, {.addr=0xe41c, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xe41d, .a=0x6a, .x=0x19, .y=0x3f, .sp=0x80, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0xe41b, .value=0x90}, {.addr=0xe41c, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xe41b, .value=0x90, .type=IO_READ},
        {.addr=0xe41c, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02EC) {
    const struct CPU_State initial_cpu = {.pc=0xad93, .a=0xdc, .x=0xdf, .y=0xa9, .sp=0x79, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0xad93, .value=0x90}, {.addr=0xad94, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0xaddc, .a=0xdc, .x=0xdf, .y=0xa9, .sp=0x79, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xad93, .value=0x90}, {.addr=0xad94, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0xad93, .value=0x90, .type=IO_READ},
        {.addr=0xad94, .value=0x47, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02ED) {
    const struct CPU_State initial_cpu = {.pc=0x2766, .a=0xd8, .x=0x58, .y=0x6f, .sp=0xeb, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x2766, .value=0x90}, {.addr=0x2767, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x2768, .a=0xd8, .x=0x58, .y=0x6f, .sp=0xeb, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x2766, .value=0x90}, {.addr=0x2767, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x2766, .value=0x90, .type=IO_READ},
        {.addr=0x2767, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02EE) {
    const struct CPU_State initial_cpu = {.pc=0xb35f, .a=0x32, .x=0x0f, .y=0xd8, .sp=0xd9, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xb35f, .value=0x90}, {.addr=0xb360, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xb2fd, .a=0x32, .x=0x0f, .y=0xd8, .sp=0xd9, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0xb35f, .value=0x90}, {.addr=0xb360, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xb35f, .value=0x90, .type=IO_READ},
        {.addr=0xb360, .value=0x9c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02EF) {
    const struct CPU_State initial_cpu = {.pc=0xb469, .a=0x2a, .x=0xf1, .y=0x45, .sp=0x5b, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xb469, .value=0x90}, {.addr=0xb46a, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0xb46b, .a=0x2a, .x=0xf1, .y=0x45, .sp=0x5b, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xb469, .value=0x90}, {.addr=0xb46a, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0xb469, .value=0x90, .type=IO_READ},
        {.addr=0xb46a, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02F0) {
    const struct CPU_State initial_cpu = {.pc=0xb748, .a=0x69, .x=0x00, .y=0xcc, .sp=0x60, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xb748, .value=0x90}, {.addr=0xb749, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0xb768, .a=0x69, .x=0x00, .y=0xcc, .sp=0x60, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xb748, .value=0x90}, {.addr=0xb749, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0xb748, .value=0x90, .type=IO_READ},
        {.addr=0xb749, .value=0x1e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02F1) {
    const struct CPU_State initial_cpu = {.pc=0x2de3, .a=0xdc, .x=0x67, .y=0xce, .sp=0xae, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x2de3, .value=0x90}, {.addr=0x2de4, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x2dd0, .a=0xdc, .x=0x67, .y=0xce, .sp=0xae, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x2de3, .value=0x90}, {.addr=0x2de4, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x2de3, .value=0x90, .type=IO_READ},
        {.addr=0x2de4, .value=0xeb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02F2) {
    const struct CPU_State initial_cpu = {.pc=0x742e, .a=0x6c, .x=0xf6, .y=0x0c, .sp=0x5a, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x742e, .value=0x90}, {.addr=0x742f, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0x7430, .a=0x6c, .x=0xf6, .y=0x0c, .sp=0x5a, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x742e, .value=0x90}, {.addr=0x742f, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0x742e, .value=0x90, .type=IO_READ},
        {.addr=0x742f, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02F3) {
    const struct CPU_State initial_cpu = {.pc=0x06dd, .a=0x7f, .x=0x33, .y=0x61, .sp=0xd7, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x06dd, .value=0x90}, {.addr=0x06de, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x075b, .a=0x7f, .x=0x33, .y=0x61, .sp=0xd7, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x06dd, .value=0x90}, {.addr=0x06de, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x06dd, .value=0x90, .type=IO_READ},
        {.addr=0x06de, .value=0x7c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02F4) {
    const struct CPU_State initial_cpu = {.pc=0x65a0, .a=0xd6, .x=0xb2, .y=0x83, .sp=0x04, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x65a0, .value=0x90}, {.addr=0x65a1, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x65a2, .a=0xd6, .x=0xb2, .y=0x83, .sp=0x04, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x65a0, .value=0x90}, {.addr=0x65a1, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x65a0, .value=0x90, .type=IO_READ},
        {.addr=0x65a1, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02F5) {
    const struct CPU_State initial_cpu = {.pc=0x9e78, .a=0x9c, .x=0x27, .y=0x7b, .sp=0xc6, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x9e78, .value=0x90}, {.addr=0x9e79, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0x9e7a, .a=0x9c, .x=0x27, .y=0x7b, .sp=0xc6, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x9e78, .value=0x90}, {.addr=0x9e79, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0x9e78, .value=0x90, .type=IO_READ},
        {.addr=0x9e79, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02F6) {
    const struct CPU_State initial_cpu = {.pc=0x2e13, .a=0x0b, .x=0xdd, .y=0x03, .sp=0x31, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x2e13, .value=0x90}, {.addr=0x2e14, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0x2e15, .a=0x0b, .x=0xdd, .y=0x03, .sp=0x31, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x2e13, .value=0x90}, {.addr=0x2e14, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0x2e13, .value=0x90, .type=IO_READ},
        {.addr=0x2e14, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02F7) {
    const struct CPU_State initial_cpu = {.pc=0x0a10, .a=0xe0, .x=0x04, .y=0x89, .sp=0xff, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x0a10, .value=0x90}, {.addr=0x0a11, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0x0a23, .a=0xe0, .x=0x04, .y=0x89, .sp=0xff, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x0a10, .value=0x90}, {.addr=0x0a11, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0x0a10, .value=0x90, .type=IO_READ},
        {.addr=0x0a11, .value=0x11, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02F8) {
    const struct CPU_State initial_cpu = {.pc=0x6c53, .a=0x2f, .x=0xae, .y=0xb0, .sp=0x8e, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x6c53, .value=0x90}, {.addr=0x6c54, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0x6c27, .a=0x2f, .x=0xae, .y=0xb0, .sp=0x8e, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x6c53, .value=0x90}, {.addr=0x6c54, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0x6c53, .value=0x90, .type=IO_READ},
        {.addr=0x6c54, .value=0xd2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02F9) {
    const struct CPU_State initial_cpu = {.pc=0x2a23, .a=0x46, .x=0xff, .y=0x5b, .sp=0xbf, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x2a23, .value=0x90}, {.addr=0x2a24, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0x2a91, .a=0x46, .x=0xff, .y=0x5b, .sp=0xbf, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x2a23, .value=0x90}, {.addr=0x2a24, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0x2a23, .value=0x90, .type=IO_READ},
        {.addr=0x2a24, .value=0x6c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02FA) {
    const struct CPU_State initial_cpu = {.pc=0x15d4, .a=0x6a, .x=0xaf, .y=0x7a, .sp=0x89, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x15d4, .value=0x90}, {.addr=0x15d5, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0x1574, .a=0x6a, .x=0xaf, .y=0x7a, .sp=0x89, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x15d4, .value=0x90}, {.addr=0x15d5, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0x15d4, .value=0x90, .type=IO_READ},
        {.addr=0x15d5, .value=0x9e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02FB) {
    const struct CPU_State initial_cpu = {.pc=0xf1b5, .a=0x27, .x=0x66, .y=0x96, .sp=0xc1, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0xf1b5, .value=0x90}, {.addr=0xf1b6, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0xf1b7, .a=0x27, .x=0x66, .y=0x96, .sp=0xc1, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0xf1b5, .value=0x90}, {.addr=0xf1b6, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0xf1b5, .value=0x90, .type=IO_READ},
        {.addr=0xf1b6, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02FC) {
    const struct CPU_State initial_cpu = {.pc=0x2f8a, .a=0xa2, .x=0x7f, .y=0xab, .sp=0x70, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x2f8a, .value=0x90}, {.addr=0x2f8b, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x2f8c, .a=0xa2, .x=0x7f, .y=0xab, .sp=0x70, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x2f8a, .value=0x90}, {.addr=0x2f8b, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x2f8a, .value=0x90, .type=IO_READ},
        {.addr=0x2f8b, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02FD) {
    const struct CPU_State initial_cpu = {.pc=0x15eb, .a=0x43, .x=0xe0, .y=0x27, .sp=0x17, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x15eb, .value=0x90}, {.addr=0x15ec, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0x15ed, .a=0x43, .x=0xe0, .y=0x27, .sp=0x17, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x15eb, .value=0x90}, {.addr=0x15ec, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0x15eb, .value=0x90, .type=IO_READ},
        {.addr=0x15ec, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02FE) {
    const struct CPU_State initial_cpu = {.pc=0xdd8a, .a=0x16, .x=0x17, .y=0x4b, .sp=0xdc, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xdd8a, .value=0x90}, {.addr=0xdd8b, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0xdd8c, .a=0x16, .x=0x17, .y=0x4b, .sp=0xdc, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0xdd8a, .value=0x90}, {.addr=0xdd8b, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0xdd8a, .value=0x90, .type=IO_READ},
        {.addr=0xdd8b, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x507d, .a=0x55, .x=0xee, .y=0xa6, .sp=0x3e, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x507d, .value=0x90}, {.addr=0x507e, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0x507f, .a=0x55, .x=0xee, .y=0xa6, .sp=0x3e, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x507d, .value=0x90}, {.addr=0x507e, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0x507d, .value=0x90, .type=IO_READ},
        {.addr=0x507e, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0300) {
    const struct CPU_State initial_cpu = {.pc=0xd1fb, .a=0xb8, .x=0x94, .y=0xdd, .sp=0xf7, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xd1fb, .value=0x90}, {.addr=0xd1fc, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0xd1fd, .a=0xb8, .x=0x94, .y=0xdd, .sp=0xf7, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xd1fb, .value=0x90}, {.addr=0xd1fc, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0xd1fb, .value=0x90, .type=IO_READ},
        {.addr=0xd1fc, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0301) {
    const struct CPU_State initial_cpu = {.pc=0xeb65, .a=0x9b, .x=0x4d, .y=0x9a, .sp=0x51, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xeb65, .value=0x90}, {.addr=0xeb66, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0xeb67, .a=0x9b, .x=0x4d, .y=0x9a, .sp=0x51, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0xeb65, .value=0x90}, {.addr=0xeb66, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0xeb65, .value=0x90, .type=IO_READ},
        {.addr=0xeb66, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0302) {
    const struct CPU_State initial_cpu = {.pc=0xd221, .a=0x88, .x=0x42, .y=0xc7, .sp=0x94, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xd221, .value=0x90}, {.addr=0xd222, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0xd223, .a=0x88, .x=0x42, .y=0xc7, .sp=0x94, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0xd221, .value=0x90}, {.addr=0xd222, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0xd221, .value=0x90, .type=IO_READ},
        {.addr=0xd222, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0303) {
    const struct CPU_State initial_cpu = {.pc=0x782c, .a=0x4b, .x=0xa2, .y=0x3b, .sp=0xa9, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x782c, .value=0x90}, {.addr=0x782d, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x77e2, .a=0x4b, .x=0xa2, .y=0x3b, .sp=0xa9, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x782c, .value=0x90}, {.addr=0x782d, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x782c, .value=0x90, .type=IO_READ},
        {.addr=0x782d, .value=0xb4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0304) {
    const struct CPU_State initial_cpu = {.pc=0x2e90, .a=0xc3, .x=0xac, .y=0xcf, .sp=0x96, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x2e90, .value=0x90}, {.addr=0x2e91, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0x2eb5, .a=0xc3, .x=0xac, .y=0xcf, .sp=0x96, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x2e90, .value=0x90}, {.addr=0x2e91, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0x2e90, .value=0x90, .type=IO_READ},
        {.addr=0x2e91, .value=0x23, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0305) {
    const struct CPU_State initial_cpu = {.pc=0x7eb8, .a=0x76, .x=0xc6, .y=0x49, .sp=0xba, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x7eb8, .value=0x90}, {.addr=0x7eb9, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0x7eba, .a=0x76, .x=0xc6, .y=0x49, .sp=0xba, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x7eb8, .value=0x90}, {.addr=0x7eb9, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0x7eb8, .value=0x90, .type=IO_READ},
        {.addr=0x7eb9, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0306) {
    const struct CPU_State initial_cpu = {.pc=0xa60d, .a=0xe4, .x=0x48, .y=0xe4, .sp=0xcb, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xa60d, .value=0x90}, {.addr=0xa60e, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0xa676, .a=0xe4, .x=0x48, .y=0xe4, .sp=0xcb, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0xa60d, .value=0x90}, {.addr=0xa60e, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0xa60d, .value=0x90, .type=IO_READ},
        {.addr=0xa60e, .value=0x67, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0307) {
    const struct CPU_State initial_cpu = {.pc=0x2aec, .a=0xb2, .x=0x48, .y=0x51, .sp=0xa9, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x2aec, .value=0x90}, {.addr=0x2aed, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0x2aee, .a=0xb2, .x=0x48, .y=0x51, .sp=0xa9, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x2aec, .value=0x90}, {.addr=0x2aed, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0x2aec, .value=0x90, .type=IO_READ},
        {.addr=0x2aed, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0308) {
    const struct CPU_State initial_cpu = {.pc=0x373b, .a=0xd0, .x=0xd3, .y=0x60, .sp=0xa7, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x373b, .value=0x90}, {.addr=0x373c, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x373d, .a=0xd0, .x=0xd3, .y=0x60, .sp=0xa7, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x373b, .value=0x90}, {.addr=0x373c, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x373b, .value=0x90, .type=IO_READ},
        {.addr=0x373c, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0309) {
    const struct CPU_State initial_cpu = {.pc=0x8adc, .a=0xb3, .x=0x5b, .y=0x96, .sp=0x43, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x8adc, .value=0x90}, {.addr=0x8add, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x8ada, .a=0xb3, .x=0x5b, .y=0x96, .sp=0x43, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x8adc, .value=0x90}, {.addr=0x8add, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x8adc, .value=0x90, .type=IO_READ},
        {.addr=0x8add, .value=0xfc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_030A) {
    const struct CPU_State initial_cpu = {.pc=0x323f, .a=0x99, .x=0x78, .y=0x52, .sp=0x65, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x323f, .value=0x90}, {.addr=0x3240, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x322c, .a=0x99, .x=0x78, .y=0x52, .sp=0x65, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x323f, .value=0x90}, {.addr=0x3240, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x323f, .value=0x90, .type=IO_READ},
        {.addr=0x3240, .value=0xeb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_030B) {
    const struct CPU_State initial_cpu = {.pc=0x3c5e, .a=0xd7, .x=0xa9, .y=0xb5, .sp=0x50, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x3c5e, .value=0x90}, {.addr=0x3c5f, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0x3c60, .a=0xd7, .x=0xa9, .y=0xb5, .sp=0x50, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x3c5e, .value=0x90}, {.addr=0x3c5f, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0x3c5e, .value=0x90, .type=IO_READ},
        {.addr=0x3c5f, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_030C) {
    const struct CPU_State initial_cpu = {.pc=0x4de0, .a=0xcc, .x=0xc2, .y=0xc4, .sp=0x03, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x4de0, .value=0x90}, {.addr=0x4de1, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0x4de2, .a=0xcc, .x=0xc2, .y=0xc4, .sp=0x03, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x4de0, .value=0x90}, {.addr=0x4de1, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0x4de0, .value=0x90, .type=IO_READ},
        {.addr=0x4de1, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_030D) {
    const struct CPU_State initial_cpu = {.pc=0x0e4d, .a=0x8c, .x=0x12, .y=0x00, .sp=0x8f, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x0e4d, .value=0x90}, {.addr=0x0e4e, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x0e4f, .a=0x8c, .x=0x12, .y=0x00, .sp=0x8f, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x0e4d, .value=0x90}, {.addr=0x0e4e, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x0e4d, .value=0x90, .type=IO_READ},
        {.addr=0x0e4e, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_030E) {
    const struct CPU_State initial_cpu = {.pc=0x3507, .a=0xb3, .x=0x4e, .y=0xd8, .sp=0x8f, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x3507, .value=0x90}, {.addr=0x3508, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x3509, .a=0xb3, .x=0x4e, .y=0xd8, .sp=0x8f, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x3507, .value=0x90}, {.addr=0x3508, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x3507, .value=0x90, .type=IO_READ},
        {.addr=0x3508, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_030F) {
    const struct CPU_State initial_cpu = {.pc=0xfb5f, .a=0x9c, .x=0x84, .y=0x35, .sp=0x5f, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xfb5f, .value=0x90}, {.addr=0xfb60, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0xfb61, .a=0x9c, .x=0x84, .y=0x35, .sp=0x5f, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0xfb5f, .value=0x90}, {.addr=0xfb60, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0xfb5f, .value=0x90, .type=IO_READ},
        {.addr=0xfb60, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0310) {
    const struct CPU_State initial_cpu = {.pc=0xe3a8, .a=0xe5, .x=0xdf, .y=0xc5, .sp=0x09, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xe3a8, .value=0x90}, {.addr=0xe3a9, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0xe342, .a=0xe5, .x=0xdf, .y=0xc5, .sp=0x09, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0xe3a8, .value=0x90}, {.addr=0xe3a9, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0xe3a8, .value=0x90, .type=IO_READ},
        {.addr=0xe3a9, .value=0x98, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0311) {
    const struct CPU_State initial_cpu = {.pc=0xef17, .a=0x63, .x=0xb3, .y=0x9e, .sp=0x2a, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xef17, .value=0x90}, {.addr=0xef18, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0xef52, .a=0x63, .x=0xb3, .y=0x9e, .sp=0x2a, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0xef17, .value=0x90}, {.addr=0xef18, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0xef17, .value=0x90, .type=IO_READ},
        {.addr=0xef18, .value=0x39, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0312) {
    const struct CPU_State initial_cpu = {.pc=0x7b8f, .a=0x1f, .x=0x66, .y=0x01, .sp=0xd3, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x7b8f, .value=0x90}, {.addr=0x7b90, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x7b91, .a=0x1f, .x=0x66, .y=0x01, .sp=0xd3, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x7b8f, .value=0x90}, {.addr=0x7b90, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x7b8f, .value=0x90, .type=IO_READ},
        {.addr=0x7b90, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0313) {
    const struct CPU_State initial_cpu = {.pc=0xbefa, .a=0x2f, .x=0x37, .y=0x87, .sp=0x1c, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xbefa, .value=0x90}, {.addr=0xbefb, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0xbefc, .a=0x2f, .x=0x37, .y=0x87, .sp=0x1c, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0xbefa, .value=0x90}, {.addr=0xbefb, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0xbefa, .value=0x90, .type=IO_READ},
        {.addr=0xbefb, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0314) {
    const struct CPU_State initial_cpu = {.pc=0x0671, .a=0x84, .x=0xc6, .y=0x79, .sp=0xe6, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x0671, .value=0x90}, {.addr=0x0672, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0x0609, .a=0x84, .x=0xc6, .y=0x79, .sp=0xe6, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x0671, .value=0x90}, {.addr=0x0672, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0x0671, .value=0x90, .type=IO_READ},
        {.addr=0x0672, .value=0x96, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0315) {
    const struct CPU_State initial_cpu = {.pc=0xb536, .a=0xa8, .x=0x3b, .y=0x5a, .sp=0xd1, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xb536, .value=0x90}, {.addr=0xb537, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0xb4fd, .a=0xa8, .x=0x3b, .y=0x5a, .sp=0xd1, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xb536, .value=0x90}, {.addr=0xb537, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0xb536, .value=0x90, .type=IO_READ},
        {.addr=0xb537, .value=0xc5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0316) {
    const struct CPU_State initial_cpu = {.pc=0xc145, .a=0x32, .x=0x97, .y=0xb9, .sp=0xf3, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xc145, .value=0x90}, {.addr=0xc146, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0xc147, .a=0x32, .x=0x97, .y=0xb9, .sp=0xf3, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0xc145, .value=0x90}, {.addr=0xc146, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0xc145, .value=0x90, .type=IO_READ},
        {.addr=0xc146, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0317) {
    const struct CPU_State initial_cpu = {.pc=0xbd3c, .a=0xf0, .x=0x7a, .y=0x04, .sp=0x97, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xbd3c, .value=0x90}, {.addr=0xbd3d, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0xbce7, .a=0xf0, .x=0x7a, .y=0x04, .sp=0x97, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0xbd3c, .value=0x90}, {.addr=0xbd3d, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0xbd3c, .value=0x90, .type=IO_READ},
        {.addr=0xbd3d, .value=0xa9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0318) {
    const struct CPU_State initial_cpu = {.pc=0x63c6, .a=0xda, .x=0x10, .y=0x5d, .sp=0x0b, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x63c6, .value=0x90}, {.addr=0x63c7, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0x63c8, .a=0xda, .x=0x10, .y=0x5d, .sp=0x0b, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x63c6, .value=0x90}, {.addr=0x63c7, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0x63c6, .value=0x90, .type=IO_READ},
        {.addr=0x63c7, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0319) {
    const struct CPU_State initial_cpu = {.pc=0x693b, .a=0x67, .x=0x35, .y=0x7b, .sp=0x71, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x693b, .value=0x90}, {.addr=0x693c, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x693d, .a=0x67, .x=0x35, .y=0x7b, .sp=0x71, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x693b, .value=0x90}, {.addr=0x693c, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x693b, .value=0x90, .type=IO_READ},
        {.addr=0x693c, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_031A) {
    const struct CPU_State initial_cpu = {.pc=0x0582, .a=0x1d, .x=0xd5, .y=0x41, .sp=0xd0, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x0582, .value=0x90}, {.addr=0x0583, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0x0584, .a=0x1d, .x=0xd5, .y=0x41, .sp=0xd0, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x0582, .value=0x90}, {.addr=0x0583, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0x0582, .value=0x90, .type=IO_READ},
        {.addr=0x0583, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_031B) {
    const struct CPU_State initial_cpu = {.pc=0xd2df, .a=0xe3, .x=0x63, .y=0x00, .sp=0x69, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xd2df, .value=0x90}, {.addr=0xd2e0, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0xd2e1, .a=0xe3, .x=0x63, .y=0x00, .sp=0x69, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xd2df, .value=0x90}, {.addr=0xd2e0, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0xd2df, .value=0x90, .type=IO_READ},
        {.addr=0xd2e0, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_031C) {
    const struct CPU_State initial_cpu = {.pc=0xd948, .a=0x5a, .x=0xf7, .y=0x41, .sp=0xc3, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xd948, .value=0x90}, {.addr=0xd949, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0xd928, .a=0x5a, .x=0xf7, .y=0x41, .sp=0xc3, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0xd948, .value=0x90}, {.addr=0xd949, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0xd948, .value=0x90, .type=IO_READ},
        {.addr=0xd949, .value=0xde, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_031D) {
    const struct CPU_State initial_cpu = {.pc=0xfddb, .a=0x76, .x=0x2a, .y=0x16, .sp=0xb3, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xfddb, .value=0x90}, {.addr=0xfddc, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0xfddd, .a=0x76, .x=0x2a, .y=0x16, .sp=0xb3, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0xfddb, .value=0x90}, {.addr=0xfddc, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0xfddb, .value=0x90, .type=IO_READ},
        {.addr=0xfddc, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_031E) {
    const struct CPU_State initial_cpu = {.pc=0xb81d, .a=0xd0, .x=0xd1, .y=0x32, .sp=0x53, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xb81d, .value=0x90}, {.addr=0xb81e, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0xb851, .a=0xd0, .x=0xd1, .y=0x32, .sp=0x53, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xb81d, .value=0x90}, {.addr=0xb81e, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0xb81d, .value=0x90, .type=IO_READ},
        {.addr=0xb81e, .value=0x32, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_031F) {
    const struct CPU_State initial_cpu = {.pc=0x0131, .a=0x71, .x=0x74, .y=0x2e, .sp=0x59, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x0131, .value=0x90}, {.addr=0x0132, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0x014a, .a=0x71, .x=0x74, .y=0x2e, .sp=0x59, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x0131, .value=0x90}, {.addr=0x0132, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0x0131, .value=0x90, .type=IO_READ},
        {.addr=0x0132, .value=0x17, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0320) {
    const struct CPU_State initial_cpu = {.pc=0x361a, .a=0x16, .x=0x5c, .y=0xdd, .sp=0x00, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x361a, .value=0x90}, {.addr=0x361b, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0x35c8, .a=0x16, .x=0x5c, .y=0xdd, .sp=0x00, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x361a, .value=0x90}, {.addr=0x361b, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0x361a, .value=0x90, .type=IO_READ},
        {.addr=0x361b, .value=0xac, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0321) {
    const struct CPU_State initial_cpu = {.pc=0x2333, .a=0xe9, .x=0x70, .y=0x2e, .sp=0x9f, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x2333, .value=0x90}, {.addr=0x2334, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0x2335, .a=0xe9, .x=0x70, .y=0x2e, .sp=0x9f, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x2333, .value=0x90}, {.addr=0x2334, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0x2333, .value=0x90, .type=IO_READ},
        {.addr=0x2334, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0322) {
    const struct CPU_State initial_cpu = {.pc=0x2f6a, .a=0x43, .x=0xc8, .y=0xeb, .sp=0x73, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x2f6a, .value=0x90}, {.addr=0x2f6b, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x2f3a, .a=0x43, .x=0xc8, .y=0xeb, .sp=0x73, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x2f6a, .value=0x90}, {.addr=0x2f6b, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x2f6a, .value=0x90, .type=IO_READ},
        {.addr=0x2f6b, .value=0xce, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0323) {
    const struct CPU_State initial_cpu = {.pc=0xaac7, .a=0x26, .x=0x86, .y=0xb6, .sp=0xbc, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xaac7, .value=0x90}, {.addr=0xaac8, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0xaab4, .a=0x26, .x=0x86, .y=0xb6, .sp=0xbc, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0xaac7, .value=0x90}, {.addr=0xaac8, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0xaac7, .value=0x90, .type=IO_READ},
        {.addr=0xaac8, .value=0xeb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0324) {
    const struct CPU_State initial_cpu = {.pc=0xd394, .a=0x7e, .x=0xc9, .y=0x6d, .sp=0xe3, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xd394, .value=0x90}, {.addr=0xd395, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xd396, .a=0x7e, .x=0xc9, .y=0x6d, .sp=0xe3, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xd394, .value=0x90}, {.addr=0xd395, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xd394, .value=0x90, .type=IO_READ},
        {.addr=0xd395, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0325) {
    const struct CPU_State initial_cpu = {.pc=0x0385, .a=0x7b, .x=0x5d, .y=0x67, .sp=0x13, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x0385, .value=0x90}, {.addr=0x0386, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0x0387, .a=0x7b, .x=0x5d, .y=0x67, .sp=0x13, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x0385, .value=0x90}, {.addr=0x0386, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0x0385, .value=0x90, .type=IO_READ},
        {.addr=0x0386, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0326) {
    const struct CPU_State initial_cpu = {.pc=0x020d, .a=0x07, .x=0x85, .y=0xa0, .sp=0x89, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x020d, .value=0x90}, {.addr=0x020e, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0x01f2, .a=0x07, .x=0x85, .y=0xa0, .sp=0x89, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x020d, .value=0x90}, {.addr=0x020e, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0x020d, .value=0x90, .type=IO_READ},
        {.addr=0x020e, .value=0xe3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0327) {
    const struct CPU_State initial_cpu = {.pc=0x430f, .a=0x9e, .x=0xaa, .y=0x67, .sp=0x13, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x430f, .value=0x90}, {.addr=0x4310, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0x4311, .a=0x9e, .x=0xaa, .y=0x67, .sp=0x13, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x430f, .value=0x90}, {.addr=0x4310, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0x430f, .value=0x90, .type=IO_READ},
        {.addr=0x4310, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0328) {
    const struct CPU_State initial_cpu = {.pc=0xa5c3, .a=0xc7, .x=0xa6, .y=0x71, .sp=0x6b, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xa5c3, .value=0x90}, {.addr=0xa5c4, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xa5cb, .a=0xc7, .x=0xa6, .y=0x71, .sp=0x6b, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xa5c3, .value=0x90}, {.addr=0xa5c4, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xa5c3, .value=0x90, .type=IO_READ},
        {.addr=0xa5c4, .value=0x06, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0329) {
    const struct CPU_State initial_cpu = {.pc=0x8197, .a=0xbd, .x=0x9f, .y=0x69, .sp=0xb9, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x8197, .value=0x90}, {.addr=0x8198, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x81d6, .a=0xbd, .x=0x9f, .y=0x69, .sp=0xb9, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x8197, .value=0x90}, {.addr=0x8198, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x8197, .value=0x90, .type=IO_READ},
        {.addr=0x8198, .value=0x3d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_032A) {
    const struct CPU_State initial_cpu = {.pc=0x0b96, .a=0x14, .x=0x3c, .y=0x09, .sp=0xfc, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x0b96, .value=0x90}, {.addr=0x0b97, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0x0b98, .a=0x14, .x=0x3c, .y=0x09, .sp=0xfc, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x0b96, .value=0x90}, {.addr=0x0b97, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0x0b96, .value=0x90, .type=IO_READ},
        {.addr=0x0b97, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_032B) {
    const struct CPU_State initial_cpu = {.pc=0x75a7, .a=0x9b, .x=0xa9, .y=0x6b, .sp=0xfa, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x75a7, .value=0x90}, {.addr=0x75a8, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0x75a9, .a=0x9b, .x=0xa9, .y=0x6b, .sp=0xfa, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x75a7, .value=0x90}, {.addr=0x75a8, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0x75a7, .value=0x90, .type=IO_READ},
        {.addr=0x75a8, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_032C) {
    const struct CPU_State initial_cpu = {.pc=0x1e12, .a=0x01, .x=0x24, .y=0x23, .sp=0x88, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x1e12, .value=0x90}, {.addr=0x1e13, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0x1e14, .a=0x01, .x=0x24, .y=0x23, .sp=0x88, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x1e12, .value=0x90}, {.addr=0x1e13, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0x1e12, .value=0x90, .type=IO_READ},
        {.addr=0x1e13, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_032D) {
    const struct CPU_State initial_cpu = {.pc=0xe93b, .a=0xb8, .x=0x58, .y=0xa3, .sp=0xb5, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xe93b, .value=0x90}, {.addr=0xe93c, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0xe93d, .a=0xb8, .x=0x58, .y=0xa3, .sp=0xb5, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0xe93b, .value=0x90}, {.addr=0xe93c, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0xe93b, .value=0x90, .type=IO_READ},
        {.addr=0xe93c, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_032E) {
    const struct CPU_State initial_cpu = {.pc=0x9c65, .a=0x86, .x=0x84, .y=0x32, .sp=0x3d, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x9c65, .value=0x90}, {.addr=0x9c66, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0x9c67, .a=0x86, .x=0x84, .y=0x32, .sp=0x3d, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x9c65, .value=0x90}, {.addr=0x9c66, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0x9c65, .value=0x90, .type=IO_READ},
        {.addr=0x9c66, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_032F) {
    const struct CPU_State initial_cpu = {.pc=0xcf76, .a=0x86, .x=0x1c, .y=0x75, .sp=0xec, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xcf76, .value=0x90}, {.addr=0xcf77, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0xcf12, .a=0x86, .x=0x1c, .y=0x75, .sp=0xec, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xcf76, .value=0x90}, {.addr=0xcf77, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0xcf76, .value=0x90, .type=IO_READ},
        {.addr=0xcf77, .value=0x9a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0330) {
    const struct CPU_State initial_cpu = {.pc=0x2136, .a=0xeb, .x=0xf7, .y=0xa8, .sp=0xd8, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x2136, .value=0x90}, {.addr=0x2137, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x2138, .a=0xeb, .x=0xf7, .y=0xa8, .sp=0xd8, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x2136, .value=0x90}, {.addr=0x2137, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x2136, .value=0x90, .type=IO_READ},
        {.addr=0x2137, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0331) {
    const struct CPU_State initial_cpu = {.pc=0xa59e, .a=0xb2, .x=0x00, .y=0x3f, .sp=0x47, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xa59e, .value=0x90}, {.addr=0xa59f, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0xa5a0, .a=0xb2, .x=0x00, .y=0x3f, .sp=0x47, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0xa59e, .value=0x90}, {.addr=0xa59f, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0xa59e, .value=0x90, .type=IO_READ},
        {.addr=0xa59f, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0332) {
    const struct CPU_State initial_cpu = {.pc=0x2111, .a=0x9a, .x=0xca, .y=0x6b, .sp=0x8e, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x2111, .value=0x90}, {.addr=0x2112, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0x2125, .a=0x9a, .x=0xca, .y=0x6b, .sp=0x8e, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x2111, .value=0x90}, {.addr=0x2112, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0x2111, .value=0x90, .type=IO_READ},
        {.addr=0x2112, .value=0x12, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0333) {
    const struct CPU_State initial_cpu = {.pc=0x3a77, .a=0xa2, .x=0x4a, .y=0x56, .sp=0xba, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x3a77, .value=0x90}, {.addr=0x3a78, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x3a47, .a=0xa2, .x=0x4a, .y=0x56, .sp=0xba, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x3a77, .value=0x90}, {.addr=0x3a78, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x3a77, .value=0x90, .type=IO_READ},
        {.addr=0x3a78, .value=0xce, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0334) {
    const struct CPU_State initial_cpu = {.pc=0x6451, .a=0x0a, .x=0x5a, .y=0x59, .sp=0x2e, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x6451, .value=0x90}, {.addr=0x6452, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0x645d, .a=0x0a, .x=0x5a, .y=0x59, .sp=0x2e, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x6451, .value=0x90}, {.addr=0x6452, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0x6451, .value=0x90, .type=IO_READ},
        {.addr=0x6452, .value=0x0a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0335) {
    const struct CPU_State initial_cpu = {.pc=0xd18b, .a=0xc5, .x=0xed, .y=0x8b, .sp=0xe1, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xd18b, .value=0x90}, {.addr=0xd18c, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0xd18d, .a=0xc5, .x=0xed, .y=0x8b, .sp=0xe1, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0xd18b, .value=0x90}, {.addr=0xd18c, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0xd18b, .value=0x90, .type=IO_READ},
        {.addr=0xd18c, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0336) {
    const struct CPU_State initial_cpu = {.pc=0x0b80, .a=0x59, .x=0xaf, .y=0x6c, .sp=0x3f, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x0b80, .value=0x90}, {.addr=0x0b81, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0x0b82, .a=0x59, .x=0xaf, .y=0x6c, .sp=0x3f, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x0b80, .value=0x90}, {.addr=0x0b81, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0x0b80, .value=0x90, .type=IO_READ},
        {.addr=0x0b81, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0337) {
    const struct CPU_State initial_cpu = {.pc=0x149d, .a=0x71, .x=0x53, .y=0xc1, .sp=0xd6, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x149d, .value=0x90}, {.addr=0x149e, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x149f, .a=0x71, .x=0x53, .y=0xc1, .sp=0xd6, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x149d, .value=0x90}, {.addr=0x149e, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x149d, .value=0x90, .type=IO_READ},
        {.addr=0x149e, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0338) {
    const struct CPU_State initial_cpu = {.pc=0x88b0, .a=0xf7, .x=0x7a, .y=0xb1, .sp=0x2b, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x88b0, .value=0x90}, {.addr=0x88b1, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0x88b2, .a=0xf7, .x=0x7a, .y=0xb1, .sp=0x2b, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x88b0, .value=0x90}, {.addr=0x88b1, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0x88b0, .value=0x90, .type=IO_READ},
        {.addr=0x88b1, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0339) {
    const struct CPU_State initial_cpu = {.pc=0xa60d, .a=0x1a, .x=0x4d, .y=0x59, .sp=0xca, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xa60d, .value=0x90}, {.addr=0xa60e, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xa615, .a=0x1a, .x=0x4d, .y=0x59, .sp=0xca, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0xa60d, .value=0x90}, {.addr=0xa60e, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xa60d, .value=0x90, .type=IO_READ},
        {.addr=0xa60e, .value=0x06, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_033A) {
    const struct CPU_State initial_cpu = {.pc=0x6a3c, .a=0xf1, .x=0x9d, .y=0xbd, .sp=0x20, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x6a3c, .value=0x90}, {.addr=0x6a3d, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0x6a3e, .a=0xf1, .x=0x9d, .y=0xbd, .sp=0x20, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x6a3c, .value=0x90}, {.addr=0x6a3d, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0x6a3c, .value=0x90, .type=IO_READ},
        {.addr=0x6a3d, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_033B) {
    const struct CPU_State initial_cpu = {.pc=0x283c, .a=0xc8, .x=0xee, .y=0x4f, .sp=0xfa, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x283c, .value=0x90}, {.addr=0x283d, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0x28a6, .a=0xc8, .x=0xee, .y=0x4f, .sp=0xfa, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x283c, .value=0x90}, {.addr=0x283d, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0x283c, .value=0x90, .type=IO_READ},
        {.addr=0x283d, .value=0x68, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_033C) {
    const struct CPU_State initial_cpu = {.pc=0x606b, .a=0xc3, .x=0x63, .y=0x10, .sp=0x98, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x606b, .value=0x90}, {.addr=0x606c, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x606d, .a=0xc3, .x=0x63, .y=0x10, .sp=0x98, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x606b, .value=0x90}, {.addr=0x606c, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x606b, .value=0x90, .type=IO_READ},
        {.addr=0x606c, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_033D) {
    const struct CPU_State initial_cpu = {.pc=0xad8b, .a=0xcc, .x=0xa2, .y=0xc5, .sp=0x74, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xad8b, .value=0x90}, {.addr=0xad8c, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0xaddc, .a=0xcc, .x=0xa2, .y=0xc5, .sp=0x74, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0xad8b, .value=0x90}, {.addr=0xad8c, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0xad8b, .value=0x90, .type=IO_READ},
        {.addr=0xad8c, .value=0x4f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_033E) {
    const struct CPU_State initial_cpu = {.pc=0x0afd, .a=0xd2, .x=0x38, .y=0x6b, .sp=0x05, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x0afd, .value=0x90}, {.addr=0x0afe, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x0aff, .a=0xd2, .x=0x38, .y=0x6b, .sp=0x05, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x0afd, .value=0x90}, {.addr=0x0afe, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x0afd, .value=0x90, .type=IO_READ},
        {.addr=0x0afe, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_033F) {
    const struct CPU_State initial_cpu = {.pc=0xbd63, .a=0xf7, .x=0x7f, .y=0x7a, .sp=0x46, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xbd63, .value=0x90}, {.addr=0xbd64, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0xbd65, .a=0xf7, .x=0x7f, .y=0x7a, .sp=0x46, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xbd63, .value=0x90}, {.addr=0xbd64, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0xbd63, .value=0x90, .type=IO_READ},
        {.addr=0xbd64, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0340) {
    const struct CPU_State initial_cpu = {.pc=0x2633, .a=0x10, .x=0x38, .y=0x52, .sp=0x55, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x2633, .value=0x90}, {.addr=0x2634, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x2635, .a=0x10, .x=0x38, .y=0x52, .sp=0x55, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x2633, .value=0x90}, {.addr=0x2634, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x2633, .value=0x90, .type=IO_READ},
        {.addr=0x2634, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0341) {
    const struct CPU_State initial_cpu = {.pc=0x5db5, .a=0xcd, .x=0x57, .y=0x32, .sp=0xfb, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x5db5, .value=0x90}, {.addr=0x5db6, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0x5e1e, .a=0xcd, .x=0x57, .y=0x32, .sp=0xfb, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x5db5, .value=0x90}, {.addr=0x5db6, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0x5db5, .value=0x90, .type=IO_READ},
        {.addr=0x5db6, .value=0x67, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0342) {
    const struct CPU_State initial_cpu = {.pc=0xc934, .a=0x9c, .x=0x58, .y=0x14, .sp=0xd8, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xc934, .value=0x90}, {.addr=0xc935, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0xc936, .a=0x9c, .x=0x58, .y=0x14, .sp=0xd8, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xc934, .value=0x90}, {.addr=0xc935, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0xc934, .value=0x90, .type=IO_READ},
        {.addr=0xc935, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0343) {
    const struct CPU_State initial_cpu = {.pc=0x146c, .a=0x74, .x=0xa8, .y=0xf2, .sp=0xc0, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x146c, .value=0x90}, {.addr=0x146d, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x146b, .a=0x74, .x=0xa8, .y=0xf2, .sp=0xc0, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x146c, .value=0x90}, {.addr=0x146d, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x146c, .value=0x90, .type=IO_READ},
        {.addr=0x146d, .value=0xfd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0344) {
    const struct CPU_State initial_cpu = {.pc=0x6867, .a=0x45, .x=0x32, .y=0xf0, .sp=0xac, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x6867, .value=0x90}, {.addr=0x6868, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x6869, .a=0x45, .x=0x32, .y=0xf0, .sp=0xac, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x6867, .value=0x90}, {.addr=0x6868, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x6867, .value=0x90, .type=IO_READ},
        {.addr=0x6868, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0345) {
    const struct CPU_State initial_cpu = {.pc=0x628a, .a=0x57, .x=0x50, .y=0xda, .sp=0xbd, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x628a, .value=0x90}, {.addr=0x628b, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x628c, .a=0x57, .x=0x50, .y=0xda, .sp=0xbd, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x628a, .value=0x90}, {.addr=0x628b, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x628a, .value=0x90, .type=IO_READ},
        {.addr=0x628b, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0346) {
    const struct CPU_State initial_cpu = {.pc=0x3054, .a=0x1d, .x=0x92, .y=0xe4, .sp=0x34, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x3054, .value=0x90}, {.addr=0x3055, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0x3056, .a=0x1d, .x=0x92, .y=0xe4, .sp=0x34, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x3054, .value=0x90}, {.addr=0x3055, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0x3054, .value=0x90, .type=IO_READ},
        {.addr=0x3055, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0347) {
    const struct CPU_State initial_cpu = {.pc=0xa487, .a=0x12, .x=0x53, .y=0xa9, .sp=0xf0, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xa487, .value=0x90}, {.addr=0xa488, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xa4e9, .a=0x12, .x=0x53, .y=0xa9, .sp=0xf0, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xa487, .value=0x90}, {.addr=0xa488, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xa487, .value=0x90, .type=IO_READ},
        {.addr=0xa488, .value=0x60, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0348) {
    const struct CPU_State initial_cpu = {.pc=0x6f9b, .a=0x02, .x=0x30, .y=0xf1, .sp=0x01, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x6f9b, .value=0x90}, {.addr=0x6f9c, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0x6f9d, .a=0x02, .x=0x30, .y=0xf1, .sp=0x01, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x6f9b, .value=0x90}, {.addr=0x6f9c, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0x6f9b, .value=0x90, .type=IO_READ},
        {.addr=0x6f9c, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0349) {
    const struct CPU_State initial_cpu = {.pc=0xa358, .a=0x64, .x=0x55, .y=0x0e, .sp=0xac, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xa358, .value=0x90}, {.addr=0xa359, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0xa35a, .a=0x64, .x=0x55, .y=0x0e, .sp=0xac, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0xa358, .value=0x90}, {.addr=0xa359, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0xa358, .value=0x90, .type=IO_READ},
        {.addr=0xa359, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_034A) {
    const struct CPU_State initial_cpu = {.pc=0x1d03, .a=0x0a, .x=0xf0, .y=0xa4, .sp=0x80, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x1d03, .value=0x90}, {.addr=0x1d04, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0x1d05, .a=0x0a, .x=0xf0, .y=0xa4, .sp=0x80, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x1d03, .value=0x90}, {.addr=0x1d04, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0x1d03, .value=0x90, .type=IO_READ},
        {.addr=0x1d04, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_034B) {
    const struct CPU_State initial_cpu = {.pc=0x3e78, .a=0x4f, .x=0x9f, .y=0x70, .sp=0x92, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x3e78, .value=0x90}, {.addr=0x3e79, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x3e7a, .a=0x4f, .x=0x9f, .y=0x70, .sp=0x92, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x3e78, .value=0x90}, {.addr=0x3e79, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x3e78, .value=0x90, .type=IO_READ},
        {.addr=0x3e79, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_034C) {
    const struct CPU_State initial_cpu = {.pc=0xae82, .a=0x10, .x=0x35, .y=0xc2, .sp=0xaf, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xae82, .value=0x90}, {.addr=0xae83, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0xae84, .a=0x10, .x=0x35, .y=0xc2, .sp=0xaf, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0xae82, .value=0x90}, {.addr=0xae83, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0xae82, .value=0x90, .type=IO_READ},
        {.addr=0xae83, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_034D) {
    const struct CPU_State initial_cpu = {.pc=0x370a, .a=0x06, .x=0xb9, .y=0x20, .sp=0x2b, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x370a, .value=0x90}, {.addr=0x370b, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0x370c, .a=0x06, .x=0xb9, .y=0x20, .sp=0x2b, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x370a, .value=0x90}, {.addr=0x370b, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0x370a, .value=0x90, .type=IO_READ},
        {.addr=0x370b, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_034E) {
    const struct CPU_State initial_cpu = {.pc=0x9352, .a=0xef, .x=0xeb, .y=0x6b, .sp=0x8f, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x9352, .value=0x90}, {.addr=0x9353, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x9354, .a=0xef, .x=0xeb, .y=0x6b, .sp=0x8f, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x9352, .value=0x90}, {.addr=0x9353, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x9352, .value=0x90, .type=IO_READ},
        {.addr=0x9353, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_034F) {
    const struct CPU_State initial_cpu = {.pc=0xa5b4, .a=0xd2, .x=0x4d, .y=0xf7, .sp=0xd8, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xa5b4, .value=0x90}, {.addr=0xa5b5, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0xa571, .a=0xd2, .x=0x4d, .y=0xf7, .sp=0xd8, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xa5b4, .value=0x90}, {.addr=0xa5b5, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0xa5b4, .value=0x90, .type=IO_READ},
        {.addr=0xa5b5, .value=0xbb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0350) {
    const struct CPU_State initial_cpu = {.pc=0x5b17, .a=0x51, .x=0xc6, .y=0xe9, .sp=0xa2, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x5b17, .value=0x90}, {.addr=0x5b18, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x5b19, .a=0x51, .x=0xc6, .y=0xe9, .sp=0xa2, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x5b17, .value=0x90}, {.addr=0x5b18, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x5b17, .value=0x90, .type=IO_READ},
        {.addr=0x5b18, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0351) {
    const struct CPU_State initial_cpu = {.pc=0x3c1c, .a=0xde, .x=0x6e, .y=0x38, .sp=0xc3, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x3c1c, .value=0x90}, {.addr=0x3c1d, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0x3c1e, .a=0xde, .x=0x6e, .y=0x38, .sp=0xc3, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x3c1c, .value=0x90}, {.addr=0x3c1d, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0x3c1c, .value=0x90, .type=IO_READ},
        {.addr=0x3c1d, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0352) {
    const struct CPU_State initial_cpu = {.pc=0x12c2, .a=0x32, .x=0x78, .y=0x53, .sp=0xc8, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x12c2, .value=0x90}, {.addr=0x12c3, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x12b8, .a=0x32, .x=0x78, .y=0x53, .sp=0xc8, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x12c2, .value=0x90}, {.addr=0x12c3, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x12c2, .value=0x90, .type=IO_READ},
        {.addr=0x12c3, .value=0xf4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0353) {
    const struct CPU_State initial_cpu = {.pc=0x2451, .a=0xc8, .x=0x14, .y=0xad, .sp=0x02, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x2451, .value=0x90}, {.addr=0x2452, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0x2445, .a=0xc8, .x=0x14, .y=0xad, .sp=0x02, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x2451, .value=0x90}, {.addr=0x2452, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0x2451, .value=0x90, .type=IO_READ},
        {.addr=0x2452, .value=0xf2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0354) {
    const struct CPU_State initial_cpu = {.pc=0xb470, .a=0x9e, .x=0xb0, .y=0xbf, .sp=0x15, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xb470, .value=0x90}, {.addr=0xb471, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0xb472, .a=0x9e, .x=0xb0, .y=0xbf, .sp=0x15, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xb470, .value=0x90}, {.addr=0xb471, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0xb470, .value=0x90, .type=IO_READ},
        {.addr=0xb471, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0355) {
    const struct CPU_State initial_cpu = {.pc=0x333f, .a=0xd9, .x=0x04, .y=0x93, .sp=0x84, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x333f, .value=0x90}, {.addr=0x3340, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x32c4, .a=0xd9, .x=0x04, .y=0x93, .sp=0x84, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x333f, .value=0x90}, {.addr=0x3340, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x333f, .value=0x90, .type=IO_READ},
        {.addr=0x3340, .value=0x83, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0356) {
    const struct CPU_State initial_cpu = {.pc=0x3155, .a=0xbf, .x=0x2d, .y=0xd8, .sp=0xa9, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x3155, .value=0x90}, {.addr=0x3156, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x3114, .a=0xbf, .x=0x2d, .y=0xd8, .sp=0xa9, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x3155, .value=0x90}, {.addr=0x3156, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x3155, .value=0x90, .type=IO_READ},
        {.addr=0x3156, .value=0xbd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0357) {
    const struct CPU_State initial_cpu = {.pc=0x7f38, .a=0x41, .x=0xfb, .y=0xbd, .sp=0x9e, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x7f38, .value=0x90}, {.addr=0x7f39, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0x7f3a, .a=0x41, .x=0xfb, .y=0xbd, .sp=0x9e, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x7f38, .value=0x90}, {.addr=0x7f39, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0x7f38, .value=0x90, .type=IO_READ},
        {.addr=0x7f39, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0358) {
    const struct CPU_State initial_cpu = {.pc=0x60fd, .a=0xf9, .x=0x96, .y=0x10, .sp=0x80, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x60fd, .value=0x90}, {.addr=0x60fe, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x60ff, .a=0xf9, .x=0x96, .y=0x10, .sp=0x80, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x60fd, .value=0x90}, {.addr=0x60fe, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x60fd, .value=0x90, .type=IO_READ},
        {.addr=0x60fe, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0359) {
    const struct CPU_State initial_cpu = {.pc=0x4d21, .a=0x57, .x=0xfb, .y=0x85, .sp=0x25, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x4d21, .value=0x90}, {.addr=0x4d22, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x4d23, .a=0x57, .x=0xfb, .y=0x85, .sp=0x25, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x4d21, .value=0x90}, {.addr=0x4d22, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0x4d21, .value=0x90, .type=IO_READ},
        {.addr=0x4d22, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_035A) {
    const struct CPU_State initial_cpu = {.pc=0xbca7, .a=0xc2, .x=0x18, .y=0xbf, .sp=0x3e, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xbca7, .value=0x90}, {.addr=0xbca8, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0xbcff, .a=0xc2, .x=0x18, .y=0xbf, .sp=0x3e, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xbca7, .value=0x90}, {.addr=0xbca8, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0xbca7, .value=0x90, .type=IO_READ},
        {.addr=0xbca8, .value=0x56, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_035B) {
    const struct CPU_State initial_cpu = {.pc=0x4c55, .a=0xc8, .x=0x1f, .y=0x63, .sp=0x06, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x4c55, .value=0x90}, {.addr=0x4c56, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0x4c80, .a=0xc8, .x=0x1f, .y=0x63, .sp=0x06, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x4c55, .value=0x90}, {.addr=0x4c56, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0x4c55, .value=0x90, .type=IO_READ},
        {.addr=0x4c56, .value=0x29, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_035C) {
    const struct CPU_State initial_cpu = {.pc=0xe27a, .a=0x5d, .x=0xd5, .y=0xfc, .sp=0x65, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xe27a, .value=0x90}, {.addr=0xe27b, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0xe27c, .a=0x5d, .x=0xd5, .y=0xfc, .sp=0x65, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0xe27a, .value=0x90}, {.addr=0xe27b, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0xe27a, .value=0x90, .type=IO_READ},
        {.addr=0xe27b, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_035D) {
    const struct CPU_State initial_cpu = {.pc=0xa908, .a=0xbc, .x=0x91, .y=0xba, .sp=0xc6, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xa908, .value=0x90}, {.addr=0xa909, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0xa901, .a=0xbc, .x=0x91, .y=0xba, .sp=0xc6, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xa908, .value=0x90}, {.addr=0xa909, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0xa908, .value=0x90, .type=IO_READ},
        {.addr=0xa909, .value=0xf7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_035E) {
    const struct CPU_State initial_cpu = {.pc=0x876b, .a=0x66, .x=0x24, .y=0x34, .sp=0x14, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x876b, .value=0x90}, {.addr=0x876c, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x8709, .a=0x66, .x=0x24, .y=0x34, .sp=0x14, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x876b, .value=0x90}, {.addr=0x876c, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x876b, .value=0x90, .type=IO_READ},
        {.addr=0x876c, .value=0x9c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_035F) {
    const struct CPU_State initial_cpu = {.pc=0xaa58, .a=0x9d, .x=0x09, .y=0x73, .sp=0xc7, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xaa58, .value=0x90}, {.addr=0xaa59, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0xaa5a, .a=0x9d, .x=0x09, .y=0x73, .sp=0xc7, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0xaa58, .value=0x90}, {.addr=0xaa59, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0xaa58, .value=0x90, .type=IO_READ},
        {.addr=0xaa59, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0360) {
    const struct CPU_State initial_cpu = {.pc=0xee06, .a=0xf2, .x=0x29, .y=0xd5, .sp=0xf7, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xee06, .value=0x90}, {.addr=0xee07, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0xee0c, .a=0xf2, .x=0x29, .y=0xd5, .sp=0xf7, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xee06, .value=0x90}, {.addr=0xee07, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0xee06, .value=0x90, .type=IO_READ},
        {.addr=0xee07, .value=0x04, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0361) {
    const struct CPU_State initial_cpu = {.pc=0x2b18, .a=0x23, .x=0xd1, .y=0xe4, .sp=0xe6, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x2b18, .value=0x90}, {.addr=0x2b19, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0x2b6f, .a=0x23, .x=0xd1, .y=0xe4, .sp=0xe6, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x2b18, .value=0x90}, {.addr=0x2b19, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0x2b18, .value=0x90, .type=IO_READ},
        {.addr=0x2b19, .value=0x55, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0362) {
    const struct CPU_State initial_cpu = {.pc=0xad16, .a=0xfe, .x=0xc4, .y=0x19, .sp=0x0e, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xad16, .value=0x90}, {.addr=0xad17, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0xad97, .a=0xfe, .x=0xc4, .y=0x19, .sp=0x0e, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0xad16, .value=0x90}, {.addr=0xad17, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0xad16, .value=0x90, .type=IO_READ},
        {.addr=0xad17, .value=0x7f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0363) {
    const struct CPU_State initial_cpu = {.pc=0x7922, .a=0x61, .x=0xe0, .y=0x8e, .sp=0xe4, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x7922, .value=0x90}, {.addr=0x7923, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0x7924, .a=0x61, .x=0xe0, .y=0x8e, .sp=0xe4, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x7922, .value=0x90}, {.addr=0x7923, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0x7922, .value=0x90, .type=IO_READ},
        {.addr=0x7923, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0364) {
    const struct CPU_State initial_cpu = {.pc=0x583d, .a=0x88, .x=0x62, .y=0x6c, .sp=0x2a, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x583d, .value=0x90}, {.addr=0x583e, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0x583f, .a=0x88, .x=0x62, .y=0x6c, .sp=0x2a, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x583d, .value=0x90}, {.addr=0x583e, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0x583d, .value=0x90, .type=IO_READ},
        {.addr=0x583e, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0365) {
    const struct CPU_State initial_cpu = {.pc=0xa9e0, .a=0x44, .x=0x64, .y=0x32, .sp=0xb8, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xa9e0, .value=0x90}, {.addr=0xa9e1, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0xaa3d, .a=0x44, .x=0x64, .y=0x32, .sp=0xb8, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0xa9e0, .value=0x90}, {.addr=0xa9e1, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0xa9e0, .value=0x90, .type=IO_READ},
        {.addr=0xa9e1, .value=0x5b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0366) {
    const struct CPU_State initial_cpu = {.pc=0x5489, .a=0x51, .x=0x67, .y=0xc3, .sp=0xa4, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x5489, .value=0x90}, {.addr=0x548a, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0x5501, .a=0x51, .x=0x67, .y=0xc3, .sp=0xa4, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x5489, .value=0x90}, {.addr=0x548a, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0x5489, .value=0x90, .type=IO_READ},
        {.addr=0x548a, .value=0x76, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0367) {
    const struct CPU_State initial_cpu = {.pc=0x8d85, .a=0x48, .x=0xd1, .y=0x0b, .sp=0xcd, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x8d85, .value=0x90}, {.addr=0x8d86, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0x8d41, .a=0x48, .x=0xd1, .y=0x0b, .sp=0xcd, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x8d85, .value=0x90}, {.addr=0x8d86, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0x8d85, .value=0x90, .type=IO_READ},
        {.addr=0x8d86, .value=0xba, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0368) {
    const struct CPU_State initial_cpu = {.pc=0x5a07, .a=0x38, .x=0x1d, .y=0xe9, .sp=0x40, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x5a07, .value=0x90}, {.addr=0x5a08, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0x5a73, .a=0x38, .x=0x1d, .y=0xe9, .sp=0x40, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x5a07, .value=0x90}, {.addr=0x5a08, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0x5a07, .value=0x90, .type=IO_READ},
        {.addr=0x5a08, .value=0x6a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0369) {
    const struct CPU_State initial_cpu = {.pc=0x9548, .a=0x57, .x=0xe9, .y=0xda, .sp=0x4c, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x9548, .value=0x90}, {.addr=0x9549, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0x94f6, .a=0x57, .x=0xe9, .y=0xda, .sp=0x4c, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x9548, .value=0x90}, {.addr=0x9549, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0x9548, .value=0x90, .type=IO_READ},
        {.addr=0x9549, .value=0xac, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_036A) {
    const struct CPU_State initial_cpu = {.pc=0xa3e7, .a=0x5a, .x=0xcf, .y=0xc4, .sp=0xe8, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xa3e7, .value=0x90}, {.addr=0xa3e8, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xa388, .a=0x5a, .x=0xcf, .y=0xc4, .sp=0xe8, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xa3e7, .value=0x90}, {.addr=0xa3e8, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xa3e7, .value=0x90, .type=IO_READ},
        {.addr=0xa3e8, .value=0x9f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_036B) {
    const struct CPU_State initial_cpu = {.pc=0xc11e, .a=0x06, .x=0x25, .y=0x25, .sp=0xa9, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xc11e, .value=0x90}, {.addr=0xc11f, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xc0ce, .a=0x06, .x=0x25, .y=0x25, .sp=0xa9, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xc11e, .value=0x90}, {.addr=0xc11f, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xc11e, .value=0x90, .type=IO_READ},
        {.addr=0xc11f, .value=0xae, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_036C) {
    const struct CPU_State initial_cpu = {.pc=0x4a28, .a=0x63, .x=0x24, .y=0xc5, .sp=0xaf, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x4a28, .value=0x90}, {.addr=0x4a29, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0x4a32, .a=0x63, .x=0x24, .y=0xc5, .sp=0xaf, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x4a28, .value=0x90}, {.addr=0x4a29, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0x4a28, .value=0x90, .type=IO_READ},
        {.addr=0x4a29, .value=0x08, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_036D) {
    const struct CPU_State initial_cpu = {.pc=0xee14, .a=0x83, .x=0xdf, .y=0x2b, .sp=0xb3, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xee14, .value=0x90}, {.addr=0xee15, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0xee16, .a=0x83, .x=0xdf, .y=0x2b, .sp=0xb3, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0xee14, .value=0x90}, {.addr=0xee15, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0xee14, .value=0x90, .type=IO_READ},
        {.addr=0xee15, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_036E) {
    const struct CPU_State initial_cpu = {.pc=0xbd99, .a=0x71, .x=0x1f, .y=0x0e, .sp=0xa5, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xbd99, .value=0x90}, {.addr=0xbd9a, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0xbe09, .a=0x71, .x=0x1f, .y=0x0e, .sp=0xa5, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0xbd99, .value=0x90}, {.addr=0xbd9a, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0xbd99, .value=0x90, .type=IO_READ},
        {.addr=0xbd9a, .value=0x6e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_036F) {
    const struct CPU_State initial_cpu = {.pc=0xce41, .a=0x40, .x=0x97, .y=0xe6, .sp=0x1e, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xce41, .value=0x90}, {.addr=0xce42, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0xce43, .a=0x40, .x=0x97, .y=0xe6, .sp=0x1e, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0xce41, .value=0x90}, {.addr=0xce42, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0xce41, .value=0x90, .type=IO_READ},
        {.addr=0xce42, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0370) {
    const struct CPU_State initial_cpu = {.pc=0x21a1, .a=0xa9, .x=0xe1, .y=0x8a, .sp=0x98, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x21a1, .value=0x90}, {.addr=0x21a2, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0x21bd, .a=0xa9, .x=0xe1, .y=0x8a, .sp=0x98, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x21a1, .value=0x90}, {.addr=0x21a2, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0x21a1, .value=0x90, .type=IO_READ},
        {.addr=0x21a2, .value=0x1a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0371) {
    const struct CPU_State initial_cpu = {.pc=0xe63b, .a=0xf2, .x=0xbd, .y=0xa0, .sp=0xf2, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xe63b, .value=0x90}, {.addr=0xe63c, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0xe5c1, .a=0xf2, .x=0xbd, .y=0xa0, .sp=0xf2, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0xe63b, .value=0x90}, {.addr=0xe63c, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0xe63b, .value=0x90, .type=IO_READ},
        {.addr=0xe63c, .value=0x84, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0372) {
    const struct CPU_State initial_cpu = {.pc=0xb388, .a=0x31, .x=0xe7, .y=0x22, .sp=0x6f, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xb388, .value=0x90}, {.addr=0xb389, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0xb38a, .a=0x31, .x=0xe7, .y=0x22, .sp=0x6f, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xb388, .value=0x90}, {.addr=0xb389, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0xb388, .value=0x90, .type=IO_READ},
        {.addr=0xb389, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0373) {
    const struct CPU_State initial_cpu = {.pc=0x7805, .a=0x8a, .x=0xa4, .y=0x96, .sp=0x62, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x7805, .value=0x90}, {.addr=0x7806, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0x7807, .a=0x8a, .x=0xa4, .y=0x96, .sp=0x62, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x7805, .value=0x90}, {.addr=0x7806, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0x7805, .value=0x90, .type=IO_READ},
        {.addr=0x7806, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0374) {
    const struct CPU_State initial_cpu = {.pc=0x5c35, .a=0x67, .x=0x80, .y=0xd9, .sp=0x1c, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x5c35, .value=0x90}, {.addr=0x5c36, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0x5ca5, .a=0x67, .x=0x80, .y=0xd9, .sp=0x1c, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x5c35, .value=0x90}, {.addr=0x5c36, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0x5c35, .value=0x90, .type=IO_READ},
        {.addr=0x5c36, .value=0x6e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0375) {
    const struct CPU_State initial_cpu = {.pc=0x52f9, .a=0x7a, .x=0x95, .y=0xee, .sp=0x68, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x52f9, .value=0x90}, {.addr=0x52fa, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x52fb, .a=0x7a, .x=0x95, .y=0xee, .sp=0x68, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x52f9, .value=0x90}, {.addr=0x52fa, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x52f9, .value=0x90, .type=IO_READ},
        {.addr=0x52fa, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0376) {
    const struct CPU_State initial_cpu = {.pc=0x62fb, .a=0xf4, .x=0x50, .y=0xc1, .sp=0xd1, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x62fb, .value=0x90}, {.addr=0x62fc, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0x62fd, .a=0xf4, .x=0x50, .y=0xc1, .sp=0xd1, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x62fb, .value=0x90}, {.addr=0x62fc, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0x62fb, .value=0x90, .type=IO_READ},
        {.addr=0x62fc, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0377) {
    const struct CPU_State initial_cpu = {.pc=0xb68f, .a=0x32, .x=0x23, .y=0x71, .sp=0x05, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xb68f, .value=0x90}, {.addr=0xb690, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0xb63b, .a=0x32, .x=0x23, .y=0x71, .sp=0x05, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xb68f, .value=0x90}, {.addr=0xb690, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0xb68f, .value=0x90, .type=IO_READ},
        {.addr=0xb690, .value=0xaa, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0378) {
    const struct CPU_State initial_cpu = {.pc=0x4074, .a=0xb6, .x=0x1c, .y=0x62, .sp=0xe2, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x4074, .value=0x90}, {.addr=0x4075, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0x408c, .a=0xb6, .x=0x1c, .y=0x62, .sp=0xe2, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x4074, .value=0x90}, {.addr=0x4075, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0x4074, .value=0x90, .type=IO_READ},
        {.addr=0x4075, .value=0x16, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0379) {
    const struct CPU_State initial_cpu = {.pc=0x382e, .a=0x24, .x=0x36, .y=0x40, .sp=0x36, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x382e, .value=0x90}, {.addr=0x382f, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0x3830, .a=0x24, .x=0x36, .y=0x40, .sp=0x36, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x382e, .value=0x90}, {.addr=0x382f, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0x382e, .value=0x90, .type=IO_READ},
        {.addr=0x382f, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_037A) {
    const struct CPU_State initial_cpu = {.pc=0x814d, .a=0x3c, .x=0xce, .y=0x2c, .sp=0x0f, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x814d, .value=0x90}, {.addr=0x814e, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x814f, .a=0x3c, .x=0xce, .y=0x2c, .sp=0x0f, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x814d, .value=0x90}, {.addr=0x814e, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x814d, .value=0x90, .type=IO_READ},
        {.addr=0x814e, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_037B) {
    const struct CPU_State initial_cpu = {.pc=0xf051, .a=0x49, .x=0x12, .y=0xc0, .sp=0xec, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xf051, .value=0x90}, {.addr=0xf052, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0xf053, .a=0x49, .x=0x12, .y=0xc0, .sp=0xec, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xf051, .value=0x90}, {.addr=0xf052, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0xf051, .value=0x90, .type=IO_READ},
        {.addr=0xf052, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_037C) {
    const struct CPU_State initial_cpu = {.pc=0x8869, .a=0x47, .x=0xb1, .y=0xc2, .sp=0x11, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x8869, .value=0x90}, {.addr=0x886a, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0x886b, .a=0x47, .x=0xb1, .y=0xc2, .sp=0x11, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x8869, .value=0x90}, {.addr=0x886a, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0x8869, .value=0x90, .type=IO_READ},
        {.addr=0x886a, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_037D) {
    const struct CPU_State initial_cpu = {.pc=0x6a73, .a=0xed, .x=0x60, .y=0xeb, .sp=0x29, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x6a73, .value=0x90}, {.addr=0x6a74, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0x6adc, .a=0xed, .x=0x60, .y=0xeb, .sp=0x29, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x6a73, .value=0x90}, {.addr=0x6a74, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0x6a73, .value=0x90, .type=IO_READ},
        {.addr=0x6a74, .value=0x67, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_037E) {
    const struct CPU_State initial_cpu = {.pc=0x80ef, .a=0xaf, .x=0xfd, .y=0x06, .sp=0xe9, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x80ef, .value=0x90}, {.addr=0x80f0, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0x8083, .a=0xaf, .x=0xfd, .y=0x06, .sp=0xe9, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x80ef, .value=0x90}, {.addr=0x80f0, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0x80ef, .value=0x90, .type=IO_READ},
        {.addr=0x80f0, .value=0x92, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_037F) {
    const struct CPU_State initial_cpu = {.pc=0x5a94, .a=0x9d, .x=0xee, .y=0x67, .sp=0x79, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x5a94, .value=0x90}, {.addr=0x5a95, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0x5a96, .a=0x9d, .x=0xee, .y=0x67, .sp=0x79, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x5a94, .value=0x90}, {.addr=0x5a95, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0x5a94, .value=0x90, .type=IO_READ},
        {.addr=0x5a95, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0380) {
    const struct CPU_State initial_cpu = {.pc=0xda06, .a=0x37, .x=0xb7, .y=0x9d, .sp=0x72, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xda06, .value=0x90}, {.addr=0xda07, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0xda08, .a=0x37, .x=0xb7, .y=0x9d, .sp=0x72, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xda06, .value=0x90}, {.addr=0xda07, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0xda06, .value=0x90, .type=IO_READ},
        {.addr=0xda07, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0381) {
    const struct CPU_State initial_cpu = {.pc=0xb005, .a=0x2f, .x=0x93, .y=0x5c, .sp=0xc0, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xb005, .value=0x90}, {.addr=0xb006, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0xb007, .a=0x2f, .x=0x93, .y=0x5c, .sp=0xc0, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0xb005, .value=0x90}, {.addr=0xb006, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0xb005, .value=0x90, .type=IO_READ},
        {.addr=0xb006, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0382) {
    const struct CPU_State initial_cpu = {.pc=0xbf22, .a=0xe8, .x=0x9d, .y=0x8a, .sp=0xaf, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xbf22, .value=0x90}, {.addr=0xbf23, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xbeca, .a=0xe8, .x=0x9d, .y=0x8a, .sp=0xaf, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0xbf22, .value=0x90}, {.addr=0xbf23, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xbf22, .value=0x90, .type=IO_READ},
        {.addr=0xbf23, .value=0xa6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0383) {
    const struct CPU_State initial_cpu = {.pc=0xad0c, .a=0xde, .x=0x2f, .y=0xff, .sp=0xe0, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xad0c, .value=0x90}, {.addr=0xad0d, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0xad0e, .a=0xde, .x=0x2f, .y=0xff, .sp=0xe0, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0xad0c, .value=0x90}, {.addr=0xad0d, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0xad0c, .value=0x90, .type=IO_READ},
        {.addr=0xad0d, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0384) {
    const struct CPU_State initial_cpu = {.pc=0xeb52, .a=0xf4, .x=0xa1, .y=0x31, .sp=0xcf, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xeb52, .value=0x90}, {.addr=0xeb53, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0xeb54, .a=0xf4, .x=0xa1, .y=0x31, .sp=0xcf, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0xeb52, .value=0x90}, {.addr=0xeb53, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0xeb52, .value=0x90, .type=IO_READ},
        {.addr=0xeb53, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0385) {
    const struct CPU_State initial_cpu = {.pc=0x56a0, .a=0x56, .x=0x8d, .y=0x3f, .sp=0x8f, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x56a0, .value=0x90}, {.addr=0x56a1, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0x5669, .a=0x56, .x=0x8d, .y=0x3f, .sp=0x8f, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x56a0, .value=0x90}, {.addr=0x56a1, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0x56a0, .value=0x90, .type=IO_READ},
        {.addr=0x56a1, .value=0xc7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0386) {
    const struct CPU_State initial_cpu = {.pc=0xc32c, .a=0xbf, .x=0xf5, .y=0x2a, .sp=0x11, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xc32c, .value=0x90}, {.addr=0xc32d, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0xc32e, .a=0xbf, .x=0xf5, .y=0x2a, .sp=0x11, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xc32c, .value=0x90}, {.addr=0xc32d, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0xc32c, .value=0x90, .type=IO_READ},
        {.addr=0xc32d, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0387) {
    const struct CPU_State initial_cpu = {.pc=0xa2df, .a=0x50, .x=0xc2, .y=0xfe, .sp=0x3c, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0xa2df, .value=0x90}, {.addr=0xa2e0, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0xa2e1, .a=0x50, .x=0xc2, .y=0xfe, .sp=0x3c, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0xa2df, .value=0x90}, {.addr=0xa2e0, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0xa2df, .value=0x90, .type=IO_READ},
        {.addr=0xa2e0, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0388) {
    const struct CPU_State initial_cpu = {.pc=0x5a8a, .a=0x5a, .x=0xe5, .y=0x24, .sp=0x91, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x5a8a, .value=0x90}, {.addr=0x5a8b, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0x5a8c, .a=0x5a, .x=0xe5, .y=0x24, .sp=0x91, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x5a8a, .value=0x90}, {.addr=0x5a8b, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0x5a8a, .value=0x90, .type=IO_READ},
        {.addr=0x5a8b, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0389) {
    const struct CPU_State initial_cpu = {.pc=0xef00, .a=0x9b, .x=0x44, .y=0x55, .sp=0x7f, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xef00, .value=0x90}, {.addr=0xef01, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0xeed2, .a=0x9b, .x=0x44, .y=0x55, .sp=0x7f, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0xef00, .value=0x90}, {.addr=0xef01, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0xef00, .value=0x90, .type=IO_READ},
        {.addr=0xef01, .value=0xd0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_038A) {
    const struct CPU_State initial_cpu = {.pc=0x46c2, .a=0xf7, .x=0x44, .y=0x1a, .sp=0x15, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x46c2, .value=0x90}, {.addr=0x46c3, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x46d9, .a=0xf7, .x=0x44, .y=0x1a, .sp=0x15, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x46c2, .value=0x90}, {.addr=0x46c3, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x46c2, .value=0x90, .type=IO_READ},
        {.addr=0x46c3, .value=0x15, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_038B) {
    const struct CPU_State initial_cpu = {.pc=0xcd82, .a=0xd3, .x=0x09, .y=0x88, .sp=0x69, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0xcd82, .value=0x90}, {.addr=0xcd83, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0xcd84, .a=0xd3, .x=0x09, .y=0x88, .sp=0x69, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0xcd82, .value=0x90}, {.addr=0xcd83, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0xcd82, .value=0x90, .type=IO_READ},
        {.addr=0xcd83, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_038C) {
    const struct CPU_State initial_cpu = {.pc=0xe38f, .a=0x08, .x=0x54, .y=0x96, .sp=0x62, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xe38f, .value=0x90}, {.addr=0xe390, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0xe3c5, .a=0x08, .x=0x54, .y=0x96, .sp=0x62, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xe38f, .value=0x90}, {.addr=0xe390, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0xe38f, .value=0x90, .type=IO_READ},
        {.addr=0xe390, .value=0x34, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_038D) {
    const struct CPU_State initial_cpu = {.pc=0x1cb6, .a=0xb7, .x=0x89, .y=0x35, .sp=0x40, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x1cb6, .value=0x90}, {.addr=0x1cb7, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0x1cb8, .a=0xb7, .x=0x89, .y=0x35, .sp=0x40, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x1cb6, .value=0x90}, {.addr=0x1cb7, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0x1cb6, .value=0x90, .type=IO_READ},
        {.addr=0x1cb7, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_038E) {
    const struct CPU_State initial_cpu = {.pc=0x1a56, .a=0xcd, .x=0x8e, .y=0xf6, .sp=0x45, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x1a56, .value=0x90}, {.addr=0x1a57, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0x1a58, .a=0xcd, .x=0x8e, .y=0xf6, .sp=0x45, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x1a56, .value=0x90}, {.addr=0x1a57, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0x1a56, .value=0x90, .type=IO_READ},
        {.addr=0x1a57, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_038F) {
    const struct CPU_State initial_cpu = {.pc=0x0a68, .a=0xe3, .x=0x85, .y=0xd6, .sp=0xe9, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x0a68, .value=0x90}, {.addr=0x0a69, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0x0a6a, .a=0xe3, .x=0x85, .y=0xd6, .sp=0xe9, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x0a68, .value=0x90}, {.addr=0x0a69, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0x0a68, .value=0x90, .type=IO_READ},
        {.addr=0x0a69, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0390) {
    const struct CPU_State initial_cpu = {.pc=0x9c46, .a=0xfb, .x=0x38, .y=0x3c, .sp=0x81, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x9c46, .value=0x90}, {.addr=0x9c47, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0x9c48, .a=0xfb, .x=0x38, .y=0x3c, .sp=0x81, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x9c46, .value=0x90}, {.addr=0x9c47, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0x9c46, .value=0x90, .type=IO_READ},
        {.addr=0x9c47, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0391) {
    const struct CPU_State initial_cpu = {.pc=0x5297, .a=0x92, .x=0xf1, .y=0x8e, .sp=0x38, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x5297, .value=0x90}, {.addr=0x5298, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0x5299, .a=0x92, .x=0xf1, .y=0x8e, .sp=0x38, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x5297, .value=0x90}, {.addr=0x5298, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0x5297, .value=0x90, .type=IO_READ},
        {.addr=0x5298, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0392) {
    const struct CPU_State initial_cpu = {.pc=0xbf6c, .a=0xfa, .x=0xf4, .y=0xb9, .sp=0x22, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xbf6c, .value=0x90}, {.addr=0xbf6d, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xbfdb, .a=0xfa, .x=0xf4, .y=0xb9, .sp=0x22, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xbf6c, .value=0x90}, {.addr=0xbf6d, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xbf6c, .value=0x90, .type=IO_READ},
        {.addr=0xbf6d, .value=0x6d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0393) {
    const struct CPU_State initial_cpu = {.pc=0x5e91, .a=0x05, .x=0x65, .y=0xb8, .sp=0x46, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x5e91, .value=0x90}, {.addr=0x5e92, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0x5e93, .a=0x05, .x=0x65, .y=0xb8, .sp=0x46, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x5e91, .value=0x90}, {.addr=0x5e92, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0x5e91, .value=0x90, .type=IO_READ},
        {.addr=0x5e92, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0394) {
    const struct CPU_State initial_cpu = {.pc=0x6a01, .a=0xde, .x=0xc8, .y=0xb9, .sp=0x6c, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x6a01, .value=0x90}, {.addr=0x6a02, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0x6a03, .a=0xde, .x=0xc8, .y=0xb9, .sp=0x6c, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x6a01, .value=0x90}, {.addr=0x6a02, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0x6a01, .value=0x90, .type=IO_READ},
        {.addr=0x6a02, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0395) {
    const struct CPU_State initial_cpu = {.pc=0xcd26, .a=0xa6, .x=0xea, .y=0x03, .sp=0x2d, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xcd26, .value=0x90}, {.addr=0xcd27, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0xcd28, .a=0xa6, .x=0xea, .y=0x03, .sp=0x2d, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0xcd26, .value=0x90}, {.addr=0xcd27, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0xcd26, .value=0x90, .type=IO_READ},
        {.addr=0xcd27, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0396) {
    const struct CPU_State initial_cpu = {.pc=0x1ed2, .a=0x4d, .x=0xfe, .y=0xca, .sp=0x48, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x1ed2, .value=0x90}, {.addr=0x1ed3, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0x1eb2, .a=0x4d, .x=0xfe, .y=0xca, .sp=0x48, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x1ed2, .value=0x90}, {.addr=0x1ed3, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0x1ed2, .value=0x90, .type=IO_READ},
        {.addr=0x1ed3, .value=0xde, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0397) {
    const struct CPU_State initial_cpu = {.pc=0x0d57, .a=0x0f, .x=0xe1, .y=0x81, .sp=0xae, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x0d57, .value=0x90}, {.addr=0x0d58, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0x0d59, .a=0x0f, .x=0xe1, .y=0x81, .sp=0xae, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x0d57, .value=0x90}, {.addr=0x0d58, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0x0d57, .value=0x90, .type=IO_READ},
        {.addr=0x0d58, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0398) {
    const struct CPU_State initial_cpu = {.pc=0xdd73, .a=0x65, .x=0x78, .y=0x6d, .sp=0x40, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xdd73, .value=0x90}, {.addr=0xdd74, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0xdd6f, .a=0x65, .x=0x78, .y=0x6d, .sp=0x40, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0xdd73, .value=0x90}, {.addr=0xdd74, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0xdd73, .value=0x90, .type=IO_READ},
        {.addr=0xdd74, .value=0xfa, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_0399) {
    const struct CPU_State initial_cpu = {.pc=0x4277, .a=0x20, .x=0x26, .y=0xc3, .sp=0x40, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x4277, .value=0x90}, {.addr=0x4278, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0x422c, .a=0x20, .x=0x26, .y=0xc3, .sp=0x40, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x4277, .value=0x90}, {.addr=0x4278, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0x4277, .value=0x90, .type=IO_READ},
        {.addr=0x4278, .value=0xb3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_039A) {
    const struct CPU_State initial_cpu = {.pc=0x2176, .a=0xd0, .x=0xa2, .y=0x62, .sp=0x36, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x2176, .value=0x90}, {.addr=0x2177, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0x2178, .a=0xd0, .x=0xa2, .y=0x62, .sp=0x36, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x2176, .value=0x90}, {.addr=0x2177, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0x2176, .value=0x90, .type=IO_READ},
        {.addr=0x2177, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_039B) {
    const struct CPU_State initial_cpu = {.pc=0xb5ee, .a=0x5d, .x=0xb3, .y=0x61, .sp=0x94, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xb5ee, .value=0x90}, {.addr=0xb5ef, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0xb5f0, .a=0x5d, .x=0xb3, .y=0x61, .sp=0x94, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xb5ee, .value=0x90}, {.addr=0xb5ef, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0xb5ee, .value=0x90, .type=IO_READ},
        {.addr=0xb5ef, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_039C) {
    const struct CPU_State initial_cpu = {.pc=0x703f, .a=0x02, .x=0x6b, .y=0xe2, .sp=0x05, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x703f, .value=0x90}, {.addr=0x7040, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x7084, .a=0x02, .x=0x6b, .y=0xe2, .sp=0x05, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x703f, .value=0x90}, {.addr=0x7040, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x703f, .value=0x90, .type=IO_READ},
        {.addr=0x7040, .value=0x43, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_039D) {
    const struct CPU_State initial_cpu = {.pc=0xd1fd, .a=0x30, .x=0xda, .y=0x13, .sp=0xa3, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xd1fd, .value=0x90}, {.addr=0xd1fe, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0xd186, .a=0x30, .x=0xda, .y=0x13, .sp=0xa3, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0xd1fd, .value=0x90}, {.addr=0xd1fe, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0xd1fd, .value=0x90, .type=IO_READ},
        {.addr=0xd1fe, .value=0x87, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_039E) {
    const struct CPU_State initial_cpu = {.pc=0xebc9, .a=0x59, .x=0x89, .y=0xbd, .sp=0x80, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xebc9, .value=0x90}, {.addr=0xebca, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0xebcb, .a=0x59, .x=0x89, .y=0xbd, .sp=0x80, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0xebc9, .value=0x90}, {.addr=0xebca, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0xebc9, .value=0x90, .type=IO_READ},
        {.addr=0xebca, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_039F) {
    const struct CPU_State initial_cpu = {.pc=0x8f84, .a=0xa7, .x=0x39, .y=0xbd, .sp=0xb2, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x8f84, .value=0x90}, {.addr=0x8f85, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x8f86, .a=0xa7, .x=0x39, .y=0xbd, .sp=0xb2, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x8f84, .value=0x90}, {.addr=0x8f85, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x8f84, .value=0x90, .type=IO_READ},
        {.addr=0x8f85, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03A0) {
    const struct CPU_State initial_cpu = {.pc=0x90ea, .a=0xcb, .x=0xcf, .y=0xac, .sp=0x7d, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x90ea, .value=0x90}, {.addr=0x90eb, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0x90ec, .a=0xcb, .x=0xcf, .y=0xac, .sp=0x7d, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x90ea, .value=0x90}, {.addr=0x90eb, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0x90ea, .value=0x90, .type=IO_READ},
        {.addr=0x90eb, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03A1) {
    const struct CPU_State initial_cpu = {.pc=0xa7fe, .a=0x6d, .x=0xd1, .y=0x79, .sp=0x38, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xa7fe, .value=0x90}, {.addr=0xa7ff, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0xa7cd, .a=0x6d, .x=0xd1, .y=0x79, .sp=0x38, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0xa7fe, .value=0x90}, {.addr=0xa7ff, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0xa7fe, .value=0x90, .type=IO_READ},
        {.addr=0xa7ff, .value=0xcd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03A2) {
    const struct CPU_State initial_cpu = {.pc=0xe3ff, .a=0xe0, .x=0xf7, .y=0xf7, .sp=0x80, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xe3ff, .value=0x90}, {.addr=0xe400, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0xe409, .a=0xe0, .x=0xf7, .y=0xf7, .sp=0x80, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xe3ff, .value=0x90}, {.addr=0xe400, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0xe3ff, .value=0x90, .type=IO_READ},
        {.addr=0xe400, .value=0x08, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03A3) {
    const struct CPU_State initial_cpu = {.pc=0xfe16, .a=0xef, .x=0xd0, .y=0x75, .sp=0x5a, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xfe16, .value=0x90}, {.addr=0xfe17, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0xfe18, .a=0xef, .x=0xd0, .y=0x75, .sp=0x5a, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xfe16, .value=0x90}, {.addr=0xfe17, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0xfe16, .value=0x90, .type=IO_READ},
        {.addr=0xfe17, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03A4) {
    const struct CPU_State initial_cpu = {.pc=0x2dbf, .a=0xe5, .x=0xe1, .y=0x6b, .sp=0x58, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x2dbf, .value=0x90}, {.addr=0x2dc0, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x2dc1, .a=0xe5, .x=0xe1, .y=0x6b, .sp=0x58, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x2dbf, .value=0x90}, {.addr=0x2dc0, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x2dbf, .value=0x90, .type=IO_READ},
        {.addr=0x2dc0, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03A5) {
    const struct CPU_State initial_cpu = {.pc=0xee34, .a=0x43, .x=0x14, .y=0xe4, .sp=0x6f, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xee34, .value=0x90}, {.addr=0xee35, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0xee36, .a=0x43, .x=0x14, .y=0xe4, .sp=0x6f, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0xee34, .value=0x90}, {.addr=0xee35, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0xee34, .value=0x90, .type=IO_READ},
        {.addr=0xee35, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x7903, .a=0x26, .x=0x0f, .y=0xf6, .sp=0x1a, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x7903, .value=0x90}, {.addr=0x7904, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0x789e, .a=0x26, .x=0x0f, .y=0xf6, .sp=0x1a, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x7903, .value=0x90}, {.addr=0x7904, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0x7903, .value=0x90, .type=IO_READ},
        {.addr=0x7904, .value=0x99, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03A7) {
    const struct CPU_State initial_cpu = {.pc=0xa0d7, .a=0x02, .x=0x37, .y=0x3f, .sp=0x9d, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xa0d7, .value=0x90}, {.addr=0xa0d8, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0xa0d9, .a=0x02, .x=0x37, .y=0x3f, .sp=0x9d, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xa0d7, .value=0x90}, {.addr=0xa0d8, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0xa0d7, .value=0x90, .type=IO_READ},
        {.addr=0xa0d8, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03A8) {
    const struct CPU_State initial_cpu = {.pc=0xd2a2, .a=0x10, .x=0x05, .y=0x33, .sp=0xa3, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xd2a2, .value=0x90}, {.addr=0xd2a3, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0xd2a4, .a=0x10, .x=0x05, .y=0x33, .sp=0xa3, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xd2a2, .value=0x90}, {.addr=0xd2a3, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0xd2a2, .value=0x90, .type=IO_READ},
        {.addr=0xd2a3, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03A9) {
    const struct CPU_State initial_cpu = {.pc=0xc321, .a=0xf9, .x=0x47, .y=0x4a, .sp=0xde, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xc321, .value=0x90}, {.addr=0xc322, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0xc323, .a=0xf9, .x=0x47, .y=0x4a, .sp=0xde, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xc321, .value=0x90}, {.addr=0xc322, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0xc321, .value=0x90, .type=IO_READ},
        {.addr=0xc322, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03AA) {
    const struct CPU_State initial_cpu = {.pc=0x6dcb, .a=0xf0, .x=0x14, .y=0x5c, .sp=0x5c, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x6dcb, .value=0x90}, {.addr=0x6dcc, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0x6dcd, .a=0xf0, .x=0x14, .y=0x5c, .sp=0x5c, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x6dcb, .value=0x90}, {.addr=0x6dcc, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0x6dcb, .value=0x90, .type=IO_READ},
        {.addr=0x6dcc, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03AB) {
    const struct CPU_State initial_cpu = {.pc=0xd714, .a=0xa7, .x=0xfa, .y=0x6d, .sp=0x27, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xd714, .value=0x90}, {.addr=0xd715, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xd716, .a=0xa7, .x=0xfa, .y=0x6d, .sp=0x27, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0xd714, .value=0x90}, {.addr=0xd715, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xd714, .value=0x90, .type=IO_READ},
        {.addr=0xd715, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03AC) {
    const struct CPU_State initial_cpu = {.pc=0x7b21, .a=0x50, .x=0x20, .y=0x39, .sp=0x02, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x7b21, .value=0x90}, {.addr=0x7b22, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x7aa9, .a=0x50, .x=0x20, .y=0x39, .sp=0x02, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x7b21, .value=0x90}, {.addr=0x7b22, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x7b21, .value=0x90, .type=IO_READ},
        {.addr=0x7b22, .value=0x86, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03AD) {
    const struct CPU_State initial_cpu = {.pc=0x05d6, .a=0x64, .x=0x00, .y=0x98, .sp=0x5f, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x05d6, .value=0x90}, {.addr=0x05d7, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0x05d8, .a=0x64, .x=0x00, .y=0x98, .sp=0x5f, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x05d6, .value=0x90}, {.addr=0x05d7, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0x05d6, .value=0x90, .type=IO_READ},
        {.addr=0x05d7, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03AE) {
    const struct CPU_State initial_cpu = {.pc=0x46d2, .a=0x15, .x=0xfd, .y=0x8f, .sp=0xd9, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x46d2, .value=0x90}, {.addr=0x46d3, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0x4743, .a=0x15, .x=0xfd, .y=0x8f, .sp=0xd9, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x46d2, .value=0x90}, {.addr=0x46d3, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0x46d2, .value=0x90, .type=IO_READ},
        {.addr=0x46d3, .value=0x6f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03AF) {
    const struct CPU_State initial_cpu = {.pc=0xd4c2, .a=0xb7, .x=0xb5, .y=0x43, .sp=0xf8, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xd4c2, .value=0x90}, {.addr=0xd4c3, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xd44a, .a=0xb7, .x=0xb5, .y=0x43, .sp=0xf8, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xd4c2, .value=0x90}, {.addr=0xd4c3, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xd4c2, .value=0x90, .type=IO_READ},
        {.addr=0xd4c3, .value=0x86, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03B0) {
    const struct CPU_State initial_cpu = {.pc=0x60c8, .a=0x7b, .x=0x75, .y=0xcd, .sp=0x2b, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x60c8, .value=0x90}, {.addr=0x60c9, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0x60ca, .a=0x7b, .x=0x75, .y=0xcd, .sp=0x2b, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x60c8, .value=0x90}, {.addr=0x60c9, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0x60c8, .value=0x90, .type=IO_READ},
        {.addr=0x60c9, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03B1) {
    const struct CPU_State initial_cpu = {.pc=0x87ad, .a=0x77, .x=0x1f, .y=0x36, .sp=0x63, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x87ad, .value=0x90}, {.addr=0x87ae, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0x8828, .a=0x77, .x=0x1f, .y=0x36, .sp=0x63, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x87ad, .value=0x90}, {.addr=0x87ae, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0x87ad, .value=0x90, .type=IO_READ},
        {.addr=0x87ae, .value=0x79, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03B2) {
    const struct CPU_State initial_cpu = {.pc=0xf301, .a=0x20, .x=0xe4, .y=0x6a, .sp=0xb9, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0xf301, .value=0x90}, {.addr=0xf302, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0xf303, .a=0x20, .x=0xe4, .y=0x6a, .sp=0xb9, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xf301, .value=0x90}, {.addr=0xf302, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0xf301, .value=0x90, .type=IO_READ},
        {.addr=0xf302, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03B3) {
    const struct CPU_State initial_cpu = {.pc=0xd990, .a=0xb6, .x=0x5f, .y=0x3b, .sp=0xf8, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xd990, .value=0x90}, {.addr=0xd991, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0xd9b7, .a=0xb6, .x=0x5f, .y=0x3b, .sp=0xf8, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0xd990, .value=0x90}, {.addr=0xd991, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0xd990, .value=0x90, .type=IO_READ},
        {.addr=0xd991, .value=0x25, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03B4) {
    const struct CPU_State initial_cpu = {.pc=0x6d86, .a=0x58, .x=0x63, .y=0xd6, .sp=0x1e, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x6d86, .value=0x90}, {.addr=0x6d87, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x6d2e, .a=0x58, .x=0x63, .y=0xd6, .sp=0x1e, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x6d86, .value=0x90}, {.addr=0x6d87, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x6d86, .value=0x90, .type=IO_READ},
        {.addr=0x6d87, .value=0xa6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03B5) {
    const struct CPU_State initial_cpu = {.pc=0x2a6a, .a=0x07, .x=0x62, .y=0x35, .sp=0x75, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x2a6a, .value=0x90}, {.addr=0x2a6b, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0x2a6c, .a=0x07, .x=0x62, .y=0x35, .sp=0x75, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x2a6a, .value=0x90}, {.addr=0x2a6b, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0x2a6a, .value=0x90, .type=IO_READ},
        {.addr=0x2a6b, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03B6) {
    const struct CPU_State initial_cpu = {.pc=0xd26f, .a=0xa9, .x=0xae, .y=0xa4, .sp=0x64, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xd26f, .value=0x90}, {.addr=0xd270, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0xd271, .a=0xa9, .x=0xae, .y=0xa4, .sp=0x64, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0xd26f, .value=0x90}, {.addr=0xd270, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0xd26f, .value=0x90, .type=IO_READ},
        {.addr=0xd270, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03B7) {
    const struct CPU_State initial_cpu = {.pc=0xb523, .a=0x3f, .x=0xe7, .y=0x77, .sp=0xd3, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xb523, .value=0x90}, {.addr=0xb524, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0xb525, .a=0x3f, .x=0xe7, .y=0x77, .sp=0xd3, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0xb523, .value=0x90}, {.addr=0xb524, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0xb523, .value=0x90, .type=IO_READ},
        {.addr=0xb524, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03B8) {
    const struct CPU_State initial_cpu = {.pc=0x9956, .a=0x95, .x=0xb0, .y=0x25, .sp=0x1a, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x9956, .value=0x90}, {.addr=0x9957, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0x99bd, .a=0x95, .x=0xb0, .y=0x25, .sp=0x1a, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x9956, .value=0x90}, {.addr=0x9957, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0x9956, .value=0x90, .type=IO_READ},
        {.addr=0x9957, .value=0x65, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03B9) {
    const struct CPU_State initial_cpu = {.pc=0xdc45, .a=0x16, .x=0x5b, .y=0x52, .sp=0xaf, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xdc45, .value=0x90}, {.addr=0xdc46, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0xdc47, .a=0x16, .x=0x5b, .y=0x52, .sp=0xaf, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0xdc45, .value=0x90}, {.addr=0xdc46, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0xdc45, .value=0x90, .type=IO_READ},
        {.addr=0xdc46, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03BA) {
    const struct CPU_State initial_cpu = {.pc=0x23b4, .a=0x7c, .x=0x8d, .y=0xb2, .sp=0xc0, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x23b4, .value=0x90}, {.addr=0x23b5, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0x23b6, .a=0x7c, .x=0x8d, .y=0xb2, .sp=0xc0, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x23b4, .value=0x90}, {.addr=0x23b5, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0x23b4, .value=0x90, .type=IO_READ},
        {.addr=0x23b5, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03BB) {
    const struct CPU_State initial_cpu = {.pc=0xacf8, .a=0x4e, .x=0xff, .y=0x08, .sp=0xc9, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xacf8, .value=0x90}, {.addr=0xacf9, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0xacd1, .a=0x4e, .x=0xff, .y=0x08, .sp=0xc9, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0xacf8, .value=0x90}, {.addr=0xacf9, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0xacf8, .value=0x90, .type=IO_READ},
        {.addr=0xacf9, .value=0xd7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03BC) {
    const struct CPU_State initial_cpu = {.pc=0xaee6, .a=0xe4, .x=0x7f, .y=0x4b, .sp=0x84, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xaee6, .value=0x90}, {.addr=0xaee7, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0xaee8, .a=0xe4, .x=0x7f, .y=0x4b, .sp=0x84, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xaee6, .value=0x90}, {.addr=0xaee7, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0xaee6, .value=0x90, .type=IO_READ},
        {.addr=0xaee7, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03BD) {
    const struct CPU_State initial_cpu = {.pc=0x9645, .a=0x6f, .x=0x1b, .y=0x18, .sp=0xe9, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x9645, .value=0x90}, {.addr=0x9646, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0x9647, .a=0x6f, .x=0x1b, .y=0x18, .sp=0xe9, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x9645, .value=0x90}, {.addr=0x9646, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0x9645, .value=0x90, .type=IO_READ},
        {.addr=0x9646, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03BE) {
    const struct CPU_State initial_cpu = {.pc=0xfb36, .a=0x41, .x=0xb0, .y=0xb6, .sp=0x13, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xfb36, .value=0x90}, {.addr=0xfb37, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0xfb38, .a=0x41, .x=0xb0, .y=0xb6, .sp=0x13, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0xfb36, .value=0x90}, {.addr=0xfb37, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0xfb36, .value=0x90, .type=IO_READ},
        {.addr=0xfb37, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03BF) {
    const struct CPU_State initial_cpu = {.pc=0xe979, .a=0xae, .x=0xd5, .y=0x0a, .sp=0x34, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xe979, .value=0x90}, {.addr=0xe97a, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0xe97b, .a=0xae, .x=0xd5, .y=0x0a, .sp=0x34, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xe979, .value=0x90}, {.addr=0xe97a, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0xe979, .value=0x90, .type=IO_READ},
        {.addr=0xe97a, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03C0) {
    const struct CPU_State initial_cpu = {.pc=0xad0a, .a=0xf6, .x=0x53, .y=0x91, .sp=0x90, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xad0a, .value=0x90}, {.addr=0xad0b, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0xac9f, .a=0xf6, .x=0x53, .y=0x91, .sp=0x90, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xad0a, .value=0x90}, {.addr=0xad0b, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0xad0a, .value=0x90, .type=IO_READ},
        {.addr=0xad0b, .value=0x93, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03C1) {
    const struct CPU_State initial_cpu = {.pc=0x717c, .a=0x01, .x=0x3c, .y=0x80, .sp=0x06, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x717c, .value=0x90}, {.addr=0x717d, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0x71fc, .a=0x01, .x=0x3c, .y=0x80, .sp=0x06, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x717c, .value=0x90}, {.addr=0x717d, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0x717c, .value=0x90, .type=IO_READ},
        {.addr=0x717d, .value=0x7e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03C2) {
    const struct CPU_State initial_cpu = {.pc=0xd0fb, .a=0xa1, .x=0x49, .y=0xf9, .sp=0xfd, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xd0fb, .value=0x90}, {.addr=0xd0fc, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0xd0fd, .a=0xa1, .x=0x49, .y=0xf9, .sp=0xfd, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0xd0fb, .value=0x90}, {.addr=0xd0fc, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0xd0fb, .value=0x90, .type=IO_READ},
        {.addr=0xd0fc, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03C3) {
    const struct CPU_State initial_cpu = {.pc=0x51de, .a=0x21, .x=0xde, .y=0x8b, .sp=0x39, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x51de, .value=0x90}, {.addr=0x51df, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0x51de, .a=0x21, .x=0xde, .y=0x8b, .sp=0x39, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x51de, .value=0x90}, {.addr=0x51df, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0x51de, .value=0x90, .type=IO_READ},
        {.addr=0x51df, .value=0xfe, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03C4) {
    const struct CPU_State initial_cpu = {.pc=0x7abf, .a=0x85, .x=0x02, .y=0xe3, .sp=0xc4, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x7abf, .value=0x90}, {.addr=0x7ac0, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x7ac1, .a=0x85, .x=0x02, .y=0xe3, .sp=0xc4, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x7abf, .value=0x90}, {.addr=0x7ac0, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x7abf, .value=0x90, .type=IO_READ},
        {.addr=0x7ac0, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03C5) {
    const struct CPU_State initial_cpu = {.pc=0xa7d5, .a=0x0e, .x=0xe9, .y=0x74, .sp=0x65, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xa7d5, .value=0x90}, {.addr=0xa7d6, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0xa7d7, .a=0x0e, .x=0xe9, .y=0x74, .sp=0x65, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xa7d5, .value=0x90}, {.addr=0xa7d6, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0xa7d5, .value=0x90, .type=IO_READ},
        {.addr=0xa7d6, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03C6) {
    const struct CPU_State initial_cpu = {.pc=0x6643, .a=0x67, .x=0xfe, .y=0xc7, .sp=0x9c, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x6643, .value=0x90}, {.addr=0x6644, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0x6645, .a=0x67, .x=0xfe, .y=0xc7, .sp=0x9c, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x6643, .value=0x90}, {.addr=0x6644, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0x6643, .value=0x90, .type=IO_READ},
        {.addr=0x6644, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03C7) {
    const struct CPU_State initial_cpu = {.pc=0x3035, .a=0x7a, .x=0x2a, .y=0x94, .sp=0x4a, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x3035, .value=0x90}, {.addr=0x3036, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x305d, .a=0x7a, .x=0x2a, .y=0x94, .sp=0x4a, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x3035, .value=0x90}, {.addr=0x3036, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x3035, .value=0x90, .type=IO_READ},
        {.addr=0x3036, .value=0x26, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03C8) {
    const struct CPU_State initial_cpu = {.pc=0xfa43, .a=0xc3, .x=0x68, .y=0xc9, .sp=0xf4, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xfa43, .value=0x90}, {.addr=0xfa44, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xfa02, .a=0xc3, .x=0x68, .y=0xc9, .sp=0xf4, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xfa43, .value=0x90}, {.addr=0xfa44, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xfa43, .value=0x90, .type=IO_READ},
        {.addr=0xfa44, .value=0xbd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03C9) {
    const struct CPU_State initial_cpu = {.pc=0xaa30, .a=0x0d, .x=0xf5, .y=0x43, .sp=0x28, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xaa30, .value=0x90}, {.addr=0xaa31, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0xaa32, .a=0x0d, .x=0xf5, .y=0x43, .sp=0x28, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0xaa30, .value=0x90}, {.addr=0xaa31, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0xaa30, .value=0x90, .type=IO_READ},
        {.addr=0xaa31, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03CA) {
    const struct CPU_State initial_cpu = {.pc=0x7d6c, .a=0x56, .x=0x5c, .y=0x06, .sp=0x1a, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x7d6c, .value=0x90}, {.addr=0x7d6d, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x7d8a, .a=0x56, .x=0x5c, .y=0x06, .sp=0x1a, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x7d6c, .value=0x90}, {.addr=0x7d6d, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x7d6c, .value=0x90, .type=IO_READ},
        {.addr=0x7d6d, .value=0x1c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03CB) {
    const struct CPU_State initial_cpu = {.pc=0x25a2, .a=0x88, .x=0xad, .y=0x84, .sp=0xe3, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x25a2, .value=0x90}, {.addr=0x25a3, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0x2533, .a=0x88, .x=0xad, .y=0x84, .sp=0xe3, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x25a2, .value=0x90}, {.addr=0x25a3, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0x25a2, .value=0x90, .type=IO_READ},
        {.addr=0x25a3, .value=0x8f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03CC) {
    const struct CPU_State initial_cpu = {.pc=0x75a6, .a=0x86, .x=0x10, .y=0xc4, .sp=0x78, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x75a6, .value=0x90}, {.addr=0x75a7, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x75e4, .a=0x86, .x=0x10, .y=0xc4, .sp=0x78, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x75a6, .value=0x90}, {.addr=0x75a7, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x75a6, .value=0x90, .type=IO_READ},
        {.addr=0x75a7, .value=0x3c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03CD) {
    const struct CPU_State initial_cpu = {.pc=0x429c, .a=0xfd, .x=0x1c, .y=0xc0, .sp=0xb6, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x429c, .value=0x90}, {.addr=0x429d, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0x429e, .a=0xfd, .x=0x1c, .y=0xc0, .sp=0xb6, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x429c, .value=0x90}, {.addr=0x429d, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0x429c, .value=0x90, .type=IO_READ},
        {.addr=0x429d, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03CE) {
    const struct CPU_State initial_cpu = {.pc=0x86e7, .a=0x5e, .x=0x63, .y=0x72, .sp=0x2c, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x86e7, .value=0x90}, {.addr=0x86e8, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0x86e9, .a=0x5e, .x=0x63, .y=0x72, .sp=0x2c, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x86e7, .value=0x90}, {.addr=0x86e8, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0x86e7, .value=0x90, .type=IO_READ},
        {.addr=0x86e8, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03CF) {
    const struct CPU_State initial_cpu = {.pc=0x43a6, .a=0x21, .x=0x11, .y=0x2b, .sp=0x0d, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x43a6, .value=0x90}, {.addr=0x43a7, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x439c, .a=0x21, .x=0x11, .y=0x2b, .sp=0x0d, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x43a6, .value=0x90}, {.addr=0x43a7, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x43a6, .value=0x90, .type=IO_READ},
        {.addr=0x43a7, .value=0xf4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03D0) {
    const struct CPU_State initial_cpu = {.pc=0x53ca, .a=0xb2, .x=0x4a, .y=0x53, .sp=0x1d, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x53ca, .value=0x90}, {.addr=0x53cb, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x53e1, .a=0xb2, .x=0x4a, .y=0x53, .sp=0x1d, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x53ca, .value=0x90}, {.addr=0x53cb, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x53ca, .value=0x90, .type=IO_READ},
        {.addr=0x53cb, .value=0x15, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03D1) {
    const struct CPU_State initial_cpu = {.pc=0xe3f0, .a=0x8f, .x=0x46, .y=0x3f, .sp=0x3f, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0xe3f0, .value=0x90}, {.addr=0xe3f1, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0xe3f2, .a=0x8f, .x=0x46, .y=0x3f, .sp=0x3f, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0xe3f0, .value=0x90}, {.addr=0xe3f1, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0xe3f0, .value=0x90, .type=IO_READ},
        {.addr=0xe3f1, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03D2) {
    const struct CPU_State initial_cpu = {.pc=0xb010, .a=0x2d, .x=0xb1, .y=0xc6, .sp=0x82, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xb010, .value=0x90}, {.addr=0xb011, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0xb012, .a=0x2d, .x=0xb1, .y=0xc6, .sp=0x82, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xb010, .value=0x90}, {.addr=0xb011, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0xb010, .value=0x90, .type=IO_READ},
        {.addr=0xb011, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03D3) {
    const struct CPU_State initial_cpu = {.pc=0x9995, .a=0x0c, .x=0x8f, .y=0x9f, .sp=0xf0, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x9995, .value=0x90}, {.addr=0x9996, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0x9997, .a=0x0c, .x=0x8f, .y=0x9f, .sp=0xf0, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x9995, .value=0x90}, {.addr=0x9996, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0x9995, .value=0x90, .type=IO_READ},
        {.addr=0x9996, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03D4) {
    const struct CPU_State initial_cpu = {.pc=0xd8db, .a=0x2a, .x=0x6d, .y=0xc4, .sp=0x66, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xd8db, .value=0x90}, {.addr=0xd8dc, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0xd8b2, .a=0x2a, .x=0x6d, .y=0xc4, .sp=0x66, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xd8db, .value=0x90}, {.addr=0xd8dc, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0xd8db, .value=0x90, .type=IO_READ},
        {.addr=0xd8dc, .value=0xd5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03D5) {
    const struct CPU_State initial_cpu = {.pc=0xb357, .a=0x7e, .x=0xc8, .y=0xfc, .sp=0x90, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xb357, .value=0x90}, {.addr=0xb358, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0xb359, .a=0x7e, .x=0xc8, .y=0xfc, .sp=0x90, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xb357, .value=0x90}, {.addr=0xb358, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0xb357, .value=0x90, .type=IO_READ},
        {.addr=0xb358, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03D6) {
    const struct CPU_State initial_cpu = {.pc=0xcc65, .a=0xe7, .x=0xe1, .y=0x45, .sp=0xdf, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xcc65, .value=0x90}, {.addr=0xcc66, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0xccb1, .a=0xe7, .x=0xe1, .y=0x45, .sp=0xdf, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0xcc65, .value=0x90}, {.addr=0xcc66, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0xcc65, .value=0x90, .type=IO_READ},
        {.addr=0xcc66, .value=0x4a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03D7) {
    const struct CPU_State initial_cpu = {.pc=0x2de4, .a=0xaa, .x=0x19, .y=0x32, .sp=0x8b, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x2de4, .value=0x90}, {.addr=0x2de5, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x2d82, .a=0xaa, .x=0x19, .y=0x32, .sp=0x8b, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x2de4, .value=0x90}, {.addr=0x2de5, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x2de4, .value=0x90, .type=IO_READ},
        {.addr=0x2de5, .value=0x9c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03D8) {
    const struct CPU_State initial_cpu = {.pc=0xefd1, .a=0x47, .x=0xa1, .y=0x95, .sp=0x64, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xefd1, .value=0x90}, {.addr=0xefd2, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xefd3, .a=0x47, .x=0xa1, .y=0x95, .sp=0x64, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0xefd1, .value=0x90}, {.addr=0xefd2, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xefd1, .value=0x90, .type=IO_READ},
        {.addr=0xefd2, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03D9) {
    const struct CPU_State initial_cpu = {.pc=0xbe69, .a=0xee, .x=0x38, .y=0x0b, .sp=0x07, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xbe69, .value=0x90}, {.addr=0xbe6a, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0xbe79, .a=0xee, .x=0x38, .y=0x0b, .sp=0x07, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0xbe69, .value=0x90}, {.addr=0xbe6a, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0xbe69, .value=0x90, .type=IO_READ},
        {.addr=0xbe6a, .value=0x0e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03DA) {
    const struct CPU_State initial_cpu = {.pc=0xcf63, .a=0xb2, .x=0x4e, .y=0x30, .sp=0xc3, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xcf63, .value=0x90}, {.addr=0xcf64, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xcf65, .a=0xb2, .x=0x4e, .y=0x30, .sp=0xc3, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0xcf63, .value=0x90}, {.addr=0xcf64, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xcf63, .value=0x90, .type=IO_READ},
        {.addr=0xcf64, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03DB) {
    const struct CPU_State initial_cpu = {.pc=0xdf48, .a=0x5e, .x=0x6d, .y=0x68, .sp=0x2c, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xdf48, .value=0x90}, {.addr=0xdf49, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0xdf4a, .a=0x5e, .x=0x6d, .y=0x68, .sp=0x2c, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0xdf48, .value=0x90}, {.addr=0xdf49, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0xdf48, .value=0x90, .type=IO_READ},
        {.addr=0xdf49, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03DC) {
    const struct CPU_State initial_cpu = {.pc=0xa2df, .a=0x05, .x=0x44, .y=0xe0, .sp=0x63, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xa2df, .value=0x90}, {.addr=0xa2e0, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0xa2e1, .a=0x05, .x=0x44, .y=0xe0, .sp=0x63, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xa2df, .value=0x90}, {.addr=0xa2e0, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0xa2df, .value=0x90, .type=IO_READ},
        {.addr=0xa2e0, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03DD) {
    const struct CPU_State initial_cpu = {.pc=0x7056, .a=0xdc, .x=0x30, .y=0x20, .sp=0xed, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x7056, .value=0x90}, {.addr=0x7057, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0x7058, .a=0xdc, .x=0x30, .y=0x20, .sp=0xed, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x7056, .value=0x90}, {.addr=0x7057, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0x7056, .value=0x90, .type=IO_READ},
        {.addr=0x7057, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03DE) {
    const struct CPU_State initial_cpu = {.pc=0x1586, .a=0x72, .x=0x91, .y=0xa4, .sp=0x5a, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x1586, .value=0x90}, {.addr=0x1587, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0x1588, .a=0x72, .x=0x91, .y=0xa4, .sp=0x5a, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x1586, .value=0x90}, {.addr=0x1587, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0x1586, .value=0x90, .type=IO_READ},
        {.addr=0x1587, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03DF) {
    const struct CPU_State initial_cpu = {.pc=0x2e79, .a=0x16, .x=0x7f, .y=0xbf, .sp=0x16, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x2e79, .value=0x90}, {.addr=0x2e7a, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x2e7b, .a=0x16, .x=0x7f, .y=0xbf, .sp=0x16, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x2e79, .value=0x90}, {.addr=0x2e7a, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x2e79, .value=0x90, .type=IO_READ},
        {.addr=0x2e7a, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03E0) {
    const struct CPU_State initial_cpu = {.pc=0xc2e0, .a=0x36, .x=0xb6, .y=0x21, .sp=0xda, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xc2e0, .value=0x90}, {.addr=0xc2e1, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0xc330, .a=0x36, .x=0xb6, .y=0x21, .sp=0xda, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0xc2e0, .value=0x90}, {.addr=0xc2e1, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0xc2e0, .value=0x90, .type=IO_READ},
        {.addr=0xc2e1, .value=0x4e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03E1) {
    const struct CPU_State initial_cpu = {.pc=0x096d, .a=0x95, .x=0x5a, .y=0x97, .sp=0x04, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x096d, .value=0x90}, {.addr=0x096e, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x095c, .a=0x95, .x=0x5a, .y=0x97, .sp=0x04, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x096d, .value=0x90}, {.addr=0x096e, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x096d, .value=0x90, .type=IO_READ},
        {.addr=0x096e, .value=0xed, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03E2) {
    const struct CPU_State initial_cpu = {.pc=0x9876, .a=0xf6, .x=0xa5, .y=0x1d, .sp=0x4e, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x9876, .value=0x90}, {.addr=0x9877, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x9878, .a=0xf6, .x=0xa5, .y=0x1d, .sp=0x4e, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x9876, .value=0x90}, {.addr=0x9877, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x9876, .value=0x90, .type=IO_READ},
        {.addr=0x9877, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03E3) {
    const struct CPU_State initial_cpu = {.pc=0xa2fc, .a=0x9d, .x=0x66, .y=0x6a, .sp=0x51, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xa2fc, .value=0x90}, {.addr=0xa2fd, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0xa2fe, .a=0x9d, .x=0x66, .y=0x6a, .sp=0x51, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0xa2fc, .value=0x90}, {.addr=0xa2fd, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0xa2fc, .value=0x90, .type=IO_READ},
        {.addr=0xa2fd, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03E4) {
    const struct CPU_State initial_cpu = {.pc=0x2536, .a=0xf1, .x=0x63, .y=0xad, .sp=0xff, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x2536, .value=0x90}, {.addr=0x2537, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0x2538, .a=0xf1, .x=0x63, .y=0xad, .sp=0xff, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x2536, .value=0x90}, {.addr=0x2537, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0x2536, .value=0x90, .type=IO_READ},
        {.addr=0x2537, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03E5) {
    const struct CPU_State initial_cpu = {.pc=0x1400, .a=0x0c, .x=0xaa, .y=0x60, .sp=0x1a, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x1400, .value=0x90}, {.addr=0x1401, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0x1402, .a=0x0c, .x=0xaa, .y=0x60, .sp=0x1a, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x1400, .value=0x90}, {.addr=0x1401, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0x1400, .value=0x90, .type=IO_READ},
        {.addr=0x1401, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03E6) {
    const struct CPU_State initial_cpu = {.pc=0xbb0a, .a=0x90, .x=0x4f, .y=0xdc, .sp=0x91, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xbb0a, .value=0x90}, {.addr=0xbb0b, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0xbb0c, .a=0x90, .x=0x4f, .y=0xdc, .sp=0x91, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xbb0a, .value=0x90}, {.addr=0xbb0b, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0xbb0a, .value=0x90, .type=IO_READ},
        {.addr=0xbb0b, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_90, _90_03E7) {
    const struct CPU_State initial_cpu = {.pc=0x1403, .a=0xb0, .x=0x69, .y=0x9f, .sp=0x5e, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x1403, .value=0x90}, {.addr=0x1404, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0x1478, .a=0xb0, .x=0x69, .y=0x9f, .sp=0x5e, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x1403, .value=0x90}, {.addr=0x1404, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0x1403, .value=0x90, .type=IO_READ},
        {.addr=0x1404, .value=0x73, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("90 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
