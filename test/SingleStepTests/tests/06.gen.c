#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_06, _06_0000) {
    const struct CPU_State initial_cpu = {.pc=0x323c, .a=0xc3, .x=0x28, .y=0x32, .sp=0x05, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x0028, .value=0xd9}, {.addr=0x323c, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x323d, .a=0xdb, .x=0x28, .y=0x32, .sp=0x05, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0028, .value=0xd9}, {.addr=0x323c, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x323c, .value=0x06, .type=IO_READ},
        {.addr=0x323d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0028, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0001) {
    const struct CPU_State initial_cpu = {.pc=0x609a, .a=0x5a, .x=0xe0, .y=0x9c, .sp=0xd8, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x00e0, .value=0x22}, {.addr=0x609a, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x609b, .a=0x7a, .x=0xe0, .y=0x9c, .sp=0xd8, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x00e0, .value=0x22}, {.addr=0x609a, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x609a, .value=0x06, .type=IO_READ},
        {.addr=0x609b, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e0, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0002) {
    const struct CPU_State initial_cpu = {.pc=0x3877, .a=0xc3, .x=0xe1, .y=0xd6, .sp=0x93, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x00e1, .value=0x3a}, {.addr=0x3877, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x3878, .a=0xfb, .x=0xe1, .y=0xd6, .sp=0x93, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x00e1, .value=0x3a}, {.addr=0x3877, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x3877, .value=0x06, .type=IO_READ},
        {.addr=0x3878, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e1, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0003) {
    const struct CPU_State initial_cpu = {.pc=0xc044, .a=0xfa, .x=0x2a, .y=0x11, .sp=0x69, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x002a, .value=0xc4}, {.addr=0xc044, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xc045, .a=0xfe, .x=0x2a, .y=0x11, .sp=0x69, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x002a, .value=0xc4}, {.addr=0xc044, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xc044, .value=0x06, .type=IO_READ},
        {.addr=0xc045, .value=DUMMY, .type=IO_READ},
        {.addr=0x002a, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0004) {
    const struct CPU_State initial_cpu = {.pc=0x47d1, .a=0xf0, .x=0xce, .y=0x48, .sp=0x77, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x00ce, .value=0xe3}, {.addr=0x47d1, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x47d2, .a=0xf3, .x=0xce, .y=0x48, .sp=0x77, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x00ce, .value=0xe3}, {.addr=0x47d1, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x47d1, .value=0x06, .type=IO_READ},
        {.addr=0x47d2, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ce, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0005) {
    const struct CPU_State initial_cpu = {.pc=0xa223, .a=0x94, .x=0x7d, .y=0x34, .sp=0xee, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0xa8}, {.addr=0xa223, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xa224, .a=0xbc, .x=0x7d, .y=0x34, .sp=0xee, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0xa8}, {.addr=0xa223, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xa223, .value=0x06, .type=IO_READ},
        {.addr=0xa224, .value=DUMMY, .type=IO_READ},
        {.addr=0x017d, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0006) {
    const struct CPU_State initial_cpu = {.pc=0xb621, .a=0x9e, .x=0x72, .y=0x85, .sp=0x84, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0x82}, {.addr=0xb621, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xb622, .a=0x9e, .x=0x72, .y=0x85, .sp=0x84, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0x82}, {.addr=0xb621, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xb621, .value=0x06, .type=IO_READ},
        {.addr=0xb622, .value=DUMMY, .type=IO_READ},
        {.addr=0x0172, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0007) {
    const struct CPU_State initial_cpu = {.pc=0x6500, .a=0xe6, .x=0x1f, .y=0x15, .sp=0x25, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0xa8}, {.addr=0x6500, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x6501, .a=0xee, .x=0x1f, .y=0x15, .sp=0x25, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0xa8}, {.addr=0x6500, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x6500, .value=0x06, .type=IO_READ},
        {.addr=0x6501, .value=DUMMY, .type=IO_READ},
        {.addr=0x011f, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0008) {
    const struct CPU_State initial_cpu = {.pc=0x4983, .a=0x97, .x=0x18, .y=0xe5, .sp=0xe0, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x0118, .value=0x14}, {.addr=0x4983, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x4984, .a=0x97, .x=0x18, .y=0xe5, .sp=0xe0, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0118, .value=0x14}, {.addr=0x4983, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x4983, .value=0x06, .type=IO_READ},
        {.addr=0x4984, .value=DUMMY, .type=IO_READ},
        {.addr=0x0118, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0009) {
    const struct CPU_State initial_cpu = {.pc=0x9fc2, .a=0xdb, .x=0x66, .y=0x73, .sp=0x5f, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0x52}, {.addr=0x9fc2, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x9fc3, .a=0xdb, .x=0x66, .y=0x73, .sp=0x5f, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0x52}, {.addr=0x9fc2, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x9fc2, .value=0x06, .type=IO_READ},
        {.addr=0x9fc3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0166, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_000A) {
    const struct CPU_State initial_cpu = {.pc=0x6ff7, .a=0x65, .x=0x1e, .y=0xab, .sp=0x5d, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x001e, .value=0x71}, {.addr=0x6ff7, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x6ff8, .a=0x75, .x=0x1e, .y=0xab, .sp=0x5d, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x001e, .value=0x71}, {.addr=0x6ff7, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x6ff7, .value=0x06, .type=IO_READ},
        {.addr=0x6ff8, .value=DUMMY, .type=IO_READ},
        {.addr=0x001e, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_000B) {
    const struct CPU_State initial_cpu = {.pc=0x3990, .a=0xec, .x=0x78, .y=0xcd, .sp=0x86, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x0178, .value=0xc9}, {.addr=0x3990, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x3991, .a=0xed, .x=0x78, .y=0xcd, .sp=0x86, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x0178, .value=0xc9}, {.addr=0x3990, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x3990, .value=0x06, .type=IO_READ},
        {.addr=0x3991, .value=DUMMY, .type=IO_READ},
        {.addr=0x0178, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_000C) {
    const struct CPU_State initial_cpu = {.pc=0x80d1, .a=0x84, .x=0xae, .y=0xc0, .sp=0x12, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x00ae, .value=0xb4}, {.addr=0x80d1, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x80d2, .a=0xb4, .x=0xae, .y=0xc0, .sp=0x12, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x00ae, .value=0xb4}, {.addr=0x80d1, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x80d1, .value=0x06, .type=IO_READ},
        {.addr=0x80d2, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ae, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_000D) {
    const struct CPU_State initial_cpu = {.pc=0xaed2, .a=0xee, .x=0x37, .y=0xc6, .sp=0xa0, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x0137, .value=0x11}, {.addr=0xaed2, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xaed3, .a=0xff, .x=0x37, .y=0xc6, .sp=0xa0, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x0137, .value=0x11}, {.addr=0xaed2, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xaed2, .value=0x06, .type=IO_READ},
        {.addr=0xaed3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0137, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_000E) {
    const struct CPU_State initial_cpu = {.pc=0xa6a8, .a=0xfc, .x=0x17, .y=0xf3, .sp=0xb1, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x0117, .value=0xc8}, {.addr=0xa6a8, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xa6a9, .a=0xfc, .x=0x17, .y=0xf3, .sp=0xb1, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x0117, .value=0xc8}, {.addr=0xa6a8, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xa6a8, .value=0x06, .type=IO_READ},
        {.addr=0xa6a9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0117, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_000F) {
    const struct CPU_State initial_cpu = {.pc=0xee03, .a=0x3e, .x=0x77, .y=0x6d, .sp=0x07, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x0077, .value=0x10}, {.addr=0xee03, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xee04, .a=0x3e, .x=0x77, .y=0x6d, .sp=0x07, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x0077, .value=0x10}, {.addr=0xee03, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xee03, .value=0x06, .type=IO_READ},
        {.addr=0xee04, .value=DUMMY, .type=IO_READ},
        {.addr=0x0077, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0010) {
    const struct CPU_State initial_cpu = {.pc=0xffad, .a=0x38, .x=0x48, .y=0xa3, .sp=0x63, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x0048, .value=0xc6}, {.addr=0xffad, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xffae, .a=0xfe, .x=0x48, .y=0xa3, .sp=0x63, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x0048, .value=0xc6}, {.addr=0xffad, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xffad, .value=0x06, .type=IO_READ},
        {.addr=0xffae, .value=DUMMY, .type=IO_READ},
        {.addr=0x0048, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0011) {
    const struct CPU_State initial_cpu = {.pc=0xdc55, .a=0x2d, .x=0x06, .y=0xc1, .sp=0xc0, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0x33}, {.addr=0xdc55, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xdc56, .a=0x3f, .x=0x06, .y=0xc1, .sp=0xc0, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0x33}, {.addr=0xdc55, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xdc55, .value=0x06, .type=IO_READ},
        {.addr=0xdc56, .value=DUMMY, .type=IO_READ},
        {.addr=0x0106, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0012) {
    const struct CPU_State initial_cpu = {.pc=0x0b83, .a=0x90, .x=0xb5, .y=0x65, .sp=0x7e, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x01b5, .value=0x03}, {.addr=0x0b83, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x0b84, .a=0x93, .x=0xb5, .y=0x65, .sp=0x7e, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x01b5, .value=0x03}, {.addr=0x0b83, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x0b83, .value=0x06, .type=IO_READ},
        {.addr=0x0b84, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b5, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0013) {
    const struct CPU_State initial_cpu = {.pc=0x944e, .a=0xb6, .x=0xb0, .y=0xb6, .sp=0xf3, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0x83}, {.addr=0x944e, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x944f, .a=0xb7, .x=0xb0, .y=0xb6, .sp=0xf3, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0x83}, {.addr=0x944e, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x944e, .value=0x06, .type=IO_READ},
        {.addr=0x944f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b0, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0014) {
    const struct CPU_State initial_cpu = {.pc=0x907d, .a=0xa9, .x=0xa3, .y=0x25, .sp=0x7c, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x00a3, .value=0x52}, {.addr=0x907d, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x907e, .a=0xfb, .x=0xa3, .y=0x25, .sp=0x7c, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x00a3, .value=0x52}, {.addr=0x907d, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x907d, .value=0x06, .type=IO_READ},
        {.addr=0x907e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a3, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0015) {
    const struct CPU_State initial_cpu = {.pc=0x4c89, .a=0x8f, .x=0x4b, .y=0x9f, .sp=0x9e, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x004b, .value=0x7c}, {.addr=0x4c89, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x4c8a, .a=0xff, .x=0x4b, .y=0x9f, .sp=0x9e, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x004b, .value=0x7c}, {.addr=0x4c89, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x4c89, .value=0x06, .type=IO_READ},
        {.addr=0x4c8a, .value=DUMMY, .type=IO_READ},
        {.addr=0x004b, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0016) {
    const struct CPU_State initial_cpu = {.pc=0x9ca5, .a=0x68, .x=0xe7, .y=0x66, .sp=0x95, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x01e7, .value=0xe6}, {.addr=0x9ca5, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x9ca6, .a=0xee, .x=0xe7, .y=0x66, .sp=0x95, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x01e7, .value=0xe6}, {.addr=0x9ca5, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x9ca5, .value=0x06, .type=IO_READ},
        {.addr=0x9ca6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e7, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0017) {
    const struct CPU_State initial_cpu = {.pc=0xd112, .a=0x74, .x=0xad, .y=0xf0, .sp=0x17, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x01ad, .value=0x53}, {.addr=0xd112, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xd113, .a=0x77, .x=0xad, .y=0xf0, .sp=0x17, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x01ad, .value=0x53}, {.addr=0xd112, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xd112, .value=0x06, .type=IO_READ},
        {.addr=0xd113, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ad, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0018) {
    const struct CPU_State initial_cpu = {.pc=0x5dd4, .a=0x9d, .x=0x83, .y=0xd0, .sp=0xcb, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x0083, .value=0x53}, {.addr=0x5dd4, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x5dd5, .a=0xdf, .x=0x83, .y=0xd0, .sp=0xcb, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0083, .value=0x53}, {.addr=0x5dd4, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x5dd4, .value=0x06, .type=IO_READ},
        {.addr=0x5dd5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0083, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0019) {
    const struct CPU_State initial_cpu = {.pc=0xdb78, .a=0x22, .x=0x52, .y=0x7b, .sp=0x93, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x0152, .value=0x9e}, {.addr=0xdb78, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xdb79, .a=0xbe, .x=0x52, .y=0x7b, .sp=0x93, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x0152, .value=0x9e}, {.addr=0xdb78, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xdb78, .value=0x06, .type=IO_READ},
        {.addr=0xdb79, .value=DUMMY, .type=IO_READ},
        {.addr=0x0152, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_001A) {
    const struct CPU_State initial_cpu = {.pc=0x14d2, .a=0x91, .x=0xe4, .y=0x43, .sp=0x5d, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x01e4, .value=0xa2}, {.addr=0x14d2, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x14d3, .a=0xb3, .x=0xe4, .y=0x43, .sp=0x5d, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x01e4, .value=0xa2}, {.addr=0x14d2, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x14d2, .value=0x06, .type=IO_READ},
        {.addr=0x14d3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e4, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_001B) {
    const struct CPU_State initial_cpu = {.pc=0xfd68, .a=0x06, .x=0x6c, .y=0x59, .sp=0xcb, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x016c, .value=0x9c}, {.addr=0xfd68, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xfd69, .a=0x9e, .x=0x6c, .y=0x59, .sp=0xcb, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x016c, .value=0x9c}, {.addr=0xfd68, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xfd68, .value=0x06, .type=IO_READ},
        {.addr=0xfd69, .value=DUMMY, .type=IO_READ},
        {.addr=0x016c, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_001C) {
    const struct CPU_State initial_cpu = {.pc=0x086c, .a=0x4e, .x=0x8a, .y=0x77, .sp=0x0c, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x008a, .value=0xd4}, {.addr=0x086c, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x086d, .a=0xde, .x=0x8a, .y=0x77, .sp=0x0c, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x008a, .value=0xd4}, {.addr=0x086c, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x086c, .value=0x06, .type=IO_READ},
        {.addr=0x086d, .value=DUMMY, .type=IO_READ},
        {.addr=0x008a, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_001D) {
    const struct CPU_State initial_cpu = {.pc=0x6c74, .a=0xa9, .x=0xcc, .y=0x2e, .sp=0x2a, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x01cc, .value=0x7f}, {.addr=0x6c74, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x6c75, .a=0xff, .x=0xcc, .y=0x2e, .sp=0x2a, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x01cc, .value=0x7f}, {.addr=0x6c74, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x6c74, .value=0x06, .type=IO_READ},
        {.addr=0x6c75, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cc, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_001E) {
    const struct CPU_State initial_cpu = {.pc=0xb765, .a=0xb5, .x=0x2d, .y=0x11, .sp=0xb9, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x012d, .value=0xe3}, {.addr=0xb765, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xb766, .a=0xf7, .x=0x2d, .y=0x11, .sp=0xb9, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x012d, .value=0xe3}, {.addr=0xb765, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xb765, .value=0x06, .type=IO_READ},
        {.addr=0xb766, .value=DUMMY, .type=IO_READ},
        {.addr=0x012d, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_001F) {
    const struct CPU_State initial_cpu = {.pc=0xab63, .a=0x5c, .x=0x98, .y=0x7f, .sp=0xfa, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x0198, .value=0x89}, {.addr=0xab63, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xab64, .a=0xdd, .x=0x98, .y=0x7f, .sp=0xfa, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x0198, .value=0x89}, {.addr=0xab63, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xab63, .value=0x06, .type=IO_READ},
        {.addr=0xab64, .value=DUMMY, .type=IO_READ},
        {.addr=0x0198, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0020) {
    const struct CPU_State initial_cpu = {.pc=0xf89f, .a=0x1e, .x=0x77, .y=0xdb, .sp=0xe9, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x0077, .value=0xf4}, {.addr=0xf89f, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xf8a0, .a=0xfe, .x=0x77, .y=0xdb, .sp=0xe9, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0077, .value=0xf4}, {.addr=0xf89f, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xf89f, .value=0x06, .type=IO_READ},
        {.addr=0xf8a0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0077, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0021) {
    const struct CPU_State initial_cpu = {.pc=0xf410, .a=0x19, .x=0xaf, .y=0x8b, .sp=0x47, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x01af, .value=0x6f}, {.addr=0xf410, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xf411, .a=0x7f, .x=0xaf, .y=0x8b, .sp=0x47, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x01af, .value=0x6f}, {.addr=0xf410, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xf410, .value=0x06, .type=IO_READ},
        {.addr=0xf411, .value=DUMMY, .type=IO_READ},
        {.addr=0x01af, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0022) {
    const struct CPU_State initial_cpu = {.pc=0x9df0, .a=0xe2, .x=0x6c, .y=0x7a, .sp=0x70, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x006c, .value=0xf8}, {.addr=0x9df0, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x9df1, .a=0xfa, .x=0x6c, .y=0x7a, .sp=0x70, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x006c, .value=0xf8}, {.addr=0x9df0, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x9df0, .value=0x06, .type=IO_READ},
        {.addr=0x9df1, .value=DUMMY, .type=IO_READ},
        {.addr=0x006c, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0023) {
    const struct CPU_State initial_cpu = {.pc=0x7386, .a=0xfc, .x=0xb5, .y=0x76, .sp=0xd2, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x00b5, .value=0x68}, {.addr=0x7386, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x7387, .a=0xfc, .x=0xb5, .y=0x76, .sp=0xd2, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x00b5, .value=0x68}, {.addr=0x7386, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x7386, .value=0x06, .type=IO_READ},
        {.addr=0x7387, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b5, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0024) {
    const struct CPU_State initial_cpu = {.pc=0x0d2a, .a=0x7d, .x=0x8f, .y=0xfa, .sp=0x0f, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x008f, .value=0xbf}, {.addr=0x0d2a, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x0d2b, .a=0xff, .x=0x8f, .y=0xfa, .sp=0x0f, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x008f, .value=0xbf}, {.addr=0x0d2a, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x0d2a, .value=0x06, .type=IO_READ},
        {.addr=0x0d2b, .value=DUMMY, .type=IO_READ},
        {.addr=0x008f, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0025) {
    const struct CPU_State initial_cpu = {.pc=0x7bcf, .a=0x1a, .x=0x7e, .y=0xe4, .sp=0xce, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x007e, .value=0x0b}, {.addr=0x7bcf, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x7bd0, .a=0x1b, .x=0x7e, .y=0xe4, .sp=0xce, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x007e, .value=0x0b}, {.addr=0x7bcf, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x7bcf, .value=0x06, .type=IO_READ},
        {.addr=0x7bd0, .value=DUMMY, .type=IO_READ},
        {.addr=0x007e, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0026) {
    const struct CPU_State initial_cpu = {.pc=0x5870, .a=0xad, .x=0x01, .y=0x8e, .sp=0xc2, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x0001, .value=0xa6}, {.addr=0x5870, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x5871, .a=0xaf, .x=0x01, .y=0x8e, .sp=0xc2, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x0001, .value=0xa6}, {.addr=0x5870, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x5870, .value=0x06, .type=IO_READ},
        {.addr=0x5871, .value=DUMMY, .type=IO_READ},
        {.addr=0x0001, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0027) {
    const struct CPU_State initial_cpu = {.pc=0x6ec8, .a=0xbd, .x=0xbe, .y=0xdc, .sp=0xcf, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x01be, .value=0x13}, {.addr=0x6ec8, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x6ec9, .a=0xbf, .x=0xbe, .y=0xdc, .sp=0xcf, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x01be, .value=0x13}, {.addr=0x6ec8, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x6ec8, .value=0x06, .type=IO_READ},
        {.addr=0x6ec9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01be, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0028) {
    const struct CPU_State initial_cpu = {.pc=0x625a, .a=0x7c, .x=0x8e, .y=0xd1, .sp=0x76, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0x41}, {.addr=0x625a, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x625b, .a=0x7d, .x=0x8e, .y=0xd1, .sp=0x76, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0x41}, {.addr=0x625a, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x625a, .value=0x06, .type=IO_READ},
        {.addr=0x625b, .value=DUMMY, .type=IO_READ},
        {.addr=0x018e, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0029) {
    const struct CPU_State initial_cpu = {.pc=0x937a, .a=0x3e, .x=0xba, .y=0xa4, .sp=0x4e, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x00ba, .value=0x05}, {.addr=0x937a, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x937b, .a=0x3f, .x=0xba, .y=0xa4, .sp=0x4e, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x00ba, .value=0x05}, {.addr=0x937a, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x937a, .value=0x06, .type=IO_READ},
        {.addr=0x937b, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ba, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_002A) {
    const struct CPU_State initial_cpu = {.pc=0x33c4, .a=0xdf, .x=0xbd, .y=0x12, .sp=0x98, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0xf4}, {.addr=0x33c4, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x33c5, .a=0xff, .x=0xbd, .y=0x12, .sp=0x98, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0xf4}, {.addr=0x33c4, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x33c4, .value=0x06, .type=IO_READ},
        {.addr=0x33c5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bd, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_002B) {
    const struct CPU_State initial_cpu = {.pc=0xc74c, .a=0x7e, .x=0xcf, .y=0x81, .sp=0xdd, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x00cf, .value=0xbf}, {.addr=0xc74c, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xc74d, .a=0xff, .x=0xcf, .y=0x81, .sp=0xdd, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x00cf, .value=0xbf}, {.addr=0xc74c, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xc74c, .value=0x06, .type=IO_READ},
        {.addr=0xc74d, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cf, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_002D) {
    const struct CPU_State initial_cpu = {.pc=0xc121, .a=0xe6, .x=0x82, .y=0x6d, .sp=0x06, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0x20}, {.addr=0xc121, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xc122, .a=0xe6, .x=0x82, .y=0x6d, .sp=0x06, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0x20}, {.addr=0xc121, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xc121, .value=0x06, .type=IO_READ},
        {.addr=0xc122, .value=DUMMY, .type=IO_READ},
        {.addr=0x0182, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_002E) {
    const struct CPU_State initial_cpu = {.pc=0x44bb, .a=0xec, .x=0xeb, .y=0x05, .sp=0x1e, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x00eb, .value=0x63}, {.addr=0x44bb, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x44bc, .a=0xef, .x=0xeb, .y=0x05, .sp=0x1e, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x00eb, .value=0x63}, {.addr=0x44bb, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x44bb, .value=0x06, .type=IO_READ},
        {.addr=0x44bc, .value=DUMMY, .type=IO_READ},
        {.addr=0x00eb, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_002F) {
    const struct CPU_State initial_cpu = {.pc=0x81ff, .a=0xa5, .x=0x60, .y=0x13, .sp=0x67, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x0060, .value=0x71}, {.addr=0x81ff, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x8200, .a=0xf5, .x=0x60, .y=0x13, .sp=0x67, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0060, .value=0x71}, {.addr=0x81ff, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x81ff, .value=0x06, .type=IO_READ},
        {.addr=0x8200, .value=DUMMY, .type=IO_READ},
        {.addr=0x0060, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0030) {
    const struct CPU_State initial_cpu = {.pc=0xe1fd, .a=0x48, .x=0x2d, .y=0x98, .sp=0xf1, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x002d, .value=0x14}, {.addr=0xe1fd, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xe1fe, .a=0x5c, .x=0x2d, .y=0x98, .sp=0xf1, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x002d, .value=0x14}, {.addr=0xe1fd, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xe1fd, .value=0x06, .type=IO_READ},
        {.addr=0xe1fe, .value=DUMMY, .type=IO_READ},
        {.addr=0x002d, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0031) {
    const struct CPU_State initial_cpu = {.pc=0x9f0d, .a=0xb3, .x=0x90, .y=0xfe, .sp=0x1e, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x0190, .value=0x01}, {.addr=0x9f0d, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x9f0e, .a=0xb3, .x=0x90, .y=0xfe, .sp=0x1e, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x0190, .value=0x01}, {.addr=0x9f0d, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x9f0d, .value=0x06, .type=IO_READ},
        {.addr=0x9f0e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0190, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0033) {
    const struct CPU_State initial_cpu = {.pc=0x4208, .a=0x08, .x=0xa7, .y=0xb2, .sp=0x4e, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x00a7, .value=0xf7}, {.addr=0x4208, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x4209, .a=0xff, .x=0xa7, .y=0xb2, .sp=0x4e, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x00a7, .value=0xf7}, {.addr=0x4208, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x4208, .value=0x06, .type=IO_READ},
        {.addr=0x4209, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a7, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0034) {
    const struct CPU_State initial_cpu = {.pc=0x880e, .a=0xe7, .x=0xa4, .y=0x60, .sp=0x41, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x00a4, .value=0xbb}, {.addr=0x880e, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x880f, .a=0xff, .x=0xa4, .y=0x60, .sp=0x41, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x00a4, .value=0xbb}, {.addr=0x880e, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x880e, .value=0x06, .type=IO_READ},
        {.addr=0x880f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a4, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0035) {
    const struct CPU_State initial_cpu = {.pc=0xd066, .a=0x3f, .x=0x0c, .y=0xc5, .sp=0x1f, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0xd7}, {.addr=0xd066, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xd067, .a=0xff, .x=0x0c, .y=0xc5, .sp=0x1f, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0xd7}, {.addr=0xd066, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xd066, .value=0x06, .type=IO_READ},
        {.addr=0xd067, .value=DUMMY, .type=IO_READ},
        {.addr=0x010c, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0036) {
    const struct CPU_State initial_cpu = {.pc=0xfcbe, .a=0xcc, .x=0xc5, .y=0xe0, .sp=0x68, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x00c5, .value=0x0e}, {.addr=0xfcbe, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xfcbf, .a=0xce, .x=0xc5, .y=0xe0, .sp=0x68, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x00c5, .value=0x0e}, {.addr=0xfcbe, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xfcbe, .value=0x06, .type=IO_READ},
        {.addr=0xfcbf, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c5, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0037) {
    const struct CPU_State initial_cpu = {.pc=0xee66, .a=0x71, .x=0xc5, .y=0x91, .sp=0x56, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x01c5, .value=0xf9}, {.addr=0xee66, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xee67, .a=0xf9, .x=0xc5, .y=0x91, .sp=0x56, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x01c5, .value=0xf9}, {.addr=0xee66, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xee66, .value=0x06, .type=IO_READ},
        {.addr=0xee67, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c5, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0038) {
    const struct CPU_State initial_cpu = {.pc=0xcc87, .a=0x7a, .x=0x3a, .y=0xc6, .sp=0x95, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x013a, .value=0x19}, {.addr=0xcc87, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xcc88, .a=0x7b, .x=0x3a, .y=0xc6, .sp=0x95, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x013a, .value=0x19}, {.addr=0xcc87, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xcc87, .value=0x06, .type=IO_READ},
        {.addr=0xcc88, .value=DUMMY, .type=IO_READ},
        {.addr=0x013a, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0039) {
    const struct CPU_State initial_cpu = {.pc=0xe4cb, .a=0xe1, .x=0x85, .y=0xc2, .sp=0x0f, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x0085, .value=0xde}, {.addr=0xe4cb, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xe4cc, .a=0xff, .x=0x85, .y=0xc2, .sp=0x0f, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x0085, .value=0xde}, {.addr=0xe4cb, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xe4cb, .value=0x06, .type=IO_READ},
        {.addr=0xe4cc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0085, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_003A) {
    const struct CPU_State initial_cpu = {.pc=0x3e96, .a=0x85, .x=0xd1, .y=0x0b, .sp=0xb0, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x00d1, .value=0x64}, {.addr=0x3e96, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x3e97, .a=0xe5, .x=0xd1, .y=0x0b, .sp=0xb0, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x00d1, .value=0x64}, {.addr=0x3e96, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x3e96, .value=0x06, .type=IO_READ},
        {.addr=0x3e97, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d1, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_003B) {
    const struct CPU_State initial_cpu = {.pc=0x95ee, .a=0x35, .x=0x35, .y=0x6c, .sp=0x82, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x0135, .value=0x0d}, {.addr=0x95ee, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x95ef, .a=0x3d, .x=0x35, .y=0x6c, .sp=0x82, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0135, .value=0x0d}, {.addr=0x95ee, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x95ee, .value=0x06, .type=IO_READ},
        {.addr=0x95ef, .value=DUMMY, .type=IO_READ},
        {.addr=0x0135, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_003C) {
    const struct CPU_State initial_cpu = {.pc=0x7c95, .a=0x54, .x=0xa3, .y=0x20, .sp=0xd6, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x00a3, .value=0xc1}, {.addr=0x7c95, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x7c96, .a=0xd5, .x=0xa3, .y=0x20, .sp=0xd6, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x00a3, .value=0xc1}, {.addr=0x7c95, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x7c95, .value=0x06, .type=IO_READ},
        {.addr=0x7c96, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a3, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_003D) {
    const struct CPU_State initial_cpu = {.pc=0xa7ba, .a=0xf3, .x=0xb4, .y=0x64, .sp=0x0c, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x00b4, .value=0xbd}, {.addr=0xa7ba, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xa7bb, .a=0xff, .x=0xb4, .y=0x64, .sp=0x0c, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x00b4, .value=0xbd}, {.addr=0xa7ba, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xa7ba, .value=0x06, .type=IO_READ},
        {.addr=0xa7bb, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b4, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_003E) {
    const struct CPU_State initial_cpu = {.pc=0xdc84, .a=0x4f, .x=0x28, .y=0xf0, .sp=0xf6, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x0028, .value=0x87}, {.addr=0xdc84, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xdc85, .a=0xcf, .x=0x28, .y=0xf0, .sp=0xf6, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x0028, .value=0x87}, {.addr=0xdc84, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xdc84, .value=0x06, .type=IO_READ},
        {.addr=0xdc85, .value=DUMMY, .type=IO_READ},
        {.addr=0x0028, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_003F) {
    const struct CPU_State initial_cpu = {.pc=0x9c53, .a=0x4e, .x=0x0a, .y=0x20, .sp=0x71, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x000a, .value=0xcc}, {.addr=0x9c53, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x9c54, .a=0xce, .x=0x0a, .y=0x20, .sp=0x71, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x000a, .value=0xcc}, {.addr=0x9c53, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x9c53, .value=0x06, .type=IO_READ},
        {.addr=0x9c54, .value=DUMMY, .type=IO_READ},
        {.addr=0x000a, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0040) {
    const struct CPU_State initial_cpu = {.pc=0xb96a, .a=0x17, .x=0x0a, .y=0xfb, .sp=0xf9, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0x22}, {.addr=0xb96a, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xb96b, .a=0x37, .x=0x0a, .y=0xfb, .sp=0xf9, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0x22}, {.addr=0xb96a, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xb96a, .value=0x06, .type=IO_READ},
        {.addr=0xb96b, .value=DUMMY, .type=IO_READ},
        {.addr=0x010a, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0041) {
    const struct CPU_State initial_cpu = {.pc=0x76a7, .a=0x59, .x=0x50, .y=0xdd, .sp=0xc5, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x0050, .value=0xb8}, {.addr=0x76a7, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x76a8, .a=0xf9, .x=0x50, .y=0xdd, .sp=0xc5, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x0050, .value=0xb8}, {.addr=0x76a7, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x76a7, .value=0x06, .type=IO_READ},
        {.addr=0x76a8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0050, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0042) {
    const struct CPU_State initial_cpu = {.pc=0x62da, .a=0xd4, .x=0xdb, .y=0xd2, .sp=0x4e, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x00db, .value=0x08}, {.addr=0x62da, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x62db, .a=0xdc, .x=0xdb, .y=0xd2, .sp=0x4e, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x00db, .value=0x08}, {.addr=0x62da, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x62da, .value=0x06, .type=IO_READ},
        {.addr=0x62db, .value=DUMMY, .type=IO_READ},
        {.addr=0x00db, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0043) {
    const struct CPU_State initial_cpu = {.pc=0x7349, .a=0x90, .x=0xc0, .y=0xaa, .sp=0x18, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x00c0, .value=0x36}, {.addr=0x7349, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x734a, .a=0xb6, .x=0xc0, .y=0xaa, .sp=0x18, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x00c0, .value=0x36}, {.addr=0x7349, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x7349, .value=0x06, .type=IO_READ},
        {.addr=0x734a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c0, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0044) {
    const struct CPU_State initial_cpu = {.pc=0x7cf8, .a=0x23, .x=0x17, .y=0x6d, .sp=0xf6, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x0017, .value=0x71}, {.addr=0x7cf8, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x7cf9, .a=0x73, .x=0x17, .y=0x6d, .sp=0xf6, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x0017, .value=0x71}, {.addr=0x7cf8, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x7cf8, .value=0x06, .type=IO_READ},
        {.addr=0x7cf9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0017, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0045) {
    const struct CPU_State initial_cpu = {.pc=0xf693, .a=0x7a, .x=0xb5, .y=0x80, .sp=0x75, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x01b5, .value=0xbc}, {.addr=0xf693, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xf694, .a=0xfe, .x=0xb5, .y=0x80, .sp=0x75, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x01b5, .value=0xbc}, {.addr=0xf693, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xf693, .value=0x06, .type=IO_READ},
        {.addr=0xf694, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b5, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0046) {
    const struct CPU_State initial_cpu = {.pc=0xfdb2, .a=0x0c, .x=0x0f, .y=0xd3, .sp=0x08, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x010f, .value=0xa2}, {.addr=0xfdb2, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xfdb3, .a=0xae, .x=0x0f, .y=0xd3, .sp=0x08, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x010f, .value=0xa2}, {.addr=0xfdb2, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xfdb2, .value=0x06, .type=IO_READ},
        {.addr=0xfdb3, .value=DUMMY, .type=IO_READ},
        {.addr=0x010f, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0047) {
    const struct CPU_State initial_cpu = {.pc=0x685f, .a=0x3f, .x=0x0f, .y=0x11, .sp=0x9b, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x000f, .value=0xc1}, {.addr=0x685f, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x6860, .a=0xff, .x=0x0f, .y=0x11, .sp=0x9b, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x000f, .value=0xc1}, {.addr=0x685f, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x685f, .value=0x06, .type=IO_READ},
        {.addr=0x6860, .value=DUMMY, .type=IO_READ},
        {.addr=0x000f, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0048) {
    const struct CPU_State initial_cpu = {.pc=0xf15f, .a=0x51, .x=0x9e, .y=0xa9, .sp=0x2b, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x009e, .value=0xb1}, {.addr=0xf15f, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xf160, .a=0xf1, .x=0x9e, .y=0xa9, .sp=0x2b, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x009e, .value=0xb1}, {.addr=0xf15f, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xf15f, .value=0x06, .type=IO_READ},
        {.addr=0xf160, .value=DUMMY, .type=IO_READ},
        {.addr=0x009e, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0049) {
    const struct CPU_State initial_cpu = {.pc=0x34ff, .a=0x36, .x=0x7e, .y=0xbe, .sp=0x4f, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x017e, .value=0x8b}, {.addr=0x34ff, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x3500, .a=0xbf, .x=0x7e, .y=0xbe, .sp=0x4f, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x017e, .value=0x8b}, {.addr=0x34ff, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x34ff, .value=0x06, .type=IO_READ},
        {.addr=0x3500, .value=DUMMY, .type=IO_READ},
        {.addr=0x017e, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_004A) {
    const struct CPU_State initial_cpu = {.pc=0x45a0, .a=0xea, .x=0x08, .y=0xe1, .sp=0xc9, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x0108, .value=0x70}, {.addr=0x45a0, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x45a1, .a=0xfa, .x=0x08, .y=0xe1, .sp=0xc9, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x0108, .value=0x70}, {.addr=0x45a0, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x45a0, .value=0x06, .type=IO_READ},
        {.addr=0x45a1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0108, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_004B) {
    const struct CPU_State initial_cpu = {.pc=0x5c2c, .a=0x76, .x=0x12, .y=0xac, .sp=0x64, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x0012, .value=0xa8}, {.addr=0x5c2c, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x5c2d, .a=0xfe, .x=0x12, .y=0xac, .sp=0x64, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x0012, .value=0xa8}, {.addr=0x5c2c, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x5c2c, .value=0x06, .type=IO_READ},
        {.addr=0x5c2d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0012, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_004C) {
    const struct CPU_State initial_cpu = {.pc=0x1cb1, .a=0x71, .x=0x73, .y=0xc9, .sp=0xe4, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x0073, .value=0xb6}, {.addr=0x1cb1, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x1cb2, .a=0xf7, .x=0x73, .y=0xc9, .sp=0xe4, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0073, .value=0xb6}, {.addr=0x1cb1, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x1cb1, .value=0x06, .type=IO_READ},
        {.addr=0x1cb2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0073, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_004D) {
    const struct CPU_State initial_cpu = {.pc=0x2140, .a=0x66, .x=0x48, .y=0x24, .sp=0x89, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x0048, .value=0x37}, {.addr=0x2140, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x2141, .a=0x77, .x=0x48, .y=0x24, .sp=0x89, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0048, .value=0x37}, {.addr=0x2140, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x2140, .value=0x06, .type=IO_READ},
        {.addr=0x2141, .value=DUMMY, .type=IO_READ},
        {.addr=0x0048, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_004E) {
    const struct CPU_State initial_cpu = {.pc=0x6bc1, .a=0x32, .x=0xad, .y=0x71, .sp=0xd5, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x00ad, .value=0xc9}, {.addr=0x6bc1, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x6bc2, .a=0xfb, .x=0xad, .y=0x71, .sp=0xd5, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x00ad, .value=0xc9}, {.addr=0x6bc1, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x6bc1, .value=0x06, .type=IO_READ},
        {.addr=0x6bc2, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ad, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_004F) {
    const struct CPU_State initial_cpu = {.pc=0xcc00, .a=0x4b, .x=0x0f, .y=0xe0, .sp=0x34, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x010f, .value=0xdf}, {.addr=0xcc00, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xcc01, .a=0xdf, .x=0x0f, .y=0xe0, .sp=0x34, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x010f, .value=0xdf}, {.addr=0xcc00, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xcc00, .value=0x06, .type=IO_READ},
        {.addr=0xcc01, .value=DUMMY, .type=IO_READ},
        {.addr=0x010f, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0050) {
    const struct CPU_State initial_cpu = {.pc=0xaee7, .a=0x54, .x=0xd2, .y=0x73, .sp=0x70, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x00d2, .value=0x93}, {.addr=0xaee7, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xaee8, .a=0xd7, .x=0xd2, .y=0x73, .sp=0x70, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x00d2, .value=0x93}, {.addr=0xaee7, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xaee7, .value=0x06, .type=IO_READ},
        {.addr=0xaee8, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d2, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0051) {
    const struct CPU_State initial_cpu = {.pc=0x0eaf, .a=0x37, .x=0x8c, .y=0xff, .sp=0x0e, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x018c, .value=0xca}, {.addr=0x0eaf, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x0eb0, .a=0xff, .x=0x8c, .y=0xff, .sp=0x0e, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x018c, .value=0xca}, {.addr=0x0eaf, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x0eaf, .value=0x06, .type=IO_READ},
        {.addr=0x0eb0, .value=DUMMY, .type=IO_READ},
        {.addr=0x018c, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0052) {
    const struct CPU_State initial_cpu = {.pc=0x8423, .a=0x56, .x=0x1f, .y=0x07, .sp=0x94, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0x16}, {.addr=0x8423, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x8424, .a=0x56, .x=0x1f, .y=0x07, .sp=0x94, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0x16}, {.addr=0x8423, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x8423, .value=0x06, .type=IO_READ},
        {.addr=0x8424, .value=DUMMY, .type=IO_READ},
        {.addr=0x011f, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0053) {
    const struct CPU_State initial_cpu = {.pc=0xd868, .a=0x3f, .x=0x09, .y=0x9f, .sp=0x0f, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x0009, .value=0x38}, {.addr=0xd868, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xd869, .a=0x3f, .x=0x09, .y=0x9f, .sp=0x0f, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x0009, .value=0x38}, {.addr=0xd868, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xd868, .value=0x06, .type=IO_READ},
        {.addr=0xd869, .value=DUMMY, .type=IO_READ},
        {.addr=0x0009, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0054) {
    const struct CPU_State initial_cpu = {.pc=0xb48e, .a=0xc3, .x=0x2c, .y=0xc0, .sp=0xb4, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x002c, .value=0x3a}, {.addr=0xb48e, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xb48f, .a=0xfb, .x=0x2c, .y=0xc0, .sp=0xb4, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x002c, .value=0x3a}, {.addr=0xb48e, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xb48e, .value=0x06, .type=IO_READ},
        {.addr=0xb48f, .value=DUMMY, .type=IO_READ},
        {.addr=0x002c, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0055) {
    const struct CPU_State initial_cpu = {.pc=0xa62a, .a=0x11, .x=0x11, .y=0x7b, .sp=0x5c, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x0011, .value=0x3a}, {.addr=0xa62a, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xa62b, .a=0x3b, .x=0x11, .y=0x7b, .sp=0x5c, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x0011, .value=0x3a}, {.addr=0xa62a, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xa62a, .value=0x06, .type=IO_READ},
        {.addr=0xa62b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0011, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0056) {
    const struct CPU_State initial_cpu = {.pc=0xf54d, .a=0x3e, .x=0x08, .y=0xe9, .sp=0x4c, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x0008, .value=0x0d}, {.addr=0xf54d, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xf54e, .a=0x3f, .x=0x08, .y=0xe9, .sp=0x4c, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x0008, .value=0x0d}, {.addr=0xf54d, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xf54d, .value=0x06, .type=IO_READ},
        {.addr=0xf54e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0008, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0057) {
    const struct CPU_State initial_cpu = {.pc=0x67fa, .a=0x8b, .x=0x99, .y=0x93, .sp=0x3b, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x0099, .value=0x25}, {.addr=0x67fa, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x67fb, .a=0xaf, .x=0x99, .y=0x93, .sp=0x3b, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x0099, .value=0x25}, {.addr=0x67fa, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x67fa, .value=0x06, .type=IO_READ},
        {.addr=0x67fb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0099, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0058) {
    const struct CPU_State initial_cpu = {.pc=0xee6e, .a=0xe0, .x=0x87, .y=0x07, .sp=0x73, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x0087, .value=0x28}, {.addr=0xee6e, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xee6f, .a=0xe8, .x=0x87, .y=0x07, .sp=0x73, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x0087, .value=0x28}, {.addr=0xee6e, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xee6e, .value=0x06, .type=IO_READ},
        {.addr=0xee6f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0087, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0059) {
    const struct CPU_State initial_cpu = {.pc=0x4b45, .a=0x6a, .x=0x14, .y=0x3a, .sp=0x26, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x0014, .value=0xb0}, {.addr=0x4b45, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x4b46, .a=0xfa, .x=0x14, .y=0x3a, .sp=0x26, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x0014, .value=0xb0}, {.addr=0x4b45, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x4b45, .value=0x06, .type=IO_READ},
        {.addr=0x4b46, .value=DUMMY, .type=IO_READ},
        {.addr=0x0014, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_005A) {
    const struct CPU_State initial_cpu = {.pc=0xb07d, .a=0xb3, .x=0x7f, .y=0x6d, .sp=0x0e, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x007f, .value=0x2f}, {.addr=0xb07d, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xb07e, .a=0xbf, .x=0x7f, .y=0x6d, .sp=0x0e, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x007f, .value=0x2f}, {.addr=0xb07d, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xb07d, .value=0x06, .type=IO_READ},
        {.addr=0xb07e, .value=DUMMY, .type=IO_READ},
        {.addr=0x007f, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_005B) {
    const struct CPU_State initial_cpu = {.pc=0xda7e, .a=0xe0, .x=0x48, .y=0x34, .sp=0x2e, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x0148, .value=0xee}, {.addr=0xda7e, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xda7f, .a=0xee, .x=0x48, .y=0x34, .sp=0x2e, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0148, .value=0xee}, {.addr=0xda7e, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xda7e, .value=0x06, .type=IO_READ},
        {.addr=0xda7f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0148, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_005D) {
    const struct CPU_State initial_cpu = {.pc=0xe078, .a=0x36, .x=0x05, .y=0xe8, .sp=0xf3, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x0105, .value=0x69}, {.addr=0xe078, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xe079, .a=0x7f, .x=0x05, .y=0xe8, .sp=0xf3, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x0105, .value=0x69}, {.addr=0xe078, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xe078, .value=0x06, .type=IO_READ},
        {.addr=0xe079, .value=DUMMY, .type=IO_READ},
        {.addr=0x0105, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_005E) {
    const struct CPU_State initial_cpu = {.pc=0x5a9a, .a=0xa4, .x=0x07, .y=0x29, .sp=0xa2, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0xeb}, {.addr=0x5a9a, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x5a9b, .a=0xef, .x=0x07, .y=0x29, .sp=0xa2, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0xeb}, {.addr=0x5a9a, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x5a9a, .value=0x06, .type=IO_READ},
        {.addr=0x5a9b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0107, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_005F) {
    const struct CPU_State initial_cpu = {.pc=0x03d0, .a=0x00, .x=0xe2, .y=0x49, .sp=0x81, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0x86}, {.addr=0x03d0, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x03d1, .a=0x86, .x=0xe2, .y=0x49, .sp=0x81, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0x86}, {.addr=0x03d0, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x03d0, .value=0x06, .type=IO_READ},
        {.addr=0x03d1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e2, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0060) {
    const struct CPU_State initial_cpu = {.pc=0x0fc2, .a=0x71, .x=0x7b, .y=0x87, .sp=0xe0, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0x84}, {.addr=0x0fc2, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x0fc3, .a=0xf5, .x=0x7b, .y=0x87, .sp=0xe0, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0x84}, {.addr=0x0fc2, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x0fc2, .value=0x06, .type=IO_READ},
        {.addr=0x0fc3, .value=DUMMY, .type=IO_READ},
        {.addr=0x017b, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0061) {
    const struct CPU_State initial_cpu = {.pc=0xb4fd, .a=0x66, .x=0x73, .y=0x88, .sp=0x5f, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x0073, .value=0xd2}, {.addr=0xb4fd, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xb4fe, .a=0xf6, .x=0x73, .y=0x88, .sp=0x5f, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x0073, .value=0xd2}, {.addr=0xb4fd, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xb4fd, .value=0x06, .type=IO_READ},
        {.addr=0xb4fe, .value=DUMMY, .type=IO_READ},
        {.addr=0x0073, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0062) {
    const struct CPU_State initial_cpu = {.pc=0x73ea, .a=0x13, .x=0xb1, .y=0x68, .sp=0xdd, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x00b1, .value=0xc5}, {.addr=0x73ea, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x73eb, .a=0xd7, .x=0xb1, .y=0x68, .sp=0xdd, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x00b1, .value=0xc5}, {.addr=0x73ea, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x73ea, .value=0x06, .type=IO_READ},
        {.addr=0x73eb, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b1, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0063) {
    const struct CPU_State initial_cpu = {.pc=0xeeb9, .a=0x06, .x=0x71, .y=0xed, .sp=0xcf, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x0171, .value=0x43}, {.addr=0xeeb9, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xeeba, .a=0x47, .x=0x71, .y=0xed, .sp=0xcf, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0171, .value=0x43}, {.addr=0xeeb9, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xeeb9, .value=0x06, .type=IO_READ},
        {.addr=0xeeba, .value=DUMMY, .type=IO_READ},
        {.addr=0x0171, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0064) {
    const struct CPU_State initial_cpu = {.pc=0xc5aa, .a=0x3e, .x=0xe1, .y=0x87, .sp=0xf9, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x00e1, .value=0xaa}, {.addr=0xc5aa, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xc5ab, .a=0xbe, .x=0xe1, .y=0x87, .sp=0xf9, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x00e1, .value=0xaa}, {.addr=0xc5aa, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xc5aa, .value=0x06, .type=IO_READ},
        {.addr=0xc5ab, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e1, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0065) {
    const struct CPU_State initial_cpu = {.pc=0xef39, .a=0xef, .x=0xb6, .y=0x4b, .sp=0x3e, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x00b6, .value=0x21}, {.addr=0xef39, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xef3a, .a=0xef, .x=0xb6, .y=0x4b, .sp=0x3e, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x00b6, .value=0x21}, {.addr=0xef39, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xef39, .value=0x06, .type=IO_READ},
        {.addr=0xef3a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b6, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0066) {
    const struct CPU_State initial_cpu = {.pc=0x0380, .a=0xdf, .x=0x93, .y=0xcc, .sp=0x97, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x0193, .value=0x64}, {.addr=0x0380, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x0381, .a=0xff, .x=0x93, .y=0xcc, .sp=0x97, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0193, .value=0x64}, {.addr=0x0380, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x0380, .value=0x06, .type=IO_READ},
        {.addr=0x0381, .value=DUMMY, .type=IO_READ},
        {.addr=0x0193, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0067) {
    const struct CPU_State initial_cpu = {.pc=0x752e, .a=0x9e, .x=0x95, .y=0xa2, .sp=0x0c, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x0095, .value=0xfa}, {.addr=0x752e, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x752f, .a=0xfe, .x=0x95, .y=0xa2, .sp=0x0c, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x0095, .value=0xfa}, {.addr=0x752e, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x752e, .value=0x06, .type=IO_READ},
        {.addr=0x752f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0095, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0068) {
    const struct CPU_State initial_cpu = {.pc=0x874f, .a=0x7b, .x=0x69, .y=0x21, .sp=0x4f, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x0169, .value=0x54}, {.addr=0x874f, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x8750, .a=0x7f, .x=0x69, .y=0x21, .sp=0x4f, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x0169, .value=0x54}, {.addr=0x874f, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x874f, .value=0x06, .type=IO_READ},
        {.addr=0x8750, .value=DUMMY, .type=IO_READ},
        {.addr=0x0169, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0069) {
    const struct CPU_State initial_cpu = {.pc=0x63dd, .a=0x3b, .x=0x2f, .y=0x1c, .sp=0xcf, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x002f, .value=0xbc}, {.addr=0x63dd, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x63de, .a=0xbf, .x=0x2f, .y=0x1c, .sp=0xcf, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x002f, .value=0xbc}, {.addr=0x63dd, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x63dd, .value=0x06, .type=IO_READ},
        {.addr=0x63de, .value=DUMMY, .type=IO_READ},
        {.addr=0x002f, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_006A) {
    const struct CPU_State initial_cpu = {.pc=0x1657, .a=0x0f, .x=0xd8, .y=0x79, .sp=0x85, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x00d8, .value=0x6f}, {.addr=0x1657, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x1658, .a=0x6f, .x=0xd8, .y=0x79, .sp=0x85, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x00d8, .value=0x6f}, {.addr=0x1657, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x1657, .value=0x06, .type=IO_READ},
        {.addr=0x1658, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d8, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_006B) {
    const struct CPU_State initial_cpu = {.pc=0xa446, .a=0x2d, .x=0x71, .y=0x57, .sp=0xff, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x0171, .value=0xcf}, {.addr=0xa446, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xa447, .a=0xef, .x=0x71, .y=0x57, .sp=0xff, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x0171, .value=0xcf}, {.addr=0xa446, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xa446, .value=0x06, .type=IO_READ},
        {.addr=0xa447, .value=DUMMY, .type=IO_READ},
        {.addr=0x0171, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_006C) {
    const struct CPU_State initial_cpu = {.pc=0xe420, .a=0xf2, .x=0x52, .y=0xf7, .sp=0x07, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x0152, .value=0xf1}, {.addr=0xe420, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xe421, .a=0xf3, .x=0x52, .y=0xf7, .sp=0x07, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x0152, .value=0xf1}, {.addr=0xe420, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xe420, .value=0x06, .type=IO_READ},
        {.addr=0xe421, .value=DUMMY, .type=IO_READ},
        {.addr=0x0152, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_006D) {
    const struct CPU_State initial_cpu = {.pc=0x1dd9, .a=0xf6, .x=0xd3, .y=0x1c, .sp=0x6d, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x00d3, .value=0xe7}, {.addr=0x1dd9, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x1dda, .a=0xf7, .x=0xd3, .y=0x1c, .sp=0x6d, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x00d3, .value=0xe7}, {.addr=0x1dd9, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x1dd9, .value=0x06, .type=IO_READ},
        {.addr=0x1dda, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d3, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_006E) {
    const struct CPU_State initial_cpu = {.pc=0x4d45, .a=0xda, .x=0x00, .y=0xf4, .sp=0xc9, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x0100, .value=0x86}, {.addr=0x4d45, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x4d46, .a=0xde, .x=0x00, .y=0xf4, .sp=0xc9, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x0100, .value=0x86}, {.addr=0x4d45, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x4d45, .value=0x06, .type=IO_READ},
        {.addr=0x4d46, .value=DUMMY, .type=IO_READ},
        {.addr=0x0100, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_006F) {
    const struct CPU_State initial_cpu = {.pc=0x3ca2, .a=0x08, .x=0xc7, .y=0x13, .sp=0xa1, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x00c7, .value=0x46}, {.addr=0x3ca2, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x3ca3, .a=0x4e, .x=0xc7, .y=0x13, .sp=0xa1, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x00c7, .value=0x46}, {.addr=0x3ca2, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x3ca2, .value=0x06, .type=IO_READ},
        {.addr=0x3ca3, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c7, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0070) {
    const struct CPU_State initial_cpu = {.pc=0x4c33, .a=0x3b, .x=0x37, .y=0x7d, .sp=0x98, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x0137, .value=0x86}, {.addr=0x4c33, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x4c34, .a=0xbf, .x=0x37, .y=0x7d, .sp=0x98, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x0137, .value=0x86}, {.addr=0x4c33, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x4c33, .value=0x06, .type=IO_READ},
        {.addr=0x4c34, .value=DUMMY, .type=IO_READ},
        {.addr=0x0137, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0071) {
    const struct CPU_State initial_cpu = {.pc=0x1017, .a=0x2a, .x=0x2b, .y=0x0d, .sp=0xb1, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x002b, .value=0x28}, {.addr=0x1017, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x1018, .a=0x2a, .x=0x2b, .y=0x0d, .sp=0xb1, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x002b, .value=0x28}, {.addr=0x1017, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x1017, .value=0x06, .type=IO_READ},
        {.addr=0x1018, .value=DUMMY, .type=IO_READ},
        {.addr=0x002b, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0072) {
    const struct CPU_State initial_cpu = {.pc=0x0117, .a=0x30, .x=0x66, .y=0x2d, .sp=0x3a, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x0117, .value=0x06}, {.addr=0x0166, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x0118, .a=0xfb, .x=0x66, .y=0x2d, .sp=0x3a, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x0117, .value=0x06}, {.addr=0x0166, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x0117, .value=0x06, .type=IO_READ},
        {.addr=0x0118, .value=DUMMY, .type=IO_READ},
        {.addr=0x0166, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0073) {
    const struct CPU_State initial_cpu = {.pc=0x7bd9, .a=0x75, .x=0x13, .y=0xce, .sp=0x8b, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0xc0}, {.addr=0x7bd9, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x7bda, .a=0xf5, .x=0x13, .y=0xce, .sp=0x8b, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0xc0}, {.addr=0x7bd9, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x7bd9, .value=0x06, .type=IO_READ},
        {.addr=0x7bda, .value=DUMMY, .type=IO_READ},
        {.addr=0x0113, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0074) {
    const struct CPU_State initial_cpu = {.pc=0xf0d7, .a=0xf1, .x=0xd5, .y=0x9e, .sp=0xb0, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x01d5, .value=0x35}, {.addr=0xf0d7, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xf0d8, .a=0xf5, .x=0xd5, .y=0x9e, .sp=0xb0, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x01d5, .value=0x35}, {.addr=0xf0d7, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xf0d7, .value=0x06, .type=IO_READ},
        {.addr=0xf0d8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d5, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0075) {
    const struct CPU_State initial_cpu = {.pc=0x671c, .a=0x0c, .x=0x80, .y=0x6f, .sp=0x9a, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0xa2}, {.addr=0x671c, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x671d, .a=0xae, .x=0x80, .y=0x6f, .sp=0x9a, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0xa2}, {.addr=0x671c, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x671c, .value=0x06, .type=IO_READ},
        {.addr=0x671d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0180, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0076) {
    const struct CPU_State initial_cpu = {.pc=0x3f7e, .a=0x78, .x=0xb9, .y=0xed, .sp=0xc2, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x00b9, .value=0x88}, {.addr=0x3f7e, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x3f7f, .a=0xf8, .x=0xb9, .y=0xed, .sp=0xc2, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x00b9, .value=0x88}, {.addr=0x3f7e, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x3f7e, .value=0x06, .type=IO_READ},
        {.addr=0x3f7f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b9, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0077) {
    const struct CPU_State initial_cpu = {.pc=0xc5fc, .a=0x93, .x=0xea, .y=0x0c, .sp=0xf3, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x00ea, .value=0x00}, {.addr=0xc5fc, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xc5fd, .a=0x93, .x=0xea, .y=0x0c, .sp=0xf3, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x00ea, .value=0x00}, {.addr=0xc5fc, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xc5fc, .value=0x06, .type=IO_READ},
        {.addr=0xc5fd, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ea, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0078) {
    const struct CPU_State initial_cpu = {.pc=0x7b4f, .a=0x85, .x=0x5b, .y=0x88, .sp=0xeb, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x005b, .value=0x55}, {.addr=0x7b4f, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x7b50, .a=0xd5, .x=0x5b, .y=0x88, .sp=0xeb, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x005b, .value=0x55}, {.addr=0x7b4f, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x7b4f, .value=0x06, .type=IO_READ},
        {.addr=0x7b50, .value=DUMMY, .type=IO_READ},
        {.addr=0x005b, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0079) {
    const struct CPU_State initial_cpu = {.pc=0x2664, .a=0xff, .x=0x61, .y=0x43, .sp=0x86, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0x7a}, {.addr=0x2664, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x2665, .a=0xff, .x=0x61, .y=0x43, .sp=0x86, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0x7a}, {.addr=0x2664, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x2664, .value=0x06, .type=IO_READ},
        {.addr=0x2665, .value=DUMMY, .type=IO_READ},
        {.addr=0x0161, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_007A) {
    const struct CPU_State initial_cpu = {.pc=0x3fff, .a=0x8c, .x=0x66, .y=0x7e, .sp=0x7d, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x0066, .value=0x5e}, {.addr=0x3fff, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x4000, .a=0xde, .x=0x66, .y=0x7e, .sp=0x7d, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x0066, .value=0x5e}, {.addr=0x3fff, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x3fff, .value=0x06, .type=IO_READ},
        {.addr=0x4000, .value=DUMMY, .type=IO_READ},
        {.addr=0x0066, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_007B) {
    const struct CPU_State initial_cpu = {.pc=0x6482, .a=0x40, .x=0xd8, .y=0xd4, .sp=0x69, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x00d8, .value=0x63}, {.addr=0x6482, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x6483, .a=0x63, .x=0xd8, .y=0xd4, .sp=0x69, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x00d8, .value=0x63}, {.addr=0x6482, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x6482, .value=0x06, .type=IO_READ},
        {.addr=0x6483, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d8, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_007C) {
    const struct CPU_State initial_cpu = {.pc=0x0972, .a=0x18, .x=0x25, .y=0x45, .sp=0xd0, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x0025, .value=0x06}, {.addr=0x0972, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x0973, .a=0x1e, .x=0x25, .y=0x45, .sp=0xd0, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x0025, .value=0x06}, {.addr=0x0972, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x0972, .value=0x06, .type=IO_READ},
        {.addr=0x0973, .value=DUMMY, .type=IO_READ},
        {.addr=0x0025, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_007D) {
    const struct CPU_State initial_cpu = {.pc=0xaa2d, .a=0xd2, .x=0x6d, .y=0xd5, .sp=0xcb, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x006d, .value=0x3f}, {.addr=0xaa2d, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xaa2e, .a=0xff, .x=0x6d, .y=0xd5, .sp=0xcb, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x006d, .value=0x3f}, {.addr=0xaa2d, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xaa2d, .value=0x06, .type=IO_READ},
        {.addr=0xaa2e, .value=DUMMY, .type=IO_READ},
        {.addr=0x006d, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_007E) {
    const struct CPU_State initial_cpu = {.pc=0xfce0, .a=0x26, .x=0x61, .y=0xe0, .sp=0x86, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x0061, .value=0xcc}, {.addr=0xfce0, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xfce1, .a=0xee, .x=0x61, .y=0xe0, .sp=0x86, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0061, .value=0xcc}, {.addr=0xfce0, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xfce0, .value=0x06, .type=IO_READ},
        {.addr=0xfce1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0061, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_007F) {
    const struct CPU_State initial_cpu = {.pc=0x981b, .a=0x4e, .x=0xe8, .y=0xa7, .sp=0x2b, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x01e8, .value=0x3b}, {.addr=0x981b, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x981c, .a=0x7f, .x=0xe8, .y=0xa7, .sp=0x2b, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x01e8, .value=0x3b}, {.addr=0x981b, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x981b, .value=0x06, .type=IO_READ},
        {.addr=0x981c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e8, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0080) {
    const struct CPU_State initial_cpu = {.pc=0x1236, .a=0xff, .x=0x7a, .y=0xa4, .sp=0xf6, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x017a, .value=0xaf}, {.addr=0x1236, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x1237, .a=0xff, .x=0x7a, .y=0xa4, .sp=0xf6, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x017a, .value=0xaf}, {.addr=0x1236, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x1236, .value=0x06, .type=IO_READ},
        {.addr=0x1237, .value=DUMMY, .type=IO_READ},
        {.addr=0x017a, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0081) {
    const struct CPU_State initial_cpu = {.pc=0xce25, .a=0x59, .x=0xaf, .y=0x2e, .sp=0x13, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x00af, .value=0x29}, {.addr=0xce25, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xce26, .a=0x79, .x=0xaf, .y=0x2e, .sp=0x13, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x00af, .value=0x29}, {.addr=0xce25, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xce25, .value=0x06, .type=IO_READ},
        {.addr=0xce26, .value=DUMMY, .type=IO_READ},
        {.addr=0x00af, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0082) {
    const struct CPU_State initial_cpu = {.pc=0x2f74, .a=0x36, .x=0x71, .y=0x97, .sp=0xb7, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x0171, .value=0x4b}, {.addr=0x2f74, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x2f75, .a=0x7f, .x=0x71, .y=0x97, .sp=0xb7, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x0171, .value=0x4b}, {.addr=0x2f74, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x2f74, .value=0x06, .type=IO_READ},
        {.addr=0x2f75, .value=DUMMY, .type=IO_READ},
        {.addr=0x0171, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0083) {
    const struct CPU_State initial_cpu = {.pc=0xcbdf, .a=0x16, .x=0x74, .y=0x64, .sp=0x36, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x0174, .value=0x17}, {.addr=0xcbdf, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xcbe0, .a=0x17, .x=0x74, .y=0x64, .sp=0x36, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0174, .value=0x17}, {.addr=0xcbdf, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xcbdf, .value=0x06, .type=IO_READ},
        {.addr=0xcbe0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0174, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0084) {
    const struct CPU_State initial_cpu = {.pc=0x43a3, .a=0xb0, .x=0x56, .y=0x1e, .sp=0xa7, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x0156, .value=0x2e}, {.addr=0x43a3, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x43a4, .a=0xbe, .x=0x56, .y=0x1e, .sp=0xa7, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x0156, .value=0x2e}, {.addr=0x43a3, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x43a3, .value=0x06, .type=IO_READ},
        {.addr=0x43a4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0156, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0085) {
    const struct CPU_State initial_cpu = {.pc=0x0827, .a=0x13, .x=0xb2, .y=0x4b, .sp=0xc7, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x01b2, .value=0x6a}, {.addr=0x0827, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x0828, .a=0x7b, .x=0xb2, .y=0x4b, .sp=0xc7, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x01b2, .value=0x6a}, {.addr=0x0827, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x0827, .value=0x06, .type=IO_READ},
        {.addr=0x0828, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b2, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0086) {
    const struct CPU_State initial_cpu = {.pc=0xe8e7, .a=0xc5, .x=0x7a, .y=0x1c, .sp=0x0e, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x017a, .value=0x42}, {.addr=0xe8e7, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xe8e8, .a=0xc7, .x=0x7a, .y=0x1c, .sp=0x0e, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x017a, .value=0x42}, {.addr=0xe8e7, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xe8e7, .value=0x06, .type=IO_READ},
        {.addr=0xe8e8, .value=DUMMY, .type=IO_READ},
        {.addr=0x017a, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0087) {
    const struct CPU_State initial_cpu = {.pc=0xa7c5, .a=0x01, .x=0x17, .y=0x61, .sp=0xe2, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x0017, .value=0x10}, {.addr=0xa7c5, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xa7c6, .a=0x11, .x=0x17, .y=0x61, .sp=0xe2, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0017, .value=0x10}, {.addr=0xa7c5, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xa7c5, .value=0x06, .type=IO_READ},
        {.addr=0xa7c6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0017, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0088) {
    const struct CPU_State initial_cpu = {.pc=0x168e, .a=0x15, .x=0x2e, .y=0x46, .sp=0xa1, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x012e, .value=0xfb}, {.addr=0x168e, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x168f, .a=0xff, .x=0x2e, .y=0x46, .sp=0xa1, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x012e, .value=0xfb}, {.addr=0x168e, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x168e, .value=0x06, .type=IO_READ},
        {.addr=0x168f, .value=DUMMY, .type=IO_READ},
        {.addr=0x012e, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0089) {
    const struct CPU_State initial_cpu = {.pc=0x636c, .a=0xe2, .x=0x8a, .y=0x80, .sp=0xdb, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x008a, .value=0xdf}, {.addr=0x636c, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x636d, .a=0xff, .x=0x8a, .y=0x80, .sp=0xdb, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x008a, .value=0xdf}, {.addr=0x636c, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x636c, .value=0x06, .type=IO_READ},
        {.addr=0x636d, .value=DUMMY, .type=IO_READ},
        {.addr=0x008a, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_008A) {
    const struct CPU_State initial_cpu = {.pc=0x64a6, .a=0x76, .x=0xcb, .y=0x03, .sp=0x48, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x00cb, .value=0xba}, {.addr=0x64a6, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x64a7, .a=0xfe, .x=0xcb, .y=0x03, .sp=0x48, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x00cb, .value=0xba}, {.addr=0x64a6, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x64a6, .value=0x06, .type=IO_READ},
        {.addr=0x64a7, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cb, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_008B) {
    const struct CPU_State initial_cpu = {.pc=0x1312, .a=0x2a, .x=0x75, .y=0x4b, .sp=0x1e, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x0175, .value=0x6e}, {.addr=0x1312, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x1313, .a=0x6e, .x=0x75, .y=0x4b, .sp=0x1e, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x0175, .value=0x6e}, {.addr=0x1312, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x1312, .value=0x06, .type=IO_READ},
        {.addr=0x1313, .value=DUMMY, .type=IO_READ},
        {.addr=0x0175, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_008C) {
    const struct CPU_State initial_cpu = {.pc=0x4a7e, .a=0xfb, .x=0x9e, .y=0x62, .sp=0xff, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x009e, .value=0xd5}, {.addr=0x4a7e, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x4a7f, .a=0xff, .x=0x9e, .y=0x62, .sp=0xff, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x009e, .value=0xd5}, {.addr=0x4a7e, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x4a7e, .value=0x06, .type=IO_READ},
        {.addr=0x4a7f, .value=DUMMY, .type=IO_READ},
        {.addr=0x009e, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_008D) {
    const struct CPU_State initial_cpu = {.pc=0x5983, .a=0x2d, .x=0x64, .y=0xa8, .sp=0x06, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0x40}, {.addr=0x5983, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x5984, .a=0x6d, .x=0x64, .y=0xa8, .sp=0x06, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0x40}, {.addr=0x5983, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x5983, .value=0x06, .type=IO_READ},
        {.addr=0x5984, .value=DUMMY, .type=IO_READ},
        {.addr=0x0164, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_008E) {
    const struct CPU_State initial_cpu = {.pc=0x7a8b, .a=0xe6, .x=0xed, .y=0xb4, .sp=0x9d, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x01ed, .value=0xcd}, {.addr=0x7a8b, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x7a8c, .a=0xef, .x=0xed, .y=0xb4, .sp=0x9d, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x01ed, .value=0xcd}, {.addr=0x7a8b, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x7a8b, .value=0x06, .type=IO_READ},
        {.addr=0x7a8c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ed, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_008F) {
    const struct CPU_State initial_cpu = {.pc=0xe3f1, .a=0x01, .x=0xda, .y=0x67, .sp=0x8c, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x00da, .value=0xba}, {.addr=0xe3f1, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xe3f2, .a=0xbb, .x=0xda, .y=0x67, .sp=0x8c, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x00da, .value=0xba}, {.addr=0xe3f1, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xe3f1, .value=0x06, .type=IO_READ},
        {.addr=0xe3f2, .value=DUMMY, .type=IO_READ},
        {.addr=0x00da, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0090) {
    const struct CPU_State initial_cpu = {.pc=0x9aef, .a=0x41, .x=0x8c, .y=0xc7, .sp=0xd2, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x008c, .value=0x48}, {.addr=0x9aef, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x9af0, .a=0x49, .x=0x8c, .y=0xc7, .sp=0xd2, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x008c, .value=0x48}, {.addr=0x9aef, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x9aef, .value=0x06, .type=IO_READ},
        {.addr=0x9af0, .value=DUMMY, .type=IO_READ},
        {.addr=0x008c, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0091) {
    const struct CPU_State initial_cpu = {.pc=0xd6d1, .a=0xb9, .x=0xa4, .y=0x66, .sp=0x97, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x00a4, .value=0x15}, {.addr=0xd6d1, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xd6d2, .a=0xbd, .x=0xa4, .y=0x66, .sp=0x97, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x00a4, .value=0x15}, {.addr=0xd6d1, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xd6d1, .value=0x06, .type=IO_READ},
        {.addr=0xd6d2, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a4, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0092) {
    const struct CPU_State initial_cpu = {.pc=0x64a4, .a=0x5c, .x=0x71, .y=0xdd, .sp=0xe9, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x0071, .value=0x2d}, {.addr=0x64a4, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x64a5, .a=0x7d, .x=0x71, .y=0xdd, .sp=0xe9, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x0071, .value=0x2d}, {.addr=0x64a4, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x64a4, .value=0x06, .type=IO_READ},
        {.addr=0x64a5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0071, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0093) {
    const struct CPU_State initial_cpu = {.pc=0x6cad, .a=0xe3, .x=0x76, .y=0x19, .sp=0xa2, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x0076, .value=0x7a}, {.addr=0x6cad, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x6cae, .a=0xfb, .x=0x76, .y=0x19, .sp=0xa2, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x0076, .value=0x7a}, {.addr=0x6cad, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x6cad, .value=0x06, .type=IO_READ},
        {.addr=0x6cae, .value=DUMMY, .type=IO_READ},
        {.addr=0x0076, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0094) {
    const struct CPU_State initial_cpu = {.pc=0x0749, .a=0x75, .x=0xef, .y=0x42, .sp=0xcb, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0xef}, {.addr=0x0749, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x074a, .a=0xff, .x=0xef, .y=0x42, .sp=0xcb, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0xef}, {.addr=0x0749, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x0749, .value=0x06, .type=IO_READ},
        {.addr=0x074a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ef, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0095) {
    const struct CPU_State initial_cpu = {.pc=0x08ec, .a=0x36, .x=0x07, .y=0xaf, .sp=0x83, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0x36}, {.addr=0x08ec, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x08ed, .a=0x36, .x=0x07, .y=0xaf, .sp=0x83, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0x36}, {.addr=0x08ec, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x08ec, .value=0x06, .type=IO_READ},
        {.addr=0x08ed, .value=DUMMY, .type=IO_READ},
        {.addr=0x0107, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0096) {
    const struct CPU_State initial_cpu = {.pc=0xc8f4, .a=0x94, .x=0x48, .y=0x46, .sp=0x87, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x0148, .value=0x6e}, {.addr=0xc8f4, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xc8f5, .a=0xfe, .x=0x48, .y=0x46, .sp=0x87, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x0148, .value=0x6e}, {.addr=0xc8f4, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xc8f4, .value=0x06, .type=IO_READ},
        {.addr=0xc8f5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0148, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0097) {
    const struct CPU_State initial_cpu = {.pc=0x1e4a, .a=0x46, .x=0x9f, .y=0x00, .sp=0xd7, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x009f, .value=0x03}, {.addr=0x1e4a, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x1e4b, .a=0x47, .x=0x9f, .y=0x00, .sp=0xd7, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x009f, .value=0x03}, {.addr=0x1e4a, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x1e4a, .value=0x06, .type=IO_READ},
        {.addr=0x1e4b, .value=DUMMY, .type=IO_READ},
        {.addr=0x009f, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0098) {
    const struct CPU_State initial_cpu = {.pc=0x6a5e, .a=0xea, .x=0xc9, .y=0x07, .sp=0x31, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x00c9, .value=0x8f}, {.addr=0x6a5e, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x6a5f, .a=0xef, .x=0xc9, .y=0x07, .sp=0x31, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x00c9, .value=0x8f}, {.addr=0x6a5e, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x6a5e, .value=0x06, .type=IO_READ},
        {.addr=0x6a5f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c9, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0099) {
    const struct CPU_State initial_cpu = {.pc=0x3d62, .a=0x89, .x=0xe1, .y=0xa0, .sp=0x77, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x00e1, .value=0xb3}, {.addr=0x3d62, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x3d63, .a=0xbb, .x=0xe1, .y=0xa0, .sp=0x77, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x00e1, .value=0xb3}, {.addr=0x3d62, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x3d62, .value=0x06, .type=IO_READ},
        {.addr=0x3d63, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e1, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_009A) {
    const struct CPU_State initial_cpu = {.pc=0xa96a, .a=0x92, .x=0x35, .y=0x4d, .sp=0x89, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x0035, .value=0x35}, {.addr=0xa96a, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xa96b, .a=0xb7, .x=0x35, .y=0x4d, .sp=0x89, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x0035, .value=0x35}, {.addr=0xa96a, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xa96a, .value=0x06, .type=IO_READ},
        {.addr=0xa96b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0035, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_009B) {
    const struct CPU_State initial_cpu = {.pc=0x52f5, .a=0x90, .x=0xfe, .y=0xe6, .sp=0xb2, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x01fe, .value=0x95}, {.addr=0x52f5, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x52f6, .a=0x95, .x=0xfe, .y=0xe6, .sp=0xb2, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x01fe, .value=0x95}, {.addr=0x52f5, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x52f5, .value=0x06, .type=IO_READ},
        {.addr=0x52f6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fe, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_009C) {
    const struct CPU_State initial_cpu = {.pc=0x3d2e, .a=0x51, .x=0x1a, .y=0x08, .sp=0xdc, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x011a, .value=0x60}, {.addr=0x3d2e, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x3d2f, .a=0x71, .x=0x1a, .y=0x08, .sp=0xdc, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x011a, .value=0x60}, {.addr=0x3d2e, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x3d2e, .value=0x06, .type=IO_READ},
        {.addr=0x3d2f, .value=DUMMY, .type=IO_READ},
        {.addr=0x011a, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_009D) {
    const struct CPU_State initial_cpu = {.pc=0xf085, .a=0x4f, .x=0x4b, .y=0x51, .sp=0xec, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x014b, .value=0x6f}, {.addr=0xf085, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xf086, .a=0x6f, .x=0x4b, .y=0x51, .sp=0xec, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x014b, .value=0x6f}, {.addr=0xf085, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xf085, .value=0x06, .type=IO_READ},
        {.addr=0xf086, .value=DUMMY, .type=IO_READ},
        {.addr=0x014b, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_009E) {
    const struct CPU_State initial_cpu = {.pc=0x29b4, .a=0xf8, .x=0xe6, .y=0x65, .sp=0xfd, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0x6d}, {.addr=0x29b4, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x29b5, .a=0xfd, .x=0xe6, .y=0x65, .sp=0xfd, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0x6d}, {.addr=0x29b4, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x29b4, .value=0x06, .type=IO_READ},
        {.addr=0x29b5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e6, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_009F) {
    const struct CPU_State initial_cpu = {.pc=0x0176, .a=0x27, .x=0x3f, .y=0x3f, .sp=0x1d, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x003f, .value=0x8d}, {.addr=0x0176, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x0177, .a=0xaf, .x=0x3f, .y=0x3f, .sp=0x1d, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x003f, .value=0x8d}, {.addr=0x0176, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x0176, .value=0x06, .type=IO_READ},
        {.addr=0x0177, .value=DUMMY, .type=IO_READ},
        {.addr=0x003f, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00A0) {
    const struct CPU_State initial_cpu = {.pc=0xacae, .a=0xd2, .x=0xd7, .y=0x01, .sp=0xc2, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x01d7, .value=0xd9}, {.addr=0xacae, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xacaf, .a=0xdb, .x=0xd7, .y=0x01, .sp=0xc2, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x01d7, .value=0xd9}, {.addr=0xacae, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xacae, .value=0x06, .type=IO_READ},
        {.addr=0xacaf, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d7, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00A1) {
    const struct CPU_State initial_cpu = {.pc=0xfb48, .a=0xfb, .x=0xcb, .y=0x4c, .sp=0xe0, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x01cb, .value=0xb6}, {.addr=0xfb48, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xfb49, .a=0xff, .x=0xcb, .y=0x4c, .sp=0xe0, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x01cb, .value=0xb6}, {.addr=0xfb48, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xfb48, .value=0x06, .type=IO_READ},
        {.addr=0xfb49, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cb, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00A2) {
    const struct CPU_State initial_cpu = {.pc=0xa622, .a=0x5d, .x=0x0e, .y=0x58, .sp=0xd6, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x000e, .value=0xc9}, {.addr=0xa622, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xa623, .a=0xdd, .x=0x0e, .y=0x58, .sp=0xd6, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x000e, .value=0xc9}, {.addr=0xa622, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xa622, .value=0x06, .type=IO_READ},
        {.addr=0xa623, .value=DUMMY, .type=IO_READ},
        {.addr=0x000e, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00A3) {
    const struct CPU_State initial_cpu = {.pc=0x5150, .a=0x21, .x=0x6b, .y=0x52, .sp=0x69, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x016b, .value=0x34}, {.addr=0x5150, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x5151, .a=0x35, .x=0x6b, .y=0x52, .sp=0x69, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x016b, .value=0x34}, {.addr=0x5150, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x5150, .value=0x06, .type=IO_READ},
        {.addr=0x5151, .value=DUMMY, .type=IO_READ},
        {.addr=0x016b, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00A4) {
    const struct CPU_State initial_cpu = {.pc=0xa241, .a=0x12, .x=0xe0, .y=0x1f, .sp=0x45, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x00e0, .value=0x9f}, {.addr=0xa241, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xa242, .a=0x9f, .x=0xe0, .y=0x1f, .sp=0x45, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x00e0, .value=0x9f}, {.addr=0xa241, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xa241, .value=0x06, .type=IO_READ},
        {.addr=0xa242, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e0, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00A5) {
    const struct CPU_State initial_cpu = {.pc=0x291b, .a=0xbf, .x=0x4f, .y=0xa9, .sp=0x83, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x004f, .value=0x55}, {.addr=0x291b, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x291c, .a=0xff, .x=0x4f, .y=0xa9, .sp=0x83, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x004f, .value=0x55}, {.addr=0x291b, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x291b, .value=0x06, .type=IO_READ},
        {.addr=0x291c, .value=DUMMY, .type=IO_READ},
        {.addr=0x004f, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00A6) {
    const struct CPU_State initial_cpu = {.pc=0xf2d5, .a=0x35, .x=0x57, .y=0xc6, .sp=0x07, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x0157, .value=0x56}, {.addr=0xf2d5, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xf2d6, .a=0x77, .x=0x57, .y=0xc6, .sp=0x07, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0157, .value=0x56}, {.addr=0xf2d5, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xf2d5, .value=0x06, .type=IO_READ},
        {.addr=0xf2d6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0157, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00A7) {
    const struct CPU_State initial_cpu = {.pc=0x7ce7, .a=0x19, .x=0x76, .y=0xa4, .sp=0x7c, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x0176, .value=0xbd}, {.addr=0x7ce7, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x7ce8, .a=0xbd, .x=0x76, .y=0xa4, .sp=0x7c, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0176, .value=0xbd}, {.addr=0x7ce7, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x7ce7, .value=0x06, .type=IO_READ},
        {.addr=0x7ce8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0176, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00A8) {
    const struct CPU_State initial_cpu = {.pc=0xb7a8, .a=0x14, .x=0x09, .y=0xfb, .sp=0x53, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x0109, .value=0x98}, {.addr=0xb7a8, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xb7a9, .a=0x9c, .x=0x09, .y=0xfb, .sp=0x53, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x0109, .value=0x98}, {.addr=0xb7a8, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xb7a8, .value=0x06, .type=IO_READ},
        {.addr=0xb7a9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0109, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00A9) {
    const struct CPU_State initial_cpu = {.pc=0x0e6a, .a=0x3c, .x=0x5f, .y=0xf6, .sp=0x77, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x005f, .value=0xa6}, {.addr=0x0e6a, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x0e6b, .a=0xbe, .x=0x5f, .y=0xf6, .sp=0x77, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x005f, .value=0xa6}, {.addr=0x0e6a, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x0e6a, .value=0x06, .type=IO_READ},
        {.addr=0x0e6b, .value=DUMMY, .type=IO_READ},
        {.addr=0x005f, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00AA) {
    const struct CPU_State initial_cpu = {.pc=0xa4cd, .a=0xdf, .x=0x27, .y=0xe2, .sp=0x03, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x0027, .value=0x33}, {.addr=0xa4cd, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xa4ce, .a=0xff, .x=0x27, .y=0xe2, .sp=0x03, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x0027, .value=0x33}, {.addr=0xa4cd, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xa4cd, .value=0x06, .type=IO_READ},
        {.addr=0xa4ce, .value=DUMMY, .type=IO_READ},
        {.addr=0x0027, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x3a55, .a=0xfe, .x=0x3b, .y=0xb1, .sp=0xbe, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x013b, .value=0x1b}, {.addr=0x3a55, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x3a56, .a=0xff, .x=0x3b, .y=0xb1, .sp=0xbe, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x013b, .value=0x1b}, {.addr=0x3a55, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x3a55, .value=0x06, .type=IO_READ},
        {.addr=0x3a56, .value=DUMMY, .type=IO_READ},
        {.addr=0x013b, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00AC) {
    const struct CPU_State initial_cpu = {.pc=0xb7dd, .a=0xa2, .x=0xa8, .y=0x4f, .sp=0xef, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x00a8, .value=0xd2}, {.addr=0xb7dd, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xb7de, .a=0xf2, .x=0xa8, .y=0x4f, .sp=0xef, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x00a8, .value=0xd2}, {.addr=0xb7dd, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xb7dd, .value=0x06, .type=IO_READ},
        {.addr=0xb7de, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a8, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00AD) {
    const struct CPU_State initial_cpu = {.pc=0x1f2e, .a=0xcb, .x=0xdb, .y=0xf2, .sp=0xa1, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x00db, .value=0xa7}, {.addr=0x1f2e, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x1f2f, .a=0xef, .x=0xdb, .y=0xf2, .sp=0xa1, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x00db, .value=0xa7}, {.addr=0x1f2e, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x1f2e, .value=0x06, .type=IO_READ},
        {.addr=0x1f2f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00db, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00AE) {
    const struct CPU_State initial_cpu = {.pc=0x0a8e, .a=0xae, .x=0x6c, .y=0x4c, .sp=0x3f, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x006c, .value=0x8b}, {.addr=0x0a8e, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x0a8f, .a=0xaf, .x=0x6c, .y=0x4c, .sp=0x3f, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x006c, .value=0x8b}, {.addr=0x0a8e, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x0a8e, .value=0x06, .type=IO_READ},
        {.addr=0x0a8f, .value=DUMMY, .type=IO_READ},
        {.addr=0x006c, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00AF) {
    const struct CPU_State initial_cpu = {.pc=0x8ddd, .a=0x45, .x=0xef, .y=0x04, .sp=0x47, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0xcb}, {.addr=0x8ddd, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x8dde, .a=0xcf, .x=0xef, .y=0x04, .sp=0x47, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0xcb}, {.addr=0x8ddd, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x8ddd, .value=0x06, .type=IO_READ},
        {.addr=0x8dde, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ef, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00B0) {
    const struct CPU_State initial_cpu = {.pc=0x7aac, .a=0x18, .x=0xa2, .y=0xa9, .sp=0x1a, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x00a2, .value=0x4c}, {.addr=0x7aac, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x7aad, .a=0x5c, .x=0xa2, .y=0xa9, .sp=0x1a, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x00a2, .value=0x4c}, {.addr=0x7aac, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x7aac, .value=0x06, .type=IO_READ},
        {.addr=0x7aad, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a2, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00B1) {
    const struct CPU_State initial_cpu = {.pc=0x8c58, .a=0xe2, .x=0x7b, .y=0x21, .sp=0xd7, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0xa9}, {.addr=0x8c58, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x8c59, .a=0xeb, .x=0x7b, .y=0x21, .sp=0xd7, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0xa9}, {.addr=0x8c58, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x8c58, .value=0x06, .type=IO_READ},
        {.addr=0x8c59, .value=DUMMY, .type=IO_READ},
        {.addr=0x017b, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00B2) {
    const struct CPU_State initial_cpu = {.pc=0xd766, .a=0xef, .x=0xb1, .y=0x92, .sp=0x40, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x01b1, .value=0x82}, {.addr=0xd766, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xd767, .a=0xef, .x=0xb1, .y=0x92, .sp=0x40, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x01b1, .value=0x82}, {.addr=0xd766, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xd766, .value=0x06, .type=IO_READ},
        {.addr=0xd767, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b1, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00B3) {
    const struct CPU_State initial_cpu = {.pc=0xb3bd, .a=0xf4, .x=0x1b, .y=0x52, .sp=0xb0, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0x76}, {.addr=0xb3bd, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xb3be, .a=0xf6, .x=0x1b, .y=0x52, .sp=0xb0, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0x76}, {.addr=0xb3bd, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xb3bd, .value=0x06, .type=IO_READ},
        {.addr=0xb3be, .value=DUMMY, .type=IO_READ},
        {.addr=0x011b, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00B4) {
    const struct CPU_State initial_cpu = {.pc=0x6c41, .a=0xcc, .x=0x38, .y=0x1b, .sp=0x0a, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x0038, .value=0x21}, {.addr=0x6c41, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x6c42, .a=0xed, .x=0x38, .y=0x1b, .sp=0x0a, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x0038, .value=0x21}, {.addr=0x6c41, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x6c41, .value=0x06, .type=IO_READ},
        {.addr=0x6c42, .value=DUMMY, .type=IO_READ},
        {.addr=0x0038, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00B5) {
    const struct CPU_State initial_cpu = {.pc=0x6a8b, .a=0xbf, .x=0x62, .y=0xb2, .sp=0x1a, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0xf4}, {.addr=0x6a8b, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x6a8c, .a=0xff, .x=0x62, .y=0xb2, .sp=0x1a, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0xf4}, {.addr=0x6a8b, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x6a8b, .value=0x06, .type=IO_READ},
        {.addr=0x6a8c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0162, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00B6) {
    const struct CPU_State initial_cpu = {.pc=0x4946, .a=0x89, .x=0x1c, .y=0x78, .sp=0x87, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x001c, .value=0xcc}, {.addr=0x4946, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x4947, .a=0xcd, .x=0x1c, .y=0x78, .sp=0x87, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x001c, .value=0xcc}, {.addr=0x4946, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x4946, .value=0x06, .type=IO_READ},
        {.addr=0x4947, .value=DUMMY, .type=IO_READ},
        {.addr=0x001c, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00B7) {
    const struct CPU_State initial_cpu = {.pc=0x0f6a, .a=0xfb, .x=0xd8, .y=0x9a, .sp=0xa8, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x00d8, .value=0x36}, {.addr=0x0f6a, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x0f6b, .a=0xff, .x=0xd8, .y=0x9a, .sp=0xa8, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x00d8, .value=0x36}, {.addr=0x0f6a, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x0f6a, .value=0x06, .type=IO_READ},
        {.addr=0x0f6b, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d8, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00B8) {
    const struct CPU_State initial_cpu = {.pc=0x0ca3, .a=0x0c, .x=0x72, .y=0x61, .sp=0x01, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0x04}, {.addr=0x0ca3, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x0ca4, .a=0x0c, .x=0x72, .y=0x61, .sp=0x01, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0x04}, {.addr=0x0ca3, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x0ca3, .value=0x06, .type=IO_READ},
        {.addr=0x0ca4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0172, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00B9) {
    const struct CPU_State initial_cpu = {.pc=0xe7c3, .a=0xbe, .x=0xa8, .y=0x82, .sp=0x09, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x00a8, .value=0x51}, {.addr=0xe7c3, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xe7c4, .a=0xff, .x=0xa8, .y=0x82, .sp=0x09, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x00a8, .value=0x51}, {.addr=0xe7c3, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xe7c3, .value=0x06, .type=IO_READ},
        {.addr=0xe7c4, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a8, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00BA) {
    const struct CPU_State initial_cpu = {.pc=0x5d54, .a=0x88, .x=0x6d, .y=0x43, .sp=0x21, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x016d, .value=0x26}, {.addr=0x5d54, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x5d55, .a=0xae, .x=0x6d, .y=0x43, .sp=0x21, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x016d, .value=0x26}, {.addr=0x5d54, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x5d54, .value=0x06, .type=IO_READ},
        {.addr=0x5d55, .value=DUMMY, .type=IO_READ},
        {.addr=0x016d, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00BB) {
    const struct CPU_State initial_cpu = {.pc=0xc15a, .a=0x69, .x=0x0a, .y=0x68, .sp=0x38, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x000a, .value=0x10}, {.addr=0xc15a, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xc15b, .a=0x79, .x=0x0a, .y=0x68, .sp=0x38, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x000a, .value=0x10}, {.addr=0xc15a, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xc15a, .value=0x06, .type=IO_READ},
        {.addr=0xc15b, .value=DUMMY, .type=IO_READ},
        {.addr=0x000a, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00BC) {
    const struct CPU_State initial_cpu = {.pc=0x67f6, .a=0x1f, .x=0xf4, .y=0x98, .sp=0x68, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x01f4, .value=0xd4}, {.addr=0x67f6, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x67f7, .a=0xdf, .x=0xf4, .y=0x98, .sp=0x68, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x01f4, .value=0xd4}, {.addr=0x67f6, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x67f6, .value=0x06, .type=IO_READ},
        {.addr=0x67f7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f4, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00BD) {
    const struct CPU_State initial_cpu = {.pc=0x75e4, .a=0x9b, .x=0xdc, .y=0x40, .sp=0x9b, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x00dc, .value=0x42}, {.addr=0x75e4, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x75e5, .a=0xdb, .x=0xdc, .y=0x40, .sp=0x9b, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x00dc, .value=0x42}, {.addr=0x75e4, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x75e4, .value=0x06, .type=IO_READ},
        {.addr=0x75e5, .value=DUMMY, .type=IO_READ},
        {.addr=0x00dc, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00BE) {
    const struct CPU_State initial_cpu = {.pc=0xe827, .a=0x57, .x=0x0c, .y=0x3d, .sp=0xc4, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x000c, .value=0xed}, {.addr=0xe827, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xe828, .a=0xff, .x=0x0c, .y=0x3d, .sp=0xc4, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x000c, .value=0xed}, {.addr=0xe827, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xe827, .value=0x06, .type=IO_READ},
        {.addr=0xe828, .value=DUMMY, .type=IO_READ},
        {.addr=0x000c, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00BF) {
    const struct CPU_State initial_cpu = {.pc=0x8d66, .a=0xf6, .x=0xb8, .y=0x9f, .sp=0x94, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0x93}, {.addr=0x8d66, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x8d67, .a=0xf7, .x=0xb8, .y=0x9f, .sp=0x94, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0x93}, {.addr=0x8d66, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x8d66, .value=0x06, .type=IO_READ},
        {.addr=0x8d67, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b8, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00C0) {
    const struct CPU_State initial_cpu = {.pc=0x893a, .a=0x33, .x=0xe9, .y=0xf9, .sp=0xb5, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x01e9, .value=0xec}, {.addr=0x893a, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x893b, .a=0xff, .x=0xe9, .y=0xf9, .sp=0xb5, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x01e9, .value=0xec}, {.addr=0x893a, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x893a, .value=0x06, .type=IO_READ},
        {.addr=0x893b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e9, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00C1) {
    const struct CPU_State initial_cpu = {.pc=0xe968, .a=0x74, .x=0x13, .y=0x51, .sp=0x4f, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0x52}, {.addr=0xe968, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xe969, .a=0x76, .x=0x13, .y=0x51, .sp=0x4f, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0x52}, {.addr=0xe968, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xe968, .value=0x06, .type=IO_READ},
        {.addr=0xe969, .value=DUMMY, .type=IO_READ},
        {.addr=0x0113, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00C2) {
    const struct CPU_State initial_cpu = {.pc=0xa513, .a=0x3a, .x=0x2f, .y=0xa0, .sp=0xf2, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x002f, .value=0x82}, {.addr=0xa513, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xa514, .a=0xba, .x=0x2f, .y=0xa0, .sp=0xf2, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x002f, .value=0x82}, {.addr=0xa513, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xa513, .value=0x06, .type=IO_READ},
        {.addr=0xa514, .value=DUMMY, .type=IO_READ},
        {.addr=0x002f, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00C3) {
    const struct CPU_State initial_cpu = {.pc=0x74a1, .a=0x87, .x=0xca, .y=0x57, .sp=0xb0, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x00ca, .value=0x3b}, {.addr=0x74a1, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x74a2, .a=0xbf, .x=0xca, .y=0x57, .sp=0xb0, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x00ca, .value=0x3b}, {.addr=0x74a1, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x74a1, .value=0x06, .type=IO_READ},
        {.addr=0x74a2, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ca, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00C4) {
    const struct CPU_State initial_cpu = {.pc=0x101a, .a=0x4f, .x=0x9f, .y=0x84, .sp=0x88, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x009f, .value=0xa0}, {.addr=0x101a, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x101b, .a=0xef, .x=0x9f, .y=0x84, .sp=0x88, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x009f, .value=0xa0}, {.addr=0x101a, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x101a, .value=0x06, .type=IO_READ},
        {.addr=0x101b, .value=DUMMY, .type=IO_READ},
        {.addr=0x009f, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00C5) {
    const struct CPU_State initial_cpu = {.pc=0x875e, .a=0x50, .x=0xdb, .y=0x09, .sp=0x79, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x01db, .value=0x76}, {.addr=0x875e, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x875f, .a=0x76, .x=0xdb, .y=0x09, .sp=0x79, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x01db, .value=0x76}, {.addr=0x875e, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x875e, .value=0x06, .type=IO_READ},
        {.addr=0x875f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01db, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00C6) {
    const struct CPU_State initial_cpu = {.pc=0xb683, .a=0xe7, .x=0x3e, .y=0x50, .sp=0xba, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x013e, .value=0x29}, {.addr=0xb683, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xb684, .a=0xef, .x=0x3e, .y=0x50, .sp=0xba, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x013e, .value=0x29}, {.addr=0xb683, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xb683, .value=0x06, .type=IO_READ},
        {.addr=0xb684, .value=DUMMY, .type=IO_READ},
        {.addr=0x013e, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00C7) {
    const struct CPU_State initial_cpu = {.pc=0xc4d9, .a=0xb6, .x=0xd8, .y=0x24, .sp=0x1b, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x01d8, .value=0x19}, {.addr=0xc4d9, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xc4da, .a=0xbf, .x=0xd8, .y=0x24, .sp=0x1b, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x01d8, .value=0x19}, {.addr=0xc4d9, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xc4d9, .value=0x06, .type=IO_READ},
        {.addr=0xc4da, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d8, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00C8) {
    const struct CPU_State initial_cpu = {.pc=0xb3c6, .a=0x87, .x=0x71, .y=0x9c, .sp=0x8c, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x0171, .value=0x98}, {.addr=0xb3c6, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xb3c7, .a=0x9f, .x=0x71, .y=0x9c, .sp=0x8c, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x0171, .value=0x98}, {.addr=0xb3c6, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xb3c6, .value=0x06, .type=IO_READ},
        {.addr=0xb3c7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0171, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00C9) {
    const struct CPU_State initial_cpu = {.pc=0xfe1f, .a=0xac, .x=0xff, .y=0x0a, .sp=0x51, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x01ff, .value=0x66}, {.addr=0xfe1f, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xfe20, .a=0xee, .x=0xff, .y=0x0a, .sp=0x51, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x01ff, .value=0x66}, {.addr=0xfe1f, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xfe1f, .value=0x06, .type=IO_READ},
        {.addr=0xfe20, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ff, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00CA) {
    const struct CPU_State initial_cpu = {.pc=0x0814, .a=0x7d, .x=0xc7, .y=0xb8, .sp=0x2a, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x00c7, .value=0xef}, {.addr=0x0814, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x0815, .a=0xff, .x=0xc7, .y=0xb8, .sp=0x2a, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x00c7, .value=0xef}, {.addr=0x0814, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x0814, .value=0x06, .type=IO_READ},
        {.addr=0x0815, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c7, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00CB) {
    const struct CPU_State initial_cpu = {.pc=0x72e9, .a=0xa8, .x=0xd2, .y=0x30, .sp=0xb0, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x01d2, .value=0x34}, {.addr=0x72e9, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x72ea, .a=0xbc, .x=0xd2, .y=0x30, .sp=0xb0, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x01d2, .value=0x34}, {.addr=0x72e9, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x72e9, .value=0x06, .type=IO_READ},
        {.addr=0x72ea, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d2, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00CC) {
    const struct CPU_State initial_cpu = {.pc=0x51e1, .a=0x9e, .x=0x64, .y=0x24, .sp=0x5b, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0x76}, {.addr=0x51e1, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x51e2, .a=0xfe, .x=0x64, .y=0x24, .sp=0x5b, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0x76}, {.addr=0x51e1, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x51e1, .value=0x06, .type=IO_READ},
        {.addr=0x51e2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0164, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00CD) {
    const struct CPU_State initial_cpu = {.pc=0xee9a, .a=0xfb, .x=0x3e, .y=0x5b, .sp=0x2e, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x003e, .value=0x70}, {.addr=0xee9a, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xee9b, .a=0xfb, .x=0x3e, .y=0x5b, .sp=0x2e, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x003e, .value=0x70}, {.addr=0xee9a, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xee9a, .value=0x06, .type=IO_READ},
        {.addr=0xee9b, .value=DUMMY, .type=IO_READ},
        {.addr=0x003e, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00CF) {
    const struct CPU_State initial_cpu = {.pc=0x7c10, .a=0xa5, .x=0x52, .y=0x8d, .sp=0xc1, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x0152, .value=0x43}, {.addr=0x7c10, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x7c11, .a=0xe7, .x=0x52, .y=0x8d, .sp=0xc1, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x0152, .value=0x43}, {.addr=0x7c10, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x7c10, .value=0x06, .type=IO_READ},
        {.addr=0x7c11, .value=DUMMY, .type=IO_READ},
        {.addr=0x0152, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00D0) {
    const struct CPU_State initial_cpu = {.pc=0x6cca, .a=0x73, .x=0xf8, .y=0x88, .sp=0xbc, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x01f8, .value=0x1d}, {.addr=0x6cca, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x6ccb, .a=0x7f, .x=0xf8, .y=0x88, .sp=0xbc, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x01f8, .value=0x1d}, {.addr=0x6cca, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x6cca, .value=0x06, .type=IO_READ},
        {.addr=0x6ccb, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f8, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00D1) {
    const struct CPU_State initial_cpu = {.pc=0xd748, .a=0xa5, .x=0x55, .y=0x41, .sp=0x38, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0x0d}, {.addr=0xd748, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xd749, .a=0xad, .x=0x55, .y=0x41, .sp=0x38, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0x0d}, {.addr=0xd748, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xd748, .value=0x06, .type=IO_READ},
        {.addr=0xd749, .value=DUMMY, .type=IO_READ},
        {.addr=0x0155, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00D2) {
    const struct CPU_State initial_cpu = {.pc=0x7206, .a=0x2f, .x=0x4e, .y=0x97, .sp=0x16, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0x9d}, {.addr=0x7206, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x7207, .a=0xbf, .x=0x4e, .y=0x97, .sp=0x16, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0x9d}, {.addr=0x7206, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x7206, .value=0x06, .type=IO_READ},
        {.addr=0x7207, .value=DUMMY, .type=IO_READ},
        {.addr=0x014e, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00D3) {
    const struct CPU_State initial_cpu = {.pc=0xe012, .a=0xb8, .x=0x36, .y=0x04, .sp=0x02, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x0036, .value=0x94}, {.addr=0xe012, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xe013, .a=0xbc, .x=0x36, .y=0x04, .sp=0x02, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x0036, .value=0x94}, {.addr=0xe012, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xe012, .value=0x06, .type=IO_READ},
        {.addr=0xe013, .value=DUMMY, .type=IO_READ},
        {.addr=0x0036, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00D4) {
    const struct CPU_State initial_cpu = {.pc=0x16eb, .a=0x18, .x=0x4a, .y=0x05, .sp=0x7f, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x014a, .value=0x12}, {.addr=0x16eb, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x16ec, .a=0x1a, .x=0x4a, .y=0x05, .sp=0x7f, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x014a, .value=0x12}, {.addr=0x16eb, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x16eb, .value=0x06, .type=IO_READ},
        {.addr=0x16ec, .value=DUMMY, .type=IO_READ},
        {.addr=0x014a, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00D5) {
    const struct CPU_State initial_cpu = {.pc=0xf69d, .a=0xfd, .x=0x17, .y=0xfc, .sp=0x0d, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x0017, .value=0x78}, {.addr=0xf69d, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xf69e, .a=0xfd, .x=0x17, .y=0xfc, .sp=0x0d, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0017, .value=0x78}, {.addr=0xf69d, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xf69d, .value=0x06, .type=IO_READ},
        {.addr=0xf69e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0017, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00D6) {
    const struct CPU_State initial_cpu = {.pc=0x9cdc, .a=0xe2, .x=0xc1, .y=0xa9, .sp=0xbf, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x01c1, .value=0xb6}, {.addr=0x9cdc, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x9cdd, .a=0xf6, .x=0xc1, .y=0xa9, .sp=0xbf, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x01c1, .value=0xb6}, {.addr=0x9cdc, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x9cdc, .value=0x06, .type=IO_READ},
        {.addr=0x9cdd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c1, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00D7) {
    const struct CPU_State initial_cpu = {.pc=0xf249, .a=0x67, .x=0xc3, .y=0x3f, .sp=0xd1, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x00c3, .value=0xce}, {.addr=0xf249, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xf24a, .a=0xef, .x=0xc3, .y=0x3f, .sp=0xd1, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x00c3, .value=0xce}, {.addr=0xf249, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xf249, .value=0x06, .type=IO_READ},
        {.addr=0xf24a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c3, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00D8) {
    const struct CPU_State initial_cpu = {.pc=0xa7db, .a=0x89, .x=0x9a, .y=0x62, .sp=0xae, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x019a, .value=0x30}, {.addr=0xa7db, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xa7dc, .a=0xb9, .x=0x9a, .y=0x62, .sp=0xae, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x019a, .value=0x30}, {.addr=0xa7db, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xa7db, .value=0x06, .type=IO_READ},
        {.addr=0xa7dc, .value=DUMMY, .type=IO_READ},
        {.addr=0x019a, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00D9) {
    const struct CPU_State initial_cpu = {.pc=0x955f, .a=0xca, .x=0xc4, .y=0xe5, .sp=0xda, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x00c4, .value=0x3d}, {.addr=0x955f, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x9560, .a=0xff, .x=0xc4, .y=0xe5, .sp=0xda, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x00c4, .value=0x3d}, {.addr=0x955f, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x955f, .value=0x06, .type=IO_READ},
        {.addr=0x9560, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c4, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00DA) {
    const struct CPU_State initial_cpu = {.pc=0xb625, .a=0x76, .x=0x0a, .y=0x58, .sp=0xc0, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x000a, .value=0x4e}, {.addr=0xb625, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xb626, .a=0x7e, .x=0x0a, .y=0x58, .sp=0xc0, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x000a, .value=0x4e}, {.addr=0xb625, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xb625, .value=0x06, .type=IO_READ},
        {.addr=0xb626, .value=DUMMY, .type=IO_READ},
        {.addr=0x000a, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00DB) {
    const struct CPU_State initial_cpu = {.pc=0x49eb, .a=0x3d, .x=0xe6, .y=0x37, .sp=0xf9, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x00e6, .value=0xab}, {.addr=0x49eb, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x49ec, .a=0xbf, .x=0xe6, .y=0x37, .sp=0xf9, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x00e6, .value=0xab}, {.addr=0x49eb, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x49eb, .value=0x06, .type=IO_READ},
        {.addr=0x49ec, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e6, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00DC) {
    const struct CPU_State initial_cpu = {.pc=0xb220, .a=0x67, .x=0xb8, .y=0x68, .sp=0xf4, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0x99}, {.addr=0xb220, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xb221, .a=0xff, .x=0xb8, .y=0x68, .sp=0xf4, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0x99}, {.addr=0xb220, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xb220, .value=0x06, .type=IO_READ},
        {.addr=0xb221, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b8, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00DD) {
    const struct CPU_State initial_cpu = {.pc=0x68e1, .a=0xd0, .x=0x74, .y=0x83, .sp=0x67, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x0074, .value=0x89}, {.addr=0x68e1, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x68e2, .a=0xd9, .x=0x74, .y=0x83, .sp=0x67, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x0074, .value=0x89}, {.addr=0x68e1, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x68e1, .value=0x06, .type=IO_READ},
        {.addr=0x68e2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0074, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00DE) {
    const struct CPU_State initial_cpu = {.pc=0xefdd, .a=0x33, .x=0xd2, .y=0x80, .sp=0x47, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x01d2, .value=0xfe}, {.addr=0xefdd, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xefde, .a=0xff, .x=0xd2, .y=0x80, .sp=0x47, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x01d2, .value=0xfe}, {.addr=0xefdd, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xefdd, .value=0x06, .type=IO_READ},
        {.addr=0xefde, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d2, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00DF) {
    const struct CPU_State initial_cpu = {.pc=0x1eb5, .a=0xdc, .x=0x63, .y=0xa8, .sp=0xa1, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x0063, .value=0xfb}, {.addr=0x1eb5, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x1eb6, .a=0xff, .x=0x63, .y=0xa8, .sp=0xa1, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x0063, .value=0xfb}, {.addr=0x1eb5, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x1eb5, .value=0x06, .type=IO_READ},
        {.addr=0x1eb6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0063, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00E0) {
    const struct CPU_State initial_cpu = {.pc=0xa792, .a=0x1d, .x=0x8c, .y=0xca, .sp=0xc8, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x018c, .value=0x24}, {.addr=0xa792, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xa793, .a=0x3d, .x=0x8c, .y=0xca, .sp=0xc8, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x018c, .value=0x24}, {.addr=0xa792, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xa792, .value=0x06, .type=IO_READ},
        {.addr=0xa793, .value=DUMMY, .type=IO_READ},
        {.addr=0x018c, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00E1) {
    const struct CPU_State initial_cpu = {.pc=0x4deb, .a=0x72, .x=0x1d, .y=0x87, .sp=0xb5, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0x21}, {.addr=0x4deb, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x4dec, .a=0x73, .x=0x1d, .y=0x87, .sp=0xb5, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0x21}, {.addr=0x4deb, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x4deb, .value=0x06, .type=IO_READ},
        {.addr=0x4dec, .value=DUMMY, .type=IO_READ},
        {.addr=0x011d, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x95d5, .a=0x47, .x=0xb2, .y=0x0e, .sp=0xa3, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x01b2, .value=0x94}, {.addr=0x95d5, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x95d6, .a=0xd7, .x=0xb2, .y=0x0e, .sp=0xa3, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x01b2, .value=0x94}, {.addr=0x95d5, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x95d5, .value=0x06, .type=IO_READ},
        {.addr=0x95d6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b2, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00E3) {
    const struct CPU_State initial_cpu = {.pc=0x4d0e, .a=0xc8, .x=0xe3, .y=0xa9, .sp=0x73, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x00e3, .value=0xd5}, {.addr=0x4d0e, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x4d0f, .a=0xdd, .x=0xe3, .y=0xa9, .sp=0x73, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x00e3, .value=0xd5}, {.addr=0x4d0e, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x4d0e, .value=0x06, .type=IO_READ},
        {.addr=0x4d0f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e3, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00E4) {
    const struct CPU_State initial_cpu = {.pc=0x6b6a, .a=0x4b, .x=0xa1, .y=0x4b, .sp=0x72, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0x11}, {.addr=0x6b6a, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x6b6b, .a=0x5b, .x=0xa1, .y=0x4b, .sp=0x72, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0x11}, {.addr=0x6b6a, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x6b6a, .value=0x06, .type=IO_READ},
        {.addr=0x6b6b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a1, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00E5) {
    const struct CPU_State initial_cpu = {.pc=0x698d, .a=0xf4, .x=0xbe, .y=0x7c, .sp=0x09, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x00be, .value=0x0d}, {.addr=0x698d, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x698e, .a=0xfd, .x=0xbe, .y=0x7c, .sp=0x09, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x00be, .value=0x0d}, {.addr=0x698d, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x698d, .value=0x06, .type=IO_READ},
        {.addr=0x698e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00be, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00E6) {
    const struct CPU_State initial_cpu = {.pc=0x206a, .a=0xce, .x=0x0d, .y=0xab, .sp=0x0d, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x000d, .value=0x62}, {.addr=0x206a, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x206b, .a=0xee, .x=0x0d, .y=0xab, .sp=0x0d, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x000d, .value=0x62}, {.addr=0x206a, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x206a, .value=0x06, .type=IO_READ},
        {.addr=0x206b, .value=DUMMY, .type=IO_READ},
        {.addr=0x000d, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00E7) {
    const struct CPU_State initial_cpu = {.pc=0x40a7, .a=0x18, .x=0x97, .y=0x73, .sp=0x25, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x0097, .value=0x04}, {.addr=0x40a7, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x40a8, .a=0x1c, .x=0x97, .y=0x73, .sp=0x25, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0097, .value=0x04}, {.addr=0x40a7, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x40a7, .value=0x06, .type=IO_READ},
        {.addr=0x40a8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0097, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00E8) {
    const struct CPU_State initial_cpu = {.pc=0x4dad, .a=0x4d, .x=0x7f, .y=0xfc, .sp=0x69, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x007f, .value=0x99}, {.addr=0x4dad, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x4dae, .a=0xdd, .x=0x7f, .y=0xfc, .sp=0x69, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x007f, .value=0x99}, {.addr=0x4dad, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x4dad, .value=0x06, .type=IO_READ},
        {.addr=0x4dae, .value=DUMMY, .type=IO_READ},
        {.addr=0x007f, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00E9) {
    const struct CPU_State initial_cpu = {.pc=0x43f7, .a=0x11, .x=0xb0, .y=0x57, .sp=0xa3, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x00b0, .value=0x4a}, {.addr=0x43f7, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x43f8, .a=0x5b, .x=0xb0, .y=0x57, .sp=0xa3, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x00b0, .value=0x4a}, {.addr=0x43f7, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x43f7, .value=0x06, .type=IO_READ},
        {.addr=0x43f8, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b0, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00EA) {
    const struct CPU_State initial_cpu = {.pc=0xf8ec, .a=0xcf, .x=0x24, .y=0x76, .sp=0x85, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x0024, .value=0x87}, {.addr=0xf8ec, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xf8ed, .a=0xcf, .x=0x24, .y=0x76, .sp=0x85, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0024, .value=0x87}, {.addr=0xf8ec, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xf8ec, .value=0x06, .type=IO_READ},
        {.addr=0xf8ed, .value=DUMMY, .type=IO_READ},
        {.addr=0x0024, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00EB) {
    const struct CPU_State initial_cpu = {.pc=0xbd01, .a=0x7d, .x=0x1c, .y=0xa7, .sp=0x05, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x011c, .value=0xb9}, {.addr=0xbd01, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xbd02, .a=0xfd, .x=0x1c, .y=0xa7, .sp=0x05, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x011c, .value=0xb9}, {.addr=0xbd01, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xbd01, .value=0x06, .type=IO_READ},
        {.addr=0xbd02, .value=DUMMY, .type=IO_READ},
        {.addr=0x011c, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00EC) {
    const struct CPU_State initial_cpu = {.pc=0xbd56, .a=0x3d, .x=0xea, .y=0x09, .sp=0xe8, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x01ea, .value=0xdd}, {.addr=0xbd56, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xbd57, .a=0xfd, .x=0xea, .y=0x09, .sp=0xe8, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x01ea, .value=0xdd}, {.addr=0xbd56, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xbd56, .value=0x06, .type=IO_READ},
        {.addr=0xbd57, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ea, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00ED) {
    const struct CPU_State initial_cpu = {.pc=0x1675, .a=0x06, .x=0xc3, .y=0x38, .sp=0xa7, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x00c3, .value=0xc7}, {.addr=0x1675, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x1676, .a=0xc7, .x=0xc3, .y=0x38, .sp=0xa7, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x00c3, .value=0xc7}, {.addr=0x1675, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x1675, .value=0x06, .type=IO_READ},
        {.addr=0x1676, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c3, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00EF) {
    const struct CPU_State initial_cpu = {.pc=0xa3ff, .a=0x47, .x=0x1f, .y=0x14, .sp=0x0e, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x001f, .value=0xd6}, {.addr=0xa3ff, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xa400, .a=0xd7, .x=0x1f, .y=0x14, .sp=0x0e, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x001f, .value=0xd6}, {.addr=0xa3ff, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xa3ff, .value=0x06, .type=IO_READ},
        {.addr=0xa400, .value=DUMMY, .type=IO_READ},
        {.addr=0x001f, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00F0) {
    const struct CPU_State initial_cpu = {.pc=0xc05c, .a=0x7c, .x=0x6f, .y=0xdd, .sp=0xa8, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x006f, .value=0x5e}, {.addr=0xc05c, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xc05d, .a=0x7e, .x=0x6f, .y=0xdd, .sp=0xa8, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x006f, .value=0x5e}, {.addr=0xc05c, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xc05c, .value=0x06, .type=IO_READ},
        {.addr=0xc05d, .value=DUMMY, .type=IO_READ},
        {.addr=0x006f, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00F1) {
    const struct CPU_State initial_cpu = {.pc=0xe262, .a=0xb7, .x=0xbc, .y=0xc5, .sp=0x71, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x00bc, .value=0x24}, {.addr=0xe262, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xe263, .a=0xb7, .x=0xbc, .y=0xc5, .sp=0x71, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x00bc, .value=0x24}, {.addr=0xe262, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xe262, .value=0x06, .type=IO_READ},
        {.addr=0xe263, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bc, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00F2) {
    const struct CPU_State initial_cpu = {.pc=0x2694, .a=0x21, .x=0x3d, .y=0x6e, .sp=0x83, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x013d, .value=0x16}, {.addr=0x2694, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x2695, .a=0x37, .x=0x3d, .y=0x6e, .sp=0x83, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x013d, .value=0x16}, {.addr=0x2694, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x2694, .value=0x06, .type=IO_READ},
        {.addr=0x2695, .value=DUMMY, .type=IO_READ},
        {.addr=0x013d, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00F4) {
    const struct CPU_State initial_cpu = {.pc=0xa312, .a=0x3a, .x=0x97, .y=0x74, .sp=0x1a, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x0197, .value=0x3e}, {.addr=0xa312, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xa313, .a=0x3e, .x=0x97, .y=0x74, .sp=0x1a, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0197, .value=0x3e}, {.addr=0xa312, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xa312, .value=0x06, .type=IO_READ},
        {.addr=0xa313, .value=DUMMY, .type=IO_READ},
        {.addr=0x0197, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00F5) {
    const struct CPU_State initial_cpu = {.pc=0xb8f1, .a=0xb8, .x=0xd4, .y=0x5a, .sp=0x42, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x00d4, .value=0x29}, {.addr=0xb8f1, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xb8f2, .a=0xb9, .x=0xd4, .y=0x5a, .sp=0x42, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x00d4, .value=0x29}, {.addr=0xb8f1, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xb8f1, .value=0x06, .type=IO_READ},
        {.addr=0xb8f2, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d4, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00F6) {
    const struct CPU_State initial_cpu = {.pc=0x0f25, .a=0xa8, .x=0xc5, .y=0x41, .sp=0x7e, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x00c5, .value=0xd7}, {.addr=0x0f25, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x0f26, .a=0xff, .x=0xc5, .y=0x41, .sp=0x7e, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x00c5, .value=0xd7}, {.addr=0x0f25, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x0f25, .value=0x06, .type=IO_READ},
        {.addr=0x0f26, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c5, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00F8) {
    const struct CPU_State initial_cpu = {.pc=0x609d, .a=0xc4, .x=0x49, .y=0xb7, .sp=0x3f, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x0049, .value=0xa9}, {.addr=0x609d, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x609e, .a=0xed, .x=0x49, .y=0xb7, .sp=0x3f, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x0049, .value=0xa9}, {.addr=0x609d, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x609d, .value=0x06, .type=IO_READ},
        {.addr=0x609e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0049, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00F9) {
    const struct CPU_State initial_cpu = {.pc=0xaca5, .a=0x18, .x=0xbc, .y=0x23, .sp=0x6d, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x00bc, .value=0x78}, {.addr=0xaca5, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xaca6, .a=0x78, .x=0xbc, .y=0x23, .sp=0x6d, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x00bc, .value=0x78}, {.addr=0xaca5, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xaca5, .value=0x06, .type=IO_READ},
        {.addr=0xaca6, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bc, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00FA) {
    const struct CPU_State initial_cpu = {.pc=0x73b0, .a=0xb5, .x=0x54, .y=0x2f, .sp=0x5e, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x0054, .value=0x7a}, {.addr=0x73b0, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x73b1, .a=0xff, .x=0x54, .y=0x2f, .sp=0x5e, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x0054, .value=0x7a}, {.addr=0x73b0, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x73b0, .value=0x06, .type=IO_READ},
        {.addr=0x73b1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0054, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00FB) {
    const struct CPU_State initial_cpu = {.pc=0x9d8a, .a=0xf8, .x=0x9f, .y=0x53, .sp=0xb3, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x019f, .value=0xae}, {.addr=0x9d8a, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x9d8b, .a=0xfe, .x=0x9f, .y=0x53, .sp=0xb3, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x019f, .value=0xae}, {.addr=0x9d8a, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x9d8a, .value=0x06, .type=IO_READ},
        {.addr=0x9d8b, .value=DUMMY, .type=IO_READ},
        {.addr=0x019f, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00FC) {
    const struct CPU_State initial_cpu = {.pc=0x2f9a, .a=0xdf, .x=0x93, .y=0x58, .sp=0xc4, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x0193, .value=0x14}, {.addr=0x2f9a, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x2f9b, .a=0xdf, .x=0x93, .y=0x58, .sp=0xc4, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0193, .value=0x14}, {.addr=0x2f9a, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x2f9a, .value=0x06, .type=IO_READ},
        {.addr=0x2f9b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0193, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00FD) {
    const struct CPU_State initial_cpu = {.pc=0x3ba4, .a=0x6a, .x=0x3b, .y=0x53, .sp=0x26, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x013b, .value=0x4f}, {.addr=0x3ba4, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x3ba5, .a=0x6f, .x=0x3b, .y=0x53, .sp=0x26, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x013b, .value=0x4f}, {.addr=0x3ba4, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x3ba4, .value=0x06, .type=IO_READ},
        {.addr=0x3ba5, .value=DUMMY, .type=IO_READ},
        {.addr=0x013b, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00FE) {
    const struct CPU_State initial_cpu = {.pc=0xdeec, .a=0x22, .x=0x6c, .y=0x4d, .sp=0xa8, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x016c, .value=0x04}, {.addr=0xdeec, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xdeed, .a=0x26, .x=0x6c, .y=0x4d, .sp=0xa8, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x016c, .value=0x04}, {.addr=0xdeec, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xdeec, .value=0x06, .type=IO_READ},
        {.addr=0xdeed, .value=DUMMY, .type=IO_READ},
        {.addr=0x016c, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_00FF) {
    const struct CPU_State initial_cpu = {.pc=0x9196, .a=0x44, .x=0x74, .y=0x36, .sp=0x19, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x0174, .value=0x95}, {.addr=0x9196, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x9197, .a=0xd5, .x=0x74, .y=0x36, .sp=0x19, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x0174, .value=0x95}, {.addr=0x9196, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x9196, .value=0x06, .type=IO_READ},
        {.addr=0x9197, .value=DUMMY, .type=IO_READ},
        {.addr=0x0174, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0100) {
    const struct CPU_State initial_cpu = {.pc=0x534b, .a=0x82, .x=0x67, .y=0x8e, .sp=0x5f, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0x77}, {.addr=0x534b, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x534c, .a=0xf7, .x=0x67, .y=0x8e, .sp=0x5f, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0x77}, {.addr=0x534b, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x534b, .value=0x06, .type=IO_READ},
        {.addr=0x534c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0167, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0101) {
    const struct CPU_State initial_cpu = {.pc=0x97e3, .a=0x3e, .x=0xa2, .y=0xe8, .sp=0x78, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x01a2, .value=0x0b}, {.addr=0x97e3, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x97e4, .a=0x3f, .x=0xa2, .y=0xe8, .sp=0x78, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x01a2, .value=0x0b}, {.addr=0x97e3, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x97e3, .value=0x06, .type=IO_READ},
        {.addr=0x97e4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a2, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0102) {
    const struct CPU_State initial_cpu = {.pc=0x0bd0, .a=0x62, .x=0x8e, .y=0x02, .sp=0x7c, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x008e, .value=0xd4}, {.addr=0x0bd0, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x0bd1, .a=0xf6, .x=0x8e, .y=0x02, .sp=0x7c, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x008e, .value=0xd4}, {.addr=0x0bd0, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x0bd0, .value=0x06, .type=IO_READ},
        {.addr=0x0bd1, .value=DUMMY, .type=IO_READ},
        {.addr=0x008e, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0103) {
    const struct CPU_State initial_cpu = {.pc=0x48e9, .a=0xdc, .x=0xc7, .y=0x4a, .sp=0x15, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x00c7, .value=0xd4}, {.addr=0x48e9, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x48ea, .a=0xdc, .x=0xc7, .y=0x4a, .sp=0x15, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x00c7, .value=0xd4}, {.addr=0x48e9, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x48e9, .value=0x06, .type=IO_READ},
        {.addr=0x48ea, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c7, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0104) {
    const struct CPU_State initial_cpu = {.pc=0x3415, .a=0xd8, .x=0xc0, .y=0xb1, .sp=0x36, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x00c0, .value=0xd0}, {.addr=0x3415, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x3416, .a=0xd8, .x=0xc0, .y=0xb1, .sp=0x36, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x00c0, .value=0xd0}, {.addr=0x3415, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x3415, .value=0x06, .type=IO_READ},
        {.addr=0x3416, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c0, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0105) {
    const struct CPU_State initial_cpu = {.pc=0x9cf4, .a=0x56, .x=0xdb, .y=0xf2, .sp=0x94, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x00db, .value=0xd7}, {.addr=0x9cf4, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x9cf5, .a=0xd7, .x=0xdb, .y=0xf2, .sp=0x94, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x00db, .value=0xd7}, {.addr=0x9cf4, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x9cf4, .value=0x06, .type=IO_READ},
        {.addr=0x9cf5, .value=DUMMY, .type=IO_READ},
        {.addr=0x00db, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0106) {
    const struct CPU_State initial_cpu = {.pc=0x3ad2, .a=0x58, .x=0xc5, .y=0xe3, .sp=0xca, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x01c5, .value=0x3b}, {.addr=0x3ad2, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x3ad3, .a=0x7b, .x=0xc5, .y=0xe3, .sp=0xca, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x01c5, .value=0x3b}, {.addr=0x3ad2, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x3ad2, .value=0x06, .type=IO_READ},
        {.addr=0x3ad3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c5, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0107) {
    const struct CPU_State initial_cpu = {.pc=0xfd0a, .a=0x81, .x=0x94, .y=0xd4, .sp=0xa1, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x0094, .value=0x97}, {.addr=0xfd0a, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xfd0b, .a=0x97, .x=0x94, .y=0xd4, .sp=0xa1, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x0094, .value=0x97}, {.addr=0xfd0a, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xfd0a, .value=0x06, .type=IO_READ},
        {.addr=0xfd0b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0094, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0108) {
    const struct CPU_State initial_cpu = {.pc=0xf9c9, .a=0x57, .x=0xda, .y=0xcd, .sp=0x37, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x01da, .value=0xcc}, {.addr=0xf9c9, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xf9ca, .a=0xdf, .x=0xda, .y=0xcd, .sp=0x37, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x01da, .value=0xcc}, {.addr=0xf9c9, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xf9c9, .value=0x06, .type=IO_READ},
        {.addr=0xf9ca, .value=DUMMY, .type=IO_READ},
        {.addr=0x01da, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0109) {
    const struct CPU_State initial_cpu = {.pc=0xec79, .a=0x9c, .x=0x17, .y=0x1a, .sp=0x26, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x0017, .value=0x3b}, {.addr=0xec79, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xec7a, .a=0xbf, .x=0x17, .y=0x1a, .sp=0x26, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x0017, .value=0x3b}, {.addr=0xec79, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xec79, .value=0x06, .type=IO_READ},
        {.addr=0xec7a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0017, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_010A) {
    const struct CPU_State initial_cpu = {.pc=0x450e, .a=0xe1, .x=0xee, .y=0xcb, .sp=0xea, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x00ee, .value=0x64}, {.addr=0x450e, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x450f, .a=0xe5, .x=0xee, .y=0xcb, .sp=0xea, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x00ee, .value=0x64}, {.addr=0x450e, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x450e, .value=0x06, .type=IO_READ},
        {.addr=0x450f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ee, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_010B) {
    const struct CPU_State initial_cpu = {.pc=0xdfcb, .a=0x48, .x=0x7d, .y=0x40, .sp=0xd7, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0x75}, {.addr=0xdfcb, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xdfcc, .a=0x7d, .x=0x7d, .y=0x40, .sp=0xd7, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0x75}, {.addr=0xdfcb, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xdfcb, .value=0x06, .type=IO_READ},
        {.addr=0xdfcc, .value=DUMMY, .type=IO_READ},
        {.addr=0x017d, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_010C) {
    const struct CPU_State initial_cpu = {.pc=0xd1b5, .a=0xfd, .x=0x9e, .y=0x44, .sp=0x7d, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0x13}, {.addr=0xd1b5, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xd1b6, .a=0xff, .x=0x9e, .y=0x44, .sp=0x7d, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0x13}, {.addr=0xd1b5, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xd1b5, .value=0x06, .type=IO_READ},
        {.addr=0xd1b6, .value=DUMMY, .type=IO_READ},
        {.addr=0x019e, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_010D) {
    const struct CPU_State initial_cpu = {.pc=0xee28, .a=0x49, .x=0x5a, .y=0xe2, .sp=0x84, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x015a, .value=0xad}, {.addr=0xee28, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xee29, .a=0xed, .x=0x5a, .y=0xe2, .sp=0x84, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x015a, .value=0xad}, {.addr=0xee28, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xee28, .value=0x06, .type=IO_READ},
        {.addr=0xee29, .value=DUMMY, .type=IO_READ},
        {.addr=0x015a, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_010E) {
    const struct CPU_State initial_cpu = {.pc=0x0cf7, .a=0x12, .x=0x79, .y=0x81, .sp=0xcf, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x0079, .value=0x6e}, {.addr=0x0cf7, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x0cf8, .a=0x7e, .x=0x79, .y=0x81, .sp=0xcf, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0079, .value=0x6e}, {.addr=0x0cf7, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x0cf7, .value=0x06, .type=IO_READ},
        {.addr=0x0cf8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0079, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_010F) {
    const struct CPU_State initial_cpu = {.pc=0xc395, .a=0xc9, .x=0x0e, .y=0xcb, .sp=0x77, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x010e, .value=0xf8}, {.addr=0xc395, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xc396, .a=0xf9, .x=0x0e, .y=0xcb, .sp=0x77, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x010e, .value=0xf8}, {.addr=0xc395, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xc395, .value=0x06, .type=IO_READ},
        {.addr=0xc396, .value=DUMMY, .type=IO_READ},
        {.addr=0x010e, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0110) {
    const struct CPU_State initial_cpu = {.pc=0x6f20, .a=0xf8, .x=0x0b, .y=0xfc, .sp=0xc1, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x000b, .value=0xc1}, {.addr=0x6f20, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x6f21, .a=0xf9, .x=0x0b, .y=0xfc, .sp=0xc1, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x000b, .value=0xc1}, {.addr=0x6f20, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x6f20, .value=0x06, .type=IO_READ},
        {.addr=0x6f21, .value=DUMMY, .type=IO_READ},
        {.addr=0x000b, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0111) {
    const struct CPU_State initial_cpu = {.pc=0xced8, .a=0x1a, .x=0x89, .y=0xa8, .sp=0xb0, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x0189, .value=0x49}, {.addr=0xced8, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xced9, .a=0x5b, .x=0x89, .y=0xa8, .sp=0xb0, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x0189, .value=0x49}, {.addr=0xced8, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xced8, .value=0x06, .type=IO_READ},
        {.addr=0xced9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0189, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0112) {
    const struct CPU_State initial_cpu = {.pc=0x60e7, .a=0xa6, .x=0x4e, .y=0x5e, .sp=0xd1, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0xd7}, {.addr=0x60e7, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x60e8, .a=0xf7, .x=0x4e, .y=0x5e, .sp=0xd1, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0xd7}, {.addr=0x60e7, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x60e7, .value=0x06, .type=IO_READ},
        {.addr=0x60e8, .value=DUMMY, .type=IO_READ},
        {.addr=0x014e, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0113) {
    const struct CPU_State initial_cpu = {.pc=0xa60c, .a=0xbf, .x=0xf3, .y=0xef, .sp=0xaf, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x01f3, .value=0xf3}, {.addr=0xa60c, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xa60d, .a=0xff, .x=0xf3, .y=0xef, .sp=0xaf, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x01f3, .value=0xf3}, {.addr=0xa60c, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xa60c, .value=0x06, .type=IO_READ},
        {.addr=0xa60d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f3, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0114) {
    const struct CPU_State initial_cpu = {.pc=0x6578, .a=0x21, .x=0x82, .y=0xf4, .sp=0x60, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x0082, .value=0x33}, {.addr=0x6578, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x6579, .a=0x33, .x=0x82, .y=0xf4, .sp=0x60, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x0082, .value=0x33}, {.addr=0x6578, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x6578, .value=0x06, .type=IO_READ},
        {.addr=0x6579, .value=DUMMY, .type=IO_READ},
        {.addr=0x0082, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0115) {
    const struct CPU_State initial_cpu = {.pc=0xa970, .a=0xe5, .x=0x18, .y=0x7e, .sp=0x8e, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x0018, .value=0x9d}, {.addr=0xa970, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xa971, .a=0xfd, .x=0x18, .y=0x7e, .sp=0x8e, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0018, .value=0x9d}, {.addr=0xa970, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xa970, .value=0x06, .type=IO_READ},
        {.addr=0xa971, .value=DUMMY, .type=IO_READ},
        {.addr=0x0018, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0116) {
    const struct CPU_State initial_cpu = {.pc=0x71d5, .a=0x32, .x=0x00, .y=0xdc, .sp=0xdd, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x0000, .value=0xb7}, {.addr=0x71d5, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x71d6, .a=0xb7, .x=0x00, .y=0xdc, .sp=0xdd, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0000, .value=0xb7}, {.addr=0x71d5, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x71d5, .value=0x06, .type=IO_READ},
        {.addr=0x71d6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0000, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0117) {
    const struct CPU_State initial_cpu = {.pc=0x197c, .a=0x99, .x=0x92, .y=0x7e, .sp=0xbd, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x0192, .value=0xb1}, {.addr=0x197c, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x197d, .a=0xb9, .x=0x92, .y=0x7e, .sp=0xbd, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x0192, .value=0xb1}, {.addr=0x197c, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x197c, .value=0x06, .type=IO_READ},
        {.addr=0x197d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0192, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0118) {
    const struct CPU_State initial_cpu = {.pc=0x35bf, .a=0x54, .x=0xc4, .y=0x1d, .sp=0x26, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x01c4, .value=0x91}, {.addr=0x35bf, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x35c0, .a=0xd5, .x=0xc4, .y=0x1d, .sp=0x26, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x01c4, .value=0x91}, {.addr=0x35bf, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x35bf, .value=0x06, .type=IO_READ},
        {.addr=0x35c0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c4, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0119) {
    const struct CPU_State initial_cpu = {.pc=0x5745, .a=0x69, .x=0xc5, .y=0xbe, .sp=0x00, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x01c5, .value=0x70}, {.addr=0x5745, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x5746, .a=0x79, .x=0xc5, .y=0xbe, .sp=0x00, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x01c5, .value=0x70}, {.addr=0x5745, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x5745, .value=0x06, .type=IO_READ},
        {.addr=0x5746, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c5, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_011A) {
    const struct CPU_State initial_cpu = {.pc=0x5691, .a=0x3c, .x=0x3c, .y=0xd4, .sp=0x32, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x003c, .value=0x4a}, {.addr=0x5691, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x5692, .a=0x7e, .x=0x3c, .y=0xd4, .sp=0x32, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x003c, .value=0x4a}, {.addr=0x5691, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x5691, .value=0x06, .type=IO_READ},
        {.addr=0x5692, .value=DUMMY, .type=IO_READ},
        {.addr=0x003c, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_011B) {
    const struct CPU_State initial_cpu = {.pc=0xb9a9, .a=0xba, .x=0xcb, .y=0x82, .sp=0xf6, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x01cb, .value=0xef}, {.addr=0xb9a9, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xb9aa, .a=0xff, .x=0xcb, .y=0x82, .sp=0xf6, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x01cb, .value=0xef}, {.addr=0xb9a9, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xb9a9, .value=0x06, .type=IO_READ},
        {.addr=0xb9aa, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cb, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_011C) {
    const struct CPU_State initial_cpu = {.pc=0x23b3, .a=0x9f, .x=0x8a, .y=0xfa, .sp=0x42, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x008a, .value=0xc6}, {.addr=0x23b3, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x23b4, .a=0xdf, .x=0x8a, .y=0xfa, .sp=0x42, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x008a, .value=0xc6}, {.addr=0x23b3, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x23b3, .value=0x06, .type=IO_READ},
        {.addr=0x23b4, .value=DUMMY, .type=IO_READ},
        {.addr=0x008a, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_011D) {
    const struct CPU_State initial_cpu = {.pc=0xacbe, .a=0x5a, .x=0x1d, .y=0x53, .sp=0xcf, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x001d, .value=0x49}, {.addr=0xacbe, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xacbf, .a=0x5b, .x=0x1d, .y=0x53, .sp=0xcf, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x001d, .value=0x49}, {.addr=0xacbe, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xacbe, .value=0x06, .type=IO_READ},
        {.addr=0xacbf, .value=DUMMY, .type=IO_READ},
        {.addr=0x001d, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_011E) {
    const struct CPU_State initial_cpu = {.pc=0xabf3, .a=0xf6, .x=0x23, .y=0x70, .sp=0x9b, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x0123, .value=0x5c}, {.addr=0xabf3, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xabf4, .a=0xfe, .x=0x23, .y=0x70, .sp=0x9b, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x0123, .value=0x5c}, {.addr=0xabf3, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xabf3, .value=0x06, .type=IO_READ},
        {.addr=0xabf4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0123, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_011F) {
    const struct CPU_State initial_cpu = {.pc=0xbc32, .a=0xe2, .x=0xa7, .y=0xae, .sp=0x24, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x00a7, .value=0x7c}, {.addr=0xbc32, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xbc33, .a=0xfe, .x=0xa7, .y=0xae, .sp=0x24, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x00a7, .value=0x7c}, {.addr=0xbc32, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xbc32, .value=0x06, .type=IO_READ},
        {.addr=0xbc33, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a7, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0120) {
    const struct CPU_State initial_cpu = {.pc=0x5a26, .a=0x87, .x=0xd0, .y=0x2a, .sp=0xc9, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x01d0, .value=0x7e}, {.addr=0x5a26, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x5a27, .a=0xff, .x=0xd0, .y=0x2a, .sp=0xc9, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x01d0, .value=0x7e}, {.addr=0x5a26, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x5a26, .value=0x06, .type=IO_READ},
        {.addr=0x5a27, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d0, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0121) {
    const struct CPU_State initial_cpu = {.pc=0xac7f, .a=0xe5, .x=0xf3, .y=0xe5, .sp=0x6b, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x01f3, .value=0x5a}, {.addr=0xac7f, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xac80, .a=0xff, .x=0xf3, .y=0xe5, .sp=0x6b, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x01f3, .value=0x5a}, {.addr=0xac7f, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xac7f, .value=0x06, .type=IO_READ},
        {.addr=0xac80, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f3, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0122) {
    const struct CPU_State initial_cpu = {.pc=0x3b2a, .a=0x87, .x=0x7c, .y=0xc5, .sp=0x6b, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0x51}, {.addr=0x3b2a, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x3b2b, .a=0xd7, .x=0x7c, .y=0xc5, .sp=0x6b, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0x51}, {.addr=0x3b2a, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x3b2a, .value=0x06, .type=IO_READ},
        {.addr=0x3b2b, .value=DUMMY, .type=IO_READ},
        {.addr=0x017c, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0123) {
    const struct CPU_State initial_cpu = {.pc=0x85ed, .a=0xd2, .x=0xc2, .y=0x5c, .sp=0x89, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x01c2, .value=0x07}, {.addr=0x85ed, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x85ee, .a=0xd7, .x=0xc2, .y=0x5c, .sp=0x89, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x01c2, .value=0x07}, {.addr=0x85ed, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x85ed, .value=0x06, .type=IO_READ},
        {.addr=0x85ee, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c2, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0124) {
    const struct CPU_State initial_cpu = {.pc=0xc130, .a=0x2c, .x=0xfe, .y=0xfc, .sp=0xb8, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x01fe, .value=0x9f}, {.addr=0xc130, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xc131, .a=0xbf, .x=0xfe, .y=0xfc, .sp=0xb8, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x01fe, .value=0x9f}, {.addr=0xc130, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xc130, .value=0x06, .type=IO_READ},
        {.addr=0xc131, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fe, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0125) {
    const struct CPU_State initial_cpu = {.pc=0x8a46, .a=0x76, .x=0xc3, .y=0x04, .sp=0xcc, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0xb9}, {.addr=0x8a46, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x8a47, .a=0xff, .x=0xc3, .y=0x04, .sp=0xcc, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0xb9}, {.addr=0x8a46, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x8a46, .value=0x06, .type=IO_READ},
        {.addr=0x8a47, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c3, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0126) {
    const struct CPU_State initial_cpu = {.pc=0x7b9c, .a=0xed, .x=0x0a, .y=0x77, .sp=0xd4, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0x55}, {.addr=0x7b9c, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x7b9d, .a=0xfd, .x=0x0a, .y=0x77, .sp=0xd4, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0x55}, {.addr=0x7b9c, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x7b9c, .value=0x06, .type=IO_READ},
        {.addr=0x7b9d, .value=DUMMY, .type=IO_READ},
        {.addr=0x010a, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0127) {
    const struct CPU_State initial_cpu = {.pc=0x4cfc, .a=0x4c, .x=0x8f, .y=0x80, .sp=0xb2, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x008f, .value=0x91}, {.addr=0x4cfc, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x4cfd, .a=0xdd, .x=0x8f, .y=0x80, .sp=0xb2, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x008f, .value=0x91}, {.addr=0x4cfc, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x4cfc, .value=0x06, .type=IO_READ},
        {.addr=0x4cfd, .value=DUMMY, .type=IO_READ},
        {.addr=0x008f, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0128) {
    const struct CPU_State initial_cpu = {.pc=0x5614, .a=0x7a, .x=0xb5, .y=0xdf, .sp=0x1f, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x00b5, .value=0x46}, {.addr=0x5614, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x5615, .a=0x7e, .x=0xb5, .y=0xdf, .sp=0x1f, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x00b5, .value=0x46}, {.addr=0x5614, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x5614, .value=0x06, .type=IO_READ},
        {.addr=0x5615, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b5, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0129) {
    const struct CPU_State initial_cpu = {.pc=0xee0e, .a=0x37, .x=0x4d, .y=0x15, .sp=0x93, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x004d, .value=0x8a}, {.addr=0xee0e, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xee0f, .a=0xbf, .x=0x4d, .y=0x15, .sp=0x93, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x004d, .value=0x8a}, {.addr=0xee0e, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xee0e, .value=0x06, .type=IO_READ},
        {.addr=0xee0f, .value=DUMMY, .type=IO_READ},
        {.addr=0x004d, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_012A) {
    const struct CPU_State initial_cpu = {.pc=0xd296, .a=0x8a, .x=0x78, .y=0x63, .sp=0x89, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x0078, .value=0xea}, {.addr=0xd296, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xd297, .a=0xea, .x=0x78, .y=0x63, .sp=0x89, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x0078, .value=0xea}, {.addr=0xd296, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xd296, .value=0x06, .type=IO_READ},
        {.addr=0xd297, .value=DUMMY, .type=IO_READ},
        {.addr=0x0078, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_012B) {
    const struct CPU_State initial_cpu = {.pc=0xd32f, .a=0x64, .x=0x02, .y=0x1e, .sp=0x39, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x0002, .value=0x8a}, {.addr=0xd32f, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xd330, .a=0xee, .x=0x02, .y=0x1e, .sp=0x39, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x0002, .value=0x8a}, {.addr=0xd32f, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xd32f, .value=0x06, .type=IO_READ},
        {.addr=0xd330, .value=DUMMY, .type=IO_READ},
        {.addr=0x0002, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_012C) {
    const struct CPU_State initial_cpu = {.pc=0x2146, .a=0x2d, .x=0xf0, .y=0x6d, .sp=0x16, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x01f0, .value=0x18}, {.addr=0x2146, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x2147, .a=0x3d, .x=0xf0, .y=0x6d, .sp=0x16, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x01f0, .value=0x18}, {.addr=0x2146, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x2146, .value=0x06, .type=IO_READ},
        {.addr=0x2147, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f0, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_012D) {
    const struct CPU_State initial_cpu = {.pc=0xdd11, .a=0x08, .x=0xa4, .y=0x17, .sp=0x0f, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x00a4, .value=0x20}, {.addr=0xdd11, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xdd12, .a=0x28, .x=0xa4, .y=0x17, .sp=0x0f, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x00a4, .value=0x20}, {.addr=0xdd11, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xdd11, .value=0x06, .type=IO_READ},
        {.addr=0xdd12, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a4, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_012E) {
    const struct CPU_State initial_cpu = {.pc=0x3c11, .a=0x8b, .x=0x97, .y=0xb0, .sp=0xbc, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x0197, .value=0xe5}, {.addr=0x3c11, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x3c12, .a=0xef, .x=0x97, .y=0xb0, .sp=0xbc, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x0197, .value=0xe5}, {.addr=0x3c11, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x3c11, .value=0x06, .type=IO_READ},
        {.addr=0x3c12, .value=DUMMY, .type=IO_READ},
        {.addr=0x0197, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_012F) {
    const struct CPU_State initial_cpu = {.pc=0x7799, .a=0x00, .x=0xc6, .y=0xb3, .sp=0x6d, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x01c6, .value=0x85}, {.addr=0x7799, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x779a, .a=0x85, .x=0xc6, .y=0xb3, .sp=0x6d, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x01c6, .value=0x85}, {.addr=0x7799, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x7799, .value=0x06, .type=IO_READ},
        {.addr=0x779a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c6, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0130) {
    const struct CPU_State initial_cpu = {.pc=0xf6fb, .a=0x39, .x=0x22, .y=0xa2, .sp=0x37, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x0122, .value=0x4a}, {.addr=0xf6fb, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xf6fc, .a=0x7b, .x=0x22, .y=0xa2, .sp=0x37, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x0122, .value=0x4a}, {.addr=0xf6fb, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xf6fb, .value=0x06, .type=IO_READ},
        {.addr=0xf6fc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0122, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0131) {
    const struct CPU_State initial_cpu = {.pc=0x8a64, .a=0xb5, .x=0x27, .y=0x23, .sp=0x0e, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x0127, .value=0x9f}, {.addr=0x8a64, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x8a65, .a=0xbf, .x=0x27, .y=0x23, .sp=0x0e, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x0127, .value=0x9f}, {.addr=0x8a64, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x8a64, .value=0x06, .type=IO_READ},
        {.addr=0x8a65, .value=DUMMY, .type=IO_READ},
        {.addr=0x0127, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0132) {
    const struct CPU_State initial_cpu = {.pc=0x74f3, .a=0x84, .x=0xca, .y=0x27, .sp=0x6c, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x00ca, .value=0xaf}, {.addr=0x74f3, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x74f4, .a=0xaf, .x=0xca, .y=0x27, .sp=0x6c, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x00ca, .value=0xaf}, {.addr=0x74f3, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x74f3, .value=0x06, .type=IO_READ},
        {.addr=0x74f4, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ca, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0133) {
    const struct CPU_State initial_cpu = {.pc=0xf6c3, .a=0x73, .x=0x6a, .y=0xf9, .sp=0x84, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x016a, .value=0x79}, {.addr=0xf6c3, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xf6c4, .a=0x7b, .x=0x6a, .y=0xf9, .sp=0x84, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x016a, .value=0x79}, {.addr=0xf6c3, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xf6c3, .value=0x06, .type=IO_READ},
        {.addr=0xf6c4, .value=DUMMY, .type=IO_READ},
        {.addr=0x016a, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0134) {
    const struct CPU_State initial_cpu = {.pc=0x59b2, .a=0x57, .x=0x70, .y=0x0a, .sp=0xb4, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x0170, .value=0x16}, {.addr=0x59b2, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x59b3, .a=0x57, .x=0x70, .y=0x0a, .sp=0xb4, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x0170, .value=0x16}, {.addr=0x59b2, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x59b2, .value=0x06, .type=IO_READ},
        {.addr=0x59b3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0170, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0136) {
    const struct CPU_State initial_cpu = {.pc=0xd34c, .a=0xea, .x=0x66, .y=0x17, .sp=0xdd, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x0066, .value=0xca}, {.addr=0xd34c, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xd34d, .a=0xea, .x=0x66, .y=0x17, .sp=0xdd, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0066, .value=0xca}, {.addr=0xd34c, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xd34c, .value=0x06, .type=IO_READ},
        {.addr=0xd34d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0066, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0137) {
    const struct CPU_State initial_cpu = {.pc=0x4924, .a=0x9e, .x=0x68, .y=0xa8, .sp=0x1c, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x0068, .value=0x02}, {.addr=0x4924, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x4925, .a=0x9e, .x=0x68, .y=0xa8, .sp=0x1c, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x0068, .value=0x02}, {.addr=0x4924, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x4924, .value=0x06, .type=IO_READ},
        {.addr=0x4925, .value=DUMMY, .type=IO_READ},
        {.addr=0x0068, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0138) {
    const struct CPU_State initial_cpu = {.pc=0xa81b, .a=0xaa, .x=0x8d, .y=0x44, .sp=0xf9, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x008d, .value=0x7a}, {.addr=0xa81b, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xa81c, .a=0xfa, .x=0x8d, .y=0x44, .sp=0xf9, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x008d, .value=0x7a}, {.addr=0xa81b, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xa81b, .value=0x06, .type=IO_READ},
        {.addr=0xa81c, .value=DUMMY, .type=IO_READ},
        {.addr=0x008d, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0139) {
    const struct CPU_State initial_cpu = {.pc=0x78c8, .a=0x10, .x=0x82, .y=0x3a, .sp=0x1a, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0x2f}, {.addr=0x78c8, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x78c9, .a=0x3f, .x=0x82, .y=0x3a, .sp=0x1a, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0x2f}, {.addr=0x78c8, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x78c8, .value=0x06, .type=IO_READ},
        {.addr=0x78c9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0182, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_013A) {
    const struct CPU_State initial_cpu = {.pc=0xe6b9, .a=0xbf, .x=0x89, .y=0x7e, .sp=0x30, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x0189, .value=0x3b}, {.addr=0xe6b9, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xe6ba, .a=0xbf, .x=0x89, .y=0x7e, .sp=0x30, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x0189, .value=0x3b}, {.addr=0xe6b9, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xe6b9, .value=0x06, .type=IO_READ},
        {.addr=0xe6ba, .value=DUMMY, .type=IO_READ},
        {.addr=0x0189, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_013B) {
    const struct CPU_State initial_cpu = {.pc=0xd6fd, .a=0x9c, .x=0xcf, .y=0x97, .sp=0x08, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x01cf, .value=0x36}, {.addr=0xd6fd, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xd6fe, .a=0xbe, .x=0xcf, .y=0x97, .sp=0x08, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x01cf, .value=0x36}, {.addr=0xd6fd, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xd6fd, .value=0x06, .type=IO_READ},
        {.addr=0xd6fe, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cf, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_013C) {
    const struct CPU_State initial_cpu = {.pc=0xe7f1, .a=0x6c, .x=0xb0, .y=0x32, .sp=0x04, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0xc1}, {.addr=0xe7f1, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xe7f2, .a=0xed, .x=0xb0, .y=0x32, .sp=0x04, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0xc1}, {.addr=0xe7f1, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xe7f1, .value=0x06, .type=IO_READ},
        {.addr=0xe7f2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b0, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_013D) {
    const struct CPU_State initial_cpu = {.pc=0xeb6e, .a=0x99, .x=0x79, .y=0x9e, .sp=0xe0, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x0079, .value=0xac}, {.addr=0xeb6e, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xeb6f, .a=0xbd, .x=0x79, .y=0x9e, .sp=0xe0, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x0079, .value=0xac}, {.addr=0xeb6e, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xeb6e, .value=0x06, .type=IO_READ},
        {.addr=0xeb6f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0079, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_013E) {
    const struct CPU_State initial_cpu = {.pc=0x6380, .a=0x92, .x=0xc3, .y=0x79, .sp=0x41, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x00c3, .value=0x37}, {.addr=0x6380, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x6381, .a=0xb7, .x=0xc3, .y=0x79, .sp=0x41, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x00c3, .value=0x37}, {.addr=0x6380, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x6380, .value=0x06, .type=IO_READ},
        {.addr=0x6381, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c3, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_013F) {
    const struct CPU_State initial_cpu = {.pc=0x346a, .a=0x1e, .x=0x27, .y=0x12, .sp=0x12, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x0027, .value=0xda}, {.addr=0x346a, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x346b, .a=0xde, .x=0x27, .y=0x12, .sp=0x12, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0027, .value=0xda}, {.addr=0x346a, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x346a, .value=0x06, .type=IO_READ},
        {.addr=0x346b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0027, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0140) {
    const struct CPU_State initial_cpu = {.pc=0x4341, .a=0x68, .x=0x24, .y=0xab, .sp=0xa6, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x0024, .value=0xca}, {.addr=0x4341, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x4342, .a=0xea, .x=0x24, .y=0xab, .sp=0xa6, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x0024, .value=0xca}, {.addr=0x4341, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x4341, .value=0x06, .type=IO_READ},
        {.addr=0x4342, .value=DUMMY, .type=IO_READ},
        {.addr=0x0024, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0141) {
    const struct CPU_State initial_cpu = {.pc=0x57ce, .a=0x26, .x=0xf8, .y=0x57, .sp=0x68, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x01f8, .value=0xaf}, {.addr=0x57ce, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x57cf, .a=0xaf, .x=0xf8, .y=0x57, .sp=0x68, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x01f8, .value=0xaf}, {.addr=0x57ce, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x57ce, .value=0x06, .type=IO_READ},
        {.addr=0x57cf, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f8, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0143) {
    const struct CPU_State initial_cpu = {.pc=0x79ab, .a=0xa9, .x=0xe3, .y=0x1a, .sp=0xe2, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0xc3}, {.addr=0x79ab, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x79ac, .a=0xeb, .x=0xe3, .y=0x1a, .sp=0xe2, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0xc3}, {.addr=0x79ab, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x79ab, .value=0x06, .type=IO_READ},
        {.addr=0x79ac, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e3, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0144) {
    const struct CPU_State initial_cpu = {.pc=0xf397, .a=0xdc, .x=0xb4, .y=0xbc, .sp=0xd3, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x00b4, .value=0x83}, {.addr=0xf397, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xf398, .a=0xdf, .x=0xb4, .y=0xbc, .sp=0xd3, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x00b4, .value=0x83}, {.addr=0xf397, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xf397, .value=0x06, .type=IO_READ},
        {.addr=0xf398, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b4, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0145) {
    const struct CPU_State initial_cpu = {.pc=0x146e, .a=0x6f, .x=0x48, .y=0xaa, .sp=0x9d, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x0048, .value=0xa7}, {.addr=0x146e, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x146f, .a=0xef, .x=0x48, .y=0xaa, .sp=0x9d, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x0048, .value=0xa7}, {.addr=0x146e, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x146e, .value=0x06, .type=IO_READ},
        {.addr=0x146f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0048, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0146) {
    const struct CPU_State initial_cpu = {.pc=0x7037, .a=0x4a, .x=0xf5, .y=0x69, .sp=0x67, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x01f5, .value=0x9a}, {.addr=0x7037, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x7038, .a=0xda, .x=0xf5, .y=0x69, .sp=0x67, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x01f5, .value=0x9a}, {.addr=0x7037, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x7037, .value=0x06, .type=IO_READ},
        {.addr=0x7038, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f5, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0147) {
    const struct CPU_State initial_cpu = {.pc=0xeb5d, .a=0x3f, .x=0x0d, .y=0x46, .sp=0xf4, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x000d, .value=0x13}, {.addr=0xeb5d, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xeb5e, .a=0x3f, .x=0x0d, .y=0x46, .sp=0xf4, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x000d, .value=0x13}, {.addr=0xeb5d, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xeb5d, .value=0x06, .type=IO_READ},
        {.addr=0xeb5e, .value=DUMMY, .type=IO_READ},
        {.addr=0x000d, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0149) {
    const struct CPU_State initial_cpu = {.pc=0xc9af, .a=0xd5, .x=0x74, .y=0x7c, .sp=0x8e, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x0074, .value=0x0e}, {.addr=0xc9af, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xc9b0, .a=0xdf, .x=0x74, .y=0x7c, .sp=0x8e, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x0074, .value=0x0e}, {.addr=0xc9af, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xc9af, .value=0x06, .type=IO_READ},
        {.addr=0xc9b0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0074, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_014A) {
    const struct CPU_State initial_cpu = {.pc=0xd9b9, .a=0xea, .x=0x53, .y=0xb9, .sp=0xbe, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x0053, .value=0x94}, {.addr=0xd9b9, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xd9ba, .a=0xfe, .x=0x53, .y=0xb9, .sp=0xbe, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x0053, .value=0x94}, {.addr=0xd9b9, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xd9b9, .value=0x06, .type=IO_READ},
        {.addr=0xd9ba, .value=DUMMY, .type=IO_READ},
        {.addr=0x0053, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_014C) {
    const struct CPU_State initial_cpu = {.pc=0xb57e, .a=0x68, .x=0x6e, .y=0x31, .sp=0xdb, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x006e, .value=0xc1}, {.addr=0xb57e, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xb57f, .a=0xe9, .x=0x6e, .y=0x31, .sp=0xdb, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x006e, .value=0xc1}, {.addr=0xb57e, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xb57e, .value=0x06, .type=IO_READ},
        {.addr=0xb57f, .value=DUMMY, .type=IO_READ},
        {.addr=0x006e, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_014D) {
    const struct CPU_State initial_cpu = {.pc=0x411f, .a=0xb0, .x=0xb6, .y=0xe5, .sp=0x5b, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x01b6, .value=0x66}, {.addr=0x411f, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x4120, .a=0xf6, .x=0xb6, .y=0xe5, .sp=0x5b, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x01b6, .value=0x66}, {.addr=0x411f, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x411f, .value=0x06, .type=IO_READ},
        {.addr=0x4120, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b6, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_014F) {
    const struct CPU_State initial_cpu = {.pc=0x2943, .a=0x7f, .x=0xa2, .y=0x03, .sp=0x0a, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x01a2, .value=0x5e}, {.addr=0x2943, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x2944, .a=0x7f, .x=0xa2, .y=0x03, .sp=0x0a, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x01a2, .value=0x5e}, {.addr=0x2943, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x2943, .value=0x06, .type=IO_READ},
        {.addr=0x2944, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a2, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0150) {
    const struct CPU_State initial_cpu = {.pc=0x2ca2, .a=0x46, .x=0x80, .y=0xeb, .sp=0x8b, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0xd5}, {.addr=0x2ca2, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x2ca3, .a=0xd7, .x=0x80, .y=0xeb, .sp=0x8b, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0xd5}, {.addr=0x2ca2, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x2ca2, .value=0x06, .type=IO_READ},
        {.addr=0x2ca3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0180, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0151) {
    const struct CPU_State initial_cpu = {.pc=0xc6ee, .a=0xa3, .x=0x7b, .y=0x94, .sp=0x5c, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0x02}, {.addr=0xc6ee, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xc6ef, .a=0xa3, .x=0x7b, .y=0x94, .sp=0x5c, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0x02}, {.addr=0xc6ee, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xc6ee, .value=0x06, .type=IO_READ},
        {.addr=0xc6ef, .value=DUMMY, .type=IO_READ},
        {.addr=0x017b, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0152) {
    const struct CPU_State initial_cpu = {.pc=0x5a5e, .a=0x9c, .x=0xe8, .y=0xb8, .sp=0x7b, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x00e8, .value=0x3b}, {.addr=0x5a5e, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x5a5f, .a=0xbf, .x=0xe8, .y=0xb8, .sp=0x7b, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x00e8, .value=0x3b}, {.addr=0x5a5e, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x5a5e, .value=0x06, .type=IO_READ},
        {.addr=0x5a5f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e8, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0153) {
    const struct CPU_State initial_cpu = {.pc=0xbec4, .a=0xb9, .x=0x7c, .y=0x64, .sp=0x0b, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0xea}, {.addr=0xbec4, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xbec5, .a=0xfb, .x=0x7c, .y=0x64, .sp=0x0b, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0xea}, {.addr=0xbec4, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xbec4, .value=0x06, .type=IO_READ},
        {.addr=0xbec5, .value=DUMMY, .type=IO_READ},
        {.addr=0x017c, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0154) {
    const struct CPU_State initial_cpu = {.pc=0xc34e, .a=0xcc, .x=0x33, .y=0x6a, .sp=0x64, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x0033, .value=0x47}, {.addr=0xc34e, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xc34f, .a=0xcf, .x=0x33, .y=0x6a, .sp=0x64, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x0033, .value=0x47}, {.addr=0xc34e, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xc34e, .value=0x06, .type=IO_READ},
        {.addr=0xc34f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0033, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0155) {
    const struct CPU_State initial_cpu = {.pc=0x5099, .a=0x1b, .x=0x5f, .y=0x1f, .sp=0xed, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x005f, .value=0x31}, {.addr=0x5099, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x509a, .a=0x3b, .x=0x5f, .y=0x1f, .sp=0xed, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x005f, .value=0x31}, {.addr=0x5099, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x5099, .value=0x06, .type=IO_READ},
        {.addr=0x509a, .value=DUMMY, .type=IO_READ},
        {.addr=0x005f, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0156) {
    const struct CPU_State initial_cpu = {.pc=0x4403, .a=0xdf, .x=0xd1, .y=0x2c, .sp=0x23, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0x0a}, {.addr=0x4403, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x4404, .a=0xdf, .x=0xd1, .y=0x2c, .sp=0x23, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0x0a}, {.addr=0x4403, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x4403, .value=0x06, .type=IO_READ},
        {.addr=0x4404, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d1, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0157) {
    const struct CPU_State initial_cpu = {.pc=0x4396, .a=0x6e, .x=0x11, .y=0xc4, .sp=0xf5, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x0111, .value=0xb3}, {.addr=0x4396, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x4397, .a=0xff, .x=0x11, .y=0xc4, .sp=0xf5, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x0111, .value=0xb3}, {.addr=0x4396, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x4396, .value=0x06, .type=IO_READ},
        {.addr=0x4397, .value=DUMMY, .type=IO_READ},
        {.addr=0x0111, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0158) {
    const struct CPU_State initial_cpu = {.pc=0x7dc7, .a=0x05, .x=0xaa, .y=0x08, .sp=0xb9, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x01aa, .value=0x2d}, {.addr=0x7dc7, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x7dc8, .a=0x2d, .x=0xaa, .y=0x08, .sp=0xb9, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x01aa, .value=0x2d}, {.addr=0x7dc7, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x7dc7, .value=0x06, .type=IO_READ},
        {.addr=0x7dc8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01aa, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0159) {
    const struct CPU_State initial_cpu = {.pc=0x4cb6, .a=0x73, .x=0x57, .y=0x11, .sp=0xe9, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x0157, .value=0x73}, {.addr=0x4cb6, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x4cb7, .a=0x73, .x=0x57, .y=0x11, .sp=0xe9, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x0157, .value=0x73}, {.addr=0x4cb6, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x4cb6, .value=0x06, .type=IO_READ},
        {.addr=0x4cb7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0157, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_015A) {
    const struct CPU_State initial_cpu = {.pc=0x10e7, .a=0xeb, .x=0x75, .y=0xec, .sp=0x17, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x0075, .value=0x48}, {.addr=0x10e7, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x10e8, .a=0xeb, .x=0x75, .y=0xec, .sp=0x17, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x0075, .value=0x48}, {.addr=0x10e7, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x10e7, .value=0x06, .type=IO_READ},
        {.addr=0x10e8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0075, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_015B) {
    const struct CPU_State initial_cpu = {.pc=0x18cc, .a=0x58, .x=0xe0, .y=0x64, .sp=0x4b, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x01e0, .value=0xb5}, {.addr=0x18cc, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x18cd, .a=0xfd, .x=0xe0, .y=0x64, .sp=0x4b, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x01e0, .value=0xb5}, {.addr=0x18cc, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x18cc, .value=0x06, .type=IO_READ},
        {.addr=0x18cd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e0, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_015C) {
    const struct CPU_State initial_cpu = {.pc=0x98fa, .a=0x46, .x=0x7b, .y=0xd4, .sp=0x59, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x007b, .value=0x8a}, {.addr=0x98fa, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x98fb, .a=0xce, .x=0x7b, .y=0xd4, .sp=0x59, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x007b, .value=0x8a}, {.addr=0x98fa, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x98fa, .value=0x06, .type=IO_READ},
        {.addr=0x98fb, .value=DUMMY, .type=IO_READ},
        {.addr=0x007b, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_015D) {
    const struct CPU_State initial_cpu = {.pc=0xf04a, .a=0xec, .x=0xa6, .y=0x26, .sp=0x95, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x00a6, .value=0x64}, {.addr=0xf04a, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xf04b, .a=0xec, .x=0xa6, .y=0x26, .sp=0x95, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x00a6, .value=0x64}, {.addr=0xf04a, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xf04a, .value=0x06, .type=IO_READ},
        {.addr=0xf04b, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a6, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_015E) {
    const struct CPU_State initial_cpu = {.pc=0x7710, .a=0x74, .x=0x25, .y=0x38, .sp=0x16, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x0025, .value=0x5a}, {.addr=0x7710, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x7711, .a=0x7e, .x=0x25, .y=0x38, .sp=0x16, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0025, .value=0x5a}, {.addr=0x7710, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x7710, .value=0x06, .type=IO_READ},
        {.addr=0x7711, .value=DUMMY, .type=IO_READ},
        {.addr=0x0025, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_015F) {
    const struct CPU_State initial_cpu = {.pc=0x688a, .a=0x9e, .x=0xdb, .y=0x07, .sp=0x18, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x00db, .value=0x7c}, {.addr=0x688a, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x688b, .a=0xfe, .x=0xdb, .y=0x07, .sp=0x18, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x00db, .value=0x7c}, {.addr=0x688a, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x688a, .value=0x06, .type=IO_READ},
        {.addr=0x688b, .value=DUMMY, .type=IO_READ},
        {.addr=0x00db, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0160) {
    const struct CPU_State initial_cpu = {.pc=0x8147, .a=0xd8, .x=0x60, .y=0x78, .sp=0x4c, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x0160, .value=0x2b}, {.addr=0x8147, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x8148, .a=0xfb, .x=0x60, .y=0x78, .sp=0x4c, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x0160, .value=0x2b}, {.addr=0x8147, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x8147, .value=0x06, .type=IO_READ},
        {.addr=0x8148, .value=DUMMY, .type=IO_READ},
        {.addr=0x0160, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0161) {
    const struct CPU_State initial_cpu = {.pc=0x6790, .a=0xa7, .x=0x5a, .y=0x87, .sp=0xef, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x015a, .value=0xb6}, {.addr=0x6790, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x6791, .a=0xb7, .x=0x5a, .y=0x87, .sp=0xef, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x015a, .value=0xb6}, {.addr=0x6790, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x6790, .value=0x06, .type=IO_READ},
        {.addr=0x6791, .value=DUMMY, .type=IO_READ},
        {.addr=0x015a, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0162) {
    const struct CPU_State initial_cpu = {.pc=0x4de9, .a=0x84, .x=0x84, .y=0x33, .sp=0x44, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0x3b}, {.addr=0x4de9, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x4dea, .a=0xbf, .x=0x84, .y=0x33, .sp=0x44, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0x3b}, {.addr=0x4de9, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x4de9, .value=0x06, .type=IO_READ},
        {.addr=0x4dea, .value=DUMMY, .type=IO_READ},
        {.addr=0x0184, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0163) {
    const struct CPU_State initial_cpu = {.pc=0xf0df, .a=0x48, .x=0x52, .y=0x3f, .sp=0x5a, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x0152, .value=0xa1}, {.addr=0xf0df, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xf0e0, .a=0xe9, .x=0x52, .y=0x3f, .sp=0x5a, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x0152, .value=0xa1}, {.addr=0xf0df, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xf0df, .value=0x06, .type=IO_READ},
        {.addr=0xf0e0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0152, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0164) {
    const struct CPU_State initial_cpu = {.pc=0xe655, .a=0x81, .x=0x03, .y=0x62, .sp=0xeb, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x0103, .value=0xde}, {.addr=0xe655, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xe656, .a=0xdf, .x=0x03, .y=0x62, .sp=0xeb, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x0103, .value=0xde}, {.addr=0xe655, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xe655, .value=0x06, .type=IO_READ},
        {.addr=0xe656, .value=DUMMY, .type=IO_READ},
        {.addr=0x0103, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0165) {
    const struct CPU_State initial_cpu = {.pc=0x17b2, .a=0x34, .x=0x06, .y=0x96, .sp=0xe7, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0x62}, {.addr=0x17b2, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x17b3, .a=0x76, .x=0x06, .y=0x96, .sp=0xe7, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0x62}, {.addr=0x17b2, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x17b2, .value=0x06, .type=IO_READ},
        {.addr=0x17b3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0106, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0166) {
    const struct CPU_State initial_cpu = {.pc=0x60ab, .a=0xf2, .x=0x20, .y=0xa9, .sp=0x93, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x0120, .value=0x39}, {.addr=0x60ab, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x60ac, .a=0xfb, .x=0x20, .y=0xa9, .sp=0x93, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x0120, .value=0x39}, {.addr=0x60ab, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x60ab, .value=0x06, .type=IO_READ},
        {.addr=0x60ac, .value=DUMMY, .type=IO_READ},
        {.addr=0x0120, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0167) {
    const struct CPU_State initial_cpu = {.pc=0x05e7, .a=0xdd, .x=0x71, .y=0x01, .sp=0x6e, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x0171, .value=0xc4}, {.addr=0x05e7, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x05e8, .a=0xdd, .x=0x71, .y=0x01, .sp=0x6e, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x0171, .value=0xc4}, {.addr=0x05e7, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x05e7, .value=0x06, .type=IO_READ},
        {.addr=0x05e8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0171, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0168) {
    const struct CPU_State initial_cpu = {.pc=0x6163, .a=0x16, .x=0x92, .y=0x7e, .sp=0x00, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x0092, .value=0xb9}, {.addr=0x6163, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x6164, .a=0xbf, .x=0x92, .y=0x7e, .sp=0x00, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x0092, .value=0xb9}, {.addr=0x6163, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x6163, .value=0x06, .type=IO_READ},
        {.addr=0x6164, .value=DUMMY, .type=IO_READ},
        {.addr=0x0092, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0169) {
    const struct CPU_State initial_cpu = {.pc=0xaf78, .a=0xc6, .x=0x8d, .y=0xc6, .sp=0x63, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x018d, .value=0x15}, {.addr=0xaf78, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xaf79, .a=0xd7, .x=0x8d, .y=0xc6, .sp=0x63, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x018d, .value=0x15}, {.addr=0xaf78, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xaf78, .value=0x06, .type=IO_READ},
        {.addr=0xaf79, .value=DUMMY, .type=IO_READ},
        {.addr=0x018d, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_016A) {
    const struct CPU_State initial_cpu = {.pc=0x5e08, .a=0x22, .x=0x5c, .y=0xae, .sp=0x5d, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x005c, .value=0x96}, {.addr=0x5e08, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x5e09, .a=0xb6, .x=0x5c, .y=0xae, .sp=0x5d, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x005c, .value=0x96}, {.addr=0x5e08, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x5e08, .value=0x06, .type=IO_READ},
        {.addr=0x5e09, .value=DUMMY, .type=IO_READ},
        {.addr=0x005c, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_016B) {
    const struct CPU_State initial_cpu = {.pc=0x9331, .a=0xcf, .x=0x8c, .y=0x1f, .sp=0x9a, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x018c, .value=0xe9}, {.addr=0x9331, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x9332, .a=0xef, .x=0x8c, .y=0x1f, .sp=0x9a, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x018c, .value=0xe9}, {.addr=0x9331, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x9331, .value=0x06, .type=IO_READ},
        {.addr=0x9332, .value=DUMMY, .type=IO_READ},
        {.addr=0x018c, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_016C) {
    const struct CPU_State initial_cpu = {.pc=0xbe07, .a=0xff, .x=0xd6, .y=0x78, .sp=0x6d, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x01d6, .value=0xfb}, {.addr=0xbe07, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xbe08, .a=0xff, .x=0xd6, .y=0x78, .sp=0x6d, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x01d6, .value=0xfb}, {.addr=0xbe07, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xbe07, .value=0x06, .type=IO_READ},
        {.addr=0xbe08, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d6, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_016D) {
    const struct CPU_State initial_cpu = {.pc=0x4960, .a=0x44, .x=0x58, .y=0xf7, .sp=0x80, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0x76}, {.addr=0x4960, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x4961, .a=0x76, .x=0x58, .y=0xf7, .sp=0x80, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0x76}, {.addr=0x4960, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x4960, .value=0x06, .type=IO_READ},
        {.addr=0x4961, .value=DUMMY, .type=IO_READ},
        {.addr=0x0158, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_016E) {
    const struct CPU_State initial_cpu = {.pc=0x2b6e, .a=0xf6, .x=0x62, .y=0xf5, .sp=0xc0, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x0062, .value=0x51}, {.addr=0x2b6e, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x2b6f, .a=0xf7, .x=0x62, .y=0xf5, .sp=0xc0, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x0062, .value=0x51}, {.addr=0x2b6e, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x2b6e, .value=0x06, .type=IO_READ},
        {.addr=0x2b6f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0062, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_016F) {
    const struct CPU_State initial_cpu = {.pc=0xbca8, .a=0x05, .x=0x82, .y=0x62, .sp=0x7d, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x0082, .value=0x36}, {.addr=0xbca8, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xbca9, .a=0x37, .x=0x82, .y=0x62, .sp=0x7d, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x0082, .value=0x36}, {.addr=0xbca8, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xbca8, .value=0x06, .type=IO_READ},
        {.addr=0xbca9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0082, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0170) {
    const struct CPU_State initial_cpu = {.pc=0xdd8e, .a=0x69, .x=0xe1, .y=0x27, .sp=0xc8, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x01e1, .value=0x13}, {.addr=0xdd8e, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xdd8f, .a=0x7b, .x=0xe1, .y=0x27, .sp=0xc8, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x01e1, .value=0x13}, {.addr=0xdd8e, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xdd8e, .value=0x06, .type=IO_READ},
        {.addr=0xdd8f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e1, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0171) {
    const struct CPU_State initial_cpu = {.pc=0xc140, .a=0x36, .x=0xd9, .y=0x35, .sp=0x58, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x01d9, .value=0x65}, {.addr=0xc140, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xc141, .a=0x77, .x=0xd9, .y=0x35, .sp=0x58, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01d9, .value=0x65}, {.addr=0xc140, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xc140, .value=0x06, .type=IO_READ},
        {.addr=0xc141, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d9, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0172) {
    const struct CPU_State initial_cpu = {.pc=0xa89b, .a=0xd3, .x=0xd9, .y=0x24, .sp=0x2d, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x01d9, .value=0x14}, {.addr=0xa89b, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xa89c, .a=0xd7, .x=0xd9, .y=0x24, .sp=0x2d, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x01d9, .value=0x14}, {.addr=0xa89b, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xa89b, .value=0x06, .type=IO_READ},
        {.addr=0xa89c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d9, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0173) {
    const struct CPU_State initial_cpu = {.pc=0x8909, .a=0xae, .x=0xbf, .y=0xc3, .sp=0x35, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x00bf, .value=0x76}, {.addr=0x8909, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x890a, .a=0xfe, .x=0xbf, .y=0xc3, .sp=0x35, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x00bf, .value=0x76}, {.addr=0x8909, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x8909, .value=0x06, .type=IO_READ},
        {.addr=0x890a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bf, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0174) {
    const struct CPU_State initial_cpu = {.pc=0xa08f, .a=0x46, .x=0x26, .y=0xd3, .sp=0xe4, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x0026, .value=0xe2}, {.addr=0xa08f, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xa090, .a=0xe6, .x=0x26, .y=0xd3, .sp=0xe4, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x0026, .value=0xe2}, {.addr=0xa08f, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xa08f, .value=0x06, .type=IO_READ},
        {.addr=0xa090, .value=DUMMY, .type=IO_READ},
        {.addr=0x0026, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0175) {
    const struct CPU_State initial_cpu = {.pc=0xa855, .a=0x38, .x=0xa3, .y=0x3c, .sp=0x47, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x00a3, .value=0xdc}, {.addr=0xa855, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xa856, .a=0xfc, .x=0xa3, .y=0x3c, .sp=0x47, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x00a3, .value=0xdc}, {.addr=0xa855, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xa855, .value=0x06, .type=IO_READ},
        {.addr=0xa856, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a3, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0176) {
    const struct CPU_State initial_cpu = {.pc=0x109a, .a=0x4a, .x=0xe4, .y=0x62, .sp=0x5a, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x01e4, .value=0x0e}, {.addr=0x109a, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x109b, .a=0x4e, .x=0xe4, .y=0x62, .sp=0x5a, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x01e4, .value=0x0e}, {.addr=0x109a, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x109a, .value=0x06, .type=IO_READ},
        {.addr=0x109b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e4, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0177) {
    const struct CPU_State initial_cpu = {.pc=0x1680, .a=0x47, .x=0x73, .y=0x11, .sp=0x23, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x0073, .value=0xcf}, {.addr=0x1680, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x1681, .a=0xcf, .x=0x73, .y=0x11, .sp=0x23, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x0073, .value=0xcf}, {.addr=0x1680, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x1680, .value=0x06, .type=IO_READ},
        {.addr=0x1681, .value=DUMMY, .type=IO_READ},
        {.addr=0x0073, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0178) {
    const struct CPU_State initial_cpu = {.pc=0x9269, .a=0x67, .x=0xdd, .y=0x14, .sp=0xa0, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x01dd, .value=0x37}, {.addr=0x9269, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x926a, .a=0x77, .x=0xdd, .y=0x14, .sp=0xa0, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x01dd, .value=0x37}, {.addr=0x9269, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x9269, .value=0x06, .type=IO_READ},
        {.addr=0x926a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dd, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0179) {
    const struct CPU_State initial_cpu = {.pc=0xc2f3, .a=0xf5, .x=0x9e, .y=0x01, .sp=0x2b, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x009e, .value=0x66}, {.addr=0xc2f3, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xc2f4, .a=0xf7, .x=0x9e, .y=0x01, .sp=0x2b, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x009e, .value=0x66}, {.addr=0xc2f3, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xc2f3, .value=0x06, .type=IO_READ},
        {.addr=0xc2f4, .value=DUMMY, .type=IO_READ},
        {.addr=0x009e, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_017A) {
    const struct CPU_State initial_cpu = {.pc=0x27a3, .a=0x65, .x=0xcc, .y=0x2b, .sp=0xd3, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x01cc, .value=0x08}, {.addr=0x27a3, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x27a4, .a=0x6d, .x=0xcc, .y=0x2b, .sp=0xd3, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x01cc, .value=0x08}, {.addr=0x27a3, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x27a3, .value=0x06, .type=IO_READ},
        {.addr=0x27a4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cc, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_017B) {
    const struct CPU_State initial_cpu = {.pc=0xd9fa, .a=0x4f, .x=0xc2, .y=0x95, .sp=0xd0, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x00c2, .value=0x49}, {.addr=0xd9fa, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xd9fb, .a=0x4f, .x=0xc2, .y=0x95, .sp=0xd0, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x00c2, .value=0x49}, {.addr=0xd9fa, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xd9fa, .value=0x06, .type=IO_READ},
        {.addr=0xd9fb, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c2, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_017C) {
    const struct CPU_State initial_cpu = {.pc=0xeecc, .a=0xe9, .x=0x54, .y=0x69, .sp=0x69, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x0154, .value=0x42}, {.addr=0xeecc, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xeecd, .a=0xeb, .x=0x54, .y=0x69, .sp=0x69, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x0154, .value=0x42}, {.addr=0xeecc, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xeecc, .value=0x06, .type=IO_READ},
        {.addr=0xeecd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0154, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_017D) {
    const struct CPU_State initial_cpu = {.pc=0x0e3c, .a=0xbc, .x=0xae, .y=0x9c, .sp=0x92, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x01ae, .value=0x4c}, {.addr=0x0e3c, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x0e3d, .a=0xfc, .x=0xae, .y=0x9c, .sp=0x92, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x01ae, .value=0x4c}, {.addr=0x0e3c, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x0e3c, .value=0x06, .type=IO_READ},
        {.addr=0x0e3d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ae, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_017F) {
    const struct CPU_State initial_cpu = {.pc=0x44b6, .a=0xa7, .x=0xc8, .y=0xa4, .sp=0x28, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x00c8, .value=0x52}, {.addr=0x44b6, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x44b7, .a=0xf7, .x=0xc8, .y=0xa4, .sp=0x28, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x00c8, .value=0x52}, {.addr=0x44b6, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x44b6, .value=0x06, .type=IO_READ},
        {.addr=0x44b7, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c8, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0180) {
    const struct CPU_State initial_cpu = {.pc=0xb5f3, .a=0x71, .x=0x01, .y=0x92, .sp=0x1c, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x0101, .value=0x38}, {.addr=0xb5f3, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xb5f4, .a=0x79, .x=0x01, .y=0x92, .sp=0x1c, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x0101, .value=0x38}, {.addr=0xb5f3, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xb5f3, .value=0x06, .type=IO_READ},
        {.addr=0xb5f4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0101, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0181) {
    const struct CPU_State initial_cpu = {.pc=0x8b22, .a=0xe4, .x=0x7a, .y=0x20, .sp=0xb8, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x007a, .value=0x8a}, {.addr=0x8b22, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x8b23, .a=0xee, .x=0x7a, .y=0x20, .sp=0xb8, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x007a, .value=0x8a}, {.addr=0x8b22, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x8b22, .value=0x06, .type=IO_READ},
        {.addr=0x8b23, .value=DUMMY, .type=IO_READ},
        {.addr=0x007a, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0182) {
    const struct CPU_State initial_cpu = {.pc=0x8638, .a=0x6a, .x=0xb3, .y=0x6b, .sp=0x4a, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0x7a}, {.addr=0x8638, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x8639, .a=0x7a, .x=0xb3, .y=0x6b, .sp=0x4a, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0x7a}, {.addr=0x8638, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x8638, .value=0x06, .type=IO_READ},
        {.addr=0x8639, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b3, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0183) {
    const struct CPU_State initial_cpu = {.pc=0x36be, .a=0x5f, .x=0x70, .y=0x34, .sp=0xe4, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x0070, .value=0x08}, {.addr=0x36be, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x36bf, .a=0x5f, .x=0x70, .y=0x34, .sp=0xe4, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x0070, .value=0x08}, {.addr=0x36be, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x36be, .value=0x06, .type=IO_READ},
        {.addr=0x36bf, .value=DUMMY, .type=IO_READ},
        {.addr=0x0070, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0184) {
    const struct CPU_State initial_cpu = {.pc=0xc6d6, .a=0xf5, .x=0x9b, .y=0x34, .sp=0x2e, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x019b, .value=0x95}, {.addr=0xc6d6, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xc6d7, .a=0xf5, .x=0x9b, .y=0x34, .sp=0x2e, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x019b, .value=0x95}, {.addr=0xc6d6, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xc6d6, .value=0x06, .type=IO_READ},
        {.addr=0xc6d7, .value=DUMMY, .type=IO_READ},
        {.addr=0x019b, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0185) {
    const struct CPU_State initial_cpu = {.pc=0x2e27, .a=0xdb, .x=0x1a, .y=0xc7, .sp=0x93, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x001a, .value=0x77}, {.addr=0x2e27, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x2e28, .a=0xff, .x=0x1a, .y=0xc7, .sp=0x93, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x001a, .value=0x77}, {.addr=0x2e27, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x2e27, .value=0x06, .type=IO_READ},
        {.addr=0x2e28, .value=DUMMY, .type=IO_READ},
        {.addr=0x001a, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0186) {
    const struct CPU_State initial_cpu = {.pc=0x31ae, .a=0xab, .x=0x60, .y=0xdb, .sp=0x6c, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x0160, .value=0xa1}, {.addr=0x31ae, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x31af, .a=0xab, .x=0x60, .y=0xdb, .sp=0x6c, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x0160, .value=0xa1}, {.addr=0x31ae, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x31ae, .value=0x06, .type=IO_READ},
        {.addr=0x31af, .value=DUMMY, .type=IO_READ},
        {.addr=0x0160, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0187) {
    const struct CPU_State initial_cpu = {.pc=0x9940, .a=0x39, .x=0x28, .y=0xed, .sp=0x3b, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x0128, .value=0xba}, {.addr=0x9940, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x9941, .a=0xbb, .x=0x28, .y=0xed, .sp=0x3b, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0128, .value=0xba}, {.addr=0x9940, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x9940, .value=0x06, .type=IO_READ},
        {.addr=0x9941, .value=DUMMY, .type=IO_READ},
        {.addr=0x0128, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0188) {
    const struct CPU_State initial_cpu = {.pc=0x8849, .a=0x9d, .x=0x0e, .y=0x0b, .sp=0x1a, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x000e, .value=0xeb}, {.addr=0x8849, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x884a, .a=0xff, .x=0x0e, .y=0x0b, .sp=0x1a, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x000e, .value=0xeb}, {.addr=0x8849, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x8849, .value=0x06, .type=IO_READ},
        {.addr=0x884a, .value=DUMMY, .type=IO_READ},
        {.addr=0x000e, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0189) {
    const struct CPU_State initial_cpu = {.pc=0xb862, .a=0x1e, .x=0x38, .y=0x35, .sp=0xa0, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x0038, .value=0x17}, {.addr=0xb862, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xb863, .a=0x1f, .x=0x38, .y=0x35, .sp=0xa0, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x0038, .value=0x17}, {.addr=0xb862, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xb862, .value=0x06, .type=IO_READ},
        {.addr=0xb863, .value=DUMMY, .type=IO_READ},
        {.addr=0x0038, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_018A) {
    const struct CPU_State initial_cpu = {.pc=0x8e62, .a=0xcd, .x=0x43, .y=0x55, .sp=0x59, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0x3e}, {.addr=0x8e62, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x8e63, .a=0xff, .x=0x43, .y=0x55, .sp=0x59, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0x3e}, {.addr=0x8e62, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x8e62, .value=0x06, .type=IO_READ},
        {.addr=0x8e63, .value=DUMMY, .type=IO_READ},
        {.addr=0x0143, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_018B) {
    const struct CPU_State initial_cpu = {.pc=0x123f, .a=0x92, .x=0xb1, .y=0xf1, .sp=0x6c, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x00b1, .value=0x0a}, {.addr=0x123f, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x1240, .a=0x9a, .x=0xb1, .y=0xf1, .sp=0x6c, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x00b1, .value=0x0a}, {.addr=0x123f, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x123f, .value=0x06, .type=IO_READ},
        {.addr=0x1240, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b1, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_018C) {
    const struct CPU_State initial_cpu = {.pc=0xf2a3, .a=0x5c, .x=0x16, .y=0x2b, .sp=0x3b, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x0116, .value=0xea}, {.addr=0xf2a3, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xf2a4, .a=0xfe, .x=0x16, .y=0x2b, .sp=0x3b, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x0116, .value=0xea}, {.addr=0xf2a3, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xf2a3, .value=0x06, .type=IO_READ},
        {.addr=0xf2a4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0116, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_018E) {
    const struct CPU_State initial_cpu = {.pc=0xc5af, .a=0x26, .x=0x06, .y=0xd6, .sp=0x11, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x0006, .value=0xde}, {.addr=0xc5af, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xc5b0, .a=0xfe, .x=0x06, .y=0xd6, .sp=0x11, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0006, .value=0xde}, {.addr=0xc5af, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xc5af, .value=0x06, .type=IO_READ},
        {.addr=0xc5b0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0006, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_018F) {
    const struct CPU_State initial_cpu = {.pc=0xa7c0, .a=0x56, .x=0x29, .y=0x5e, .sp=0xbe, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x0029, .value=0xe5}, {.addr=0xa7c0, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xa7c1, .a=0xf7, .x=0x29, .y=0x5e, .sp=0xbe, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0029, .value=0xe5}, {.addr=0xa7c0, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xa7c0, .value=0x06, .type=IO_READ},
        {.addr=0xa7c1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0029, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0190) {
    const struct CPU_State initial_cpu = {.pc=0xea04, .a=0x89, .x=0x60, .y=0xae, .sp=0x0d, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x0060, .value=0x31}, {.addr=0xea04, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xea05, .a=0xb9, .x=0x60, .y=0xae, .sp=0x0d, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0060, .value=0x31}, {.addr=0xea04, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xea04, .value=0x06, .type=IO_READ},
        {.addr=0xea05, .value=DUMMY, .type=IO_READ},
        {.addr=0x0060, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0191) {
    const struct CPU_State initial_cpu = {.pc=0xa71e, .a=0x03, .x=0x99, .y=0xc3, .sp=0xb0, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x0199, .value=0x33}, {.addr=0xa71e, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xa71f, .a=0x33, .x=0x99, .y=0xc3, .sp=0xb0, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x0199, .value=0x33}, {.addr=0xa71e, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xa71e, .value=0x06, .type=IO_READ},
        {.addr=0xa71f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0199, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0193) {
    const struct CPU_State initial_cpu = {.pc=0x94f4, .a=0x50, .x=0xd7, .y=0x26, .sp=0xc5, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x00d7, .value=0x76}, {.addr=0x94f4, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x94f5, .a=0x76, .x=0xd7, .y=0x26, .sp=0xc5, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x00d7, .value=0x76}, {.addr=0x94f4, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x94f4, .value=0x06, .type=IO_READ},
        {.addr=0x94f5, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d7, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0194) {
    const struct CPU_State initial_cpu = {.pc=0xb417, .a=0xec, .x=0x72, .y=0x97, .sp=0x73, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0xd2}, {.addr=0xb417, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xb418, .a=0xfe, .x=0x72, .y=0x97, .sp=0x73, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0xd2}, {.addr=0xb417, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xb417, .value=0x06, .type=IO_READ},
        {.addr=0xb418, .value=DUMMY, .type=IO_READ},
        {.addr=0x0172, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0195) {
    const struct CPU_State initial_cpu = {.pc=0xb20e, .a=0x3c, .x=0x65, .y=0x07, .sp=0xdc, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x0165, .value=0x6d}, {.addr=0xb20e, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xb20f, .a=0x7d, .x=0x65, .y=0x07, .sp=0xdc, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x0165, .value=0x6d}, {.addr=0xb20e, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xb20e, .value=0x06, .type=IO_READ},
        {.addr=0xb20f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0165, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0196) {
    const struct CPU_State initial_cpu = {.pc=0xc7c4, .a=0xaa, .x=0x47, .y=0xa5, .sp=0x2a, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x0047, .value=0xd8}, {.addr=0xc7c4, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xc7c5, .a=0xfa, .x=0x47, .y=0xa5, .sp=0x2a, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x0047, .value=0xd8}, {.addr=0xc7c4, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xc7c4, .value=0x06, .type=IO_READ},
        {.addr=0xc7c5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0047, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0197) {
    const struct CPU_State initial_cpu = {.pc=0xb995, .a=0xaf, .x=0x7c, .y=0x51, .sp=0xa2, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0xc5}, {.addr=0xb995, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xb996, .a=0xef, .x=0x7c, .y=0x51, .sp=0xa2, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0xc5}, {.addr=0xb995, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xb995, .value=0x06, .type=IO_READ},
        {.addr=0xb996, .value=DUMMY, .type=IO_READ},
        {.addr=0x017c, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0198) {
    const struct CPU_State initial_cpu = {.pc=0xdccd, .a=0x46, .x=0xcd, .y=0x88, .sp=0x08, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x01cd, .value=0x42}, {.addr=0xdccd, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xdcce, .a=0x46, .x=0xcd, .y=0x88, .sp=0x08, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x01cd, .value=0x42}, {.addr=0xdccd, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xdccd, .value=0x06, .type=IO_READ},
        {.addr=0xdcce, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cd, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0199) {
    const struct CPU_State initial_cpu = {.pc=0x2172, .a=0x36, .x=0x28, .y=0xfd, .sp=0xee, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x0028, .value=0x1f}, {.addr=0x2172, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x2173, .a=0x3f, .x=0x28, .y=0xfd, .sp=0xee, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x0028, .value=0x1f}, {.addr=0x2172, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x2172, .value=0x06, .type=IO_READ},
        {.addr=0x2173, .value=DUMMY, .type=IO_READ},
        {.addr=0x0028, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_019A) {
    const struct CPU_State initial_cpu = {.pc=0x9694, .a=0xa9, .x=0xe7, .y=0x76, .sp=0x3d, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x00e7, .value=0xd4}, {.addr=0x9694, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x9695, .a=0xfd, .x=0xe7, .y=0x76, .sp=0x3d, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x00e7, .value=0xd4}, {.addr=0x9694, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x9694, .value=0x06, .type=IO_READ},
        {.addr=0x9695, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e7, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_019B) {
    const struct CPU_State initial_cpu = {.pc=0x0f0e, .a=0xae, .x=0x62, .y=0x6e, .sp=0x00, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0x03}, {.addr=0x0f0e, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x0f0f, .a=0xaf, .x=0x62, .y=0x6e, .sp=0x00, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0x03}, {.addr=0x0f0e, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x0f0e, .value=0x06, .type=IO_READ},
        {.addr=0x0f0f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0162, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_019C) {
    const struct CPU_State initial_cpu = {.pc=0x25fe, .a=0x1c, .x=0xa6, .y=0xc3, .sp=0xac, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x01a6, .value=0x0b}, {.addr=0x25fe, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x25ff, .a=0x1f, .x=0xa6, .y=0xc3, .sp=0xac, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x01a6, .value=0x0b}, {.addr=0x25fe, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x25fe, .value=0x06, .type=IO_READ},
        {.addr=0x25ff, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a6, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_019D) {
    const struct CPU_State initial_cpu = {.pc=0x02fc, .a=0xaa, .x=0x8f, .y=0xba, .sp=0x3d, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x008f, .value=0x87}, {.addr=0x02fc, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x02fd, .a=0xaf, .x=0x8f, .y=0xba, .sp=0x3d, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x008f, .value=0x87}, {.addr=0x02fc, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x02fc, .value=0x06, .type=IO_READ},
        {.addr=0x02fd, .value=DUMMY, .type=IO_READ},
        {.addr=0x008f, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_019E) {
    const struct CPU_State initial_cpu = {.pc=0xdbf7, .a=0x2c, .x=0xca, .y=0x30, .sp=0xf8, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x01ca, .value=0x59}, {.addr=0xdbf7, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xdbf8, .a=0x7d, .x=0xca, .y=0x30, .sp=0xf8, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x01ca, .value=0x59}, {.addr=0xdbf7, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xdbf7, .value=0x06, .type=IO_READ},
        {.addr=0xdbf8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ca, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_019F) {
    const struct CPU_State initial_cpu = {.pc=0x26bf, .a=0x93, .x=0xdf, .y=0xa8, .sp=0x02, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0xd5}, {.addr=0x26bf, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x26c0, .a=0xd7, .x=0xdf, .y=0xa8, .sp=0x02, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0xd5}, {.addr=0x26bf, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x26bf, .value=0x06, .type=IO_READ},
        {.addr=0x26c0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01df, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01A0) {
    const struct CPU_State initial_cpu = {.pc=0x799f, .a=0x29, .x=0x6b, .y=0x25, .sp=0x9d, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x016b, .value=0x8c}, {.addr=0x799f, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x79a0, .a=0xad, .x=0x6b, .y=0x25, .sp=0x9d, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x016b, .value=0x8c}, {.addr=0x799f, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x799f, .value=0x06, .type=IO_READ},
        {.addr=0x79a0, .value=DUMMY, .type=IO_READ},
        {.addr=0x016b, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01A1) {
    const struct CPU_State initial_cpu = {.pc=0x74e3, .a=0xaf, .x=0x5d, .y=0x0d, .sp=0x4f, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x005d, .value=0xc2}, {.addr=0x74e3, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x74e4, .a=0xef, .x=0x5d, .y=0x0d, .sp=0x4f, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x005d, .value=0xc2}, {.addr=0x74e3, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x74e3, .value=0x06, .type=IO_READ},
        {.addr=0x74e4, .value=DUMMY, .type=IO_READ},
        {.addr=0x005d, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01A2) {
    const struct CPU_State initial_cpu = {.pc=0xff85, .a=0xdd, .x=0xfc, .y=0x46, .sp=0x8c, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x06}, {.addr=0xff85, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xff86, .a=0xdf, .x=0xfc, .y=0x46, .sp=0x8c, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0x06}, {.addr=0xff85, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xff85, .value=0x06, .type=IO_READ},
        {.addr=0xff86, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fc, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01A3) {
    const struct CPU_State initial_cpu = {.pc=0x4402, .a=0xe6, .x=0xe6, .y=0xb0, .sp=0xf4, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0x3b}, {.addr=0x4402, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x4403, .a=0xff, .x=0xe6, .y=0xb0, .sp=0xf4, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0x3b}, {.addr=0x4402, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x4402, .value=0x06, .type=IO_READ},
        {.addr=0x4403, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e6, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01A4) {
    const struct CPU_State initial_cpu = {.pc=0x0a7d, .a=0xae, .x=0x1d, .y=0x5d, .sp=0x3e, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x001d, .value=0xaf}, {.addr=0x0a7d, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x0a7e, .a=0xaf, .x=0x1d, .y=0x5d, .sp=0x3e, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x001d, .value=0xaf}, {.addr=0x0a7d, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x0a7d, .value=0x06, .type=IO_READ},
        {.addr=0x0a7e, .value=DUMMY, .type=IO_READ},
        {.addr=0x001d, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01A5) {
    const struct CPU_State initial_cpu = {.pc=0xb39b, .a=0xc7, .x=0x86, .y=0xa3, .sp=0xde, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x0086, .value=0x0e}, {.addr=0xb39b, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xb39c, .a=0xcf, .x=0x86, .y=0xa3, .sp=0xde, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x0086, .value=0x0e}, {.addr=0xb39b, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xb39b, .value=0x06, .type=IO_READ},
        {.addr=0xb39c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0086, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01A6) {
    const struct CPU_State initial_cpu = {.pc=0x52be, .a=0x75, .x=0x3b, .y=0xfd, .sp=0x89, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x013b, .value=0x0b}, {.addr=0x52be, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x52bf, .a=0x7f, .x=0x3b, .y=0xfd, .sp=0x89, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x013b, .value=0x0b}, {.addr=0x52be, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x52be, .value=0x06, .type=IO_READ},
        {.addr=0x52bf, .value=DUMMY, .type=IO_READ},
        {.addr=0x013b, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01A7) {
    const struct CPU_State initial_cpu = {.pc=0x84e0, .a=0xc8, .x=0x3f, .y=0x04, .sp=0xb8, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x003f, .value=0x21}, {.addr=0x84e0, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x84e1, .a=0xe9, .x=0x3f, .y=0x04, .sp=0xb8, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x003f, .value=0x21}, {.addr=0x84e0, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x84e0, .value=0x06, .type=IO_READ},
        {.addr=0x84e1, .value=DUMMY, .type=IO_READ},
        {.addr=0x003f, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01A8) {
    const struct CPU_State initial_cpu = {.pc=0xc4d4, .a=0xa2, .x=0xea, .y=0x3e, .sp=0x63, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x00ea, .value=0x8e}, {.addr=0xc4d4, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xc4d5, .a=0xae, .x=0xea, .y=0x3e, .sp=0x63, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x00ea, .value=0x8e}, {.addr=0xc4d4, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xc4d4, .value=0x06, .type=IO_READ},
        {.addr=0xc4d5, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ea, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01A9) {
    const struct CPU_State initial_cpu = {.pc=0x2b79, .a=0x78, .x=0xa9, .y=0x98, .sp=0xa1, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x00a9, .value=0x25}, {.addr=0x2b79, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x2b7a, .a=0x7d, .x=0xa9, .y=0x98, .sp=0xa1, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x00a9, .value=0x25}, {.addr=0x2b79, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x2b79, .value=0x06, .type=IO_READ},
        {.addr=0x2b7a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a9, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01AA) {
    const struct CPU_State initial_cpu = {.pc=0x61a6, .a=0x21, .x=0xdd, .y=0xa5, .sp=0xd9, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x00dd, .value=0x19}, {.addr=0x61a6, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x61a7, .a=0x39, .x=0xdd, .y=0xa5, .sp=0xd9, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x00dd, .value=0x19}, {.addr=0x61a6, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x61a6, .value=0x06, .type=IO_READ},
        {.addr=0x61a7, .value=DUMMY, .type=IO_READ},
        {.addr=0x00dd, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01AB) {
    const struct CPU_State initial_cpu = {.pc=0x65f2, .a=0x8f, .x=0xfb, .y=0x67, .sp=0x4b, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x01fb, .value=0x8b}, {.addr=0x65f2, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x65f3, .a=0x8f, .x=0xfb, .y=0x67, .sp=0x4b, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x01fb, .value=0x8b}, {.addr=0x65f2, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x65f2, .value=0x06, .type=IO_READ},
        {.addr=0x65f3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fb, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01AC) {
    const struct CPU_State initial_cpu = {.pc=0x343c, .a=0x8d, .x=0x41, .y=0xd6, .sp=0x3a, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x0041, .value=0xcf}, {.addr=0x343c, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x343d, .a=0xcf, .x=0x41, .y=0xd6, .sp=0x3a, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x0041, .value=0xcf}, {.addr=0x343c, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x343c, .value=0x06, .type=IO_READ},
        {.addr=0x343d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0041, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01AD) {
    const struct CPU_State initial_cpu = {.pc=0x988d, .a=0xe4, .x=0x99, .y=0xd7, .sp=0x23, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x0199, .value=0xa9}, {.addr=0x988d, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x988e, .a=0xed, .x=0x99, .y=0xd7, .sp=0x23, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x0199, .value=0xa9}, {.addr=0x988d, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x988d, .value=0x06, .type=IO_READ},
        {.addr=0x988e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0199, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01AE) {
    const struct CPU_State initial_cpu = {.pc=0x434c, .a=0x35, .x=0xba, .y=0x4f, .sp=0x6a, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x00ba, .value=0x15}, {.addr=0x434c, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x434d, .a=0x35, .x=0xba, .y=0x4f, .sp=0x6a, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x00ba, .value=0x15}, {.addr=0x434c, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x434c, .value=0x06, .type=IO_READ},
        {.addr=0x434d, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ba, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01AF) {
    const struct CPU_State initial_cpu = {.pc=0x04b9, .a=0x01, .x=0xa0, .y=0x20, .sp=0xae, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x00a0, .value=0xd7}, {.addr=0x04b9, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x04ba, .a=0xd7, .x=0xa0, .y=0x20, .sp=0xae, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x00a0, .value=0xd7}, {.addr=0x04b9, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x04b9, .value=0x06, .type=IO_READ},
        {.addr=0x04ba, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a0, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01B0) {
    const struct CPU_State initial_cpu = {.pc=0x923a, .a=0x31, .x=0x7b, .y=0xa7, .sp=0xe3, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0x4f}, {.addr=0x923a, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x923b, .a=0x7f, .x=0x7b, .y=0xa7, .sp=0xe3, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0x4f}, {.addr=0x923a, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x923a, .value=0x06, .type=IO_READ},
        {.addr=0x923b, .value=DUMMY, .type=IO_READ},
        {.addr=0x017b, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01B1) {
    const struct CPU_State initial_cpu = {.pc=0x0cd8, .a=0x92, .x=0x2a, .y=0x94, .sp=0xcd, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x002a, .value=0xb2}, {.addr=0x0cd8, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x0cd9, .a=0xb2, .x=0x2a, .y=0x94, .sp=0xcd, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x002a, .value=0xb2}, {.addr=0x0cd8, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x0cd8, .value=0x06, .type=IO_READ},
        {.addr=0x0cd9, .value=DUMMY, .type=IO_READ},
        {.addr=0x002a, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x8d48, .a=0x2d, .x=0xd6, .y=0xc7, .sp=0xc6, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x01d6, .value=0x0c}, {.addr=0x8d48, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x8d49, .a=0x2d, .x=0xd6, .y=0xc7, .sp=0xc6, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x01d6, .value=0x0c}, {.addr=0x8d48, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x8d48, .value=0x06, .type=IO_READ},
        {.addr=0x8d49, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d6, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01B3) {
    const struct CPU_State initial_cpu = {.pc=0x4b77, .a=0xa1, .x=0x61, .y=0xb9, .sp=0x0a, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0xbc}, {.addr=0x4b77, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x4b78, .a=0xbd, .x=0x61, .y=0xb9, .sp=0x0a, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0xbc}, {.addr=0x4b77, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x4b77, .value=0x06, .type=IO_READ},
        {.addr=0x4b78, .value=DUMMY, .type=IO_READ},
        {.addr=0x0161, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01B4) {
    const struct CPU_State initial_cpu = {.pc=0xc837, .a=0x17, .x=0x64, .y=0x98, .sp=0x52, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x0064, .value=0x79}, {.addr=0xc837, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xc838, .a=0x7f, .x=0x64, .y=0x98, .sp=0x52, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0064, .value=0x79}, {.addr=0xc837, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xc837, .value=0x06, .type=IO_READ},
        {.addr=0xc838, .value=DUMMY, .type=IO_READ},
        {.addr=0x0064, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01B5) {
    const struct CPU_State initial_cpu = {.pc=0xb4e0, .a=0x6b, .x=0x92, .y=0xd3, .sp=0x29, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x0092, .value=0x61}, {.addr=0xb4e0, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xb4e1, .a=0x6b, .x=0x92, .y=0xd3, .sp=0x29, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0092, .value=0x61}, {.addr=0xb4e0, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xb4e0, .value=0x06, .type=IO_READ},
        {.addr=0xb4e1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0092, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01B6) {
    const struct CPU_State initial_cpu = {.pc=0xbe2d, .a=0xfd, .x=0x5a, .y=0x1f, .sp=0x42, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x005a, .value=0x63}, {.addr=0xbe2d, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xbe2e, .a=0xff, .x=0x5a, .y=0x1f, .sp=0x42, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x005a, .value=0x63}, {.addr=0xbe2d, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xbe2d, .value=0x06, .type=IO_READ},
        {.addr=0xbe2e, .value=DUMMY, .type=IO_READ},
        {.addr=0x005a, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01B7) {
    const struct CPU_State initial_cpu = {.pc=0x6091, .a=0xf8, .x=0xca, .y=0x19, .sp=0x40, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x01ca, .value=0x83}, {.addr=0x6091, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x6092, .a=0xfb, .x=0xca, .y=0x19, .sp=0x40, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x01ca, .value=0x83}, {.addr=0x6091, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x6091, .value=0x06, .type=IO_READ},
        {.addr=0x6092, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ca, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01B8) {
    const struct CPU_State initial_cpu = {.pc=0x694c, .a=0xdd, .x=0xb5, .y=0x9f, .sp=0xcc, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x01b5, .value=0x3d}, {.addr=0x694c, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x694d, .a=0xfd, .x=0xb5, .y=0x9f, .sp=0xcc, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x01b5, .value=0x3d}, {.addr=0x694c, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x694c, .value=0x06, .type=IO_READ},
        {.addr=0x694d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b5, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01B9) {
    const struct CPU_State initial_cpu = {.pc=0x78ef, .a=0x78, .x=0xfe, .y=0x76, .sp=0xdd, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x01fe, .value=0x8c}, {.addr=0x78ef, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x78f0, .a=0xfc, .x=0xfe, .y=0x76, .sp=0xdd, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x01fe, .value=0x8c}, {.addr=0x78ef, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x78ef, .value=0x06, .type=IO_READ},
        {.addr=0x78f0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fe, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01BA) {
    const struct CPU_State initial_cpu = {.pc=0xb1a4, .a=0x85, .x=0xc3, .y=0x8d, .sp=0x99, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x00c3, .value=0xa3}, {.addr=0xb1a4, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xb1a5, .a=0xa7, .x=0xc3, .y=0x8d, .sp=0x99, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x00c3, .value=0xa3}, {.addr=0xb1a4, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xb1a4, .value=0x06, .type=IO_READ},
        {.addr=0xb1a5, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c3, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01BB) {
    const struct CPU_State initial_cpu = {.pc=0x8e13, .a=0xc2, .x=0x50, .y=0x68, .sp=0xfb, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x0150, .value=0xd0}, {.addr=0x8e13, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x8e14, .a=0xd2, .x=0x50, .y=0x68, .sp=0xfb, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x0150, .value=0xd0}, {.addr=0x8e13, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x8e13, .value=0x06, .type=IO_READ},
        {.addr=0x8e14, .value=DUMMY, .type=IO_READ},
        {.addr=0x0150, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01BC) {
    const struct CPU_State initial_cpu = {.pc=0x0ce2, .a=0x54, .x=0x16, .y=0x43, .sp=0xc6, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x0016, .value=0xa3}, {.addr=0x0ce2, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x0ce3, .a=0xf7, .x=0x16, .y=0x43, .sp=0xc6, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0016, .value=0xa3}, {.addr=0x0ce2, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x0ce2, .value=0x06, .type=IO_READ},
        {.addr=0x0ce3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0016, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01BD) {
    const struct CPU_State initial_cpu = {.pc=0x4347, .a=0xee, .x=0x0d, .y=0xcb, .sp=0x4a, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x000d, .value=0xa7}, {.addr=0x4347, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x4348, .a=0xef, .x=0x0d, .y=0xcb, .sp=0x4a, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x000d, .value=0xa7}, {.addr=0x4347, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x4347, .value=0x06, .type=IO_READ},
        {.addr=0x4348, .value=DUMMY, .type=IO_READ},
        {.addr=0x000d, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01BE) {
    const struct CPU_State initial_cpu = {.pc=0xfb4f, .a=0xae, .x=0x45, .y=0x3a, .sp=0xc1, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0x5b}, {.addr=0xfb4f, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xfb50, .a=0xff, .x=0x45, .y=0x3a, .sp=0xc1, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0x5b}, {.addr=0xfb4f, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xfb4f, .value=0x06, .type=IO_READ},
        {.addr=0xfb50, .value=DUMMY, .type=IO_READ},
        {.addr=0x0145, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01BF) {
    const struct CPU_State initial_cpu = {.pc=0x8896, .a=0x30, .x=0x7a, .y=0xdc, .sp=0x37, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x017a, .value=0x10}, {.addr=0x8896, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x8897, .a=0x30, .x=0x7a, .y=0xdc, .sp=0x37, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x017a, .value=0x10}, {.addr=0x8896, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x8896, .value=0x06, .type=IO_READ},
        {.addr=0x8897, .value=DUMMY, .type=IO_READ},
        {.addr=0x017a, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01C0) {
    const struct CPU_State initial_cpu = {.pc=0xd18a, .a=0xe3, .x=0x8c, .y=0x61, .sp=0x14, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x008c, .value=0x7c}, {.addr=0xd18a, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xd18b, .a=0xff, .x=0x8c, .y=0x61, .sp=0x14, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x008c, .value=0x7c}, {.addr=0xd18a, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xd18a, .value=0x06, .type=IO_READ},
        {.addr=0xd18b, .value=DUMMY, .type=IO_READ},
        {.addr=0x008c, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01C1) {
    const struct CPU_State initial_cpu = {.pc=0xe725, .a=0x4c, .x=0x36, .y=0x68, .sp=0x6c, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x0136, .value=0xfd}, {.addr=0xe725, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xe726, .a=0xfd, .x=0x36, .y=0x68, .sp=0x6c, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x0136, .value=0xfd}, {.addr=0xe725, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xe725, .value=0x06, .type=IO_READ},
        {.addr=0xe726, .value=DUMMY, .type=IO_READ},
        {.addr=0x0136, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01C2) {
    const struct CPU_State initial_cpu = {.pc=0xec0c, .a=0x50, .x=0xe6, .y=0xe6, .sp=0x8d, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x00e6, .value=0x41}, {.addr=0xec0c, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xec0d, .a=0x51, .x=0xe6, .y=0xe6, .sp=0x8d, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x00e6, .value=0x41}, {.addr=0xec0c, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xec0c, .value=0x06, .type=IO_READ},
        {.addr=0xec0d, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e6, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01C3) {
    const struct CPU_State initial_cpu = {.pc=0x4fcf, .a=0xbb, .x=0xab, .y=0x9a, .sp=0xd9, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x01ab, .value=0x7f}, {.addr=0x4fcf, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x4fd0, .a=0xff, .x=0xab, .y=0x9a, .sp=0xd9, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x01ab, .value=0x7f}, {.addr=0x4fcf, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x4fcf, .value=0x06, .type=IO_READ},
        {.addr=0x4fd0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ab, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01C4) {
    const struct CPU_State initial_cpu = {.pc=0x35a8, .a=0x34, .x=0xeb, .y=0x46, .sp=0xa7, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x00eb, .value=0xa5}, {.addr=0x35a8, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x35a9, .a=0xb5, .x=0xeb, .y=0x46, .sp=0xa7, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x00eb, .value=0xa5}, {.addr=0x35a8, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x35a8, .value=0x06, .type=IO_READ},
        {.addr=0x35a9, .value=DUMMY, .type=IO_READ},
        {.addr=0x00eb, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01C5) {
    const struct CPU_State initial_cpu = {.pc=0x40cd, .a=0x88, .x=0x0d, .y=0x90, .sp=0x57, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x010d, .value=0xe5}, {.addr=0x40cd, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x40ce, .a=0xed, .x=0x0d, .y=0x90, .sp=0x57, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x010d, .value=0xe5}, {.addr=0x40cd, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x40cd, .value=0x06, .type=IO_READ},
        {.addr=0x40ce, .value=DUMMY, .type=IO_READ},
        {.addr=0x010d, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01C6) {
    const struct CPU_State initial_cpu = {.pc=0x2c55, .a=0x9e, .x=0x1f, .y=0x6e, .sp=0xfe, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x001f, .value=0x78}, {.addr=0x2c55, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x2c56, .a=0xfe, .x=0x1f, .y=0x6e, .sp=0xfe, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x001f, .value=0x78}, {.addr=0x2c55, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x2c55, .value=0x06, .type=IO_READ},
        {.addr=0x2c56, .value=DUMMY, .type=IO_READ},
        {.addr=0x001f, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01C7) {
    const struct CPU_State initial_cpu = {.pc=0xdf65, .a=0x7a, .x=0x05, .y=0xd7, .sp=0xdc, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x0105, .value=0x20}, {.addr=0xdf65, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xdf66, .a=0x7a, .x=0x05, .y=0xd7, .sp=0xdc, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x0105, .value=0x20}, {.addr=0xdf65, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xdf65, .value=0x06, .type=IO_READ},
        {.addr=0xdf66, .value=DUMMY, .type=IO_READ},
        {.addr=0x0105, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01C8) {
    const struct CPU_State initial_cpu = {.pc=0x8321, .a=0x65, .x=0xb2, .y=0x9b, .sp=0x2d, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x01b2, .value=0xaf}, {.addr=0x8321, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x8322, .a=0xef, .x=0xb2, .y=0x9b, .sp=0x2d, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x01b2, .value=0xaf}, {.addr=0x8321, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x8321, .value=0x06, .type=IO_READ},
        {.addr=0x8322, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b2, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01C9) {
    const struct CPU_State initial_cpu = {.pc=0xe632, .a=0x5a, .x=0xf4, .y=0x34, .sp=0x57, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x01f4, .value=0x44}, {.addr=0xe632, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xe633, .a=0x5e, .x=0xf4, .y=0x34, .sp=0x57, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01f4, .value=0x44}, {.addr=0xe632, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xe632, .value=0x06, .type=IO_READ},
        {.addr=0xe633, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f4, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01CA) {
    const struct CPU_State initial_cpu = {.pc=0x0853, .a=0xf3, .x=0x69, .y=0xd0, .sp=0x6e, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x0069, .value=0x7e}, {.addr=0x0853, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x0854, .a=0xff, .x=0x69, .y=0xd0, .sp=0x6e, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x0069, .value=0x7e}, {.addr=0x0853, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x0853, .value=0x06, .type=IO_READ},
        {.addr=0x0854, .value=DUMMY, .type=IO_READ},
        {.addr=0x0069, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01CB) {
    const struct CPU_State initial_cpu = {.pc=0xf963, .a=0x96, .x=0x2d, .y=0xf7, .sp=0x8b, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x012d, .value=0xf3}, {.addr=0xf963, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xf964, .a=0xf7, .x=0x2d, .y=0xf7, .sp=0x8b, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x012d, .value=0xf3}, {.addr=0xf963, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xf963, .value=0x06, .type=IO_READ},
        {.addr=0xf964, .value=DUMMY, .type=IO_READ},
        {.addr=0x012d, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01CC) {
    const struct CPU_State initial_cpu = {.pc=0x129d, .a=0x0d, .x=0x06, .y=0xfb, .sp=0xb7, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0x15}, {.addr=0x129d, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x129e, .a=0x1d, .x=0x06, .y=0xfb, .sp=0xb7, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0x15}, {.addr=0x129d, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x129d, .value=0x06, .type=IO_READ},
        {.addr=0x129e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0106, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01CD) {
    const struct CPU_State initial_cpu = {.pc=0xae96, .a=0x31, .x=0x17, .y=0x3c, .sp=0x00, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x0017, .value=0x96}, {.addr=0xae96, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xae97, .a=0xb7, .x=0x17, .y=0x3c, .sp=0x00, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x0017, .value=0x96}, {.addr=0xae96, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xae96, .value=0x06, .type=IO_READ},
        {.addr=0xae97, .value=DUMMY, .type=IO_READ},
        {.addr=0x0017, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01CE) {
    const struct CPU_State initial_cpu = {.pc=0xb624, .a=0xa9, .x=0x45, .y=0x77, .sp=0x8e, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0xc5}, {.addr=0xb624, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xb625, .a=0xed, .x=0x45, .y=0x77, .sp=0x8e, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0xc5}, {.addr=0xb624, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xb624, .value=0x06, .type=IO_READ},
        {.addr=0xb625, .value=DUMMY, .type=IO_READ},
        {.addr=0x0145, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01CF) {
    const struct CPU_State initial_cpu = {.pc=0xe6e6, .a=0x1c, .x=0x7d, .y=0x20, .sp=0x62, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0x54}, {.addr=0xe6e6, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xe6e7, .a=0x5c, .x=0x7d, .y=0x20, .sp=0x62, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0x54}, {.addr=0xe6e6, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xe6e6, .value=0x06, .type=IO_READ},
        {.addr=0xe6e7, .value=DUMMY, .type=IO_READ},
        {.addr=0x017d, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01D0) {
    const struct CPU_State initial_cpu = {.pc=0x92d5, .a=0x0b, .x=0x15, .y=0x3f, .sp=0xd9, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x0015, .value=0xc5}, {.addr=0x92d5, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x92d6, .a=0xcf, .x=0x15, .y=0x3f, .sp=0xd9, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x0015, .value=0xc5}, {.addr=0x92d5, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x92d5, .value=0x06, .type=IO_READ},
        {.addr=0x92d6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0015, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01D1) {
    const struct CPU_State initial_cpu = {.pc=0x1de7, .a=0x24, .x=0x91, .y=0x0e, .sp=0x6b, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x0191, .value=0x03}, {.addr=0x1de7, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x1de8, .a=0x27, .x=0x91, .y=0x0e, .sp=0x6b, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x0191, .value=0x03}, {.addr=0x1de7, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x1de7, .value=0x06, .type=IO_READ},
        {.addr=0x1de8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0191, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01D2) {
    const struct CPU_State initial_cpu = {.pc=0x4f43, .a=0x67, .x=0x4f, .y=0x4c, .sp=0x7c, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x004f, .value=0x45}, {.addr=0x4f43, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x4f44, .a=0x67, .x=0x4f, .y=0x4c, .sp=0x7c, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x004f, .value=0x45}, {.addr=0x4f43, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x4f43, .value=0x06, .type=IO_READ},
        {.addr=0x4f44, .value=DUMMY, .type=IO_READ},
        {.addr=0x004f, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01D3) {
    const struct CPU_State initial_cpu = {.pc=0xa6a1, .a=0x4f, .x=0xd1, .y=0xf6, .sp=0x07, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x00d1, .value=0x31}, {.addr=0xa6a1, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xa6a2, .a=0x7f, .x=0xd1, .y=0xf6, .sp=0x07, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x00d1, .value=0x31}, {.addr=0xa6a1, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xa6a1, .value=0x06, .type=IO_READ},
        {.addr=0xa6a2, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d1, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01D4) {
    const struct CPU_State initial_cpu = {.pc=0x5872, .a=0xcc, .x=0x8b, .y=0x50, .sp=0x09, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x018b, .value=0x62}, {.addr=0x5872, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x5873, .a=0xee, .x=0x8b, .y=0x50, .sp=0x09, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x018b, .value=0x62}, {.addr=0x5872, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x5872, .value=0x06, .type=IO_READ},
        {.addr=0x5873, .value=DUMMY, .type=IO_READ},
        {.addr=0x018b, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01D5) {
    const struct CPU_State initial_cpu = {.pc=0xe6a2, .a=0x7a, .x=0xa1, .y=0xa2, .sp=0x99, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0x80}, {.addr=0xe6a2, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xe6a3, .a=0xfa, .x=0xa1, .y=0xa2, .sp=0x99, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0x80}, {.addr=0xe6a2, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xe6a2, .value=0x06, .type=IO_READ},
        {.addr=0xe6a3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a1, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01D6) {
    const struct CPU_State initial_cpu = {.pc=0xf627, .a=0xb3, .x=0xf7, .y=0x26, .sp=0x83, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x01f7, .value=0xe1}, {.addr=0xf627, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xf628, .a=0xf3, .x=0xf7, .y=0x26, .sp=0x83, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x01f7, .value=0xe1}, {.addr=0xf627, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xf627, .value=0x06, .type=IO_READ},
        {.addr=0xf628, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f7, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01D7) {
    const struct CPU_State initial_cpu = {.pc=0xbbe6, .a=0x83, .x=0x00, .y=0x28, .sp=0x2b, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x0100, .value=0xf0}, {.addr=0xbbe6, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xbbe7, .a=0xf3, .x=0x00, .y=0x28, .sp=0x2b, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x0100, .value=0xf0}, {.addr=0xbbe6, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xbbe6, .value=0x06, .type=IO_READ},
        {.addr=0xbbe7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0100, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01D8) {
    const struct CPU_State initial_cpu = {.pc=0x0870, .a=0xf7, .x=0xa2, .y=0x97, .sp=0xe4, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x00a2, .value=0x59}, {.addr=0x0870, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x0871, .a=0xff, .x=0xa2, .y=0x97, .sp=0xe4, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x00a2, .value=0x59}, {.addr=0x0870, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x0870, .value=0x06, .type=IO_READ},
        {.addr=0x0871, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a2, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01DA) {
    const struct CPU_State initial_cpu = {.pc=0x21f4, .a=0xa3, .x=0xd8, .y=0x92, .sp=0x79, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x01d8, .value=0x4e}, {.addr=0x21f4, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x21f5, .a=0xef, .x=0xd8, .y=0x92, .sp=0x79, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x01d8, .value=0x4e}, {.addr=0x21f4, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x21f4, .value=0x06, .type=IO_READ},
        {.addr=0x21f5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d8, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01DB) {
    const struct CPU_State initial_cpu = {.pc=0x0544, .a=0x90, .x=0x58, .y=0xf9, .sp=0x1b, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0x63}, {.addr=0x0544, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x0545, .a=0xf3, .x=0x58, .y=0xf9, .sp=0x1b, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0x63}, {.addr=0x0544, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x0544, .value=0x06, .type=IO_READ},
        {.addr=0x0545, .value=DUMMY, .type=IO_READ},
        {.addr=0x0158, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01DC) {
    const struct CPU_State initial_cpu = {.pc=0x60c5, .a=0x16, .x=0x20, .y=0xec, .sp=0xe9, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x0020, .value=0x0c}, {.addr=0x60c5, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x60c6, .a=0x1e, .x=0x20, .y=0xec, .sp=0xe9, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x0020, .value=0x0c}, {.addr=0x60c5, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x60c5, .value=0x06, .type=IO_READ},
        {.addr=0x60c6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0020, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01DD) {
    const struct CPU_State initial_cpu = {.pc=0x5fbb, .a=0x1b, .x=0x7d, .y=0x57, .sp=0x98, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0x7e}, {.addr=0x5fbb, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x5fbc, .a=0x7f, .x=0x7d, .y=0x57, .sp=0x98, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0x7e}, {.addr=0x5fbb, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x5fbb, .value=0x06, .type=IO_READ},
        {.addr=0x5fbc, .value=DUMMY, .type=IO_READ},
        {.addr=0x017d, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01DE) {
    const struct CPU_State initial_cpu = {.pc=0xaf8f, .a=0xd4, .x=0xaa, .y=0x33, .sp=0x09, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x01aa, .value=0xdc}, {.addr=0xaf8f, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xaf90, .a=0xdc, .x=0xaa, .y=0x33, .sp=0x09, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x01aa, .value=0xdc}, {.addr=0xaf8f, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xaf8f, .value=0x06, .type=IO_READ},
        {.addr=0xaf90, .value=DUMMY, .type=IO_READ},
        {.addr=0x01aa, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01DF) {
    const struct CPU_State initial_cpu = {.pc=0x2f49, .a=0xaa, .x=0x4a, .y=0x5e, .sp=0xde, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x004a, .value=0x61}, {.addr=0x2f49, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x2f4a, .a=0xeb, .x=0x4a, .y=0x5e, .sp=0xde, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x004a, .value=0x61}, {.addr=0x2f49, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x2f49, .value=0x06, .type=IO_READ},
        {.addr=0x2f4a, .value=DUMMY, .type=IO_READ},
        {.addr=0x004a, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01E0) {
    const struct CPU_State initial_cpu = {.pc=0xadf3, .a=0x60, .x=0x3a, .y=0x2d, .sp=0xbd, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x013a, .value=0x03}, {.addr=0xadf3, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xadf4, .a=0x63, .x=0x3a, .y=0x2d, .sp=0xbd, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x013a, .value=0x03}, {.addr=0xadf3, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xadf3, .value=0x06, .type=IO_READ},
        {.addr=0xadf4, .value=DUMMY, .type=IO_READ},
        {.addr=0x013a, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01E1) {
    const struct CPU_State initial_cpu = {.pc=0x9bba, .a=0xc6, .x=0x87, .y=0xc1, .sp=0x50, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x0187, .value=0xf3}, {.addr=0x9bba, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x9bbb, .a=0xf7, .x=0x87, .y=0xc1, .sp=0x50, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x0187, .value=0xf3}, {.addr=0x9bba, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x9bba, .value=0x06, .type=IO_READ},
        {.addr=0x9bbb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0187, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01E2) {
    const struct CPU_State initial_cpu = {.pc=0x8992, .a=0x7a, .x=0xac, .y=0xe9, .sp=0xaa, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x01ac, .value=0x56}, {.addr=0x8992, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x8993, .a=0x7e, .x=0xac, .y=0xe9, .sp=0xaa, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01ac, .value=0x56}, {.addr=0x8992, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x8992, .value=0x06, .type=IO_READ},
        {.addr=0x8993, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ac, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01E3) {
    const struct CPU_State initial_cpu = {.pc=0x24c0, .a=0x86, .x=0xd0, .y=0x8e, .sp=0x05, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x00d0, .value=0xc2}, {.addr=0x24c0, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x24c1, .a=0xc6, .x=0xd0, .y=0x8e, .sp=0x05, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x00d0, .value=0xc2}, {.addr=0x24c0, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x24c0, .value=0x06, .type=IO_READ},
        {.addr=0x24c1, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d0, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01E4) {
    const struct CPU_State initial_cpu = {.pc=0xa649, .a=0xf2, .x=0xd0, .y=0xf5, .sp=0xe4, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x01d0, .value=0x68}, {.addr=0xa649, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xa64a, .a=0xfa, .x=0xd0, .y=0xf5, .sp=0xe4, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x01d0, .value=0x68}, {.addr=0xa649, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xa649, .value=0x06, .type=IO_READ},
        {.addr=0xa64a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d0, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01E5) {
    const struct CPU_State initial_cpu = {.pc=0x1c75, .a=0x29, .x=0xc5, .y=0x19, .sp=0x8d, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x00c5, .value=0x29}, {.addr=0x1c75, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x1c76, .a=0x29, .x=0xc5, .y=0x19, .sp=0x8d, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x00c5, .value=0x29}, {.addr=0x1c75, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x1c75, .value=0x06, .type=IO_READ},
        {.addr=0x1c76, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c5, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01E6) {
    const struct CPU_State initial_cpu = {.pc=0x8d57, .a=0xc5, .x=0x0e, .y=0xd3, .sp=0xd5, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x010e, .value=0x06}, {.addr=0x8d57, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x8d58, .a=0xc7, .x=0x0e, .y=0xd3, .sp=0xd5, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x010e, .value=0x06}, {.addr=0x8d57, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x8d57, .value=0x06, .type=IO_READ},
        {.addr=0x8d58, .value=DUMMY, .type=IO_READ},
        {.addr=0x010e, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01E7) {
    const struct CPU_State initial_cpu = {.pc=0x3cda, .a=0x88, .x=0xb9, .y=0xb5, .sp=0x6d, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x00b9, .value=0x76}, {.addr=0x3cda, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x3cdb, .a=0xfe, .x=0xb9, .y=0xb5, .sp=0x6d, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x00b9, .value=0x76}, {.addr=0x3cda, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x3cda, .value=0x06, .type=IO_READ},
        {.addr=0x3cdb, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b9, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01E8) {
    const struct CPU_State initial_cpu = {.pc=0x17f5, .a=0x74, .x=0xef, .y=0x4f, .sp=0x4a, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x00ef, .value=0x70}, {.addr=0x17f5, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x17f6, .a=0x74, .x=0xef, .y=0x4f, .sp=0x4a, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x00ef, .value=0x70}, {.addr=0x17f5, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x17f5, .value=0x06, .type=IO_READ},
        {.addr=0x17f6, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ef, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01E9) {
    const struct CPU_State initial_cpu = {.pc=0xca48, .a=0x71, .x=0xbd, .y=0xcc, .sp=0xd6, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0xc7}, {.addr=0xca48, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xca49, .a=0xf7, .x=0xbd, .y=0xcc, .sp=0xd6, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0xc7}, {.addr=0xca48, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xca48, .value=0x06, .type=IO_READ},
        {.addr=0xca49, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bd, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01EA) {
    const struct CPU_State initial_cpu = {.pc=0x73c8, .a=0xf6, .x=0xab, .y=0x53, .sp=0xe3, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x00ab, .value=0xe6}, {.addr=0x73c8, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x73c9, .a=0xf6, .x=0xab, .y=0x53, .sp=0xe3, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x00ab, .value=0xe6}, {.addr=0x73c8, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x73c8, .value=0x06, .type=IO_READ},
        {.addr=0x73c9, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ab, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01EB) {
    const struct CPU_State initial_cpu = {.pc=0xc5fa, .a=0x16, .x=0x10, .y=0x3c, .sp=0xe7, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0x69}, {.addr=0xc5fa, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xc5fb, .a=0x7f, .x=0x10, .y=0x3c, .sp=0xe7, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0x69}, {.addr=0xc5fa, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xc5fa, .value=0x06, .type=IO_READ},
        {.addr=0xc5fb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0110, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01EC) {
    const struct CPU_State initial_cpu = {.pc=0x21d3, .a=0x24, .x=0xda, .y=0xf8, .sp=0xec, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x00da, .value=0x00}, {.addr=0x21d3, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x21d4, .a=0x24, .x=0xda, .y=0xf8, .sp=0xec, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x00da, .value=0x00}, {.addr=0x21d3, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x21d3, .value=0x06, .type=IO_READ},
        {.addr=0x21d4, .value=DUMMY, .type=IO_READ},
        {.addr=0x00da, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01ED) {
    const struct CPU_State initial_cpu = {.pc=0xa404, .a=0x33, .x=0x68, .y=0x47, .sp=0xf9, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x0068, .value=0xf3}, {.addr=0xa404, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xa405, .a=0xf3, .x=0x68, .y=0x47, .sp=0xf9, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0068, .value=0xf3}, {.addr=0xa404, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xa404, .value=0x06, .type=IO_READ},
        {.addr=0xa405, .value=DUMMY, .type=IO_READ},
        {.addr=0x0068, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01EF) {
    const struct CPU_State initial_cpu = {.pc=0xfe2d, .a=0xac, .x=0x96, .y=0xaf, .sp=0xd1, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x0096, .value=0xa6}, {.addr=0xfe2d, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xfe2e, .a=0xae, .x=0x96, .y=0xaf, .sp=0xd1, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x0096, .value=0xa6}, {.addr=0xfe2d, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xfe2d, .value=0x06, .type=IO_READ},
        {.addr=0xfe2e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0096, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01F0) {
    const struct CPU_State initial_cpu = {.pc=0x3df6, .a=0xef, .x=0x8b, .y=0xbf, .sp=0x7c, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x018b, .value=0x5c}, {.addr=0x3df6, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x3df7, .a=0xff, .x=0x8b, .y=0xbf, .sp=0x7c, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x018b, .value=0x5c}, {.addr=0x3df6, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x3df6, .value=0x06, .type=IO_READ},
        {.addr=0x3df7, .value=DUMMY, .type=IO_READ},
        {.addr=0x018b, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01F1) {
    const struct CPU_State initial_cpu = {.pc=0xf7f2, .a=0x64, .x=0xd4, .y=0xfb, .sp=0x5f, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x00d4, .value=0xf6}, {.addr=0xf7f2, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xf7f3, .a=0xf6, .x=0xd4, .y=0xfb, .sp=0x5f, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x00d4, .value=0xf6}, {.addr=0xf7f2, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xf7f2, .value=0x06, .type=IO_READ},
        {.addr=0xf7f3, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d4, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01F2) {
    const struct CPU_State initial_cpu = {.pc=0x306a, .a=0x7a, .x=0x5c, .y=0x4d, .sp=0x79, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x015c, .value=0xc6}, {.addr=0x306a, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x306b, .a=0xfe, .x=0x5c, .y=0x4d, .sp=0x79, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x015c, .value=0xc6}, {.addr=0x306a, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x306a, .value=0x06, .type=IO_READ},
        {.addr=0x306b, .value=DUMMY, .type=IO_READ},
        {.addr=0x015c, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01F3) {
    const struct CPU_State initial_cpu = {.pc=0x2486, .a=0x62, .x=0xb4, .y=0x7b, .sp=0xc3, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x00b4, .value=0x89}, {.addr=0x2486, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x2487, .a=0xeb, .x=0xb4, .y=0x7b, .sp=0xc3, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x00b4, .value=0x89}, {.addr=0x2486, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x2486, .value=0x06, .type=IO_READ},
        {.addr=0x2487, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b4, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01F4) {
    const struct CPU_State initial_cpu = {.pc=0xbb0a, .a=0x34, .x=0x86, .y=0x2f, .sp=0x27, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x0086, .value=0xe8}, {.addr=0xbb0a, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xbb0b, .a=0xfc, .x=0x86, .y=0x2f, .sp=0x27, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0086, .value=0xe8}, {.addr=0xbb0a, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xbb0a, .value=0x06, .type=IO_READ},
        {.addr=0xbb0b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0086, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01F5) {
    const struct CPU_State initial_cpu = {.pc=0xb589, .a=0xe8, .x=0x54, .y=0x27, .sp=0xf6, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x0154, .value=0x6f}, {.addr=0xb589, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xb58a, .a=0xef, .x=0x54, .y=0x27, .sp=0xf6, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x0154, .value=0x6f}, {.addr=0xb589, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xb589, .value=0x06, .type=IO_READ},
        {.addr=0xb58a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0154, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01F6) {
    const struct CPU_State initial_cpu = {.pc=0xc30d, .a=0x8a, .x=0x92, .y=0x8e, .sp=0xd3, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x0092, .value=0x72}, {.addr=0xc30d, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xc30e, .a=0xfa, .x=0x92, .y=0x8e, .sp=0xd3, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x0092, .value=0x72}, {.addr=0xc30d, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xc30d, .value=0x06, .type=IO_READ},
        {.addr=0xc30e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0092, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01F7) {
    const struct CPU_State initial_cpu = {.pc=0x8711, .a=0x8d, .x=0x82, .y=0xdc, .sp=0x8e, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x0082, .value=0xec}, {.addr=0x8711, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x8712, .a=0xed, .x=0x82, .y=0xdc, .sp=0x8e, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0082, .value=0xec}, {.addr=0x8711, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x8711, .value=0x06, .type=IO_READ},
        {.addr=0x8712, .value=DUMMY, .type=IO_READ},
        {.addr=0x0082, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01F8) {
    const struct CPU_State initial_cpu = {.pc=0xff2f, .a=0x8d, .x=0xc7, .y=0x8a, .sp=0x68, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x01c7, .value=0x98}, {.addr=0xff2f, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xff30, .a=0x9d, .x=0xc7, .y=0x8a, .sp=0x68, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x01c7, .value=0x98}, {.addr=0xff2f, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xff2f, .value=0x06, .type=IO_READ},
        {.addr=0xff30, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c7, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x6286, .a=0x86, .x=0x7f, .y=0xb5, .sp=0x03, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x007f, .value=0x7b}, {.addr=0x6286, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x6287, .a=0xff, .x=0x7f, .y=0xb5, .sp=0x03, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x007f, .value=0x7b}, {.addr=0x6286, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x6286, .value=0x06, .type=IO_READ},
        {.addr=0x6287, .value=DUMMY, .type=IO_READ},
        {.addr=0x007f, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01FA) {
    const struct CPU_State initial_cpu = {.pc=0xd39e, .a=0x7a, .x=0xe0, .y=0x50, .sp=0xf4, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x01e0, .value=0xd9}, {.addr=0xd39e, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xd39f, .a=0xfb, .x=0xe0, .y=0x50, .sp=0xf4, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x01e0, .value=0xd9}, {.addr=0xd39e, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xd39e, .value=0x06, .type=IO_READ},
        {.addr=0xd39f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e0, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01FB) {
    const struct CPU_State initial_cpu = {.pc=0xca06, .a=0x63, .x=0xc8, .y=0xc8, .sp=0x21, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x01c8, .value=0xaa}, {.addr=0xca06, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xca07, .a=0xeb, .x=0xc8, .y=0xc8, .sp=0x21, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x01c8, .value=0xaa}, {.addr=0xca06, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xca06, .value=0x06, .type=IO_READ},
        {.addr=0xca07, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c8, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01FC) {
    const struct CPU_State initial_cpu = {.pc=0xe416, .a=0xf0, .x=0xde, .y=0x9a, .sp=0x5d, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x01de, .value=0x15}, {.addr=0xe416, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xe417, .a=0xf5, .x=0xde, .y=0x9a, .sp=0x5d, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x01de, .value=0x15}, {.addr=0xe416, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xe416, .value=0x06, .type=IO_READ},
        {.addr=0xe417, .value=DUMMY, .type=IO_READ},
        {.addr=0x01de, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01FD) {
    const struct CPU_State initial_cpu = {.pc=0x2bbb, .a=0xf2, .x=0x34, .y=0x4d, .sp=0x80, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x0034, .value=0xc2}, {.addr=0x2bbb, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x2bbc, .a=0xf2, .x=0x34, .y=0x4d, .sp=0x80, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x0034, .value=0xc2}, {.addr=0x2bbb, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x2bbb, .value=0x06, .type=IO_READ},
        {.addr=0x2bbc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0034, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01FE) {
    const struct CPU_State initial_cpu = {.pc=0xac85, .a=0x4f, .x=0xec, .y=0xa1, .sp=0xf8, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x00ec, .value=0x3d}, {.addr=0xac85, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xac86, .a=0x7f, .x=0xec, .y=0xa1, .sp=0xf8, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x00ec, .value=0x3d}, {.addr=0xac85, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xac85, .value=0x06, .type=IO_READ},
        {.addr=0xac86, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ec, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_01FF) {
    const struct CPU_State initial_cpu = {.pc=0x508f, .a=0x19, .x=0x14, .y=0xcd, .sp=0x43, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x0114, .value=0xf7}, {.addr=0x508f, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x5090, .a=0xff, .x=0x14, .y=0xcd, .sp=0x43, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0114, .value=0xf7}, {.addr=0x508f, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x508f, .value=0x06, .type=IO_READ},
        {.addr=0x5090, .value=DUMMY, .type=IO_READ},
        {.addr=0x0114, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0200) {
    const struct CPU_State initial_cpu = {.pc=0x6065, .a=0x26, .x=0xcf, .y=0xa6, .sp=0x9b, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x01cf, .value=0xc8}, {.addr=0x6065, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x6066, .a=0xee, .x=0xcf, .y=0xa6, .sp=0x9b, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x01cf, .value=0xc8}, {.addr=0x6065, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x6065, .value=0x06, .type=IO_READ},
        {.addr=0x6066, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cf, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0201) {
    const struct CPU_State initial_cpu = {.pc=0xe946, .a=0x46, .x=0x20, .y=0x4c, .sp=0x3a, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x0120, .value=0xfd}, {.addr=0xe946, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xe947, .a=0xff, .x=0x20, .y=0x4c, .sp=0x3a, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x0120, .value=0xfd}, {.addr=0xe946, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xe946, .value=0x06, .type=IO_READ},
        {.addr=0xe947, .value=DUMMY, .type=IO_READ},
        {.addr=0x0120, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0202) {
    const struct CPU_State initial_cpu = {.pc=0xfeb6, .a=0x41, .x=0x0d, .y=0x17, .sp=0x72, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x000d, .value=0x6b}, {.addr=0xfeb6, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xfeb7, .a=0x6b, .x=0x0d, .y=0x17, .sp=0x72, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x000d, .value=0x6b}, {.addr=0xfeb6, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xfeb6, .value=0x06, .type=IO_READ},
        {.addr=0xfeb7, .value=DUMMY, .type=IO_READ},
        {.addr=0x000d, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0203) {
    const struct CPU_State initial_cpu = {.pc=0x46fc, .a=0x5a, .x=0xa0, .y=0xbf, .sp=0x00, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x01a0, .value=0xf5}, {.addr=0x46fc, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x46fd, .a=0xff, .x=0xa0, .y=0xbf, .sp=0x00, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x01a0, .value=0xf5}, {.addr=0x46fc, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x46fc, .value=0x06, .type=IO_READ},
        {.addr=0x46fd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a0, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0205) {
    const struct CPU_State initial_cpu = {.pc=0x41ba, .a=0x8f, .x=0x94, .y=0xcc, .sp=0x93, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x0194, .value=0xe7}, {.addr=0x41ba, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x41bb, .a=0xef, .x=0x94, .y=0xcc, .sp=0x93, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0194, .value=0xe7}, {.addr=0x41ba, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x41ba, .value=0x06, .type=IO_READ},
        {.addr=0x41bb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0194, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0206) {
    const struct CPU_State initial_cpu = {.pc=0xf235, .a=0xc7, .x=0x7f, .y=0x6d, .sp=0x29, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x017f, .value=0x66}, {.addr=0xf235, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xf236, .a=0xe7, .x=0x7f, .y=0x6d, .sp=0x29, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x017f, .value=0x66}, {.addr=0xf235, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xf235, .value=0x06, .type=IO_READ},
        {.addr=0xf236, .value=DUMMY, .type=IO_READ},
        {.addr=0x017f, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0207) {
    const struct CPU_State initial_cpu = {.pc=0x1c89, .a=0x59, .x=0x44, .y=0xb4, .sp=0x12, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x0044, .value=0xc4}, {.addr=0x1c89, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x1c8a, .a=0xdd, .x=0x44, .y=0xb4, .sp=0x12, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x0044, .value=0xc4}, {.addr=0x1c89, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x1c89, .value=0x06, .type=IO_READ},
        {.addr=0x1c8a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0044, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0208) {
    const struct CPU_State initial_cpu = {.pc=0x71f1, .a=0xe6, .x=0x63, .y=0x1d, .sp=0x94, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x0163, .value=0x50}, {.addr=0x71f1, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x71f2, .a=0xf6, .x=0x63, .y=0x1d, .sp=0x94, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0163, .value=0x50}, {.addr=0x71f1, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x71f1, .value=0x06, .type=IO_READ},
        {.addr=0x71f2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0163, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0209) {
    const struct CPU_State initial_cpu = {.pc=0xcd8b, .a=0xb9, .x=0x75, .y=0x06, .sp=0x53, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x0175, .value=0x63}, {.addr=0xcd8b, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xcd8c, .a=0xfb, .x=0x75, .y=0x06, .sp=0x53, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x0175, .value=0x63}, {.addr=0xcd8b, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xcd8b, .value=0x06, .type=IO_READ},
        {.addr=0xcd8c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0175, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_020A) {
    const struct CPU_State initial_cpu = {.pc=0xe834, .a=0x32, .x=0xc8, .y=0x82, .sp=0x63, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x00c8, .value=0x62}, {.addr=0xe834, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xe835, .a=0x72, .x=0xc8, .y=0x82, .sp=0x63, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x00c8, .value=0x62}, {.addr=0xe834, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xe834, .value=0x06, .type=IO_READ},
        {.addr=0xe835, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c8, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_020B) {
    const struct CPU_State initial_cpu = {.pc=0x521e, .a=0x91, .x=0xc9, .y=0xa7, .sp=0x32, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x00c9, .value=0x9f}, {.addr=0x521e, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x521f, .a=0x9f, .x=0xc9, .y=0xa7, .sp=0x32, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x00c9, .value=0x9f}, {.addr=0x521e, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x521e, .value=0x06, .type=IO_READ},
        {.addr=0x521f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c9, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_020C) {
    const struct CPU_State initial_cpu = {.pc=0x9cd5, .a=0x41, .x=0xdd, .y=0x21, .sp=0x8e, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x01dd, .value=0x44}, {.addr=0x9cd5, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x9cd6, .a=0x45, .x=0xdd, .y=0x21, .sp=0x8e, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x01dd, .value=0x44}, {.addr=0x9cd5, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x9cd5, .value=0x06, .type=IO_READ},
        {.addr=0x9cd6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dd, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_020D) {
    const struct CPU_State initial_cpu = {.pc=0x62f9, .a=0x43, .x=0xb7, .y=0x07, .sp=0x03, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x01b7, .value=0x3c}, {.addr=0x62f9, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x62fa, .a=0x7f, .x=0xb7, .y=0x07, .sp=0x03, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x01b7, .value=0x3c}, {.addr=0x62f9, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x62f9, .value=0x06, .type=IO_READ},
        {.addr=0x62fa, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b7, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_020E) {
    const struct CPU_State initial_cpu = {.pc=0x0ab3, .a=0xdb, .x=0x22, .y=0x9b, .sp=0x4f, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x0122, .value=0x0d}, {.addr=0x0ab3, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x0ab4, .a=0xdf, .x=0x22, .y=0x9b, .sp=0x4f, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x0122, .value=0x0d}, {.addr=0x0ab3, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x0ab3, .value=0x06, .type=IO_READ},
        {.addr=0x0ab4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0122, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_020F) {
    const struct CPU_State initial_cpu = {.pc=0x65d0, .a=0xb6, .x=0xd6, .y=0x22, .sp=0x3d, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x00d6, .value=0xb5}, {.addr=0x65d0, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x65d1, .a=0xb7, .x=0xd6, .y=0x22, .sp=0x3d, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x00d6, .value=0xb5}, {.addr=0x65d0, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x65d0, .value=0x06, .type=IO_READ},
        {.addr=0x65d1, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d6, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0210) {
    const struct CPU_State initial_cpu = {.pc=0x8385, .a=0x7c, .x=0xeb, .y=0x3a, .sp=0xe5, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x00eb, .value=0xb4}, {.addr=0x8385, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x8386, .a=0xfc, .x=0xeb, .y=0x3a, .sp=0xe5, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x00eb, .value=0xb4}, {.addr=0x8385, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x8385, .value=0x06, .type=IO_READ},
        {.addr=0x8386, .value=DUMMY, .type=IO_READ},
        {.addr=0x00eb, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0211) {
    const struct CPU_State initial_cpu = {.pc=0xacb2, .a=0xd0, .x=0xe5, .y=0x2a, .sp=0xac, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x01e5, .value=0x65}, {.addr=0xacb2, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xacb3, .a=0xf5, .x=0xe5, .y=0x2a, .sp=0xac, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x01e5, .value=0x65}, {.addr=0xacb2, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xacb2, .value=0x06, .type=IO_READ},
        {.addr=0xacb3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e5, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0212) {
    const struct CPU_State initial_cpu = {.pc=0x6519, .a=0x2b, .x=0x24, .y=0x48, .sp=0x92, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x0024, .value=0x07}, {.addr=0x6519, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x651a, .a=0x2f, .x=0x24, .y=0x48, .sp=0x92, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0024, .value=0x07}, {.addr=0x6519, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x6519, .value=0x06, .type=IO_READ},
        {.addr=0x651a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0024, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0213) {
    const struct CPU_State initial_cpu = {.pc=0x8137, .a=0x55, .x=0xc9, .y=0xf1, .sp=0xfb, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x01c9, .value=0x15}, {.addr=0x8137, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x8138, .a=0x55, .x=0xc9, .y=0xf1, .sp=0xfb, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x01c9, .value=0x15}, {.addr=0x8137, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x8137, .value=0x06, .type=IO_READ},
        {.addr=0x8138, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c9, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0214) {
    const struct CPU_State initial_cpu = {.pc=0x55fd, .a=0xd0, .x=0x7d, .y=0x50, .sp=0x3e, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x007d, .value=0xb3}, {.addr=0x55fd, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x55fe, .a=0xf3, .x=0x7d, .y=0x50, .sp=0x3e, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x007d, .value=0xb3}, {.addr=0x55fd, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x55fd, .value=0x06, .type=IO_READ},
        {.addr=0x55fe, .value=DUMMY, .type=IO_READ},
        {.addr=0x007d, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0215) {
    const struct CPU_State initial_cpu = {.pc=0x4860, .a=0x8e, .x=0x8f, .y=0x06, .sp=0xa9, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x008f, .value=0x57}, {.addr=0x4860, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x4861, .a=0xdf, .x=0x8f, .y=0x06, .sp=0xa9, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x008f, .value=0x57}, {.addr=0x4860, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x4860, .value=0x06, .type=IO_READ},
        {.addr=0x4861, .value=DUMMY, .type=IO_READ},
        {.addr=0x008f, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0216) {
    const struct CPU_State initial_cpu = {.pc=0xe3c8, .a=0x7b, .x=0xd7, .y=0xfb, .sp=0x5d, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x01d7, .value=0x07}, {.addr=0xe3c8, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xe3c9, .a=0x7f, .x=0xd7, .y=0xfb, .sp=0x5d, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x01d7, .value=0x07}, {.addr=0xe3c8, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xe3c8, .value=0x06, .type=IO_READ},
        {.addr=0xe3c9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d7, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0218) {
    const struct CPU_State initial_cpu = {.pc=0x8250, .a=0xfd, .x=0xd9, .y=0xe9, .sp=0x0f, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x00d9, .value=0x07}, {.addr=0x8250, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x8251, .a=0xff, .x=0xd9, .y=0xe9, .sp=0x0f, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x00d9, .value=0x07}, {.addr=0x8250, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x8250, .value=0x06, .type=IO_READ},
        {.addr=0x8251, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d9, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0219) {
    const struct CPU_State initial_cpu = {.pc=0x6ceb, .a=0xd5, .x=0xd5, .y=0x99, .sp=0x7b, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x00d5, .value=0x81}, {.addr=0x6ceb, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x6cec, .a=0xd5, .x=0xd5, .y=0x99, .sp=0x7b, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x00d5, .value=0x81}, {.addr=0x6ceb, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x6ceb, .value=0x06, .type=IO_READ},
        {.addr=0x6cec, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d5, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_021A) {
    const struct CPU_State initial_cpu = {.pc=0x2090, .a=0xce, .x=0xa3, .y=0x08, .sp=0x8a, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x00a3, .value=0x94}, {.addr=0x2090, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x2091, .a=0xde, .x=0xa3, .y=0x08, .sp=0x8a, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x00a3, .value=0x94}, {.addr=0x2090, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x2090, .value=0x06, .type=IO_READ},
        {.addr=0x2091, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a3, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_021B) {
    const struct CPU_State initial_cpu = {.pc=0xc722, .a=0x4b, .x=0xd1, .y=0xe8, .sp=0x9f, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0xb6}, {.addr=0xc722, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xc723, .a=0xff, .x=0xd1, .y=0xe8, .sp=0x9f, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0xb6}, {.addr=0xc722, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xc722, .value=0x06, .type=IO_READ},
        {.addr=0xc723, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d1, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_021C) {
    const struct CPU_State initial_cpu = {.pc=0x8221, .a=0xd0, .x=0x3b, .y=0xa7, .sp=0xaf, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x003b, .value=0x05}, {.addr=0x8221, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x8222, .a=0xd5, .x=0x3b, .y=0xa7, .sp=0xaf, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x003b, .value=0x05}, {.addr=0x8221, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x8221, .value=0x06, .type=IO_READ},
        {.addr=0x8222, .value=DUMMY, .type=IO_READ},
        {.addr=0x003b, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_021D) {
    const struct CPU_State initial_cpu = {.pc=0xa76a, .a=0x86, .x=0x5d, .y=0x49, .sp=0xae, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x005d, .value=0x81}, {.addr=0xa76a, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xa76b, .a=0x87, .x=0x5d, .y=0x49, .sp=0xae, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x005d, .value=0x81}, {.addr=0xa76a, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xa76a, .value=0x06, .type=IO_READ},
        {.addr=0xa76b, .value=DUMMY, .type=IO_READ},
        {.addr=0x005d, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_021E) {
    const struct CPU_State initial_cpu = {.pc=0xdbc4, .a=0x95, .x=0xb2, .y=0x02, .sp=0x3e, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x01b2, .value=0xb5}, {.addr=0xdbc4, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xdbc5, .a=0xb5, .x=0xb2, .y=0x02, .sp=0x3e, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x01b2, .value=0xb5}, {.addr=0xdbc4, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xdbc4, .value=0x06, .type=IO_READ},
        {.addr=0xdbc5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b2, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_021F) {
    const struct CPU_State initial_cpu = {.pc=0x9e6a, .a=0x0c, .x=0x4e, .y=0x4a, .sp=0x88, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x004e, .value=0x04}, {.addr=0x9e6a, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x9e6b, .a=0x0c, .x=0x4e, .y=0x4a, .sp=0x88, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x004e, .value=0x04}, {.addr=0x9e6a, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x9e6a, .value=0x06, .type=IO_READ},
        {.addr=0x9e6b, .value=DUMMY, .type=IO_READ},
        {.addr=0x004e, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0220) {
    const struct CPU_State initial_cpu = {.pc=0x619e, .a=0x97, .x=0x8b, .y=0x4f, .sp=0xac, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x008b, .value=0xf7}, {.addr=0x619e, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x619f, .a=0xf7, .x=0x8b, .y=0x4f, .sp=0xac, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x008b, .value=0xf7}, {.addr=0x619e, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x619e, .value=0x06, .type=IO_READ},
        {.addr=0x619f, .value=DUMMY, .type=IO_READ},
        {.addr=0x008b, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0221) {
    const struct CPU_State initial_cpu = {.pc=0x01e8, .a=0x42, .x=0x59, .y=0x53, .sp=0x9f, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x0059, .value=0x9e}, {.addr=0x01e8, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x01e9, .a=0xde, .x=0x59, .y=0x53, .sp=0x9f, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x0059, .value=0x9e}, {.addr=0x01e8, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x01e8, .value=0x06, .type=IO_READ},
        {.addr=0x01e9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0059, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0222) {
    const struct CPU_State initial_cpu = {.pc=0x6f20, .a=0xcf, .x=0xca, .y=0xb6, .sp=0x02, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x00ca, .value=0x68}, {.addr=0x6f20, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x6f21, .a=0xef, .x=0xca, .y=0xb6, .sp=0x02, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x00ca, .value=0x68}, {.addr=0x6f20, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x6f20, .value=0x06, .type=IO_READ},
        {.addr=0x6f21, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ca, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0223) {
    const struct CPU_State initial_cpu = {.pc=0x7f36, .a=0x2d, .x=0x4e, .y=0x3d, .sp=0x68, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0x8d}, {.addr=0x7f36, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x7f37, .a=0xad, .x=0x4e, .y=0x3d, .sp=0x68, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0x8d}, {.addr=0x7f36, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x7f36, .value=0x06, .type=IO_READ},
        {.addr=0x7f37, .value=DUMMY, .type=IO_READ},
        {.addr=0x014e, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0224) {
    const struct CPU_State initial_cpu = {.pc=0x6089, .a=0xaf, .x=0xfb, .y=0x6e, .sp=0xce, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x01fb, .value=0x7e}, {.addr=0x6089, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x608a, .a=0xff, .x=0xfb, .y=0x6e, .sp=0xce, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x01fb, .value=0x7e}, {.addr=0x6089, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x6089, .value=0x06, .type=IO_READ},
        {.addr=0x608a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fb, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0225) {
    const struct CPU_State initial_cpu = {.pc=0x7753, .a=0x81, .x=0xdd, .y=0x1d, .sp=0x7f, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x00dd, .value=0x48}, {.addr=0x7753, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x7754, .a=0xc9, .x=0xdd, .y=0x1d, .sp=0x7f, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x00dd, .value=0x48}, {.addr=0x7753, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x7753, .value=0x06, .type=IO_READ},
        {.addr=0x7754, .value=DUMMY, .type=IO_READ},
        {.addr=0x00dd, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0226) {
    const struct CPU_State initial_cpu = {.pc=0xcb02, .a=0x35, .x=0xd7, .y=0x7e, .sp=0x3f, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x00d7, .value=0x64}, {.addr=0xcb02, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xcb03, .a=0x75, .x=0xd7, .y=0x7e, .sp=0x3f, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x00d7, .value=0x64}, {.addr=0xcb02, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xcb02, .value=0x06, .type=IO_READ},
        {.addr=0xcb03, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d7, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0227) {
    const struct CPU_State initial_cpu = {.pc=0xf0b6, .a=0x27, .x=0x1f, .y=0x86, .sp=0x6b, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0x69}, {.addr=0xf0b6, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xf0b7, .a=0x6f, .x=0x1f, .y=0x86, .sp=0x6b, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0x69}, {.addr=0xf0b6, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xf0b6, .value=0x06, .type=IO_READ},
        {.addr=0xf0b7, .value=DUMMY, .type=IO_READ},
        {.addr=0x011f, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0228) {
    const struct CPU_State initial_cpu = {.pc=0x114a, .a=0x97, .x=0xb7, .y=0x35, .sp=0x6f, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x01b7, .value=0x9c}, {.addr=0x114a, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x114b, .a=0x9f, .x=0xb7, .y=0x35, .sp=0x6f, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x01b7, .value=0x9c}, {.addr=0x114a, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x114a, .value=0x06, .type=IO_READ},
        {.addr=0x114b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b7, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0229) {
    const struct CPU_State initial_cpu = {.pc=0xcfa4, .a=0x55, .x=0x86, .y=0x8d, .sp=0x1b, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x0086, .value=0xfc}, {.addr=0xcfa4, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xcfa5, .a=0xfd, .x=0x86, .y=0x8d, .sp=0x1b, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0086, .value=0xfc}, {.addr=0xcfa4, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xcfa4, .value=0x06, .type=IO_READ},
        {.addr=0xcfa5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0086, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_022A) {
    const struct CPU_State initial_cpu = {.pc=0x540b, .a=0xef, .x=0xf2, .y=0xa4, .sp=0x36, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x01f2, .value=0x89}, {.addr=0x540b, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x540c, .a=0xef, .x=0xf2, .y=0xa4, .sp=0x36, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x01f2, .value=0x89}, {.addr=0x540b, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x540b, .value=0x06, .type=IO_READ},
        {.addr=0x540c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f2, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_022B) {
    const struct CPU_State initial_cpu = {.pc=0xf0e8, .a=0x8a, .x=0x0f, .y=0x34, .sp=0xb0, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x010f, .value=0x13}, {.addr=0xf0e8, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xf0e9, .a=0x9b, .x=0x0f, .y=0x34, .sp=0xb0, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x010f, .value=0x13}, {.addr=0xf0e8, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xf0e8, .value=0x06, .type=IO_READ},
        {.addr=0xf0e9, .value=DUMMY, .type=IO_READ},
        {.addr=0x010f, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_022C) {
    const struct CPU_State initial_cpu = {.pc=0xac3a, .a=0xe3, .x=0xd1, .y=0xef, .sp=0x1e, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x00d1, .value=0x3f}, {.addr=0xac3a, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xac3b, .a=0xff, .x=0xd1, .y=0xef, .sp=0x1e, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x00d1, .value=0x3f}, {.addr=0xac3a, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xac3a, .value=0x06, .type=IO_READ},
        {.addr=0xac3b, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d1, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_022D) {
    const struct CPU_State initial_cpu = {.pc=0xebb1, .a=0x8d, .x=0x7f, .y=0x52, .sp=0xa6, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x017f, .value=0x0a}, {.addr=0xebb1, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xebb2, .a=0x8f, .x=0x7f, .y=0x52, .sp=0xa6, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x017f, .value=0x0a}, {.addr=0xebb1, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xebb1, .value=0x06, .type=IO_READ},
        {.addr=0xebb2, .value=DUMMY, .type=IO_READ},
        {.addr=0x017f, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_022E) {
    const struct CPU_State initial_cpu = {.pc=0xf297, .a=0x49, .x=0x76, .y=0x4d, .sp=0x97, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x0176, .value=0x66}, {.addr=0xf297, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xf298, .a=0x6f, .x=0x76, .y=0x4d, .sp=0x97, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0176, .value=0x66}, {.addr=0xf297, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xf297, .value=0x06, .type=IO_READ},
        {.addr=0xf298, .value=DUMMY, .type=IO_READ},
        {.addr=0x0176, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_022F) {
    const struct CPU_State initial_cpu = {.pc=0x75ce, .a=0xe2, .x=0xea, .y=0x9d, .sp=0xd8, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x00ea, .value=0xd4}, {.addr=0x75ce, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x75cf, .a=0xf6, .x=0xea, .y=0x9d, .sp=0xd8, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x00ea, .value=0xd4}, {.addr=0x75ce, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x75ce, .value=0x06, .type=IO_READ},
        {.addr=0x75cf, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ea, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0230) {
    const struct CPU_State initial_cpu = {.pc=0xaac1, .a=0x02, .x=0xeb, .y=0x82, .sp=0x34, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x00eb, .value=0x85}, {.addr=0xaac1, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xaac2, .a=0x87, .x=0xeb, .y=0x82, .sp=0x34, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x00eb, .value=0x85}, {.addr=0xaac1, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xaac1, .value=0x06, .type=IO_READ},
        {.addr=0xaac2, .value=DUMMY, .type=IO_READ},
        {.addr=0x00eb, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0231) {
    const struct CPU_State initial_cpu = {.pc=0xbd8d, .a=0x5e, .x=0xf2, .y=0xea, .sp=0xc5, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x01f2, .value=0x7f}, {.addr=0xbd8d, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xbd8e, .a=0x7f, .x=0xf2, .y=0xea, .sp=0xc5, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01f2, .value=0x7f}, {.addr=0xbd8d, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xbd8d, .value=0x06, .type=IO_READ},
        {.addr=0xbd8e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f2, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0232) {
    const struct CPU_State initial_cpu = {.pc=0x1da7, .a=0x30, .x=0x7b, .y=0x2d, .sp=0x23, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0xe7}, {.addr=0x1da7, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x1da8, .a=0xf7, .x=0x7b, .y=0x2d, .sp=0x23, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0xe7}, {.addr=0x1da7, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x1da7, .value=0x06, .type=IO_READ},
        {.addr=0x1da8, .value=DUMMY, .type=IO_READ},
        {.addr=0x017b, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0233) {
    const struct CPU_State initial_cpu = {.pc=0x32ff, .a=0x0d, .x=0xcf, .y=0xb5, .sp=0x71, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x00cf, .value=0xa1}, {.addr=0x32ff, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x3300, .a=0xad, .x=0xcf, .y=0xb5, .sp=0x71, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x00cf, .value=0xa1}, {.addr=0x32ff, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x32ff, .value=0x06, .type=IO_READ},
        {.addr=0x3300, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cf, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0234) {
    const struct CPU_State initial_cpu = {.pc=0x94d9, .a=0x77, .x=0xdf, .y=0x39, .sp=0xbc, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x00df, .value=0xbf}, {.addr=0x94d9, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x94da, .a=0xff, .x=0xdf, .y=0x39, .sp=0xbc, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x00df, .value=0xbf}, {.addr=0x94d9, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x94d9, .value=0x06, .type=IO_READ},
        {.addr=0x94da, .value=DUMMY, .type=IO_READ},
        {.addr=0x00df, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0235) {
    const struct CPU_State initial_cpu = {.pc=0xc5ac, .a=0xfb, .x=0x66, .y=0xd5, .sp=0x88, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0xe1}, {.addr=0xc5ac, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xc5ad, .a=0xfb, .x=0x66, .y=0xd5, .sp=0x88, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0xe1}, {.addr=0xc5ac, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xc5ac, .value=0x06, .type=IO_READ},
        {.addr=0xc5ad, .value=DUMMY, .type=IO_READ},
        {.addr=0x0166, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0236) {
    const struct CPU_State initial_cpu = {.pc=0xab70, .a=0x87, .x=0x82, .y=0xdd, .sp=0xc7, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0x10}, {.addr=0xab70, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xab71, .a=0x97, .x=0x82, .y=0xdd, .sp=0xc7, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0x10}, {.addr=0xab70, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xab70, .value=0x06, .type=IO_READ},
        {.addr=0xab71, .value=DUMMY, .type=IO_READ},
        {.addr=0x0182, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0237) {
    const struct CPU_State initial_cpu = {.pc=0xf061, .a=0xbd, .x=0xdc, .y=0xf5, .sp=0x77, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x00dc, .value=0x32}, {.addr=0xf061, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xf062, .a=0xbf, .x=0xdc, .y=0xf5, .sp=0x77, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x00dc, .value=0x32}, {.addr=0xf061, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xf061, .value=0x06, .type=IO_READ},
        {.addr=0xf062, .value=DUMMY, .type=IO_READ},
        {.addr=0x00dc, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0238) {
    const struct CPU_State initial_cpu = {.pc=0x7b64, .a=0xef, .x=0xa8, .y=0x82, .sp=0xd4, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x00a8, .value=0xde}, {.addr=0x7b64, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x7b65, .a=0xff, .x=0xa8, .y=0x82, .sp=0xd4, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x00a8, .value=0xde}, {.addr=0x7b64, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x7b64, .value=0x06, .type=IO_READ},
        {.addr=0x7b65, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a8, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0239) {
    const struct CPU_State initial_cpu = {.pc=0x83e0, .a=0x21, .x=0x2e, .y=0xd2, .sp=0xbf, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x012e, .value=0x1a}, {.addr=0x83e0, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x83e1, .a=0x3b, .x=0x2e, .y=0xd2, .sp=0xbf, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x012e, .value=0x1a}, {.addr=0x83e0, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x83e0, .value=0x06, .type=IO_READ},
        {.addr=0x83e1, .value=DUMMY, .type=IO_READ},
        {.addr=0x012e, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_023A) {
    const struct CPU_State initial_cpu = {.pc=0x2eaa, .a=0x7a, .x=0x13, .y=0xb8, .sp=0xe0, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0x2a}, {.addr=0x2eaa, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x2eab, .a=0x7a, .x=0x13, .y=0xb8, .sp=0xe0, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0x2a}, {.addr=0x2eaa, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x2eaa, .value=0x06, .type=IO_READ},
        {.addr=0x2eab, .value=DUMMY, .type=IO_READ},
        {.addr=0x0113, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_023B) {
    const struct CPU_State initial_cpu = {.pc=0x801e, .a=0xe0, .x=0x40, .y=0xe1, .sp=0xd3, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x0040, .value=0xff}, {.addr=0x801e, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x801f, .a=0xff, .x=0x40, .y=0xe1, .sp=0xd3, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x0040, .value=0xff}, {.addr=0x801e, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x801e, .value=0x06, .type=IO_READ},
        {.addr=0x801f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0040, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_023C) {
    const struct CPU_State initial_cpu = {.pc=0x5767, .a=0x79, .x=0x87, .y=0xec, .sp=0x9d, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x0187, .value=0x61}, {.addr=0x5767, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x5768, .a=0x79, .x=0x87, .y=0xec, .sp=0x9d, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x0187, .value=0x61}, {.addr=0x5767, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x5767, .value=0x06, .type=IO_READ},
        {.addr=0x5768, .value=DUMMY, .type=IO_READ},
        {.addr=0x0187, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_023D) {
    const struct CPU_State initial_cpu = {.pc=0xf8ae, .a=0x07, .x=0x70, .y=0x65, .sp=0xe7, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x0070, .value=0x16}, {.addr=0xf8ae, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xf8af, .a=0x17, .x=0x70, .y=0x65, .sp=0xe7, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x0070, .value=0x16}, {.addr=0xf8ae, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xf8ae, .value=0x06, .type=IO_READ},
        {.addr=0xf8af, .value=DUMMY, .type=IO_READ},
        {.addr=0x0070, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_023E) {
    const struct CPU_State initial_cpu = {.pc=0x1e98, .a=0x64, .x=0xae, .y=0x0f, .sp=0x6e, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x01ae, .value=0x76}, {.addr=0x1e98, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x1e99, .a=0x76, .x=0xae, .y=0x0f, .sp=0x6e, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x01ae, .value=0x76}, {.addr=0x1e98, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x1e98, .value=0x06, .type=IO_READ},
        {.addr=0x1e99, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ae, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_023F) {
    const struct CPU_State initial_cpu = {.pc=0x4e45, .a=0x04, .x=0x81, .y=0xb0, .sp=0x8e, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0x3d}, {.addr=0x4e45, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x4e46, .a=0x3d, .x=0x81, .y=0xb0, .sp=0x8e, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0x3d}, {.addr=0x4e45, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x4e45, .value=0x06, .type=IO_READ},
        {.addr=0x4e46, .value=DUMMY, .type=IO_READ},
        {.addr=0x0181, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0240) {
    const struct CPU_State initial_cpu = {.pc=0x6000, .a=0xd1, .x=0x0a, .y=0x65, .sp=0xb1, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0x60}, {.addr=0x6000, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x6001, .a=0xf1, .x=0x0a, .y=0x65, .sp=0xb1, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0x60}, {.addr=0x6000, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x6000, .value=0x06, .type=IO_READ},
        {.addr=0x6001, .value=DUMMY, .type=IO_READ},
        {.addr=0x010a, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0241) {
    const struct CPU_State initial_cpu = {.pc=0xb346, .a=0x7d, .x=0xcd, .y=0xc8, .sp=0x14, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x00cd, .value=0x67}, {.addr=0xb346, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xb347, .a=0x7f, .x=0xcd, .y=0xc8, .sp=0x14, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x00cd, .value=0x67}, {.addr=0xb346, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xb346, .value=0x06, .type=IO_READ},
        {.addr=0xb347, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cd, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0242) {
    const struct CPU_State initial_cpu = {.pc=0x846a, .a=0x55, .x=0x35, .y=0xd5, .sp=0xb9, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x0135, .value=0xfb}, {.addr=0x846a, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x846b, .a=0xff, .x=0x35, .y=0xd5, .sp=0xb9, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x0135, .value=0xfb}, {.addr=0x846a, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x846a, .value=0x06, .type=IO_READ},
        {.addr=0x846b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0135, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0243) {
    const struct CPU_State initial_cpu = {.pc=0x61f3, .a=0x29, .x=0xa0, .y=0xc0, .sp=0x6d, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x00a0, .value=0xbd}, {.addr=0x61f3, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x61f4, .a=0xbd, .x=0xa0, .y=0xc0, .sp=0x6d, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x00a0, .value=0xbd}, {.addr=0x61f3, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x61f3, .value=0x06, .type=IO_READ},
        {.addr=0x61f4, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a0, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0244) {
    const struct CPU_State initial_cpu = {.pc=0xd012, .a=0xbe, .x=0xb0, .y=0x8e, .sp=0xf5, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x00b0, .value=0xf1}, {.addr=0xd012, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xd013, .a=0xff, .x=0xb0, .y=0x8e, .sp=0xf5, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x00b0, .value=0xf1}, {.addr=0xd012, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xd012, .value=0x06, .type=IO_READ},
        {.addr=0xd013, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b0, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0245) {
    const struct CPU_State initial_cpu = {.pc=0x7b64, .a=0x2d, .x=0x4e, .y=0x2f, .sp=0xd6, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x004e, .value=0xe5}, {.addr=0x7b64, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x7b65, .a=0xed, .x=0x4e, .y=0x2f, .sp=0xd6, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x004e, .value=0xe5}, {.addr=0x7b64, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x7b64, .value=0x06, .type=IO_READ},
        {.addr=0x7b65, .value=DUMMY, .type=IO_READ},
        {.addr=0x004e, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0246) {
    const struct CPU_State initial_cpu = {.pc=0xa6b2, .a=0x76, .x=0xa1, .y=0xc8, .sp=0xec, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0xc3}, {.addr=0xa6b2, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xa6b3, .a=0xf7, .x=0xa1, .y=0xc8, .sp=0xec, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0xc3}, {.addr=0xa6b2, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xa6b2, .value=0x06, .type=IO_READ},
        {.addr=0xa6b3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a1, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0247) {
    const struct CPU_State initial_cpu = {.pc=0x81ee, .a=0xde, .x=0x5d, .y=0xbd, .sp=0x8b, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x015d, .value=0x79}, {.addr=0x81ee, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x81ef, .a=0xff, .x=0x5d, .y=0xbd, .sp=0x8b, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x015d, .value=0x79}, {.addr=0x81ee, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x81ee, .value=0x06, .type=IO_READ},
        {.addr=0x81ef, .value=DUMMY, .type=IO_READ},
        {.addr=0x015d, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0248) {
    const struct CPU_State initial_cpu = {.pc=0xe586, .a=0x5a, .x=0x99, .y=0x51, .sp=0x13, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x0199, .value=0x5e}, {.addr=0xe586, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xe587, .a=0x5e, .x=0x99, .y=0x51, .sp=0x13, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x0199, .value=0x5e}, {.addr=0xe586, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xe586, .value=0x06, .type=IO_READ},
        {.addr=0xe587, .value=DUMMY, .type=IO_READ},
        {.addr=0x0199, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0249) {
    const struct CPU_State initial_cpu = {.pc=0x4221, .a=0xa5, .x=0x86, .y=0x78, .sp=0xbd, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x0086, .value=0x86}, {.addr=0x4221, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x4222, .a=0xa7, .x=0x86, .y=0x78, .sp=0xbd, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x0086, .value=0x86}, {.addr=0x4221, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x4221, .value=0x06, .type=IO_READ},
        {.addr=0x4222, .value=DUMMY, .type=IO_READ},
        {.addr=0x0086, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_024A) {
    const struct CPU_State initial_cpu = {.pc=0x9086, .a=0x47, .x=0xbd, .y=0xcd, .sp=0x02, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0xec}, {.addr=0x9086, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x9087, .a=0xef, .x=0xbd, .y=0xcd, .sp=0x02, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0xec}, {.addr=0x9086, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x9086, .value=0x06, .type=IO_READ},
        {.addr=0x9087, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bd, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_024B) {
    const struct CPU_State initial_cpu = {.pc=0x6cdd, .a=0x32, .x=0x03, .y=0x07, .sp=0xa2, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x0103, .value=0x83}, {.addr=0x6cdd, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x6cde, .a=0xb3, .x=0x03, .y=0x07, .sp=0xa2, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x0103, .value=0x83}, {.addr=0x6cdd, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x6cdd, .value=0x06, .type=IO_READ},
        {.addr=0x6cde, .value=DUMMY, .type=IO_READ},
        {.addr=0x0103, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_024C) {
    const struct CPU_State initial_cpu = {.pc=0xd206, .a=0xe9, .x=0x18, .y=0x6e, .sp=0xc2, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x0118, .value=0x88}, {.addr=0xd206, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xd207, .a=0xe9, .x=0x18, .y=0x6e, .sp=0xc2, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x0118, .value=0x88}, {.addr=0xd206, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xd206, .value=0x06, .type=IO_READ},
        {.addr=0xd207, .value=DUMMY, .type=IO_READ},
        {.addr=0x0118, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_024D) {
    const struct CPU_State initial_cpu = {.pc=0xadea, .a=0xd7, .x=0x83, .y=0x16, .sp=0x83, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x0183, .value=0x82}, {.addr=0xadea, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xadeb, .a=0xd7, .x=0x83, .y=0x16, .sp=0x83, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x0183, .value=0x82}, {.addr=0xadea, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xadea, .value=0x06, .type=IO_READ},
        {.addr=0xadeb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0183, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_024E) {
    const struct CPU_State initial_cpu = {.pc=0x6e40, .a=0x9f, .x=0x03, .y=0xae, .sp=0x69, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x0003, .value=0x13}, {.addr=0x6e40, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x6e41, .a=0x9f, .x=0x03, .y=0xae, .sp=0x69, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0003, .value=0x13}, {.addr=0x6e40, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x6e40, .value=0x06, .type=IO_READ},
        {.addr=0x6e41, .value=DUMMY, .type=IO_READ},
        {.addr=0x0003, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_024F) {
    const struct CPU_State initial_cpu = {.pc=0x6998, .a=0x58, .x=0x82, .y=0xc4, .sp=0xa4, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x0082, .value=0xf5}, {.addr=0x6998, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x6999, .a=0xfd, .x=0x82, .y=0xc4, .sp=0xa4, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0082, .value=0xf5}, {.addr=0x6998, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x6998, .value=0x06, .type=IO_READ},
        {.addr=0x6999, .value=DUMMY, .type=IO_READ},
        {.addr=0x0082, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0250) {
    const struct CPU_State initial_cpu = {.pc=0x8bae, .a=0x7f, .x=0xbd, .y=0xa3, .sp=0xf8, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0x43}, {.addr=0x8bae, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x8baf, .a=0x7f, .x=0xbd, .y=0xa3, .sp=0xf8, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0x43}, {.addr=0x8bae, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x8bae, .value=0x06, .type=IO_READ},
        {.addr=0x8baf, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bd, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0251) {
    const struct CPU_State initial_cpu = {.pc=0xeecd, .a=0x77, .x=0xcc, .y=0x8c, .sp=0x15, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x01cc, .value=0x56}, {.addr=0xeecd, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xeece, .a=0x77, .x=0xcc, .y=0x8c, .sp=0x15, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x01cc, .value=0x56}, {.addr=0xeecd, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xeecd, .value=0x06, .type=IO_READ},
        {.addr=0xeece, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cc, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0252) {
    const struct CPU_State initial_cpu = {.pc=0x5970, .a=0xe6, .x=0x17, .y=0xdd, .sp=0x29, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x0117, .value=0x18}, {.addr=0x5970, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x5971, .a=0xfe, .x=0x17, .y=0xdd, .sp=0x29, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x0117, .value=0x18}, {.addr=0x5970, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x5970, .value=0x06, .type=IO_READ},
        {.addr=0x5971, .value=DUMMY, .type=IO_READ},
        {.addr=0x0117, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0253) {
    const struct CPU_State initial_cpu = {.pc=0x345c, .a=0x8b, .x=0x32, .y=0x4d, .sp=0xd8, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x0032, .value=0xca}, {.addr=0x345c, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x345d, .a=0xcb, .x=0x32, .y=0x4d, .sp=0xd8, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x0032, .value=0xca}, {.addr=0x345c, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x345c, .value=0x06, .type=IO_READ},
        {.addr=0x345d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0032, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0254) {
    const struct CPU_State initial_cpu = {.pc=0x8d09, .a=0xe4, .x=0x1f, .y=0x01, .sp=0x8c, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x001f, .value=0x4f}, {.addr=0x8d09, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x8d0a, .a=0xef, .x=0x1f, .y=0x01, .sp=0x8c, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x001f, .value=0x4f}, {.addr=0x8d09, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x8d09, .value=0x06, .type=IO_READ},
        {.addr=0x8d0a, .value=DUMMY, .type=IO_READ},
        {.addr=0x001f, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0255) {
    const struct CPU_State initial_cpu = {.pc=0x0ad9, .a=0xb5, .x=0x45, .y=0xde, .sp=0x7d, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x0045, .value=0x25}, {.addr=0x0ad9, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x0ada, .a=0xb5, .x=0x45, .y=0xde, .sp=0x7d, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0045, .value=0x25}, {.addr=0x0ad9, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x0ad9, .value=0x06, .type=IO_READ},
        {.addr=0x0ada, .value=DUMMY, .type=IO_READ},
        {.addr=0x0045, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0256) {
    const struct CPU_State initial_cpu = {.pc=0x5988, .a=0xb6, .x=0x5b, .y=0x46, .sp=0xbb, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x015b, .value=0x4a}, {.addr=0x5988, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x5989, .a=0xfe, .x=0x5b, .y=0x46, .sp=0xbb, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x015b, .value=0x4a}, {.addr=0x5988, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x5988, .value=0x06, .type=IO_READ},
        {.addr=0x5989, .value=DUMMY, .type=IO_READ},
        {.addr=0x015b, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0257) {
    const struct CPU_State initial_cpu = {.pc=0x9556, .a=0xc4, .x=0xf8, .y=0x52, .sp=0x3f, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x01f8, .value=0xdc}, {.addr=0x9556, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x9557, .a=0xdc, .x=0xf8, .y=0x52, .sp=0x3f, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x01f8, .value=0xdc}, {.addr=0x9556, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x9556, .value=0x06, .type=IO_READ},
        {.addr=0x9557, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f8, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0258) {
    const struct CPU_State initial_cpu = {.pc=0x4238, .a=0x8e, .x=0xe5, .y=0x65, .sp=0x6e, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x01e5, .value=0x0a}, {.addr=0x4238, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x4239, .a=0x8e, .x=0xe5, .y=0x65, .sp=0x6e, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x01e5, .value=0x0a}, {.addr=0x4238, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x4238, .value=0x06, .type=IO_READ},
        {.addr=0x4239, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e5, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0259) {
    const struct CPU_State initial_cpu = {.pc=0x83d4, .a=0x0e, .x=0x05, .y=0x69, .sp=0x63, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x0105, .value=0x82}, {.addr=0x83d4, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x83d5, .a=0x8e, .x=0x05, .y=0x69, .sp=0x63, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x0105, .value=0x82}, {.addr=0x83d4, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x83d4, .value=0x06, .type=IO_READ},
        {.addr=0x83d5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0105, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_025A) {
    const struct CPU_State initial_cpu = {.pc=0x3ae2, .a=0x2f, .x=0x8e, .y=0xf7, .sp=0x22, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x008e, .value=0xcc}, {.addr=0x3ae2, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x3ae3, .a=0xef, .x=0x8e, .y=0xf7, .sp=0x22, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x008e, .value=0xcc}, {.addr=0x3ae2, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x3ae2, .value=0x06, .type=IO_READ},
        {.addr=0x3ae3, .value=DUMMY, .type=IO_READ},
        {.addr=0x008e, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_025B) {
    const struct CPU_State initial_cpu = {.pc=0xc50f, .a=0x4c, .x=0x09, .y=0x32, .sp=0xe5, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x0109, .value=0xfc}, {.addr=0xc50f, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xc510, .a=0xfc, .x=0x09, .y=0x32, .sp=0xe5, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x0109, .value=0xfc}, {.addr=0xc50f, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xc50f, .value=0x06, .type=IO_READ},
        {.addr=0xc510, .value=DUMMY, .type=IO_READ},
        {.addr=0x0109, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_025D) {
    const struct CPU_State initial_cpu = {.pc=0x0609, .a=0xd1, .x=0x7d, .y=0x12, .sp=0xc5, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0xa9}, {.addr=0x0609, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x060a, .a=0xf9, .x=0x7d, .y=0x12, .sp=0xc5, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0xa9}, {.addr=0x0609, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x0609, .value=0x06, .type=IO_READ},
        {.addr=0x060a, .value=DUMMY, .type=IO_READ},
        {.addr=0x017d, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_025F) {
    const struct CPU_State initial_cpu = {.pc=0x48c2, .a=0x0c, .x=0xd2, .y=0x99, .sp=0xb2, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x00d2, .value=0xc4}, {.addr=0x48c2, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x48c3, .a=0xcc, .x=0xd2, .y=0x99, .sp=0xb2, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x00d2, .value=0xc4}, {.addr=0x48c2, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x48c2, .value=0x06, .type=IO_READ},
        {.addr=0x48c3, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d2, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0260) {
    const struct CPU_State initial_cpu = {.pc=0x6cbe, .a=0xa7, .x=0xe0, .y=0xc2, .sp=0x09, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x01e0, .value=0x06}, {.addr=0x6cbe, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x6cbf, .a=0xa7, .x=0xe0, .y=0xc2, .sp=0x09, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x01e0, .value=0x06}, {.addr=0x6cbe, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x6cbe, .value=0x06, .type=IO_READ},
        {.addr=0x6cbf, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e0, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0261) {
    const struct CPU_State initial_cpu = {.pc=0x5b0e, .a=0x33, .x=0xc7, .y=0x20, .sp=0xc9, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x01c7, .value=0x2c}, {.addr=0x5b0e, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x5b0f, .a=0x3f, .x=0xc7, .y=0x20, .sp=0xc9, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x01c7, .value=0x2c}, {.addr=0x5b0e, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x5b0e, .value=0x06, .type=IO_READ},
        {.addr=0x5b0f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c7, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0262) {
    const struct CPU_State initial_cpu = {.pc=0xd18d, .a=0xc7, .x=0xbe, .y=0xa2, .sp=0x23, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x00be, .value=0xe5}, {.addr=0xd18d, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xd18e, .a=0xe7, .x=0xbe, .y=0xa2, .sp=0x23, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x00be, .value=0xe5}, {.addr=0xd18d, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xd18d, .value=0x06, .type=IO_READ},
        {.addr=0xd18e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00be, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0263) {
    const struct CPU_State initial_cpu = {.pc=0xf0e8, .a=0x4d, .x=0x6b, .y=0x0e, .sp=0xab, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x016b, .value=0x8b}, {.addr=0xf0e8, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xf0e9, .a=0xcf, .x=0x6b, .y=0x0e, .sp=0xab, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x016b, .value=0x8b}, {.addr=0xf0e8, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xf0e8, .value=0x06, .type=IO_READ},
        {.addr=0xf0e9, .value=DUMMY, .type=IO_READ},
        {.addr=0x016b, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0264) {
    const struct CPU_State initial_cpu = {.pc=0xaae8, .a=0xd8, .x=0x93, .y=0x37, .sp=0x50, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x0093, .value=0x89}, {.addr=0xaae8, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xaae9, .a=0xd9, .x=0x93, .y=0x37, .sp=0x50, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x0093, .value=0x89}, {.addr=0xaae8, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xaae8, .value=0x06, .type=IO_READ},
        {.addr=0xaae9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0093, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0265) {
    const struct CPU_State initial_cpu = {.pc=0xafa3, .a=0x54, .x=0x64, .y=0x2e, .sp=0x46, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0x75}, {.addr=0xafa3, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xafa4, .a=0x75, .x=0x64, .y=0x2e, .sp=0x46, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0x75}, {.addr=0xafa3, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xafa3, .value=0x06, .type=IO_READ},
        {.addr=0xafa4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0164, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0266) {
    const struct CPU_State initial_cpu = {.pc=0xd5a6, .a=0x40, .x=0xf4, .y=0x61, .sp=0xba, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x01f4, .value=0x60}, {.addr=0xd5a6, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xd5a7, .a=0x60, .x=0xf4, .y=0x61, .sp=0xba, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x01f4, .value=0x60}, {.addr=0xd5a6, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xd5a6, .value=0x06, .type=IO_READ},
        {.addr=0xd5a7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f4, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0267) {
    const struct CPU_State initial_cpu = {.pc=0x1e1a, .a=0x56, .x=0x0f, .y=0xe1, .sp=0x78, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x010f, .value=0xf3}, {.addr=0x1e1a, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x1e1b, .a=0xf7, .x=0x0f, .y=0xe1, .sp=0x78, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x010f, .value=0xf3}, {.addr=0x1e1a, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x1e1a, .value=0x06, .type=IO_READ},
        {.addr=0x1e1b, .value=DUMMY, .type=IO_READ},
        {.addr=0x010f, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0268) {
    const struct CPU_State initial_cpu = {.pc=0x521c, .a=0x6d, .x=0xef, .y=0x21, .sp=0xbd, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0xfb}, {.addr=0x521c, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x521d, .a=0xff, .x=0xef, .y=0x21, .sp=0xbd, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0xfb}, {.addr=0x521c, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x521c, .value=0x06, .type=IO_READ},
        {.addr=0x521d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ef, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0269) {
    const struct CPU_State initial_cpu = {.pc=0xfc5d, .a=0x29, .x=0x6b, .y=0xcf, .sp=0xcf, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x006b, .value=0xa0}, {.addr=0xfc5d, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xfc5e, .a=0xa9, .x=0x6b, .y=0xcf, .sp=0xcf, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x006b, .value=0xa0}, {.addr=0xfc5d, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xfc5d, .value=0x06, .type=IO_READ},
        {.addr=0xfc5e, .value=DUMMY, .type=IO_READ},
        {.addr=0x006b, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_026A) {
    const struct CPU_State initial_cpu = {.pc=0x1444, .a=0x54, .x=0x98, .y=0xf1, .sp=0x6e, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x0198, .value=0x95}, {.addr=0x1444, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x1445, .a=0xd5, .x=0x98, .y=0xf1, .sp=0x6e, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x0198, .value=0x95}, {.addr=0x1444, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x1444, .value=0x06, .type=IO_READ},
        {.addr=0x1445, .value=DUMMY, .type=IO_READ},
        {.addr=0x0198, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_026B) {
    const struct CPU_State initial_cpu = {.pc=0x373c, .a=0xba, .x=0x5f, .y=0x6a, .sp=0xc2, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x005f, .value=0x1c}, {.addr=0x373c, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x373d, .a=0xbe, .x=0x5f, .y=0x6a, .sp=0xc2, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x005f, .value=0x1c}, {.addr=0x373c, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x373c, .value=0x06, .type=IO_READ},
        {.addr=0x373d, .value=DUMMY, .type=IO_READ},
        {.addr=0x005f, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_026C) {
    const struct CPU_State initial_cpu = {.pc=0xf12d, .a=0xff, .x=0x28, .y=0x55, .sp=0xf5, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x0028, .value=0xf5}, {.addr=0xf12d, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xf12e, .a=0xff, .x=0x28, .y=0x55, .sp=0xf5, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x0028, .value=0xf5}, {.addr=0xf12d, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xf12d, .value=0x06, .type=IO_READ},
        {.addr=0xf12e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0028, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_026D) {
    const struct CPU_State initial_cpu = {.pc=0x705f, .a=0xae, .x=0x87, .y=0x36, .sp=0x3b, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x0087, .value=0x73}, {.addr=0x705f, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x7060, .a=0xff, .x=0x87, .y=0x36, .sp=0x3b, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x0087, .value=0x73}, {.addr=0x705f, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x705f, .value=0x06, .type=IO_READ},
        {.addr=0x7060, .value=DUMMY, .type=IO_READ},
        {.addr=0x0087, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_026E) {
    const struct CPU_State initial_cpu = {.pc=0xa1a1, .a=0x9d, .x=0x26, .y=0x4b, .sp=0x1c, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x0126, .value=0x91}, {.addr=0xa1a1, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xa1a2, .a=0x9d, .x=0x26, .y=0x4b, .sp=0x1c, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x0126, .value=0x91}, {.addr=0xa1a1, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xa1a1, .value=0x06, .type=IO_READ},
        {.addr=0xa1a2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0126, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0270) {
    const struct CPU_State initial_cpu = {.pc=0x9943, .a=0x13, .x=0xf5, .y=0x50, .sp=0x7f, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x01f5, .value=0x6f}, {.addr=0x9943, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x9944, .a=0x7f, .x=0xf5, .y=0x50, .sp=0x7f, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x01f5, .value=0x6f}, {.addr=0x9943, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x9943, .value=0x06, .type=IO_READ},
        {.addr=0x9944, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f5, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0271) {
    const struct CPU_State initial_cpu = {.pc=0x6381, .a=0x73, .x=0xfb, .y=0x32, .sp=0xad, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x01fb, .value=0xbe}, {.addr=0x6381, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x6382, .a=0xff, .x=0xfb, .y=0x32, .sp=0xad, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x01fb, .value=0xbe}, {.addr=0x6381, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x6381, .value=0x06, .type=IO_READ},
        {.addr=0x6382, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fb, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0272) {
    const struct CPU_State initial_cpu = {.pc=0xbd8b, .a=0x05, .x=0xcd, .y=0x74, .sp=0xa6, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x01cd, .value=0x59}, {.addr=0xbd8b, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xbd8c, .a=0x5d, .x=0xcd, .y=0x74, .sp=0xa6, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x01cd, .value=0x59}, {.addr=0xbd8b, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xbd8b, .value=0x06, .type=IO_READ},
        {.addr=0xbd8c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cd, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0273) {
    const struct CPU_State initial_cpu = {.pc=0x9f08, .a=0x2c, .x=0x4a, .y=0x0d, .sp=0xa2, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x004a, .value=0x2f}, {.addr=0x9f08, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x9f09, .a=0x2f, .x=0x4a, .y=0x0d, .sp=0xa2, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x004a, .value=0x2f}, {.addr=0x9f08, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x9f08, .value=0x06, .type=IO_READ},
        {.addr=0x9f09, .value=DUMMY, .type=IO_READ},
        {.addr=0x004a, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0274) {
    const struct CPU_State initial_cpu = {.pc=0x6a4e, .a=0xc3, .x=0x9b, .y=0xb7, .sp=0x3c, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x009b, .value=0x11}, {.addr=0x6a4e, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x6a4f, .a=0xd3, .x=0x9b, .y=0xb7, .sp=0x3c, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x009b, .value=0x11}, {.addr=0x6a4e, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x6a4e, .value=0x06, .type=IO_READ},
        {.addr=0x6a4f, .value=DUMMY, .type=IO_READ},
        {.addr=0x009b, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0275) {
    const struct CPU_State initial_cpu = {.pc=0x0a3e, .a=0xee, .x=0x5a, .y=0x18, .sp=0xdf, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x015a, .value=0x4d}, {.addr=0x0a3e, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x0a3f, .a=0xef, .x=0x5a, .y=0x18, .sp=0xdf, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x015a, .value=0x4d}, {.addr=0x0a3e, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x0a3e, .value=0x06, .type=IO_READ},
        {.addr=0x0a3f, .value=DUMMY, .type=IO_READ},
        {.addr=0x015a, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0276) {
    const struct CPU_State initial_cpu = {.pc=0x49cb, .a=0x01, .x=0xd0, .y=0x93, .sp=0x09, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x01d0, .value=0x3c}, {.addr=0x49cb, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x49cc, .a=0x3d, .x=0xd0, .y=0x93, .sp=0x09, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x01d0, .value=0x3c}, {.addr=0x49cb, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x49cb, .value=0x06, .type=IO_READ},
        {.addr=0x49cc, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d0, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0277) {
    const struct CPU_State initial_cpu = {.pc=0x734e, .a=0x07, .x=0x1e, .y=0xa6, .sp=0xbc, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x001e, .value=0xc3}, {.addr=0x734e, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x734f, .a=0xc7, .x=0x1e, .y=0xa6, .sp=0xbc, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x001e, .value=0xc3}, {.addr=0x734e, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x734e, .value=0x06, .type=IO_READ},
        {.addr=0x734f, .value=DUMMY, .type=IO_READ},
        {.addr=0x001e, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0278) {
    const struct CPU_State initial_cpu = {.pc=0xa640, .a=0x0f, .x=0x08, .y=0x6c, .sp=0x8d, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x0108, .value=0xc6}, {.addr=0xa640, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xa641, .a=0xcf, .x=0x08, .y=0x6c, .sp=0x8d, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x0108, .value=0xc6}, {.addr=0xa640, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xa640, .value=0x06, .type=IO_READ},
        {.addr=0xa641, .value=DUMMY, .type=IO_READ},
        {.addr=0x0108, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0279) {
    const struct CPU_State initial_cpu = {.pc=0xf34c, .a=0x4b, .x=0xb8, .y=0x60, .sp=0x4e, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0x5f}, {.addr=0xf34c, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xf34d, .a=0x5f, .x=0xb8, .y=0x60, .sp=0x4e, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0x5f}, {.addr=0xf34c, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xf34c, .value=0x06, .type=IO_READ},
        {.addr=0xf34d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b8, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_027A) {
    const struct CPU_State initial_cpu = {.pc=0x58ae, .a=0x4b, .x=0xac, .y=0x4c, .sp=0xca, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x00ac, .value=0x89}, {.addr=0x58ae, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x58af, .a=0xcb, .x=0xac, .y=0x4c, .sp=0xca, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x00ac, .value=0x89}, {.addr=0x58ae, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x58ae, .value=0x06, .type=IO_READ},
        {.addr=0x58af, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ac, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_027B) {
    const struct CPU_State initial_cpu = {.pc=0x1255, .a=0x54, .x=0xcc, .y=0x9b, .sp=0xa9, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x01cc, .value=0x60}, {.addr=0x1255, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x1256, .a=0x74, .x=0xcc, .y=0x9b, .sp=0xa9, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01cc, .value=0x60}, {.addr=0x1255, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x1255, .value=0x06, .type=IO_READ},
        {.addr=0x1256, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cc, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_027C) {
    const struct CPU_State initial_cpu = {.pc=0x84ca, .a=0xda, .x=0x30, .y=0x75, .sp=0xf9, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x0130, .value=0xb6}, {.addr=0x84ca, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x84cb, .a=0xfe, .x=0x30, .y=0x75, .sp=0xf9, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x0130, .value=0xb6}, {.addr=0x84ca, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x84ca, .value=0x06, .type=IO_READ},
        {.addr=0x84cb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0130, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_027D) {
    const struct CPU_State initial_cpu = {.pc=0x3c9e, .a=0x3e, .x=0x11, .y=0x99, .sp=0xde, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x0111, .value=0xfa}, {.addr=0x3c9e, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x3c9f, .a=0xfe, .x=0x11, .y=0x99, .sp=0xde, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0111, .value=0xfa}, {.addr=0x3c9e, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x3c9e, .value=0x06, .type=IO_READ},
        {.addr=0x3c9f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0111, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_027E) {
    const struct CPU_State initial_cpu = {.pc=0xcb13, .a=0x7f, .x=0x57, .y=0x84, .sp=0x07, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x0057, .value=0xb8}, {.addr=0xcb13, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xcb14, .a=0xff, .x=0x57, .y=0x84, .sp=0x07, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0057, .value=0xb8}, {.addr=0xcb13, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xcb13, .value=0x06, .type=IO_READ},
        {.addr=0xcb14, .value=DUMMY, .type=IO_READ},
        {.addr=0x0057, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_027F) {
    const struct CPU_State initial_cpu = {.pc=0xfa24, .a=0x6c, .x=0x95, .y=0x39, .sp=0x0d, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x0095, .value=0x33}, {.addr=0xfa24, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xfa25, .a=0x7f, .x=0x95, .y=0x39, .sp=0x0d, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x0095, .value=0x33}, {.addr=0xfa24, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xfa24, .value=0x06, .type=IO_READ},
        {.addr=0xfa25, .value=DUMMY, .type=IO_READ},
        {.addr=0x0095, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0280) {
    const struct CPU_State initial_cpu = {.pc=0x8ab9, .a=0x70, .x=0xc4, .y=0x97, .sp=0x5f, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x00c4, .value=0x15}, {.addr=0x8ab9, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x8aba, .a=0x75, .x=0xc4, .y=0x97, .sp=0x5f, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x00c4, .value=0x15}, {.addr=0x8ab9, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x8ab9, .value=0x06, .type=IO_READ},
        {.addr=0x8aba, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c4, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0281) {
    const struct CPU_State initial_cpu = {.pc=0x8e47, .a=0xfb, .x=0x21, .y=0x08, .sp=0x2f, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x0021, .value=0xdb}, {.addr=0x8e47, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x8e48, .a=0xfb, .x=0x21, .y=0x08, .sp=0x2f, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x0021, .value=0xdb}, {.addr=0x8e47, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x8e47, .value=0x06, .type=IO_READ},
        {.addr=0x8e48, .value=DUMMY, .type=IO_READ},
        {.addr=0x0021, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0282) {
    const struct CPU_State initial_cpu = {.pc=0x48ab, .a=0x7e, .x=0x64, .y=0xeb, .sp=0x9f, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0x58}, {.addr=0x48ab, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x48ac, .a=0x7e, .x=0x64, .y=0xeb, .sp=0x9f, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0x58}, {.addr=0x48ab, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x48ab, .value=0x06, .type=IO_READ},
        {.addr=0x48ac, .value=DUMMY, .type=IO_READ},
        {.addr=0x0164, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0283) {
    const struct CPU_State initial_cpu = {.pc=0x38c1, .a=0x95, .x=0x06, .y=0x83, .sp=0x38, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0x13}, {.addr=0x38c1, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x38c2, .a=0x97, .x=0x06, .y=0x83, .sp=0x38, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0x13}, {.addr=0x38c1, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x38c1, .value=0x06, .type=IO_READ},
        {.addr=0x38c2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0106, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0284) {
    const struct CPU_State initial_cpu = {.pc=0x6d78, .a=0x9a, .x=0x9b, .y=0xd5, .sp=0xc3, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x009b, .value=0xf2}, {.addr=0x6d78, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x6d79, .a=0xfa, .x=0x9b, .y=0xd5, .sp=0xc3, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x009b, .value=0xf2}, {.addr=0x6d78, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x6d78, .value=0x06, .type=IO_READ},
        {.addr=0x6d79, .value=DUMMY, .type=IO_READ},
        {.addr=0x009b, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0285) {
    const struct CPU_State initial_cpu = {.pc=0xdc8b, .a=0x5d, .x=0x52, .y=0x57, .sp=0xa7, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x0052, .value=0x55}, {.addr=0xdc8b, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xdc8c, .a=0x5d, .x=0x52, .y=0x57, .sp=0xa7, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0052, .value=0x55}, {.addr=0xdc8b, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xdc8b, .value=0x06, .type=IO_READ},
        {.addr=0xdc8c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0052, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0286) {
    const struct CPU_State initial_cpu = {.pc=0x92a3, .a=0x12, .x=0xb3, .y=0x15, .sp=0xf2, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x00b3, .value=0x24}, {.addr=0x92a3, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x92a4, .a=0x36, .x=0xb3, .y=0x15, .sp=0xf2, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x00b3, .value=0x24}, {.addr=0x92a3, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x92a3, .value=0x06, .type=IO_READ},
        {.addr=0x92a4, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b3, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0287) {
    const struct CPU_State initial_cpu = {.pc=0x61eb, .a=0x3a, .x=0x30, .y=0x69, .sp=0x13, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x0030, .value=0xdf}, {.addr=0x61eb, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x61ec, .a=0xff, .x=0x30, .y=0x69, .sp=0x13, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x0030, .value=0xdf}, {.addr=0x61eb, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x61eb, .value=0x06, .type=IO_READ},
        {.addr=0x61ec, .value=DUMMY, .type=IO_READ},
        {.addr=0x0030, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0288) {
    const struct CPU_State initial_cpu = {.pc=0xb3fc, .a=0x09, .x=0xbe, .y=0x07, .sp=0x66, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x01be, .value=0x94}, {.addr=0xb3fc, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xb3fd, .a=0x9d, .x=0xbe, .y=0x07, .sp=0x66, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x01be, .value=0x94}, {.addr=0xb3fc, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xb3fc, .value=0x06, .type=IO_READ},
        {.addr=0xb3fd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01be, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_028A) {
    const struct CPU_State initial_cpu = {.pc=0x3a6b, .a=0xbb, .x=0x54, .y=0xe8, .sp=0xcf, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x0154, .value=0xc5}, {.addr=0x3a6b, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x3a6c, .a=0xff, .x=0x54, .y=0xe8, .sp=0xcf, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x0154, .value=0xc5}, {.addr=0x3a6b, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x3a6b, .value=0x06, .type=IO_READ},
        {.addr=0x3a6c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0154, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_028B) {
    const struct CPU_State initial_cpu = {.pc=0xc9cb, .a=0xf3, .x=0xb6, .y=0x50, .sp=0x09, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x01b6, .value=0xac}, {.addr=0xc9cb, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xc9cc, .a=0xff, .x=0xb6, .y=0x50, .sp=0x09, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x01b6, .value=0xac}, {.addr=0xc9cb, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xc9cb, .value=0x06, .type=IO_READ},
        {.addr=0xc9cc, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b6, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_028C) {
    const struct CPU_State initial_cpu = {.pc=0x83e5, .a=0x99, .x=0x6c, .y=0xd0, .sp=0xba, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x016c, .value=0xc1}, {.addr=0x83e5, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x83e6, .a=0xd9, .x=0x6c, .y=0xd0, .sp=0xba, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x016c, .value=0xc1}, {.addr=0x83e5, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x83e5, .value=0x06, .type=IO_READ},
        {.addr=0x83e6, .value=DUMMY, .type=IO_READ},
        {.addr=0x016c, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_028D) {
    const struct CPU_State initial_cpu = {.pc=0x512d, .a=0xca, .x=0xd4, .y=0x09, .sp=0xb1, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x01d4, .value=0xde}, {.addr=0x512d, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x512e, .a=0xde, .x=0xd4, .y=0x09, .sp=0xb1, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x01d4, .value=0xde}, {.addr=0x512d, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x512d, .value=0x06, .type=IO_READ},
        {.addr=0x512e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d4, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_028E) {
    const struct CPU_State initial_cpu = {.pc=0x8f8d, .a=0x88, .x=0xb0, .y=0xc5, .sp=0x76, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0xfa}, {.addr=0x8f8d, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x8f8e, .a=0xfa, .x=0xb0, .y=0xc5, .sp=0x76, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0xfa}, {.addr=0x8f8d, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x8f8d, .value=0x06, .type=IO_READ},
        {.addr=0x8f8e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b0, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_028F) {
    const struct CPU_State initial_cpu = {.pc=0xc312, .a=0x7a, .x=0x3b, .y=0xd0, .sp=0x9d, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x013b, .value=0xc2}, {.addr=0xc312, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xc313, .a=0xfa, .x=0x3b, .y=0xd0, .sp=0x9d, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x013b, .value=0xc2}, {.addr=0xc312, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xc312, .value=0x06, .type=IO_READ},
        {.addr=0xc313, .value=DUMMY, .type=IO_READ},
        {.addr=0x013b, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0290) {
    const struct CPU_State initial_cpu = {.pc=0x4f8f, .a=0xdf, .x=0x2a, .y=0xf7, .sp=0xb7, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x002a, .value=0x1a}, {.addr=0x4f8f, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x4f90, .a=0xdf, .x=0x2a, .y=0xf7, .sp=0xb7, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x002a, .value=0x1a}, {.addr=0x4f8f, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x4f8f, .value=0x06, .type=IO_READ},
        {.addr=0x4f90, .value=DUMMY, .type=IO_READ},
        {.addr=0x002a, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0291) {
    const struct CPU_State initial_cpu = {.pc=0x889e, .a=0x4b, .x=0x9a, .y=0xc5, .sp=0x09, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x009a, .value=0xa4}, {.addr=0x889e, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x889f, .a=0xef, .x=0x9a, .y=0xc5, .sp=0x09, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x009a, .value=0xa4}, {.addr=0x889e, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x889e, .value=0x06, .type=IO_READ},
        {.addr=0x889f, .value=DUMMY, .type=IO_READ},
        {.addr=0x009a, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0292) {
    const struct CPU_State initial_cpu = {.pc=0xd3f0, .a=0x84, .x=0x25, .y=0xd0, .sp=0x3c, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x0025, .value=0x0b}, {.addr=0xd3f0, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xd3f1, .a=0x8f, .x=0x25, .y=0xd0, .sp=0x3c, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x0025, .value=0x0b}, {.addr=0xd3f0, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xd3f0, .value=0x06, .type=IO_READ},
        {.addr=0xd3f1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0025, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0293) {
    const struct CPU_State initial_cpu = {.pc=0xcdb7, .a=0xc8, .x=0x97, .y=0x2d, .sp=0x21, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x0197, .value=0x96}, {.addr=0xcdb7, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xcdb8, .a=0xde, .x=0x97, .y=0x2d, .sp=0x21, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x0197, .value=0x96}, {.addr=0xcdb7, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xcdb7, .value=0x06, .type=IO_READ},
        {.addr=0xcdb8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0197, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0294) {
    const struct CPU_State initial_cpu = {.pc=0xe68b, .a=0x1f, .x=0x60, .y=0x78, .sp=0xb3, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x0160, .value=0xcc}, {.addr=0xe68b, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xe68c, .a=0xdf, .x=0x60, .y=0x78, .sp=0xb3, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x0160, .value=0xcc}, {.addr=0xe68b, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xe68b, .value=0x06, .type=IO_READ},
        {.addr=0xe68c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0160, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0295) {
    const struct CPU_State initial_cpu = {.pc=0x73ac, .a=0x6b, .x=0x58, .y=0x22, .sp=0x3f, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0xa7}, {.addr=0x73ac, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x73ad, .a=0xef, .x=0x58, .y=0x22, .sp=0x3f, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0xa7}, {.addr=0x73ac, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x73ac, .value=0x06, .type=IO_READ},
        {.addr=0x73ad, .value=DUMMY, .type=IO_READ},
        {.addr=0x0158, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0297) {
    const struct CPU_State initial_cpu = {.pc=0xc278, .a=0x48, .x=0x20, .y=0xd1, .sp=0xc2, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x0120, .value=0x52}, {.addr=0xc278, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xc279, .a=0x5a, .x=0x20, .y=0xd1, .sp=0xc2, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x0120, .value=0x52}, {.addr=0xc278, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xc278, .value=0x06, .type=IO_READ},
        {.addr=0xc279, .value=DUMMY, .type=IO_READ},
        {.addr=0x0120, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0299) {
    const struct CPU_State initial_cpu = {.pc=0x5e3b, .a=0x48, .x=0x16, .y=0x6b, .sp=0xb2, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x0016, .value=0xa9}, {.addr=0x5e3b, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x5e3c, .a=0xe9, .x=0x16, .y=0x6b, .sp=0xb2, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x0016, .value=0xa9}, {.addr=0x5e3b, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x5e3b, .value=0x06, .type=IO_READ},
        {.addr=0x5e3c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0016, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_029A) {
    const struct CPU_State initial_cpu = {.pc=0xb8b2, .a=0x5e, .x=0x37, .y=0x26, .sp=0x70, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x0037, .value=0x34}, {.addr=0xb8b2, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xb8b3, .a=0x7e, .x=0x37, .y=0x26, .sp=0x70, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0037, .value=0x34}, {.addr=0xb8b2, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xb8b2, .value=0x06, .type=IO_READ},
        {.addr=0xb8b3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0037, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_029B) {
    const struct CPU_State initial_cpu = {.pc=0x3537, .a=0xe0, .x=0xd6, .y=0x74, .sp=0x5b, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x01d6, .value=0xef}, {.addr=0x3537, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x3538, .a=0xef, .x=0xd6, .y=0x74, .sp=0x5b, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x01d6, .value=0xef}, {.addr=0x3537, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x3537, .value=0x06, .type=IO_READ},
        {.addr=0x3538, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d6, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_029C) {
    const struct CPU_State initial_cpu = {.pc=0x3110, .a=0x8d, .x=0x9c, .y=0xbc, .sp=0xf8, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x009c, .value=0x7a}, {.addr=0x3110, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x3111, .a=0xff, .x=0x9c, .y=0xbc, .sp=0xf8, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x009c, .value=0x7a}, {.addr=0x3110, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x3110, .value=0x06, .type=IO_READ},
        {.addr=0x3111, .value=DUMMY, .type=IO_READ},
        {.addr=0x009c, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_029D) {
    const struct CPU_State initial_cpu = {.pc=0xb7df, .a=0xb7, .x=0x32, .y=0x35, .sp=0x10, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x0132, .value=0xac}, {.addr=0xb7df, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xb7e0, .a=0xbf, .x=0x32, .y=0x35, .sp=0x10, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x0132, .value=0xac}, {.addr=0xb7df, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xb7df, .value=0x06, .type=IO_READ},
        {.addr=0xb7e0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0132, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_029E) {
    const struct CPU_State initial_cpu = {.pc=0x3061, .a=0x21, .x=0xed, .y=0x7b, .sp=0x11, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x00ed, .value=0x0f}, {.addr=0x3061, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x3062, .a=0x2f, .x=0xed, .y=0x7b, .sp=0x11, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x00ed, .value=0x0f}, {.addr=0x3061, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x3061, .value=0x06, .type=IO_READ},
        {.addr=0x3062, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ed, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_029F) {
    const struct CPU_State initial_cpu = {.pc=0xdc89, .a=0x39, .x=0x26, .y=0xb8, .sp=0x40, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x0126, .value=0xff}, {.addr=0xdc89, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xdc8a, .a=0xff, .x=0x26, .y=0xb8, .sp=0x40, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x0126, .value=0xff}, {.addr=0xdc89, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xdc89, .value=0x06, .type=IO_READ},
        {.addr=0xdc8a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0126, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02A1) {
    const struct CPU_State initial_cpu = {.pc=0x312d, .a=0x71, .x=0x69, .y=0x61, .sp=0x75, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x0069, .value=0x18}, {.addr=0x312d, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x312e, .a=0x79, .x=0x69, .y=0x61, .sp=0x75, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x0069, .value=0x18}, {.addr=0x312d, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x312d, .value=0x06, .type=IO_READ},
        {.addr=0x312e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0069, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02A2) {
    const struct CPU_State initial_cpu = {.pc=0x9130, .a=0x25, .x=0x2e, .y=0xf0, .sp=0xa5, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x002e, .value=0x70}, {.addr=0x9130, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x9131, .a=0x75, .x=0x2e, .y=0xf0, .sp=0xa5, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x002e, .value=0x70}, {.addr=0x9130, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x9130, .value=0x06, .type=IO_READ},
        {.addr=0x9131, .value=DUMMY, .type=IO_READ},
        {.addr=0x002e, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02A3) {
    const struct CPU_State initial_cpu = {.pc=0x598b, .a=0x23, .x=0x8b, .y=0xe0, .sp=0xb0, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x008b, .value=0xb8}, {.addr=0x598b, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x598c, .a=0xbb, .x=0x8b, .y=0xe0, .sp=0xb0, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x008b, .value=0xb8}, {.addr=0x598b, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x598b, .value=0x06, .type=IO_READ},
        {.addr=0x598c, .value=DUMMY, .type=IO_READ},
        {.addr=0x008b, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02A4) {
    const struct CPU_State initial_cpu = {.pc=0x8d1a, .a=0xd9, .x=0xa1, .y=0x8f, .sp=0x20, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0xe8}, {.addr=0x8d1a, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x8d1b, .a=0xf9, .x=0xa1, .y=0x8f, .sp=0x20, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0xe8}, {.addr=0x8d1a, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x8d1a, .value=0x06, .type=IO_READ},
        {.addr=0x8d1b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a1, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02A5) {
    const struct CPU_State initial_cpu = {.pc=0xad79, .a=0x1e, .x=0x4d, .y=0x58, .sp=0x88, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x014d, .value=0xe5}, {.addr=0xad79, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xad7a, .a=0xff, .x=0x4d, .y=0x58, .sp=0x88, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x014d, .value=0xe5}, {.addr=0xad79, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xad79, .value=0x06, .type=IO_READ},
        {.addr=0xad7a, .value=DUMMY, .type=IO_READ},
        {.addr=0x014d, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02A6) {
    const struct CPU_State initial_cpu = {.pc=0x0372, .a=0x28, .x=0xd3, .y=0x65, .sp=0x82, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x00d3, .value=0xf7}, {.addr=0x0372, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x0373, .a=0xff, .x=0xd3, .y=0x65, .sp=0x82, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x00d3, .value=0xf7}, {.addr=0x0372, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x0372, .value=0x06, .type=IO_READ},
        {.addr=0x0373, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d3, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02A7) {
    const struct CPU_State initial_cpu = {.pc=0x4959, .a=0x04, .x=0x0a, .y=0xf9, .sp=0x32, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0xb8}, {.addr=0x4959, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x495a, .a=0xbc, .x=0x0a, .y=0xf9, .sp=0x32, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0xb8}, {.addr=0x4959, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x4959, .value=0x06, .type=IO_READ},
        {.addr=0x495a, .value=DUMMY, .type=IO_READ},
        {.addr=0x010a, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02A8) {
    const struct CPU_State initial_cpu = {.pc=0x8f83, .a=0x07, .x=0xe1, .y=0x4e, .sp=0x28, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x01e1, .value=0xc2}, {.addr=0x8f83, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x8f84, .a=0xc7, .x=0xe1, .y=0x4e, .sp=0x28, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x01e1, .value=0xc2}, {.addr=0x8f83, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x8f83, .value=0x06, .type=IO_READ},
        {.addr=0x8f84, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e1, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02A9) {
    const struct CPU_State initial_cpu = {.pc=0xa528, .a=0xbd, .x=0x9f, .y=0x6b, .sp=0x97, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x009f, .value=0xcc}, {.addr=0xa528, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xa529, .a=0xfd, .x=0x9f, .y=0x6b, .sp=0x97, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x009f, .value=0xcc}, {.addr=0xa528, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xa528, .value=0x06, .type=IO_READ},
        {.addr=0xa529, .value=DUMMY, .type=IO_READ},
        {.addr=0x009f, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02AA) {
    const struct CPU_State initial_cpu = {.pc=0xf7e6, .a=0xc0, .x=0x02, .y=0x79, .sp=0x2e, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x0002, .value=0x81}, {.addr=0xf7e6, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xf7e7, .a=0xc1, .x=0x02, .y=0x79, .sp=0x2e, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x0002, .value=0x81}, {.addr=0xf7e6, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xf7e6, .value=0x06, .type=IO_READ},
        {.addr=0xf7e7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0002, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02AB) {
    const struct CPU_State initial_cpu = {.pc=0xcd75, .a=0x50, .x=0x07, .y=0x94, .sp=0xd0, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x0007, .value=0xa4}, {.addr=0xcd75, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xcd76, .a=0xf4, .x=0x07, .y=0x94, .sp=0xd0, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x0007, .value=0xa4}, {.addr=0xcd75, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xcd75, .value=0x06, .type=IO_READ},
        {.addr=0xcd76, .value=DUMMY, .type=IO_READ},
        {.addr=0x0007, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02AC) {
    const struct CPU_State initial_cpu = {.pc=0xdc61, .a=0x22, .x=0x1d, .y=0x1a, .sp=0x2e, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0x89}, {.addr=0xdc61, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xdc62, .a=0xab, .x=0x1d, .y=0x1a, .sp=0x2e, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0x89}, {.addr=0xdc61, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xdc61, .value=0x06, .type=IO_READ},
        {.addr=0xdc62, .value=DUMMY, .type=IO_READ},
        {.addr=0x011d, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02AD) {
    const struct CPU_State initial_cpu = {.pc=0x6074, .a=0xf4, .x=0x8e, .y=0x6e, .sp=0x6d, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0x11}, {.addr=0x6074, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x6075, .a=0xf5, .x=0x8e, .y=0x6e, .sp=0x6d, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0x11}, {.addr=0x6074, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x6074, .value=0x06, .type=IO_READ},
        {.addr=0x6075, .value=DUMMY, .type=IO_READ},
        {.addr=0x018e, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02AE) {
    const struct CPU_State initial_cpu = {.pc=0xe001, .a=0x08, .x=0x8d, .y=0xa0, .sp=0xb0, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x018d, .value=0xe8}, {.addr=0xe001, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xe002, .a=0xe8, .x=0x8d, .y=0xa0, .sp=0xb0, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x018d, .value=0xe8}, {.addr=0xe001, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xe001, .value=0x06, .type=IO_READ},
        {.addr=0xe002, .value=DUMMY, .type=IO_READ},
        {.addr=0x018d, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02AF) {
    const struct CPU_State initial_cpu = {.pc=0x70f5, .a=0x8c, .x=0xc9, .y=0x9d, .sp=0x70, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x01c9, .value=0x17}, {.addr=0x70f5, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x70f6, .a=0x9f, .x=0xc9, .y=0x9d, .sp=0x70, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x01c9, .value=0x17}, {.addr=0x70f5, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x70f5, .value=0x06, .type=IO_READ},
        {.addr=0x70f6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c9, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02B0) {
    const struct CPU_State initial_cpu = {.pc=0x5e23, .a=0x89, .x=0x44, .y=0x34, .sp=0x36, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x0044, .value=0xc3}, {.addr=0x5e23, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x5e24, .a=0xcb, .x=0x44, .y=0x34, .sp=0x36, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x0044, .value=0xc3}, {.addr=0x5e23, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x5e23, .value=0x06, .type=IO_READ},
        {.addr=0x5e24, .value=DUMMY, .type=IO_READ},
        {.addr=0x0044, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02B1) {
    const struct CPU_State initial_cpu = {.pc=0x63b7, .a=0x28, .x=0xa1, .y=0xbe, .sp=0x49, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x00a1, .value=0x0e}, {.addr=0x63b7, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x63b8, .a=0x2e, .x=0xa1, .y=0xbe, .sp=0x49, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x00a1, .value=0x0e}, {.addr=0x63b7, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x63b7, .value=0x06, .type=IO_READ},
        {.addr=0x63b8, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a1, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02B2) {
    const struct CPU_State initial_cpu = {.pc=0x98c2, .a=0x23, .x=0x14, .y=0x2a, .sp=0xa8, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x0114, .value=0x60}, {.addr=0x98c2, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x98c3, .a=0x63, .x=0x14, .y=0x2a, .sp=0xa8, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0114, .value=0x60}, {.addr=0x98c2, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x98c2, .value=0x06, .type=IO_READ},
        {.addr=0x98c3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0114, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02B3) {
    const struct CPU_State initial_cpu = {.pc=0xdbc2, .a=0x13, .x=0xcc, .y=0xc0, .sp=0xe6, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x01cc, .value=0x02}, {.addr=0xdbc2, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xdbc3, .a=0x13, .x=0xcc, .y=0xc0, .sp=0xe6, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x01cc, .value=0x02}, {.addr=0xdbc2, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xdbc2, .value=0x06, .type=IO_READ},
        {.addr=0xdbc3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cc, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02B4) {
    const struct CPU_State initial_cpu = {.pc=0xa6e3, .a=0x8a, .x=0xae, .y=0x07, .sp=0xd5, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x00ae, .value=0x6f}, {.addr=0xa6e3, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xa6e4, .a=0xef, .x=0xae, .y=0x07, .sp=0xd5, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x00ae, .value=0x6f}, {.addr=0xa6e3, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xa6e3, .value=0x06, .type=IO_READ},
        {.addr=0xa6e4, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ae, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02B5) {
    const struct CPU_State initial_cpu = {.pc=0xe4a0, .a=0x9c, .x=0xc4, .y=0x3c, .sp=0x5f, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x00c4, .value=0x03}, {.addr=0xe4a0, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xe4a1, .a=0x9f, .x=0xc4, .y=0x3c, .sp=0x5f, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x00c4, .value=0x03}, {.addr=0xe4a0, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xe4a0, .value=0x06, .type=IO_READ},
        {.addr=0xe4a1, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c4, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02B6) {
    const struct CPU_State initial_cpu = {.pc=0x95be, .a=0xa7, .x=0x30, .y=0x8a, .sp=0x77, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x0130, .value=0xaf}, {.addr=0x95be, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x95bf, .a=0xaf, .x=0x30, .y=0x8a, .sp=0x77, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x0130, .value=0xaf}, {.addr=0x95be, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x95be, .value=0x06, .type=IO_READ},
        {.addr=0x95bf, .value=DUMMY, .type=IO_READ},
        {.addr=0x0130, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02B7) {
    const struct CPU_State initial_cpu = {.pc=0x879a, .a=0x71, .x=0x66, .y=0x07, .sp=0xc3, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x0066, .value=0xa6}, {.addr=0x879a, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x879b, .a=0xf7, .x=0x66, .y=0x07, .sp=0xc3, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x0066, .value=0xa6}, {.addr=0x879a, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x879a, .value=0x06, .type=IO_READ},
        {.addr=0x879b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0066, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02B8) {
    const struct CPU_State initial_cpu = {.pc=0xfbe5, .a=0xc7, .x=0x6d, .y=0x03, .sp=0xbc, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x016d, .value=0x19}, {.addr=0xfbe5, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xfbe6, .a=0xdf, .x=0x6d, .y=0x03, .sp=0xbc, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x016d, .value=0x19}, {.addr=0xfbe5, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xfbe5, .value=0x06, .type=IO_READ},
        {.addr=0xfbe6, .value=DUMMY, .type=IO_READ},
        {.addr=0x016d, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02B9) {
    const struct CPU_State initial_cpu = {.pc=0xe1d5, .a=0x36, .x=0x6f, .y=0x2b, .sp=0x49, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x016f, .value=0x8f}, {.addr=0xe1d5, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xe1d6, .a=0xbf, .x=0x6f, .y=0x2b, .sp=0x49, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x016f, .value=0x8f}, {.addr=0xe1d5, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xe1d5, .value=0x06, .type=IO_READ},
        {.addr=0xe1d6, .value=DUMMY, .type=IO_READ},
        {.addr=0x016f, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02BA) {
    const struct CPU_State initial_cpu = {.pc=0x775d, .a=0xf2, .x=0x7d, .y=0x02, .sp=0x55, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0xa8}, {.addr=0x775d, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x775e, .a=0xfa, .x=0x7d, .y=0x02, .sp=0x55, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0xa8}, {.addr=0x775d, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x775d, .value=0x06, .type=IO_READ},
        {.addr=0x775e, .value=DUMMY, .type=IO_READ},
        {.addr=0x017d, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02BB) {
    const struct CPU_State initial_cpu = {.pc=0x9062, .a=0x63, .x=0xb0, .y=0xdc, .sp=0x3d, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x00b0, .value=0x77}, {.addr=0x9062, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x9063, .a=0x77, .x=0xb0, .y=0xdc, .sp=0x3d, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x00b0, .value=0x77}, {.addr=0x9062, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x9062, .value=0x06, .type=IO_READ},
        {.addr=0x9063, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b0, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02BC) {
    const struct CPU_State initial_cpu = {.pc=0x0b33, .a=0x15, .x=0x20, .y=0xba, .sp=0x11, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x0120, .value=0x1a}, {.addr=0x0b33, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x0b34, .a=0x1f, .x=0x20, .y=0xba, .sp=0x11, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x0120, .value=0x1a}, {.addr=0x0b33, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x0b33, .value=0x06, .type=IO_READ},
        {.addr=0x0b34, .value=DUMMY, .type=IO_READ},
        {.addr=0x0120, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02BD) {
    const struct CPU_State initial_cpu = {.pc=0xb895, .a=0xc5, .x=0xd6, .y=0x26, .sp=0xf3, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x01d6, .value=0x53}, {.addr=0xb895, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xb896, .a=0xd7, .x=0xd6, .y=0x26, .sp=0xf3, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x01d6, .value=0x53}, {.addr=0xb895, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xb895, .value=0x06, .type=IO_READ},
        {.addr=0xb896, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d6, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02BE) {
    const struct CPU_State initial_cpu = {.pc=0xf4b5, .a=0x91, .x=0xb7, .y=0x01, .sp=0x5e, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x00b7, .value=0x53}, {.addr=0xf4b5, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xf4b6, .a=0xd3, .x=0xb7, .y=0x01, .sp=0x5e, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x00b7, .value=0x53}, {.addr=0xf4b5, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xf4b5, .value=0x06, .type=IO_READ},
        {.addr=0xf4b6, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b7, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02BF) {
    const struct CPU_State initial_cpu = {.pc=0x0c6a, .a=0xd7, .x=0x74, .y=0x89, .sp=0xbe, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x0074, .value=0x12}, {.addr=0x0c6a, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x0c6b, .a=0xd7, .x=0x74, .y=0x89, .sp=0xbe, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x0074, .value=0x12}, {.addr=0x0c6a, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x0c6a, .value=0x06, .type=IO_READ},
        {.addr=0x0c6b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0074, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02C0) {
    const struct CPU_State initial_cpu = {.pc=0x0ab7, .a=0x51, .x=0x05, .y=0x41, .sp=0xe9, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x0005, .value=0xf9}, {.addr=0x0ab7, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x0ab8, .a=0xf9, .x=0x05, .y=0x41, .sp=0xe9, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x0005, .value=0xf9}, {.addr=0x0ab7, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x0ab7, .value=0x06, .type=IO_READ},
        {.addr=0x0ab8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0005, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02C1) {
    const struct CPU_State initial_cpu = {.pc=0xde05, .a=0x86, .x=0xdb, .y=0x68, .sp=0x8d, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x00db, .value=0xf1}, {.addr=0xde05, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xde06, .a=0xf7, .x=0xdb, .y=0x68, .sp=0x8d, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x00db, .value=0xf1}, {.addr=0xde05, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xde05, .value=0x06, .type=IO_READ},
        {.addr=0xde06, .value=DUMMY, .type=IO_READ},
        {.addr=0x00db, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02C2) {
    const struct CPU_State initial_cpu = {.pc=0x74dd, .a=0xd0, .x=0xad, .y=0xa4, .sp=0xe1, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x00ad, .value=0x2a}, {.addr=0x74dd, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x74de, .a=0xfa, .x=0xad, .y=0xa4, .sp=0xe1, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x00ad, .value=0x2a}, {.addr=0x74dd, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x74dd, .value=0x06, .type=IO_READ},
        {.addr=0x74de, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ad, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02C3) {
    const struct CPU_State initial_cpu = {.pc=0xb921, .a=0x18, .x=0xbb, .y=0xc5, .sp=0xad, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x00bb, .value=0xec}, {.addr=0xb921, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xb922, .a=0xfc, .x=0xbb, .y=0xc5, .sp=0xad, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x00bb, .value=0xec}, {.addr=0xb921, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xb921, .value=0x06, .type=IO_READ},
        {.addr=0xb922, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bb, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02C4) {
    const struct CPU_State initial_cpu = {.pc=0xc44b, .a=0x9d, .x=0x01, .y=0x34, .sp=0xcd, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x0101, .value=0x1b}, {.addr=0xc44b, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xc44c, .a=0x9f, .x=0x01, .y=0x34, .sp=0xcd, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x0101, .value=0x1b}, {.addr=0xc44b, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xc44b, .value=0x06, .type=IO_READ},
        {.addr=0xc44c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0101, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x533b, .a=0x64, .x=0x5f, .y=0xe3, .sp=0xe6, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x005f, .value=0x06}, {.addr=0x533b, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x533c, .a=0x66, .x=0x5f, .y=0xe3, .sp=0xe6, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x005f, .value=0x06}, {.addr=0x533b, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x533b, .value=0x06, .type=IO_READ},
        {.addr=0x533c, .value=DUMMY, .type=IO_READ},
        {.addr=0x005f, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02C6) {
    const struct CPU_State initial_cpu = {.pc=0xa057, .a=0x47, .x=0x86, .y=0xa9, .sp=0x5d, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x0086, .value=0xf0}, {.addr=0xa057, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xa058, .a=0xf7, .x=0x86, .y=0xa9, .sp=0x5d, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x0086, .value=0xf0}, {.addr=0xa057, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xa057, .value=0x06, .type=IO_READ},
        {.addr=0xa058, .value=DUMMY, .type=IO_READ},
        {.addr=0x0086, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02C7) {
    const struct CPU_State initial_cpu = {.pc=0x893e, .a=0xb6, .x=0xeb, .y=0xe3, .sp=0xcc, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x00eb, .value=0xb0}, {.addr=0x893e, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x893f, .a=0xb6, .x=0xeb, .y=0xe3, .sp=0xcc, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x00eb, .value=0xb0}, {.addr=0x893e, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x893e, .value=0x06, .type=IO_READ},
        {.addr=0x893f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00eb, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02C8) {
    const struct CPU_State initial_cpu = {.pc=0x4018, .a=0x59, .x=0xc9, .y=0xc6, .sp=0xa0, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x00c9, .value=0xe9}, {.addr=0x4018, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x4019, .a=0xf9, .x=0xc9, .y=0xc6, .sp=0xa0, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x00c9, .value=0xe9}, {.addr=0x4018, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x4018, .value=0x06, .type=IO_READ},
        {.addr=0x4019, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c9, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02C9) {
    const struct CPU_State initial_cpu = {.pc=0xf904, .a=0xcd, .x=0x69, .y=0x37, .sp=0xc8, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x0069, .value=0x97}, {.addr=0xf904, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xf905, .a=0xdf, .x=0x69, .y=0x37, .sp=0xc8, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x0069, .value=0x97}, {.addr=0xf904, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xf904, .value=0x06, .type=IO_READ},
        {.addr=0xf905, .value=DUMMY, .type=IO_READ},
        {.addr=0x0069, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02CA) {
    const struct CPU_State initial_cpu = {.pc=0xb4c0, .a=0x57, .x=0x8b, .y=0x89, .sp=0xee, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x008b, .value=0x7d}, {.addr=0xb4c0, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xb4c1, .a=0x7f, .x=0x8b, .y=0x89, .sp=0xee, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x008b, .value=0x7d}, {.addr=0xb4c0, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xb4c0, .value=0x06, .type=IO_READ},
        {.addr=0xb4c1, .value=DUMMY, .type=IO_READ},
        {.addr=0x008b, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02CB) {
    const struct CPU_State initial_cpu = {.pc=0x38d8, .a=0x1f, .x=0xd5, .y=0x40, .sp=0xf0, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x01d5, .value=0xb5}, {.addr=0x38d8, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x38d9, .a=0xbf, .x=0xd5, .y=0x40, .sp=0xf0, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x01d5, .value=0xb5}, {.addr=0x38d8, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x38d8, .value=0x06, .type=IO_READ},
        {.addr=0x38d9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d5, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02CC) {
    const struct CPU_State initial_cpu = {.pc=0xc79b, .a=0x38, .x=0xbd, .y=0xaf, .sp=0x07, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x00bd, .value=0xbc}, {.addr=0xc79b, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xc79c, .a=0xbc, .x=0xbd, .y=0xaf, .sp=0x07, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x00bd, .value=0xbc}, {.addr=0xc79b, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xc79b, .value=0x06, .type=IO_READ},
        {.addr=0xc79c, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bd, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02CD) {
    const struct CPU_State initial_cpu = {.pc=0x2cfe, .a=0x47, .x=0x7c, .y=0x5a, .sp=0x80, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x007c, .value=0x52}, {.addr=0x2cfe, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x2cff, .a=0x57, .x=0x7c, .y=0x5a, .sp=0x80, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x007c, .value=0x52}, {.addr=0x2cfe, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x2cfe, .value=0x06, .type=IO_READ},
        {.addr=0x2cff, .value=DUMMY, .type=IO_READ},
        {.addr=0x007c, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02CE) {
    const struct CPU_State initial_cpu = {.pc=0x96f2, .a=0x09, .x=0xa4, .y=0x5d, .sp=0xe1, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x00a4, .value=0x48}, {.addr=0x96f2, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x96f3, .a=0x49, .x=0xa4, .y=0x5d, .sp=0xe1, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x00a4, .value=0x48}, {.addr=0x96f2, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x96f2, .value=0x06, .type=IO_READ},
        {.addr=0x96f3, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a4, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02CF) {
    const struct CPU_State initial_cpu = {.pc=0xa2c9, .a=0x22, .x=0xde, .y=0x79, .sp=0x52, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x00de, .value=0x35}, {.addr=0xa2c9, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xa2ca, .a=0x37, .x=0xde, .y=0x79, .sp=0x52, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x00de, .value=0x35}, {.addr=0xa2c9, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xa2c9, .value=0x06, .type=IO_READ},
        {.addr=0xa2ca, .value=DUMMY, .type=IO_READ},
        {.addr=0x00de, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02D0) {
    const struct CPU_State initial_cpu = {.pc=0x187c, .a=0xa6, .x=0x50, .y=0xff, .sp=0x1a, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x0150, .value=0xbd}, {.addr=0x187c, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x187d, .a=0xbf, .x=0x50, .y=0xff, .sp=0x1a, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x0150, .value=0xbd}, {.addr=0x187c, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x187c, .value=0x06, .type=IO_READ},
        {.addr=0x187d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0150, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02D1) {
    const struct CPU_State initial_cpu = {.pc=0x9cca, .a=0x8a, .x=0xf4, .y=0xe8, .sp=0xa7, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x01f4, .value=0x35}, {.addr=0x9cca, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x9ccb, .a=0xbf, .x=0xf4, .y=0xe8, .sp=0xa7, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x01f4, .value=0x35}, {.addr=0x9cca, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x9cca, .value=0x06, .type=IO_READ},
        {.addr=0x9ccb, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f4, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x3733, .a=0x5c, .x=0x4f, .y=0x97, .sp=0x54, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x004f, .value=0xc8}, {.addr=0x3733, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x3734, .a=0xdc, .x=0x4f, .y=0x97, .sp=0x54, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x004f, .value=0xc8}, {.addr=0x3733, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x3733, .value=0x06, .type=IO_READ},
        {.addr=0x3734, .value=DUMMY, .type=IO_READ},
        {.addr=0x004f, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02D3) {
    const struct CPU_State initial_cpu = {.pc=0x29c4, .a=0xa9, .x=0x79, .y=0x48, .sp=0x64, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x0179, .value=0xc7}, {.addr=0x29c4, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x29c5, .a=0xef, .x=0x79, .y=0x48, .sp=0x64, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0179, .value=0xc7}, {.addr=0x29c4, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x29c4, .value=0x06, .type=IO_READ},
        {.addr=0x29c5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0179, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02D4) {
    const struct CPU_State initial_cpu = {.pc=0x8c87, .a=0x6a, .x=0x9f, .y=0x7a, .sp=0xac, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x019f, .value=0xcd}, {.addr=0x8c87, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x8c88, .a=0xef, .x=0x9f, .y=0x7a, .sp=0xac, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x019f, .value=0xcd}, {.addr=0x8c87, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x8c87, .value=0x06, .type=IO_READ},
        {.addr=0x8c88, .value=DUMMY, .type=IO_READ},
        {.addr=0x019f, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02D5) {
    const struct CPU_State initial_cpu = {.pc=0x7853, .a=0xe3, .x=0xb3, .y=0x7b, .sp=0xde, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0x42}, {.addr=0x7853, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x7854, .a=0xe3, .x=0xb3, .y=0x7b, .sp=0xde, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0x42}, {.addr=0x7853, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x7853, .value=0x06, .type=IO_READ},
        {.addr=0x7854, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b3, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02D6) {
    const struct CPU_State initial_cpu = {.pc=0x2b70, .a=0x92, .x=0x67, .y=0x69, .sp=0xb5, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0x5a}, {.addr=0x2b70, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x2b71, .a=0xda, .x=0x67, .y=0x69, .sp=0xb5, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0x5a}, {.addr=0x2b70, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x2b70, .value=0x06, .type=IO_READ},
        {.addr=0x2b71, .value=DUMMY, .type=IO_READ},
        {.addr=0x0167, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02D7) {
    const struct CPU_State initial_cpu = {.pc=0x41ab, .a=0xfd, .x=0x77, .y=0x53, .sp=0x93, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x0177, .value=0xa3}, {.addr=0x41ab, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x41ac, .a=0xff, .x=0x77, .y=0x53, .sp=0x93, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x0177, .value=0xa3}, {.addr=0x41ab, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x41ab, .value=0x06, .type=IO_READ},
        {.addr=0x41ac, .value=DUMMY, .type=IO_READ},
        {.addr=0x0177, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02D8) {
    const struct CPU_State initial_cpu = {.pc=0x6a1c, .a=0x35, .x=0xd4, .y=0x2d, .sp=0xd3, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x01d4, .value=0xfb}, {.addr=0x6a1c, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x6a1d, .a=0xff, .x=0xd4, .y=0x2d, .sp=0xd3, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x01d4, .value=0xfb}, {.addr=0x6a1c, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x6a1c, .value=0x06, .type=IO_READ},
        {.addr=0x6a1d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d4, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02D9) {
    const struct CPU_State initial_cpu = {.pc=0x2a56, .a=0x3f, .x=0xe1, .y=0x07, .sp=0x25, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x00e1, .value=0xdb}, {.addr=0x2a56, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x2a57, .a=0xff, .x=0xe1, .y=0x07, .sp=0x25, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x00e1, .value=0xdb}, {.addr=0x2a56, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x2a56, .value=0x06, .type=IO_READ},
        {.addr=0x2a57, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e1, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02DA) {
    const struct CPU_State initial_cpu = {.pc=0x95c2, .a=0x48, .x=0x5b, .y=0xfd, .sp=0x63, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x005b, .value=0x1e}, {.addr=0x95c2, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x95c3, .a=0x5e, .x=0x5b, .y=0xfd, .sp=0x63, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x005b, .value=0x1e}, {.addr=0x95c2, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x95c2, .value=0x06, .type=IO_READ},
        {.addr=0x95c3, .value=DUMMY, .type=IO_READ},
        {.addr=0x005b, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02DC) {
    const struct CPU_State initial_cpu = {.pc=0xde6e, .a=0x32, .x=0xcf, .y=0x22, .sp=0x0d, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x00cf, .value=0x79}, {.addr=0xde6e, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xde6f, .a=0x7b, .x=0xcf, .y=0x22, .sp=0x0d, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x00cf, .value=0x79}, {.addr=0xde6e, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xde6e, .value=0x06, .type=IO_READ},
        {.addr=0xde6f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cf, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02DD) {
    const struct CPU_State initial_cpu = {.pc=0xc9fd, .a=0xd2, .x=0x25, .y=0xbd, .sp=0xc0, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x0025, .value=0xe9}, {.addr=0xc9fd, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xc9fe, .a=0xfb, .x=0x25, .y=0xbd, .sp=0xc0, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x0025, .value=0xe9}, {.addr=0xc9fd, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xc9fd, .value=0x06, .type=IO_READ},
        {.addr=0xc9fe, .value=DUMMY, .type=IO_READ},
        {.addr=0x0025, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02DE) {
    const struct CPU_State initial_cpu = {.pc=0x61df, .a=0x07, .x=0xb1, .y=0x21, .sp=0x13, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x00b1, .value=0xda}, {.addr=0x61df, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x61e0, .a=0xdf, .x=0xb1, .y=0x21, .sp=0x13, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x00b1, .value=0xda}, {.addr=0x61df, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x61df, .value=0x06, .type=IO_READ},
        {.addr=0x61e0, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b1, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02DF) {
    const struct CPU_State initial_cpu = {.pc=0xf410, .a=0x73, .x=0xdf, .y=0xc9, .sp=0xe4, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0xf7}, {.addr=0xf410, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xf411, .a=0xf7, .x=0xdf, .y=0xc9, .sp=0xe4, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0xf7}, {.addr=0xf410, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xf410, .value=0x06, .type=IO_READ},
        {.addr=0xf411, .value=DUMMY, .type=IO_READ},
        {.addr=0x01df, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02E0) {
    const struct CPU_State initial_cpu = {.pc=0xfe2a, .a=0x4d, .x=0xe3, .y=0x0c, .sp=0x65, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x00e3, .value=0xe2}, {.addr=0xfe2a, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xfe2b, .a=0xef, .x=0xe3, .y=0x0c, .sp=0x65, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x00e3, .value=0xe2}, {.addr=0xfe2a, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xfe2a, .value=0x06, .type=IO_READ},
        {.addr=0xfe2b, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e3, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02E1) {
    const struct CPU_State initial_cpu = {.pc=0x64e0, .a=0xe6, .x=0x71, .y=0x30, .sp=0xca, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x0171, .value=0x69}, {.addr=0x64e0, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x64e1, .a=0xef, .x=0x71, .y=0x30, .sp=0xca, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0171, .value=0x69}, {.addr=0x64e0, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x64e0, .value=0x06, .type=IO_READ},
        {.addr=0x64e1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0171, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02E2) {
    const struct CPU_State initial_cpu = {.pc=0xe1b2, .a=0xa6, .x=0x7b, .y=0xd8, .sp=0x7c, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0x41}, {.addr=0xe1b2, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xe1b3, .a=0xe7, .x=0x7b, .y=0xd8, .sp=0x7c, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0x41}, {.addr=0xe1b2, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xe1b2, .value=0x06, .type=IO_READ},
        {.addr=0xe1b3, .value=DUMMY, .type=IO_READ},
        {.addr=0x017b, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02E3) {
    const struct CPU_State initial_cpu = {.pc=0x90a4, .a=0xe8, .x=0xae, .y=0xf3, .sp=0xde, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x00ae, .value=0xa7}, {.addr=0x90a4, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x90a5, .a=0xef, .x=0xae, .y=0xf3, .sp=0xde, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x00ae, .value=0xa7}, {.addr=0x90a4, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x90a4, .value=0x06, .type=IO_READ},
        {.addr=0x90a5, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ae, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02E4) {
    const struct CPU_State initial_cpu = {.pc=0xcc38, .a=0xeb, .x=0x02, .y=0x5d, .sp=0x0f, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x0002, .value=0x05}, {.addr=0xcc38, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xcc39, .a=0xef, .x=0x02, .y=0x5d, .sp=0x0f, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0002, .value=0x05}, {.addr=0xcc38, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xcc38, .value=0x06, .type=IO_READ},
        {.addr=0xcc39, .value=DUMMY, .type=IO_READ},
        {.addr=0x0002, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02E5) {
    const struct CPU_State initial_cpu = {.pc=0xf556, .a=0x02, .x=0xf0, .y=0x06, .sp=0xba, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x01f0, .value=0x8a}, {.addr=0xf556, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xf557, .a=0x8a, .x=0xf0, .y=0x06, .sp=0xba, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x01f0, .value=0x8a}, {.addr=0xf556, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xf556, .value=0x06, .type=IO_READ},
        {.addr=0xf557, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f0, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02E6) {
    const struct CPU_State initial_cpu = {.pc=0xb026, .a=0x9a, .x=0x27, .y=0xc3, .sp=0xd3, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x0127, .value=0x7f}, {.addr=0xb026, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xb027, .a=0xff, .x=0x27, .y=0xc3, .sp=0xd3, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x0127, .value=0x7f}, {.addr=0xb026, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xb026, .value=0x06, .type=IO_READ},
        {.addr=0xb027, .value=DUMMY, .type=IO_READ},
        {.addr=0x0127, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02E7) {
    const struct CPU_State initial_cpu = {.pc=0x7f3c, .a=0x41, .x=0x9e, .y=0x16, .sp=0xe6, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0xd7}, {.addr=0x7f3c, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x7f3d, .a=0xd7, .x=0x9e, .y=0x16, .sp=0xe6, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0xd7}, {.addr=0x7f3c, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x7f3c, .value=0x06, .type=IO_READ},
        {.addr=0x7f3d, .value=DUMMY, .type=IO_READ},
        {.addr=0x019e, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02E8) {
    const struct CPU_State initial_cpu = {.pc=0xffd6, .a=0x9e, .x=0x92, .y=0x92, .sp=0x24, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x0192, .value=0xde}, {.addr=0xffd6, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xffd7, .a=0xde, .x=0x92, .y=0x92, .sp=0x24, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x0192, .value=0xde}, {.addr=0xffd6, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xffd6, .value=0x06, .type=IO_READ},
        {.addr=0xffd7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0192, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02E9) {
    const struct CPU_State initial_cpu = {.pc=0x2b88, .a=0x50, .x=0x12, .y=0x43, .sp=0x44, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0xac}, {.addr=0x2b88, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x2b89, .a=0xfc, .x=0x12, .y=0x43, .sp=0x44, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0xac}, {.addr=0x2b88, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x2b88, .value=0x06, .type=IO_READ},
        {.addr=0x2b89, .value=DUMMY, .type=IO_READ},
        {.addr=0x0112, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02EA) {
    const struct CPU_State initial_cpu = {.pc=0x0799, .a=0x20, .x=0x0d, .y=0x41, .sp=0xab, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x010d, .value=0x09}, {.addr=0x0799, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x079a, .a=0x29, .x=0x0d, .y=0x41, .sp=0xab, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x010d, .value=0x09}, {.addr=0x0799, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x0799, .value=0x06, .type=IO_READ},
        {.addr=0x079a, .value=DUMMY, .type=IO_READ},
        {.addr=0x010d, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02EB) {
    const struct CPU_State initial_cpu = {.pc=0xaebd, .a=0xba, .x=0x89, .y=0xd9, .sp=0x8e, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x0189, .value=0x9e}, {.addr=0xaebd, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xaebe, .a=0xbe, .x=0x89, .y=0xd9, .sp=0x8e, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x0189, .value=0x9e}, {.addr=0xaebd, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xaebd, .value=0x06, .type=IO_READ},
        {.addr=0xaebe, .value=DUMMY, .type=IO_READ},
        {.addr=0x0189, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02EC) {
    const struct CPU_State initial_cpu = {.pc=0x0e90, .a=0x68, .x=0xdd, .y=0x54, .sp=0x69, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x00dd, .value=0x3b}, {.addr=0x0e90, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x0e91, .a=0x7b, .x=0xdd, .y=0x54, .sp=0x69, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x00dd, .value=0x3b}, {.addr=0x0e90, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x0e90, .value=0x06, .type=IO_READ},
        {.addr=0x0e91, .value=DUMMY, .type=IO_READ},
        {.addr=0x00dd, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02ED) {
    const struct CPU_State initial_cpu = {.pc=0xae13, .a=0xb2, .x=0xd6, .y=0xd6, .sp=0x29, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x01d6, .value=0x33}, {.addr=0xae13, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xae14, .a=0xb3, .x=0xd6, .y=0xd6, .sp=0x29, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x01d6, .value=0x33}, {.addr=0xae13, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xae13, .value=0x06, .type=IO_READ},
        {.addr=0xae14, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d6, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02EE) {
    const struct CPU_State initial_cpu = {.pc=0x4676, .a=0x16, .x=0xed, .y=0xe5, .sp=0xd5, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x01ed, .value=0xfc}, {.addr=0x4676, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x4677, .a=0xfe, .x=0xed, .y=0xe5, .sp=0xd5, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x01ed, .value=0xfc}, {.addr=0x4676, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x4676, .value=0x06, .type=IO_READ},
        {.addr=0x4677, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ed, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02EF) {
    const struct CPU_State initial_cpu = {.pc=0x2de4, .a=0x6a, .x=0xed, .y=0x61, .sp=0xf7, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x00ed, .value=0x7a}, {.addr=0x2de4, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x2de5, .a=0x7a, .x=0xed, .y=0x61, .sp=0xf7, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x00ed, .value=0x7a}, {.addr=0x2de4, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x2de4, .value=0x06, .type=IO_READ},
        {.addr=0x2de5, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ed, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02F0) {
    const struct CPU_State initial_cpu = {.pc=0xe651, .a=0x56, .x=0x4f, .y=0xf4, .sp=0x36, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x014f, .value=0x8b}, {.addr=0xe651, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xe652, .a=0xdf, .x=0x4f, .y=0xf4, .sp=0x36, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x014f, .value=0x8b}, {.addr=0xe651, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xe651, .value=0x06, .type=IO_READ},
        {.addr=0xe652, .value=DUMMY, .type=IO_READ},
        {.addr=0x014f, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02F1) {
    const struct CPU_State initial_cpu = {.pc=0x0da0, .a=0x46, .x=0x76, .y=0x13, .sp=0x04, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x0076, .value=0xae}, {.addr=0x0da0, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x0da1, .a=0xee, .x=0x76, .y=0x13, .sp=0x04, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0076, .value=0xae}, {.addr=0x0da0, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x0da0, .value=0x06, .type=IO_READ},
        {.addr=0x0da1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0076, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02F3) {
    const struct CPU_State initial_cpu = {.pc=0x5a7a, .a=0x29, .x=0x83, .y=0x6f, .sp=0x5f, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x0083, .value=0x84}, {.addr=0x5a7a, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x5a7b, .a=0xad, .x=0x83, .y=0x6f, .sp=0x5f, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x0083, .value=0x84}, {.addr=0x5a7a, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x5a7a, .value=0x06, .type=IO_READ},
        {.addr=0x5a7b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0083, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02F4) {
    const struct CPU_State initial_cpu = {.pc=0x0d76, .a=0x41, .x=0x61, .y=0x75, .sp=0xe4, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x0061, .value=0x61}, {.addr=0x0d76, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x0d77, .a=0x61, .x=0x61, .y=0x75, .sp=0xe4, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0061, .value=0x61}, {.addr=0x0d76, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x0d76, .value=0x06, .type=IO_READ},
        {.addr=0x0d77, .value=DUMMY, .type=IO_READ},
        {.addr=0x0061, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02F5) {
    const struct CPU_State initial_cpu = {.pc=0x89b0, .a=0x89, .x=0xdf, .y=0xdf, .sp=0xe7, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x00df, .value=0x4f}, {.addr=0x89b0, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x89b1, .a=0xcf, .x=0xdf, .y=0xdf, .sp=0xe7, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x00df, .value=0x4f}, {.addr=0x89b0, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x89b0, .value=0x06, .type=IO_READ},
        {.addr=0x89b1, .value=DUMMY, .type=IO_READ},
        {.addr=0x00df, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02F6) {
    const struct CPU_State initial_cpu = {.pc=0x9e64, .a=0x86, .x=0xb5, .y=0x81, .sp=0xa7, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x01b5, .value=0xf0}, {.addr=0x9e64, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x9e65, .a=0xf6, .x=0xb5, .y=0x81, .sp=0xa7, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x01b5, .value=0xf0}, {.addr=0x9e64, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x9e64, .value=0x06, .type=IO_READ},
        {.addr=0x9e65, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b5, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02F8) {
    const struct CPU_State initial_cpu = {.pc=0x90d7, .a=0xae, .x=0xe1, .y=0xa1, .sp=0xee, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x01e1, .value=0x2c}, {.addr=0x90d7, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x90d8, .a=0xae, .x=0xe1, .y=0xa1, .sp=0xee, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x01e1, .value=0x2c}, {.addr=0x90d7, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x90d7, .value=0x06, .type=IO_READ},
        {.addr=0x90d8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e1, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02F9) {
    const struct CPU_State initial_cpu = {.pc=0x38d7, .a=0x1b, .x=0xfc, .y=0x4d, .sp=0x40, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x0d}, {.addr=0x38d7, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x38d8, .a=0x1f, .x=0xfc, .y=0x4d, .sp=0x40, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0x0d}, {.addr=0x38d7, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x38d7, .value=0x06, .type=IO_READ},
        {.addr=0x38d8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fc, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02FA) {
    const struct CPU_State initial_cpu = {.pc=0x875c, .a=0x41, .x=0x50, .y=0x82, .sp=0x77, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x0150, .value=0xb3}, {.addr=0x875c, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x875d, .a=0xf3, .x=0x50, .y=0x82, .sp=0x77, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0150, .value=0xb3}, {.addr=0x875c, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x875c, .value=0x06, .type=IO_READ},
        {.addr=0x875d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0150, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02FB) {
    const struct CPU_State initial_cpu = {.pc=0xe637, .a=0x8a, .x=0x0c, .y=0xfa, .sp=0x07, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0x2c}, {.addr=0xe637, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xe638, .a=0xae, .x=0x0c, .y=0xfa, .sp=0x07, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0x2c}, {.addr=0xe637, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xe637, .value=0x06, .type=IO_READ},
        {.addr=0xe638, .value=DUMMY, .type=IO_READ},
        {.addr=0x010c, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02FC) {
    const struct CPU_State initial_cpu = {.pc=0xb19c, .a=0x97, .x=0xa9, .y=0x0e, .sp=0x8c, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x01a9, .value=0x4f}, {.addr=0xb19c, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xb19d, .a=0xdf, .x=0xa9, .y=0x0e, .sp=0x8c, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x01a9, .value=0x4f}, {.addr=0xb19c, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xb19c, .value=0x06, .type=IO_READ},
        {.addr=0xb19d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a9, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02FE) {
    const struct CPU_State initial_cpu = {.pc=0x7e7e, .a=0x53, .x=0x55, .y=0x96, .sp=0x72, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0xac}, {.addr=0x7e7e, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x7e7f, .a=0xff, .x=0x55, .y=0x96, .sp=0x72, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0xac}, {.addr=0x7e7e, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x7e7e, .value=0x06, .type=IO_READ},
        {.addr=0x7e7f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0155, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x3716, .a=0x1a, .x=0x57, .y=0x2e, .sp=0x8a, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x0057, .value=0xeb}, {.addr=0x3716, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x3717, .a=0xfb, .x=0x57, .y=0x2e, .sp=0x8a, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0057, .value=0xeb}, {.addr=0x3716, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x3716, .value=0x06, .type=IO_READ},
        {.addr=0x3717, .value=DUMMY, .type=IO_READ},
        {.addr=0x0057, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0300) {
    const struct CPU_State initial_cpu = {.pc=0x9b02, .a=0xe6, .x=0x52, .y=0xc8, .sp=0xad, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x0052, .value=0x6e}, {.addr=0x9b02, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x9b03, .a=0xee, .x=0x52, .y=0xc8, .sp=0xad, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x0052, .value=0x6e}, {.addr=0x9b02, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x9b02, .value=0x06, .type=IO_READ},
        {.addr=0x9b03, .value=DUMMY, .type=IO_READ},
        {.addr=0x0052, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0301) {
    const struct CPU_State initial_cpu = {.pc=0x4e83, .a=0xe4, .x=0x51, .y=0xec, .sp=0x74, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x0151, .value=0xda}, {.addr=0x4e83, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x4e84, .a=0xfe, .x=0x51, .y=0xec, .sp=0x74, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x0151, .value=0xda}, {.addr=0x4e83, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x4e83, .value=0x06, .type=IO_READ},
        {.addr=0x4e84, .value=DUMMY, .type=IO_READ},
        {.addr=0x0151, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0302) {
    const struct CPU_State initial_cpu = {.pc=0x123b, .a=0xb9, .x=0x2f, .y=0x8f, .sp=0x08, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x002f, .value=0x69}, {.addr=0x123b, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x123c, .a=0xf9, .x=0x2f, .y=0x8f, .sp=0x08, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x002f, .value=0x69}, {.addr=0x123b, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x123b, .value=0x06, .type=IO_READ},
        {.addr=0x123c, .value=DUMMY, .type=IO_READ},
        {.addr=0x002f, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0303) {
    const struct CPU_State initial_cpu = {.pc=0xae24, .a=0x89, .x=0x92, .y=0x99, .sp=0xbf, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x0192, .value=0xd0}, {.addr=0xae24, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xae25, .a=0xd9, .x=0x92, .y=0x99, .sp=0xbf, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x0192, .value=0xd0}, {.addr=0xae24, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xae24, .value=0x06, .type=IO_READ},
        {.addr=0xae25, .value=DUMMY, .type=IO_READ},
        {.addr=0x0192, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0304) {
    const struct CPU_State initial_cpu = {.pc=0x1265, .a=0xe9, .x=0xa7, .y=0xd8, .sp=0x48, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x01a7, .value=0xf1}, {.addr=0x1265, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x1266, .a=0xf9, .x=0xa7, .y=0xd8, .sp=0x48, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x01a7, .value=0xf1}, {.addr=0x1265, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x1265, .value=0x06, .type=IO_READ},
        {.addr=0x1266, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a7, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0306) {
    const struct CPU_State initial_cpu = {.pc=0xdcb5, .a=0xe2, .x=0xda, .y=0x5d, .sp=0x80, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x00da, .value=0xca}, {.addr=0xdcb5, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xdcb6, .a=0xea, .x=0xda, .y=0x5d, .sp=0x80, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x00da, .value=0xca}, {.addr=0xdcb5, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xdcb5, .value=0x06, .type=IO_READ},
        {.addr=0xdcb6, .value=DUMMY, .type=IO_READ},
        {.addr=0x00da, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0307) {
    const struct CPU_State initial_cpu = {.pc=0x38fd, .a=0xa5, .x=0xe2, .y=0x7d, .sp=0x9c, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0x0d}, {.addr=0x38fd, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x38fe, .a=0xad, .x=0xe2, .y=0x7d, .sp=0x9c, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0x0d}, {.addr=0x38fd, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x38fd, .value=0x06, .type=IO_READ},
        {.addr=0x38fe, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e2, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0308) {
    const struct CPU_State initial_cpu = {.pc=0x9139, .a=0xe0, .x=0xb1, .y=0xca, .sp=0x89, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x01b1, .value=0x4d}, {.addr=0x9139, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x913a, .a=0xed, .x=0xb1, .y=0xca, .sp=0x89, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x01b1, .value=0x4d}, {.addr=0x9139, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x9139, .value=0x06, .type=IO_READ},
        {.addr=0x913a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b1, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0309) {
    const struct CPU_State initial_cpu = {.pc=0x6ec1, .a=0x66, .x=0x78, .y=0x17, .sp=0xc7, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x0078, .value=0x5e}, {.addr=0x6ec1, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x6ec2, .a=0x7e, .x=0x78, .y=0x17, .sp=0xc7, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0078, .value=0x5e}, {.addr=0x6ec1, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x6ec1, .value=0x06, .type=IO_READ},
        {.addr=0x6ec2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0078, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_030A) {
    const struct CPU_State initial_cpu = {.pc=0x4632, .a=0xe6, .x=0x17, .y=0x73, .sp=0x7e, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x0117, .value=0x45}, {.addr=0x4632, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x4633, .a=0xe7, .x=0x17, .y=0x73, .sp=0x7e, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x0117, .value=0x45}, {.addr=0x4632, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x4632, .value=0x06, .type=IO_READ},
        {.addr=0x4633, .value=DUMMY, .type=IO_READ},
        {.addr=0x0117, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_030B) {
    const struct CPU_State initial_cpu = {.pc=0xe3f3, .a=0x88, .x=0x95, .y=0x66, .sp=0xaf, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x0095, .value=0x14}, {.addr=0xe3f3, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xe3f4, .a=0x9c, .x=0x95, .y=0x66, .sp=0xaf, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0095, .value=0x14}, {.addr=0xe3f3, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xe3f3, .value=0x06, .type=IO_READ},
        {.addr=0xe3f4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0095, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_030C) {
    const struct CPU_State initial_cpu = {.pc=0x7123, .a=0x30, .x=0x16, .y=0xd2, .sp=0xb6, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x0116, .value=0xdc}, {.addr=0x7123, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x7124, .a=0xfc, .x=0x16, .y=0xd2, .sp=0xb6, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x0116, .value=0xdc}, {.addr=0x7123, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x7123, .value=0x06, .type=IO_READ},
        {.addr=0x7124, .value=DUMMY, .type=IO_READ},
        {.addr=0x0116, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_030E) {
    const struct CPU_State initial_cpu = {.pc=0x90e6, .a=0xb9, .x=0x14, .y=0xfa, .sp=0xc0, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x0014, .value=0x94}, {.addr=0x90e6, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x90e7, .a=0xbd, .x=0x14, .y=0xfa, .sp=0xc0, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x0014, .value=0x94}, {.addr=0x90e6, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x90e6, .value=0x06, .type=IO_READ},
        {.addr=0x90e7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0014, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_030F) {
    const struct CPU_State initial_cpu = {.pc=0xfcdf, .a=0x63, .x=0xb4, .y=0xd4, .sp=0x61, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x00b4, .value=0xab}, {.addr=0xfcdf, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xfce0, .a=0xeb, .x=0xb4, .y=0xd4, .sp=0x61, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x00b4, .value=0xab}, {.addr=0xfcdf, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xfcdf, .value=0x06, .type=IO_READ},
        {.addr=0xfce0, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b4, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0310) {
    const struct CPU_State initial_cpu = {.pc=0x159f, .a=0x55, .x=0x84, .y=0x92, .sp=0xd3, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x0084, .value=0xa7}, {.addr=0x159f, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x15a0, .a=0xf7, .x=0x84, .y=0x92, .sp=0xd3, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x0084, .value=0xa7}, {.addr=0x159f, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x159f, .value=0x06, .type=IO_READ},
        {.addr=0x15a0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0084, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0311) {
    const struct CPU_State initial_cpu = {.pc=0x0c95, .a=0x1f, .x=0x9b, .y=0x5e, .sp=0xd5, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x009b, .value=0xf5}, {.addr=0x0c95, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x0c96, .a=0xff, .x=0x9b, .y=0x5e, .sp=0xd5, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x009b, .value=0xf5}, {.addr=0x0c95, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x0c95, .value=0x06, .type=IO_READ},
        {.addr=0x0c96, .value=DUMMY, .type=IO_READ},
        {.addr=0x009b, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0312) {
    const struct CPU_State initial_cpu = {.pc=0x04f4, .a=0x2e, .x=0x43, .y=0x02, .sp=0x83, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x0043, .value=0x4f}, {.addr=0x04f4, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x04f5, .a=0x6f, .x=0x43, .y=0x02, .sp=0x83, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x0043, .value=0x4f}, {.addr=0x04f4, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x04f4, .value=0x06, .type=IO_READ},
        {.addr=0x04f5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0043, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0313) {
    const struct CPU_State initial_cpu = {.pc=0x7bfc, .a=0x35, .x=0x71, .y=0x76, .sp=0x44, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x0071, .value=0xaf}, {.addr=0x7bfc, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x7bfd, .a=0xbf, .x=0x71, .y=0x76, .sp=0x44, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0071, .value=0xaf}, {.addr=0x7bfc, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x7bfc, .value=0x06, .type=IO_READ},
        {.addr=0x7bfd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0071, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0314) {
    const struct CPU_State initial_cpu = {.pc=0x13ae, .a=0x1d, .x=0xae, .y=0x19, .sp=0xf8, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x01ae, .value=0x5e}, {.addr=0x13ae, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x13af, .a=0x5f, .x=0xae, .y=0x19, .sp=0xf8, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x01ae, .value=0x5e}, {.addr=0x13ae, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x13ae, .value=0x06, .type=IO_READ},
        {.addr=0x13af, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ae, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0315) {
    const struct CPU_State initial_cpu = {.pc=0x6d27, .a=0x6c, .x=0x19, .y=0xe1, .sp=0xc9, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x0119, .value=0x14}, {.addr=0x6d27, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x6d28, .a=0x7c, .x=0x19, .y=0xe1, .sp=0xc9, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0119, .value=0x14}, {.addr=0x6d27, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x6d27, .value=0x06, .type=IO_READ},
        {.addr=0x6d28, .value=DUMMY, .type=IO_READ},
        {.addr=0x0119, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0316) {
    const struct CPU_State initial_cpu = {.pc=0xd817, .a=0x85, .x=0x95, .y=0x3c, .sp=0x99, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x0195, .value=0x84}, {.addr=0xd817, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xd818, .a=0x85, .x=0x95, .y=0x3c, .sp=0x99, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x0195, .value=0x84}, {.addr=0xd817, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xd817, .value=0x06, .type=IO_READ},
        {.addr=0xd818, .value=DUMMY, .type=IO_READ},
        {.addr=0x0195, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0317) {
    const struct CPU_State initial_cpu = {.pc=0xebb6, .a=0xc4, .x=0xe9, .y=0xdd, .sp=0x14, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x00e9, .value=0x59}, {.addr=0xebb6, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xebb7, .a=0xdd, .x=0xe9, .y=0xdd, .sp=0x14, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x00e9, .value=0x59}, {.addr=0xebb6, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xebb6, .value=0x06, .type=IO_READ},
        {.addr=0xebb7, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e9, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0318) {
    const struct CPU_State initial_cpu = {.pc=0x5d35, .a=0x92, .x=0xcf, .y=0x3d, .sp=0x1f, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x00cf, .value=0x10}, {.addr=0x5d35, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x5d36, .a=0x92, .x=0xcf, .y=0x3d, .sp=0x1f, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x00cf, .value=0x10}, {.addr=0x5d35, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x5d35, .value=0x06, .type=IO_READ},
        {.addr=0x5d36, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cf, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0319) {
    const struct CPU_State initial_cpu = {.pc=0xbe32, .a=0xc4, .x=0xbd, .y=0xf8, .sp=0x73, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0x2c}, {.addr=0xbe32, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xbe33, .a=0xec, .x=0xbd, .y=0xf8, .sp=0x73, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0x2c}, {.addr=0xbe32, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xbe32, .value=0x06, .type=IO_READ},
        {.addr=0xbe33, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bd, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_031A) {
    const struct CPU_State initial_cpu = {.pc=0xebc6, .a=0x10, .x=0x09, .y=0xd1, .sp=0xfa, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x0009, .value=0xb6}, {.addr=0xebc6, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xebc7, .a=0xb6, .x=0x09, .y=0xd1, .sp=0xfa, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0009, .value=0xb6}, {.addr=0xebc6, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xebc6, .value=0x06, .type=IO_READ},
        {.addr=0xebc7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0009, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_031B) {
    const struct CPU_State initial_cpu = {.pc=0x95a7, .a=0x9c, .x=0x6a, .y=0x71, .sp=0x1a, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x016a, .value=0xcb}, {.addr=0x95a7, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x95a8, .a=0xdf, .x=0x6a, .y=0x71, .sp=0x1a, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x016a, .value=0xcb}, {.addr=0x95a7, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x95a7, .value=0x06, .type=IO_READ},
        {.addr=0x95a8, .value=DUMMY, .type=IO_READ},
        {.addr=0x016a, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_031C) {
    const struct CPU_State initial_cpu = {.pc=0x6884, .a=0x13, .x=0xcd, .y=0xa3, .sp=0xe6, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x00cd, .value=0xab}, {.addr=0x6884, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x6885, .a=0xbb, .x=0xcd, .y=0xa3, .sp=0xe6, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x00cd, .value=0xab}, {.addr=0x6884, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x6884, .value=0x06, .type=IO_READ},
        {.addr=0x6885, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cd, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_031D) {
    const struct CPU_State initial_cpu = {.pc=0xa8b1, .a=0xba, .x=0xd6, .y=0x1a, .sp=0x94, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x01d6, .value=0x23}, {.addr=0xa8b1, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xa8b2, .a=0xbb, .x=0xd6, .y=0x1a, .sp=0x94, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x01d6, .value=0x23}, {.addr=0xa8b1, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xa8b1, .value=0x06, .type=IO_READ},
        {.addr=0xa8b2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d6, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_031E) {
    const struct CPU_State initial_cpu = {.pc=0x0ac9, .a=0xa2, .x=0x2a, .y=0x09, .sp=0xb9, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x012a, .value=0xba}, {.addr=0x0ac9, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x0aca, .a=0xba, .x=0x2a, .y=0x09, .sp=0xb9, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x012a, .value=0xba}, {.addr=0x0ac9, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x0ac9, .value=0x06, .type=IO_READ},
        {.addr=0x0aca, .value=DUMMY, .type=IO_READ},
        {.addr=0x012a, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_031F) {
    const struct CPU_State initial_cpu = {.pc=0x8e32, .a=0x27, .x=0x00, .y=0xd6, .sp=0x87, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x0100, .value=0x6b}, {.addr=0x8e32, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x8e33, .a=0x6f, .x=0x00, .y=0xd6, .sp=0x87, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0100, .value=0x6b}, {.addr=0x8e32, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x8e32, .value=0x06, .type=IO_READ},
        {.addr=0x8e33, .value=DUMMY, .type=IO_READ},
        {.addr=0x0100, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0320) {
    const struct CPU_State initial_cpu = {.pc=0xcc5e, .a=0x87, .x=0x46, .y=0x43, .sp=0x38, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0x50}, {.addr=0xcc5e, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xcc5f, .a=0xd7, .x=0x46, .y=0x43, .sp=0x38, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0x50}, {.addr=0xcc5e, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xcc5e, .value=0x06, .type=IO_READ},
        {.addr=0xcc5f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0146, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0321) {
    const struct CPU_State initial_cpu = {.pc=0xc7e2, .a=0xeb, .x=0xd4, .y=0x34, .sp=0xd8, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x01d4, .value=0xfb}, {.addr=0xc7e2, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xc7e3, .a=0xfb, .x=0xd4, .y=0x34, .sp=0xd8, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x01d4, .value=0xfb}, {.addr=0xc7e2, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xc7e2, .value=0x06, .type=IO_READ},
        {.addr=0xc7e3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d4, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0322) {
    const struct CPU_State initial_cpu = {.pc=0x6192, .a=0xb3, .x=0x05, .y=0xa9, .sp=0xf8, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x0005, .value=0x53}, {.addr=0x6192, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x6193, .a=0xf3, .x=0x05, .y=0xa9, .sp=0xf8, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x0005, .value=0x53}, {.addr=0x6192, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x6192, .value=0x06, .type=IO_READ},
        {.addr=0x6193, .value=DUMMY, .type=IO_READ},
        {.addr=0x0005, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0323) {
    const struct CPU_State initial_cpu = {.pc=0xf37c, .a=0x75, .x=0x87, .y=0x5f, .sp=0x82, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x0087, .value=0xdc}, {.addr=0xf37c, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xf37d, .a=0xfd, .x=0x87, .y=0x5f, .sp=0x82, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x0087, .value=0xdc}, {.addr=0xf37c, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xf37c, .value=0x06, .type=IO_READ},
        {.addr=0xf37d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0087, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0324) {
    const struct CPU_State initial_cpu = {.pc=0x7715, .a=0x30, .x=0x85, .y=0x27, .sp=0x68, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x0185, .value=0x8d}, {.addr=0x7715, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x7716, .a=0xbd, .x=0x85, .y=0x27, .sp=0x68, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x0185, .value=0x8d}, {.addr=0x7715, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x7715, .value=0x06, .type=IO_READ},
        {.addr=0x7716, .value=DUMMY, .type=IO_READ},
        {.addr=0x0185, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0325) {
    const struct CPU_State initial_cpu = {.pc=0x31d5, .a=0xf2, .x=0xe6, .y=0x8c, .sp=0xfe, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0x55}, {.addr=0x31d5, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x31d6, .a=0xf7, .x=0xe6, .y=0x8c, .sp=0xfe, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0x55}, {.addr=0x31d5, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x31d5, .value=0x06, .type=IO_READ},
        {.addr=0x31d6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e6, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0326) {
    const struct CPU_State initial_cpu = {.pc=0x10a0, .a=0x7e, .x=0x05, .y=0x50, .sp=0x41, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x0105, .value=0xb3}, {.addr=0x10a0, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x10a1, .a=0xff, .x=0x05, .y=0x50, .sp=0x41, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0105, .value=0xb3}, {.addr=0x10a0, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x10a0, .value=0x06, .type=IO_READ},
        {.addr=0x10a1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0105, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0327) {
    const struct CPU_State initial_cpu = {.pc=0x9b3d, .a=0x77, .x=0x7f, .y=0xfa, .sp=0x98, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x017f, .value=0x05}, {.addr=0x9b3d, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x9b3e, .a=0x77, .x=0x7f, .y=0xfa, .sp=0x98, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x017f, .value=0x05}, {.addr=0x9b3d, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x9b3d, .value=0x06, .type=IO_READ},
        {.addr=0x9b3e, .value=DUMMY, .type=IO_READ},
        {.addr=0x017f, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0328) {
    const struct CPU_State initial_cpu = {.pc=0xb080, .a=0x51, .x=0xc6, .y=0x24, .sp=0xd1, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x01c6, .value=0x25}, {.addr=0xb080, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xb081, .a=0x75, .x=0xc6, .y=0x24, .sp=0xd1, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01c6, .value=0x25}, {.addr=0xb080, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xb080, .value=0x06, .type=IO_READ},
        {.addr=0xb081, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c6, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0329) {
    const struct CPU_State initial_cpu = {.pc=0x9310, .a=0x94, .x=0xed, .y=0x3b, .sp=0x6c, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x00ed, .value=0x51}, {.addr=0x9310, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x9311, .a=0xd5, .x=0xed, .y=0x3b, .sp=0x6c, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x00ed, .value=0x51}, {.addr=0x9310, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x9310, .value=0x06, .type=IO_READ},
        {.addr=0x9311, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ed, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_032A) {
    const struct CPU_State initial_cpu = {.pc=0x5821, .a=0x75, .x=0x06, .y=0x80, .sp=0xcb, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x0006, .value=0xe2}, {.addr=0x5821, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x5822, .a=0xf7, .x=0x06, .y=0x80, .sp=0xcb, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x0006, .value=0xe2}, {.addr=0x5821, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x5821, .value=0x06, .type=IO_READ},
        {.addr=0x5822, .value=DUMMY, .type=IO_READ},
        {.addr=0x0006, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_032B) {
    const struct CPU_State initial_cpu = {.pc=0xc71d, .a=0x67, .x=0x5f, .y=0x23, .sp=0xd9, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x015f, .value=0x52}, {.addr=0xc71d, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xc71e, .a=0x77, .x=0x5f, .y=0x23, .sp=0xd9, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x015f, .value=0x52}, {.addr=0xc71d, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xc71d, .value=0x06, .type=IO_READ},
        {.addr=0xc71e, .value=DUMMY, .type=IO_READ},
        {.addr=0x015f, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_032C) {
    const struct CPU_State initial_cpu = {.pc=0x31cf, .a=0x5e, .x=0x7b, .y=0xdb, .sp=0x48, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x007b, .value=0xe1}, {.addr=0x31cf, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x31d0, .a=0xff, .x=0x7b, .y=0xdb, .sp=0x48, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x007b, .value=0xe1}, {.addr=0x31cf, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x31cf, .value=0x06, .type=IO_READ},
        {.addr=0x31d0, .value=DUMMY, .type=IO_READ},
        {.addr=0x007b, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_032D) {
    const struct CPU_State initial_cpu = {.pc=0x4b6a, .a=0x00, .x=0x95, .y=0xe6, .sp=0x86, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x0195, .value=0x09}, {.addr=0x4b6a, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x4b6b, .a=0x09, .x=0x95, .y=0xe6, .sp=0x86, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x0195, .value=0x09}, {.addr=0x4b6a, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x4b6a, .value=0x06, .type=IO_READ},
        {.addr=0x4b6b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0195, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_032E) {
    const struct CPU_State initial_cpu = {.pc=0xbb28, .a=0x24, .x=0x98, .y=0xe4, .sp=0x96, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x0098, .value=0x64}, {.addr=0xbb28, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xbb29, .a=0x64, .x=0x98, .y=0xe4, .sp=0x96, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0098, .value=0x64}, {.addr=0xbb28, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xbb28, .value=0x06, .type=IO_READ},
        {.addr=0xbb29, .value=DUMMY, .type=IO_READ},
        {.addr=0x0098, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_032F) {
    const struct CPU_State initial_cpu = {.pc=0x6b5a, .a=0x1e, .x=0x7d, .y=0x91, .sp=0xd9, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x007d, .value=0x44}, {.addr=0x6b5a, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x6b5b, .a=0x5e, .x=0x7d, .y=0x91, .sp=0xd9, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x007d, .value=0x44}, {.addr=0x6b5a, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x6b5a, .value=0x06, .type=IO_READ},
        {.addr=0x6b5b, .value=DUMMY, .type=IO_READ},
        {.addr=0x007d, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0330) {
    const struct CPU_State initial_cpu = {.pc=0xe120, .a=0x5c, .x=0xa5, .y=0xb4, .sp=0x6c, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0xbf}, {.addr=0xe120, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xe121, .a=0xff, .x=0xa5, .y=0xb4, .sp=0x6c, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0xbf}, {.addr=0xe120, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xe120, .value=0x06, .type=IO_READ},
        {.addr=0xe121, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a5, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0331) {
    const struct CPU_State initial_cpu = {.pc=0x83da, .a=0xd1, .x=0xef, .y=0x7f, .sp=0x12, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0x1e}, {.addr=0x83da, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x83db, .a=0xdf, .x=0xef, .y=0x7f, .sp=0x12, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0x1e}, {.addr=0x83da, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x83da, .value=0x06, .type=IO_READ},
        {.addr=0x83db, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ef, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0332) {
    const struct CPU_State initial_cpu = {.pc=0x4cd6, .a=0x06, .x=0x2c, .y=0x09, .sp=0xe0, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x012c, .value=0x54}, {.addr=0x4cd6, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x4cd7, .a=0x56, .x=0x2c, .y=0x09, .sp=0xe0, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x012c, .value=0x54}, {.addr=0x4cd6, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x4cd6, .value=0x06, .type=IO_READ},
        {.addr=0x4cd7, .value=DUMMY, .type=IO_READ},
        {.addr=0x012c, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0333) {
    const struct CPU_State initial_cpu = {.pc=0x7835, .a=0x0b, .x=0x14, .y=0x91, .sp=0x5a, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x0114, .value=0xe1}, {.addr=0x7835, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x7836, .a=0xeb, .x=0x14, .y=0x91, .sp=0x5a, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x0114, .value=0xe1}, {.addr=0x7835, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x7835, .value=0x06, .type=IO_READ},
        {.addr=0x7836, .value=DUMMY, .type=IO_READ},
        {.addr=0x0114, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0334) {
    const struct CPU_State initial_cpu = {.pc=0x1929, .a=0x3c, .x=0x74, .y=0xaf, .sp=0x2e, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x0174, .value=0x12}, {.addr=0x1929, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x192a, .a=0x3e, .x=0x74, .y=0xaf, .sp=0x2e, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x0174, .value=0x12}, {.addr=0x1929, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x1929, .value=0x06, .type=IO_READ},
        {.addr=0x192a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0174, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0335) {
    const struct CPU_State initial_cpu = {.pc=0xbf31, .a=0xe9, .x=0x6c, .y=0x79, .sp=0xe0, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x006c, .value=0x3b}, {.addr=0xbf31, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xbf32, .a=0xfb, .x=0x6c, .y=0x79, .sp=0xe0, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x006c, .value=0x3b}, {.addr=0xbf31, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xbf31, .value=0x06, .type=IO_READ},
        {.addr=0xbf32, .value=DUMMY, .type=IO_READ},
        {.addr=0x006c, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0336) {
    const struct CPU_State initial_cpu = {.pc=0xd6ad, .a=0xfb, .x=0x6a, .y=0x88, .sp=0x31, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x006a, .value=0xfe}, {.addr=0xd6ad, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xd6ae, .a=0xff, .x=0x6a, .y=0x88, .sp=0x31, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x006a, .value=0xfe}, {.addr=0xd6ad, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xd6ad, .value=0x06, .type=IO_READ},
        {.addr=0xd6ae, .value=DUMMY, .type=IO_READ},
        {.addr=0x006a, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0337) {
    const struct CPU_State initial_cpu = {.pc=0xaa3a, .a=0xdb, .x=0x9b, .y=0x55, .sp=0x7f, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x009b, .value=0x15}, {.addr=0xaa3a, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xaa3b, .a=0xdf, .x=0x9b, .y=0x55, .sp=0x7f, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x009b, .value=0x15}, {.addr=0xaa3a, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xaa3a, .value=0x06, .type=IO_READ},
        {.addr=0xaa3b, .value=DUMMY, .type=IO_READ},
        {.addr=0x009b, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0338) {
    const struct CPU_State initial_cpu = {.pc=0x116e, .a=0x8a, .x=0xa3, .y=0x05, .sp=0xbd, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x00a3, .value=0x53}, {.addr=0x116e, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x116f, .a=0xdb, .x=0xa3, .y=0x05, .sp=0xbd, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x00a3, .value=0x53}, {.addr=0x116e, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x116e, .value=0x06, .type=IO_READ},
        {.addr=0x116f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a3, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0339) {
    const struct CPU_State initial_cpu = {.pc=0x5a13, .a=0xf3, .x=0x5d, .y=0xc6, .sp=0x31, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x015d, .value=0xb7}, {.addr=0x5a13, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x5a14, .a=0xf7, .x=0x5d, .y=0xc6, .sp=0x31, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x015d, .value=0xb7}, {.addr=0x5a13, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x5a13, .value=0x06, .type=IO_READ},
        {.addr=0x5a14, .value=DUMMY, .type=IO_READ},
        {.addr=0x015d, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_033A) {
    const struct CPU_State initial_cpu = {.pc=0x4de7, .a=0x7f, .x=0xae, .y=0xe4, .sp=0xd1, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x00ae, .value=0x0d}, {.addr=0x4de7, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x4de8, .a=0x7f, .x=0xae, .y=0xe4, .sp=0xd1, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x00ae, .value=0x0d}, {.addr=0x4de7, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x4de7, .value=0x06, .type=IO_READ},
        {.addr=0x4de8, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ae, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_033B) {
    const struct CPU_State initial_cpu = {.pc=0xc1f2, .a=0x22, .x=0x36, .y=0x2a, .sp=0xbc, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x0136, .value=0xfa}, {.addr=0xc1f2, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xc1f3, .a=0xfa, .x=0x36, .y=0x2a, .sp=0xbc, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0136, .value=0xfa}, {.addr=0xc1f2, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xc1f2, .value=0x06, .type=IO_READ},
        {.addr=0xc1f3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0136, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_033C) {
    const struct CPU_State initial_cpu = {.pc=0x6b22, .a=0xe8, .x=0xb4, .y=0x5d, .sp=0xdd, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x00b4, .value=0xa1}, {.addr=0x6b22, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x6b23, .a=0xe9, .x=0xb4, .y=0x5d, .sp=0xdd, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x00b4, .value=0xa1}, {.addr=0x6b22, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x6b22, .value=0x06, .type=IO_READ},
        {.addr=0x6b23, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b4, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_033D) {
    const struct CPU_State initial_cpu = {.pc=0x9222, .a=0x02, .x=0x26, .y=0x68, .sp=0xb1, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x0126, .value=0xab}, {.addr=0x9222, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x9223, .a=0xab, .x=0x26, .y=0x68, .sp=0xb1, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0126, .value=0xab}, {.addr=0x9222, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x9222, .value=0x06, .type=IO_READ},
        {.addr=0x9223, .value=DUMMY, .type=IO_READ},
        {.addr=0x0126, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_033E) {
    const struct CPU_State initial_cpu = {.pc=0xe6ca, .a=0x62, .x=0x37, .y=0xf9, .sp=0xd3, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x0037, .value=0x77}, {.addr=0xe6ca, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xe6cb, .a=0x77, .x=0x37, .y=0xf9, .sp=0xd3, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x0037, .value=0x77}, {.addr=0xe6ca, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xe6ca, .value=0x06, .type=IO_READ},
        {.addr=0xe6cb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0037, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_033F) {
    const struct CPU_State initial_cpu = {.pc=0xa199, .a=0x7f, .x=0x22, .y=0xf9, .sp=0x1c, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x0122, .value=0x82}, {.addr=0xa199, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xa19a, .a=0xff, .x=0x22, .y=0xf9, .sp=0x1c, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0122, .value=0x82}, {.addr=0xa199, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xa199, .value=0x06, .type=IO_READ},
        {.addr=0xa19a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0122, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0340) {
    const struct CPU_State initial_cpu = {.pc=0x59ed, .a=0x8c, .x=0x7d, .y=0x28, .sp=0x1d, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0x21}, {.addr=0x59ed, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x59ee, .a=0xad, .x=0x7d, .y=0x28, .sp=0x1d, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0x21}, {.addr=0x59ed, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x59ed, .value=0x06, .type=IO_READ},
        {.addr=0x59ee, .value=DUMMY, .type=IO_READ},
        {.addr=0x017d, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0341) {
    const struct CPU_State initial_cpu = {.pc=0x2e77, .a=0x3f, .x=0xca, .y=0xbc, .sp=0x93, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x01ca, .value=0x8e}, {.addr=0x2e77, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x2e78, .a=0xbf, .x=0xca, .y=0xbc, .sp=0x93, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x01ca, .value=0x8e}, {.addr=0x2e77, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x2e77, .value=0x06, .type=IO_READ},
        {.addr=0x2e78, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ca, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0342) {
    const struct CPU_State initial_cpu = {.pc=0x2f5a, .a=0x57, .x=0xbd, .y=0xd5, .sp=0x3b, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x00bd, .value=0xfb}, {.addr=0x2f5a, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x2f5b, .a=0xff, .x=0xbd, .y=0xd5, .sp=0x3b, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x00bd, .value=0xfb}, {.addr=0x2f5a, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x2f5a, .value=0x06, .type=IO_READ},
        {.addr=0x2f5b, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bd, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0344) {
    const struct CPU_State initial_cpu = {.pc=0x9ed3, .a=0x45, .x=0x1b, .y=0xac, .sp=0x1d, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x001b, .value=0x2c}, {.addr=0x9ed3, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x9ed4, .a=0x6d, .x=0x1b, .y=0xac, .sp=0x1d, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x001b, .value=0x2c}, {.addr=0x9ed3, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x9ed3, .value=0x06, .type=IO_READ},
        {.addr=0x9ed4, .value=DUMMY, .type=IO_READ},
        {.addr=0x001b, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0345) {
    const struct CPU_State initial_cpu = {.pc=0xb575, .a=0x1b, .x=0xe2, .y=0x5f, .sp=0xae, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0x0f}, {.addr=0xb575, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xb576, .a=0x1f, .x=0xe2, .y=0x5f, .sp=0xae, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0x0f}, {.addr=0xb575, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xb575, .value=0x06, .type=IO_READ},
        {.addr=0xb576, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e2, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0346) {
    const struct CPU_State initial_cpu = {.pc=0x1d54, .a=0x4d, .x=0x2d, .y=0x2e, .sp=0xa2, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x002d, .value=0x9a}, {.addr=0x1d54, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x1d55, .a=0xdf, .x=0x2d, .y=0x2e, .sp=0xa2, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x002d, .value=0x9a}, {.addr=0x1d54, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x1d54, .value=0x06, .type=IO_READ},
        {.addr=0x1d55, .value=DUMMY, .type=IO_READ},
        {.addr=0x002d, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0347) {
    const struct CPU_State initial_cpu = {.pc=0xcbda, .a=0xad, .x=0xe2, .y=0xad, .sp=0x21, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x00e2, .value=0x31}, {.addr=0xcbda, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xcbdb, .a=0xbd, .x=0xe2, .y=0xad, .sp=0x21, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x00e2, .value=0x31}, {.addr=0xcbda, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xcbda, .value=0x06, .type=IO_READ},
        {.addr=0xcbdb, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e2, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0348) {
    const struct CPU_State initial_cpu = {.pc=0x4166, .a=0x01, .x=0x80, .y=0x0b, .sp=0x1d, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x0080, .value=0xd7}, {.addr=0x4166, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x4167, .a=0xd7, .x=0x80, .y=0x0b, .sp=0x1d, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x0080, .value=0xd7}, {.addr=0x4166, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x4166, .value=0x06, .type=IO_READ},
        {.addr=0x4167, .value=DUMMY, .type=IO_READ},
        {.addr=0x0080, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0349) {
    const struct CPU_State initial_cpu = {.pc=0x8f1a, .a=0x79, .x=0x23, .y=0x91, .sp=0x08, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x0023, .value=0x5c}, {.addr=0x8f1a, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x8f1b, .a=0x7d, .x=0x23, .y=0x91, .sp=0x08, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x0023, .value=0x5c}, {.addr=0x8f1a, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x8f1a, .value=0x06, .type=IO_READ},
        {.addr=0x8f1b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0023, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_034A) {
    const struct CPU_State initial_cpu = {.pc=0xb21f, .a=0x08, .x=0x99, .y=0xc7, .sp=0x08, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x0199, .value=0xf9}, {.addr=0xb21f, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xb220, .a=0xf9, .x=0x99, .y=0xc7, .sp=0x08, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0199, .value=0xf9}, {.addr=0xb21f, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xb21f, .value=0x06, .type=IO_READ},
        {.addr=0xb220, .value=DUMMY, .type=IO_READ},
        {.addr=0x0199, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_034B) {
    const struct CPU_State initial_cpu = {.pc=0xbf75, .a=0x81, .x=0xe7, .y=0x10, .sp=0xba, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x00e7, .value=0xd5}, {.addr=0xbf75, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xbf76, .a=0xd5, .x=0xe7, .y=0x10, .sp=0xba, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x00e7, .value=0xd5}, {.addr=0xbf75, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xbf75, .value=0x06, .type=IO_READ},
        {.addr=0xbf76, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e7, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_034C) {
    const struct CPU_State initial_cpu = {.pc=0x9ff0, .a=0x09, .x=0x28, .y=0x85, .sp=0x71, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x0028, .value=0xe2}, {.addr=0x9ff0, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x9ff1, .a=0xeb, .x=0x28, .y=0x85, .sp=0x71, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0028, .value=0xe2}, {.addr=0x9ff0, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x9ff0, .value=0x06, .type=IO_READ},
        {.addr=0x9ff1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0028, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_034D) {
    const struct CPU_State initial_cpu = {.pc=0x61cd, .a=0xd1, .x=0x60, .y=0x45, .sp=0xaa, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x0160, .value=0x72}, {.addr=0x61cd, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x61ce, .a=0xf3, .x=0x60, .y=0x45, .sp=0xaa, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x0160, .value=0x72}, {.addr=0x61cd, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x61cd, .value=0x06, .type=IO_READ},
        {.addr=0x61ce, .value=DUMMY, .type=IO_READ},
        {.addr=0x0160, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_034E) {
    const struct CPU_State initial_cpu = {.pc=0x5e25, .a=0xfd, .x=0x9e, .y=0x60, .sp=0xf5, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0xe9}, {.addr=0x5e25, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x5e26, .a=0xfd, .x=0x9e, .y=0x60, .sp=0xf5, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0xe9}, {.addr=0x5e25, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x5e25, .value=0x06, .type=IO_READ},
        {.addr=0x5e26, .value=DUMMY, .type=IO_READ},
        {.addr=0x019e, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_034F) {
    const struct CPU_State initial_cpu = {.pc=0x3cbe, .a=0x02, .x=0xbb, .y=0x1a, .sp=0xaf, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x01bb, .value=0xe7}, {.addr=0x3cbe, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x3cbf, .a=0xe7, .x=0xbb, .y=0x1a, .sp=0xaf, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x01bb, .value=0xe7}, {.addr=0x3cbe, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x3cbe, .value=0x06, .type=IO_READ},
        {.addr=0x3cbf, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bb, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0350) {
    const struct CPU_State initial_cpu = {.pc=0xc89e, .a=0xf1, .x=0x28, .y=0x23, .sp=0x89, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x0028, .value=0x50}, {.addr=0xc89e, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xc89f, .a=0xf1, .x=0x28, .y=0x23, .sp=0x89, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x0028, .value=0x50}, {.addr=0xc89e, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xc89e, .value=0x06, .type=IO_READ},
        {.addr=0xc89f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0028, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0351) {
    const struct CPU_State initial_cpu = {.pc=0x3d39, .a=0x2c, .x=0x38, .y=0x35, .sp=0x45, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x0038, .value=0x2d}, {.addr=0x3d39, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x3d3a, .a=0x2d, .x=0x38, .y=0x35, .sp=0x45, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0038, .value=0x2d}, {.addr=0x3d39, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x3d39, .value=0x06, .type=IO_READ},
        {.addr=0x3d3a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0038, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0352) {
    const struct CPU_State initial_cpu = {.pc=0x11ca, .a=0xe4, .x=0x6b, .y=0x9b, .sp=0xc4, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x006b, .value=0xbf}, {.addr=0x11ca, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x11cb, .a=0xff, .x=0x6b, .y=0x9b, .sp=0xc4, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x006b, .value=0xbf}, {.addr=0x11ca, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x11ca, .value=0x06, .type=IO_READ},
        {.addr=0x11cb, .value=DUMMY, .type=IO_READ},
        {.addr=0x006b, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0353) {
    const struct CPU_State initial_cpu = {.pc=0x76cf, .a=0x9b, .x=0xaf, .y=0xd9, .sp=0xa8, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x00af, .value=0xfc}, {.addr=0x76cf, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x76d0, .a=0xff, .x=0xaf, .y=0xd9, .sp=0xa8, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x00af, .value=0xfc}, {.addr=0x76cf, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x76cf, .value=0x06, .type=IO_READ},
        {.addr=0x76d0, .value=DUMMY, .type=IO_READ},
        {.addr=0x00af, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0354) {
    const struct CPU_State initial_cpu = {.pc=0x3a6f, .a=0x4a, .x=0x53, .y=0x4c, .sp=0x88, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0x3f}, {.addr=0x3a6f, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x3a70, .a=0x7f, .x=0x53, .y=0x4c, .sp=0x88, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0x3f}, {.addr=0x3a6f, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x3a6f, .value=0x06, .type=IO_READ},
        {.addr=0x3a70, .value=DUMMY, .type=IO_READ},
        {.addr=0x0153, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0355) {
    const struct CPU_State initial_cpu = {.pc=0x3903, .a=0x20, .x=0x87, .y=0xc5, .sp=0x93, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x0087, .value=0xdf}, {.addr=0x3903, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x3904, .a=0xff, .x=0x87, .y=0xc5, .sp=0x93, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x0087, .value=0xdf}, {.addr=0x3903, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x3903, .value=0x06, .type=IO_READ},
        {.addr=0x3904, .value=DUMMY, .type=IO_READ},
        {.addr=0x0087, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0356) {
    const struct CPU_State initial_cpu = {.pc=0x5e6d, .a=0x38, .x=0x3c, .y=0xc2, .sp=0x81, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0x85}, {.addr=0x5e6d, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x5e6e, .a=0xbd, .x=0x3c, .y=0xc2, .sp=0x81, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0x85}, {.addr=0x5e6d, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x5e6d, .value=0x06, .type=IO_READ},
        {.addr=0x5e6e, .value=DUMMY, .type=IO_READ},
        {.addr=0x013c, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0357) {
    const struct CPU_State initial_cpu = {.pc=0x2db2, .a=0xb0, .x=0x46, .y=0xb9, .sp=0x52, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0xb7}, {.addr=0x2db2, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x2db3, .a=0xb7, .x=0x46, .y=0xb9, .sp=0x52, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0xb7}, {.addr=0x2db2, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x2db2, .value=0x06, .type=IO_READ},
        {.addr=0x2db3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0146, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0358) {
    const struct CPU_State initial_cpu = {.pc=0xe3d6, .a=0xd9, .x=0xaa, .y=0x1e, .sp=0xc8, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x00aa, .value=0x4f}, {.addr=0xe3d6, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xe3d7, .a=0xdf, .x=0xaa, .y=0x1e, .sp=0xc8, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x00aa, .value=0x4f}, {.addr=0xe3d6, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xe3d6, .value=0x06, .type=IO_READ},
        {.addr=0xe3d7, .value=DUMMY, .type=IO_READ},
        {.addr=0x00aa, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0359) {
    const struct CPU_State initial_cpu = {.pc=0x42bb, .a=0x53, .x=0x9b, .y=0x07, .sp=0x95, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x009b, .value=0xcf}, {.addr=0x42bb, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x42bc, .a=0xdf, .x=0x9b, .y=0x07, .sp=0x95, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x009b, .value=0xcf}, {.addr=0x42bb, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x42bb, .value=0x06, .type=IO_READ},
        {.addr=0x42bc, .value=DUMMY, .type=IO_READ},
        {.addr=0x009b, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_035A) {
    const struct CPU_State initial_cpu = {.pc=0x49cd, .a=0xcd, .x=0xb3, .y=0x50, .sp=0xf5, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0xc6}, {.addr=0x49cd, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x49ce, .a=0xcf, .x=0xb3, .y=0x50, .sp=0xf5, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0xc6}, {.addr=0x49cd, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x49cd, .value=0x06, .type=IO_READ},
        {.addr=0x49ce, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b3, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_035B) {
    const struct CPU_State initial_cpu = {.pc=0xe297, .a=0x49, .x=0x14, .y=0xf4, .sp=0x36, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x0114, .value=0xb2}, {.addr=0xe297, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xe298, .a=0xfb, .x=0x14, .y=0xf4, .sp=0x36, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x0114, .value=0xb2}, {.addr=0xe297, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xe297, .value=0x06, .type=IO_READ},
        {.addr=0xe298, .value=DUMMY, .type=IO_READ},
        {.addr=0x0114, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_035C) {
    const struct CPU_State initial_cpu = {.pc=0x84d9, .a=0xe7, .x=0xc9, .y=0xb9, .sp=0x7d, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x00c9, .value=0xa6}, {.addr=0x84d9, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x84da, .a=0xe7, .x=0xc9, .y=0xb9, .sp=0x7d, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x00c9, .value=0xa6}, {.addr=0x84d9, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x84d9, .value=0x06, .type=IO_READ},
        {.addr=0x84da, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c9, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_035D) {
    const struct CPU_State initial_cpu = {.pc=0x498b, .a=0x16, .x=0xcd, .y=0xa1, .sp=0x37, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x01cd, .value=0x16}, {.addr=0x498b, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x498c, .a=0x16, .x=0xcd, .y=0xa1, .sp=0x37, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x01cd, .value=0x16}, {.addr=0x498b, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x498b, .value=0x06, .type=IO_READ},
        {.addr=0x498c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cd, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_035E) {
    const struct CPU_State initial_cpu = {.pc=0x2b32, .a=0x00, .x=0x35, .y=0xb8, .sp=0xd5, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x0135, .value=0xa2}, {.addr=0x2b32, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x2b33, .a=0xa2, .x=0x35, .y=0xb8, .sp=0xd5, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x0135, .value=0xa2}, {.addr=0x2b32, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x2b32, .value=0x06, .type=IO_READ},
        {.addr=0x2b33, .value=DUMMY, .type=IO_READ},
        {.addr=0x0135, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_035F) {
    const struct CPU_State initial_cpu = {.pc=0x0a59, .a=0x0c, .x=0x1d, .y=0x64, .sp=0x2b, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0xfe}, {.addr=0x0a59, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x0a5a, .a=0xfe, .x=0x1d, .y=0x64, .sp=0x2b, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0xfe}, {.addr=0x0a59, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x0a59, .value=0x06, .type=IO_READ},
        {.addr=0x0a5a, .value=DUMMY, .type=IO_READ},
        {.addr=0x011d, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0360) {
    const struct CPU_State initial_cpu = {.pc=0xdbd3, .a=0xc2, .x=0x84, .y=0xdc, .sp=0x7d, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x0084, .value=0xce}, {.addr=0xdbd3, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xdbd4, .a=0xce, .x=0x84, .y=0xdc, .sp=0x7d, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0084, .value=0xce}, {.addr=0xdbd3, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xdbd3, .value=0x06, .type=IO_READ},
        {.addr=0xdbd4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0084, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0361) {
    const struct CPU_State initial_cpu = {.pc=0x0bc3, .a=0x3a, .x=0x44, .y=0xcb, .sp=0xc7, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x0144, .value=0x77}, {.addr=0x0bc3, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x0bc4, .a=0x7f, .x=0x44, .y=0xcb, .sp=0xc7, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x0144, .value=0x77}, {.addr=0x0bc3, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x0bc3, .value=0x06, .type=IO_READ},
        {.addr=0x0bc4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0144, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0362) {
    const struct CPU_State initial_cpu = {.pc=0xc764, .a=0xff, .x=0xd9, .y=0xe4, .sp=0xf7, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x00d9, .value=0x73}, {.addr=0xc764, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xc765, .a=0xff, .x=0xd9, .y=0xe4, .sp=0xf7, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x00d9, .value=0x73}, {.addr=0xc764, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xc764, .value=0x06, .type=IO_READ},
        {.addr=0xc765, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d9, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0363) {
    const struct CPU_State initial_cpu = {.pc=0x633f, .a=0x45, .x=0x08, .y=0x93, .sp=0xee, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x0108, .value=0x6b}, {.addr=0x633f, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x6340, .a=0x6f, .x=0x08, .y=0x93, .sp=0xee, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x0108, .value=0x6b}, {.addr=0x633f, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x633f, .value=0x06, .type=IO_READ},
        {.addr=0x6340, .value=DUMMY, .type=IO_READ},
        {.addr=0x0108, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0364) {
    const struct CPU_State initial_cpu = {.pc=0x4ae5, .a=0x81, .x=0x73, .y=0xe4, .sp=0xd9, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0x73}, {.addr=0x4ae5, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x4ae6, .a=0xf3, .x=0x73, .y=0xe4, .sp=0xd9, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0x73}, {.addr=0x4ae5, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x4ae5, .value=0x06, .type=IO_READ},
        {.addr=0x4ae6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0173, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0365) {
    const struct CPU_State initial_cpu = {.pc=0xff1d, .a=0xbd, .x=0x83, .y=0xfc, .sp=0x25, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x0183, .value=0x26}, {.addr=0xff1d, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xff1e, .a=0xbf, .x=0x83, .y=0xfc, .sp=0x25, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x0183, .value=0x26}, {.addr=0xff1d, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xff1d, .value=0x06, .type=IO_READ},
        {.addr=0xff1e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0183, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0366) {
    const struct CPU_State initial_cpu = {.pc=0xb947, .a=0xd4, .x=0x40, .y=0xb9, .sp=0xaa, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x0140, .value=0x87}, {.addr=0xb947, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xb948, .a=0xd7, .x=0x40, .y=0xb9, .sp=0xaa, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x0140, .value=0x87}, {.addr=0xb947, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xb947, .value=0x06, .type=IO_READ},
        {.addr=0xb948, .value=DUMMY, .type=IO_READ},
        {.addr=0x0140, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0367) {
    const struct CPU_State initial_cpu = {.pc=0x16d4, .a=0xf0, .x=0xab, .y=0x6b, .sp=0x77, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x00ab, .value=0x54}, {.addr=0x16d4, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x16d5, .a=0xf4, .x=0xab, .y=0x6b, .sp=0x77, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x00ab, .value=0x54}, {.addr=0x16d4, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x16d4, .value=0x06, .type=IO_READ},
        {.addr=0x16d5, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ab, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0368) {
    const struct CPU_State initial_cpu = {.pc=0x4780, .a=0xae, .x=0x93, .y=0xef, .sp=0xe6, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x0193, .value=0x47}, {.addr=0x4780, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x4781, .a=0xef, .x=0x93, .y=0xef, .sp=0xe6, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x0193, .value=0x47}, {.addr=0x4780, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x4780, .value=0x06, .type=IO_READ},
        {.addr=0x4781, .value=DUMMY, .type=IO_READ},
        {.addr=0x0193, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0369) {
    const struct CPU_State initial_cpu = {.pc=0x256f, .a=0x05, .x=0x2f, .y=0x76, .sp=0x1b, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x012f, .value=0x83}, {.addr=0x256f, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x2570, .a=0x87, .x=0x2f, .y=0x76, .sp=0x1b, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x012f, .value=0x83}, {.addr=0x256f, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x256f, .value=0x06, .type=IO_READ},
        {.addr=0x2570, .value=DUMMY, .type=IO_READ},
        {.addr=0x012f, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_036A) {
    const struct CPU_State initial_cpu = {.pc=0x6584, .a=0x55, .x=0x6e, .y=0x4a, .sp=0x6d, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x016e, .value=0x4d}, {.addr=0x6584, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x6585, .a=0x5d, .x=0x6e, .y=0x4a, .sp=0x6d, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x016e, .value=0x4d}, {.addr=0x6584, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x6584, .value=0x06, .type=IO_READ},
        {.addr=0x6585, .value=DUMMY, .type=IO_READ},
        {.addr=0x016e, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_036B) {
    const struct CPU_State initial_cpu = {.pc=0xdfe7, .a=0x00, .x=0x98, .y=0x28, .sp=0xe0, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x0198, .value=0x32}, {.addr=0xdfe7, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xdfe8, .a=0x32, .x=0x98, .y=0x28, .sp=0xe0, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x0198, .value=0x32}, {.addr=0xdfe7, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xdfe7, .value=0x06, .type=IO_READ},
        {.addr=0xdfe8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0198, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_036C) {
    const struct CPU_State initial_cpu = {.pc=0x2f0a, .a=0x5c, .x=0x6e, .y=0x2e, .sp=0x3e, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x006e, .value=0xe0}, {.addr=0x2f0a, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x2f0b, .a=0xfc, .x=0x6e, .y=0x2e, .sp=0x3e, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x006e, .value=0xe0}, {.addr=0x2f0a, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x2f0a, .value=0x06, .type=IO_READ},
        {.addr=0x2f0b, .value=DUMMY, .type=IO_READ},
        {.addr=0x006e, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_036D) {
    const struct CPU_State initial_cpu = {.pc=0x759d, .a=0x2d, .x=0xcb, .y=0x8d, .sp=0xed, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x01cb, .value=0xc5}, {.addr=0x759d, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x759e, .a=0xed, .x=0xcb, .y=0x8d, .sp=0xed, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x01cb, .value=0xc5}, {.addr=0x759d, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x759d, .value=0x06, .type=IO_READ},
        {.addr=0x759e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cb, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_036E) {
    const struct CPU_State initial_cpu = {.pc=0xe1c0, .a=0x02, .x=0x48, .y=0x14, .sp=0x05, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x0048, .value=0xe3}, {.addr=0xe1c0, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xe1c1, .a=0xe3, .x=0x48, .y=0x14, .sp=0x05, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x0048, .value=0xe3}, {.addr=0xe1c0, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xe1c0, .value=0x06, .type=IO_READ},
        {.addr=0xe1c1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0048, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_036F) {
    const struct CPU_State initial_cpu = {.pc=0x739c, .a=0x9a, .x=0x2e, .y=0xe8, .sp=0xa3, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x012e, .value=0xa7}, {.addr=0x739c, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x739d, .a=0xbf, .x=0x2e, .y=0xe8, .sp=0xa3, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x012e, .value=0xa7}, {.addr=0x739c, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x739c, .value=0x06, .type=IO_READ},
        {.addr=0x739d, .value=DUMMY, .type=IO_READ},
        {.addr=0x012e, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0370) {
    const struct CPU_State initial_cpu = {.pc=0x1ef1, .a=0x1d, .x=0x6c, .y=0xbd, .sp=0xfa, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x016c, .value=0x73}, {.addr=0x1ef1, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x1ef2, .a=0x7f, .x=0x6c, .y=0xbd, .sp=0xfa, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x016c, .value=0x73}, {.addr=0x1ef1, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x1ef1, .value=0x06, .type=IO_READ},
        {.addr=0x1ef2, .value=DUMMY, .type=IO_READ},
        {.addr=0x016c, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0372) {
    const struct CPU_State initial_cpu = {.pc=0xa0aa, .a=0xae, .x=0x58, .y=0xfc, .sp=0x53, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0xd9}, {.addr=0xa0aa, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xa0ab, .a=0xff, .x=0x58, .y=0xfc, .sp=0x53, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0xd9}, {.addr=0xa0aa, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xa0aa, .value=0x06, .type=IO_READ},
        {.addr=0xa0ab, .value=DUMMY, .type=IO_READ},
        {.addr=0x0158, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0373) {
    const struct CPU_State initial_cpu = {.pc=0x4e6f, .a=0x52, .x=0xb1, .y=0x0b, .sp=0x9d, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x00b1, .value=0xa3}, {.addr=0x4e6f, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x4e70, .a=0xf3, .x=0xb1, .y=0x0b, .sp=0x9d, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x00b1, .value=0xa3}, {.addr=0x4e6f, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x4e6f, .value=0x06, .type=IO_READ},
        {.addr=0x4e70, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b1, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0374) {
    const struct CPU_State initial_cpu = {.pc=0x4279, .a=0xf8, .x=0x27, .y=0xea, .sp=0xdd, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x0027, .value=0xf4}, {.addr=0x4279, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x427a, .a=0xfc, .x=0x27, .y=0xea, .sp=0xdd, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0027, .value=0xf4}, {.addr=0x4279, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x4279, .value=0x06, .type=IO_READ},
        {.addr=0x427a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0027, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0375) {
    const struct CPU_State initial_cpu = {.pc=0xd062, .a=0x01, .x=0x7f, .y=0x33, .sp=0xdb, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x017f, .value=0x4e}, {.addr=0xd062, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xd063, .a=0x4f, .x=0x7f, .y=0x33, .sp=0xdb, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x017f, .value=0x4e}, {.addr=0xd062, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xd062, .value=0x06, .type=IO_READ},
        {.addr=0xd063, .value=DUMMY, .type=IO_READ},
        {.addr=0x017f, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0376) {
    const struct CPU_State initial_cpu = {.pc=0xe7e1, .a=0x85, .x=0x92, .y=0x97, .sp=0xe6, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x0192, .value=0x92}, {.addr=0xe7e1, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xe7e2, .a=0x97, .x=0x92, .y=0x97, .sp=0xe6, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x0192, .value=0x92}, {.addr=0xe7e1, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xe7e1, .value=0x06, .type=IO_READ},
        {.addr=0xe7e2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0192, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0377) {
    const struct CPU_State initial_cpu = {.pc=0x55f1, .a=0x1c, .x=0x50, .y=0x06, .sp=0x15, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x0150, .value=0xe1}, {.addr=0x55f1, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x55f2, .a=0xfd, .x=0x50, .y=0x06, .sp=0x15, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x0150, .value=0xe1}, {.addr=0x55f1, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x55f1, .value=0x06, .type=IO_READ},
        {.addr=0x55f2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0150, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0378) {
    const struct CPU_State initial_cpu = {.pc=0x9973, .a=0xae, .x=0xfc, .y=0x7c, .sp=0x6a, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0xf9}, {.addr=0x9973, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x9974, .a=0xff, .x=0xfc, .y=0x7c, .sp=0x6a, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0xf9}, {.addr=0x9973, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x9973, .value=0x06, .type=IO_READ},
        {.addr=0x9974, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fc, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0379) {
    const struct CPU_State initial_cpu = {.pc=0x26c1, .a=0xa4, .x=0xbb, .y=0xe9, .sp=0x31, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x01bb, .value=0xa4}, {.addr=0x26c1, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x26c2, .a=0xa4, .x=0xbb, .y=0xe9, .sp=0x31, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x01bb, .value=0xa4}, {.addr=0x26c1, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x26c1, .value=0x06, .type=IO_READ},
        {.addr=0x26c2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bb, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_037A) {
    const struct CPU_State initial_cpu = {.pc=0xa4c6, .a=0xb6, .x=0xdb, .y=0xe1, .sp=0xb8, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x01db, .value=0xd2}, {.addr=0xa4c6, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xa4c7, .a=0xf6, .x=0xdb, .y=0xe1, .sp=0xb8, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x01db, .value=0xd2}, {.addr=0xa4c6, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xa4c6, .value=0x06, .type=IO_READ},
        {.addr=0xa4c7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01db, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_037B) {
    const struct CPU_State initial_cpu = {.pc=0xf60c, .a=0x7b, .x=0xf8, .y=0xac, .sp=0x43, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x01f8, .value=0xf4}, {.addr=0xf60c, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xf60d, .a=0xff, .x=0xf8, .y=0xac, .sp=0x43, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x01f8, .value=0xf4}, {.addr=0xf60c, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xf60c, .value=0x06, .type=IO_READ},
        {.addr=0xf60d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f8, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_037C) {
    const struct CPU_State initial_cpu = {.pc=0x2354, .a=0x66, .x=0x66, .y=0x18, .sp=0xc0, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x0066, .value=0x1f}, {.addr=0x2354, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x2355, .a=0x7f, .x=0x66, .y=0x18, .sp=0xc0, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x0066, .value=0x1f}, {.addr=0x2354, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x2354, .value=0x06, .type=IO_READ},
        {.addr=0x2355, .value=DUMMY, .type=IO_READ},
        {.addr=0x0066, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_037D) {
    const struct CPU_State initial_cpu = {.pc=0x5f08, .a=0x58, .x=0x7a, .y=0x3f, .sp=0x70, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x007a, .value=0xd6}, {.addr=0x5f08, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x5f09, .a=0xde, .x=0x7a, .y=0x3f, .sp=0x70, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x007a, .value=0xd6}, {.addr=0x5f08, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x5f08, .value=0x06, .type=IO_READ},
        {.addr=0x5f09, .value=DUMMY, .type=IO_READ},
        {.addr=0x007a, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_037E) {
    const struct CPU_State initial_cpu = {.pc=0x2d86, .a=0x65, .x=0x66, .y=0x7d, .sp=0xdf, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0x73}, {.addr=0x2d86, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x2d87, .a=0x77, .x=0x66, .y=0x7d, .sp=0xdf, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0x73}, {.addr=0x2d86, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x2d86, .value=0x06, .type=IO_READ},
        {.addr=0x2d87, .value=DUMMY, .type=IO_READ},
        {.addr=0x0166, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_037F) {
    const struct CPU_State initial_cpu = {.pc=0xe2c1, .a=0xcf, .x=0x1a, .y=0x39, .sp=0x90, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x001a, .value=0xa0}, {.addr=0xe2c1, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xe2c2, .a=0xef, .x=0x1a, .y=0x39, .sp=0x90, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x001a, .value=0xa0}, {.addr=0xe2c1, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xe2c1, .value=0x06, .type=IO_READ},
        {.addr=0xe2c2, .value=DUMMY, .type=IO_READ},
        {.addr=0x001a, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0380) {
    const struct CPU_State initial_cpu = {.pc=0x2b17, .a=0xac, .x=0xe8, .y=0x18, .sp=0x11, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x01e8, .value=0xf5}, {.addr=0x2b17, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x2b18, .a=0xfd, .x=0xe8, .y=0x18, .sp=0x11, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x01e8, .value=0xf5}, {.addr=0x2b17, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x2b17, .value=0x06, .type=IO_READ},
        {.addr=0x2b18, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e8, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0381) {
    const struct CPU_State initial_cpu = {.pc=0xbf8e, .a=0x45, .x=0xdb, .y=0x68, .sp=0x73, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x00db, .value=0x4d}, {.addr=0xbf8e, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xbf8f, .a=0x4d, .x=0xdb, .y=0x68, .sp=0x73, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x00db, .value=0x4d}, {.addr=0xbf8e, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xbf8e, .value=0x06, .type=IO_READ},
        {.addr=0xbf8f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00db, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0382) {
    const struct CPU_State initial_cpu = {.pc=0xa7df, .a=0xcd, .x=0x0c, .y=0x49, .sp=0x68, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0x42}, {.addr=0xa7df, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xa7e0, .a=0xcf, .x=0x0c, .y=0x49, .sp=0x68, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0x42}, {.addr=0xa7df, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xa7df, .value=0x06, .type=IO_READ},
        {.addr=0xa7e0, .value=DUMMY, .type=IO_READ},
        {.addr=0x010c, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0383) {
    const struct CPU_State initial_cpu = {.pc=0x440a, .a=0x67, .x=0x7b, .y=0x02, .sp=0xdc, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0x28}, {.addr=0x440a, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x440b, .a=0x6f, .x=0x7b, .y=0x02, .sp=0xdc, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0x28}, {.addr=0x440a, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x440a, .value=0x06, .type=IO_READ},
        {.addr=0x440b, .value=DUMMY, .type=IO_READ},
        {.addr=0x017b, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0384) {
    const struct CPU_State initial_cpu = {.pc=0x6b84, .a=0x57, .x=0xec, .y=0x52, .sp=0xfc, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x00ec, .value=0xe1}, {.addr=0x6b84, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x6b85, .a=0xf7, .x=0xec, .y=0x52, .sp=0xfc, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x00ec, .value=0xe1}, {.addr=0x6b84, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x6b84, .value=0x06, .type=IO_READ},
        {.addr=0x6b85, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ec, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0385) {
    const struct CPU_State initial_cpu = {.pc=0x3cd0, .a=0x9e, .x=0x3f, .y=0x0e, .sp=0xee, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x013f, .value=0x1d}, {.addr=0x3cd0, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x3cd1, .a=0x9f, .x=0x3f, .y=0x0e, .sp=0xee, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x013f, .value=0x1d}, {.addr=0x3cd0, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x3cd0, .value=0x06, .type=IO_READ},
        {.addr=0x3cd1, .value=DUMMY, .type=IO_READ},
        {.addr=0x013f, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0386) {
    const struct CPU_State initial_cpu = {.pc=0xa619, .a=0xf8, .x=0x9a, .y=0x19, .sp=0xfe, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x009a, .value=0x11}, {.addr=0xa619, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xa61a, .a=0xf9, .x=0x9a, .y=0x19, .sp=0xfe, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x009a, .value=0x11}, {.addr=0xa619, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xa619, .value=0x06, .type=IO_READ},
        {.addr=0xa61a, .value=DUMMY, .type=IO_READ},
        {.addr=0x009a, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0387) {
    const struct CPU_State initial_cpu = {.pc=0x56a0, .a=0xaf, .x=0x20, .y=0x59, .sp=0x32, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x0120, .value=0x6f}, {.addr=0x56a0, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x56a1, .a=0xef, .x=0x20, .y=0x59, .sp=0x32, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x0120, .value=0x6f}, {.addr=0x56a0, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x56a0, .value=0x06, .type=IO_READ},
        {.addr=0x56a1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0120, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0388) {
    const struct CPU_State initial_cpu = {.pc=0x32b9, .a=0x2f, .x=0xc7, .y=0x0f, .sp=0x38, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x01c7, .value=0xf2}, {.addr=0x32b9, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x32ba, .a=0xff, .x=0xc7, .y=0x0f, .sp=0x38, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x01c7, .value=0xf2}, {.addr=0x32b9, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x32b9, .value=0x06, .type=IO_READ},
        {.addr=0x32ba, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c7, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0389) {
    const struct CPU_State initial_cpu = {.pc=0x73ed, .a=0xac, .x=0x5e, .y=0xdd, .sp=0xe8, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x005e, .value=0xdb}, {.addr=0x73ed, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x73ee, .a=0xff, .x=0x5e, .y=0xdd, .sp=0xe8, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x005e, .value=0xdb}, {.addr=0x73ed, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x73ed, .value=0x06, .type=IO_READ},
        {.addr=0x73ee, .value=DUMMY, .type=IO_READ},
        {.addr=0x005e, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_038A) {
    const struct CPU_State initial_cpu = {.pc=0xa945, .a=0xe9, .x=0x96, .y=0x01, .sp=0x78, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x0096, .value=0x05}, {.addr=0xa945, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xa946, .a=0xed, .x=0x96, .y=0x01, .sp=0x78, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0096, .value=0x05}, {.addr=0xa945, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xa945, .value=0x06, .type=IO_READ},
        {.addr=0xa946, .value=DUMMY, .type=IO_READ},
        {.addr=0x0096, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_038B) {
    const struct CPU_State initial_cpu = {.pc=0xe2a0, .a=0x5b, .x=0x79, .y=0x0b, .sp=0xf8, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x0179, .value=0x94}, {.addr=0xe2a0, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xe2a1, .a=0xdf, .x=0x79, .y=0x0b, .sp=0xf8, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x0179, .value=0x94}, {.addr=0xe2a0, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xe2a0, .value=0x06, .type=IO_READ},
        {.addr=0xe2a1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0179, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_038C) {
    const struct CPU_State initial_cpu = {.pc=0x5cbc, .a=0xf8, .x=0x3e, .y=0x7f, .sp=0x9c, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x013e, .value=0xcf}, {.addr=0x5cbc, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x5cbd, .a=0xff, .x=0x3e, .y=0x7f, .sp=0x9c, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x013e, .value=0xcf}, {.addr=0x5cbc, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x5cbc, .value=0x06, .type=IO_READ},
        {.addr=0x5cbd, .value=DUMMY, .type=IO_READ},
        {.addr=0x013e, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_038D) {
    const struct CPU_State initial_cpu = {.pc=0xd485, .a=0x16, .x=0xd2, .y=0xcb, .sp=0x8b, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x01d2, .value=0x7e}, {.addr=0xd485, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xd486, .a=0x7e, .x=0xd2, .y=0xcb, .sp=0x8b, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x01d2, .value=0x7e}, {.addr=0xd485, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xd485, .value=0x06, .type=IO_READ},
        {.addr=0xd486, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d2, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_038E) {
    const struct CPU_State initial_cpu = {.pc=0x4022, .a=0xd7, .x=0x2c, .y=0x98, .sp=0x4a, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x012c, .value=0x4c}, {.addr=0x4022, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x4023, .a=0xdf, .x=0x2c, .y=0x98, .sp=0x4a, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x012c, .value=0x4c}, {.addr=0x4022, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x4022, .value=0x06, .type=IO_READ},
        {.addr=0x4023, .value=DUMMY, .type=IO_READ},
        {.addr=0x012c, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_038F) {
    const struct CPU_State initial_cpu = {.pc=0x7c7b, .a=0xb8, .x=0x2e, .y=0x1d, .sp=0xf0, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x002e, .value=0x7f}, {.addr=0x7c7b, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x7c7c, .a=0xff, .x=0x2e, .y=0x1d, .sp=0xf0, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x002e, .value=0x7f}, {.addr=0x7c7b, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x7c7b, .value=0x06, .type=IO_READ},
        {.addr=0x7c7c, .value=DUMMY, .type=IO_READ},
        {.addr=0x002e, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0390) {
    const struct CPU_State initial_cpu = {.pc=0x1a2c, .a=0x42, .x=0x0a, .y=0x5e, .sp=0x80, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x000a, .value=0xb1}, {.addr=0x1a2c, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x1a2d, .a=0xf3, .x=0x0a, .y=0x5e, .sp=0x80, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x000a, .value=0xb1}, {.addr=0x1a2c, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x1a2c, .value=0x06, .type=IO_READ},
        {.addr=0x1a2d, .value=DUMMY, .type=IO_READ},
        {.addr=0x000a, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0391) {
    const struct CPU_State initial_cpu = {.pc=0x0fb6, .a=0x02, .x=0x49, .y=0xf7, .sp=0xa6, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x0149, .value=0xc6}, {.addr=0x0fb6, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x0fb7, .a=0xc6, .x=0x49, .y=0xf7, .sp=0xa6, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x0149, .value=0xc6}, {.addr=0x0fb6, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x0fb6, .value=0x06, .type=IO_READ},
        {.addr=0x0fb7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0149, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0392) {
    const struct CPU_State initial_cpu = {.pc=0x70f4, .a=0xdc, .x=0xdd, .y=0x50, .sp=0x9d, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x01dd, .value=0x3e}, {.addr=0x70f4, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x70f5, .a=0xfe, .x=0xdd, .y=0x50, .sp=0x9d, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x01dd, .value=0x3e}, {.addr=0x70f4, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x70f4, .value=0x06, .type=IO_READ},
        {.addr=0x70f5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dd, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0393) {
    const struct CPU_State initial_cpu = {.pc=0x4969, .a=0xf0, .x=0x4b, .y=0x7e, .sp=0x53, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x014b, .value=0xd7}, {.addr=0x4969, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x496a, .a=0xf7, .x=0x4b, .y=0x7e, .sp=0x53, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x014b, .value=0xd7}, {.addr=0x4969, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x4969, .value=0x06, .type=IO_READ},
        {.addr=0x496a, .value=DUMMY, .type=IO_READ},
        {.addr=0x014b, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0394) {
    const struct CPU_State initial_cpu = {.pc=0x82f9, .a=0xef, .x=0xc8, .y=0xeb, .sp=0xd4, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x01c8, .value=0x70}, {.addr=0x82f9, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x82fa, .a=0xff, .x=0xc8, .y=0xeb, .sp=0xd4, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x01c8, .value=0x70}, {.addr=0x82f9, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x82f9, .value=0x06, .type=IO_READ},
        {.addr=0x82fa, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c8, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0395) {
    const struct CPU_State initial_cpu = {.pc=0xf072, .a=0xd7, .x=0x64, .y=0xa3, .sp=0xbc, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0xa4}, {.addr=0xf072, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xf073, .a=0xf7, .x=0x64, .y=0xa3, .sp=0xbc, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0xa4}, {.addr=0xf072, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xf072, .value=0x06, .type=IO_READ},
        {.addr=0xf073, .value=DUMMY, .type=IO_READ},
        {.addr=0x0164, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0396) {
    const struct CPU_State initial_cpu = {.pc=0xe3d3, .a=0x1a, .x=0xaf, .y=0xc6, .sp=0x24, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x00af, .value=0x48}, {.addr=0xe3d3, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xe3d4, .a=0x5a, .x=0xaf, .y=0xc6, .sp=0x24, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x00af, .value=0x48}, {.addr=0xe3d3, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xe3d3, .value=0x06, .type=IO_READ},
        {.addr=0xe3d4, .value=DUMMY, .type=IO_READ},
        {.addr=0x00af, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0397) {
    const struct CPU_State initial_cpu = {.pc=0xe0cb, .a=0x74, .x=0x90, .y=0x08, .sp=0xad, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x0190, .value=0xf0}, {.addr=0xe0cb, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xe0cc, .a=0xf4, .x=0x90, .y=0x08, .sp=0xad, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x0190, .value=0xf0}, {.addr=0xe0cb, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xe0cb, .value=0x06, .type=IO_READ},
        {.addr=0xe0cc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0190, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0398) {
    const struct CPU_State initial_cpu = {.pc=0xff24, .a=0x51, .x=0xa0, .y=0xad, .sp=0x00, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x00a0, .value=0x2d}, {.addr=0xff24, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xff25, .a=0x7d, .x=0xa0, .y=0xad, .sp=0x00, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x00a0, .value=0x2d}, {.addr=0xff24, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xff24, .value=0x06, .type=IO_READ},
        {.addr=0xff25, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a0, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_0399) {
    const struct CPU_State initial_cpu = {.pc=0xb63c, .a=0x4a, .x=0x87, .y=0x3f, .sp=0x74, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x0187, .value=0x28}, {.addr=0xb63c, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xb63d, .a=0x6a, .x=0x87, .y=0x3f, .sp=0x74, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x0187, .value=0x28}, {.addr=0xb63c, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xb63c, .value=0x06, .type=IO_READ},
        {.addr=0xb63d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0187, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_039A) {
    const struct CPU_State initial_cpu = {.pc=0xa959, .a=0x05, .x=0x73, .y=0xeb, .sp=0x93, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x0073, .value=0x1c}, {.addr=0xa959, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xa95a, .a=0x1d, .x=0x73, .y=0xeb, .sp=0x93, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x0073, .value=0x1c}, {.addr=0xa959, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xa959, .value=0x06, .type=IO_READ},
        {.addr=0xa95a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0073, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_039B) {
    const struct CPU_State initial_cpu = {.pc=0x479a, .a=0x42, .x=0xa6, .y=0x34, .sp=0xbd, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x00a6, .value=0xf2}, {.addr=0x479a, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x479b, .a=0xf2, .x=0xa6, .y=0x34, .sp=0xbd, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x00a6, .value=0xf2}, {.addr=0x479a, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x479a, .value=0x06, .type=IO_READ},
        {.addr=0x479b, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a6, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_039C) {
    const struct CPU_State initial_cpu = {.pc=0x3c4c, .a=0xd4, .x=0x90, .y=0x60, .sp=0xf5, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x0090, .value=0x43}, {.addr=0x3c4c, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x3c4d, .a=0xd7, .x=0x90, .y=0x60, .sp=0xf5, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x0090, .value=0x43}, {.addr=0x3c4c, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x3c4c, .value=0x06, .type=IO_READ},
        {.addr=0x3c4d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0090, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_039D) {
    const struct CPU_State initial_cpu = {.pc=0xde1b, .a=0x81, .x=0x62, .y=0xc3, .sp=0xe8, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x0062, .value=0xe2}, {.addr=0xde1b, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xde1c, .a=0xe3, .x=0x62, .y=0xc3, .sp=0xe8, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0062, .value=0xe2}, {.addr=0xde1b, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xde1b, .value=0x06, .type=IO_READ},
        {.addr=0xde1c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0062, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_039E) {
    const struct CPU_State initial_cpu = {.pc=0x34e1, .a=0x43, .x=0xb2, .y=0xda, .sp=0xe8, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x00b2, .value=0x7b}, {.addr=0x34e1, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x34e2, .a=0x7b, .x=0xb2, .y=0xda, .sp=0xe8, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x00b2, .value=0x7b}, {.addr=0x34e1, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x34e1, .value=0x06, .type=IO_READ},
        {.addr=0x34e2, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b2, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_039F) {
    const struct CPU_State initial_cpu = {.pc=0x02f5, .a=0x09, .x=0x58, .y=0x65, .sp=0x8d, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x0058, .value=0x1c}, {.addr=0x02f5, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x02f6, .a=0x1d, .x=0x58, .y=0x65, .sp=0x8d, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x0058, .value=0x1c}, {.addr=0x02f5, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x02f5, .value=0x06, .type=IO_READ},
        {.addr=0x02f6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0058, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03A0) {
    const struct CPU_State initial_cpu = {.pc=0xe478, .a=0xbf, .x=0xaf, .y=0x3b, .sp=0x8b, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x01af, .value=0x96}, {.addr=0xe478, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xe479, .a=0xbf, .x=0xaf, .y=0x3b, .sp=0x8b, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x01af, .value=0x96}, {.addr=0xe478, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xe478, .value=0x06, .type=IO_READ},
        {.addr=0xe479, .value=DUMMY, .type=IO_READ},
        {.addr=0x01af, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03A1) {
    const struct CPU_State initial_cpu = {.pc=0xb307, .a=0x01, .x=0x34, .y=0x5e, .sp=0x88, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x0134, .value=0x69}, {.addr=0xb307, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xb308, .a=0x69, .x=0x34, .y=0x5e, .sp=0x88, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x0134, .value=0x69}, {.addr=0xb307, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xb307, .value=0x06, .type=IO_READ},
        {.addr=0xb308, .value=DUMMY, .type=IO_READ},
        {.addr=0x0134, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03A2) {
    const struct CPU_State initial_cpu = {.pc=0xfa2c, .a=0xf4, .x=0x33, .y=0x0e, .sp=0xe1, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0x12}, {.addr=0xfa2c, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xfa2d, .a=0xf6, .x=0x33, .y=0x0e, .sp=0xe1, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0x12}, {.addr=0xfa2c, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xfa2c, .value=0x06, .type=IO_READ},
        {.addr=0xfa2d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0133, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03A3) {
    const struct CPU_State initial_cpu = {.pc=0xd264, .a=0x4f, .x=0x56, .y=0x84, .sp=0xf8, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x0156, .value=0x91}, {.addr=0xd264, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xd265, .a=0xdf, .x=0x56, .y=0x84, .sp=0xf8, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0156, .value=0x91}, {.addr=0xd264, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xd264, .value=0x06, .type=IO_READ},
        {.addr=0xd265, .value=DUMMY, .type=IO_READ},
        {.addr=0x0156, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03A4) {
    const struct CPU_State initial_cpu = {.pc=0x6ee5, .a=0x2d, .x=0x56, .y=0xa9, .sp=0x52, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x0156, .value=0x09}, {.addr=0x6ee5, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x6ee6, .a=0x2d, .x=0x56, .y=0xa9, .sp=0x52, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0156, .value=0x09}, {.addr=0x6ee5, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x6ee5, .value=0x06, .type=IO_READ},
        {.addr=0x6ee6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0156, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03A5) {
    const struct CPU_State initial_cpu = {.pc=0x5878, .a=0xf4, .x=0x3f, .y=0x75, .sp=0xac, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x013f, .value=0x11}, {.addr=0x5878, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x5879, .a=0xf5, .x=0x3f, .y=0x75, .sp=0xac, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x013f, .value=0x11}, {.addr=0x5878, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x5878, .value=0x06, .type=IO_READ},
        {.addr=0x5879, .value=DUMMY, .type=IO_READ},
        {.addr=0x013f, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03A6) {
    const struct CPU_State initial_cpu = {.pc=0xc1f2, .a=0x3c, .x=0x67, .y=0xc7, .sp=0xb4, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0xf3}, {.addr=0xc1f2, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xc1f3, .a=0xff, .x=0x67, .y=0xc7, .sp=0xb4, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0xf3}, {.addr=0xc1f2, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xc1f2, .value=0x06, .type=IO_READ},
        {.addr=0xc1f3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0167, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03A7) {
    const struct CPU_State initial_cpu = {.pc=0x97db, .a=0x45, .x=0x7e, .y=0xad, .sp=0x0c, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x007e, .value=0xd3}, {.addr=0x97db, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x97dc, .a=0xd7, .x=0x7e, .y=0xad, .sp=0x0c, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x007e, .value=0xd3}, {.addr=0x97db, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x97db, .value=0x06, .type=IO_READ},
        {.addr=0x97dc, .value=DUMMY, .type=IO_READ},
        {.addr=0x007e, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03A8) {
    const struct CPU_State initial_cpu = {.pc=0xc0ff, .a=0x28, .x=0xf6, .y=0x26, .sp=0x11, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x01f6, .value=0xf8}, {.addr=0xc0ff, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xc100, .a=0xf8, .x=0xf6, .y=0x26, .sp=0x11, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x01f6, .value=0xf8}, {.addr=0xc0ff, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xc0ff, .value=0x06, .type=IO_READ},
        {.addr=0xc100, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f6, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03A9) {
    const struct CPU_State initial_cpu = {.pc=0x76bc, .a=0xbf, .x=0x8a, .y=0xe6, .sp=0x02, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x018a, .value=0xff}, {.addr=0x76bc, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x76bd, .a=0xff, .x=0x8a, .y=0xe6, .sp=0x02, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x018a, .value=0xff}, {.addr=0x76bc, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x76bc, .value=0x06, .type=IO_READ},
        {.addr=0x76bd, .value=DUMMY, .type=IO_READ},
        {.addr=0x018a, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03AA) {
    const struct CPU_State initial_cpu = {.pc=0xf2e3, .a=0x24, .x=0xf3, .y=0x61, .sp=0xb8, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x01f3, .value=0x5a}, {.addr=0xf2e3, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xf2e4, .a=0x7e, .x=0xf3, .y=0x61, .sp=0xb8, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x01f3, .value=0x5a}, {.addr=0xf2e3, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xf2e3, .value=0x06, .type=IO_READ},
        {.addr=0xf2e4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f3, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03AB) {
    const struct CPU_State initial_cpu = {.pc=0x7702, .a=0x69, .x=0xe7, .y=0x81, .sp=0x83, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x00e7, .value=0x30}, {.addr=0x7702, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x7703, .a=0x79, .x=0xe7, .y=0x81, .sp=0x83, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x00e7, .value=0x30}, {.addr=0x7702, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x7702, .value=0x06, .type=IO_READ},
        {.addr=0x7703, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e7, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03AC) {
    const struct CPU_State initial_cpu = {.pc=0xf0f9, .a=0x91, .x=0x50, .y=0x52, .sp=0xf6, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x0150, .value=0xa2}, {.addr=0xf0f9, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xf0fa, .a=0xb3, .x=0x50, .y=0x52, .sp=0xf6, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x0150, .value=0xa2}, {.addr=0xf0f9, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xf0f9, .value=0x06, .type=IO_READ},
        {.addr=0xf0fa, .value=DUMMY, .type=IO_READ},
        {.addr=0x0150, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03AD) {
    const struct CPU_State initial_cpu = {.pc=0x20d2, .a=0xda, .x=0xcd, .y=0x4a, .sp=0xca, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x00cd, .value=0x8b}, {.addr=0x20d2, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x20d3, .a=0xdb, .x=0xcd, .y=0x4a, .sp=0xca, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x00cd, .value=0x8b}, {.addr=0x20d2, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x20d2, .value=0x06, .type=IO_READ},
        {.addr=0x20d3, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cd, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03AE) {
    const struct CPU_State initial_cpu = {.pc=0x9a86, .a=0xdc, .x=0x1b, .y=0xbb, .sp=0x79, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x001b, .value=0x09}, {.addr=0x9a86, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x9a87, .a=0xdd, .x=0x1b, .y=0xbb, .sp=0x79, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x001b, .value=0x09}, {.addr=0x9a86, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x9a86, .value=0x06, .type=IO_READ},
        {.addr=0x9a87, .value=DUMMY, .type=IO_READ},
        {.addr=0x001b, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03AF) {
    const struct CPU_State initial_cpu = {.pc=0x9bf7, .a=0x3b, .x=0xdf, .y=0x79, .sp=0x9f, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0x78}, {.addr=0x9bf7, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x9bf8, .a=0x7b, .x=0xdf, .y=0x79, .sp=0x9f, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0x78}, {.addr=0x9bf7, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x9bf7, .value=0x06, .type=IO_READ},
        {.addr=0x9bf8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01df, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03B0) {
    const struct CPU_State initial_cpu = {.pc=0x3d94, .a=0x4f, .x=0xd5, .y=0x2a, .sp=0xa7, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x00d5, .value=0x45}, {.addr=0x3d94, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x3d95, .a=0x4f, .x=0xd5, .y=0x2a, .sp=0xa7, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x00d5, .value=0x45}, {.addr=0x3d94, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x3d94, .value=0x06, .type=IO_READ},
        {.addr=0x3d95, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d5, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03B1) {
    const struct CPU_State initial_cpu = {.pc=0x6960, .a=0xe7, .x=0xa9, .y=0x98, .sp=0x78, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x00a9, .value=0xd1}, {.addr=0x6960, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x6961, .a=0xf7, .x=0xa9, .y=0x98, .sp=0x78, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x00a9, .value=0xd1}, {.addr=0x6960, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x6960, .value=0x06, .type=IO_READ},
        {.addr=0x6961, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a9, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03B2) {
    const struct CPU_State initial_cpu = {.pc=0x7310, .a=0xd1, .x=0x74, .y=0x55, .sp=0x03, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x0174, .value=0x66}, {.addr=0x7310, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x7311, .a=0xf7, .x=0x74, .y=0x55, .sp=0x03, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0174, .value=0x66}, {.addr=0x7310, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x7310, .value=0x06, .type=IO_READ},
        {.addr=0x7311, .value=DUMMY, .type=IO_READ},
        {.addr=0x0174, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03B3) {
    const struct CPU_State initial_cpu = {.pc=0x6d14, .a=0xf3, .x=0xcc, .y=0x98, .sp=0x26, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x01cc, .value=0xf0}, {.addr=0x6d14, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x6d15, .a=0xf3, .x=0xcc, .y=0x98, .sp=0x26, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x01cc, .value=0xf0}, {.addr=0x6d14, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x6d14, .value=0x06, .type=IO_READ},
        {.addr=0x6d15, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cc, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03B4) {
    const struct CPU_State initial_cpu = {.pc=0xf355, .a=0xb9, .x=0x3a, .y=0x21, .sp=0xda, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x003a, .value=0x63}, {.addr=0xf355, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xf356, .a=0xfb, .x=0x3a, .y=0x21, .sp=0xda, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x003a, .value=0x63}, {.addr=0xf355, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xf355, .value=0x06, .type=IO_READ},
        {.addr=0xf356, .value=DUMMY, .type=IO_READ},
        {.addr=0x003a, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03B5) {
    const struct CPU_State initial_cpu = {.pc=0x8b2f, .a=0x0d, .x=0x4e, .y=0x27, .sp=0x10, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x004e, .value=0x9c}, {.addr=0x8b2f, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x8b30, .a=0x9d, .x=0x4e, .y=0x27, .sp=0x10, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x004e, .value=0x9c}, {.addr=0x8b2f, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x8b2f, .value=0x06, .type=IO_READ},
        {.addr=0x8b30, .value=DUMMY, .type=IO_READ},
        {.addr=0x004e, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03B6) {
    const struct CPU_State initial_cpu = {.pc=0xc258, .a=0x80, .x=0x4b, .y=0xb4, .sp=0x8d, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x004b, .value=0x85}, {.addr=0xc258, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xc259, .a=0x85, .x=0x4b, .y=0xb4, .sp=0x8d, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x004b, .value=0x85}, {.addr=0xc258, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xc258, .value=0x06, .type=IO_READ},
        {.addr=0xc259, .value=DUMMY, .type=IO_READ},
        {.addr=0x004b, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03B7) {
    const struct CPU_State initial_cpu = {.pc=0x12a6, .a=0x1d, .x=0x09, .y=0x34, .sp=0xa7, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x0109, .value=0xb5}, {.addr=0x12a6, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x12a7, .a=0xbd, .x=0x09, .y=0x34, .sp=0xa7, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x0109, .value=0xb5}, {.addr=0x12a6, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x12a6, .value=0x06, .type=IO_READ},
        {.addr=0x12a7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0109, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03B8) {
    const struct CPU_State initial_cpu = {.pc=0xafb5, .a=0xce, .x=0x93, .y=0x67, .sp=0xa2, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x0093, .value=0x14}, {.addr=0xafb5, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xafb6, .a=0xde, .x=0x93, .y=0x67, .sp=0xa2, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x0093, .value=0x14}, {.addr=0xafb5, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xafb5, .value=0x06, .type=IO_READ},
        {.addr=0xafb6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0093, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03B9) {
    const struct CPU_State initial_cpu = {.pc=0xb046, .a=0xd1, .x=0x88, .y=0xb9, .sp=0xaa, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x0188, .value=0x68}, {.addr=0xb046, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xb047, .a=0xf9, .x=0x88, .y=0xb9, .sp=0xaa, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x0188, .value=0x68}, {.addr=0xb046, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xb046, .value=0x06, .type=IO_READ},
        {.addr=0xb047, .value=DUMMY, .type=IO_READ},
        {.addr=0x0188, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03BA) {
    const struct CPU_State initial_cpu = {.pc=0x7a7d, .a=0x69, .x=0xa7, .y=0x0c, .sp=0xe8, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x00a7, .value=0x33}, {.addr=0x7a7d, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x7a7e, .a=0x7b, .x=0xa7, .y=0x0c, .sp=0xe8, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x00a7, .value=0x33}, {.addr=0x7a7d, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x7a7d, .value=0x06, .type=IO_READ},
        {.addr=0x7a7e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a7, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03BB) {
    const struct CPU_State initial_cpu = {.pc=0xbebd, .a=0x87, .x=0x90, .y=0x00, .sp=0x51, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x0090, .value=0x32}, {.addr=0xbebd, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xbebe, .a=0xb7, .x=0x90, .y=0x00, .sp=0x51, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x0090, .value=0x32}, {.addr=0xbebd, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xbebd, .value=0x06, .type=IO_READ},
        {.addr=0xbebe, .value=DUMMY, .type=IO_READ},
        {.addr=0x0090, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03BC) {
    const struct CPU_State initial_cpu = {.pc=0x903d, .a=0xa3, .x=0x78, .y=0x88, .sp=0xa3, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x0178, .value=0xd5}, {.addr=0x903d, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x903e, .a=0xf7, .x=0x78, .y=0x88, .sp=0xa3, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x0178, .value=0xd5}, {.addr=0x903d, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x903d, .value=0x06, .type=IO_READ},
        {.addr=0x903e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0178, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03BD) {
    const struct CPU_State initial_cpu = {.pc=0x56df, .a=0x0f, .x=0xa0, .y=0xb0, .sp=0xa2, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x01a0, .value=0x18}, {.addr=0x56df, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x56e0, .a=0x1f, .x=0xa0, .y=0xb0, .sp=0xa2, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x01a0, .value=0x18}, {.addr=0x56df, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x56df, .value=0x06, .type=IO_READ},
        {.addr=0x56e0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a0, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03BF) {
    const struct CPU_State initial_cpu = {.pc=0xec4f, .a=0x1d, .x=0xa8, .y=0x70, .sp=0x7d, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x00a8, .value=0xca}, {.addr=0xec4f, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xec50, .a=0xdf, .x=0xa8, .y=0x70, .sp=0x7d, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x00a8, .value=0xca}, {.addr=0xec4f, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xec4f, .value=0x06, .type=IO_READ},
        {.addr=0xec50, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a8, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03C0) {
    const struct CPU_State initial_cpu = {.pc=0x1294, .a=0x20, .x=0x31, .y=0xa7, .sp=0xda, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x0031, .value=0x4a}, {.addr=0x1294, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x1295, .a=0x6a, .x=0x31, .y=0xa7, .sp=0xda, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0031, .value=0x4a}, {.addr=0x1294, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x1294, .value=0x06, .type=IO_READ},
        {.addr=0x1295, .value=DUMMY, .type=IO_READ},
        {.addr=0x0031, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03C1) {
    const struct CPU_State initial_cpu = {.pc=0x0a31, .a=0xc4, .x=0x14, .y=0x5f, .sp=0xa1, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x0114, .value=0x65}, {.addr=0x0a31, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x0a32, .a=0xe5, .x=0x14, .y=0x5f, .sp=0xa1, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x0114, .value=0x65}, {.addr=0x0a31, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x0a31, .value=0x06, .type=IO_READ},
        {.addr=0x0a32, .value=DUMMY, .type=IO_READ},
        {.addr=0x0114, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03C3) {
    const struct CPU_State initial_cpu = {.pc=0xbffb, .a=0x3a, .x=0x2f, .y=0x16, .sp=0x19, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x012f, .value=0x49}, {.addr=0xbffb, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xbffc, .a=0x7b, .x=0x2f, .y=0x16, .sp=0x19, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x012f, .value=0x49}, {.addr=0xbffb, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xbffb, .value=0x06, .type=IO_READ},
        {.addr=0xbffc, .value=DUMMY, .type=IO_READ},
        {.addr=0x012f, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03C4) {
    const struct CPU_State initial_cpu = {.pc=0xc105, .a=0xc0, .x=0x4e, .y=0x33, .sp=0x73, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0xa4}, {.addr=0xc105, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xc106, .a=0xe4, .x=0x4e, .y=0x33, .sp=0x73, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0xa4}, {.addr=0xc105, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xc105, .value=0x06, .type=IO_READ},
        {.addr=0xc106, .value=DUMMY, .type=IO_READ},
        {.addr=0x014e, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03C5) {
    const struct CPU_State initial_cpu = {.pc=0xab2e, .a=0x39, .x=0xc5, .y=0x84, .sp=0x64, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x00c5, .value=0xbd}, {.addr=0xab2e, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xab2f, .a=0xbd, .x=0xc5, .y=0x84, .sp=0x64, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x00c5, .value=0xbd}, {.addr=0xab2e, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xab2e, .value=0x06, .type=IO_READ},
        {.addr=0xab2f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c5, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03C6) {
    const struct CPU_State initial_cpu = {.pc=0x841c, .a=0xe1, .x=0x71, .y=0xab, .sp=0x1f, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x0071, .value=0xd3}, {.addr=0x841c, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x841d, .a=0xf3, .x=0x71, .y=0xab, .sp=0x1f, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x0071, .value=0xd3}, {.addr=0x841c, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x841c, .value=0x06, .type=IO_READ},
        {.addr=0x841d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0071, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03C7) {
    const struct CPU_State initial_cpu = {.pc=0x82e6, .a=0x7c, .x=0x21, .y=0x85, .sp=0x25, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x0021, .value=0xcc}, {.addr=0x82e6, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x82e7, .a=0xfc, .x=0x21, .y=0x85, .sp=0x25, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x0021, .value=0xcc}, {.addr=0x82e6, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x82e6, .value=0x06, .type=IO_READ},
        {.addr=0x82e7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0021, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03C8) {
    const struct CPU_State initial_cpu = {.pc=0x59d6, .a=0x82, .x=0xc2, .y=0x72, .sp=0x28, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x01c2, .value=0xed}, {.addr=0x59d6, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x59d7, .a=0xef, .x=0xc2, .y=0x72, .sp=0x28, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x01c2, .value=0xed}, {.addr=0x59d6, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x59d6, .value=0x06, .type=IO_READ},
        {.addr=0x59d7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c2, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03C9) {
    const struct CPU_State initial_cpu = {.pc=0xc379, .a=0x48, .x=0x86, .y=0xa7, .sp=0x04, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x0186, .value=0xbe}, {.addr=0xc379, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xc37a, .a=0xfe, .x=0x86, .y=0xa7, .sp=0x04, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0186, .value=0xbe}, {.addr=0xc379, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xc379, .value=0x06, .type=IO_READ},
        {.addr=0xc37a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0186, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03CA) {
    const struct CPU_State initial_cpu = {.pc=0x8043, .a=0x90, .x=0x06, .y=0x2c, .sp=0x57, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0x07}, {.addr=0x8043, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x8044, .a=0x97, .x=0x06, .y=0x2c, .sp=0x57, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0x07}, {.addr=0x8043, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x8043, .value=0x06, .type=IO_READ},
        {.addr=0x8044, .value=DUMMY, .type=IO_READ},
        {.addr=0x0106, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03CB) {
    const struct CPU_State initial_cpu = {.pc=0x92ed, .a=0xe1, .x=0x9a, .y=0x6a, .sp=0xa7, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x009a, .value=0x16}, {.addr=0x92ed, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x92ee, .a=0xf7, .x=0x9a, .y=0x6a, .sp=0xa7, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x009a, .value=0x16}, {.addr=0x92ed, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x92ed, .value=0x06, .type=IO_READ},
        {.addr=0x92ee, .value=DUMMY, .type=IO_READ},
        {.addr=0x009a, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03CC) {
    const struct CPU_State initial_cpu = {.pc=0x0919, .a=0xfe, .x=0x3e, .y=0x09, .sp=0x7e, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x003e, .value=0x51}, {.addr=0x0919, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x091a, .a=0xff, .x=0x3e, .y=0x09, .sp=0x7e, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x003e, .value=0x51}, {.addr=0x0919, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x0919, .value=0x06, .type=IO_READ},
        {.addr=0x091a, .value=DUMMY, .type=IO_READ},
        {.addr=0x003e, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03CD) {
    const struct CPU_State initial_cpu = {.pc=0x27db, .a=0xcb, .x=0xde, .y=0x27, .sp=0x77, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x01de, .value=0xad}, {.addr=0x27db, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x27dc, .a=0xef, .x=0xde, .y=0x27, .sp=0x77, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x01de, .value=0xad}, {.addr=0x27db, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x27db, .value=0x06, .type=IO_READ},
        {.addr=0x27dc, .value=DUMMY, .type=IO_READ},
        {.addr=0x01de, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03CE) {
    const struct CPU_State initial_cpu = {.pc=0x78bc, .a=0x55, .x=0x0c, .y=0x1c, .sp=0x28, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x000c, .value=0x04}, {.addr=0x78bc, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x78bd, .a=0x55, .x=0x0c, .y=0x1c, .sp=0x28, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x000c, .value=0x04}, {.addr=0x78bc, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x78bc, .value=0x06, .type=IO_READ},
        {.addr=0x78bd, .value=DUMMY, .type=IO_READ},
        {.addr=0x000c, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03D0) {
    const struct CPU_State initial_cpu = {.pc=0x3f0b, .a=0x5b, .x=0x3b, .y=0x43, .sp=0x2d, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x003b, .value=0xba}, {.addr=0x3f0b, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x3f0c, .a=0xfb, .x=0x3b, .y=0x43, .sp=0x2d, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x003b, .value=0xba}, {.addr=0x3f0b, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x3f0b, .value=0x06, .type=IO_READ},
        {.addr=0x3f0c, .value=DUMMY, .type=IO_READ},
        {.addr=0x003b, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03D1) {
    const struct CPU_State initial_cpu = {.pc=0xbe11, .a=0x23, .x=0x70, .y=0x90, .sp=0x86, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x0070, .value=0x94}, {.addr=0xbe11, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xbe12, .a=0xb7, .x=0x70, .y=0x90, .sp=0x86, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x0070, .value=0x94}, {.addr=0xbe11, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xbe11, .value=0x06, .type=IO_READ},
        {.addr=0xbe12, .value=DUMMY, .type=IO_READ},
        {.addr=0x0070, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03D2) {
    const struct CPU_State initial_cpu = {.pc=0xbc3a, .a=0x22, .x=0x05, .y=0x9c, .sp=0x4e, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x0105, .value=0x83}, {.addr=0xbc3a, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xbc3b, .a=0xa3, .x=0x05, .y=0x9c, .sp=0x4e, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x0105, .value=0x83}, {.addr=0xbc3a, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xbc3a, .value=0x06, .type=IO_READ},
        {.addr=0xbc3b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0105, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03D3) {
    const struct CPU_State initial_cpu = {.pc=0xd9a8, .a=0xb1, .x=0x80, .y=0xb0, .sp=0x71, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0xf7}, {.addr=0xd9a8, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xd9a9, .a=0xf7, .x=0x80, .y=0xb0, .sp=0x71, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0xf7}, {.addr=0xd9a8, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xd9a8, .value=0x06, .type=IO_READ},
        {.addr=0xd9a9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0180, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03D4) {
    const struct CPU_State initial_cpu = {.pc=0x0379, .a=0x06, .x=0xf6, .y=0xa4, .sp=0x65, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x01f6, .value=0x3a}, {.addr=0x0379, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x037a, .a=0x3e, .x=0xf6, .y=0xa4, .sp=0x65, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x01f6, .value=0x3a}, {.addr=0x0379, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x0379, .value=0x06, .type=IO_READ},
        {.addr=0x037a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f6, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03D5) {
    const struct CPU_State initial_cpu = {.pc=0x3992, .a=0xa5, .x=0x86, .y=0x70, .sp=0x57, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x0086, .value=0x57}, {.addr=0x3992, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x3993, .a=0xf7, .x=0x86, .y=0x70, .sp=0x57, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x0086, .value=0x57}, {.addr=0x3992, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x3992, .value=0x06, .type=IO_READ},
        {.addr=0x3993, .value=DUMMY, .type=IO_READ},
        {.addr=0x0086, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03D6) {
    const struct CPU_State initial_cpu = {.pc=0xfd99, .a=0x89, .x=0x56, .y=0x88, .sp=0x90, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x0056, .value=0xd8}, {.addr=0xfd99, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xfd9a, .a=0xd9, .x=0x56, .y=0x88, .sp=0x90, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x0056, .value=0xd8}, {.addr=0xfd99, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xfd99, .value=0x06, .type=IO_READ},
        {.addr=0xfd9a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0056, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03D7) {
    const struct CPU_State initial_cpu = {.pc=0xcbb5, .a=0x99, .x=0x93, .y=0x36, .sp=0x42, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x0093, .value=0x02}, {.addr=0xcbb5, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xcbb6, .a=0x9b, .x=0x93, .y=0x36, .sp=0x42, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0093, .value=0x02}, {.addr=0xcbb5, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xcbb5, .value=0x06, .type=IO_READ},
        {.addr=0xcbb6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0093, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03D8) {
    const struct CPU_State initial_cpu = {.pc=0x4108, .a=0xc7, .x=0xcf, .y=0x5c, .sp=0x1e, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x00cf, .value=0x27}, {.addr=0x4108, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x4109, .a=0xe7, .x=0xcf, .y=0x5c, .sp=0x1e, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x00cf, .value=0x27}, {.addr=0x4108, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x4108, .value=0x06, .type=IO_READ},
        {.addr=0x4109, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cf, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03D9) {
    const struct CPU_State initial_cpu = {.pc=0x931a, .a=0x29, .x=0xc4, .y=0x22, .sp=0x06, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x00c4, .value=0x61}, {.addr=0x931a, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x931b, .a=0x69, .x=0xc4, .y=0x22, .sp=0x06, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x00c4, .value=0x61}, {.addr=0x931a, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x931a, .value=0x06, .type=IO_READ},
        {.addr=0x931b, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c4, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03DA) {
    const struct CPU_State initial_cpu = {.pc=0x9e38, .a=0x2f, .x=0x21, .y=0xb1, .sp=0x7f, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x0121, .value=0xb9}, {.addr=0x9e38, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x9e39, .a=0xbf, .x=0x21, .y=0xb1, .sp=0x7f, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0121, .value=0xb9}, {.addr=0x9e38, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x9e38, .value=0x06, .type=IO_READ},
        {.addr=0x9e39, .value=DUMMY, .type=IO_READ},
        {.addr=0x0121, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03DB) {
    const struct CPU_State initial_cpu = {.pc=0xe2d0, .a=0x08, .x=0xc5, .y=0x5a, .sp=0x78, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x00c5, .value=0x79}, {.addr=0xe2d0, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xe2d1, .a=0x79, .x=0xc5, .y=0x5a, .sp=0x78, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x00c5, .value=0x79}, {.addr=0xe2d0, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xe2d0, .value=0x06, .type=IO_READ},
        {.addr=0xe2d1, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c5, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03DC) {
    const struct CPU_State initial_cpu = {.pc=0xd465, .a=0x7d, .x=0xc8, .y=0x6d, .sp=0x08, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x01c8, .value=0x04}, {.addr=0xd465, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xd466, .a=0x7d, .x=0xc8, .y=0x6d, .sp=0x08, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x01c8, .value=0x04}, {.addr=0xd465, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xd465, .value=0x06, .type=IO_READ},
        {.addr=0xd466, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c8, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03DD) {
    const struct CPU_State initial_cpu = {.pc=0xe75c, .a=0x96, .x=0xe4, .y=0xf6, .sp=0xa5, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x00e4, .value=0x31}, {.addr=0xe75c, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xe75d, .a=0xb7, .x=0xe4, .y=0xf6, .sp=0xa5, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x00e4, .value=0x31}, {.addr=0xe75c, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xe75c, .value=0x06, .type=IO_READ},
        {.addr=0xe75d, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e4, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03DE) {
    const struct CPU_State initial_cpu = {.pc=0xe12e, .a=0xef, .x=0xd0, .y=0x90, .sp=0x0a, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x01d0, .value=0x75}, {.addr=0xe12e, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xe12f, .a=0xff, .x=0xd0, .y=0x90, .sp=0x0a, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x01d0, .value=0x75}, {.addr=0xe12e, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xe12e, .value=0x06, .type=IO_READ},
        {.addr=0xe12f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d0, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03DF) {
    const struct CPU_State initial_cpu = {.pc=0x9065, .a=0xc4, .x=0xbd, .y=0xf3, .sp=0x58, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0x00}, {.addr=0x9065, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x9066, .a=0xc4, .x=0xbd, .y=0xf3, .sp=0x58, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0x00}, {.addr=0x9065, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x9065, .value=0x06, .type=IO_READ},
        {.addr=0x9066, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bd, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03E0) {
    const struct CPU_State initial_cpu = {.pc=0x66b4, .a=0x30, .x=0xb8, .y=0xb1, .sp=0x03, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0x1d}, {.addr=0x66b4, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x66b5, .a=0x3d, .x=0xb8, .y=0xb1, .sp=0x03, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0x1d}, {.addr=0x66b4, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x66b4, .value=0x06, .type=IO_READ},
        {.addr=0x66b5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b8, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03E1) {
    const struct CPU_State initial_cpu = {.pc=0xc98c, .a=0x1a, .x=0xef, .y=0x6d, .sp=0x67, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x00ef, .value=0x4d}, {.addr=0xc98c, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xc98d, .a=0x5f, .x=0xef, .y=0x6d, .sp=0x67, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x00ef, .value=0x4d}, {.addr=0xc98c, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xc98c, .value=0x06, .type=IO_READ},
        {.addr=0xc98d, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ef, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03E2) {
    const struct CPU_State initial_cpu = {.pc=0x7e4a, .a=0x6e, .x=0xad, .y=0xa4, .sp=0x7c, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x01ad, .value=0xf0}, {.addr=0x7e4a, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x7e4b, .a=0xfe, .x=0xad, .y=0xa4, .sp=0x7c, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x01ad, .value=0xf0}, {.addr=0x7e4a, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x7e4a, .value=0x06, .type=IO_READ},
        {.addr=0x7e4b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ad, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03E3) {
    const struct CPU_State initial_cpu = {.pc=0xb47e, .a=0xd9, .x=0x05, .y=0xb5, .sp=0x9a, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x0105, .value=0x33}, {.addr=0xb47e, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xb47f, .a=0xfb, .x=0x05, .y=0xb5, .sp=0x9a, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0105, .value=0x33}, {.addr=0xb47e, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xb47e, .value=0x06, .type=IO_READ},
        {.addr=0xb47f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0105, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03E4) {
    const struct CPU_State initial_cpu = {.pc=0x447e, .a=0xab, .x=0xf2, .y=0x9f, .sp=0x7a, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x01f2, .value=0xfb}, {.addr=0x447e, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x447f, .a=0xfb, .x=0xf2, .y=0x9f, .sp=0x7a, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x01f2, .value=0xfb}, {.addr=0x447e, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x447e, .value=0x06, .type=IO_READ},
        {.addr=0x447f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f2, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03E5) {
    const struct CPU_State initial_cpu = {.pc=0xa539, .a=0xda, .x=0xb3, .y=0xa5, .sp=0x8b, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0x63}, {.addr=0xa539, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xa53a, .a=0xfb, .x=0xb3, .y=0xa5, .sp=0x8b, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0x63}, {.addr=0xa539, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xa539, .value=0x06, .type=IO_READ},
        {.addr=0xa53a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b3, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03E6) {
    const struct CPU_State initial_cpu = {.pc=0x52a6, .a=0x45, .x=0x1b, .y=0x0f, .sp=0x38, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0x5a}, {.addr=0x52a6, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x52a7, .a=0x5f, .x=0x1b, .y=0x0f, .sp=0x38, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0x5a}, {.addr=0x52a6, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x52a6, .value=0x06, .type=IO_READ},
        {.addr=0x52a7, .value=DUMMY, .type=IO_READ},
        {.addr=0x011b, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_06, _06_03E7) {
    const struct CPU_State initial_cpu = {.pc=0x0b8a, .a=0xe7, .x=0x31, .y=0x1a, .sp=0x37, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x0031, .value=0x1a}, {.addr=0x0b8a, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x0b8b, .a=0xff, .x=0x31, .y=0x1a, .sp=0x37, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x0031, .value=0x1a}, {.addr=0x0b8a, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x0b8a, .value=0x06, .type=IO_READ},
        {.addr=0x0b8b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0031, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("06 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
